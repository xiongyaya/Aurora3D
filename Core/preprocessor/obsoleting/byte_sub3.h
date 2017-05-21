#pragma once

#include"bool_or.h"
#include"bool_and.h"
#include"bool_delay_invoke_if.h"
#include"bit4x4_sub.h"
#include"bit2x2_all_zero.h"
#include"connect.h"

//   time consume 
// 2 times bit4x4 sub( include 4 times bit2x2 sub), 1 or, 1 and, 1 if, 1 connect
// 2.5 times merge invoke, 0.25 time bit4_sub_one
// nearly equal 16 times uint8_sub_once(...)

//   algorithm
//   compute    low 4 bit sub and high 4 bit sub 
//   get        (s1,r7,r6,r5,r4) and (s0, r3,r2,r1,r0)    (note: s1, s0 are lead bit, lead one from high bit 4)
//               r3,r2,r1,r0 is the result 4 bit
//   for   result high 4 bit, if s1 == 1 or (s0 ==1 and high bit4 == 0000 ) return (0,0,0,0,0,0,0,0)
//                            else if  s0 ==1  return ( sub_one(r7,r6,r5,r4), r3,r2,r1,r0 )
//                            else     s0 ==0  return (r7,r6,r5,r4,r3,r2,r1,r0)

#define A3D_PP2_BYTE_SUB(byte1, byte2)     A3D_PP2_BYTE_SUB1(A3D_PP2_BYTE_SUB_UNPACK(byte1),A3D_PP2_BYTE_SUB_UNPACK(byte2))
#define A3D_PP2_BYTE_SUB1(byte1, byte2)                                           \
			A3D_PP2_BYTE_SUB_EXPLICIT##(byte1,byte2)

#define A3D_PP2_BYTE_SUB_EXPLICIT(x7,x6,x5,x4,x3,x2,x1,x0,y7,y6,y5,y4,y3,y2,y1,y0) (x7,x6,x5,x4,x3,x2,x1,x0)//\
			A3D_PP2_BYTE_SUB_EXPLICIT_STEP1##(A3D_PP2_BIT4x4_SUB(x7, x6, x5, x4, y7, y6, y5, y4), \
				 A3D_PP2_BIT4x4_SUB(x3, x2, x1, x0, y3, y2, y1, y0))

#define A3D_PP2_BYTE_SUB_EXPLICIT_STEP1(s1,r7,r6,r5,r4,s0,r3,r2,r1,r0)            \
			A3D_PP2_IF(                                                           \
				A3D_PP2_OR(s1, A3D_PP2_AND(s0, A3D_PP2_BIT4_ALL_ZERO(r7,r6,r5,r4))),\
				A3D_PP2_BYTE_SUB_RESULT_LT_ZERO,                                  \
				A3D_PP2_BYTE_SUB_RESULT_GE_ZERO)##(r7,r6,r5,r4,s0,r3,r2,r1,r0)

#define A3D_PP2_BYTE_SUB_RESULT_LT_ZERO(...) (0,0,0,0,0,0,0,0)
#define A3D_PP2_BYTE_SUB_RESULT_GE_ZERO(r7,r6,r5,r4,s0,r3,r2,r1,r0) (r7,r6,r5,r4,s0,r3,r2,r1,r0) //\
			A3D_PP2_IF_FAST(s0,                                     \
			A3D_PP2_BYTE_SUB_RESULT_PROCESS_ON_SIGN##(r7, r6, r5, r4, r3, r2, r1, r0),                \
			A3D_PP2_BYTE_SUB_RESULT_PROCESS_NO_CHANGE##(r7, r6, r5, r4, r3, r2, r1, r0))

#define A3D_PP2_BYTE_SUB_RESULT_PROCESS_NO_CHANGE(...) (__VA_ARGS__)
#define A3D_PP2_BYTE_SUB_RESULT_PROCESS_ON_SIGN(r7, r6, r5, r4, r3, r2, r1, r0) \
			(A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE##r7##r6##r5##r4, r3,r2,r1,r0)

#define A3D_PP2_BYTE_SUB_UNPACK(byte) A3D_PP2_BYTE_SUB_UNPACK_HELPER##byte
#define A3D_PP2_BYTE_SUB_UNPACK_HELPER(...)  __VA_ARGS__
#define A3D_PP2_BYTE_SUB_REPARSE(...)        A3D_PP2_BYTE_SUB_REPARSE_HELPER(__VA_ARGS__)
#define A3D_PP2_BYTE_SUB_REPARSE_HELPER(...) __VA_ARGS__
#define A3D_PP2_BYTE_SUB_REPARSE2(...)        A3D_PP2_BYTE_SUB_REPARSE2_HELPER(__VA_ARGS__)
#define A3D_PP2_BYTE_SUB_REPARSE2_HELPER(...) __VA_ARGS__
#define A3D_PP2_BYTE_SUB_REPARSE3(...)        A3D_PP2_BYTE_SUB_REPARSE3_HELPER(__VA_ARGS__)
#define A3D_PP2_BYTE_SUB_REPARSE3_HELPER(...) __VA_ARGS__
#define A3D_PP2_BYTE_SUB_REPARSE4(...)        A3D_PP2_BYTE_SUB_REPARSE4_HELPER(__VA_ARGS__)
#define A3D_PP2_BYTE_SUB_REPARSE4_HELPER(...) __VA_ARGS__

#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE0001 0,0,0,0
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE0010 0,0,0,1
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE0011 0,0,1,0
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE0100 0,0,1,1
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE0101 0,1,0,0
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE0110 0,1,0,1
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE0111 0,1,1,0
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE1000 0,1,1,1
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE1001 1,0,0,0
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE1010 1,0,0,1
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE1011 1,0,1,0
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE1100 1,0,1,1
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE1101 1,1,0,0
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE1110 1,1,0,1
#define A3D_PP2_BYTE_SUB_ONE_CONDI_VALUE1111 1,1,1,0




