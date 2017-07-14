#pragma once
namespace Aurora3D
{
	namespace mpl
	{
		//ForwardCategoryTag define Forward Container type
		//contain tag   as ForwardCategoryTag
		//contain head  which is Null when container empty
		//                    is a type has next and inner type
		//contain length indicate head length

		//RandomCategoryTag define Random Container type
		//contain tag   as RandomCategoryTag
		//contain t0~tn (n=length-1)
		//contain length indicate elements count
		struct ForwardCategoryTag {};
		struct BidirectionalCategoryTag:public ForwardCategoryTag {};
		struct RandomCategoryTag :public BidirectionalCategoryTag {};

	}
}