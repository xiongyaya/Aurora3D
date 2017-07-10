#pragma once

#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_prefix.h>
#include<Core/preprocessor/uint8_add_one.h>
#include<Core/preprocessor/uint8_sub_one.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/ingore_t.h>
#include<Core/mpl/container/pair.h>
#include<Core/mpl/arithmatic_add.h>
#include<Core/mpl/arithmatic_sub.h>

namespace Aurora3D
{
	namespace mpl
	{
		//capacity = 10
#define A3D_MPL_VECTOR_CAPACITY 10

		//vector iterator declare
		template<typename S, typename Pos> struct VectorIterator {};

		//vector declare
		template<typename... TArgs> struct Vector_ {};

		//vector access declare Pos at [0, size)
		template<typename S, int Pos> struct VectorAt
		{ 
			static_assert(Pos < S::size && Pos >= 0, "VectorInert  pos out of range."); 
		}; 

		//vector insert declare at Pos [0, size]
		template<typename S, int Pos, typename U> struct VectorInsert
		{
			//check
			static_assert(Pos <= S::size && Pos >= 0, "VectorInert  Pos out of range.");
			static_assert(S::size < A3D_MPL_VECTOR_CAPACITY, "VectorInsert vector capacity is full.");
		};

		//erase at Pos [0, size)
		template<typename S, int Pos> struct VectorErase
		{
			static_assert(Pos <= S::size && Pos >= 0, "VectorErase Pos out of range.");
			static_assert(S::size != 0, "VectorErase vector size need be greater than 0.");
		};

		//push back one element 
		template<typename S, typename T>
		struct VectorPushBack
		{
			static_assert(S::size < A3D_MPL_VECTOR_CAPACITY, "VectorPushBack vector capacity is full.");
		};

		//push front one element 
		template<typename S, typename T> 
		struct VectorPushFront
		{
			static_assert(S::size < A3D_MPL_VECTOR_CAPACITY, "VectorPushFront vector capacity is full.");
		};

		//empty Vector
		template<>
		struct Vector_<>
		{
			static const int size = 0;
			typedef Vector_<> type;
		};

		//vector size 1 ~ A3D_MPL_VECTOR_CAPACITY-1
#define MPL_VECTOR_SEPCIALIZATION_DECL(Index, _1,_2)                      \
		template<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (,) )>         \
		struct Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (, ))>            \
		{                                                                 \
			static const int size = A3D_PP_ADD1(Index);                   \
			typedef Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (,))> type;  \
		};
		A3D_PP_RANGE_CALL(0, A3D_PP_SUB1( A3D_MPL_VECTOR_CAPACITY), 1, MPL_VECTOR_SEPCIALIZATION_DECL, _)
#undef  MPL_VECTOR_SEPCIALIZATION_DECL

		//VectorAt 0		
		template<typename T0, typename... TArgs>
		struct VectorAt<Vector_<T0, TArgs...>, 0> { typedef T0 type; };

		//VectorAt 1 ~ A3D_MPL_VECTOR_CAPACITY - 1
#define MPL_VECTOR_AT_SPECIALIZATION_DECL(Index, _1, _2)                                            \
		template<A3D_PP_RANGE_PREFIX(typename T,0,Index,(,)), typename... TArgs>                    \
		struct VectorAt<Vector_<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (, )), TArgs...>, Index>  \
		{ typedef T ## Index type; };
		A3D_PP_RANGE_CALL(1, A3D_PP_SUB1(A3D_MPL_VECTOR_CAPACITY), 1, MPL_VECTOR_AT_SPECIALIZATION_DECL, _)
#undef  MPL_VECTOR_AT_SPECIALIZATION_DECL

		//insert at Pos 0
		template<typename U, typename... TArgs>
		struct VectorInsert<Vector_<TArgs...>, 0, U>
		{ typedef Vector_<U, TArgs...> type; };

		//insert at 1 ~ A3D_MPL_VECTOR_CAPACITY
#define MPL_VECTOR_INSERT_SPECIALIZATION_DECL(Index, _1, _2)                                                  \
		template<typename U, A3D_PP_RANGE_PREFIX(typename T, 0, Index, (,)), typename... TArgs>               \
		struct VectorInsert<Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (,)), TArgs...>, A3D_PP_ADD1(Index), U>  \
		{                                                                                                     \
			typedef Vector_<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (,)), U, TArgs...> type;                \
		};
		A3D_PP_RANGE_CALL(0, A3D_PP_SUB1(A3D_MPL_VECTOR_CAPACITY), 1, MPL_VECTOR_INSERT_SPECIALIZATION_DECL, _)
#undef  MPL_VECTOR_INSERT_SPECIALIZATION_DECL

		//erase 0
		template<typename T0, typename... TArgs>
		struct VectorErase< Vector_<T0, TArgs...>, 0> { typedef Vector_<TArgs...> type; };

		//erase 1~ A3D_MPL_VECTOR_CAPACITY-1
#define MPL_VECTOR_ERASE_SEPCIALIZATION_DECL(Index, _1,_2)                                       \
		template<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (,)), typename... TArgs>              \
		struct VectorErase< Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (,)), TArgs...>, Index>     \
		{ typedef Vector_<A3D_PP_RANGE_PREFIX(T, 0, A3D_PP_SUB1(Index), (,)), TArgs...> type; };  
		A3D_PP_RANGE_CALL(1, A3D_PP_SUB1(A3D_MPL_VECTOR_CAPACITY), 1, MPL_VECTOR_ERASE_SEPCIALIZATION_DECL, (,))
#undef  MPL_VECTOR_ERASE_SEPCIALIZATION_DECL
	
		template<typename T, typename... TArgs>
		struct VectorPushBack< Vector_<TArgs...>, T>
		{
			typedef Vector_<TArgs..., T> type;
		};

		template<typename T, typename... TArgs>
		struct VectorPushFront< Vector_<TArgs...>, T>
		{
			typedef Vector_<T, TArgs...> type;
		};

		//pop back one element
		template<typename S> struct VectorPopFront
		{
			static_assert(S::size > 0, "VectorPopFront, vector size must greater than 0.");
			typedef typename VectorErase<S, 0>::type type;
		};

		//pop back one element
		template<typename S> struct VectorPopBack 
		{
			static_assert(S::size > 0, "VectorPopBack, vector size must greater than 0.");
			typedef typename VectorErase<S, S::size-1>::type type;
		};

		//back element
		template<typename S> struct VectorBack
		{
			static_assert(S::size > 0, "VectorBack, vector size must greater than 0.");
			typedef typename VectorAt<S, S::size - 1>::type type;
		};

		//back element
		template<typename S> struct VectorFront
		{
			static_assert(S::size > 0, "VectorBack, vector size must greater than 0.");
			typedef typename VectorAt<S, 0>::type type;
		};

		//begin of vector
		template<typename V> struct VectorBegin
		{
			static_assert(V::size > 0, "vector size must greater than 0.");
			typedef VectorIterator<Int_<0>, V> type;
		};

		//end of vector
		template<typename V> struct VectorEnd
		{
			static_assert(V::size > 0, "vector size must greater than 0.");
			typedef VectorIterator<Int_<V::size>, V> type;
		};

		//Position range [0, vector::size)
		template< typename Position, template<typename... VArgs> typename Vector, typename... VArgs>
		struct VectorIterator< Vector<VArgs...>, Position>
		{
			typedef Vector<VArgs...> vector;
			typedef Position position;
			
			//it++
			struct Next
			{
				//check 
				static_assert(position::value + 1 <= vector::size, "iterator can't move forward because reached end.");
				typedef VectorIterator< typename position::next, vector> type;
			};

			//it--
			struct Prior
			{
				//check 
				static_assert(position::value -1 >= 0, "iterator can't move backward because reached front.");
				typedef VectorIterator< typename position::prior, vector> type;
			};

			//it = it + n
			template<typename N>
			struct Advance
			{
				static_assert(position::value + N::value <= vector::size && position::value + N::value >=0, "iterator ca.");
				typedef VectorIterator< Add<position, N>, vector> type;
			};

			// distance = currIterator - iterator2
			template<typename T> struct Distance {};

			//must be another VectorIterator
			template<typename Pos2>
			struct Distance< VectorIterator<vector, Pos2>>
			{
				typedef Sub<position, Pos2> type;
			};

			// *iterator
			struct Deref
			{
				typedef typename VectorAt<vector, position::value>::type type;
			};

			// vector->
			struct Pointer :public vector {};
		};
	}
}