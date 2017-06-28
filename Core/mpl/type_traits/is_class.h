#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsClass:public Bool_<__is_class(T)>{};
		
#define IsClass_v(T)         IsClass<T>::value
#define NotClassOf_v(T)       (!IsClass<T>::value)
	}
}