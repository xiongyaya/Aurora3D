#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/category.h>
#include<Core/mpl/container/random_iterator.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{ 
			template<typename S, typename Tag = typename S::tag> struct BeginImpl {};

			template<typename S> struct BeginImpl<S, RandomCategoryTag>
			{
				typedef RandomIterator<S, Int_<0>> type;
			};

			template<typename S> struct BeginImpl<S, BidirectionalCategoryTag>
			{
				typedef typename S::type type;
			};

			template<typename S> struct BeginImpl<S, ForwardCategoryTag>
			{
				typedef typename S::type type;
			};
		}

		//for type trait
		template<typename S> struct Begin :public detail::BeginImpl<S> {};
	}
}