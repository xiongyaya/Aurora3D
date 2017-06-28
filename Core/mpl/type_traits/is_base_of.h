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
		template<typename T1, typename T2> struct IsBaseOf  :public Bool_<__is_base_of(T1, T2)> {};
		//T1 derived from T2
		template<typename T1, typename T2> struct IsChildOf :public And < IsBaseOf<T2, T1>, Not<IsSame<T1, T2>> >{};

		
#define IsBaseOf_v(T)           IsBaseOf<T>::value
#define IsChildOf_v(T)          IsChildOf<T>::value
#define NotBaseOf_v(T)        (!IsBaseOf<T>::value)
#define NotChildOf_v(T)       (!IsChildOf<T>::value)
	}
}