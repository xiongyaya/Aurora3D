#pragma once

#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_prefix.h>
#include<Core/preprocessor/range_declare.h>
#include<Core/preprocessor/uint8_add_one.h>
#include<Core/preprocessor/uint8_sub_one.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/null_.h>
#include<Core/mpl/arithmatic_add.h>
#include<Core/mpl/arithmatic_sub.h>
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_equal.h>
#include<Core/mpl/logic_not_equal.h>
#include<Core/mpl/category.h>
#include<Core/mpl/type_traits/is_same.h>
#include<Core/mpl/container/vector_decl.h>
#include<Core/mpl/short_inner_type_decl.h>

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
			typedef VectorIterator<type, Int_<0>>        begin;
			typedef VectorIterator<type, Int_<length>>   end;
			typedef VectorIterator<type, Int_<length-1>> rbegin;
			typedef VectorIterator<type, Int_<-1>>       rend;
		};

		//vector size 1 ~ A3D_MPL_VECTOR_CAPACITY-1
#define MPL_VECTOR_SEPCIALIZATION_DECL(Index, _1,_2)                       \
		template<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (,) )>          \
		struct Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (, ))>             \
		{                                                                  \
			typedef RandomCategoryTag tag;                                 \
			static const int length = A3D_PP_ADD1(Index);                  \
			typedef Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (,))> type;   \
			typedef Vector_<A3D_PP_RANGE_PREFIX(T, Index, 0, (,))> reverse;\
			A3D_PP_RANGE_DECLARE(typedef T,,t,0,Index,(;))                 \
			typedef T ## Index back;                                       \
			typedef VectorIterator<type, Int_<0>>          begin;          \
			typedef VectorIterator<type, Int_<length>>     end;            \
			typedef VectorReverseIterator<type, Int_<length - 1>> rbegin;  \
			typedef VectorReverseIterator<type, Int_<-1>>         rend;    \
		};
		A3D_PP_RANGE_CALL(0, A3D_PP_SUB1( A3D_MPL_VECTOR_CAPACITY), 1, MPL_VECTOR_SEPCIALIZATION_DECL, _)
#undef  MPL_VECTOR_SEPCIALIZATION_DECL

		template<typename S, typename Pos>
		struct VectorIterator
		{
			typedef RandomCategoryTag tag;
			typedef S base;
			typedef Pos pos;
			typedef VectorIterator<S, Pos> type;

			//it ++
			struct next :public VectorIterator<S, typename Pos::next>
			{
				static_assert(Pos::value < S::length, "move forward will be out of range.");
			};

			//it += n
			template<typename N>
			struct add :public VectorIterator<S, Add2<Pos, N>>
			{
				static_assert(Pos::value + N::value <= S::length, "move forward will be out of range.");
			};

			// it--
			struct prior :public VectorIterator<S, typename Pos::prior>
			{
				static_assert(Pos::value >0, "move backward will be out of range.");
			};

			// it -= n
			template<typename N>
			struct sub :public VectorIterator<S, Sub2<Pos, N>>
			{
				static_assert(ValueV(Pos) > 0, "move backward will be out of range.");
			};

			// it1 - it2
			template<typename It>
			struct distance :public Sub2<typename It::pos, Pos>
			{
				static_assert(IsSameV(BaseT<It>, S), "iterator base type not same.");
			};

			// *it
			struct deref :public VectorAt<S, Pos::value> {};

		};

		//same as VectorIterator
		template<typename S, typename Pos>
		struct VectorReverseIterator
		{
			typedef RandomCategoryTag tag;
			typedef S base;
			typedef Pos pos;
			typedef VectorReverseIterator<S, Pos> type;

			//it++
			struct next :public VectorReverseIterator<S, typename Pos::prior>
			{
				static_assert(Pos::value < S::length, "move forward will be out of range.");
			};

			//it += n
			template<typename N>
			struct add :public VectorIterator<S, Sub2<Pos, N>>
			{
				static_assert(Pos::value + N::value <= S::length, "move forward will be out of range.");
			};

			// it--
			struct prior :public VectorIterator<S, typename Pos::prior>
			{
				static_assert(Pos::value >0, "move backward will be out of range.");
			};

			// it -= n
			template<typename N>
			struct sub :public VectorIterator<S, Add2<Pos, N>>
			{
				static_assert(Pos::value >0, "move backward will be out of range.");
			};

			// it1 - it2
			template<typename It>
			struct distance :public Sub2<Pos, typename It::pos>
			{
				static_assert(IsSameV(typename It::base, S), "iterator base type not same.");
			};

			// *it
			struct deref :public VectorAt<S, Pos::value> {};

			// it1 == it2
			template<typename It>
			struct equal : public And<IsSame<S, BaseT<It>>, Equal<Pos, typename It::pos>> {};
		};

	}
}