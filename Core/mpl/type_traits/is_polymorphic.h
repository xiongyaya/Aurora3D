#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsPolymorphic :public Bool_<__is_polymorphic(T)> {};
#define IsPolymorphic_v(T)   IsPolymorphic<T>::value
#define NotPolymorphic_v(T)  (!IsPolymorphic<T>::value)
	}
}