#pragma once

#include<Core/mpl/bool_.h>
#include<Core/mpl/type_traits/is_same.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<typename T1, typename T2> struct IsValueTypeSame :public IsSame<typename T1::value_type, typename T2::value_type> {};
#define IsValueTypeSameV(T1,T2) (IsValueTypeSame<T1,T2>::value)
	}
}