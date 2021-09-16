#include "cfpheader.cpp"
#include "cfparray.h"

#include "cfparray1f.cpp"
#include "cfparray1d.cpp"
#include "cfparray2f.cpp"
#include "cfparray2d.cpp"
#include "cfparray3f.cpp"
#include "cfparray3d.cpp"
#include "cfparray4f.cpp"
#include "cfparray4d.cpp"

const cfp_api CFP_NAMESPACE = {
  // array1f
  {
    cfp_array1f_ctor_default,
    cfp_array1f_ctor,
    cfp_array1f_ctor_copy,
    cfp_array1f_ctor_header,
    cfp_array1f_dtor,

    cfp_array1f_deep_copy,

    cfp_array1f_rate,
    cfp_array1f_set_rate,
    cfp_array1f_cache_size,
    cfp_array1f_set_cache_size,
    cfp_array1f_clear_cache,
    cfp_array1f_flush_cache,
    cfp_array1f_compressed_size,
    cfp_array1f_compressed_data,
    cfp_array1f_size,
    cfp_array1f_resize,

    cfp_array1f_get_array,
    cfp_array1f_set_array,
    cfp_array1f_get_flat,
    cfp_array1f_set_flat,
    cfp_array1f_get,
    cfp_array1f_set,

    cfp_array1f_ref,
    cfp_array1f_ref_flat,

    cfp_array1f_ptr,
    cfp_array1f_ptr_flat,

    cfp_array1f_begin,
    cfp_array1f_end,

    {
      cfp_array1f_cfp_ref_array1f_get,
      cfp_array1f_cfp_ref_array1f_set,
      cfp_array1f_cfp_ref_array1f_ptr,
      cfp_array1f_cfp_ref_array1f_copy,
    },

    {
      cfp_array1f_cfp_ptr_array1f_get,
      cfp_array1f_cfp_ptr_array1f_get_at,
      cfp_array1f_cfp_ptr_array1f_set,
      cfp_array1f_cfp_ptr_array1f_set_at,
      cfp_array1f_cfp_ptr_array1f_ref,
      cfp_array1f_cfp_ptr_array1f_ref_at,
      cfp_array1f_cfp_ptr_array1f_lt,
      cfp_array1f_cfp_ptr_array1f_gt,
      cfp_array1f_cfp_ptr_array1f_leq,
      cfp_array1f_cfp_ptr_array1f_geq,
      cfp_array1f_cfp_ptr_array1f_eq,
      cfp_array1f_cfp_ptr_array1f_neq,
      cfp_array1f_cfp_ptr_array1f_distance,
      cfp_array1f_cfp_ptr_array1f_next,
      cfp_array1f_cfp_ptr_array1f_prev,
      cfp_array1f_cfp_ptr_array1f_inc,
      cfp_array1f_cfp_ptr_array1f_dec,
    },

    {
      cfp_iter_array1f_get,
      cfp_iter_array1f_get_at,
      cfp_iter_array1f_set,
      cfp_iter_array1f_set_at,
      cfp_iter_array1f_ref,
      cfp_iter_array1f_ref_at,
      cfp_iter_array1f_ptr,
      cfp_iter_array1f_ptr_at,
      cfp_iter_array1f_i,
      cfp_iter_array1f_lt,
      cfp_iter_array1f_gt,
      cfp_iter_array1f_leq,
      cfp_iter_array1f_geq,
      cfp_iter_array1f_eq,
      cfp_iter_array1f_neq,
      cfp_iter_array1f_distance,
      cfp_iter_array1f_next,
      cfp_iter_array1f_prev,
      cfp_iter_array1f_inc,
      cfp_iter_array1f_dec,
    },

    {
      cfp_view1f_ctor,
      cfp_view1f_ctor_subset,
      cfp_view1f_dtor,
      cfp_view1f_global_x,
      cfp_view1f_size_x,
      cfp_view1f_get,
      cfp_view1f_rate,
      cfp_view1f_size,
      cfp_view1f_ref,
      cfp_view1f_begin,
      cfp_view1f_end,
    },

    {
      cfp_view1f_cfp_ref_view1f_get,
      cfp_view1f_cfp_ref_view1f_set,
      cfp_view1f_cfp_ref_view1f_ptr,
      cfp_view1f_cfp_ref_view1f_copy,
    },

    {
      cfp_view1f_cfp_ptr_view1f_get,
      cfp_view1f_cfp_ptr_view1f_get_at,
      cfp_view1f_cfp_ptr_view1f_set,
      cfp_view1f_cfp_ptr_view1f_set_at,
      cfp_view1f_cfp_ptr_view1f_ref,
      cfp_view1f_cfp_ptr_view1f_ref_at,
      cfp_view1f_cfp_ptr_view1f_lt,
      cfp_view1f_cfp_ptr_view1f_gt,
      cfp_view1f_cfp_ptr_view1f_leq,
      cfp_view1f_cfp_ptr_view1f_geq,
      cfp_view1f_cfp_ptr_view1f_eq,
      cfp_view1f_cfp_ptr_view1f_neq,
      cfp_view1f_cfp_ptr_view1f_distance,
      cfp_view1f_cfp_ptr_view1f_next,
      cfp_view1f_cfp_ptr_view1f_prev,
      cfp_view1f_cfp_ptr_view1f_inc,
      cfp_view1f_cfp_ptr_view1f_dec,
    },

    {
      cfp_iter_view1f_get,
      cfp_iter_view1f_get_at,
      cfp_iter_view1f_set,
      cfp_iter_view1f_set_at,
      cfp_iter_view1f_ref,
      cfp_iter_view1f_ref_at,
      cfp_iter_view1f_ptr,
      cfp_iter_view1f_ptr_at,
      cfp_iter_view1f_i,
      cfp_iter_view1f_lt,
      cfp_iter_view1f_gt,
      cfp_iter_view1f_leq,
      cfp_iter_view1f_geq,
      cfp_iter_view1f_eq,
      cfp_iter_view1f_neq,
      cfp_iter_view1f_distance,
      cfp_iter_view1f_next,
      cfp_iter_view1f_prev,
      cfp_iter_view1f_inc,
      cfp_iter_view1f_dec,
    },

    {
      cfp_header_ctor_array1f,
      cfp_header_ctor_buffer,
      cfp_header_dtor,
      cfp_header_scalar_type,
      cfp_header_dimensionality,
      cfp_header_size_x,
      cfp_header_size_y,
      cfp_header_size_z,
      cfp_header_size_w,
      cfp_header_rate,
      cfp_header_data,
      cfp_header_size_bytes,
    },
  },
  // array1d
  {
    cfp_array1d_ctor_default,
    cfp_array1d_ctor,
    cfp_array1d_ctor_copy,
    cfp_array1d_ctor_header,
    cfp_array1d_dtor,

    cfp_array1d_deep_copy,

    cfp_array1d_rate,
    cfp_array1d_set_rate,
    cfp_array1d_cache_size,
    cfp_array1d_set_cache_size,
    cfp_array1d_clear_cache,
    cfp_array1d_flush_cache,
    cfp_array1d_compressed_size,
    cfp_array1d_compressed_data,
    cfp_array1d_size,
    cfp_array1d_resize,

    cfp_array1d_get_array,
    cfp_array1d_set_array,
    cfp_array1d_get_flat,
    cfp_array1d_set_flat,
    cfp_array1d_get,
    cfp_array1d_set,

    cfp_array1d_ref,
    cfp_array1d_ref_flat,

    cfp_array1d_ptr,
    cfp_array1d_ptr_flat,

    cfp_array1d_begin,
    cfp_array1d_end,

    {
      cfp_array1d_cfp_ref_array1d_get,
      cfp_array1d_cfp_ref_array1d_set,
      cfp_array1d_cfp_ref_array1d_ptr,
      cfp_array1d_cfp_ref_array1d_copy,
    },

    {
      cfp_array1d_cfp_ptr_array1d_get,
      cfp_array1d_cfp_ptr_array1d_get_at,
      cfp_array1d_cfp_ptr_array1d_set,
      cfp_array1d_cfp_ptr_array1d_set_at,
      cfp_array1d_cfp_ptr_array1d_ref,
      cfp_array1d_cfp_ptr_array1d_ref_at,
      cfp_array1d_cfp_ptr_array1d_lt,
      cfp_array1d_cfp_ptr_array1d_gt,
      cfp_array1d_cfp_ptr_array1d_leq,
      cfp_array1d_cfp_ptr_array1d_geq,
      cfp_array1d_cfp_ptr_array1d_eq,
      cfp_array1d_cfp_ptr_array1d_neq,
      cfp_array1d_cfp_ptr_array1d_distance,
      cfp_array1d_cfp_ptr_array1d_next,
      cfp_array1d_cfp_ptr_array1d_prev,
      cfp_array1d_cfp_ptr_array1d_inc,
      cfp_array1d_cfp_ptr_array1d_dec,
    },

    {
      cfp_iter_array1d_get,
      cfp_iter_array1d_get_at,
      cfp_iter_array1d_set,
      cfp_iter_array1d_set_at,
      cfp_iter_array1d_ref,
      cfp_iter_array1d_ref_at,
      cfp_iter_array1d_ptr,
      cfp_iter_array1d_ptr_at,
      cfp_iter_array1d_i,
      cfp_iter_array1d_lt,
      cfp_iter_array1d_gt,
      cfp_iter_array1d_leq,
      cfp_iter_array1d_geq,
      cfp_iter_array1d_eq,
      cfp_iter_array1d_neq,
      cfp_iter_array1d_distance,
      cfp_iter_array1d_next,
      cfp_iter_array1d_prev,
      cfp_iter_array1d_inc,
      cfp_iter_array1d_dec,
    },

    {
      cfp_view1d_ctor,
      cfp_view1d_ctor_subset,
      cfp_view1d_dtor,
      cfp_view1d_global_x,
      cfp_view1d_size_x,
      cfp_view1d_get,
      cfp_view1d_rate,
      cfp_view1d_size,
      cfp_view1d_ref,
      cfp_view1d_begin,
      cfp_view1d_end,
    },

    {
      cfp_view1d_cfp_ref_view1d_get,
      cfp_view1d_cfp_ref_view1d_set,
      cfp_view1d_cfp_ref_view1d_ptr,
      cfp_view1d_cfp_ref_view1d_copy,
    },

    {
      cfp_view1d_cfp_ptr_view1d_get,
      cfp_view1d_cfp_ptr_view1d_get_at,
      cfp_view1d_cfp_ptr_view1d_set,
      cfp_view1d_cfp_ptr_view1d_set_at,
      cfp_view1d_cfp_ptr_view1d_ref,
      cfp_view1d_cfp_ptr_view1d_ref_at,
      cfp_view1d_cfp_ptr_view1d_lt,
      cfp_view1d_cfp_ptr_view1d_gt,
      cfp_view1d_cfp_ptr_view1d_leq,
      cfp_view1d_cfp_ptr_view1d_geq,
      cfp_view1d_cfp_ptr_view1d_eq,
      cfp_view1d_cfp_ptr_view1d_neq,
      cfp_view1d_cfp_ptr_view1d_distance,
      cfp_view1d_cfp_ptr_view1d_next,
      cfp_view1d_cfp_ptr_view1d_prev,
      cfp_view1d_cfp_ptr_view1d_inc,
      cfp_view1d_cfp_ptr_view1d_dec,
    },

    {
      cfp_iter_view1d_get,
      cfp_iter_view1d_get_at,
      cfp_iter_view1d_set,
      cfp_iter_view1d_set_at,
      cfp_iter_view1d_ref,
      cfp_iter_view1d_ref_at,
      cfp_iter_view1d_ptr,
      cfp_iter_view1d_ptr_at,
      cfp_iter_view1d_i,
      cfp_iter_view1d_lt,
      cfp_iter_view1d_gt,
      cfp_iter_view1d_leq,
      cfp_iter_view1d_geq,
      cfp_iter_view1d_eq,
      cfp_iter_view1d_neq,
      cfp_iter_view1d_distance,
      cfp_iter_view1d_next,
      cfp_iter_view1d_prev,
      cfp_iter_view1d_inc,
      cfp_iter_view1d_dec,
    },

    {
      cfp_header_ctor_array1d,
      cfp_header_ctor_buffer,
      cfp_header_dtor,
      cfp_header_scalar_type,
      cfp_header_dimensionality,
      cfp_header_size_x,
      cfp_header_size_y,
      cfp_header_size_z,
      cfp_header_size_w,
      cfp_header_rate,
      cfp_header_data,
      cfp_header_size_bytes,
    },
  },
  // array2f
  {
    cfp_array2f_ctor_default,
    cfp_array2f_ctor,
    cfp_array2f_ctor_copy,
    cfp_array2f_ctor_header,
    cfp_array2f_dtor,

    cfp_array2f_deep_copy,

    cfp_array2f_rate,
    cfp_array2f_set_rate,
    cfp_array2f_cache_size,
    cfp_array2f_set_cache_size,
    cfp_array2f_clear_cache,
    cfp_array2f_flush_cache,
    cfp_array2f_compressed_size,
    cfp_array2f_compressed_data,
    cfp_array2f_size,
    cfp_array2f_size_x,
    cfp_array2f_size_y,
    cfp_array2f_resize,

    cfp_array2f_get_array,
    cfp_array2f_set_array,
    cfp_array2f_get_flat,
    cfp_array2f_set_flat,
    cfp_array2f_get,
    cfp_array2f_set,

    cfp_array2f_ref,
    cfp_array2f_ref_flat,

    cfp_array2f_ptr,
    cfp_array2f_ptr_flat,

    cfp_array2f_begin,
    cfp_array2f_end,

    {
      cfp_array2f_cfp_ref_array2f_get,
      cfp_array2f_cfp_ref_array2f_set,
      cfp_array2f_cfp_ref_array2f_ptr,
      cfp_array2f_cfp_ref_array2f_copy,
    },

    {
      cfp_array2f_cfp_ptr_array2f_get,
      cfp_array2f_cfp_ptr_array2f_get_at,
      cfp_array2f_cfp_ptr_array2f_set,
      cfp_array2f_cfp_ptr_array2f_set_at,
      cfp_array2f_cfp_ptr_array2f_ref,
      cfp_array2f_cfp_ptr_array2f_ref_at,
      cfp_array2f_cfp_ptr_array2f_lt,
      cfp_array2f_cfp_ptr_array2f_gt,
      cfp_array2f_cfp_ptr_array2f_leq,
      cfp_array2f_cfp_ptr_array2f_geq,
      cfp_array2f_cfp_ptr_array2f_eq,
      cfp_array2f_cfp_ptr_array2f_neq,
      cfp_array2f_cfp_ptr_array2f_distance,
      cfp_array2f_cfp_ptr_array2f_next,
      cfp_array2f_cfp_ptr_array2f_prev,
      cfp_array2f_cfp_ptr_array2f_inc,
      cfp_array2f_cfp_ptr_array2f_dec,
    },

    {
      cfp_iter_array2f_get,
      cfp_iter_array2f_get_at,
      cfp_iter_array2f_set,
      cfp_iter_array2f_set_at,
      cfp_iter_array2f_ref,
      cfp_iter_array2f_ref_at,
      cfp_iter_array2f_ptr,
      cfp_iter_array2f_ptr_at,
      cfp_iter_array2f_i,
      cfp_iter_array2f_j,
      cfp_iter_array2f_lt,
      cfp_iter_array2f_gt,
      cfp_iter_array2f_leq,
      cfp_iter_array2f_geq,
      cfp_iter_array2f_eq,
      cfp_iter_array2f_neq,
      cfp_iter_array2f_distance,
      cfp_iter_array2f_next,
      cfp_iter_array2f_prev,
      cfp_iter_array2f_inc,
      cfp_iter_array2f_dec,
    },

    {
      cfp_view2f_ctor,
      cfp_view2f_ctor_subset,
      cfp_view2f_dtor,
      cfp_view2f_global_x,
      cfp_view2f_global_y,
      cfp_view2f_size_x,
      cfp_view2f_size_y,
      cfp_view2f_get,
      cfp_view2f_rate,
      cfp_view2f_size,
      cfp_view2f_ref,
      cfp_view2f_begin,
      cfp_view2f_end,
    },

    {
      cfp_view2f_cfp_ref_view2f_get,
      cfp_view2f_cfp_ref_view2f_set,
      cfp_view2f_cfp_ref_view2f_ptr,
      cfp_view2f_cfp_ref_view2f_copy,
    },

    {
      cfp_view2f_cfp_ptr_view2f_get,
      cfp_view2f_cfp_ptr_view2f_get_at,
      cfp_view2f_cfp_ptr_view2f_set,
      cfp_view2f_cfp_ptr_view2f_set_at,
      cfp_view2f_cfp_ptr_view2f_ref,
      cfp_view2f_cfp_ptr_view2f_ref_at,
      cfp_view2f_cfp_ptr_view2f_lt,
      cfp_view2f_cfp_ptr_view2f_gt,
      cfp_view2f_cfp_ptr_view2f_leq,
      cfp_view2f_cfp_ptr_view2f_geq,
      cfp_view2f_cfp_ptr_view2f_eq,
      cfp_view2f_cfp_ptr_view2f_neq,
      cfp_view2f_cfp_ptr_view2f_distance,
      cfp_view2f_cfp_ptr_view2f_next,
      cfp_view2f_cfp_ptr_view2f_prev,
      cfp_view2f_cfp_ptr_view2f_inc,
      cfp_view2f_cfp_ptr_view2f_dec,
    },


    {
      cfp_iter_view2f_get,
      cfp_iter_view2f_get_at,
      cfp_iter_view2f_set,
      cfp_iter_view2f_set_at,
      cfp_iter_view2f_ref,
      cfp_iter_view2f_ref_at,
      cfp_iter_view2f_ptr,
      cfp_iter_view2f_ptr_at,
      cfp_iter_view2f_i,
      cfp_iter_view2f_j,
      cfp_iter_view2f_lt,
      cfp_iter_view2f_gt,
      cfp_iter_view2f_leq,
      cfp_iter_view2f_geq,
      cfp_iter_view2f_eq,
      cfp_iter_view2f_neq,
      cfp_iter_view2f_distance,
      cfp_iter_view2f_next,
      cfp_iter_view2f_prev,
      cfp_iter_view2f_inc,
      cfp_iter_view2f_dec,
    },

    {
      cfp_header_ctor_array2f,
      cfp_header_ctor_buffer,
      cfp_header_dtor,
      cfp_header_scalar_type,
      cfp_header_dimensionality,
      cfp_header_size_x,
      cfp_header_size_y,
      cfp_header_size_z,
      cfp_header_size_w,
      cfp_header_rate,
      cfp_header_data,
      cfp_header_size_bytes,
    },
  },
  // array2d
  {
    cfp_array2d_ctor_default,
    cfp_array2d_ctor,
    cfp_array2d_ctor_copy,
    cfp_array2d_ctor_header,
    cfp_array2d_dtor,

    cfp_array2d_deep_copy,

    cfp_array2d_rate,
    cfp_array2d_set_rate,
    cfp_array2d_cache_size,
    cfp_array2d_set_cache_size,
    cfp_array2d_clear_cache,
    cfp_array2d_flush_cache,
    cfp_array2d_compressed_size,
    cfp_array2d_compressed_data,
    cfp_array2d_size,
    cfp_array2d_size_x,
    cfp_array2d_size_y,
    cfp_array2d_resize,

    cfp_array2d_get_array,
    cfp_array2d_set_array,
    cfp_array2d_get_flat,
    cfp_array2d_set_flat,
    cfp_array2d_get,
    cfp_array2d_set,

    cfp_array2d_ref,
    cfp_array2d_ref_flat,

    cfp_array2d_ptr,
    cfp_array2d_ptr_flat,

    cfp_array2d_begin,
    cfp_array2d_end,

    {
      cfp_array2d_cfp_ref_array2d_get,
      cfp_array2d_cfp_ref_array2d_set,
      cfp_array2d_cfp_ref_array2d_ptr,
      cfp_array2d_cfp_ref_array2d_copy,
    },

    {
      cfp_array2d_cfp_ptr_array2d_get,
      cfp_array2d_cfp_ptr_array2d_get_at,
      cfp_array2d_cfp_ptr_array2d_set,
      cfp_array2d_cfp_ptr_array2d_set_at,
      cfp_array2d_cfp_ptr_array2d_ref,
      cfp_array2d_cfp_ptr_array2d_ref_at,
      cfp_array2d_cfp_ptr_array2d_lt,
      cfp_array2d_cfp_ptr_array2d_gt,
      cfp_array2d_cfp_ptr_array2d_leq,
      cfp_array2d_cfp_ptr_array2d_geq,
      cfp_array2d_cfp_ptr_array2d_eq,
      cfp_array2d_cfp_ptr_array2d_neq,
      cfp_array2d_cfp_ptr_array2d_distance,
      cfp_array2d_cfp_ptr_array2d_next,
      cfp_array2d_cfp_ptr_array2d_prev,
      cfp_array2d_cfp_ptr_array2d_inc,
      cfp_array2d_cfp_ptr_array2d_dec,
    },

    {
      cfp_iter_array2d_get,
      cfp_iter_array2d_get_at,
      cfp_iter_array2d_set,
      cfp_iter_array2d_set_at,
      cfp_iter_array2d_ref,
      cfp_iter_array2d_ref_at,
      cfp_iter_array2d_ptr,
      cfp_iter_array2d_ptr_at,
      cfp_iter_array2d_i,
      cfp_iter_array2d_j,
      cfp_iter_array2d_lt,
      cfp_iter_array2d_gt,
      cfp_iter_array2d_leq,
      cfp_iter_array2d_geq,
      cfp_iter_array2d_eq,
      cfp_iter_array2d_neq,
      cfp_iter_array2d_distance,
      cfp_iter_array2d_next,
      cfp_iter_array2d_prev,
      cfp_iter_array2d_inc,
      cfp_iter_array2d_dec,
    },

    {
      cfp_view2d_ctor,
      cfp_view2d_ctor_subset,
      cfp_view2d_dtor,
      cfp_view2d_global_x,
      cfp_view2d_global_y,
      cfp_view2d_size_x,
      cfp_view2d_size_y,
      cfp_view2d_get,
      cfp_view2d_rate,
      cfp_view2d_size,
      cfp_view2d_ref,
      cfp_view2d_begin,
      cfp_view2d_end,
    },

    {
      cfp_view2d_cfp_ref_view2d_get,
      cfp_view2d_cfp_ref_view2d_set,
      cfp_view2d_cfp_ref_view2d_ptr,
      cfp_view2d_cfp_ref_view2d_copy,
    },

    {
      cfp_view2d_cfp_ptr_view2d_get,
      cfp_view2d_cfp_ptr_view2d_get_at,
      cfp_view2d_cfp_ptr_view2d_set,
      cfp_view2d_cfp_ptr_view2d_set_at,
      cfp_view2d_cfp_ptr_view2d_ref,
      cfp_view2d_cfp_ptr_view2d_ref_at,
      cfp_view2d_cfp_ptr_view2d_lt,
      cfp_view2d_cfp_ptr_view2d_gt,
      cfp_view2d_cfp_ptr_view2d_leq,
      cfp_view2d_cfp_ptr_view2d_geq,
      cfp_view2d_cfp_ptr_view2d_eq,
      cfp_view2d_cfp_ptr_view2d_neq,
      cfp_view2d_cfp_ptr_view2d_distance,
      cfp_view2d_cfp_ptr_view2d_next,
      cfp_view2d_cfp_ptr_view2d_prev,
      cfp_view2d_cfp_ptr_view2d_inc,
      cfp_view2d_cfp_ptr_view2d_dec,
    },

    {
      cfp_iter_view2d_get,
      cfp_iter_view2d_get_at,
      cfp_iter_view2d_set,
      cfp_iter_view2d_set_at,
      cfp_iter_view2d_ref,
      cfp_iter_view2d_ref_at,
      cfp_iter_view2d_ptr,
      cfp_iter_view2d_ptr_at,
      cfp_iter_view2d_i,
      cfp_iter_view2d_j,
      cfp_iter_view2d_lt,
      cfp_iter_view2d_gt,
      cfp_iter_view2d_leq,
      cfp_iter_view2d_geq,
      cfp_iter_view2d_eq,
      cfp_iter_view2d_neq,
      cfp_iter_view2d_distance,
      cfp_iter_view2d_next,
      cfp_iter_view2d_prev,
      cfp_iter_view2d_inc,
      cfp_iter_view2d_dec,
    },

    {
      cfp_header_ctor_array2d,
      cfp_header_ctor_buffer,
      cfp_header_dtor,
      cfp_header_scalar_type,
      cfp_header_dimensionality,
      cfp_header_size_x,
      cfp_header_size_y,
      cfp_header_size_z,
      cfp_header_size_w,
      cfp_header_rate,
      cfp_header_data,
      cfp_header_size_bytes,
    },
  },
  // array3f
  {
    cfp_array3f_ctor_default,
    cfp_array3f_ctor,
    cfp_array3f_ctor_copy,
    cfp_array3f_ctor_header,
    cfp_array3f_dtor,

    cfp_array3f_deep_copy,

    cfp_array3f_rate,
    cfp_array3f_set_rate,
    cfp_array3f_cache_size,
    cfp_array3f_set_cache_size,
    cfp_array3f_clear_cache,
    cfp_array3f_flush_cache,
    cfp_array3f_compressed_size,
    cfp_array3f_compressed_data,
    cfp_array3f_size,
    cfp_array3f_size_x,
    cfp_array3f_size_y,
    cfp_array3f_size_z,
    cfp_array3f_resize,

    cfp_array3f_get_array,
    cfp_array3f_set_array,
    cfp_array3f_get_flat,
    cfp_array3f_set_flat,
    cfp_array3f_get,
    cfp_array3f_set,

    cfp_array3f_ref,
    cfp_array3f_ref_flat,

    cfp_array3f_ptr,
    cfp_array3f_ptr_flat,

    cfp_array3f_begin,
    cfp_array3f_end,

    {
      cfp_array3f_cfp_ref_array3f_get,
      cfp_array3f_cfp_ref_array3f_set,
      cfp_array3f_cfp_ref_array3f_ptr,
      cfp_array3f_cfp_ref_array3f_copy,
    },

    {
      cfp_array3f_cfp_ptr_array3f_get,
      cfp_array3f_cfp_ptr_array3f_get_at,
      cfp_array3f_cfp_ptr_array3f_set,
      cfp_array3f_cfp_ptr_array3f_set_at,
      cfp_array3f_cfp_ptr_array3f_ref,
      cfp_array3f_cfp_ptr_array3f_ref_at,
      cfp_array3f_cfp_ptr_array3f_lt,
      cfp_array3f_cfp_ptr_array3f_gt,
      cfp_array3f_cfp_ptr_array3f_leq,
      cfp_array3f_cfp_ptr_array3f_geq,
      cfp_array3f_cfp_ptr_array3f_eq,
      cfp_array3f_cfp_ptr_array3f_neq,
      cfp_array3f_cfp_ptr_array3f_distance,
      cfp_array3f_cfp_ptr_array3f_next,
      cfp_array3f_cfp_ptr_array3f_prev,
      cfp_array3f_cfp_ptr_array3f_inc,
      cfp_array3f_cfp_ptr_array3f_dec,
    },

    {
      cfp_iter_array3f_get,
      cfp_iter_array3f_get_at,
      cfp_iter_array3f_set,
      cfp_iter_array3f_set_at,
      cfp_iter_array3f_ref,
      cfp_iter_array3f_ref_at,
      cfp_iter_array3f_ptr,
      cfp_iter_array3f_ptr_at,
      cfp_iter_array3f_i,
      cfp_iter_array3f_j,
      cfp_iter_array3f_k,
      cfp_iter_array3f_lt,
      cfp_iter_array3f_gt,
      cfp_iter_array3f_leq,
      cfp_iter_array3f_geq,
      cfp_iter_array3f_eq,
      cfp_iter_array3f_neq,
      cfp_iter_array3f_distance,
      cfp_iter_array3f_next,
      cfp_iter_array3f_prev,
      cfp_iter_array3f_inc,
      cfp_iter_array3f_dec,
    },

    {
      cfp_view3f_ctor,
      cfp_view3f_ctor_subset,
      cfp_view3f_dtor,
      cfp_view3f_global_x,
      cfp_view3f_global_y,
      cfp_view3f_global_z,
      cfp_view3f_size_x,
      cfp_view3f_size_y,
      cfp_view3f_size_z,
      cfp_view3f_get,
      cfp_view3f_rate,
      cfp_view3f_size,
      cfp_view3f_ref,
      cfp_view3f_begin,
      cfp_view3f_end,
    },

    {
      cfp_view3f_cfp_ref_view3f_get,
      cfp_view3f_cfp_ref_view3f_set,
      cfp_view3f_cfp_ref_view3f_ptr,
      cfp_view3f_cfp_ref_view3f_copy,
    },

    {
      cfp_view3f_cfp_ptr_view3f_get,
      cfp_view3f_cfp_ptr_view3f_get_at,
      cfp_view3f_cfp_ptr_view3f_set,
      cfp_view3f_cfp_ptr_view3f_set_at,
      cfp_view3f_cfp_ptr_view3f_ref,
      cfp_view3f_cfp_ptr_view3f_ref_at,
      cfp_view3f_cfp_ptr_view3f_lt,
      cfp_view3f_cfp_ptr_view3f_gt,
      cfp_view3f_cfp_ptr_view3f_leq,
      cfp_view3f_cfp_ptr_view3f_geq,
      cfp_view3f_cfp_ptr_view3f_eq,
      cfp_view3f_cfp_ptr_view3f_neq,
      cfp_view3f_cfp_ptr_view3f_distance,
      cfp_view3f_cfp_ptr_view3f_next,
      cfp_view3f_cfp_ptr_view3f_prev,
      cfp_view3f_cfp_ptr_view3f_inc,
      cfp_view3f_cfp_ptr_view3f_dec,
    },

    {
      cfp_iter_view3f_get,
      cfp_iter_view3f_get_at,
      cfp_iter_view3f_set,
      cfp_iter_view3f_set_at,
      cfp_iter_view3f_ref,
      cfp_iter_view3f_ref_at,
      cfp_iter_view3f_ptr,
      cfp_iter_view3f_ptr_at,
      cfp_iter_view3f_i,
      cfp_iter_view3f_j,
      cfp_iter_view3f_k,
      cfp_iter_view3f_lt,
      cfp_iter_view3f_gt,
      cfp_iter_view3f_leq,
      cfp_iter_view3f_geq,
      cfp_iter_view3f_eq,
      cfp_iter_view3f_neq,
      cfp_iter_view3f_distance,
      cfp_iter_view3f_next,
      cfp_iter_view3f_prev,
      cfp_iter_view3f_inc,
      cfp_iter_view3f_dec,
    },

    {
      cfp_header_ctor_array3f,
      cfp_header_ctor_buffer,
      cfp_header_dtor,
      cfp_header_scalar_type,
      cfp_header_dimensionality,
      cfp_header_size_x,
      cfp_header_size_y,
      cfp_header_size_z,
      cfp_header_size_w,
      cfp_header_rate,
      cfp_header_data,
      cfp_header_size_bytes,
    },
  },
  // array3d
  {
    cfp_array3d_ctor_default,
    cfp_array3d_ctor,
    cfp_array3d_ctor_copy,
    cfp_array3d_ctor_header,
    cfp_array3d_dtor,

    cfp_array3d_deep_copy,

    cfp_array3d_rate,
    cfp_array3d_set_rate,
    cfp_array3d_cache_size,
    cfp_array3d_set_cache_size,
    cfp_array3d_clear_cache,
    cfp_array3d_flush_cache,
    cfp_array3d_compressed_size,
    cfp_array3d_compressed_data,
    cfp_array3d_size,
    cfp_array3d_size_x,
    cfp_array3d_size_y,
    cfp_array3d_size_z,
    cfp_array3d_resize,

    cfp_array3d_get_array,
    cfp_array3d_set_array,
    cfp_array3d_get_flat,
    cfp_array3d_set_flat,
    cfp_array3d_get,
    cfp_array3d_set,

    cfp_array3d_ref,
    cfp_array3d_ref_flat,

    cfp_array3d_ptr,
    cfp_array3d_ptr_flat,

    cfp_array3d_begin,
    cfp_array3d_end,

    {
      cfp_array3d_cfp_ref_array3d_get,
      cfp_array3d_cfp_ref_array3d_set,
      cfp_array3d_cfp_ref_array3d_ptr,
      cfp_array3d_cfp_ref_array3d_copy,
    },

    {
      cfp_array3d_cfp_ptr_array3d_get,
      cfp_array3d_cfp_ptr_array3d_get_at,
      cfp_array3d_cfp_ptr_array3d_set,
      cfp_array3d_cfp_ptr_array3d_set_at,
      cfp_array3d_cfp_ptr_array3d_ref,
      cfp_array3d_cfp_ptr_array3d_ref_at,
      cfp_array3d_cfp_ptr_array3d_lt,
      cfp_array3d_cfp_ptr_array3d_gt,
      cfp_array3d_cfp_ptr_array3d_leq,
      cfp_array3d_cfp_ptr_array3d_geq,
      cfp_array3d_cfp_ptr_array3d_eq,
      cfp_array3d_cfp_ptr_array3d_neq,
      cfp_array3d_cfp_ptr_array3d_distance,
      cfp_array3d_cfp_ptr_array3d_next,
      cfp_array3d_cfp_ptr_array3d_prev,
      cfp_array3d_cfp_ptr_array3d_inc,
      cfp_array3d_cfp_ptr_array3d_dec,
    },

    {
      cfp_iter_array3d_get,
      cfp_iter_array3d_get_at,
      cfp_iter_array3d_set,
      cfp_iter_array3d_set_at,
      cfp_iter_array3d_ref,
      cfp_iter_array3d_ref_at,
      cfp_iter_array3d_ptr,
      cfp_iter_array3d_ptr_at,
      cfp_iter_array3d_i,
      cfp_iter_array3d_j,
      cfp_iter_array3d_k,
      cfp_iter_array3d_lt,
      cfp_iter_array3d_gt,
      cfp_iter_array3d_leq,
      cfp_iter_array3d_geq,
      cfp_iter_array3d_eq,
      cfp_iter_array3d_neq,
      cfp_iter_array3d_distance,
      cfp_iter_array3d_next,
      cfp_iter_array3d_prev,
      cfp_iter_array3d_inc,
      cfp_iter_array3d_dec,
    },

    {
      cfp_view3d_ctor,
      cfp_view3d_ctor_subset,
      cfp_view3d_dtor,
      cfp_view3d_global_x,
      cfp_view3d_global_y,
      cfp_view3d_global_z,
      cfp_view3d_size_x,
      cfp_view3d_size_y,
      cfp_view3d_size_z,
      cfp_view3d_get,
      cfp_view3d_rate,
      cfp_view3d_size,
      cfp_view3d_ref,
      cfp_view3d_begin,
      cfp_view3d_end,
    },

    {
      cfp_view3d_cfp_ref_view3d_get,
      cfp_view3d_cfp_ref_view3d_set,
      cfp_view3d_cfp_ref_view3d_ptr,
      cfp_view3d_cfp_ref_view3d_copy,
    },

    {
      cfp_view3d_cfp_ptr_view3d_get,
      cfp_view3d_cfp_ptr_view3d_get_at,
      cfp_view3d_cfp_ptr_view3d_set,
      cfp_view3d_cfp_ptr_view3d_set_at,
      cfp_view3d_cfp_ptr_view3d_ref,
      cfp_view3d_cfp_ptr_view3d_ref_at,
      cfp_view3d_cfp_ptr_view3d_lt,
      cfp_view3d_cfp_ptr_view3d_gt,
      cfp_view3d_cfp_ptr_view3d_leq,
      cfp_view3d_cfp_ptr_view3d_geq,
      cfp_view3d_cfp_ptr_view3d_eq,
      cfp_view3d_cfp_ptr_view3d_neq,
      cfp_view3d_cfp_ptr_view3d_distance,
      cfp_view3d_cfp_ptr_view3d_next,
      cfp_view3d_cfp_ptr_view3d_prev,
      cfp_view3d_cfp_ptr_view3d_inc,
      cfp_view3d_cfp_ptr_view3d_dec,
    },

    {
      cfp_iter_view3d_get,
      cfp_iter_view3d_get_at,
      cfp_iter_view3d_set,
      cfp_iter_view3d_set_at,
      cfp_iter_view3d_ref,
      cfp_iter_view3d_ref_at,
      cfp_iter_view3d_ptr,
      cfp_iter_view3d_ptr_at,
      cfp_iter_view3d_i,
      cfp_iter_view3d_j,
      cfp_iter_view3d_k,
      cfp_iter_view3d_lt,
      cfp_iter_view3d_gt,
      cfp_iter_view3d_leq,
      cfp_iter_view3d_geq,
      cfp_iter_view3d_eq,
      cfp_iter_view3d_neq,
      cfp_iter_view3d_distance,
      cfp_iter_view3d_next,
      cfp_iter_view3d_prev,
      cfp_iter_view3d_inc,
      cfp_iter_view3d_dec,
    },

    {
      cfp_header_ctor_array3d,
      cfp_header_ctor_buffer,
      cfp_header_dtor,
      cfp_header_scalar_type,
      cfp_header_dimensionality,
      cfp_header_size_x,
      cfp_header_size_y,
      cfp_header_size_z,
      cfp_header_size_w,
      cfp_header_rate,
      cfp_header_data,
      cfp_header_size_bytes,
    },
  },
  // array4f
  {
    cfp_array4f_ctor_default,
    cfp_array4f_ctor,
    cfp_array4f_ctor_copy,
    cfp_array4f_ctor_header,
    cfp_array4f_dtor,

    cfp_array4f_deep_copy,

    cfp_array4f_rate,
    cfp_array4f_set_rate,
    cfp_array4f_cache_size,
    cfp_array4f_set_cache_size,
    cfp_array4f_clear_cache,
    cfp_array4f_flush_cache,
    cfp_array4f_compressed_size,
    cfp_array4f_compressed_data,
    cfp_array4f_size,
    cfp_array4f_size_x,
    cfp_array4f_size_y,
    cfp_array4f_size_z,
    cfp_array4f_size_w,
    cfp_array4f_resize,

    cfp_array4f_get_array,
    cfp_array4f_set_array,
    cfp_array4f_get_flat,
    cfp_array4f_set_flat,
    cfp_array4f_get,
    cfp_array4f_set,

    cfp_array4f_ref,
    cfp_array4f_ref_flat,

    cfp_array4f_ptr,
    cfp_array4f_ptr_flat,

    cfp_array4f_begin,
    cfp_array4f_end,

    {
      cfp_array4f_cfp_ref_array4f_get,
      cfp_array4f_cfp_ref_array4f_set,
      cfp_array4f_cfp_ref_array4f_ptr,
      cfp_array4f_cfp_ref_array4f_copy,
    },

    {
      cfp_array4f_cfp_ptr_array4f_get,
      cfp_array4f_cfp_ptr_array4f_get_at,
      cfp_array4f_cfp_ptr_array4f_set,
      cfp_array4f_cfp_ptr_array4f_set_at,
      cfp_array4f_cfp_ptr_array4f_ref,
      cfp_array4f_cfp_ptr_array4f_ref_at,
      cfp_array4f_cfp_ptr_array4f_lt,
      cfp_array4f_cfp_ptr_array4f_gt,
      cfp_array4f_cfp_ptr_array4f_leq,
      cfp_array4f_cfp_ptr_array4f_geq,
      cfp_array4f_cfp_ptr_array4f_eq,
      cfp_array4f_cfp_ptr_array4f_neq,
      cfp_array4f_cfp_ptr_array4f_distance,
      cfp_array4f_cfp_ptr_array4f_next,
      cfp_array4f_cfp_ptr_array4f_prev,
      cfp_array4f_cfp_ptr_array4f_inc,
      cfp_array4f_cfp_ptr_array4f_dec,
    },

    {
      cfp_iter_array4f_get,
      cfp_iter_array4f_get_at,
      cfp_iter_array4f_set,
      cfp_iter_array4f_set_at,
      cfp_iter_array4f_ref,
      cfp_iter_array4f_ref_at,
      cfp_iter_array4f_ptr,
      cfp_iter_array4f_ptr_at,
      cfp_iter_array4f_i,
      cfp_iter_array4f_j,
      cfp_iter_array4f_k,
      cfp_iter_array4f_l,
      cfp_iter_array4f_lt,
      cfp_iter_array4f_gt,
      cfp_iter_array4f_leq,
      cfp_iter_array4f_geq,
      cfp_iter_array4f_eq,
      cfp_iter_array4f_neq,
      cfp_iter_array4f_distance,
      cfp_iter_array4f_next,
      cfp_iter_array4f_prev,
      cfp_iter_array4f_inc,
      cfp_iter_array4f_dec,
    },

    {
      cfp_view4f_ctor,
      cfp_view4f_ctor_subset,
      cfp_view4f_dtor,
      cfp_view4f_global_x,
      cfp_view4f_global_y,
      cfp_view4f_global_z,
      cfp_view4f_global_w,
      cfp_view4f_size_x,
      cfp_view4f_size_y,
      cfp_view4f_size_z,
      cfp_view4f_size_w,
      cfp_view4f_get,
      cfp_view4f_rate,
      cfp_view4f_size,
      cfp_view4f_ref,
      cfp_view4f_begin,
      cfp_view4f_end,
    },

    {
      cfp_view4f_cfp_ref_view4f_get,
      cfp_view4f_cfp_ref_view4f_set,
      cfp_view4f_cfp_ref_view4f_ptr,
      cfp_view4f_cfp_ref_view4f_copy,
    },

    {
      cfp_view4f_cfp_ptr_view4f_get,
      cfp_view4f_cfp_ptr_view4f_get_at,
      cfp_view4f_cfp_ptr_view4f_set,
      cfp_view4f_cfp_ptr_view4f_set_at,
      cfp_view4f_cfp_ptr_view4f_ref,
      cfp_view4f_cfp_ptr_view4f_ref_at,
      cfp_view4f_cfp_ptr_view4f_lt,
      cfp_view4f_cfp_ptr_view4f_gt,
      cfp_view4f_cfp_ptr_view4f_leq,
      cfp_view4f_cfp_ptr_view4f_geq,
      cfp_view4f_cfp_ptr_view4f_eq,
      cfp_view4f_cfp_ptr_view4f_neq,
      cfp_view4f_cfp_ptr_view4f_distance,
      cfp_view4f_cfp_ptr_view4f_next,
      cfp_view4f_cfp_ptr_view4f_prev,
      cfp_view4f_cfp_ptr_view4f_inc,
      cfp_view4f_cfp_ptr_view4f_dec,
    },

    {
      cfp_iter_view4f_get,
      cfp_iter_view4f_get_at,
      cfp_iter_view4f_set,
      cfp_iter_view4f_set_at,
      cfp_iter_view4f_ref,
      cfp_iter_view4f_ref_at,
      cfp_iter_view4f_ptr,
      cfp_iter_view4f_ptr_at,
      cfp_iter_view4f_i,
      cfp_iter_view4f_j,
      cfp_iter_view4f_k,
      cfp_iter_view4f_l,
      cfp_iter_view4f_lt,
      cfp_iter_view4f_gt,
      cfp_iter_view4f_leq,
      cfp_iter_view4f_geq,
      cfp_iter_view4f_eq,
      cfp_iter_view4f_neq,
      cfp_iter_view4f_distance,
      cfp_iter_view4f_next,
      cfp_iter_view4f_prev,
      cfp_iter_view4f_inc,
      cfp_iter_view4f_dec,
    },

    {
      cfp_header_ctor_array4f,
      cfp_header_ctor_buffer,
      cfp_header_dtor,
      cfp_header_scalar_type,
      cfp_header_dimensionality,
      cfp_header_size_x,
      cfp_header_size_y,
      cfp_header_size_z,
      cfp_header_size_w,
      cfp_header_rate,
      cfp_header_data,
      cfp_header_size_bytes,
    },
  },
  // array4d
  {
    cfp_array4d_ctor_default,
    cfp_array4d_ctor,
    cfp_array4d_ctor_copy,
    cfp_array4d_ctor_header,
    cfp_array4d_dtor,

    cfp_array4d_deep_copy,

    cfp_array4d_rate,
    cfp_array4d_set_rate,
    cfp_array4d_cache_size,
    cfp_array4d_set_cache_size,
    cfp_array4d_clear_cache,
    cfp_array4d_flush_cache,
    cfp_array4d_compressed_size,
    cfp_array4d_compressed_data,
    cfp_array4d_size,
    cfp_array4d_size_x,
    cfp_array4d_size_y,
    cfp_array4d_size_z,
    cfp_array4d_size_w,
    cfp_array4d_resize,

    cfp_array4d_get_array,
    cfp_array4d_set_array,
    cfp_array4d_get_flat,
    cfp_array4d_set_flat,
    cfp_array4d_get,
    cfp_array4d_set,

    cfp_array4d_ref,
    cfp_array4d_ref_flat,

    cfp_array4d_ptr,
    cfp_array4d_ptr_flat,

    cfp_array4d_begin,
    cfp_array4d_end,

    {
      cfp_array4d_cfp_ref_array4d_get,
      cfp_array4d_cfp_ref_array4d_set,
      cfp_array4d_cfp_ref_array4d_ptr,
      cfp_array4d_cfp_ref_array4d_copy,
    },

    {
      cfp_array4d_cfp_ptr_array4d_get,
      cfp_array4d_cfp_ptr_array4d_get_at,
      cfp_array4d_cfp_ptr_array4d_set,
      cfp_array4d_cfp_ptr_array4d_set_at,
      cfp_array4d_cfp_ptr_array4d_ref,
      cfp_array4d_cfp_ptr_array4d_ref_at,
      cfp_array4d_cfp_ptr_array4d_lt,
      cfp_array4d_cfp_ptr_array4d_gt,
      cfp_array4d_cfp_ptr_array4d_leq,
      cfp_array4d_cfp_ptr_array4d_geq,
      cfp_array4d_cfp_ptr_array4d_eq,
      cfp_array4d_cfp_ptr_array4d_neq,
      cfp_array4d_cfp_ptr_array4d_distance,
      cfp_array4d_cfp_ptr_array4d_next,
      cfp_array4d_cfp_ptr_array4d_prev,
      cfp_array4d_cfp_ptr_array4d_inc,
      cfp_array4d_cfp_ptr_array4d_dec,
    },

    {
      cfp_iter_array4d_get,
      cfp_iter_array4d_get_at,
      cfp_iter_array4d_set,
      cfp_iter_array4d_set_at,
      cfp_iter_array4d_ref,
      cfp_iter_array4d_ref_at,
      cfp_iter_array4d_ptr,
      cfp_iter_array4d_ptr_at,
      cfp_iter_array4d_i,
      cfp_iter_array4d_j,
      cfp_iter_array4d_k,
      cfp_iter_array4d_l,
      cfp_iter_array4d_lt,
      cfp_iter_array4d_gt,
      cfp_iter_array4d_leq,
      cfp_iter_array4d_geq,
      cfp_iter_array4d_eq,
      cfp_iter_array4d_neq,
      cfp_iter_array4d_distance,
      cfp_iter_array4d_next,
      cfp_iter_array4d_prev,
      cfp_iter_array4d_inc,
      cfp_iter_array4d_dec,
    },

    {
      cfp_view4d_ctor,
      cfp_view4d_ctor_subset,
      cfp_view4d_dtor,
      cfp_view4d_global_x,
      cfp_view4d_global_y,
      cfp_view4d_global_z,
      cfp_view4d_global_w,
      cfp_view4d_size_x,
      cfp_view4d_size_y,
      cfp_view4d_size_z,
      cfp_view4d_size_w,
      cfp_view4d_get,
      cfp_view4d_rate,
      cfp_view4d_size,
      cfp_view4d_ref,
      cfp_view4d_begin,
      cfp_view4d_end,
    },

    {
      cfp_view4d_cfp_ref_view4d_get,
      cfp_view4d_cfp_ref_view4d_set,
      cfp_view4d_cfp_ref_view4d_ptr,
      cfp_view4d_cfp_ref_view4d_copy,
    },

    {
      cfp_view4d_cfp_ptr_view4d_get,
      cfp_view4d_cfp_ptr_view4d_get_at,
      cfp_view4d_cfp_ptr_view4d_set,
      cfp_view4d_cfp_ptr_view4d_set_at,
      cfp_view4d_cfp_ptr_view4d_ref,
      cfp_view4d_cfp_ptr_view4d_ref_at,
      cfp_view4d_cfp_ptr_view4d_lt,
      cfp_view4d_cfp_ptr_view4d_gt,
      cfp_view4d_cfp_ptr_view4d_leq,
      cfp_view4d_cfp_ptr_view4d_geq,
      cfp_view4d_cfp_ptr_view4d_eq,
      cfp_view4d_cfp_ptr_view4d_neq,
      cfp_view4d_cfp_ptr_view4d_distance,
      cfp_view4d_cfp_ptr_view4d_next,
      cfp_view4d_cfp_ptr_view4d_prev,
      cfp_view4d_cfp_ptr_view4d_inc,
      cfp_view4d_cfp_ptr_view4d_dec,
    },

    {
      cfp_iter_view4d_get,
      cfp_iter_view4d_get_at,
      cfp_iter_view4d_set,
      cfp_iter_view4d_set_at,
      cfp_iter_view4d_ref,
      cfp_iter_view4d_ref_at,
      cfp_iter_view4d_ptr,
      cfp_iter_view4d_ptr_at,
      cfp_iter_view4d_i,
      cfp_iter_view4d_j,
      cfp_iter_view4d_k,
      cfp_iter_view4d_l,
      cfp_iter_view4d_lt,
      cfp_iter_view4d_gt,
      cfp_iter_view4d_leq,
      cfp_iter_view4d_geq,
      cfp_iter_view4d_eq,
      cfp_iter_view4d_neq,
      cfp_iter_view4d_distance,
      cfp_iter_view4d_next,
      cfp_iter_view4d_prev,
      cfp_iter_view4d_inc,
      cfp_iter_view4d_dec,
    },

    {
      cfp_header_ctor_array4d,
      cfp_header_ctor_buffer,
      cfp_header_dtor,
      cfp_header_scalar_type,
      cfp_header_dimensionality,
      cfp_header_size_x,
      cfp_header_size_y,
      cfp_header_size_z,
      cfp_header_size_w,
      cfp_header_rate,
      cfp_header_data,
      cfp_header_size_bytes,
    },
  },
};
