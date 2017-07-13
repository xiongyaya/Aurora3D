#pragma once

#include<Core/mpl/int_.h>
//#include<Core/mpl/category.h>

namespace Aurora3D
{
	namespace mpl
	{/*
		namespace detail
		{
			template<typename S, typename Tag = S::tag> struct LengthImpl{};

			template<typename S> struct LengthImpl<S, RandomCategoryTag>:
				Int_<S::length> {};

			template<typename S> struct LengthImpl<S, BidirectionalCategoryTag> :
				Int_<S::head_length + S::tail_length - S::common_length> {};

			template<typename S> struct LengthImpl<S, ForwardCategoryTag> :
				Int_<S::length> {};
		}
*/
		template<typename S> struct Length: public Int_<S::length>{};
	}
}