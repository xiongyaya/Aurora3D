#pragma once

#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_prefix.h>
#include<Core/preprocessor/range_wrap.h>
#include<Core/mpl/bool_.h>
#include<core/mpl/int_.h>
#include<Core/mpl/ingore_t.h>


namespace Aurora3D
{
	namespace mpl
	{
		template<int64 T>
		struct Arg
		{
			static constexpr int64 value = T;
		};

		template<typename T> struct IsPlaceholder :public False_ {};
		typedef Arg<-1> _n;

#define A3D_PP_PLACEHOLDER_MAX 16

		template<>
		struct Arg<-1>
		{
			template<int64 Pos, A3D_PP_RANGE_WRAP(typename T,
				1, A3D_PP_PLACEHOLDER_MAX, = ingore_t, (, )), typename... TS>
			struct Apply:public Arg<Pos>:: template Apply<Pos,
				A3D_PP_RANGE_PREFIX(T,1, A3D_PP_PLACEHOLDER_MAX, (,)), TS...>{};
		};



#define PLACEHOLDER_SPECIALIZATION_DECL(N, index, _)        \
		template<>                                          \
		struct Arg<N>                                       \
		{											        \
			template<int64 Pos, A3D_PP_RANGE_PREFIX(        \
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