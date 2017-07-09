#pragma once

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

		//vector iterator
		template<typename Pos, typename Container>
		struct VectorIterator {};

		template<typename Pos, typename Container>
		struct VectorIterator {};

		template<typename... TArgs>
		struct Vector_ {};

		//empty Vector
		template<>
		struct Vector_<>
		{
			static const int size = 0;
			typedef Vector_<> type;
		};

		//1 
		template<typename T0>
		struct Vector_<T0>
		{
			static const int size = 1;
			typedef Vector_<T0> type;
		};

		//2
		template<typename T0, typename T1>
		struct Vector_<T0, T1>
		{
			static const int size = 2;
			typedef Vector_<T0, T1> type;
		};

		//access vector type at position
		template<typename Vector, int Pos> struct VectorAt { static_assert(Pos < Vector::size, "VectorAt access pos over vector size."); }; //declare

		template<typename T0, typename... TArgs>
		struct VectorAt<Vector_<T0, TArgs...>, 0> { typedef T0 type; };

		template<typename T0, typename T1, typename... TArgs>
		struct VectorAt<Vector_<T0, T1, TArgs...>, 1> { typedef T1 type; };

		//push back one element 
		template<typename S, typename T> struct VectorPushBack {  };

		template<typename T, typename... TArgs>
		struct VectorPushBack< Vector_<TArgs...>, T>
		{
			typedef Vector_<TArgs..., T> type;
		};

		//push front one element 
		template<typename S, typename T> struct VectorPushFront {  };

		template<typename T, typename... TArgs>
		struct VectorPushFront< Vector_<TArgs...>, T>
		{
			typedef Vector_<T, TArgs...> type;
		};

		//pop front one element
		template<typename S> struct VectorPopFront {  };

		template<typename T, typename... TArgs>
		struct VectorPopFront< Vector_<T, TArgs...>>
		{
			typedef Vector_<TArgs...> type;
		};

		//pop back one element
		template<typename V> struct VectorPopBack {  };

		template<typename T, typename... TArgs>
		struct VectorPopBack< Vector_<TArgs..., T>>
		{
			typedef Vector_<TArgs...> type;
		};

		//back element
		template<typename V> struct VectorBack{};
		template<typename T,typename... TArgs>
		struct VectorBack< Vector_<TArgs..., T>>
		{
			typedef T type;
		};


		//front element
		template<typename V> struct VectorFront{};
		template<typename T, typename... TArgs>
		struct VectorBack< Vector_<T, TArgs...>>
		{
			typedef T type;
		};

		//begin of vector
		template<typename V>
		struct VectorBegin
		{
			static_assert(V::size > 0, "vector size must greater than 0.");
			typedef VectorIterator<Int_<0>, V> type;
		};

		//end of vector
		template<typename V>
		struct VectorEnd
		{
			static_assert(V::size > 0, "vector size must greater than 0.");
			typedef VectorIterator<Int_<V::size>, V> type;
		};

		//Position range [0, vector::size)
		template< typename Position, template<typename... VArgs> typename Vector, typename... VArgs>
		struct VectorIterator<Position, Vector<VArgs...>>
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
			struct Distance< VectorIterator<Pos2, vector>>
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