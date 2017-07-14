//runtime
#include<Core/mpl/int_.h>
#include<Core/mpl/category.h>
#include<Core/mpl/container/at.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename S, typename Tag> struct BackImpl {};

			// O(t) = 1
			template<typename S> struct BackImpl<S, RandomCategoryTag>
				:public RandomAt<S,S::length-1> {};

			// O(t) = 1
			template<typename S> struct BackImpl<S, BidirectionalCategoryTag>
			{
				
			};

			// O(t) = S::length
			template<typename S>struct BackImpl<S, ForwardCategoryTag> 
				:public AtImpl<S, Int_<S::length>> {};
		}
		//depend on At
		template<typename S> struct Back :public detail::BackImpl<S, typename S::tag> {};
	}
}