// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/qs8-vaddc-minmax.yaml
//   Generator: tools/generate-vbinary-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/vadd.h>
#include "vaddc-microkernel-tester.h"


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, a_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, b_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, y_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, a_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, b_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, y_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X8, qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x8, xnn_init_qs8_add_minmax_neon_params);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, a_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, b_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, y_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, a_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, b_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, y_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X16, qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x16, xnn_init_qs8_add_minmax_neon_params);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, batch_eq_24) {
    TEST_REQUIRES_ARM_NEON;
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, batch_div_24) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, batch_lt_24) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, batch_gt_24) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, a_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, b_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, y_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, a_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, b_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, y_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X24, qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x24, xnn_init_qs8_add_minmax_neon_params);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, batch_eq_32) {
    TEST_REQUIRES_ARM_NEON;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, batch_div_32) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, batch_lt_32) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, batch_gt_32) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, a_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, b_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, y_zero_point) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, a_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, b_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, y_scale) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__NEON_LD64_X32, qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__neon_ld64_x32, xnn_init_qs8_add_minmax_neon_params);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE2;
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, batch_div_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, inplace) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, a_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, b_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, y_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, a_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, b_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, y_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X8, qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse2_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE2;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, batch_div_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, inplace) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, a_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, b_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, y_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, a_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, b_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, y_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X16, qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse2_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, batch_eq_24) {
    TEST_REQUIRES_X86_SSE2;
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, batch_div_24) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, batch_lt_24) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, batch_gt_24) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, inplace) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, a_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, b_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, y_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, a_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, b_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, y_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X24, qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse2_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, batch_eq_32) {
    TEST_REQUIRES_X86_SSE2;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, batch_div_32) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, batch_lt_32) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, batch_gt_32) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, inplace) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, a_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, b_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, y_zero_point) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, a_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, b_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, y_scale) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, qmin) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE2_MUL16_LD64_X32, qmax) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse2_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse2_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE41;
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, batch_div_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, inplace) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, a_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, b_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, y_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, a_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, b_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, y_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X8, qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE41;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, batch_div_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, inplace) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, a_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, b_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, y_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, a_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, b_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, y_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X16, qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, batch_eq_24) {
    TEST_REQUIRES_X86_SSE41;
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, batch_div_24) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, batch_lt_24) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, batch_gt_24) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, inplace) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, a_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, b_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, y_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, a_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, b_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, y_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X24, qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, batch_eq_32) {
    TEST_REQUIRES_X86_SSE41;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, batch_div_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, batch_lt_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, batch_gt_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, inplace) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, a_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, b_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, y_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, a_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, b_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, y_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL16_LD64_X32, qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, a_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, b_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, y_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, a_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, b_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, y_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, qmin) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X8, qmax) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x8, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, a_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, b_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, y_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, a_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, b_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, y_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, qmin) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X16, qmax) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x16, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX;
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, batch_div_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, a_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, b_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, y_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, a_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, b_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, y_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, qmin) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X24, qmax) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x24, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, a_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, b_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, y_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, a_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, b_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, y_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, qmin) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL16_LD64_X32, qmax) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul16_ld64_x32, xnn_init_qs8_add_minmax_sse4_mul16_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE41;
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, batch_div_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, inplace) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, a_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, b_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, y_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, a_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, b_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, y_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X8, qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE41;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, batch_div_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, inplace) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, a_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, b_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, y_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, a_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, b_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, y_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X16, qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, batch_eq_24) {
    TEST_REQUIRES_X86_SSE41;
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, batch_div_24) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, batch_lt_24) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, batch_gt_24) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, inplace) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, a_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, b_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, y_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, a_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, b_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, y_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X24, qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, batch_eq_32) {
    TEST_REQUIRES_X86_SSE41;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, batch_div_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, batch_lt_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, batch_gt_32) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, inplace) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, a_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, b_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, y_zero_point) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, a_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, b_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, y_scale) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, qmin) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__SSE41_MUL32_LD32_X32, qmax) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__sse41_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, a_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, b_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, y_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, a_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, b_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, y_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, qmin) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X8, qmax) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, a_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, b_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, y_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, a_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, b_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, y_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, qmin) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X16, qmax) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX;
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, batch_div_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, a_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, b_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, y_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, a_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, b_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, y_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, qmin) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X24, qmax) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, a_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, b_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, y_zero_point) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, a_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, b_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, y_scale) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, qmin) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX_MUL32_LD32_X32, qmax) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, batch_eq_8) {
    TEST_REQUIRES_X86_XOP;
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, batch_div_8) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, batch_lt_8) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, batch_gt_8) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, inplace) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, a_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, b_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, y_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, a_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, b_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, y_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, qmin) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X8, qmax) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x8, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, batch_eq_16) {
    TEST_REQUIRES_X86_XOP;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, batch_div_16) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, batch_lt_16) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, batch_gt_16) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, inplace) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, a_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, b_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, y_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, a_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, b_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, y_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, qmin) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X16, qmax) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x16, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, batch_eq_24) {
    TEST_REQUIRES_X86_XOP;
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, batch_div_24) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, batch_lt_24) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, batch_gt_24) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, inplace) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, a_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, b_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, y_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, a_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, b_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, y_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, qmin) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X24, qmax) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x24, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, batch_eq_32) {
    TEST_REQUIRES_X86_XOP;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, batch_div_32) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, batch_lt_32) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, batch_gt_32) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, inplace) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, a_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, b_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, y_zero_point) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, a_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, b_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, y_scale) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, qmin) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__XOP_MUL32_LD32_X32, qmax) {
    TEST_REQUIRES_X86_XOP;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__xop_mul32_ld32_x32, xnn_init_qs8_add_minmax_sse4_mul32_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX2;
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, batch_div_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, inplace) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, a_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, b_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, y_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, a_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, b_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, y_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X8, qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8, xnn_init_qs8_add_minmax_avx2_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX2;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, batch_div_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, inplace) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, a_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, b_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, y_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, a_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, b_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, y_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X16, qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x16, xnn_init_qs8_add_minmax_avx2_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX2;
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, batch_div_24) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, inplace) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, a_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, b_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, y_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, a_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, b_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, y_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X24, qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x24, xnn_init_qs8_add_minmax_avx2_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX2;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, batch_div_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, inplace) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, a_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, b_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, y_zero_point) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, a_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, b_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, y_scale) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, qmin) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX2_MUL32_LD64_X32, qmax) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx2_mul32_ld64_x32, xnn_init_qs8_add_minmax_avx2_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, inplace) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, a_zero_point) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, b_zero_point) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, y_zero_point) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, a_scale) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, b_scale) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, y_scale) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X16, qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x16, xnn_init_qs8_add_minmax_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512SKX;
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, inplace) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, a_zero_point) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, b_zero_point) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, y_zero_point) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, a_scale) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, b_scale) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, y_scale) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__AVX512SKX_MUL32_LD128_X32, qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__avx512skx_mul32_ld128_x32, xnn_init_qs8_add_minmax_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_WASMSIMD
  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, batch_eq_8) {
    VAddCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, batch_div_8) {
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, batch_lt_8) {
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, batch_gt_8) {
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, inplace) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, a_zero_point) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, b_zero_point) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, y_zero_point) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, a_scale) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, b_scale) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, y_scale) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, qmin) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X8, qmax) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x8, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, batch_eq_16) {
    VAddCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, batch_div_16) {
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, batch_lt_16) {
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, batch_gt_16) {
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, inplace) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, a_zero_point) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, b_zero_point) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, y_zero_point) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, a_scale) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, b_scale) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, y_scale) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, qmin) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X16, qmax) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x16, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, batch_eq_24) {
    VAddCMicrokernelTester()
      .batch_size(24)
      .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, batch_div_24) {
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, batch_lt_24) {
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, batch_gt_24) {
    for (size_t batch_size = 25; batch_size < 48; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, inplace) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, a_zero_point) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, b_zero_point) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, y_zero_point) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, a_scale) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, b_scale) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, y_scale) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, qmin) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X24, qmax) {
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x24, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, batch_eq_32) {
    VAddCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, batch_div_32) {
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, batch_lt_32) {
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, batch_gt_32) {
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, inplace) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, a_zero_point) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_zero_point(a_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, b_zero_point) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_zero_point(b_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, y_zero_point) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_zero_point(y_zero_point)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, a_scale) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .a_scale(a_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, b_scale) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .b_scale(b_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, y_scale) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
        VAddCMicrokernelTester()
          .batch_size(batch_size)
          .y_scale(y_scale)
          .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
      }
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, qmin) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }

  TEST(QS8_VADDC_MINMAX__WASMSIMD_X32, qmax) {
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_qs8_vaddc_minmax_ukernel__wasmsimd_x32, xnn_init_qs8_add_minmax_wasmsimd_params);
    }
  }
#endif  // XNN_ARCH_WASMSIMD


TEST(QS8_VADDC_MINMAX__SCALAR_X1, batch_eq_1) {
  VAddCMicrokernelTester()
    .batch_size(1)
    .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, batch_gt_1) {
  for (size_t batch_size = 2; batch_size < 10; batch_size++) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, inplace) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, a_zero_point) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .a_zero_point(a_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, b_zero_point) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .b_zero_point(b_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, y_zero_point) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .y_zero_point(y_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, a_scale) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .a_scale(a_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, b_scale) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .b_scale(b_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, y_scale) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .y_scale(y_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, qmin) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .qmin(128)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X1, qmax) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .qmax(128)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x1, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, batch_eq_2) {
  VAddCMicrokernelTester()
    .batch_size(2)
    .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, batch_div_2) {
  for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, batch_lt_2) {
  for (size_t batch_size = 1; batch_size < 2; batch_size++) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, batch_gt_2) {
  for (size_t batch_size = 3; batch_size < 4; batch_size++) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, inplace) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, a_zero_point) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .a_zero_point(a_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, b_zero_point) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .b_zero_point(b_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, y_zero_point) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .y_zero_point(y_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, a_scale) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .a_scale(a_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, b_scale) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .b_scale(b_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, y_scale) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .y_scale(y_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, qmin) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .qmin(128)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X2, qmax) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .qmax(128)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x2, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, batch_eq_4) {
  VAddCMicrokernelTester()
    .batch_size(4)
    .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, batch_div_4) {
  for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, batch_lt_4) {
  for (size_t batch_size = 1; batch_size < 4; batch_size++) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, batch_gt_4) {
  for (size_t batch_size = 5; batch_size < 8; batch_size++) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, inplace) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, a_zero_point) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    for (int32_t a_zero_point = -128; a_zero_point <= 127; a_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .a_zero_point(a_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, b_zero_point) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    for (int32_t b_zero_point = -128; b_zero_point <= 127; b_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .b_zero_point(b_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, y_zero_point) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    for (int32_t y_zero_point = -128; y_zero_point <= 127; y_zero_point += 51) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .y_zero_point(y_zero_point)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, a_scale) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    for (float a_scale = 0.1f; a_scale <= 10.0f; a_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .a_scale(a_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, b_scale) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    for (float b_scale = 0.1f; b_scale <= 10.0f; b_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .b_scale(b_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, y_scale) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    for (float y_scale = 0.1f; y_scale <= 10.0f; y_scale *= 3.14f) {
      VAddCMicrokernelTester()
        .batch_size(batch_size)
        .y_scale(y_scale)
        .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
    }
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, qmin) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .qmin(128)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
  }
}

TEST(QS8_VADDC_MINMAX__SCALAR_X4, qmax) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VAddCMicrokernelTester()
      .batch_size(batch_size)
      .qmax(128)
      .Test(xnn_qs8_vaddc_minmax_ukernel__scalar_x4, xnn_init_qs8_add_minmax_scalar_params);
  }
}