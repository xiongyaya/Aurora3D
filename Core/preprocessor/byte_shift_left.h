#pragma once

//n in range[0,7]
#define A3D_PP_BYTE_SHIFT_LEFT( byte, n )       A3D_PP_BYTE_SHIFT_LEFT_FAST( byte, n )
#define A3D_PP_BYTE_SHIFT_LEFT_FAST( byte, n )  A3D_PP_BYTE_SHIFT_LEFT_REPARSE( A3D_PP_BYTE_SHIFT_LEFT_VALUE ## n ## byte )
#define A3D_PP_BYTE_SHIFT_LEFT_REPARSE(...) __VA_ARGS__

#define A3D_PP_BYTE_SHIFT_LEFT_VALUE0( b7, b6, b5, b4, b3, b2, b1, b0) (b7, b6, b5, b4, b3, b2, b1, b0)
#define A3D_PP_BYTE_SHIFT_LEFT_VALUE1( b7, b6, b5, b4, b3, b2, b1, b0) (b6,b5,b4,b3,b2,b1,b0,0)
#define A3D_PP_BYTE_SHIFT_LEFT_VALUE2( b7, b6, b5, b4, b3, b2, b1, b0) (b5,b4,b3,b2,b1,b0,0,0)
#define A3D_PP_BYTE_SHIFT_LEFT_VALUE3( b7, b6, b5, b4, b3, b2, b1, b0) (b4,b3,b2,b1,b0,0,0,0)
#define A3D_PP_BYTE_SHIFT_LEFT_VALUE4( b7, b6, b5, b4, b3, b2, b1, b0) (b3,b2,b1,b0,0,0,0,0)
#define A3D_PP_BYTE_SHIFT_LEFT_VALUE5( b7, b6, b5, b4, b3, b2, b1, b0) (b2,b1,b0,0,0,0,0,0)
#define A3D_PP_BYTE_SHIFT_LEFT_VALUE6( b7, b6, b5, b4, b3, b2, b1, b0) (b1,b0,0,0,0,0,0,0)
#define A3D_PP_BYTE_SHIFT_LEFT_VALUE7( b7, b6, b5, b4, b3, b2, b1, b0) (b0,0,0,0,0,0,0,0)
#define A3D_PP_BYTE_SHIFT_LEFT_VALUE8( b7, b6, b5, b4, b3, b2, b1, b0) A3D_PP_OUT_OF_RANGE_ERROR

