#pragma once
#include<core/mpl/bool_.h>
#include<core/mpl/if.h>

namespace Aurora3D
{
	namespace mpl
	{
		//lazy
		template<typename... Args> struct Or:public False_ {};
		template<typename First, typename... Other> struct Or<First, Other...> : public TypeIf<First, True_, Or<Other...>>{};
	}
}