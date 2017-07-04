#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/binary_op_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T1, typename T2>
		struct Add2 :public Int_ < (T1::value + T2::value) >{};
		
		//wrap type TypeMin< T1<v1>, T2<v2>, T3<v3>, ... > 
		template<typename T, typename... TArgs> struct Add :public BinaryOperator<Add2, T, TArgs...> {};
	}
}