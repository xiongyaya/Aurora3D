#pragma once

#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_prefix.h>
#include<Core/preprocessor/range_wrap.h>
#include<Core/mpl/bool_.h>
#include<core/mpl/int_.h>
#include<Core/mpl/ingore_t.h>
#include<Core/mpl/logic_or.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<int64 T> struct Arg {};

		typedef Arg<-1> _;   //to map single type according to position
		typedef Arg<-2> __;  //to mapping all Args...
		
		//is _x ?
		template<typename T> struct IsPlaceholder :public False_ {};
		template<> struct IsPlaceholder<Arg<-1>> :public True_ {};

		//is Arg<-1>?
		template<typename T> struct IsNPlaceholder :public False_ {};
		template<> struct IsNPlaceholder<Arg<-1>> :public True_ {};

		//T...Args contain Arg<-1> ?
		template<typename T,typename... Args> struct ContainNPlaceholder
			:public Or<IsNPlaceholder<T>, IsNPlaceholder<Args>...>{};

#define A3D_PP_PLACEHOLDER_MAX 6

		//define _1, _2, _3, ..., _[A3D_PP_PLACEHOLDER_MAX]
#define PLACEHOLDER_SPECIALIZATION_DECL(N, index, _)        \
		template<>                                          \
		struct Arg<N>                                       \
		{											        \
			template<A3D_PP_RANGE_PREFIX(                   \
				typename T,1, N, (,)), typename... TS>      \
			struct Apply                                    \
			{                                               \
				typedef T##N type;                          \
			};                                              \
		};                                                  \
		typedef Arg<N> _##N;                                \
		template<> struct IsPlaceholder< Arg<N> >:public True_{};

A3D_PP_RANGE_CALL(1, A3D_PP_PLACEHOLDER_MAX, 1, PLACEHOLDER_SPECIALIZATION_DECL, _)
#undef PLACEHOLDER_SPECIALIZATION_DECL
	}
}