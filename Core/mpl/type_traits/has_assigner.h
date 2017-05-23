#pragma once

#include<Core/mpl/bool_.h>
#include<Core/mpl/logic_or.h>
#include<Core/mpl/type_traits/remove_cv.h>
#include<Core/mpl/type_traits/is_base_same.h>
#include<Core/mpl/type_traits/add_const_lref.h>
namespace Aurora3D
{
	namespace mpl
	{
		// Left && =? Right && 
#define HAS_ASSIGNER(Left, Right)           __is_assignable(Left, Right)
#define HAS_TRIVIAL_ASSIGNER(Left, Right)   __is_trivially_assignable(Left, Right)
#define HAS_NOTHROW_ASSIGNER(Left, Right)   __is_nothrow_assignable(Left, Right)

		//string() = 1  right value assign,  for  compound type, works because compound inner member data is always left value
		//int() = 1     literal assign ,  for  fundumental type, always false, not work 
		template<typename Left, typename Right> struct CanAnonymousAssign:public Bool_<HAS_ASSIGNER(Left, Right)>{};
		template<typename Left, typename Right> struct CanAnonymousTrivialAssign :public Bool_<HAS_TRIVIAL_ASSIGNER(Left, Right)> {};
		template<typename Left, typename Right> struct CanAnonymousNothrowAssign :public Bool_<HAS_NOTHROW_ASSIGNER(Left, Right)> {};
		
		// use assign function to judge
		//Left t = Right&&  left value assign
		//const Left = Right&&  don't work???????? , use IsBaseSame workaround
		//Base* = Derive*  works
		//Base = Derive    works
		template<typename Left, typename Right> struct HasAssigner : Or< Bool_<HAS_ASSIGNER(typename AddLValueRef<Left>::type, Right)>, IsBaseSame<Left,Right>> {};
		template<typename Left, typename Right> struct HasTrivialAssigner :public  Or< Bool_<HAS_TRIVIAL_ASSIGNER(typename AddLValueRef<Left>::type, Right)>, IsBaseSame<Left, Right>> {};
		template<typename Left, typename Right> struct HasNothrowAssigner :public  Or< Bool_<HAS_NOTHROW_ASSIGNER(typename AddLValueRef<Left>::type, Right)>, IsBaseSame<Left, Right>> {};

		//T a = const T b
		template<typename T> struct HasCopyAssigner :public Bool_<HAS_ASSIGNER(typename AddLValueRef<T>::type, typename AddConstLRef<T>::type)> {};
		template<typename T> struct HasTrivialCopyAssigner :public Bool_<HAS_TRIVIAL_ASSIGNER(typename AddLValueRef<T>::type, typename AddConstLRef<T>::type)> {};
		template<typename T> struct HasNoThrowCopyAssigner :public Bool_<HAS_NOTHROW_ASSIGNER(typename AddLValueRef<T>::type, typename AddConstLRef<T>::type)> {};

		//T a = T&& b
		template<typename T> struct HasMoveAssigner :public Bool_<HAS_ASSIGNER(typename AddLValueRef<T>::type, T)> {};
		template<typename T> struct HasTriviallyMoveAssigner :public Bool_<HAS_TRIVIAL_ASSIGNER(typename AddLValueRef<T>::type, T)> {};
		template<typename T> struct HasNoThrowMoveAssigner :public Bool_<HAS_NOTHROW_ASSIGNER(typename AddLValueRef<T>::type, T)> {};

#undef HAS_ASSIGNER
#undef HAS_TRIVIAL_ASSIGNER
#undef HAS_NOTHROW_ASSIGNER

	}
}