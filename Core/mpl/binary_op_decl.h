#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//for integral binary operator
		// +,-,*,/,%,|,&,^
		// >>, << not suppert Orderless
		template<template<typename P1,typename P2> typename Binary,typename T1, typename... TArgs>
		struct BinaryOperator :public Binary<T1, BinaryOperator<Binary, TArgs...>> {};

		template<template<typename P1, typename P2> typename Binary,typename T>
		struct BinaryOperator<Binary,T> :public T {};

		template<template<typename P> typename Unary, typename T1, typename... TArgs>
		struct UnaryOperator :public Unary<UnaryOperator<Unary, TArgs...>> {};

		template<template<typename P> typename Unary, typename T>
		struct UnaryOperator<Unary, T> :public T {};
	}
}