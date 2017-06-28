#pragma once

#include<Core/mpl/type_traits/has_operator_type.h>
#include<Core/mpl/type_traits/has_member_fn_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//HAS_MEMBER_FN_DECL(operator(), Invoker);
		//Parameter type and Ret type is match strictly, no implicitly convert(e.g. int not match float)

		namespace detail                                                  
		{                                                                 
			template<typename T, typename Ret, typename... Parameters>    
			struct HasInvokerHelper                                    
			{                                                             
				template<typename U>                                      
				static constexpr HasOperation Choose(const U&,            
					OperatorPlaceHolder<Ret(T::*)(Parameters...), &U::operator()> *ptr = nullptr)  
				{                                                                              
					return Declval<HasOperation>();                                            
				};                                                                             
				template<typename U>                                                           
				static constexpr NoOperation Choose(...) {                                     
					return Declval<NoOperation>();                                             
				}                                                                              
				static constexpr bool value = HasOperationValue(Choose<T>(Declval<T>()));      
			};                                                                                 
		}                                                                                      
		template<typename T,typename Ret, typename... Parameters>                              
		struct HasInvoker :public Bool_<detail::HasInvokerHelper<T, Ret, Parameters...>::value> {};

	}
}