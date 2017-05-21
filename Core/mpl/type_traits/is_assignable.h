#pragma once

#include"../bool_.h"
#include<Core/mpl/logic_or.h>
#include<Core/mpl/type_traits/remove_cv.h>
#include<Core/mpl/type_traits/is_base_same.h>
namespace Aurora3D
{
	namespace mpl
	{
		//string() = 1  right value assign,  for  compound type, works because compound inner member data is always left value
		//int() = 1     literal assign ,  for  fundumental type, always false, not work 
		template<typename Left, typename Right> struct IsRValueAssignable:public Bool_<__is_assignable(Left, Right)>{};
		template<typename Left, typename Right> struct IsRValueTriviallyAssignable :public Bool_<__is_trivially_assignable(Left, Right)> {};
		template<typename Left, typename Right> struct IsRValueNothrowAssignable :public Bool_<__is_nothrow_assignable(Left, Right)> {};
		
		// use assign function to judge
		//Left t = Right&&  left value assign
		//const Left = Right&&  don't work???????? , use IsBaseSame workaround
		//Base* = Derive*  works
		//Base = Derive    works
		template<typename Left, typename Right> struct IsLValueAssignable : Or< Bool_<__is_assignable(Left&, Right)>, IsBaseSame<Left,Right>> {};
		template<typename Left, typename Right> struct IsLValueTriviallyAssignable :public  Or< Bool_<__is_assignable(Left&, Right)>, IsBaseSame<Left, Right>> {};
		template<typename Left, typename Right> struct IsLValueNothrowAssignable :public  Or< Bool_<__is_assignable(Left&, Right)>, IsBaseSame<Left, Right>> {};
	}
}