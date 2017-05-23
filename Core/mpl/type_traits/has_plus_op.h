#pragma once

#include<Core/mpl/ingore_t.h>
#include<Core/mpl/type_traits/declval.h>
#include<Core/mpl/type_traits/has_binary_op.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename Left, typename Right>
			struct PlusOperation
			{
				static constexpr auto Op()->decltype(Declval<Left>() + Declval<Right>()) { return Declval<Left>() + Declval<Right>(); };
			};
			template<typename Left, typename Right> struct ForbiddenPlus : public False_ {};
		}
		
		template<typename Left, typename Right = Left, typename Ret = ingore_t>
		struct HasPlusOp :
			public detail::HasBinaryOp< 
				detail::ForbiddenPlus<Left, Right>, 
				detail::PlusOperation<Left, Right>, Left, Right, Ret> {};
	}
}