#pragma once

#include"bool_delay_invoke_if.h"
#include"bool_not.h"
#include"byte_less.h"
#include"byte_equal.h"
#include"byte_shift_attribute.h"
#include"byte_shift_right.h"
#include"byte_sub.h"
#include"byte_add.h"
#include"byte_shift_left.h"
#include"uint8_sub_n.h"
#include"uint8_to_byte.h"
#include"uint8_to_bool.h"

//    refer to A3D_PP_DIV


#define A3D_PP_BYTE_MOD(byte1, byte2)                               \
			A3D_PP_BYTE_MOD_REPARSE1( A3D_PP_DELAY_INVOKE_IF(       \
				A3D_PP_BYTE_LESS(byte2, byte1),                     \
				A3D_PP_BYTE_MOD_LT,                                 \
				A3D_PP_BYTE_MOD_GE,                                 \
				(byte1, byte2, A3D_PP_BYTE_SHIFT_ATTR(byte2)) ))    \

//byte2 >= byte1
#define A3D_PP_BYTE_MOD_GE(byte1, byte2, _0,_1,_2,_3 )              \
			A3D_PP_BYTE_MOD_REPARSE2( A3D_PP_DELAY_INVOKE_IF(       \
				A3D_PP_BYTE_EQUAL(byte1, byte2),                    \
				A3D_PP_BYTE_MOD_EQ,                                 \
				A3D_PP_BYTE_MOD_GT, (byte1)))

//byte1 <  byte2 no change
#define A3D_PP_BYTE_MOD_GT(byte) byte
//byte1 == byte2 return 0
#define A3D_PP_BYTE_MOD_EQ(byte) (0,0,0,0,0,0,0,0)  
//byte1 >  byte2 
#define A3D_PP_BYTE_MOD_LT(byte1, byte2, can_shift, lzeros, rzeros, bit_width)             \
			A3D_PP_BYTE_MOD_REPARSE2( A3D_PP_CONNECT(                                      \
				A3D_PP_BYTE_MOD_DO_1TH_SHIFT,                                              \
				(byte1, byte2, A3D_PP_BYTE_SHIFT_ATTR( byte1), lzeros, rzeros)))

//return result
#define A3D_PP_BYTE_MOD_RETURN(byte, ...)  byte

// -------------------------------  1th shift,cmp,sub ----------------------------------------
//do 1th shift
#define A3D_PP_BYTE_MOD_DO_1TH_SHIFT(byte1, byte2, _0, lzeros1, _1,_2, lzeros2, _3)        \
			A3D_PP_BYTE_MOD_DO_1TH_SHIFT_HELPER(byte1, byte2, A3D_PP_SUB(lzeros2, lzeros1))

#define A3D_PP_BYTE_MOD_DO_1TH_SHIFT_HELPER(byte1, byte2, sft_cnt)                         \
			A3D_PP_BYTE_MOD_DO_1TH_CMP(A3D_PP_BYTE_SHIFT_LEFT(byte2, sft_cnt),             \
					byte1, byte2, sft_cnt)

//do 1th cmp
#define A3D_PP_BYTE_MOD_DO_1TH_CMP(byte2_shift, byte1, byte2, sft_cnt )                    \
			A3D_PP_BYTE_MOD_DO_1TH_CMP_HELPER(A3D_PP_BYTE_LESS(byte1, byte2_shift),        \
				byte2_shift, byte1, byte2, sft_cnt )

//-- sft_cnt and generate 1th result
//           if   cmp = 1 =>bit = 0, do next shift
//           else cmp = 0 =>bit = 1, do 1th sub and byte1 = byte1 - byte2_shift 
#define A3D_PP_BYTE_MOD_DO_1TH_CMP_HELPER(cmp, byte2_shift, byte1, byte2, sft_cnt)         \
			A3D_PP_BYTE_MOD_REPARSE3( A3D_PP_DELAY_INVOKE_IF(cmp,                          \
				A3D_PP_BYTE_MOD_DO_2TH_SHIFT,                                              \
				A3D_PP_BYTE_MOD_DO_1TH_SUB,                                                \
				( byte2_shift, byte1, byte2, A3D_PP_SUB_ONE(sft_cnt)))) 

// if need , do 1th sub
#define A3D_PP_BYTE_MOD_DO_1TH_SUB(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_2TH_SHIFT(byte2_shift, A3D_PP_BYTE_SUB(byte1,               \
				byte2_shift),byte2, sft_cnt)                   

//----------------------------------------- 2th shift, cmp, sub ------------------------------------
#define A3D_PP_BYTE_MOD_DO_2TH_SHIFT( byte2_shift, byte1, byte2, sft_cnt)	               \
			A3D_PP_BYTE_MOD_DO_2TH_CMP(A3D_PP_BYTE_SHIFT_LEFT(byte2, sft_cnt),             \
				byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_2TH_CMP(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_2TH_CMP_HELPER(A3D_PP_BYTE_LESS(byte1, byte2_shift),        \
				byte2_shift, byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_2TH_CMP_HELPER(cmp, byte2_shift, byte1, byte2, sft_cnt)         \
			A3D_PP_BYTE_MOD_REPARSE4(A3D_PP_DELAY_INVOKE_IF(cmp,                           \
				A3D_PP_BYTE_MOD_DO_2TH_CHECK_END,                                          \
				A3D_PP_BYTE_MOD_DO_2TH_SUB,                                                \
				( byte2_shift, byte1, byte2, sft_cnt)  ) ) 

#define A3D_PP_BYTE_MOD_DO_2TH_SUB(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_2TH_CHECK_END(byte2_shift,                                  \
				A3D_PP_BYTE_SUB(byte1, byte2_shift), byte2, sft_cnt)

//if sft_cnt == 0 return result
#define A3D_PP_BYTE_MOD_DO_2TH_CHECK_END(_, byte1, byte2, sft_cnt)                         \
			A3D_PP_BYTE_MOD_REPARSE5( A3D_PP_DELAY_INVOKE_IF( A3D_PP_INT_BOOL(sft_cnt),    \
				A3D_PP_BYTE_MOD_DO_3TH_SHIFT,                                              \
				A3D_PP_BYTE_MOD_RETURN,                                                    \
				(byte1, byte2, A3D_PP_SUB_ONE(sft_cnt))  ))
//---------------------------------------- 3th shift, cmp, sub --------------------------------
#define A3D_PP_BYTE_MOD_DO_3TH_SHIFT(byte1, byte2, sft_cnt)	             	               \
			A3D_PP_BYTE_MOD_DO_3TH_CMP(A3D_PP_BYTE_SHIFT_LEFT(byte2, sft_cnt),             \
				byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_3TH_CMP(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_3TH_CMP_HELPER(A3D_PP_BYTE_LESS(byte1, byte2_shift),        \
				byte2_shift, byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_3TH_CMP_HELPER(cmp, byte2_shift, byte1, byte2, sft_cnt)         \
			A3D_PP_BYTE_MOD_REPARSE6(A3D_PP_DELAY_INVOKE_IF(cmp,                           \
				A3D_PP_BYTE_MOD_DO_3TH_CHECK_END,                                          \
				A3D_PP_BYTE_MOD_DO_3TH_SUB,                                                \
				( byte2_shift, byte1, byte2, sft_cnt)  ) ) 

#define A3D_PP_BYTE_MOD_DO_3TH_SUB( byte2_shift, byte1, byte2, sft_cnt)                    \
			A3D_PP_BYTE_MOD_DO_3TH_CHECK_END(byte2_shift,                                  \
				A3D_PP_BYTE_SUB(byte1, byte2_shift), byte2, sft_cnt)

//if sft_cnt == 0 return result
#define A3D_PP_BYTE_MOD_DO_3TH_CHECK_END(_, byte1, byte2, sft_cnt)                         \
			A3D_PP_BYTE_MOD_REPARSE7( A3D_PP_DELAY_INVOKE_IF( A3D_PP_INT_BOOL(sft_cnt),    \
				A3D_PP_BYTE_MOD_DO_4TH_SHIFT,                                              \
				A3D_PP_BYTE_MOD_RETURN,                                                    \
				(byte1, byte2, A3D_PP_SUB_ONE(sft_cnt))  ))

//---------------------------------------- 4th shift, cmp, sub --------------------------------
#define A3D_PP_BYTE_MOD_DO_4TH_SHIFT(byte1, byte2, sft_cnt)	             	               \
			A3D_PP_BYTE_MOD_DO_4TH_CMP(A3D_PP_BYTE_SHIFT_LEFT(byte2, sft_cnt),             \
				byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_4TH_CMP(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_4TH_CMP_HELPER(A3D_PP_BYTE_LESS(byte1, byte2_shift),        \
				byte2_shift, byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_4TH_CMP_HELPER(cmp, byte2_shift, byte1, byte2, sft_cnt)         \
			A3D_PP_BYTE_MOD_REPARSE8(A3D_PP_DELAY_INVOKE_IF(cmp,                           \
				A3D_PP_BYTE_MOD_DO_4TH_CHECK_END,                                          \
				A3D_PP_BYTE_MOD_DO_4TH_SUB,                                                \
				( byte2_shift, byte1, byte2, sft_cnt)  ) ) 

#define A3D_PP_BYTE_MOD_DO_4TH_SUB(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_4TH_CHECK_END(byte2_shift,                                  \
				A3D_PP_BYTE_SUB(byte1, byte2_shift), byte2, sft_cnt)

//if sft_cnt == 0 return result
#define A3D_PP_BYTE_MOD_DO_4TH_CHECK_END(_, byte1, byte2, sft_cnt)                         \
			A3D_PP_BYTE_MOD_REPARSE9( A3D_PP_DELAY_INVOKE_IF( A3D_PP_INT_BOOL(sft_cnt),    \
				A3D_PP_BYTE_MOD_DO_5TH_SHIFT,                                              \
				A3D_PP_BYTE_MOD_RETURN,                                                    \
				(byte1, byte2, A3D_PP_SUB_ONE(sft_cnt))  ))
//---------------------------------------- 5th shift, cmp, sub --------------------------------
#define A3D_PP_BYTE_MOD_DO_5TH_SHIFT(byte1, byte2, sft_cnt)	             	               \
			A3D_PP_BYTE_MOD_DO_5TH_CMP(A3D_PP_BYTE_SHIFT_LEFT(byte2, sft_cnt),             \
				byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_5TH_CMP(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_5TH_CMP_HELPER(A3D_PP_BYTE_LESS(byte1, byte2_shift),        \
				byte2_shift, byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_5TH_CMP_HELPER(cmp, byte2_shift, byte1, byte2, sft_cnt)         \
			A3D_PP_BYTE_MOD_REPARSE10(A3D_PP_DELAY_INVOKE_IF(cmp,                          \
				A3D_PP_BYTE_MOD_DO_5TH_CHECK_END,                                          \
				A3D_PP_BYTE_MOD_DO_5TH_SUB,                                                \
				( byte2_shift, byte1, byte2, sft_cnt)  ) ) 

#define A3D_PP_BYTE_MOD_DO_5TH_SUB(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_5TH_CHECK_END(byte2_shift,                                  \
				A3D_PP_BYTE_SUB(byte1, byte2_shift), byte2, sft_cnt)

//if sft_cnt == 0 return result
#define A3D_PP_BYTE_MOD_DO_5TH_CHECK_END(_, byte1, byte2, sft_cnt)                         \
			A3D_PP_BYTE_MOD_REPARSE11( A3D_PP_DELAY_INVOKE_IF( A3D_PP_INT_BOOL(sft_cnt),   \
				A3D_PP_BYTE_MOD_DO_6TH_SHIFT,                                              \
				A3D_PP_BYTE_MOD_RETURN,                                                    \
				(byte1, byte2, A3D_PP_SUB_ONE(sft_cnt))  ))
//---------------------------------------- 6th shift, cmp, sub --------------------------------
#define A3D_PP_BYTE_MOD_DO_6TH_SHIFT(byte1, byte2, sft_cnt)	             	               \
			A3D_PP_BYTE_MOD_DO_6TH_CMP(A3D_PP_BYTE_SHIFT_LEFT(byte2, sft_cnt),             \
				byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_6TH_CMP(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_6TH_CMP_HELPER(A3D_PP_BYTE_LESS(byte1, byte2_shift),        \
				byte2_shift, byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_6TH_CMP_HELPER(cmp, byte2_shift, byte1, byte2, sft_cnt)         \
			A3D_PP_BYTE_MOD_REPARSE12(A3D_PP_DELAY_INVOKE_IF(cmp,                          \
				A3D_PP_BYTE_MOD_DO_6TH_CHECK_END,                                          \
				A3D_PP_BYTE_MOD_DO_6TH_SUB,                                                \
				( byte2_shift, byte1, byte2, sft_cnt)  ) ) 

#define A3D_PP_BYTE_MOD_DO_6TH_SUB(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_6TH_CHECK_END(byte2_shift,                                  \
				A3D_PP_BYTE_SUB(byte1, byte2_shift), byte2, sft_cnt)

//if sft_cnt == 0 return result
#define A3D_PP_BYTE_MOD_DO_6TH_CHECK_END(_, byte1, byte2, sft_cnt)                         \
			A3D_PP_BYTE_MOD_REPARSE13( A3D_PP_DELAY_INVOKE_IF( A3D_PP_INT_BOOL(sft_cnt),   \
				A3D_PP_BYTE_MOD_DO_7TH_SHIFT,                                              \
				A3D_PP_BYTE_MOD_RETURN,                                                    \
				(byte1, byte2, A3D_PP_SUB_ONE(sft_cnt))  ))

//---------------------------------------- 7th shift, cmp, sub --------------------------------
#define A3D_PP_BYTE_MOD_DO_7TH_SHIFT(byte1, byte2, sft_cnt)	             	               \
			A3D_PP_BYTE_MOD_DO_7TH_CMP(A3D_PP_BYTE_SHIFT_LEFT(byte2, sft_cnt),             \
				byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_7TH_CMP(byte2_shift, byte1, byte2, sft_cnt)                     \
			A3D_PP_BYTE_MOD_DO_7TH_CMP_HELPER(A3D_PP_BYTE_LESS(byte1, byte2_shift),        \
				byte2_shift, byte1, byte2, sft_cnt)

#define A3D_PP_BYTE_MOD_DO_7TH_CMP_HELPER(cmp, byte2_shift, byte1, byte2, sft_cnt)         \
			A3D_PP_BYTE_MOD_REPARSE14(A3D_PP_DELAY_INVOKE_IF(cmp,                          \
				A3D_PP_BYTE_MOD_DO_7TH_SUB,                                                \
				A3D_PP_BYTE_MOD_RETURN,                                                    \
				( byte2_shift, byte1, byte2, sft_cnt))) 

#define A3D_PP_BYTE_MOD_DO_7TH_SUB(result, byte2_shift, byte1, byte2, sft_cnt)             \
			A3D_PP_BYTE_MOD_RETURN(A3D_PP_BYTE_SUB(byte1, byte2_shift), byte2, sft_cnt)   

////////////////////////////////////////////////////////////////////////////////////////////
//helper function
#define A3D_PP_BYTE_MOD_REPARSE1(...) A3D_PP_BYTE_MOD_REPARSE1_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE1_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE2(...) A3D_PP_BYTE_MOD_REPARSE2_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE2_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE3(...) A3D_PP_BYTE_MOD_REPARSE3_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE3_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE4(...) A3D_PP_BYTE_MOD_REPARSE4_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE4_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE5(...) A3D_PP_BYTE_MOD_REPARSE5_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE5_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE6(...) A3D_PP_BYTE_MOD_REPARSE6_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE6_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE7(...) A3D_PP_BYTE_MOD_REPARSE7_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE7_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE8(...) A3D_PP_BYTE_MOD_REPARSE8_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE8_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE9(...) A3D_PP_BYTE_MOD_REPARSE9_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE9_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE10(...) A3D_PP_BYTE_MOD_REPARSE10_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE10_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE11(...) A3D_PP_BYTE_MOD_REPARSE11_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE11_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE12(...) A3D_PP_BYTE_MOD_REPARSE12_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE12_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE13(...) A3D_PP_BYTE_MOD_REPARSE13_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE13_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MOD_REPARSE14(...) A3D_PP_BYTE_MOD_REPARSE14_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MOD_REPARSE14_HELPER(...) __VA_ARGS__