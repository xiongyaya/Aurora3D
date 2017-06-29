#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<uint64 Base, uint64 Shift> struct ShiftRight :public Int_< (Base>>Shift) > {};
		template<typename TBase, typename TShift> struct TypeShiftRight:public Int_< (TBase::value >> TShift::value) > {};
	}
}