#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//for integral binary operator
		// +,-,*,/,%,|,&,^
		// >>, << not suppert Orderless
		template<template<typename P1,typename P2> typename Binary,typename T1, typename... TArgs>
		struct BinaryOperator :public Binary<T1, typename BinaryOperator<Binary, TArgs...>::type > {};

		template<template<typename P1, typename P2> typename Binary,typename T>
		struct BinaryOperator<Binary, T> { typedef T type; };

#define  A3D_MPL_BINARY_OP_DECL(OpName, InnerOp)                                                                   \
		template<typename T1, typename T2> struct OpName##2 :public T1::template InnerOp<T2>{};                    \
		template<typename T, typename... TArgs> struct OpName : public BinaryOperator<OpName##2, T, TArgs...> {};  \
		template<typename T, typename... TArgs> using OpName##T = typename OpName<T, TArgs...>::type;
	}
}