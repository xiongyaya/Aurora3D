#pragma once

#include<Core/mpl/if.h>

namespace Aurora3D
{
	namespace mpl
	{
		//if B is true derive T1, then derive T2
		template<bool B, typename T1, typename T2> struct ConditionDerive :public If<B, T1, T2>::type {};

		//if B is True_ derive T1, then derive T2
		template<typename C, typename T1, typename T2> struct TypeConditionDerive :public If<C::value, T1, T2>::type {};
	}
}