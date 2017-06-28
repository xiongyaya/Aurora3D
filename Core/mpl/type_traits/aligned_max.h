#pragma once

#include<core/mpl/sizet_.h>
#include<Core/mpl/arithmetic_max.h>
namespace Aurora3D
{
	namespace mpl
	{
		//get max aligned type and size
		template<size_t MinAlign, typename First, typename... Others>
		struct AlignedMax
		{
			static constexpr size_t MaxSize = SizetMax<MinAlign, sizeof(First), sizeof(Others)...>::value;
			static constexpr size_t MaxAlign = SizetMax<alignof(First), alignof(Others)...>::value;
			struct type
			{
				alignas(MaxAlign) char padding[MaxSize];
			};
			static constexpr int value = sizeof(type);
		};

		template<size_t LeastAlign, typename First, typename... Others>
		using AlignedMax_t = typename AlignedMax<LeastAlign, First, Others...>::type;
#define AlignedMax_v(MinAlign, T0, ...)  (AlignedMax<MinAlign,T0,__VA_ARGS__>::value)

	}
}