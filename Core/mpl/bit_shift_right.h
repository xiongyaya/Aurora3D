#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		//TBase >> TShift
		template<typename T1, typename T2> struct Shl:public T1::template shl<T2> {};
	}
}