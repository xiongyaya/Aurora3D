#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/binary_op_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//for 2 integral type 
		template<typename T1, typename T2>
		struct Max2 :public Int_ <  (T1::value>T2::value ? T1::value : T2::value) >{};

		template<typename T, typename... TArgs> struct Max :public BinaryOperator<Max2, T, TArgs...> {};
		template<int64 V, int64... VArgs> struct IntMax :public Max<Int_<V>, Int_<VArgs>...> {};

	}
}