#ifndef HIPZFP_ENCODE2_HIPH
#define HIPZFP_ENCODE2_HIPH

#include "hipZFP.h"
#include "shared.h"
#include "encode.h"
#include "ErrorCheck.h"
#include "type_info.h"

namespace hipZFP
{

template<typename Scalar> 
__device__ __host__ inline 
void gather_partial2(Scalar* q, const Scalar* p, int nx, int ny, int sx, int sy)
{
  uint x, y;
  for (y = 0; y < 4; y++)
    if (y < ny) {
      for (x = 0; x < 4; x++)
        if (x < nx) {
          q[4 * y + x] = *p;//[x * sx];
          p += sx;
        }
      pad_block(q + 4 * y, nx, 1);
      p += sy - nx * sx;
    }
  for (x = 0; x < 4; x++)
    pad_block(q + x, ny, 4);
}

template<typename Scalar> 
__device__ __host__ inline 
void gather2(Scalar* q, const Scalar* p, int sx, int sy)
{
  uint x, y;
  for (y = 0; y < 4; y++, p += sy - 4 * sx)
    for (x = 0; x < 4; x++, p += sx)
      *q++ = *p;
}

template <class Scalar, bool variable_rate>
__global__ void
hipEncode2(const int minbits,
            const int maxbits,
            const int maxprec,
            const int minexp,
            const Scalar *scalars,
            Word *stream,
            ushort *block_bits,
            const uint2 dims,
            const int2 stride,
            const uint2 padded_dims,
            const uint tot_blocks)
{

  typedef unsigned long long int ull;
  typedef long long int ll;
  const ull blockId = blockIdx.x +
                      blockIdx.y * gridDim.x +
                      gridDim.x * gridDim.y * blockIdx.z;

  // each thread gets a block so the block index is 
  // the global thread index
  const uint block_idx = blockId * blockDim.x + threadIdx.x;

  if(block_idx >= tot_blocks)
  {
    // we can't launch the exact number of blocks
    // so just exit if this isn't real
    return;
  }

  uint2 block_dims;
  block_dims.x = padded_dims.x >> 2; 
  block_dims.y = padded_dims.y >> 2; 

  // logical pos in 3d array
  uint2 block;
  block.x = (block_idx % block_dims.x) * 4; 
  block.y = ((block_idx/ block_dims.x) % block_dims.y) * 4; 

  const ll offset = (ll)block.x * stride.x + (ll)block.y * stride.y; 

  Scalar fblock[ZFP_2D_BLOCK_SIZE]; 

  bool partial = false;
  if(block.x + 4 > dims.x) partial = true;
  if(block.y + 4 > dims.y) partial = true;
 
  if(partial) 
  {
    const uint nx = block.x + 4 > dims.x ? dims.x - block.x : 4;
    const uint ny = block.y + 4 > dims.y ? dims.y - block.y : 4;
    gather_partial2(fblock, scalars + offset, nx, ny, stride.x, stride.y);

  }
  else
  {
    gather2(fblock, scalars + offset, stride.x, stride.y);
  }

  uint bits = zfp_encode_block<Scalar, ZFP_2D_BLOCK_SIZE>(fblock, minbits, maxbits, maxprec,
                                                          minexp, block_idx, stream);
  if (variable_rate)
    block_bits[block_idx] = bits;
}

//
// Launch the encode kernel
//
template<class Scalar, bool variable_rate>
size_t encode2launch(uint2 dims, 
                     int2 stride,
                     const Scalar *d_data,
                     Word *stream,
                     ushort *d_block_bits,
                     const int minbits,
                     const int maxbits,
                     const int maxprec,
                     const int minexp)
{
  const int hip_block_size = 128;
  dim3 block_size = dim3(hip_block_size, 1, 1);

  uint2 zfp_pad(dims); 
  if(zfp_pad.x % 4 != 0) zfp_pad.x += 4 - dims.x % 4;
  if(zfp_pad.y % 4 != 0) zfp_pad.y += 4 - dims.y % 4;

  const uint zfp_blocks = (zfp_pad.x * zfp_pad.y) / 16; 

  //
  // we need to ensure that we launch a multiple of the 
  // hip block size
  //
  int block_pad = 0; 
  if(zfp_blocks % hip_block_size != 0)
  {
    block_pad = hip_block_size - zfp_blocks % hip_block_size; 
  }

  size_t total_blocks = block_pad + zfp_blocks;

  dim3 grid_size = calhiplate_grid_size(total_blocks, hip_block_size);

  //
  size_t stream_bytes = calc_device_mem2d(zfp_pad, maxbits);
  // ensure we have zeros
  hipMemset(stream, 0, stream_bytes);

#ifdef HIP_ZFP_RATE_PRINT
  hipEvent_t start, stop;
  hipEventCreate(&start);
  hipEventCreate(&stop);
  hipEventRecord(start);
#endif

  hipEncode2<Scalar, variable_rate> <<<grid_size, block_size>>>
    (minbits,
     maxbits,
     maxprec,
     minexp,
     d_data,
     stream,
     d_block_bits,
     dims,
     stride,
     zfp_pad,
     zfp_blocks);

#ifdef HIP_ZFP_RATE_PRINT
  hipDeviceSynchronize();
  hipEventRecord(stop);
  hipEventSynchronize(stop);
  hipStreamSynchronize(0);

  float miliseconds = 0.f;
  hipEventElapsedTime(&miliseconds, start, stop);
  float seconds = miliseconds / 1000.f;
  float mb = (float(dims.x * dims.y) * sizeof(Scalar)) / (1024.f * 1024.f *1024.f);
  float rate = mb / seconds;
  printf("Encode elapsed time: %.5f (s)\n", seconds);
  printf("# encode2 rate: %.2f (GB / sec) %d\n", rate, maxbits);
#endif
  return stream_bytes;
}

template<class Scalar, bool variable_rate>
size_t encode2(uint2 dims,
               int2 stride,
               Scalar *d_data,
               Word *stream,
               ushort *d_block_bits,
               const int minbits,
               const int maxbits,
               const int maxprec,
               const int minexp)
{
  return encode2launch<Scalar, variable_rate>(dims, stride, d_data, stream, d_block_bits,
                                              minbits, maxbits, maxprec, minexp);
}
}

#endif
