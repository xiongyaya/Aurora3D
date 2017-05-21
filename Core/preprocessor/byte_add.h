#pragma once

#include<core/preprocessor/bool_or.h>
#include<core/preprocessor/bool_and.h>
#include<core/preprocessor/bool_if.h>
#include<core/preprocessor/bit4x4_add.h>
#include<core/preprocessor/byte_unpack.h>

#define A3D_PP_BYTE_ADD(byte1, byte2) A3D_PP_BYTE_ADD_CONNECT_REPARSE( A3D_PP_BYTE_ADD_STEP1, (A3D_PP_BYTE_UNPACK(byte1), A3D_PP_BYTE_UNPACK(byte2)))
#define A3D_PP_BYTE_ADD3(byte1, byte2, byte3)        A3D_PP_BYTE_ADD(byte1, A3D_PP_BYTE_ADD(byte2, byte3));
#define A3D_PP_BYTE_ADD4(byte1, byte2, byte3, byte4) A3D_PP_BYTE_ADD(A3D_PP_BYTE_ADD(byte1, byte2), A3D_PP_BYTE_ADD(byte3, byte4));

#define A3D_PP_BYTE_ADD_STEP1(x7,x6,x5,x4,x3,x2,x1,x0,y7,y6,y5,y4,y3,y2,y1,y0)\
			A3D_PP_BYTE_ADD_CONNECT(A3D_PP_BYTE_ADD_STEP2,                    \
				(A3D_PP_BIT4x4_ADD(x7, x6, x5, x4, y7, y6, y5, y4),           \
				 A3D_PP_BIT4x4_ADD(x3, x2, x1, x0, y3, y2, y1, y0)))

#define A3D_PP_BYTE_ADD_STEP2(s1,r7,r6,r5,r4,s0,r3,r2,r1,r0)                \
			A3D_PP_IF(s1,                                                   \
				A3D_PP_BYTE_ADD_GT_255,                                     \
				A3D_PP_BYTE_ADD_LE_255)##(r7,r6,r5,r4,s0,r3,r2,r1,r0)

#define A3D_PP_BYTE_ADD_GT_255(...) (1,1,1,1,1,1,1,1)
#define A3D_PP_BYTE_ADD_LE_255(r7,r6,r5,r4,s0,r3,r2,r1,r0)                  \
			A3D_PP_IF(s0,                                                   \
				A3D_PP_BYTE_ADD_ON_LOW_SIGN,                                \
				A3D_PP_BYTE_ADD_NO_CHANGE)##(r7, r6, r5, r4, r3, r2, r1, r0)

#define A3D_PP_BYTE_ADD_ON_LOW_SIGN(r7, r6, r5, r4, r3, r2, r1, r0) (A3D_PP_BIT4_ADD1_VALUE##r7##r6##r5##r4, r3,r2,r1,r0)
#define A3D_PP_BYTE_ADD_NO_CHANGE(...) (__VA_ARGS__)

#define A3D_PP_BIT4_ADD1_VALUE0000 0,0,0,1
#define A3D_PP_BIT4_ADD1_VALUE0001 0,0,1,0
#define A3D_PP_BIT4_ADD1_VALUE0010 0,0,1,1
#define A3D_PP_BIT4_ADD1_VALUE0011 0,1,0,0
#define A3D_PP_BIT4_ADD1_VALUE0100 0,1,0,1
#define A3D_PP_BIT4_ADD1_VALUE0101 0,1,1,0
#define A3D_PP_BIT4_ADD1_VALUE0110 0,1,1,1
#define A3D_PP_BIT4_ADD1_VALUE0111 1,0,0,0
#define A3D_PP_BIT4_ADD1_VALUE1000 1,0,0,1
#define A3D_PP_BIT4_ADD1_VALUE1001 1,0,1,0
#define A3D_PP_BIT4_ADD1_VALUE1010 1,0,1,1
#define A3D_PP_BIT4_ADD1_VALUE1011 1,1,0,0
#define A3D_PP_BIT4_ADD1_VALUE1100 1,1,0,1
#define A3D_PP_BIT4_ADD1_VALUE1101 1,1,1,0
#define A3D_PP_BIT4_ADD1_VALUE1110 1,1,1,1

#define A3D_PP_BYTE_ADD_CONNECT_REPARSE(x, y) A3D_PP_BYTE_ADD_CONNECT_REPARSE_STEP1(x, y)
#define A3D_PP_BYTE_ADD_CONNECT_REPARSE_STEP1(x, y) A3D_PP_BYTE_ADD_CONNECT_REPARSE_STEP2(x y)
#define A3D_PP_BYTE_ADD_CONNECT_REPARSE_STEP2(result) result
#define A3D_PP_BYTE_ADD_CONNECT(x, y) A3D_PP_BYTE_ADD_CONNECT_STEP1(x, y)
#define A3D_PP_BYTE_ADD_CONNECT_STEP1(x, y) A3D_PP_BYTE_ADD_CONNECT_STEP2(x y)
#define A3D_PP_BYTE_ADD_CONNECT_STEP2(result) result