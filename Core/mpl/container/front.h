//runtime
#include<Core/mpl/category.h>
#include<Core/mpl/container/at.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename S, typename Tag = typename S::tag> struct FrontImpl {};

			template<template<typename T0,typename... Args>typename S,
				typename T0,typename... Args>
			struct FrontImpl< S<T0, Args...>, RandomCategoryTag>
			{
				typedef T0;
			};

			template<typename S> struct FrontImpl<S,BidirectionalCategoryTag> 
			{
				typedef typename S::type type;
			};

			template<typename S> struct FrontImpl<S, ForwardCategoryTag>
			{
				typedef typename S::type type;
			};
		}

		//depend on At
		template<typename S> struct Front :public detail::FrontImpl<S> {};
	}
}