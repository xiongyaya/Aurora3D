#pragma once

#include"is_lvalue_ref.h"
#include"is_rvalue_ref.h"
#include<core/mpl/logic_or.h>

namespace Aurora3D
{
	namespace mpl
	{
		//lazy 
		template<typename T> struct IsRef :public Or<IsLValueRef<T>, IsRValueRef<T>> {};
	}
}