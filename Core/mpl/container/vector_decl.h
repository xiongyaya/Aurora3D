#pragma once

//vector operation forward declare 
namespace Aurora3D
{
	namespace mpl
	{
		//vector declare
		template<typename... TArgs> struct Vector_;

		//vector iterator declare
		template<typename S, typename Pos> struct VectorIterator;

		//vector access declare Pos at [0, size)
		template<typename S, int Pos> struct VectorAt;

		//vector insert declare at Pos [0, size]
		template<typename S, int Pos, typename U> struct VectorInsert;

		//erase at Pos [0, size)
		template<typename S, int Pos> struct VectorErase;

		//push back one element 
		template<typename S, typename T> struct VectorPushBack;

		//pop back one element
		template<typename S> struct VectorPopBack;

		//access last element
		template<typename S> struct VectorBack;

		//push front one element 
		template<typename S, typename T> struct VectorPushFront;

		//pop front one element
		template<typename S> struct VectorPopFront;

		//access first element
		template<typename S> struct VectorFront;

		//begin iterator
		template<typename S> struct VectorBegin;

		//end iterator
		template<typename S> struct VectorEnd;
	}
}