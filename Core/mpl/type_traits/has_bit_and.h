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
			struct BitAndOperation
			{
				static constexpr auto Op()->decltype(Declval<Left>() & Declval<Right>());
			};

			//forbidden
			//fundemental + void*
			//fundemental(no integral) + pointer
			//pointer + pointer
			template<typename Left, typename Right> struct ForbiddenBitAnd :public ForbiddenHelper<Left, Right>
			{
				static constexpr bool value =
					(IsPointer<lnocv>::value && IsPointer<rnocv>::value) ||
					(IsPointer<lnocv>::value && IsVoid<lnoptr>::value && IsFundamental<rnocv>::value) ||
					(IsPointer<rnocv>::value && IsVoid<rnoptr>::value && IsFundamental<lnocv>::value) ||
					(IsFundamental<lnocv>::value && !IsIntegral<lnocv>::value && IsPointer<rnocv>::value) ||
					(IsFundamental<rnocv>::value && !IsIntegral<rnocv>::value && IsPointer<lnocv>::value);
			};
		}

		template<typename Left, typename Right = Left, typename Ret = ingore_t, bool Forbidden = detail::ForbiddenBitAnd<Left,Right>::value>
		struct HasBitAnd : public detail::HasBinaryOp<detail::BitAndOperation<Left, Right>, Left, Right, Ret> {};

		//compose forbidden
		template<typename Left, typename Right, typename Ret> struct HasBitAnd<Left,Right,Ret,true>:public False_{};
	}
}