#pragma once

//preprocessor
#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_prefix.h>
#include<Core/preprocessor/uint8_add_one.h>
#include<Core/preprocessor/uint8_sub_one.h>

//runtime
#include<Core/mpl/category.h>
#include<Core/mpl/container/length.h>
#include<Core/mpl/container/list_.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			//At implements
			template<typename S, typename Pos, typename Tag = typename S::tag> struct AtImpl { };
		}

		//At declare
		template<typename S, typename Pos> struct At :public detail::AtImpl<S, Pos> {};

		//content
		namespace detail
		{
			//main define of RandomAt
			template<typename S, typename Pos> struct RandomAt 
			{
				static_assert(Pos::value < S::size && Pos::value >= 0, "At pos out of range.");
			};

			//RandomAt 0		
			template<template<typename T0,typename... Args> typename S, typename T0,typename... Args>
			struct RandomAt< S<T0,Args...>, 0> { typedef T0 type; };

			//RandomAt 1 ~ 9
#define		MPL_RANDOM_AT_SPECIALIZATION_DECL(Index, _1, _2)                                              \
			template<template<A3D_PP_RANGE_PREFIX(typename T,0,Index,(,)), typename... TArgs> typename S, \
				A3D_PP_RANGE_PREFIX(typename T,0,Index,(,)), typename... TArgs>                           \
			struct RandomAt<S<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (, )), TArgs...>, Index>          \
			{ typedef T ## Index type; };
			A3D_PP_RANGE_CALL(1, 9, 1, MPL_RANDOM_AT_SPECIALIZATION_DECL, _)
#undef		MPL_VECTOR_AT_SPECIALIZATION_DECL

			//for normal Bidirectional Container
			template<typename S, typename Pos>
			struct BidirectionalAt
			{
				static constexpr int length = LengthImpl<S>::value;
			};
			
			//specialization for BiList<..>
			template<typename Head, typename Tail, typename Pos>
			struct BidirectionalAt<BiList<Head,Tail>, Pos>
			{
				static constexpr int length = LengthImpl<S>::value;
				static_assert(Pos::value < length,"bidirection");
				static constexpr int back_pos = length - Pos::value;

				//true near head, false near tail
				static constexpr bool front_to_back = Pos::value <= back_pos;

				//near head but head_length < Pos::value
				//or near tail but tail_length < back_pos
				static constexpr bool need_sync = (front_to_back && Head::length < Pos::value) ||
					(!front_to_back && Tail::length < back_pos);



			};


			//random access at Pos
			template<typename S, typename Pos> 
			struct AtImpl<S, Pos, RandomCategoryTag>:public RandomAt<S,Pos> {};

			template<typename S, typename Pos>
			struct AtImpl<S, Pos, BidirectionalCategoryTag> :public BidirectionalAt<S, Pos> {};
		}		
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