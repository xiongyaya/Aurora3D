#pragma once

#include<core/preprocessor/bool_and.h>

#define A3D_PP_BIT2x2_EQUAL(x1, x0, y1, y0) A3D_PP_BIT2x2_EQUAL_VALUE ## x1 ## x0 ## y1 ## y0
#define A3D_PP_BIT4x4_EQUAL_FALSE(...)  0
#define A3D_PP_BIT4x4_EQUAL(x3,x2,x1,x0, y3,y2,y1,y0) A3D_PP_AND( A3D_PP_BIT2x2_EQUAL(x3,x2,y3,y2), A3D_PP_BIT2x2_EQUAL(x1,x0,y1,y0))

//2x2 bits equal
#define A3D_PP_BIT2x2_EQUAL_VALUE0000   1
#define A3D_PP_BIT2x2_EQUAL_VALUE0001   0
#define A3D_PP_BIT2x2_EQUAL_VALUE0010   0
#define A3D_PP_BIT2x2_EQUAL_VALUE0011   0
#define A3D_PP_BIT2x2_EQUAL_VALUE0100   0
#define A3D_PP_BIT2x2_EQUAL_VALUE0101   1
#define A3D_PP_BIT2x2_EQUAL_VALUE0110   0
#define A3D_PP_BIT2x2_EQUAL_VALUE0111   0
#define A3D_PP_BIT2x2_EQUAL_VALUE1000   0
#define A3D_PP_BIT2x2_EQUAL_VALUE1001   0
#define A3D_PP_BIT2x2_EQUAL_VALUE1010   1
#define A3D_PP_BIT2x2_EQUAL_VALUE1011   0
#define A3D_PP_BIT2x2_EQUAL_VALUE1100   0
#define A3D_PP_BIT2x2_EQUAL_VALUE1101   0
#define A3D_PP_BIT2x2_EQUAL_VALUE1110   0
#define A3D_PP_BIT2x2_EQUAL_VALUE1111   1