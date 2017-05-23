#pragma once

#include<Core/mpl/ingore_t.h>
#include<Core/mpl/type_traits/declval.h>
#include<Core/mpl/type_traits/has_binary_op.h>
#include<Core/mpl/type_traits/is_void.h>
#include<Core/mpl/type_traits/is_pointer.h>
#include<Core/mpl/type_traits/is_fundamental.h>
#include<Core/mpl/type_traits/is_integral.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename Left, typename Right>
			struct PlusOperation
			{
				static constexpr auto Op()->decltype(Declval<Left>() + Declval<Right>());
			};

			//forbidden
			//fundemental + void*
			//fundemental(no integral) + pointer
			//pointer + pointer
			template<typename Left, typename Right> struct ForbiddenPlusHelper:public ForbiddenHelper<Left, Right>
			{
				static constexpr bool value =
					(IsPointer<lnocv>::value && IsPointer<rnocv>::value) ||
					(IsPointer<lnocv>::value && IsVoid<lnoptr>::value && IsFundamental<rnocv>::value) ||
					(IsPointer<rnocv>::value && IsVoid<rnoptr>::value && IsFundamental<lnocv>::value) ||
					(IsFundamental<lnocv>::value && !IsIntegral<lnocv>::value && IsPointer<rnocv>::value) ||
					(IsFundamental<rnocv>::value && !IsIntegral<rnocv>::value && IsPointer<lnocv>::value);
			};

			template<typename Left, typename Right> struct ForbiddenPlus : public Bool_<ForbiddenPlusHelper<Left,Right>::value>{};
		}
		
		template<typename Left, typename Right = Left, typename Ret = ingore_t>
		struct HasPlus :
			public detail::HasBinaryOp< 
				detail::ForbiddenPlus<Left, Right>, 
				detail::PlusOperation<Left, Right>, Left, Right, Ret> {};
	}
}