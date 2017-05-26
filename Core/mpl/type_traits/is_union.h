#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsUnion : Bool_<__is_union(T)> {};
		template<typename T> using IsUnion_t = typename IsUnion<T>::type;
#define IsUnion_v(T)   IsUnion<T>::value
#define NotUnit_v(T)  (!IsUnion<T>::value)
	}
}