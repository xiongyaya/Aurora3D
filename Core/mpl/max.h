#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/binary_op_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//max(T1 ,T2, T3 ...)
		A3D_MPL_BINARY_OP_DECL(Max, max);
		
		template<int64 N, int64... NArgs> struct IntMax:public Max<Int_<N>, Int_<NArgs>...> {};

#define MaxV(N, ...) (IntMax<N,__VA_ARGS__>::value)

	}
}