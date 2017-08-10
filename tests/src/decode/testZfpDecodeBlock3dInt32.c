#include "src/decode3i.c"

#include "constants/3dInt32.h"
#include "utils/rand32.h"
#include "utils/hash32.h"
#include "zfpDecodeBlockBase.c"

int main()
{
  const struct CMUnitTest tests[] = {
    cmocka_unit_test_setup_teardown(when_seededRandomDataGenerated_expect_ChecksumMatches, setup, teardown),
    cmocka_unit_test_setup_teardown(given_3dInt32Block_when_DecodeBlock_expect_ReturnValReflectsNumBitsReadFromBitstream, setup, teardown),
    cmocka_unit_test_setup_teardown(given_3dInt32Block_when_DecodeBlock_expect_ArrayChecksumMatches, setup, teardown),
  };
  return cmocka_run_group_tests(tests, NULL, NULL);
}