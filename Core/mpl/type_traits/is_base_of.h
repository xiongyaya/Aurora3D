#pragma once

#include<core/mpl/bool_.h>
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_not.h>
#include<Core/mpl/type_traits/is_same.h>
namespace Aurora3D
{
	namespace mpl
	{
		//T1 may be same to T2
		template<typename T1, typename T2> struct IsBaseOf :public Bool_<__is_base_of(T1, T2)> {};
		//T1 can't be same with T2
		template<typename T1, typename T2> struct IsDeriveFrom :public And< Bool_<__is_base_of(T2, T1)>, Not<IsSame<T1,T2>>>{};
	}
}