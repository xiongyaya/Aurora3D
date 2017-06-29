#pragma once

#include<Core/preprocessor/range.h>
#include<Core/preprocessor/seq_foreach_item.h>
#include<Core/mpl/ingore_t.h>

namespace Aurora3D
{
	namespace mpl
	{

		template<A3D_PP_RANGE(typename T, 0, 10)>
		struct Vector10
		{

		};

#define VECTOR_N_DECLARE()
		



	}
}