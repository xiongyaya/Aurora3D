#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//some time make template more clear and short
		template<typename T> using PriorT = typename T::prior;
		template<typename T> using NextT = typename T::next;
		template<typename T> using HeadT = typename T::head;
		template<typename T> using TailT = typename T::tail;
		template<typename T> using TypeT = typename T::type;
		template<typename T> using BaseT = typename T::base;
		template<typename T> using ReverseT = typename T::reverse;
#define GreaterV(a, b)   ((a)>(b))
#define GreaterEqV(a, b) ((a)>=(b))
#define LessV(a, b)      ((a)<(b))
#define LessEqV(a,b)     ((a)<=(b))
#define EqualV(a,b)      ((a)==(b))
#define NotEqV(a,b)      ((a)!=(b))
#define ShLeftV(a,b)     ((a)<<(b))
#define ShRightV(a,b)    ((a)>>(b))
#define LengthV(T)       (T::length)
#define ValueV(T)        (T::value)
	}
}