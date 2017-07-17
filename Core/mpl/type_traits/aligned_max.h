#pragma once

#include<core/mpl/int_.h>
#include<Core/mpl/max.h>
namespace Aurora3D
{
	namespace mpl
	{
		//get max aligned type and size
		template<int64 MinAlign, typename First, typename... Others>
		struct AlignedMax
		{
			static constexpr int64 maxSize = MaxV(MinAlign, sizeof(First), sizeof(Others)...);
			static constexpr int64 maxAlign = MaxV(alignof(First), alignof(Others)...);
			struct type
			{
				alignas(maxAlign) char padding[maxSize];
			};
			static constexpr int value = sizeof(type);
		};

		template<size_t MinAlign, typename First, typename... Others>
		using AlignedMaxT = typename AlignedMax<MinAlign, First, Others...>::type;
#define AlignedMaxV(MinAlign, T0, ...)  (AlignedMax<MinAlign,T0,__VA_ARGS__>::value)

	}
}