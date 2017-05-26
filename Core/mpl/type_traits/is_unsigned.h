#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsUnsigned :public Bool_ < T(0) < T(-1) > {};
		template<typename T> using IsUnsigned_t = typename IsUnsigned<T>::type;
#define IsUnsigned_v(T)   IsUnsigned<T>::value
#define NotSigned_v(T)  (!IsUnsigned<T>::value)
	}
}