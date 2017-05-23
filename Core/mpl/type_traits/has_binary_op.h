#pragma once

#include<Core/preprocessor/seq_foreach.h>
#include<Core/mpl/bool_.h>
#include<Core/mpl/ingore_t.h>
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_not.h>
#include<Core/mpl/type_traits/is_void.h>
#include<Core/mpl/type_traits/declval.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			//common forbidden case like int op void
			template<typename Left, typename Right> struct ForbiddenCommon :False_ {};
			template<typename T> struct ForbiddenCommon<T, void> :public True_ {};
			template<typename T> struct ForbiddenCommon<void, T> :public True_ {};
			template<> struct ForbiddenCommon<void, void> :public True_ {};

			//test type
			struct NoOperation { char pad[1]; };
			struct HasOperation { char pad[2]; };
			struct HasVoidReturn { char pad[2]; };
			inline  NoOperation operator ,(NoOperation, HasOperation) { return Declval<NoOperation>(); };
			template<typename T> inline NoOperation operator,(const T&, HasVoidReturn) { return Declval<NoOperation>(); };

			//if T1 op T2 not defined, will implicitly convert to ImplicitConverted and do operation
			struct ImplicitConverted { template <class T> ImplicitConverted(T const&) {}; };

#define BINARY_OPERATION(Op) inline NoOperation operator Op(const ImplicitConverted&, const ImplicitConverted&) { return Declval<NoOperation>(); };
			A3D_PP_FOREACH(BINARY_OPERATION, (+, -, *, / , %, &, | , ^, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=, &&, ||));
#undef  BINARY_OPERATION
			
			//test return type
			template<typename T> struct ReturnConvert
			{
				static  constexpr HasOperation Convert(const T&) { return Declval<HasOperation>(); };
				static  constexpr NoOperation  Convert(NoOperation) { return Declval<NoOperation>(); };
			};

			//if   Left op Right exists,  BinaryOp::Op() return Non-NoOperation type, GET HasOperation type
			//else return NoOperation,  do [ operator,(NoOperation, HasOperation) ] and GET NoOperation type
			template<typename BinaryOp>
			struct HasBinaryOpParameter :public Bool_< sizeof(HasOperation) == sizeof((BinaryOp::Op(), Declval<HasOperation>()))> {};

			//if    BinaryOp::Op() return Non-NoOperation type, ReturnConvert<Ret>::Convert return true
			//else  BinaryOp::Op() return NoOperation type, ReturnConvert<Ret>::Convert return false
			//if    return type is ingored always true
			template<typename BinaryOp, typename Ret> struct HasBineryOpReturn :
				public Bool_< sizeof(HasOperation) == sizeof( ReturnConvert<Ret>::Convert(BinaryOp::Op())) >{ };
			template<typename BinaryOp> struct HasBineryOpReturn<BinaryOp, ingore_t>: public True_{};

			//if    BinaryOp::Op() return Non-NoOperation type,  GET NoOperation
			//else  BinaryOp::Op() return NoOperation type, GET HasVoidReturn
			//if    return type is ingored always true
			template<typename BinaryOp, typename Ret> struct HasBinaryOpReturnVoid :
				public Bool_< sizeof(HasOperation) == sizeof((BinaryOp::Op(),Declval<HasVoidReturn>()))> {};
			template<typename BinaryOp> struct HasBinaryOpReturnVoid<BinaryOp, ingore_t> : public True_ {};

			template<typename ForbiddenSpecial, typename BinaryOp, typename Left, typename Right, typename Ret, bool is_void = IsVoid<Ret>::value >
			struct HasBinaryOp :public And<
				Not< ForbiddenCommon<Left, Right>>,
				Not< ForbiddenSpecial >,
				HasBinaryOpParameter<BinaryOp>,
				HasBineryOpReturn<BinaryOp, Ret> > {};

			template < typename ForbiddenSpecial, typename BinaryOp, typename Left, typename Right, typename Ret>
			struct HasBinaryOp<ForbiddenSpecial, BinaryOp, Left, Right, Ret, true> :public And<
				Not< ForbiddenCommon<Left, Right>>,
				Not< ForbiddenSpecial >,
				HasBinaryOpParameter<BinaryOp>,
				HasBinaryOpReturnVoid<BinaryOp, Ret> > {};
		}
	}
}