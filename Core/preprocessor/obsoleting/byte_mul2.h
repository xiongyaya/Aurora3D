#pragma once
#include"byte_add.h"
#include"byte_shift_attribute.h"
#include"byte_shift_left.h"
#include"bool_delay_invoke_if.h"
#include"bool_and.h"
#include"uint8_less.h"
#include"connect.h"

//    0 1 1 0 1 1 1 0           bit_width 6
//  X 0 0 0 0 0 1 1 0           bit_width 2
//  ------------------
//    
// if byte1 or byte2 is 0,1,2,4,8,16,32,64,128 do shift_left instead of mul
// else compare bit_width of byte1 and byte2, do sperate-shift-add operation
#define A3D_PP_BYTE_MUL(byte1, byte2)	                                                                       \
			A3D_PP_BYTE_MUL_REPARSE1( A3D_PP_CONNECT( A3D_PP_BYTE_MUL_ATTR_EXPLICITE,                          \
				(byte1,byte2,A3D_PP_BYTE_SHIFT_ATTR(byte1),A3D_PP_BYTE_SHIFT_ATTR(byte2)) ))

#define A3D_PP_BYTE_MUL_ATTR_EXPLICITE(byte1, byte2, can_shift1, lzeros1, rzeros1, bit_width1, can_shift2, lzeros2, rzeros2, bit_width2) \
			A3D_PP_BYTE_MUL_REPARSE2( A3D_PP_DELAY_INVOKE_IF( A3D_PP_OR(can_shift1, can_shift2),                \
				A3D_PP_BYTE_MUL_SHIFT_INSTEAD,                                                                  \
				A3D_PP_BYTE_MUL_SPERATE_ADD_INSTEAD,                                                            \
			    (byte1, byte2, can_shift1, lzeros1, rzeros1, bit_width1, can_shift2,                            \
				lzeros2, rzeros2, bit_width2) ) )

#define A3D_PP_BYTE_MUL_SHIFT_INSTEAD(byte1, byte2, can_shift1, _0, rzeros1, bit_width1, can_shift2,_1, rzeros2, bit_width2) \
			A3D_PP_BYTE_MUL_REPARSE3(A3D_PP_DELAY_INVOKE_IF(can_shift1,                                         \
				A3D_PP_BYTE_MUL_SHIFT_BYTE2_INSTEAD,                                                            \
				A3D_PP_BYTE_MUL_SHIFT_BYTE1_INSTEAD,                                                            \
				(byte1, byte2, rzeros1, rzeros2) ) )

#define A3D_PP_BYTE_MUL_SHIFT_BYTE1_INSTEAD(byte1, _0, _1, rzeros2) A3D_PP_BYTE_SHIFT_LEFT(byte1, rzeros2)     
#define A3D_PP_BYTE_MUL_SHIFT_BYTE2_INSTEAD(_0, byte2, rzeros1, _1) A3D_PP_BYTE_SHIFT_LEFT(byte2, rzeros1)     

#define A3D_PP_BYTE_MUL_SPERATE_ADD_INSTEAD(byte1, byte2, can_shift1, lzeros1, rzeros1, bit_width1, can_shift2, lzeros2, rzeros2, bit_width2) \
			A3D_PP_BYTE_MUL_REPARSE3(A3D_PP_DELAY_INVOKE_IF(A3D_PP_LESS(bit_width1, bit_width2),                \
				A3D_PP_BYTE_MUL_DO_UNPACK_BYTE1,                                                                \
				A3D_PP_BYTE_MUL_DO_UNPACK_BYTE2,                                                                \
				(byte1, byte2, lzeros1, bit_width1, lzeros2, bit_width2)))

#define A3D_PP_BYTE_MUL_DO_UNPACK_BYTE1(byte1, byte2, lzeros1,bit_width1, lzeros2,bit_width2)                   \
			A3D_PP_BYTE_MUL_REPARSE4(A3D_PP_CONNECT( A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD,                      \
				(byte2,bit_width1, A3D_PP_BYTE_MUL_UNPACK( A3D_PP_BYTE_SHIFT_LEFT( byte1, lzeros1) ))))

#define A3D_PP_BYTE_MUL_DO_UNPACK_BYTE2(byte1, byte2, lzeros1,bit_width1, lzeros2,bit_width2)                   \
			A3D_PP_BYTE_MUL_REPARSE4(A3D_PP_CONNECT( A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD,                      \
				(byte1, bit_width2, A3D_PP_BYTE_MUL_UNPACK( A3D_PP_BYTE_SHIFT_LEFT(byte2, lzeros2) ))))

// dispatcher to A3D_PP_BYTE_MUL_DO_UNPACK_BYTE(n)
#define A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD(byte, bit_width, b7,b6,b5,b4,b3,b2,b1,b0)                          \
			A3D_PP_BYTE_MUL_REPARSE5(A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD##bit_width##(byte,                    \
				b7, b6, b5, b4, b3, b2, b1, b0))

#define A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD2(byte, b7, b6, ...)                                                \
			A3D_PP_BYTE_ADD( A3D_PP_BYTE_SHIFT_LEFT(byte, 1), A3D_PP_BYTE_MUL_UNCHANGE_IF(b6, byte) ) 

#define A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD3(byte, b7, b6, b5, ...)                                            \
			A3D_PP_BYTE_ADD3( A3D_PP_BYTE_SHIFT_LEFT(byte, 2),                                                  \
				A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b6, byte, 1), A3D_PP_BYTE_MUL_UNCHANGE_IF(b5,byte) )

#define A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD4(byte, b7, b6, b5, b4, ...)                                        \
			A3D_PP_BYTE_ADD4( A3D_PP_BYTE_SHIFT_LEFT(byte, 3), A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b6, byte, 2),      \
				A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b5, byte, 1), A3D_PP_BYTE_MUL_UNCHANGE_IF(b4, byte))

#define A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD5(byte, b7, b6, b5, b4, b3, ...)                                    \
			   A3D_PP_BYTE_ADD(  A3D_PP_BYTE_SHIFT_LEFT(byte, 4), A3D_PP_BYTE_ADD4(                             \
					A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b6, byte, 3), A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b6, byte, 2),     \
					A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b5, byte, 1), A3D_PP_BYTE_MUL_UNCHANGE_IF(b4, byte)))

#define A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD6(byte, b7, b6, b5, b4, b3, b2, ...)                                \
			   A3D_PP_BYTE_ADD(                                                                                 \
					A3D_PP_BYTE_ADD(                                                                            \
						A3D_PP_BYTE_SHIFT_LEFT(byte, 5),A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b6, byte, 4)),            \
					A3D_PP_BYTE_ADD4(                                                                           \
						A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b5, byte, 3), A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b4, byte, 2), \
						A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b3, byte, 1), A3D_PP_BYTE_MUL_UNCHANGE_IF(b2, byte)))     \

#define A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD7(byte, b7, b6, b5, b4, b3, b2, b1, _)                              \
			   A3D_PP_BYTE_ADD(                                                                                 \
					A3D_PP_BYTE_ADD3( A3D_PP_BYTE_SHIFT_LEFT(byte, 6),                                          \
						A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b6, byte, 5), A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b5, byte, 4)),\
					A3D_PP_BYTE_ADD4(                                                                           \
						A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b4, byte, 3), A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b3, byte, 2), \
						A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(b2, byte, 1), A3D_PP_BYTE_MUL_UNCHANGE_IF(b1, byte)))     

//both byte1 and byte2 is 8-bit-width means highest bit is 1, out-of-range
#define A3D_PP_BYTE_MUL_DO_SPERATE_SHIFT_ADD8(...) (1,1,1,1,1,1,1,1)


//helper function
#define A3D_PP_BYTE_MUL_UNPACK(byte) A3D_PP_BYTE_MUL_UNPACK_STEP1(byte)
#define A3D_PP_BYTE_MUL_UNPACK_STEP1(byte) A3D_PP_BYTE_MUL_REPARSE6( A3D_PP_BYTE_MUL_UNPACK_STEP2##byte)
#define A3D_PP_BYTE_MUL_UNPACK_STEP2(...)  __VA_ARGS__
#define A3D_PP_BYTE_MUL_REPARSE1(...) A3D_PP_BYTE_MUL_REPARSE1_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MUL_REPARSE1_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MUL_REPARSE2(...) A3D_PP_BYTE_MUL_REPARSE2_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MUL_REPARSE2_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MUL_REPARSE3(...) A3D_PP_BYTE_MUL_REPARSE3_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MUL_REPARSE3_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MUL_REPARSE4(...) A3D_PP_BYTE_MUL_REPARSE4_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MUL_REPARSE4_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MUL_REPARSE5(...) A3D_PP_BYTE_MUL_REPARSE5_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MUL_REPARSE5_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MUL_REPARSE6(...) A3D_PP_BYTE_MUL_REPARSE6_HELPER(__VA_ARGS__)
#define A3D_PP_BYTE_MUL_REPARSE6_HELPER(...) __VA_ARGS__
#define A3D_PP_BYTE_MUL_SHIFT_LEFT_IF(Condi, byte, n) A3D_PP_IF(Condi, A3D_PP_BYTE_SHIFT_LEFT(byte,n), (0,0,0,0,0,0,0,0) )
#define A3D_PP_BYTE_MUL_UNCHANGE_IF(Condi, byte) A3D_PP_IF(Condi, byte, (0,0,0,0,0,0,0,0) )

			
