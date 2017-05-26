#pragma once

#include<Core/type.h>
#include<Core/preprocessor/seq_foreach.h>
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
#if defined(AURORA3D_COMPILER_MSVC)
// 4002 too many macro-parameter
// 4505 unused-static-function had been removed
#   pragma warning ( push )
#   pragma warning ( disable : 4505 4002)
#endif
			template<typename Left, typename Right> struct ForbiddenHelper
			{
				typedef typename RemoveRef<Left>::type   lnoref;
				typedef typename RemoveRef<Right>::type  rnoref;
				typedef typename RemoveCV<lnoref>::type  lnocv;
				typedef typename RemoveCV<rnoref>::type  rnocv;
				typedef typename RemoveCV<typename RemoveRef< typename RemovePointer< lnoref>::type >::type>::type lnoptr;
				typedef typename RemoveCV<typename RemoveRef< typename RemovePointer< rnoref>::type >::type>::type rnoptr;
			};

			//forbidden if one parameter is void
			template<typename Left, typename Right> struct ForbiddenCommonHelper:public ForbiddenHelper<Left,Right>
			{
				static constexpr bool value = IsVoid<lnocv>::value || IsVoid<rnocv>::value;
			};

			//common forbidden case like int op void
			template<typename Left, typename Right> struct ForbiddenCommon :Bool_<ForbiddenCommonHelper<Left, Right>::value> {};

			//test type
			struct NoOperation { char pad[1]; };
			struct HasOperation { char pad[2]; };
			struct HasVoidReturn { char pad[2]; };
			static NoOperation operator ,(NoOperation, HasOperation) { return Declval<NoOperation>(); };
			template<typename T> inline NoOperation operator,(const T&, HasVoidReturn) { return Declval<NoOperation>(); };

			//if T1 op T2 not defined, will implicitly convert to ImplicitConverted and do operation
			struct ImplicitConverted { template <class T> ImplicitConverted(T const&) {}; };

#define BINARY_OPERATION(Op) static NoOperation operator Op(const ImplicitConverted&, const ImplicitConverted&) { return Declval<NoOperation>(); };
			A3D_PP_FOREACH(BINARY_OPERATION, (+, -, *, / , %, &, | , ^, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=, &&, ||));
#undef  BINARY_OPERATION
			
			//test return type
			template<typename T> struct ReturnConvert
			{
				//match every type except NoOperation
				static  constexpr HasOperation Convert(const T&) { return Declval<HasOperation>(); };
				//match NoOperation
				static  constexpr NoOperation  Convert(ImplicitConverted) { return Declval<NoOperation>(); };
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

			//operation overload contained in class(member function) left imply type is a left value reference, so Left can't be const T 
			//Left or Right type qualified with & and && passed to operation will miss
			template<typename BinaryOp, typename Left, typename Right, typename Ret, bool is_void = IsVoid<Ret>::value >
			struct HasBinaryOp :public And<
				Not< ForbiddenCommon<Left, Right>>,
				HasBinaryOpParameter<BinaryOp>,
				HasBineryOpReturn<BinaryOp, Ret> > {};

			//return void
			template <typename BinaryOp, typename Left, typename Right, typename Ret>
			struct HasBinaryOp<BinaryOp, Left, Right, Ret, true> :public And<
				Not< ForbiddenCommon<Left, Right>>,
				HasBinaryOpParameter<BinaryOp>,
				HasBinaryOpReturnVoid<BinaryOp, Ret> > {};
#if defined(AURORA3D_COMPILER_MSVC)
#   pragma warning ( pop )
#endif
		}
	}
}