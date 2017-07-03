#pragma once
#include<Core/preprocessor/range_inner_call.h>
#include<Core/preprocessor/seq_unpack.h>
#include<Core/preprocessor/uint8_if.h>
#include<Core/preprocessor/ingore.h>

#define A3D_PP_RANGE_DECLARE_CONNECT3(x, y, z) A3D_PP_RANGE_DECLARE_CONNECT3_STEP1(x, y, z)
#define A3D_PP_RANGE_DECLARE_CONNECT3_STEP1(x, y,z) A3D_PP_RANGE_DECLARE_CONNECT3_STEP2(x##y##z)
#define A3D_PP_RANGE_DECLARE_CONNECT3_STEP2(result) result

#define A3D_PP_RANGE_DECLARE_CONNECT(i, _, prefix, suffix, second, split) \
			prefix##i##suffix second ## i A3D_PP_SEQ_UNPACK(split)

#define A3D_PP_RANGE_CHAIN_DECLARE_CONNECT(i, _, prefix, suffix, second, split) \
			A3D_PP_RANGE_DECLARE_CONNECT3(prefix, A3D_PP_SUB1(i), suffix) second ## i  A3D_PP_SEQ_UNPACK(split)

// for(int i=start; i<=end; ++i)
//      prefix ## i ## suffix  second ## i  split
#define  A3D_PP_RANGE_DECLARE(prefix, suffix, second, start, end, split)   \
			A3D_PP_RANGE_INNER_CALL(start, end, 1,                                     \
				A3D_PP_RANGE_DECLARE_CONNECT, prefix, suffix, second, split)

// for(int i=start; i<=end; ++i)
//      first ## i-1 ## suffix ## second ## i ## split
#define A3D_PP_RANGE_CHAIN_DECLARE(prefix, suffix, second, start, end, split)   \
			A3D_PP_RANGE_INNER_CALL(start, end, 1,                              \
				A3D_PP_RANGE_CHAIN_DECLARE_CONNECT, prefix, suffix, second, split)
