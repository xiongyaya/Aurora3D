#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsStandLayout :public Bool_<__is_standard_layout(T)> {};
		template<typename T> using IsStandLayout_t = typename IsStandLayout<T>::type;
#define IsStandLayout_v(T)   IsStandLayout<T>::value
#define NotStandLayout_v(T)  (!IsStandLayout<T>::value)
	}
}