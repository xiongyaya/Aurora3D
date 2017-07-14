#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/arithmatic_add.h>
#include<Core/mpl/arithmatic_sub.h>
#include<Core/mpl/category.h>
#include<Core/mpl/type_traits/is_same.h>
#include<Core/mpl/container/container_decl.h>

namespace Aurora3D
{
	namespace mpl
	{


		template<typename S, typename Pos>
		struct VectorIterator
		{
			typedef RandomCategoryTag tag;
			typedef S base;
			typedef Pos pos;
			typedef VectorIterator<S, Pos> type;

			//it ++
			struct next:public VectorIterator<S, typename Pos::next>
			{
				static_assert(Pos::value < S::length, "move forward will be out of range.");
			};

			//it += n
			template<typename N>
			struct add :public VectorIterator<S, Add2<Pos,N>>
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
				static_assert(Pos::value >0, "move backward will be out of range.");
			};

			// it1 - it2
			template<typename It>
			struct distance :public Sub2<typename It::pos, Pos> 
			{
				static_assert(IsSame_v(typename It::base, S), "iterator base type not same.");
			};

			// *it
			struct deref:public detail::RandomAt<S,Pos::value>{};

			// delete it
			struct erase
		};
	}
}