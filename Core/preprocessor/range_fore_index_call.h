#include<Core/preprocessor/uint8_sub_one.h>
#include<Core/preprocessor/range_inner_call.h>

#define A3D_PP_RANGE_FORE_INDEX_CALL_REPARSE(expr) A3D_PP_RANGE_FORE_INDEX_CALL_REPARSE_HELPER(expr)

#define A3D_PP_RANGE_FORE_INDEX_CALL_ANOTHER(Index, _, split, fn)  fn(A3D_PP_SUB1(Index), Index, split)


// for(int i=start; i<=end; ++i)
//      first ## i-1 ## suffix ## second ## i ## split
#define A3D_PP_RANGE_FORE_INDEX_CALL(start, end, fn, split)   \
			A3D_PP_RANGE_INNER_CALL(start, end, 1,            \
				A3D_PP_RANGE_FORE_INDEX_CALL_ANOTHER, split, fn)
