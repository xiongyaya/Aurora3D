#pragma once


#include"../bool_.h"

namespace Aurora3D
{
	namespace mpl
	{
		//lazy
		template<typename T> struct IsRValueRef : public False_ {};
		template<typename T> struct IsRValueRef<T&&> :public True_ {};
	}
}