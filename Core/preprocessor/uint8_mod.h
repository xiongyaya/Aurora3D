#pragma once

#include<core/preprocessor/byte_mod.h>
#include<core/preprocessor/uint8_to_byte.h>
#include<core/preprocessor/byte_to_uint8.h>

#define A3D_PP_MOD(x, y) A3D_PP_BYTE_INT( A3D_PP_BYTE_MOD( A3D_PP_INT_BYTE(x), A3D_PP_INT_BYTE(y)) )