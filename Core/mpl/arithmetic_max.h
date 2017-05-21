#pragma once

#include<Core/mpl/integral_type.h>

namespace Aurora3D
{
	namespace mpl
	{
		//helper function, mix compare
		template<typename T> constexpr T IntegralMax(T t1, T t2){ return t1 > t2 ? t1 : t2; }
		//template<typename T1, typename T2> constexpr auto IntegralMax(T1 t1, T2 t2)->decltype(t1 > t2 ? t1 : t2) { return t1 > t2 ? t1 : t2;}

		//explicit Max<T, t1, t2, t3,...>
		template<typename T, T t1, T... others> struct Max :public IntegralType<T, IntegralMax(t1, Max<T, others...>::value)> {};
		template<typename T, T t> struct Max<T, t> :public IntegralType<T, t> {};

		//wrap type Max< T<v1>, T<v2>, T<v3>, ... > 
		template<typename First, typename... Others> struct TypeMax : public Max<typename First::value_type, First::value, TypeMax<Others...>::value> {};
		template<typename T> struct TypeMax<T> :public IntegralType<typename T::value_type, T::value> {};

		//for int and size_t min version
		template<int t1, int... others> struct IntMax:public Max<int, t1, others...> {};
		template<size_t t1, size_t... others> struct SizetMax :public Max<size_t, t1, others...> {};

	}
}