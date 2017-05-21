#pragma once

#include<core/preprocessor/uint8_to_byte.h>
#include<core/preprocessor/byte_equal.h>

//x, y are in range [0, 255]
#define A3D_PP_EQUAL(x, y) A3D_PP_BYTE_EQUAL( A3D_PP_INT_BYTE(x), A3D_PP_INT_BYTE(y))