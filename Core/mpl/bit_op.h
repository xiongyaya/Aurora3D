#pragma once

#include<Core/type.h>


namespace Aurora3D
{
	namespace mpl
	{
		template<uint32 FirstBitPos, uint32... OtherBitsPos>
		struct BitOperator 
		{
			static constexpr int64 value = 1 << FirstBitPos | BitOperator
		};

		template<uint32 OnlyBitPos>
		struct BitOperator<OnlyBitPos>
		{
			static constexpr int64 value = 1 << OnlyBitPos;
		};
	}
}