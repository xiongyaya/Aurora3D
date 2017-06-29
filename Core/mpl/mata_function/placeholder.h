#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<int T>
		struct Arg
		{
			typedef T value;
		};


		template<>
		struct Arg<1>
		{
			template<typename T1, typename TS...>
			struct Apply
			{
				typedef T1 type;
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
		typedef Arg<-1> _n;
	}
}