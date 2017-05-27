#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsAbstract :public Bool_<__is_abstract(T)> {};
		template<typename T> using IsAbstract_t = typename IsAbstract<T>::type;
#define IsAbstract_v(T)     IsAbstract<T>::value
#define NotAbstract_v(T)   (!IsAbstract<T>::value)
	}
}