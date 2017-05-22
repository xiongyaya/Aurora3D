#pragma once

#include<core/mpl/sizet_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T, size_t dim = 0> struct ArrayDim:public Sizet_<dim> {};
		template<typename T, size_t len, size_t dim> struct ArrayDim<T[len], dim> : public ArrayDim<T, dim + 1> {};
		template<typename T, size_t dim> struct ArrayDim<T[], dim> : public ArrayDim<T, dim+1> {};
	}

}