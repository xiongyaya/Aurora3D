#pragma once

#include"bool_or.h"
#include"bool_and.h"
#include"bool_delay_invoke_if.h"
#include"bit4x4_add.h"
#include"bit2x2_all_zero.h"
#include"connect.h"

#define A3D_PP_BYTE_ADD(byte1, byte2)                                               \
			A3D_PP_BYTE_ADD_REPARSE( A3D_PP_CONNECT( A3D_PP_BYTE_ADD_EXPLICIT,      \
				(A3D_PP_BYTE_ADD_UNPACK(byte1),                                     \
				 A3D_PP_BYTE_ADD_UNPACK(byte2))  ))

#define A3D_PP_BYTE_ADD3(byte1, byte2, byte3)                                       \
			A3D_PP_BYTE_ADD(A3D_PP_BYTE_ADD(byte1, byte2),byte3)              

#define A3D_PP_BYTE_ADD4(byte1, byte2, byte3, byte4)                                \
			A3D_PP_BYTE_ADD(A3D_PP_BYTE_ADD(byte1, byte2),                          \
				A3D_PP_BYTE_ADD(byte3, byte4))

#define A3D_PP_BYTE_ADD_EXPLICIT(x7,x6,x5,x4,x3,x2,x1,x0,y7,y6,y5,y4,y3,y2,y1,y0)   \
			A3D_PP_BYTE_ADD_REPARSE2(A3D_PP_CONNECT(A3D_PP_BYTE_ADD_EXPLICIT_STEP1, \
				(A3D_PP_BIT4x4_ADD(x7, x6, x5, x4, y7, y6, y5, y4),                 \
				 A3D_PP_BIT4x4_ADD(x3, x2, x1, x0, y3, y2, y1, y0))))

#define A3D_PP_BYTE_ADD_EXPLICIT_STEP1(s1,r7,r6,r5,r4,s0,r3,r2,r1,r0)               \
			A3D_PP_BYTE_ADD_REPARSE3( A3D_PP_DELAY_INVOKE_IF(s1,                    \
				A3D_PP_BYTE_ADD_RESULT_GT_255,                                      \
				A3D_PP_BYTE_ADD_RESULT_LE_255,                                      \
				(r7,r6,r5,r4,s0,r3,r2,r1,r0)))

#define A3D_PP_BYTE_ADD_RESULT_GT_255(...) (1,1,1,1,1,1,1,1)
#define A3D_PP_BYTE_ADD_RESULT_LE_255(r7,r6,r5,r4,s0,r3,r2,r1,r0)                  \
			A3D_PP_BYTE_ADD_REPARSE4( A3D_PP_DELAY_INVOKE_IF(s0,                   \
				A3D_PP_BYTE_ADD_RESULT_PROCESS_ON_SIGN,                            \
				A3D_PP_BYTE_ADD_RESULT_PROCESS_NO_CHANGE,                          \
				(r7, r6, r5, r4, r3, r2, r1, r0)))

#define A3D_PP_BYTE_ADD_RESULT_PROCESS_NO_CHANGE(...) (__VA_ARGS__)
#define A3D_PP_BYTE_ADD_RESULT_PROCESS_ON_SIGN(r7, r6, r5, r4, r3, r2, r1, r0) \
			(A3D_PP_BYTE_ADD_ONE_CONDI_VALUE##r7##r6##r5##r4, r3,r2,r1,r0)



//helper function
#define A3D_PP_BYTE_ADD_UNPACK(byte) A3D_PP_BYTE_ADD_REPARSE( A3D_PP_BYTE_ADD_UNPACK_HELPER##byte)
#define A3D_PP_BYTE_ADD_UNPACK_HELPER(...)  __VA_ARGS__
#define A3D_PP_BYTE_ADD_REPARSE(...)        A3D_PP_BYTE_ADD_REPARSE_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_ADD_REPARSE_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_ADD_REPARSE2(...)        A3D_PP_BYTE_ADD_REPARSE2_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_ADD_REPARSE2_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_ADD_REPARSE3(...)        A3D_PP_BYTE_ADD_REPARSE3_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_ADD_REPARSE3_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_ADD_REPARSE4(...)        A3D_PP_BYTE_ADD_REPARSE4_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_ADD_REPARSE4_HELPER(...) __VA_ARGS__

#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE0001 0,0,1,0
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE0010 0,0,1,1
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE0011 0,1,0,0
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE0100 0,1,0,1
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE0101 0,1,1,0
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE0110 0,1,1,1
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE0111 1,0,0,0
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE1000 1,0,0,1
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE1001 1,0,1,0
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE1010 1,0,1,1
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE1011 1,1,0,0
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE1100 1,1,0,1
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE1101 1,1,1,0
#define A3D_PP_BYTE_ADD_ONE_CONDI_VALUE1110 1,1,1,1




