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
			template<typename S, typename Tag = typename S::tag> struct EndImpl {};

			template<typename S> struct EndImpl<S, RandomCategoryTag>
			{
				typedef RandomIterator<S, Int_<S::size>> type;
			};

			template<typename S> struct EndImpl<S, BidirectionalCategoryTag>
			{
				typedef typename S::type type;
			};

			template<typename S> struct EndImpl<S, ForwardCategoryTag>
			{
				typedef typename S::type type;
			};
		}

		//for type trait
		template<typename S> struct End :public detail::EndImpl<S> {};
		template<typename S> using EndT = typename End<S>::type;
	}
}