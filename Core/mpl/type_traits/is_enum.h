#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsEnum:public Bool_<__is_enum(T)> {};
		template<typename T> using IsEnum_t = typename IsEnum<T>::type;
#define IsEnum_v(T)   IsEnum<T>::value
#define NotEnum_v(T)  (!IsEnum<T>::value)
	}
}