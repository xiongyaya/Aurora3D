#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//some time make template more clear and short
		template<typename T> using HeadT = typename T::head;
		template<typename T> using TailT = typename T::tail;
		template<typename T> using TypeT = typename T::type;
		template<typename T> using BaseT = typename T::base;

#define LengthV(T)       (T::length)
#define ValueV(T)        (T::value)
	}
}