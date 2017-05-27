#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsFinal :public Bool_<__is_final(T)> {};
		template<typename T> using IsFinal_t = typename IsFinal<T>::type;
#define IsFinal_v(T)   IsFinal<T>::value
#define NotFinal_v(T)  (!IsFinal<T>::value)
	}
}