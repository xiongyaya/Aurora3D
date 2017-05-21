#pragma once
#include"bit2x2_sub.h"
#include"uint8_add_one.h"
#include"connect.h"

#define REPARSE(p) REPARSE_HELPER(_, p)
#define REPARSE_HELPER(_, p) p

//lookup table
#define BIT2x2_SUB(x1,x0,y1,y0)      BIT2x2_SUB_FAST(x1,x0,y1,y0)
#define BIT2x2_SUB_FAST(x1,x0,y1,y0) BIT2x2_SUB_VALUE##x1##x0##y1##y0
//   result (sign,high,low)
//   sign = 1 means lead from high bit2x2
//   sign = 0 means no need to lead
//   (0,0,0) (0,0,1) (0,1,0) (0,1,1)
//   (1,0,0) (1,0,1) (1,1,0) (1,1,1)
#define BIT2x2_SUB_VALUE0000 0,0,0
#define BIT2x2_SUB_VALUE0001 1,1,1
#define BIT2x2_SUB_VALUE0010 1,1,0
#define BIT2x2_SUB_VALUE0011 1,0,1
#define BIT2x2_SUB_VALUE0100 0,0,1
#define BIT2x2_SUB_VALUE0101 0,0,0
#define BIT2x2_SUB_VALUE0110 1,1,1
#define BIT2x2_SUB_VALUE0111 1,1,0
#define BIT2x2_SUB_VALUE1000 0,1,0
#define BIT2x2_SUB_VALUE1001 0,0,1
#define BIT2x2_SUB_VALUE1010 0,0,0
#define BIT2x2_SUB_VALUE1011 1,1,1
#define BIT2x2_SUB_VALUE1100 0,1,1
#define BIT2x2_SUB_VALUE1101 0,1,0
#define BIT2x2_SUB_VALUE1110 0,0,1
#define BIT2x2_SUB_VALUE1111 0,0,0

#define BIT4x4_SUB(x3,x2,x1,x0,y3,y2,y1,y0)  \
			A3D_PP_CONNECT( BIT4x4_SUB_STEP1, \
			( BIT2x2_SUB_FAST(x3,x2,y3,y2), BIT2x2_SUB_FAST(x1,x0,y1,y0)))

#define BIT4x4_SUB_STEP1(s1,r3,r2,s0,r1,r0)  BIT4x4_SUB_VALUE##s1##r3##r2##s0##r1##r0


// no (*,*,*,1,0,0) or (1,0,0,*,*,*) compose
// format  (s0, b3,b2,b1,b0)
// s0 = 1 mean need borrow from high 4bits
// s0 = 0 no lead
#define BIT4x4_SUB_VALUE000000   0,0,0,0,0
#define BIT4x4_SUB_VALUE000001   0,0,0,0,1
#define BIT4x4_SUB_VALUE000010   0,0,0,1,0
#define BIT4x4_SUB_VALUE000011   0,0,0,1,1
#define BIT4x4_SUB_VALUE000101   1,1,1,0,1
#define BIT4x4_SUB_VALUE000110   1,1,1,1,0
#define BIT4x4_SUB_VALUE000111   1,1,1,1,1
#define BIT4x4_SUB_VALUE001000   0,0,1,0,0
#define BIT4x4_SUB_VALUE001001   0,0,1,0,1
#define BIT4x4_SUB_VALUE001010   0,0,1,1,0
#define BIT4x4_SUB_VALUE001011   0,0,1,1,1
#define BIT4x4_SUB_VALUE001101   0,0,0,0,1
#define BIT4x4_SUB_VALUE001110   0,0,0,1,0
#define BIT4x4_SUB_VALUE001111   0,0,0,1,1
#define BIT4x4_SUB_VALUE010000   0,1,0,0,0
#define BIT4x4_SUB_VALUE010001   0,1,0,0,1
#define BIT4x4_SUB_VALUE010010   0,1,0,1,0
#define BIT4x4_SUB_VALUE010011   0,1,0,1,1
#define BIT4x4_SUB_VALUE010101   0,0,1,0,1
#define BIT4x4_SUB_VALUE010110   0,0,1,1,0
#define BIT4x4_SUB_VALUE010111   0,0,1,1,1
#define BIT4x4_SUB_VALUE011000   0,1,1,0,0
#define BIT4x4_SUB_VALUE011001   0,1,1,0,1
#define BIT4x4_SUB_VALUE011010   0,1,1,1,0
#define BIT4x4_SUB_VALUE011011   0,1,1,1,1
#define BIT4x4_SUB_VALUE011101   0,1,0,0,1
#define BIT4x4_SUB_VALUE011110   0,1,0,1,0
#define BIT4x4_SUB_VALUE011111   0,1,0,1,1
#define BIT4x4_SUB_VALUE101000   1,0,1,0,0
#define BIT4x4_SUB_VALUE101001   1,0,1,0,1
#define BIT4x4_SUB_VALUE101010   1,0,1,1,0
#define BIT4x4_SUB_VALUE101011   1,0,1,1,1
#define BIT4x4_SUB_VALUE101101   1,0,0,0,1
#define BIT4x4_SUB_VALUE101110   1,0,0,1,0
#define BIT4x4_SUB_VALUE101111   1,0,0,1,1
#define BIT4x4_SUB_VALUE110000   1,1,0,0,0
#define BIT4x4_SUB_VALUE110001   1,1,0,0,1
#define BIT4x4_SUB_VALUE110010   1,1,0,1,0
#define BIT4x4_SUB_VALUE110011   1,1,0,1,1
#define BIT4x4_SUB_VALUE110101   1,0,1,0,1
#define BIT4x4_SUB_VALUE110110   1,0,1,1,0
#define BIT4x4_SUB_VALUE110111   1,0,1,1,1
#define BIT4x4_SUB_VALUE111000   1,1,1,0,0
#define BIT4x4_SUB_VALUE111001   1,1,1,0,1
#define BIT4x4_SUB_VALUE111010   1,1,1,1,0
#define BIT4x4_SUB_VALUE111011   1,1,1,1,1
#define BIT4x4_SUB_VALUE111101   1,1,0,0,1
#define BIT4x4_SUB_VALUE111110   1,1,0,1,0
#define BIT4x4_SUB_VALUE111111   1,1,0,1,1
