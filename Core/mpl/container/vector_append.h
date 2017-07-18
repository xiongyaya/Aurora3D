#pragma once

#include<Core/mpl/container/vector_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T> struct VectorAppendImpl {};

			template<typename... TArgs> struct VectorAppendImpl < Vector_<TArgs...>>
			{
				template<typename U> struct Apply {};

				template<typename... UArgs> struct Apply<Vector_<UArgs...>>
				{
					typedef Vector_<TArgs..., UArgs...> type;
				};
			};
		}
		
		// new Vector = V1+V2
		template<typename V1, typename V2>
		struct VectorAppend:public detail::VectorAppendImpl<V1>::template Apply<V2>
		{
			static_assert(LengthV(V1) + LengthV(V2) <= A3D_MPL_VECTOR_CAPACITY, "vecor out of capacity.");
		};
	}
}