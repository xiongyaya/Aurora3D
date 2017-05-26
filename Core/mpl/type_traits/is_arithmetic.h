#pragma once

#include<core/mpl/logic_or.h>
#include<core/mpl/type_traits/is_float.h>
#include<core/mpl/type_traits/is_integral.h>

namespace Aurora3D
{
	namespace mpl
	{
		//lazy
		template<typename T> struct IsArithmetic :public Or< IsFloat<T>, IsIntegral<T> > {};
		template<typename T> using  IsArithmetic_t = typename IsArithmetic<T>::type;
#define IsArithmetic_v(T)     IsArithmetic<T>::value
#define NotArithmetic_v(T)    (!IsArithmetic<T>::value)
	}
}