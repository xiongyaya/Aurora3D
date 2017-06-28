#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsEmpty :public Bool_<__is_empty(T)> {};
		
#define IsEmpty_v(T)   IsEmpty<T>::value
#define NotEmpty_v(T)  (!IsEmpty<T>::value)
	}
}