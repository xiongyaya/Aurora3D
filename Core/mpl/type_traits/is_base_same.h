#pragma once

#include<Core/mpl/bool_.h>
#include<Core/mpl/type_traits/is_same.h>
#include<Core/mpl/type_traits/remove_cv.h>
namespace Aurora3D
{
	namespace mpl
	{
		//ingore const volatile and &,&&
		template<typename A, typename B> struct IsBaseSame : public IsSame< typename RemoveCV<A>::type &, typename RemoveCV<B>::type &> {};

#define IsBaseSame_v(A,B) IsBaseSame<A,B>::value
#define NotBaseSame_v(A,B) !IsBaseSame<A,B>::value

	}
}