#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsPod :public Bool_<__is_pod(T)> {};
		template<typename T> using IsPod_t = typename IsPod<T>::type;
#define IsPod_v(T)   IsPod<T>::value
#define NotPod_v(T)  (!IsPod<T>::value)
	}
}