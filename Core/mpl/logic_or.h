#pragma once
#include<core/mpl/bool_.h>
#include<core/mpl/condition_derive.h>

namespace Aurora3D
{
	namespace mpl
	{
		//lazy
		template<typename... Args> struct Or:public False_ {};
		template<typename First, typename... Other> struct Or<First, Other...> 
			: public TypeConditionDerive<First, True_, Or<Other...>>{};
	}
}