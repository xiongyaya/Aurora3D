#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
#define A3D_PP_PLACEHOLDER_MAX 16

		template<int64 T>
		struct Arg
		{
			static constexpr int64 value = T;
		};

		template<typename T> struct IsPlaceholder:public False_ {};
		template<int N> struct IsPlaceholder< Arg<N> >:public True_{};

		template<>
		struct Arg<1>
		{
			template<typename T1, typename... TS>
			struct Apply
			{
				typedef T1 type;
			};
		};

		typedef Arg<-1> _n;

		template<>
		struct Arg<2>
		{
			template<typename T1, typename T2, typename... TS>
			struct Apply
			{
				typedef T2 type;
			};
		};

		typedef Arg<1> _1;
		typedef Arg<2> _2;
		typedef Arg<3> _3;
		typedef Arg<4> _4;
		typedef Arg<5> _5;
		typedef Arg<6> _6;
		typedef Arg<7> _7;
		typedef Arg<8> _8;
		typedef Arg<9> _9;
		typedef Arg<10> _10;
		typedef Arg<11> _11;
		typedef Arg<12> _12;
		typedef Arg<13> _13;
		typedef Arg<14> _14;
		typedef Arg<15> _15;
		
	}
}