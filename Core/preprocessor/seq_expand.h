#pragma once

#define A3D_PP_EXPAND_UNPACK(...) __VA_ARGS__

#define A3D_PP_EXPAND(pair, ...)       A3D_PP_EXPAND_STEP1(pair, __VA_ARGS__)
#define A3D_PP_EXPAND_STEP1(pair, ...) A3D_PP_EXPAND_STEP2##(A3D_PP_EXPAND_UNPACK##pair, __VA_ARGS__) 
#define A3D_PP_EXPAND_STEP2(...)       __VA_ARGS__