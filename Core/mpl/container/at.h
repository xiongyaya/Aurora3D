#pragma once



//runtime
#include<Core/mpl/category.h>
#include<Core/mpl/container/length.h>
#include<Core/mpl/container/list_.h>
#include<Core/mpl/container/container_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		
		//content
		namespace detail
		{
			//for normal Bidirectional Container
			template<typename S, typename Pos>
			struct BidirectionalAt
			{
				static constexpr int length = S::length;
			};
			
			//At implements
			template<typename S, typename Pos, typename Tag> struct AtImpl { };

			//random access at Pos
			template<typename S, typename Pos> 
			struct AtImpl<S, Pos, RandomCategoryTag>{};

			template<typename S, typename Pos>
			struct AtImpl<S, Pos, BidirectionalCategoryTag> :public BidirectionalAt<S, Pos> {};

			template<typename S, typename Pos>
			struct AtImpl<S, Pos, ForwardCategoryTag>
			{

			};
		}		

		//At declare
		template<typename S, typename Pos> struct At :public detail::AtImpl<S, Pos, typename S::tag> {};

	}
}

// 
#ifdef A3D_MPL_RANDOM_CATEGORY_MAX 
#if A3D_MPL_RANDOM_CATEGORY_MAX >90
//implement RandomAt<10~99>
#include<Core/mpl/container/impl/at100.h>
#elif A3D_MPL_RANDOM_CATEGORY_MAX > 80
//implement RandomAt<10~89>
#include<Core/mpl/container/impl/at90.h>
#elif A3D_MPL_RANDOM_CATEGORY_MAX > 70
//implement RandomAt<10~79>
#include<Core/mpl/container/impl/at80.h>
#elif A3D_MPL_RANDOM_CATEGORY_MAX > 60
//implement RandomAt<10~69>
#include<Core/mpl/container/impl/at70.h>
#elif A3D_MPL_RANDOM_CATEGORY_MAX > 50
//implement RandomAt<10~59>
#include<Core/mpl/container/impl/at60.h>
#elif A3D_MPL_RANDOM_CATEGORY_MAX > 40
//implement RandomAt<10~49>
#include<Core/mpl/container/impl/at50.h>
#elif A3D_MPL_RANDOM_CATEGORY_MAX > 30
//implement RandomAt<10~39>
#include<Core/mpl/container/impl/at40.h>
#elif A3D_MPL_RANDOM_CATEGORY_MAX > 20
//implement RandomAt<10~29>
#include<Core/mpl/container/impl/at30.h>
#elif A3D_MPL_RANDOM_CATEGORY_MAX > 10
//implement RandomAt<10~19>
#include<Core/mpl/container/impl/at20.h>
#endif  
#endif