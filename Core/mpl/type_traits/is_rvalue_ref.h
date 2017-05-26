#pragma once


#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		//lazy
		template<typename T> struct IsRValueRef : public False_ {};
		template<typename T> struct IsRValueRef<T&&> :public True_ {};
		template<typename T> using IsRValueRef_t = typename IsRValueRef<T>::type;
#define IsRValueRef_v(T)   IsRValueRef<T>::value
#define NotRValueRef_v(T)  (!IsRValueRef<T>::value)
	}
}