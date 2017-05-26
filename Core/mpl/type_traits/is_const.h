#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsConst: public False_{};
		template<typename T> struct IsConst<T const>: public True_{};
		template<typename T> using IsConst_t = typename IsConst<T>::type;
#define IsConst_v(T)         IsConst<T>::value
#define NotConst_v(T)       (!IsConst<T>::value)
	}
}