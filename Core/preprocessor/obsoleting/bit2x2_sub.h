#pragma once

//lookup table
#define A3D_PP_BIT2x2_SUB(x1,x0,y1,y0)      A3D_PP_BIT2x2_SUB_FAST(x1,x0,y1,y0)
#define A3D_PP_BIT2x2_SUB_FAST(x1,x0,y1,y0) A3D_PP_BIT2x2_SUB_VALUE##x1##x0##y1##y0
//   result (sign,high,low)
//   sign = 1 means lead from high bit2x2
//   sign = 0 means no need to lead
//   (0,0,0) (0,0,1) (0,1,0) (0,1,1)
//   (1,0,0) (1,0,1) (1,1,0) (1,1,1)
#define A3D_PP_BIT2x2_SUB_VALUE0000 0,0,0
#define A3D_PP_BIT2x2_SUB_VALUE0001 1,1,1
#define A3D_PP_BIT2x2_SUB_VALUE0010 1,1,0
#define A3D_PP_BIT2x2_SUB_VALUE0011 1,0,1
#define A3D_PP_BIT2x2_SUB_VALUE0100 0,0,1
#define A3D_PP_BIT2x2_SUB_VALUE0101 0,0,0
#define A3D_PP_BIT2x2_SUB_VALUE0110 1,1,1
#define A3D_PP_BIT2x2_SUB_VALUE0111 1,1,0
#define A3D_PP_BIT2x2_SUB_VALUE1000 0,1,0
#define A3D_PP_BIT2x2_SUB_VALUE1001 0,0,1
#define A3D_PP_BIT2x2_SUB_VALUE1010 0,0,0
#define A3D_PP_BIT2x2_SUB_VALUE1011 1,1,1
#define A3D_PP_BIT2x2_SUB_VALUE1100 0,1,1
#define A3D_PP_BIT2x2_SUB_VALUE1101 0,1,0
#define A3D_PP_BIT2x2_SUB_VALUE1110 0,0,1
#define A3D_PP_BIT2x2_SUB_VALUE1111 0,0,0