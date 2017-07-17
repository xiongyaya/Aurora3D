#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/binary_op_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//min(T1 ,T2, T3 ...)
		A3D_MPL_BINARY_OP_DECL(Min, min);

		template<int64 N, int64... NArgs> struct IntMin :public Min<Int_<N>, Int_<NArgs>...> {};

#define MinV(N, ...) (IntMin<N,__VA_ARGS__>::value)
	}
}