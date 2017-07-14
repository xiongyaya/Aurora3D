#pragma once

#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_prefix.h>
#include<Core/preprocessor/range_declare.h>
#include<Core/preprocessor/uint8_add_one.h>
#include<Core/preprocessor/uint8_sub_one.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/ingore_t.h>
#include<Core/mpl/arithmatic_add.h>
#include<Core/mpl/arithmatic_sub.h>
#include<Core/mpl/logic_equal.h>
#include<Core/mpl/category.h>

#include<Core/mpl/container/pair.h>
#include<Core/mpl/container/at.h>

#include<Core/mpl/container/vector_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//vector
		template<typename... TArgs> struct Vector_ {};

		//empty Vector
		template<>
		struct Vector_<>
		{
			typedef RandomCategoryTag tag;
			static const int length = 0;
			typedef Vector_<> type;
			typedef Vector_<> reverse;
		};

		//vector size 1 ~ A3D_MPL_VECTOR_CAPACITY-1
#define MPL_VECTOR_SEPCIALIZATION_DECL(Index, _1,_2)                      \
		template<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (,) )>         \
		struct Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (, ))>            \
		{                                                                 \
			typedef RandomCategoryTag tag;                                \
			static const int length = A3D_PP_ADD1(Index);                 \
			typedef Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (,))> type;  \
			typedef Vector_<A3D_PP_RANGE_PREFIX(T, Index, 0, (,))> reverse;\
			A3D_PP_RANGE_DECLARE(typedef T,,t,0,Index,(;))                \
		};
		A3D_PP_RANGE_CALL(0, A3D_PP_SUB1( A3D_MPL_VECTOR_CAPACITY), 1, MPL_VECTOR_SEPCIALIZATION_DECL, _)
#undef  MPL_VECTOR_SEPCIALIZATION_DECL

	

		
	
		//push back one element 
		template<typename S, typename T>
		struct VectorPushBack
		{
			static_assert(S::size < A3D_MPL_VECTOR_CAPACITY, "VectorPushBack vector capacity is full.");
		};

		template<typename T, typename... TArgs>
		struct VectorPushBack< Vector_<TArgs...>, T>
		{
			typedef Vector_<TArgs..., T> type;
		};

		//push front one element 
		template<typename S, typename T>
		struct VectorPushFront
		{
			static_assert(S::size < A3D_MPL_VECTOR_CAPACITY, "VectorPushFront vector capacity is full.");
		};

		template<typename T, typename... TArgs>
		struct VectorPushFront< Vector_<TArgs...>, T>
		{
			typedef Vector_<T, TArgs...> type;
		};

		//pop back one element
		template<typename S> struct VectorPopFront
		{
			static_assert(S::length > 0, "VectorPopFront, vector size must greater than 0.");
			typedef typename VectorErase<S, 0>::type type;
		};

		//pop back one element
		template<typename S> struct VectorPopBack 
		{
			static_assert(S::length > 0, "VectorPopBack, vector size must greater than 0.");
			typedef typename VectorErase<S, S::length -1>::type type;
		};

		//back element
		template<typename S> struct VectorBack
		{
			static_assert(S::size > 0, "VectorBack, vector size must greater than 0.");
			typedef typename At<S, Int_<S::size - 1>>::type type;
		};

		//back element
		template<typename S> struct VectorFront
		{
			static_assert(S::size > 0, "VectorBack, vector size must greater than 0.");
			typedef typename At<S, Int_<0>>::type type;
		};

		//vector iterator 
		template<typename S, typename Pos> struct VectorIterator {};

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
				typedef typename At<vector, position>::type type;
			};

			template<typename T> struct Equal {};

			// vector->
			struct Pointer :public vector {};
		};

		//begin of vector
		template<typename S> struct VectorBegin
		{
			static_assert(S::size > 0, "vector size must greater than 0.");
			typedef VectorIterator<Int_<0>, S> type;
		};

		//end of vector
		template<typename S> struct VectorEnd
		{
			static_assert(S::size > 0, "vector size must greater than 0.");
			typedef VectorIterator<Int_<S::size>, S> type;
		};


		//container is same and Pos1 == Pos2
		template<typename S, typename Pos1, typename Pos2>
		struct Equal<VectorIterator<S, Pos1>, VectorIterator<S, Pos2>>:
			public Equal<Pos1,Pos2>{};
		
		template<typename S,typename Pos>
		struct Next<VectorIterator<S, Pos>>
		{
			typedef VectorIterator<S, Next<Pos>> type;
		};
	}
}