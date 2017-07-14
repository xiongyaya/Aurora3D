#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//capacity = 10
		#define A3D_MPL_VECTOR_CAPACITY 10

		//vector
		template<typename... TArgs> struct Vector_;

		//access vector element
		template<typename S, int Pos> struct VectorAt;

		//insert at least one element at pos
		template<typename S, int Pos, typename U,typename... UArgs> struct VectorInsert;

		//erase element at Pos
		template<typename S, int Pos> struct VectorErase;

		//generate new vector from V1 V2 elements
		template<typename V1, typename V2> struct VectorAppend;

		//generate new vector from S sub elements at [0, pos)
		template<typename S, int Pos> struct VectorForePart;

		//generate new vector from S sub elements at [pos, end)
		template<typename S, int Pos> struct VectorPostPart;
	}
}