#pragma once

#include<core/mpl/bool_.h>
#include<Core/mpl/type_traits/convert_const_lref.h>
#include<Core/mpl/type_traits/add_rvalue_ref.h>

namespace Aurora3D
{
	namespace mpl
	{
		//can modification  accord to platform
#define HAS_CONSTRUCTOR(Type, Args)           __is_constructible(Type, Args)
#define HAS_TRIVIAL_CONSTRUCTOR(Type, Args)   __is_trivially_constructible(Type, Args)
#define HAS_NOTHROW_CONSTRUCTOR(Type, Args)   __is_nothrow_constructible(Type, Args)

		template<typename T, typename... Args> struct HasConstructor :public Bool_<HAS_CONSTRUCTOR(T, Args...)> {};
		template<typename T> struct HasDefaultConstructor :public HasConstructor<T> {};
		template<typename T> struct HasCopyConstructor :public HasConstructor<T, ConvertConstLRef_t<T>> {};
		template<typename T> struct HasMoveConstructor :public HasConstructor<T, AddRValueRef_t<T>> {};

		template<typename T, typename... Args> struct HasTrivialConstructor :public Bool_<HAS_TRIVIAL_CONSTRUCTOR(T, Args...)> {};
		template<typename T> struct HasTrivialCopyConstructor :public HasTrivialConstructor<T, ConvertConstLRef_t<T> > {};
		template<typename T> struct HasTrivialMoveConstructor :public HasTrivialConstructor<T, AddRValueRef_t<T> > {};

		template<typename T, typename... Args> struct HasNothrowConstructor :public Bool_<HAS_NOTHROW_CONSTRUCTOR(T, Args...)> {};
		template<typename T> struct HasNotrowCopyConstructor  :public HasNothrowConstructor<T, ConvertConstLRef_t<T>> {};
		template<typename T> struct HasNotrowMoveConstructor :public HasNothrowConstructor<T, AddRValueRef_t<T>> {};
		
#undef HAS_CONSTRUCTOR
#undef HAS_TRIVIAL_CONSTRUCTOR
#undef HAS_NOTHROW_CONSTRUCTOR
	}
}