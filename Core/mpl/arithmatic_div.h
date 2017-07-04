#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/binary_op_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T1, typename T2>
		struct Div2 :public Int_ < (T1::value / T2::value) > {};

		template<typename T, typename... TArgs> struct Div :public BinaryOperator<Div2, T, TArgs...> {};
	}
}