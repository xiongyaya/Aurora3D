#pragma once

#define A3D_PP_BIT4_ALL_ZERO(x3, x2, x1, x0)      A3D_PP_BIT4_ALL_ZERO_FAST(x3,x2,x1,x0)
#define A3D_PP_BIT4_ALL_ZERO_FAST(x3, x2, x1, x0) A3D_PP_BIT4_ALL_ZERO_VALUE##x3##x2##x1##x0

#define A3D_PP_BIT4_ALL_ZERO_VALUE0000 1
#define A3D_PP_BIT4_ALL_ZERO_VALUE0001 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE0010 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE0011 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE0100 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE0101 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE0110 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE0111 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE1000 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE1001 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE1010 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE1011 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE1100 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE1101 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE1110 0
#define A3D_PP_BIT4_ALL_ZERO_VALUE1111 0