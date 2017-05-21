#pragma once


#include<Core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		//lazy
		template<typename T> struct IsLValueRef : public False_ {};
		template<typename T> struct IsLValueRef<T&> :public True_ {};
	}
}