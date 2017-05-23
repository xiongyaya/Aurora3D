#pragma once

#include<Core/mpl/integral_.h>

namespace Aurora3D
{
	namespace mpl
	{
		//helper function
		template<typename T> constexpr T IntegralMin(T t1, T t2) { return t1 < t2 ? t1 : t2; }
		//template<typename T1, typename T2> constexpr auto IntegralMin(T1 t1, T2 t2) ->decltype(t1 < t2 ? t1 : t2) { return t1 < t2 ? t1 : t2; }

		//explicit Min<T, t1, t2, t3,...>
		template<typename T, T t1, T... others> struct Min :public Integral_<T, IntegralMin(t1, Min<T, others...>::value)> {};
		template<typename T, T t> struct Min<T, t> :public Integral_<T, t> {};

		//wrap type Min< T<v1>, T<v2>, T<v3>, ... > 
		template<typename First, typename... Others> struct TypeMin : public Min<typename First::value_type, First::value, TypeMin<Others...>::value> {};
		template<typename T> struct TypeMin<T> :public Integral_<typename T::value_type, T::value> {};

		//for int and size_t min version 
		template<int t1, int... others> struct IntMin :public Min<int, t1, others...> {};
		template<size_t t1, size_t... others> struct SizetMin :public Min<size_t, t1, others...> {};
	}
}