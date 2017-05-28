#pragma once
#include<Core/compile.h>
#include<Core/preprocessor/seq_foreach_item.h>
#include<Core/mpl/bool_.h>
#include<Core/mpl/ingore_t.h>
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_not.h>
#include<Core/mpl/type_traits/is_void.h>
#include<Core/mpl/type_traits/declval.h>
#include<Core/mpl/type_traits/remove_cv.h>
#include<Core/mpl/type_traits/remove_pointer.h>
#include<Core/mpl/type_traits/remove_ref.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{


			//post unary operator 
			// T++, T--,

			//[type], (ty bpe...), ->*, .*,

			//pre unary operator
			//every object had & operator, pointer class had ->
			//new T, delete T,++T,--T,~T,!T, *T, -T, +T,*

			template<typename OpType>
			struct ForbiddenHelper
			{
				typedef RemoveRef_t<OpType> no_ref_t;
				typedef RemoveCV_t<no_ref_t> no_cv_t;
			};

			//Type is void, operator is forbidden
			template<typename OpType>
			struct ForbiddenCommon :public ForbiddenHelper<OpType>
			{
				static constexpr bool value = IsVoid_v(no_cv_t);
			};

			template<typename UnaryOp, typename OpType, typename Ret>
			struct HasUnaryOpParameter :public True_ {};

			template<typename UnaryOp, typename OpType, typename Ret>
			struct HasUnaryOpReturn :public True_ {};

			template<typename UnaryOp, typename OpType, typename Ret>
			struct HasUnaryOpReturnVoid :public True_ {};

			
		}
	}
}