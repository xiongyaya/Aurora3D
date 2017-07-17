#pragma once

#include<Core/mpl/container/vector_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename S>
		struct VectorFront
		{
			static_assert(S::length != 0, "Vector length is zero.");
			typename typename S::t0 type;
		};

		template<typename S, typename T> 
		struct VectorPushFront 
		{
			static_assert(S::length <= A3D_MPL_VECTOR_CAPACITY, "Vector capacity is full, please increase A3D_MPL_VECTOR_CAPACITY.");
		};

		template<typename T, typename... Args>
		struct VectorPushFront<Vector_<Args...>, T>
		{
			typedef Vector_<T, Args...> type;
		};

		template<typename S> struct VectorPopFront {};

		namespace detail
		{
			template<typename T0, typename... TArgs>
			struct VectorPopFrontImpl
			{
				typedef Vector_<TArgs...> type;
			};
		}

		template<typename... Args>
		struct VectorPopFront<Vector_<Args...>>
			:public detail::VectorPopFrontImpl<Args...>
		{
			static_assert(sizeof...(Args) >= 1, "Vector is empty.");
		};

	}
}