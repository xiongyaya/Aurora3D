#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/binary_op_decl.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<typename  T1, typename T2> struct BitOr2 :public Int_<T1::value | T2::value> {};
		template<typename T, typename... TArgs> struct BitOr :public BinaryOperator<BitOr2, T, TArgs...> {};
		

	}
}