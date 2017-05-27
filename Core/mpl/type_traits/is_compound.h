#pragma once

#include<core/mpl/type_traits/is_fundamental.h>
#include<core/mpl/logic_not.h>

namespace Aurora3D
{
	namespace mpl
	{
		
		//lazy
		template<typename T> struct IsCompound :Not< IsFundamental<T>> {};
		template<typename T> using IsCompound_t = typename IsCompound<T>::type;
#define IsCompound_v(T)         IsCompound<T>::value
#define NotCompound_v(T)       (!IsCompound<T>::value)
	}
}