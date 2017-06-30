#pragma once


namespace Aurora3D
{
	namespace mpl
	{
		//Apply< Lambda< Add<_1,_2> >, Int_<1>, Int_<3> >::type
		template<typename template Fn<typename T1,typename T2> >
		struct Lambda
		{
			template<typename... Args>
			struct Apply
			{
				typedef int type;
			};
		}
	}
}