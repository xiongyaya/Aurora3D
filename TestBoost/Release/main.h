


#pragma once





#pragma once





#pragma once





#pragma once





#pragma once





#pragma once




#pragma once




























 
  
   


    
   
  






 



#pragma once






 


















































































  

























































































 










































    







    
    


        
            
        


    



















#pragma once





















































































































































































































































































































































































































































































































































































































































































































#pragma region Input Buffer SAL 1 compatibility macros



























































































































































































































































































































































































































































































































































































































































































































































































#pragma endregion Input Buffer SAL 1 compatibility macros
























































































































































































































































































































































































































































































































































































































































































































































































































































































































extern "C" {









































































































































































































































    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    

    
    
























































































































































































































































    
    





















































































}





















#pragma once


extern "C" {











































































































































































































































































































































}


















#pragma once



#pragma pack(push, 8)


extern "C" {







    
    


        typedef unsigned int uintptr_t;
    



    
    


        typedef char* va_list;
    



    













    
    














    

    
    
    







































} 



    extern "C++"
    {
        template <typename _Ty>
        struct __vcrt_va_list_is_reference
        {
            enum : bool { __the_value = false };
        };

        template <typename _Ty>
        struct __vcrt_va_list_is_reference<_Ty&>
        {
            enum : bool { __the_value = true };
        };

        template <typename _Ty>
        struct __vcrt_va_list_is_reference<_Ty&&>
        {
            enum : bool { __the_value = true };
        };

        template <typename _Ty>
        void __vcrt_va_start_verify_argument_type() throw()
        {
            static_assert(!__vcrt_va_list_is_reference<_Ty>::__the_value, "va_start argument must not have reference type and must not be parenthesized");
        }
    } 

    







#pragma pack(pop)







    



    























__pragma(pack(push, 8)) extern "C" {




    



















    






        
    





    






        
    









    







    
    





    









    







    





    



    
        
        
    













    typedef unsigned int     size_t;
    typedef int              ptrdiff_t;
    typedef int              intptr_t;



    typedef bool  __vcrt_bool;










    



    



    









    
        
    







    



    extern "C++"
    {
        template <typename _CountofType, size_t _SizeOfArray>
        char (*__countof_helper( _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];

        
    }












    


        




    







    
        
    













    void __cdecl __security_init_cookie(void);

    
        void __fastcall __security_check_cookie(  uintptr_t _StackCookie);
        __declspec(noreturn) void __cdecl __report_gsfailure(void);
    





extern uintptr_t __security_cookie;


    
    
    


} __pragma(pack(pop))











#pragma once



































































































































































































































































































































__pragma(pack(push, 8)) extern "C" {









    


        
    







    



    


        
    







    



    









    




    
















    


        
    





    





    





    










extern "C++"
{
    template<bool _Enable, typename _Ty>
    struct _CrtEnableIf;

    template<typename _Ty>
    struct _CrtEnableIf<true, _Ty>
    {
        typedef _Ty _Type;
    };
}



    typedef bool  __crt_bool;













    















    










    











        
    



    



    
        
    




























__declspec(dllimport) void __cdecl _invalid_parameter_noinfo(void);
__declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void);

__declspec(noreturn)
__declspec(dllimport) void __cdecl _invoke_watson(
      wchar_t const*,
      wchar_t const*,
      wchar_t const*,
            unsigned int,
            uintptr_t);


    



        
        
        
        
        
        
        
        
        
        
        
        

    














    


        


    










    






        
    



    


        
    







































    







    





    


        


            
        
    













    


        



    



    
        
    





    
        
        
        
    





    
        
              
        


    





    
        
    





    
        
    







    









typedef int                           errno_t;
typedef unsigned short                wint_t;
typedef unsigned short                wctype_t;
typedef long                          __time32_t;
typedef __int64                       __time64_t;

typedef struct __crt_locale_data_public
{
      unsigned short const* _locale_pctype;
      int _locale_mb_cur_max;
               unsigned int _locale_lc_codepage;
} __crt_locale_data_public;

typedef struct __crt_locale_pointers
{
    struct __crt_locale_data*    locinfo;
    struct __crt_multibyte_data* mbcinfo;
} __crt_locale_pointers;

typedef __crt_locale_pointers* _locale_t; 

typedef struct _Mbstatet
{ 
    unsigned long _Wchar;
    unsigned short _Byte, _State;
} _Mbstatet;

typedef _Mbstatet mbstate_t;










    


        typedef __time64_t time_t;
    




    



    typedef size_t rsize_t;











    

        










        










        










        










        










        










        










        










        










        















        















        
















    




























































































    







































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































        
        
        
        

        


        


        


        


        


        


        


        


        



        



        


        


        


        


        


        


        


        


        


        


        



        



        



        


        



        




        

        




        

        




        

        




        

        




        

        




        

        




        

        




        

    




} __pragma(pack(pop))











    




        
    



    


        
            
        


    



    


        
            
        


    



    




        
            
        


    




 


  
 











 




 


#pragma pack(push,8)
#pragma warning(push,3)
#pragma warning(disable: 4702 )





 
  
  
 




 
  






   
    
   


  




 

 
  
 



 
 


  
 

 
 


  
 


 
  


   
  
 


 
  


   
  
 


 
  


   
  
 


 
  


   
  
 


 
  


   
  
 


 
































		

	







		
		


			
		
	











































	
	






		


			
		
	

	
	




		


			
		
	

	
	




		
	







	
		#pragma detect_mismatch("_MSC_VER", "1900")
	

	
		#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "0")
	

	
		




			#pragma detect_mismatch("RuntimeLibrary", "MD_DynamicRelease")
		


	









	
		
	
































 


 
 

 









 









 




























 
 


 























#pragma once























    
    



    










    


#pragma comment(lib, "msvcprt" "" "")






















 















 
  


   
  
 

 
  


   
  
 

 
  


   
  
 


 
  







   



    
   

  
 

 
  
 

 
  


   


     
   
  
 

 














  
   
  
 

		












 

 
 







		





		






		
		






 
namespace std {
enum _Uninitialized
	{	
	_Noinit
	};

		
class __declspec(dllimport) _Lockit
	{	
public:
 

















	__thiscall _Lockit();	
	explicit __thiscall _Lockit(int);	
	__thiscall ~_Lockit() noexcept;	
 

	static  void __cdecl _Lockit_ctor(int);
	static  void __cdecl _Lockit_dtor(int);

private:
	static  void __cdecl _Lockit_ctor(_Lockit *);
	static  void __cdecl _Lockit_ctor(_Lockit *, int);
	static  void __cdecl _Lockit_dtor(_Lockit *);

public:
	 _Lockit(const _Lockit&) = delete;
	_Lockit&  operator=(const _Lockit&) = delete;

private:
	int _Locktype;
	};

 
































































  



  


  



  


  
 

class __declspec(dllimport) _Init_locks
	{	
public:
 











	__thiscall _Init_locks();
	__thiscall ~_Init_locks() noexcept;
 

private:
	static  void __cdecl _Init_locks_ctor(_Init_locks *);
	static  void __cdecl _Init_locks_dtor(_Init_locks *);
	};

}
 





		
__declspec(dllimport) void __cdecl _Atexit(void (__cdecl *)(void));

typedef unsigned long _Uint32t;



 
 #pragma warning(pop)
 #pragma pack(pop)

















#pragma once




































































































































































































































































































































__pragma(pack(push, 8)) extern "C" {









    
    
















































    


        
    



    
        
    




} __pragma(pack(pop))










#pragma once




#pragma once











#pragma once












#pragma once



__pragma(pack(push, 8)) extern "C" {







































     
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _calloc_base(
      size_t _Count,
      size_t _Size
    );

     
__declspec(dllimport)  __declspec(allocator) __declspec(restrict)
void* __cdecl calloc(
      __declspec(guard(overflow)) size_t _Count,
      __declspec(guard(overflow)) size_t _Size
    );

 
__declspec(dllimport) int __cdecl _callnewh(
      size_t _Size
    );

     
__declspec(dllimport) __declspec(allocator)
void* __cdecl _expand(
                void*  _Block,
      __declspec(guard(overflow)) size_t _Size
    );

__declspec(dllimport)
void __cdecl _free_base(
        void* _Block
    );

__declspec(dllimport)
void __cdecl free(
        void* _Block
    );

     
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _malloc_base(
      size_t _Size
    );

     
__declspec(dllimport) __declspec(allocator)  __declspec(restrict)
void* __cdecl malloc(
      __declspec(guard(overflow)) size_t _Size
    );

 
__declspec(dllimport)
size_t __cdecl _msize(
      void* _Block
    );

       
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _realloc_base(
         void*  _Block,
                                 size_t _Size
    );

       
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl realloc(
        void*  _Block,
      __declspec(guard(overflow))        size_t _Size
    );

       
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _recalloc(
        void*  _Block,
      __declspec(guard(overflow))        size_t _Count,
      __declspec(guard(overflow))        size_t _Size
    );

__declspec(dllimport)
void __cdecl _aligned_free(
        void* _Block
    );

     
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_malloc(
      __declspec(guard(overflow)) size_t _Size,
                         size_t _Alignment
    );

     
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_offset_malloc(
      __declspec(guard(overflow)) size_t _Size,
                         size_t _Alignment,
                         size_t _Offset
    );

 
__declspec(dllimport)
size_t __cdecl _aligned_msize(
      void*  _Block,
               size_t _Alignment,
               size_t _Offset
    );

       
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_offset_realloc(
        void*  _Block,
      __declspec(guard(overflow))        size_t _Size,
                                size_t _Alignment,
                                size_t _Offset
    );

       
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_offset_recalloc(
        void*  _Block,
      __declspec(guard(overflow))        size_t _Count,
      __declspec(guard(overflow))        size_t _Size,
                                size_t _Alignment,
                                size_t _Offset
    );

       
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_realloc(
        void*  _Block,
      __declspec(guard(overflow))        size_t _Size,
                                size_t _Alignment
    );

       
__declspec(dllimport) __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_recalloc(
        void*  _Block,
      __declspec(guard(overflow))        size_t _Count,
      __declspec(guard(overflow))        size_t _Size,
                                size_t _Alignment
    );






















} __pragma(pack(pop))












#pragma once










#pragma once




__pragma(pack(push, 8)) extern "C" {




    namespace std
    {
        typedef decltype(__nullptr) nullptr_t;
    }

    using ::std::nullptr_t;





__declspec(dllimport) int* __cdecl _errno(void);


__declspec(dllimport) errno_t __cdecl _set_errno(  int _Value);
__declspec(dllimport) errno_t __cdecl _get_errno(  int* _Value);



    
        
    






__declspec(dllimport) extern unsigned long  __cdecl __threadid(void);

__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(void);



} __pragma(pack(pop))


__pragma(pack(push, 8)) extern "C" {





     
    __declspec(dllimport) void* __cdecl bsearch_s(
                                                        void const* _Key,
          void const* _Base,
                                                        rsize_t     _NumOfElements,
                                                        rsize_t     _SizeOfElements,
          int (__cdecl* _PtFuncCompare)(void*, void const*, void const*),
                                                        void*       _Context
        );

    __declspec(dllimport) void __cdecl qsort_s(
          void*   _Base,
                                                             rsize_t _NumOfElements,
                                                             rsize_t _SizeOfElements,
          int (__cdecl* _PtFuncCompare)(void*, void const*, void const*),
                                                             void*   _Context
        );





 
__declspec(dllimport) void* __cdecl bsearch(
                                                    void const* _Key,
      void const* _Base,
                                                    size_t      _NumOfElements,
                                                    size_t      _SizeOfElements,
      int (__cdecl* _PtFuncCompare)(void const*, void const*)
    );

__declspec(dllimport) void __cdecl qsort(
      void*  _Base,
                                                         size_t _NumOfElements,
                                                         size_t _SizeOfElements,
      int (__cdecl* _PtFuncCompare)(void const*, void const*)
    );

 
__declspec(dllimport) void* __cdecl _lfind_s(
                                                       void const*   _Key,
      void const*   _Base,
                                                    unsigned int* _NumOfElements,
                                                       size_t        _SizeOfElements,
      int (__cdecl* _PtFuncCompare)(void*, void const*, void const*), 
                                                       void*         _Context
    );

 
__declspec(dllimport) void* __cdecl _lfind(
                                                       void const*   _Key,
      void const*   _Base,
                                                    unsigned int* _NumOfElements,
                                                       unsigned int  _SizeOfElements,
      int (__cdecl* _PtFuncCompare)(void const*, void const*)
    );

 
__declspec(dllimport) void* __cdecl _lsearch_s(
                                                             void const*   _Key,
      void*         _Base,
                                                          unsigned int* _NumOfElements,
                                                             size_t        _SizeOfElements,
      int (__cdecl* _PtFuncCompare)(void*, void const*, void const*),
                                                             void*         _Context
    );

 
__declspec(dllimport) void* __cdecl _lsearch(
                                                             void const*   _Key,
      void*         _Base,
                                                          unsigned int* _NumOfElements,
                                                             unsigned int  _SizeOfElements,
      int (__cdecl* _PtFuncCompare)(void const*, void const*)
    );























































































      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_lfind" ". See online help for details."))
    __declspec(dllimport) void* __cdecl lfind(
                                                           void const*   _Key,
          void const*   _Base,
                                                        unsigned int* _NumOfElements,
                                                           unsigned int  _SizeOfElements,
          int (__cdecl* _PtFuncCompare)(void const*, void const*)
        );

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_lsearch" ". See online help for details."))
    __declspec(dllimport) void* __cdecl lsearch(
                                                                void const*   _Key,
          void*         _Base,
                                                             unsigned int* _NumOfElements,
                                                                unsigned int  _SizeOfElements,
          int (__cdecl* _PtFuncCompare)(void const*, void const*)
        );





} __pragma(pack(pop))










#pragma once



__pragma(pack(push, 8)) extern "C" {
































 

__declspec(dllimport) errno_t __cdecl _itow_s(
                              int      _Value,
      wchar_t* _Buffer,
                              size_t   _BufferCount,
                              int      _Radix
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _itow_s(  int _Value, wchar_t (&_Buffer)[_Size],   int _Radix) throw() { return _itow_s(_Value, _Buffer, _Size, _Radix); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_itow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _itow( int _Value,   wchar_t *_Buffer,  int _Radix);

 

__declspec(dllimport) errno_t __cdecl _ltow_s(
                              long     _Value,
      wchar_t* _Buffer,
                              size_t   _BufferCount,
                              int      _Radix
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _ltow_s(  long _Value, wchar_t (&_Buffer)[_Size],   int _Radix) throw() { return _ltow_s(_Value, _Buffer, _Size, _Radix); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _ltow( long _Value,   wchar_t *_Buffer,  int _Radix);


__declspec(dllimport) errno_t __cdecl _ultow_s(
                              unsigned long _Value,
      wchar_t*      _Buffer,
                              size_t        _BufferCount,
                              int           _Radix
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _ultow_s(  unsigned long _Value, wchar_t (&_Buffer)[_Size],   int _Radix) throw() { return _ultow_s(_Value, _Buffer, _Size, _Radix); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _ultow( unsigned long _Value,   wchar_t *_Buffer,  int _Radix);

 
__declspec(dllimport) double __cdecl wcstod(
                        wchar_t const* _String,
        wchar_t**      _EndPtr
    );

 
__declspec(dllimport) double __cdecl _wcstod_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                      _locale_t      _Locale
    );

 
__declspec(dllimport) long __cdecl wcstol(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );

 
__declspec(dllimport) long __cdecl _wcstol_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );

 
__declspec(dllimport) long long __cdecl wcstoll(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );

 
__declspec(dllimport) long long __cdecl _wcstoll_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );

 
__declspec(dllimport) unsigned long __cdecl wcstoul(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );

 
__declspec(dllimport) unsigned long __cdecl _wcstoul_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );

 
__declspec(dllimport) unsigned long long __cdecl wcstoull(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );

 
__declspec(dllimport) unsigned long long __cdecl _wcstoull_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );

 
__declspec(dllimport) long double __cdecl wcstold(
                        wchar_t const* _String,
        wchar_t**      _EndPtr
    );

 
__declspec(dllimport) long double __cdecl _wcstold_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                      _locale_t      _Locale
    );

 
__declspec(dllimport) float __cdecl wcstof(
                        wchar_t const* _String,
        wchar_t**      _EndPtr
    );

 
__declspec(dllimport) float __cdecl _wcstof_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                      _locale_t      _Locale
    );

 
__declspec(dllimport) double __cdecl _wtof(
      wchar_t const* _String
    );

 
__declspec(dllimport) double __cdecl _wtof_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );

 
__declspec(dllimport) int __cdecl _wtoi(
      wchar_t const* _String
    );

 
__declspec(dllimport) int __cdecl _wtoi_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );

 
__declspec(dllimport) long __cdecl _wtol(
      wchar_t const* _String
    );

 
__declspec(dllimport) long __cdecl _wtol_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );

 
__declspec(dllimport) long long __cdecl _wtoll(
      wchar_t const* _String
    );

 
__declspec(dllimport) long long __cdecl _wtoll_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );


__declspec(dllimport) errno_t __cdecl _i64tow_s(
                              __int64  _Value,
      wchar_t* _Buffer,
                              size_t   _BufferCount,
                              int      _Radix
    );

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_i64tow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) wchar_t* __cdecl _i64tow(
                        __int64  _Value,
        wchar_t* _Buffer,
                        int      _Radix
    );


__declspec(dllimport) errno_t __cdecl _ui64tow_s(
                              unsigned __int64 _Value,
      wchar_t*         _Buffer,
                              size_t           _BufferCount,
                              int              _Radix
    );

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ui64tow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) wchar_t* __cdecl _ui64tow(
                        unsigned __int64 _Value,
        wchar_t*         _Buffer,
                        int              _Radix
    );

 
__declspec(dllimport) __int64 __cdecl _wtoi64(
      wchar_t const* _String
    );

 
__declspec(dllimport) __int64 __cdecl _wtoi64_l(
        wchar_t const* _String,
      _locale_t      _Locale
    );

 
__declspec(dllimport) __int64 __cdecl _wcstoi64(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );

 
__declspec(dllimport) __int64 __cdecl _wcstoi64_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );

 
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix
    );

 
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(
                        wchar_t const* _String,
        wchar_t**      _EndPtr,
                          int            _Radix,
                      _locale_t      _Locale
    );




 
 
__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wfullpath(
      wchar_t*       _Buffer,
                                wchar_t const* _Path,
                                  size_t         _BufferCount
    );




__declspec(dllimport) errno_t __cdecl _wmakepath_s(
      wchar_t*       _Buffer,
                              size_t         _BufferCount,
                        wchar_t const* _Drive,
                        wchar_t const* _Dir,
                        wchar_t const* _Filename,
                        wchar_t const* _Ext
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wmakepath_s(wchar_t (&_Buffer)[_Size],   wchar_t const* _Drive,   wchar_t const* _Dir,   wchar_t const* _Filename,   wchar_t const* _Ext) throw() { return _wmakepath_s(_Buffer, _Size, _Drive, _Dir, _Filename, _Ext); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wmakepath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) void __cdecl _wmakepath(  wchar_t *_Buffer,  wchar_t const* _Drive,  wchar_t const* _Dir,  wchar_t const* _Filename,  wchar_t const* _Ext);

__declspec(dllimport) void __cdecl _wperror(
      wchar_t const* _ErrMsg
    );

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsplitpath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) void __cdecl _wsplitpath(
                        wchar_t const* _FullPath,
        wchar_t*       _Drive,
        wchar_t*       _Dir,
        wchar_t*       _Filename,
        wchar_t*       _Ext
    );

__declspec(dllimport) errno_t __cdecl _wsplitpath_s(
                                  wchar_t const* _FullPath,
         wchar_t*       _Drive,
                                    size_t         _DriveCount,
           wchar_t*       _Dir,
                                    size_t         _DirCount,
      wchar_t*       _Filename,
                                    size_t         _FilenameCount,
           wchar_t*       _Ext,
                                    size_t         _ExtCount
    );

extern "C++" { template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline errno_t __cdecl _wsplitpath_s(   wchar_t const* _Path,   wchar_t (&_Drive)[_DriveSize],   wchar_t (&_Dir)[_DirSize],   wchar_t (&_Name)[_NameSize],   wchar_t (&_Ext)[_ExtSize] ) throw() { return _wsplitpath_s(_Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }





    
    

    
    __declspec(dllimport) errno_t __cdecl _wdupenv_s(
            wchar_t**      _Buffer,
   size_t*        _BufferCount,
      wchar_t const* _VarName
        );

    

      __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wdupenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __declspec(dllimport) wchar_t* __cdecl _wgetenv(
          wchar_t const* _VarName
        );

     
    
    __declspec(dllimport) errno_t __cdecl _wgetenv_s(
                                     size_t*        _RequiredCount,
          wchar_t*       _Buffer,
                                      size_t         _BufferCount,
                                    wchar_t const* _VarName
        );

    extern "C++" { template <size_t _Size> inline   errno_t __cdecl _wgetenv_s(  size_t* _RequiredCount, wchar_t (&_Buffer)[_Size],   wchar_t const* _VarName) throw() { return _wgetenv_s(_RequiredCount, _Buffer, _Size, _VarName); } }

     
    __declspec(dllimport) int __cdecl _wputenv(
          wchar_t const* _EnvString
        );

    
    __declspec(dllimport) errno_t __cdecl _wputenv_s(
          wchar_t const* _Name,
          wchar_t const* _Value
        );
    
    __declspec(dllimport) errno_t __cdecl _wsearchenv_s(
                                wchar_t const* _Filename,
                                wchar_t const* _VarName,
          wchar_t*       _Buffer,
                                  size_t         _BufferCount
        );
    
    extern "C++" { template <size_t _Size> inline errno_t __cdecl _wsearchenv_s(  wchar_t const* _Filename,   wchar_t const* _VarName, wchar_t (&_ResultPath)[_Size]) throw() { return _wsearchenv_s(_Filename, _VarName, _ResultPath, _Size); } }
    
    __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsearchenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) void __cdecl _wsearchenv( wchar_t const* _Filename,  wchar_t const* _VarName,   wchar_t *_ResultPath);

    __declspec(dllimport) int __cdecl _wsystem(
          wchar_t const* _Command
        );





} __pragma(pack(pop))



__pragma(pack(push, 8)) extern "C" {




    










__declspec(dllimport) void __cdecl _swab(
        char* _Buf1,
        char* _Buf2,
                                                                  int   _SizeInBytes
    );












__declspec(dllimport) __declspec(noreturn) void __cdecl exit(  int _Code);
__declspec(dllimport) __declspec(noreturn) void __cdecl _exit(  int _Code);
__declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(  int _Code);
__declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(  int _Code);
__declspec(dllimport) __declspec(noreturn) void __cdecl abort(void);





__declspec(dllimport) unsigned int __cdecl _set_abort_behavior(
      unsigned int _Flags,
      unsigned int _Mask
    );




    typedef int (__cdecl* _onexit_t)(void);










    
    


























































    int       __cdecl atexit(void (__cdecl*)(void));
    _onexit_t __cdecl _onexit(  _onexit_t _Func);


int __cdecl at_quick_exit(void (__cdecl*)(void));









    
    typedef void (__cdecl* _purecall_handler)(void);

    
    typedef void (__cdecl* _invalid_parameter_handler)(
        wchar_t const*,
        wchar_t const*,
        wchar_t const*, 
        unsigned int,
        uintptr_t
        );

    
    __declspec(dllimport) _purecall_handler __cdecl _set_purecall_handler(
          _purecall_handler _Handler
        );

    __declspec(dllimport) _purecall_handler __cdecl _get_purecall_handler(void);

    
    __declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(
          _invalid_parameter_handler _Handler
        );

    __declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);

    __declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(
          _invalid_parameter_handler _Handler
        );

    __declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void);























 __declspec(dllimport) int __cdecl _set_error_mode(  int _Mode);



__declspec(dllimport) int* __cdecl _errno(void);


__declspec(dllimport) errno_t __cdecl _set_errno(  int _Value);
__declspec(dllimport) errno_t __cdecl _get_errno(  int* _Value);

__declspec(dllimport) unsigned long* __cdecl __doserrno(void);


__declspec(dllimport) errno_t __cdecl _set_doserrno(  unsigned long _Value);
__declspec(dllimport) errno_t __cdecl _get_doserrno(  unsigned long * _Value);


__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char** __cdecl __sys_errlist(void);


__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) int * __cdecl __sys_nerr(void);


__declspec(dllimport) void __cdecl perror(  char const* _ErrMsg);




__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_pgmptr" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char**    __cdecl __p__pgmptr (void);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_wpgmptr" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t** __cdecl __p__wpgmptr(void);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_fmode" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int*      __cdecl __p__fmode  (void);






    
    
    


 
__declspec(dllimport) errno_t __cdecl _get_pgmptr (  char**    _Value);

 
__declspec(dllimport) errno_t __cdecl _get_wpgmptr(  wchar_t** _Value);

__declspec(dllimport) errno_t __cdecl _set_fmode  (               int       _Mode );

__declspec(dllimport) errno_t __cdecl _get_fmode  (              int*      _PMode);








typedef struct _div_t
{
    int quot;
    int rem;
} div_t;

typedef struct _ldiv_t
{
    long quot;
    long rem;
} ldiv_t;

typedef struct _lldiv_t
{
    long long quot;
    long long rem;
} lldiv_t;

  int       __cdecl abs   (  int       _Number);
  long      __cdecl labs  (  long      _Number);
  long long __cdecl llabs (  long long _Number);
  __int64   __cdecl _abs64(  __int64   _Number);

  unsigned short   __cdecl _byteswap_ushort(  unsigned short   _Number);
  unsigned long    __cdecl _byteswap_ulong (  unsigned long    _Number);
  unsigned __int64 __cdecl _byteswap_uint64(  unsigned __int64 _Number);

  __declspec(dllimport) div_t   __cdecl div  (  int       _Numerator,   int       _Denominator);
  __declspec(dllimport) ldiv_t  __cdecl ldiv (  long      _Numerator,   long      _Denominator);
  __declspec(dllimport) lldiv_t __cdecl lldiv(  long long _Numerator,   long long _Denominator);



#pragma warning (push)
#pragma warning (disable:6540) 

unsigned int __cdecl _rotl(
      unsigned int _Value,
      int          _Shift
    );

 
unsigned long __cdecl _lrotl(
      unsigned long _Value,
      int           _Shift
    );

unsigned __int64 __cdecl _rotl64(
      unsigned __int64 _Value,
      int              _Shift
    );

unsigned int __cdecl _rotr(
      unsigned int _Value,
      int          _Shift
    );

 
unsigned long __cdecl _lrotr(
      unsigned long _Value,
      int           _Shift
    );

unsigned __int64 __cdecl _rotr64(
      unsigned __int64 _Value,
      int              _Shift
    );

#pragma warning (pop)






__declspec(dllimport) void __cdecl srand(  unsigned int _Seed);

  __declspec(dllimport) int __cdecl rand(void);








extern "C++"
{
    inline long abs(long const _X) throw()
    {
        return labs(_X);
    }

    inline long long abs(long long const _X) throw()
    {
        return llabs(_X);
    }

    inline ldiv_t div(long const _A1, long const _A2) throw()
    {
        return ldiv(_A1, _A2);
    }

    inline lldiv_t div(long long const _A1, long long const _A2) throw()
    {
        return lldiv(_A1, _A2);
    }
}











    #pragma pack(push, 4)
    typedef struct
    {
        unsigned char ld[10];
    } _LDOUBLE;
    #pragma pack(pop)

    













typedef struct
{
    double x;
} _CRT_DOUBLE;

typedef struct
{
    float f;
} _CRT_FLOAT;





typedef struct
{
    long double x;
} _LONGDOUBLE;



#pragma pack(push, 4)
typedef struct
{
    unsigned char ld12[12];
} _LDBL12;
#pragma pack(pop)








                     __declspec(dllimport) double    __cdecl atof   (  char const* _String);
   __declspec(dllimport) int       __cdecl atoi   (  char const* _String);
                     __declspec(dllimport) long      __cdecl atol   (  char const* _String);
                     __declspec(dllimport) long long __cdecl atoll  (  char const* _String);
                     __declspec(dllimport) __int64   __cdecl _atoi64(  char const* _String);

  __declspec(dllimport) double    __cdecl _atof_l  (  char const* _String,   _locale_t _Locale);
  __declspec(dllimport) int       __cdecl _atoi_l  (  char const* _String,   _locale_t _Locale);
  __declspec(dllimport) long      __cdecl _atol_l  (  char const* _String,   _locale_t _Locale);
  __declspec(dllimport) long long __cdecl _atoll_l (  char const* _String,   _locale_t _Locale);
  __declspec(dllimport) __int64   __cdecl _atoi64_l(  char const* _String,   _locale_t _Locale);

  __declspec(dllimport) int __cdecl _atoflt (  _CRT_FLOAT*  _Result,   char const* _String);
  __declspec(dllimport) int __cdecl _atodbl (  _CRT_DOUBLE* _Result,   char*       _String);
  __declspec(dllimport) int __cdecl _atoldbl(  _LDOUBLE*    _Result,   char*       _String);

 
__declspec(dllimport) int __cdecl _atoflt_l(
         _CRT_FLOAT* _Result,
        char const* _String,
      _locale_t   _Locale
    );

 
__declspec(dllimport) int __cdecl _atodbl_l(
         _CRT_DOUBLE* _Result,
        char*        _String,
      _locale_t    _Locale
    );


 
__declspec(dllimport) int __cdecl _atoldbl_l(
         _LDOUBLE* _Result,
        char*     _String,
      _locale_t _Locale
    );

 
__declspec(dllimport) float __cdecl strtof(
                        char const* _String,
        char**      _EndPtr
    );

 
__declspec(dllimport) float __cdecl _strtof_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );

 
__declspec(dllimport) double __cdecl strtod(
                        char const* _String,
        char**      _EndPtr
    );

 
__declspec(dllimport) double __cdecl _strtod_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );

 
__declspec(dllimport) long double __cdecl strtold(
                        char const* _String,
        char**      _EndPtr
    );

 
__declspec(dllimport) long double __cdecl _strtold_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );

 
__declspec(dllimport) long __cdecl strtol(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
__declspec(dllimport) long __cdecl _strtol_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
__declspec(dllimport) long long __cdecl strtoll(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
__declspec(dllimport) long long __cdecl _strtoll_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
__declspec(dllimport) unsigned long __cdecl strtoul(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
__declspec(dllimport) unsigned long __cdecl _strtoul_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
__declspec(dllimport) unsigned long long __cdecl strtoull(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
__declspec(dllimport) unsigned long long __cdecl _strtoull_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
__declspec(dllimport) __int64 __cdecl _strtoi64(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
__declspec(dllimport) __int64 __cdecl _strtoi64_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );








 

__declspec(dllimport) errno_t __cdecl _itoa_s(
                              int    _Value,
      char*  _Buffer,
                              size_t _BufferCount,
                              int    _Radix
    );

extern "C++" { template <size_t _Size> inline   errno_t __cdecl _itoa_s(  int _Value, char (&_Buffer)[_Size],   int _Radix) throw() { return _itoa_s(_Value, _Buffer, _Size, _Radix); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_itoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _itoa( int _Value,   char *_Buffer,  int _Radix);

 

__declspec(dllimport) errno_t __cdecl _ltoa_s(
                              long   _Value,
      char*  _Buffer,
                              size_t _BufferCount,
                              int    _Radix
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _ltoa_s(  long _Value, char (&_Buffer)[_Size],   int _Radix) throw() { return _ltoa_s(_Value, _Buffer, _Size, _Radix); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _ltoa( long _Value,   char *_Buffer,  int _Radix);

 

__declspec(dllimport) errno_t __cdecl _ultoa_s(
                              unsigned long _Value,
      char*         _Buffer,
                              size_t        _BufferCount,
                              int           _Radix
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _ultoa_s(  unsigned long _Value, char (&_Buffer)[_Size],   int _Radix) throw() { return _ultoa_s(_Value, _Buffer, _Size, _Radix); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _ultoa( unsigned long _Value,   char *_Buffer,  int _Radix);

 

__declspec(dllimport) errno_t __cdecl _i64toa_s(
                              __int64 _Value,
      char*   _Buffer,
                              size_t  _BufferCount,
                              int     _Radix
    );

 
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_i64toa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) char* __cdecl _i64toa(
                        __int64 _Value,
        char*   _Buffer,
                        int     _Radix
    );

 

__declspec(dllimport) errno_t __cdecl _ui64toa_s(
                              unsigned __int64 _Value,
      char*            _Buffer,
                              size_t           _BufferCount,
                              int              _Radix
    );

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ui64toa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) char* __cdecl _ui64toa(
                        unsigned __int64 _Value,
        char*            _Buffer,
                        int              _Radix
    );













 

__declspec(dllimport) errno_t __cdecl _ecvt_s(
      char* _Buffer,
       size_t                       _BufferCount,
       double                       _Value,
       int                          _DigitCount,
      int*                         _PtDec,
      int*                         _PtSign
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _ecvt_s(char (&_Buffer)[_Size],   double _Value,   int _DigitCount,   int* _PtDec,   int* _PtSign) throw() { return _ecvt_s(_Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign); } }

  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ecvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) char* __cdecl _ecvt(
       double _Value,
       int    _DigitCount,
      int*   _PtDec,
      int*   _PtSign
    );

 

__declspec(dllimport) errno_t __cdecl _fcvt_s(
      char*  _Buffer,
                              size_t _BufferCount,
                              double _Value,
                              int    _FractionalDigitCount,
                             int*   _PtDec,
                             int*   _PtSign
    );

extern "C++" { template <size_t _Size> inline   errno_t __cdecl _fcvt_s(char (&_Buffer)[_Size],   double _Value,   int _FractionalDigitCount,   int* _PtDec,   int* _PtSign) throw() { return _fcvt_s(_Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign); } }

 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) char* __cdecl _fcvt(
       double _Value,
       int    _FractionalDigitCount,
      int*   _PtDec,
      int*   _PtSign
    );

 
__declspec(dllimport) errno_t __cdecl _gcvt_s(
      char*  _Buffer,
                              size_t _BufferCount,
                              double _Value,
                              int    _DigitCount
    );

extern "C++" { template <size_t _Size> inline   errno_t __cdecl _gcvt_s(char (&_Buffer)[_Size],   double _Value,   int _DigitCount) throw() { return _gcvt_s(_Buffer, _Size, _Value, _DigitCount); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_gcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) char* __cdecl _gcvt(
                        double _Value,
                        int    _DigitCount,
        char*  _Buffer
    );











    


        
    

    


        
    

     
    __declspec(dllimport) int __cdecl ___mb_cur_max_func(void);

     
    __declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t);




 
__declspec(dllimport) int __cdecl mblen(
        char const* _Ch,
                                             size_t      _MaxCount
    );

  
__declspec(dllimport) int __cdecl _mblen_l(
        char const* _Ch,
                                             size_t      _MaxCount,
                                         _locale_t   _Locale
    );

 
 
__declspec(dllimport) size_t __cdecl _mbstrlen(
      char const* _String
    );

 
 
__declspec(dllimport) size_t __cdecl _mbstrlen_l(
        char const* _String, 
      _locale_t   _Locale
    );

 
 
__declspec(dllimport) size_t __cdecl _mbstrnlen(
      char const* _String,
        size_t      _MaxCount
    );

 
 
__declspec(dllimport) size_t __cdecl _mbstrnlen_l(
        char const* _String,
          size_t      _MaxCount,
      _locale_t   _Locale
    );

 
__declspec(dllimport) int __cdecl mbtowc(
                      wchar_t*    _DstCh,
      char const* _SrcCh,
                                      size_t      _SrcSizeInBytes
    );

 
__declspec(dllimport) int __cdecl _mbtowc_l(
                      wchar_t*    _DstCh,
      char const* _SrcCh,
                                      size_t      _SrcSizeInBytes,
                                  _locale_t   _Locale
    );


__declspec(dllimport) errno_t __cdecl mbstowcs_s(
                                                      size_t*     _PtNumOfCharConverted,
      wchar_t*    _DstBuf,
                                                           size_t      _SizeInWords,
                                     char const* _SrcBuf,
                                                           size_t      _MaxCount
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl mbstowcs_s(  size_t* _PtNumOfCharConverted,   wchar_t (&_Dest)[_Size],   char const* _Source,   size_t _MaxCount) throw() { return mbstowcs_s(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "mbstowcs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl mbstowcs( wchar_t *_Dest,  char const* _Source,  size_t _MaxCount);


__declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(
                                                      size_t*     _PtNumOfCharConverted,
      wchar_t*    _DstBuf,
                                                           size_t      _SizeInWords,
                                     char const* _SrcBuf,
                                                           size_t      _MaxCount,
                                                       _locale_t   _Locale
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _mbstowcs_s_l(  size_t* _PtNumOfCharConverted,   wchar_t (&_Dest)[_Size],   char const* _Source,   size_t _MaxCount,   _locale_t _Locale) throw() { return _mbstowcs_s_l(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_mbstowcs_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl _mbstowcs_l(  wchar_t *_Dest,   char const* _Source,   size_t _MaxCount,   _locale_t _Locale);




__declspec(deprecated("This function or variable may be unsafe. Consider using " "wctomb_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) int __cdecl wctomb(
      char*   _MbCh,
                                wchar_t _WCh
    );

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctomb_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) int __cdecl _wctomb_l(
        char*     _MbCh,
                          wchar_t   _WCh,
                      _locale_t _Locale
    );



    
    __declspec(dllimport) errno_t __cdecl wctomb_s(
                                                         int*    _SizeConverted,
          char*   _MbCh,
                                                              rsize_t _SizeInBytes,
                                                              wchar_t _WCh
        );




__declspec(dllimport) errno_t __cdecl _wctomb_s_l(
                             int*     _SizeConverted,
      char*     _MbCh,
                                  size_t    _SizeInBytes,
                                  wchar_t   _WCh, 
                              _locale_t _Locale);


__declspec(dllimport) errno_t __cdecl wcstombs_s(
                                                               size_t*        _PtNumOfCharConverted,
      char*          _Dst,
                                                                    size_t         _DstSizeInBytes,
                                                                  wchar_t const* _Src,
                                                                    size_t         _MaxCountInBytes
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl wcstombs_s(  size_t* _PtNumOfCharConverted,   char (&_Dest)[_Size],   wchar_t const* _Source,   size_t _MaxCount) throw() { return wcstombs_s(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstombs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl wcstombs( char *_Dest,  wchar_t const* _Source,  size_t _MaxCount);


__declspec(dllimport) errno_t __cdecl _wcstombs_s_l(
                                                               size_t*        _PtNumOfCharConverted,
      char*          _Dst,
                                                                    size_t         _DstSizeInBytes,
                                                                  wchar_t const* _Src,
                                                                    size_t         _MaxCountInBytes,
                                                                _locale_t      _Locale
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcstombs_s_l(  size_t* _PtNumOfCharConverted,   char (&_Dest)[_Size],   wchar_t const* _Source,   size_t _MaxCount,   _locale_t _Locale) throw() { return _wcstombs_s_l(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcstombs_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl _wcstombs_l(  char *_Dest,   wchar_t const* _Source,   size_t _MaxCount,   _locale_t _Locale);




















 
 
__declspec(dllimport) __declspec(allocator) char* __cdecl _fullpath(
      char*       _Buffer,
                                char const* _Path,
                                  size_t      _BufferCount
    );




__declspec(dllimport) errno_t __cdecl _makepath_s(
      char*       _Buffer,
                              size_t      _BufferCount,
                        char const* _Drive,
                        char const* _Dir,
                        char const* _Filename,
                        char const* _Ext
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _makepath_s(char (&_Buffer)[_Size],   char const* _Drive,   char const* _Dir,   char const* _Filename,   char const* _Ext) throw() { return _makepath_s(_Buffer, _Size, _Drive, _Dir, _Filename, _Ext); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_makepath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) void __cdecl _makepath(  char *_Buffer,  char const* _Drive,  char const* _Dir,  char const* _Filename,  char const* _Ext);

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_splitpath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) void __cdecl _splitpath(
                        char const* _FullPath,
        char*       _Drive,
        char*       _Dir,
        char*       _Filename,
        char*       _Ext
    );


__declspec(dllimport) errno_t __cdecl _splitpath_s(
                                  char const* _FullPath,
         char*       _Drive,
                                    size_t      _DriveCount,
           char*       _Dir,
                                    size_t      _DirCount,
      char*       _Filename,
                                    size_t      _FilenameCount,
           char*       _Ext,
                                    size_t      _ExtCount
    );

extern "C++" { template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline errno_t __cdecl _splitpath_s(   char const* _Dest,   char (&_Drive)[_DriveSize],   char (&_Dir)[_DirSize],   char (&_Name)[_NameSize],   char (&_Ext)[_ExtSize] ) throw() { return _splitpath_s(_Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }










    

    
     
    __declspec(dllimport) errno_t __cdecl getenv_s(
                                     size_t*     _RequiredCount,
          char*       _Buffer,
                                      rsize_t     _BufferCount,
                                    char const* _VarName
        );
    
    




    __declspec(dllimport) int*       __cdecl __p___argc (void);
    __declspec(dllimport) char***    __cdecl __p___argv (void);
    __declspec(dllimport) wchar_t*** __cdecl __p___wargv(void);

    




        
        
        
    
    
    __declspec(dllimport) char***    __cdecl __p__environ (void);
    __declspec(dllimport) wchar_t*** __cdecl __p__wenviron(void);

    
        
    
    
    





        
        
    



    
    



      __declspec(deprecated("This function or variable may be unsafe. Consider using " "_dupenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) 
    __declspec(dllimport) char* __cdecl getenv(
          char const* _VarName
        );

    extern "C++" { template <size_t _Size> inline errno_t __cdecl getenv_s(  size_t* _RequiredCount, char (&_Buffer)[_Size],   char const* _VarName) throw() { return getenv_s(_RequiredCount, _Buffer, _Size, _VarName); } }

    




    
    __declspec(dllimport) errno_t __cdecl _dupenv_s(
            char**      _Buffer,
   size_t*     _BufferCount,
      char const* _VarName
        );

    



    __declspec(dllimport) int __cdecl system(
          char const* _Command
        );

    
    
    #pragma warning (push)
    #pragma warning (disable:6540)

     
    __declspec(dllimport) int __cdecl _putenv(
          char const* _EnvString
        );

    
    __declspec(dllimport) errno_t __cdecl _putenv_s(
          char const* _Name,
          char const* _Value
        );

    #pragma warning (pop)

    __declspec(dllimport) errno_t __cdecl _searchenv_s(
                                char const* _Filename,
                                char const* _VarName,
          char*       _Buffer,
                                  size_t      _BufferCount
        );

    extern "C++" { template <size_t _Size> inline errno_t __cdecl _searchenv_s(  char const* _Filename,   char const* _VarName, char (&_Buffer)[_Size]) throw() { return _searchenv_s(_Filename, _VarName, _Buffer, _Size); } }

    __declspec(deprecated("This function or variable may be unsafe. Consider using " "_searchenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) void __cdecl _searchenv( char const* _Filename,  char const* _VarName,   char *_Buffer);

    
    __declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "SetErrorMode" " " "instead. See online help for details."))
    __declspec(dllimport) void __cdecl _seterrormode(
          int _Mode
        );

    __declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "Beep" " " "instead. See online help for details."))
    __declspec(dllimport) void __cdecl _beep(
          unsigned _Frequency,
          unsigned _Duration
        );

    __declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "Sleep" " " "instead. See online help for details."))
    __declspec(dllimport) void __cdecl _sleep(
          unsigned long _Duration
        );












    




    
    

    #pragma warning(push)
    #pragma warning(disable: 4141) 

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ecvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ecvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __declspec(dllimport) char* __cdecl ecvt(
           double _Value,
           int    _DigitCount,
          int*   _PtDec,
          int*   _PtSign
        );

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fcvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __declspec(dllimport) char* __cdecl fcvt(
           double _Value,
           int    _FractionalDigitCount,
          int*   _PtDec,
          int*   _PtSign
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_gcvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __declspec(dllimport) char* __cdecl gcvt(
                            double _Value,
                            int    _DigitCount,
            char*  _DstBuf
        );
    
    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_itoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_itoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __declspec(dllimport) char* __cdecl itoa(
                            int   _Value,
            char* _Buffer,
                            int   _Radix
        );
    
    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ltoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __declspec(dllimport) char* __cdecl ltoa(
                            long  _Value,
            char* _Buffer,
                            int   _Radix
        );


    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_swab" ". See online help for details."))
    __declspec(dllimport) void __cdecl swab(
          char* _Buf1,
          char* _Buf2,
                                     int   _SizeInBytes
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ultoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __declspec(dllimport) char* __cdecl ultoa(
                            unsigned long _Value,
            char*         _Buffer,
                            int           _Radix
        );

    

        

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_putenv" ". See online help for details."))
        __declspec(dllimport) int __cdecl putenv(
              char const* _EnvString
            );

    

    #pragma warning(pop)

    _onexit_t __cdecl onexit(  _onexit_t _Func);





} __pragma(pack(pop))















__pragma(pack(push, 8)) extern "C" {



#pragma warning(push)
#pragma warning(disable:4738) 
#pragma warning(disable:4820) 




    
    
    struct _exception
    {
        int    type;   
        char*  name;   
        double arg1;   
        double arg2;   
        double retval; 
    };

    
    
    
        

        struct _complex
        {
            double x, y; 
        };

        



    


typedef float float_t;
typedef double double_t;













    
        extern double const _HUGE;
    





    



















































































void __cdecl _fperrraise(  int _Except);

  __declspec(dllimport) short __cdecl _dclass(  double _X);
  __declspec(dllimport) short __cdecl _ldclass(  long double _X);
  __declspec(dllimport) short __cdecl _fdclass(  float _X);

  __declspec(dllimport) int __cdecl _dsign(  double _X);
  __declspec(dllimport) int __cdecl _ldsign(  long double _X);
  __declspec(dllimport) int __cdecl _fdsign(  float _X);

  __declspec(dllimport) int __cdecl _dpcomp(  double _X,   double _Y);
  __declspec(dllimport) int __cdecl _ldpcomp(  long double _X,   long double _Y);
  __declspec(dllimport) int __cdecl _fdpcomp(  float _X,   float _Y);

  __declspec(dllimport) short __cdecl _dtest(  double* _Px);
  __declspec(dllimport) short __cdecl _ldtest(  long double* _Px);
  __declspec(dllimport) short __cdecl _fdtest(  float* _Px);

__declspec(dllimport) short __cdecl _d_int(  double* _Px,   short _Xexp);
__declspec(dllimport) short __cdecl _ld_int(  long double* _Px,   short _Xexp);
__declspec(dllimport) short __cdecl _fd_int(  float* _Px,   short _Xexp);

__declspec(dllimport) short __cdecl _dscale(  double* _Px,   long _Lexp);
__declspec(dllimport) short __cdecl _ldscale(  long double* _Px,   long _Lexp);
__declspec(dllimport) short __cdecl _fdscale(  float* _Px,   long _Lexp);

__declspec(dllimport) short __cdecl _dunscale(  short* _Pex,   double* _Px);
__declspec(dllimport) short __cdecl _ldunscale(  short* _Pex,   long double* _Px);
__declspec(dllimport) short __cdecl _fdunscale(  short* _Pex,   float* _Px);

  __declspec(dllimport) short __cdecl _dexp(  double* _Px,   double _Y,   long _Eoff);
  __declspec(dllimport) short __cdecl _ldexp(  long double* _Px,   long double _Y,   long _Eoff);
  __declspec(dllimport) short __cdecl _fdexp(  float* _Px,   float _Y,   long _Eoff);

  __declspec(dllimport) short __cdecl _dnorm(  unsigned short* _Ps);
  __declspec(dllimport) short __cdecl _fdnorm(  unsigned short* _Ps);

  __declspec(dllimport) double __cdecl _dpoly(  double _X,   double const* _Tab,   int _N);
  __declspec(dllimport) long double __cdecl _ldpoly(  long double _X,   long double const* _Tab,   int _N);
  __declspec(dllimport) float __cdecl _fdpoly(  float _X,   float const* _Tab,   int _N);

  __declspec(dllimport) double __cdecl _dlog(  double _X,   int _Baseflag);
  __declspec(dllimport) long double __cdecl _ldlog(  long double _X,   int _Baseflag);
  __declspec(dllimport) float __cdecl _fdlog(  float _X,   int _Baseflag);

  __declspec(dllimport) double __cdecl _dsin(  double _X,   unsigned int _Qoff);
  __declspec(dllimport) long double __cdecl _ldsin(  long double _X,   unsigned int _Qoff);
  __declspec(dllimport) float __cdecl _fdsin(  float _X,   unsigned int _Qoff);


typedef union
{   
    unsigned short _Sh[4];
    double _Val;
} _double_val;


typedef union
{   
    unsigned short _Sh[2];
    float _Val;
} _float_val;


typedef union
{   
    unsigned short _Sh[4];
    long double _Val;
} _ldouble_val;

typedef union
{   
    unsigned short _Word[4];
    float _Float;
    double _Double;
    long double _Long_double;
} _float_const;

extern const _float_const _Denorm_C,  _Inf_C,  _Nan_C,  _Snan_C, _Hugeval_C;
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C;
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C;

extern const _float_const _Eps_C,  _Rteps_C;
extern const _float_const _FEps_C, _FRteps_C;
extern const _float_const _LEps_C, _LRteps_C;

extern const double      _Zero_C,  _Xbig_C;
extern const float       _FZero_C, _FXbig_C;
extern const long double _LZero_C, _LXbig_C;




























extern "C++"
{
      inline int fpclassify(  float _X) throw()
    {
        return _fdtest(&_X);
    }

      inline int fpclassify(  double _X) throw()
    {
        return _dtest(&_X);
    }

      inline int fpclassify(  long double _X) throw()
    {
        return _ldtest(&_X);
    }

      inline bool signbit(  float _X) throw()
    {
        return _fdsign(_X) != 0;
    }

      inline bool signbit(  double _X) throw()
    {
        return _dsign(_X) != 0;
    }

      inline bool signbit(  long double _X) throw()
    {
        return _ldsign(_X) != 0;
    }

      inline int _fpcomp(  float _X,   float _Y) throw()
    {
        return _fdpcomp(_X, _Y);
    }

      inline int _fpcomp(  double _X,   double _Y) throw()
    {
        return _dpcomp(_X, _Y);
    }

      inline int _fpcomp(  long double _X,   long double _Y) throw()
    {
        return _ldpcomp(_X, _Y);
    }

    template <class _Trc, class _Tre> struct _Combined_type
    {   
        typedef float _Type;
    };

    template <> struct _Combined_type<float, double>
    {   
        typedef double _Type;
    };

    template <> struct _Combined_type<float, long double>
    {   
        typedef long double _Type;
    };

    template <class _Ty, class _T2> struct _Real_widened
    {   
        typedef long double _Type;
    };

    template <> struct _Real_widened<float, float>
    {   
        typedef float _Type;
    };

    template <> struct _Real_widened<float, double>
    {   
        typedef double _Type;
    };

    template <> struct _Real_widened<double, float>
    {   
        typedef double _Type;
    };

    template <> struct _Real_widened<double, double>
    {   
        typedef double _Type;
    };

    template <class _Ty> struct _Real_type
    {   
        typedef double _Type;   
    };

    template <> struct _Real_type<float>
    {   
        typedef float _Type;
    };

    template <> struct _Real_type<long double>
    {   
        typedef long double _Type;
    };

    template <class _T1, class _T2>
      inline int _fpcomp(  _T1 _X,   _T2 _Y) throw()
    {   
        typedef typename _Combined_type<float,
            typename _Real_widened<
            typename _Real_type<_T1>::_Type,
            typename _Real_type<_T2>::_Type>::_Type>::_Type _Tw;
        return _fpcomp((_Tw)_X, (_Tw)_Y);
    }

    template <class _Ty>
      inline bool isfinite(  _Ty _X) throw()
    {
        return fpclassify(_X) <= 0;
    }

    template <class _Ty>
      inline bool isinf(  _Ty _X) throw()
    {
        return fpclassify(_X) == 1;
    }

    template <class _Ty>
      inline bool isnan(  _Ty _X) throw()
    {
        return fpclassify(_X) == 2;
    }

    template <class _Ty>
      inline bool isnormal(  _Ty _X) throw()
    {
        return fpclassify(_X) == (-1);
    }

    template <class _Ty1, class _Ty2>
      inline bool isgreater(  _Ty1 _X,   _Ty2 _Y) throw()
    {
        return (_fpcomp(_X, _Y) & 4) != 0;
    }

    template <class _Ty1, class _Ty2>
      inline bool isgreaterequal(  _Ty1 _X,   _Ty2 _Y) throw()
    {
        return (_fpcomp(_X, _Y) & (2 | 4)) != 0;
    }

    template <class _Ty1, class _Ty2>
      inline bool isless(  _Ty1 _X,   _Ty2 _Y) throw()
    {
        return (_fpcomp(_X, _Y) & 1) != 0;
    }

    template <class _Ty1, class _Ty2>
      inline bool islessequal(  _Ty1 _X,   _Ty2 _Y) throw()
    {
        return (_fpcomp(_X, _Y) & (1 | 2)) != 0;
    }

    template <class _Ty1, class _Ty2>
      inline bool islessgreater(  _Ty1 _X,   _Ty2 _Y) throw()
    {
        return (_fpcomp(_X, _Y) & (1 | 4)) != 0;
    }

    template <class _Ty1, class _Ty2>
      inline bool isunordered(  _Ty1 _X,   _Ty2 _Y) throw()
    {
        return _fpcomp(_X, _Y) == 0;
    }
}  






  int       __cdecl abs(  int _X);
  long      __cdecl labs(  long _X);
  long long __cdecl llabs(  long long _X);

  double __cdecl acos(  double _X);
  double __cdecl asin(  double _X);
  double __cdecl atan(  double _X);
  double __cdecl atan2(  double _Y,   double _X);

  double __cdecl cos(  double _X);
  double __cdecl cosh(  double _X);
  double __cdecl exp(  double _X);
   double __cdecl fabs(  double _X);
  double __cdecl fmod(  double _X,   double _Y);
  double __cdecl log(  double _X);
  double __cdecl log10(  double _X);
  double __cdecl pow(  double _X,   double _Y);
  double __cdecl sin(  double _X);
  double __cdecl sinh(  double _X);
   double __cdecl sqrt(  double _X);
  double __cdecl tan(  double _X);
  double __cdecl tanh(  double _X);

  __declspec(dllimport) double    __cdecl acosh(  double _X);
  __declspec(dllimport) double    __cdecl asinh(  double _X);
  __declspec(dllimport) double    __cdecl atanh(  double _X);
  __declspec(dllimport)  double    __cdecl atof(  char const* _String);
  __declspec(dllimport)  double    __cdecl _atof_l(  char const* _String,   _locale_t _Locale);
  __declspec(dllimport) double    __cdecl _cabs(  struct _complex _Complex_value);
  __declspec(dllimport) double    __cdecl cbrt(  double _X);
  __declspec(dllimport) double    __cdecl ceil(  double _X);
  __declspec(dllimport) double    __cdecl _chgsign(  double _X);
  __declspec(dllimport) double    __cdecl copysign(  double _Number,   double _Sign);
  __declspec(dllimport) double    __cdecl _copysign(  double _Number,   double _Sign);
  __declspec(dllimport) double    __cdecl erf(  double _X);
  __declspec(dllimport) double    __cdecl erfc(  double _X);
  __declspec(dllimport) double    __cdecl exp2(  double _X);
  __declspec(dllimport) double    __cdecl expm1(  double _X);
  __declspec(dllimport) double    __cdecl fdim(  double _X,   double _Y);
  __declspec(dllimport) double    __cdecl floor(  double _X);
  __declspec(dllimport) double    __cdecl fma(  double _X,   double _Y,   double _Z);
  __declspec(dllimport) double    __cdecl fmax(  double _X,   double _Y);
  __declspec(dllimport) double    __cdecl fmin(  double _X,   double _Y);
  __declspec(dllimport) double    __cdecl frexp(  double _X,   int* _Y);
  __declspec(dllimport) double    __cdecl hypot(  double _X,   double _Y);
  __declspec(dllimport) double    __cdecl _hypot(  double _X,   double _Y);
  __declspec(dllimport) int       __cdecl ilogb(  double _X);
  __declspec(dllimport) double    __cdecl ldexp(  double _X,   int _Y);
  __declspec(dllimport) double    __cdecl lgamma(  double _X);
  __declspec(dllimport) long long __cdecl llrint(  double _X);
  __declspec(dllimport) long long __cdecl llround(  double _X);
  __declspec(dllimport) double    __cdecl log1p(  double _X);
  __declspec(dllimport) double    __cdecl log2(  double _X);
  __declspec(dllimport) double    __cdecl logb(  double _X);
  __declspec(dllimport) long      __cdecl lrint(  double _X);
  __declspec(dllimport) long      __cdecl lround(  double _X);

int __cdecl _matherr(  struct _exception* _Except);

  __declspec(dllimport) double __cdecl modf(  double _X,   double* _Y);
  __declspec(dllimport) double __cdecl nan(  char const*);
  __declspec(dllimport) double __cdecl nearbyint(  double _X);
  __declspec(dllimport) double __cdecl nextafter(  double _X,   double _Y);
  __declspec(dllimport) double __cdecl nexttoward(  double _X,   long double _Y);
  __declspec(dllimport) double __cdecl remainder(  double _X,   double _Y);
  __declspec(dllimport) double __cdecl remquo(  double _X,   double _Y,   int* _Z);
  __declspec(dllimport) double __cdecl rint(  double _X);
  __declspec(dllimport) double __cdecl round(  double _X);
  __declspec(dllimport) double __cdecl scalbln(  double _X,   long _Y);
  __declspec(dllimport) double __cdecl scalbn(  double _X,   int _Y);
  __declspec(dllimport) double __cdecl tgamma(  double _X);
  __declspec(dllimport) double __cdecl trunc(  double _X);
  __declspec(dllimport) double __cdecl _j0(  double _X );
  __declspec(dllimport) double __cdecl _j1(  double _X );
  __declspec(dllimport) double __cdecl _jn(int _X,   double _Y);
  __declspec(dllimport) double __cdecl _y0(  double _X);
  __declspec(dllimport) double __cdecl _y1(  double _X);
  __declspec(dllimport) double __cdecl _yn(  int _X,   double _Y);

  __declspec(dllimport) float     __cdecl acoshf(  float _X);
  __declspec(dllimport) float     __cdecl asinhf(  float _X);
  __declspec(dllimport) float     __cdecl atanhf(  float _X);
  __declspec(dllimport) float     __cdecl cbrtf(  float _X);
  __declspec(dllimport) float     __cdecl _chgsignf(  float _X);
  __declspec(dllimport) float     __cdecl copysignf(  float _Number,   float _Sign);
  __declspec(dllimport) float     __cdecl _copysignf(  float _Number,   float _Sign);
  __declspec(dllimport) float     __cdecl erff(  float _X);
  __declspec(dllimport) float     __cdecl erfcf(  float _X);
  __declspec(dllimport) float     __cdecl expm1f(  float _X);
  __declspec(dllimport) float     __cdecl exp2f(  float _X);
  __declspec(dllimport) float     __cdecl fdimf(  float _X,   float _Y);
  __declspec(dllimport) float     __cdecl fmaf(  float _X,   float _Y,   float _Z);
  __declspec(dllimport) float     __cdecl fmaxf(  float _X,   float _Y);
  __declspec(dllimport) float     __cdecl fminf(  float _X,   float _Y);
  __declspec(dllimport) float     __cdecl _hypotf(  float _X,   float _Y);
  __declspec(dllimport) int       __cdecl ilogbf(  float _X);
  __declspec(dllimport) float     __cdecl lgammaf(  float _X);
  __declspec(dllimport) long long __cdecl llrintf(  float _X);
  __declspec(dllimport) long long __cdecl llroundf(  float _X);
  __declspec(dllimport) float     __cdecl log1pf(  float _X);
  __declspec(dllimport) float     __cdecl log2f(  float _X);
  __declspec(dllimport) float     __cdecl logbf(  float _X);
  __declspec(dllimport) long      __cdecl lrintf(  float _X);
  __declspec(dllimport) long      __cdecl lroundf(  float _X);
  __declspec(dllimport) float     __cdecl nanf(  char const*);
  __declspec(dllimport) float     __cdecl nearbyintf(  float _X);
  __declspec(dllimport) float     __cdecl nextafterf(  float _X,   float _Y);
  __declspec(dllimport) float     __cdecl nexttowardf(  float _X,   long double _Y);
  __declspec(dllimport) float     __cdecl remainderf(  float _X,   float _Y);
  __declspec(dllimport) float     __cdecl remquof(  float _X,   float _Y,   int* _Z);
  __declspec(dllimport) float     __cdecl rintf(  float _X);
  __declspec(dllimport) float     __cdecl roundf(  float _X);
  __declspec(dllimport) float     __cdecl scalblnf(  float _X,   long _Y);
  __declspec(dllimport) float     __cdecl scalbnf(  float _X,   int _Y);
  __declspec(dllimport) float     __cdecl tgammaf(  float _X);
  __declspec(dllimport) float     __cdecl truncf(  float _X);



      __declspec(dllimport) int  __cdecl _set_SSE2_enable(  int _Flag);


































      __inline float __cdecl acosf(  float _X)
    {
        return (float)acos(_X);
    }

      __inline float __cdecl asinf(  float _X)
    {
        return (float)asin(_X);
    }

      __inline float __cdecl atan2f(  float _Y,   float _X)
    {
        return (float)atan2(_Y, _X);
    }

      __inline float __cdecl atanf(  float _X)
    {
        return (float)atan(_X);
    }

      __inline float __cdecl ceilf(  float _X)
    {
        return (float)ceil(_X);
    }

      __inline float __cdecl cosf(  float _X)
    {
        return (float)cos(_X);
    }

      __inline float __cdecl coshf(  float _X)
    {
        return (float)cosh(_X);
    }

      __inline float __cdecl expf(  float _X)
    {
        return (float)exp(_X);
    }









      __inline float __cdecl fabsf(  float _X)
    {
        return (float)fabs(_X);
    }










      __inline float __cdecl floorf(  float _X)
    {
        return (float)floor(_X);
    }

      __inline float __cdecl fmodf(  float _X,   float _Y)
    {
        return (float)fmod(_X, _Y);
    }



  __inline float __cdecl frexpf(  float _X,   int *_Y)
{
    return (float)frexp(_X, _Y);
}

  __inline float __cdecl hypotf(  float _X,   float _Y)
{
    return _hypotf(_X, _Y);
}

  __inline float __cdecl ldexpf(  float _X,   int _Y)
{
    return (float)ldexp(_X, _Y);
}















      __inline float __cdecl log10f(  float _X)
    {
        return (float)log10(_X);
    }

      __inline float __cdecl logf(  float _X)
    {
        return (float)log(_X);
    }

      __inline float __cdecl modff(  float _X,   float* _Y)
    {
        double _F, _I;
        _F = modf(_X, &_I);
        *_Y = (float)_I;
        return (float)_F;
    }

      __inline float __cdecl powf(  float _X,   float _Y)
    {
        return (float)pow(_X, _Y);
    }

      __inline float __cdecl sinf(  float _X)
    {
        return (float)sin(_X);
    }

      __inline float __cdecl sinhf(  float _X)
    {
        return (float)sinh(_X);
    }

      __inline float __cdecl sqrtf(  float _X)
    {
        return (float)sqrt(_X);
    }

      __inline float __cdecl tanf(  float _X)
    {
        return (float)tan(_X);
    }

      __inline float __cdecl tanhf(  float _X)
    {
        return (float)tanh(_X);
    }



  __declspec(dllimport) long double __cdecl acoshl(  long double _X);

  __inline long double __cdecl acosl(  long double _X)
{
    return acos((double)_X);
}

  __declspec(dllimport) long double __cdecl asinhl(  long double _X);

  __inline long double __cdecl asinl(  long double _X)
{
    return asin((double)_X);
}

  __inline long double __cdecl atan2l(  long double _Y,   long double _X)
{
    return atan2((double)_Y, (double)_X);
}

  __declspec(dllimport) long double __cdecl atanhl(  long double _X);

  __inline long double __cdecl atanl(  long double _X)
{
    return atan((double)_X);
}

  __declspec(dllimport) long double __cdecl cbrtl(  long double _X);

  __inline long double __cdecl ceill(  long double _X)
{
    return ceil((double)_X);
}

  __inline long double __cdecl _chgsignl(  long double _X)
{
    return _chgsign((double)_X);
}

  __declspec(dllimport) long double __cdecl copysignl(  long double _Number,   long double _Sign);

  __inline long double __cdecl _copysignl(  long double _Number,   long double _Sign)
{
    return _copysign((double)_Number, (double)_Sign);
}

  __inline long double __cdecl coshl(  long double _X)
{
    return cosh((double)_X);
}

  __inline long double __cdecl cosl(  long double _X)
{
    return cos((double)_X);
}

  __declspec(dllimport) long double __cdecl erfl(  long double _X);
  __declspec(dllimport) long double __cdecl erfcl(  long double _X);

  __inline long double __cdecl expl(  long double _X)
{
    return exp((double)_X);
}

  __declspec(dllimport) long double __cdecl exp2l(  long double _X);
  __declspec(dllimport) long double __cdecl expm1l(  long double _X);

  __inline long double __cdecl fabsl(  long double _X)
{
    return fabs((double)_X);
}

  __declspec(dllimport) long double __cdecl fdiml(  long double _X,   long double _Y);

  __inline long double __cdecl floorl(  long double _X)
{
    return floor((double)_X);
}

  __declspec(dllimport) long double __cdecl fmal(  long double _X,   long double _Y,   long double _Z);
  __declspec(dllimport) long double __cdecl fmaxl(  long double _X,   long double _Y);
  __declspec(dllimport) long double __cdecl fminl(  long double _X,   long double _Y);

  __inline long double __cdecl fmodl(  long double _X,   long double _Y)
{
    return fmod((double)_X, (double)_Y);
}

  __inline long double __cdecl frexpl(  long double _X,   int *_Y)
{
    return frexp((double)_X, _Y);
}

  __declspec(dllimport) int __cdecl ilogbl(  long double _X);

  __inline long double __cdecl _hypotl(  long double _X,   long double _Y)
{
    return _hypot((double)_X, (double)_Y);
}

  __inline long double __cdecl hypotl(  long double _X,   long double _Y)
{
    return _hypot((double)_X, (double)_Y);
}

  __inline long double __cdecl ldexpl(  long double _X,   int _Y)
{
    return ldexp((double)_X, _Y);
}

  __declspec(dllimport) long double __cdecl lgammal(  long double _X);
  __declspec(dllimport) long long __cdecl llrintl(  long double _X);
  __declspec(dllimport) long long __cdecl llroundl(  long double _X);

  __inline long double __cdecl logl(  long double _X)
{
    return log((double)_X);
}

  __inline long double __cdecl log10l(  long double _X)
{
    return log10((double)_X);
}

  __declspec(dllimport) long double __cdecl log1pl(  long double _X);
  __declspec(dllimport) long double __cdecl log2l(  long double _X);
  __declspec(dllimport) long double __cdecl logbl(  long double _X);
  __declspec(dllimport) long __cdecl lrintl(  long double _X);
  __declspec(dllimport) long __cdecl lroundl(  long double _X);

  __inline long double __cdecl modfl(  long double _X,   long double* _Y)
{
    double _F, _I;
    _F = modf((double)_X, &_I);
    *_Y = _I;
    return _F;
}

  __declspec(dllimport) long double __cdecl nanl(  char const*);
  __declspec(dllimport) long double __cdecl nearbyintl(  long double _X);
  __declspec(dllimport) long double __cdecl nextafterl(  long double _X,   long double _Y);
  __declspec(dllimport) long double __cdecl nexttowardl(  long double _X,   long double _Y);

  __inline long double __cdecl powl(  long double _X,   long double _Y)
{
    return pow((double)_X, (double)_Y);
}

  __declspec(dllimport) long double __cdecl remainderl(  long double _X,   long double _Y);
  __declspec(dllimport) long double __cdecl remquol(  long double _X,   long double _Y,   int* _Z);
  __declspec(dllimport) long double __cdecl rintl(  long double _X);
  __declspec(dllimport) long double __cdecl roundl(  long double _X);
  __declspec(dllimport) long double __cdecl scalblnl(  long double _X,   long _Y);
  __declspec(dllimport) long double __cdecl scalbnl(  long double _X,   int _Y);

  __inline long double __cdecl sinhl(  long double _X)
{
    return sinh((double)_X);
}

  __inline long double __cdecl sinl(  long double _X)
{
    return sin((double)_X);
}

  __inline long double __cdecl sqrtl(  long double _X)
{
    return sqrt((double)_X);
}

  __inline long double __cdecl tanhl(  long double _X)
{
    return tanh((double)_X);
}

  __inline long double __cdecl tanl(  long double _X)
{
    return tan((double)_X);
}

  __declspec(dllimport) long double __cdecl tgammal(  long double _X);
  __declspec(dllimport) long double __cdecl truncl(  long double _X);









    
    
    
    
    
    
    

    

    
        
            extern double HUGE;
        



        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_j0" ". See online help for details."))   __declspec(dllimport) double __cdecl j0(  double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_j1" ". See online help for details."))   __declspec(dllimport) double __cdecl j1(  double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_jn" ". See online help for details."))   __declspec(dllimport) double __cdecl jn(  int _X,   double _Y);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_y0" ". See online help for details."))   __declspec(dllimport) double __cdecl y0(  double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_y1" ". See online help for details."))   __declspec(dllimport) double __cdecl y1(  double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_yn" ". See online help for details."))   __declspec(dllimport) double __cdecl yn(  int _X,   double _Y);
    




#pragma warning(pop)



} __pragma(pack(pop))





























 

  inline double abs(  double _Xx) noexcept
	{
	return (:: fabs(_Xx));
	}

  inline float abs(  float _Xx) noexcept
	{
	return (:: fabsf(_Xx));
	}

  inline long double abs(  long double _Xx) noexcept
	{
	return (:: fabsl(_Xx));
	}

namespace std {
using :: size_t; using :: div_t; using :: ldiv_t;
using :: abort; using :: abs; using :: atexit;
using :: atof; using :: atoi; using :: atol;
using :: bsearch; using :: calloc; using :: div;
using :: exit; using :: free;
using :: labs; using :: ldiv; using :: malloc;
using :: mblen; using :: mbstowcs; using :: mbtowc;
using :: qsort; using :: rand; using :: realloc;
using :: srand; using :: strtod; using :: strtol;
using :: strtoul;
using :: wcstombs; using :: wctomb;

using :: lldiv_t;

 
using :: getenv;
using :: system;
 

using :: atoll; using :: llabs; using :: lldiv;
using :: strtof; using :: strtold;
using :: strtoll; using :: strtoull;

using :: _Exit; using :: at_quick_exit; using :: quick_exit;
}
 










 
  inline double pow(  double _Xx,   int _Yx) noexcept
	{
	if (_Yx == 2)
		return (_Xx * _Xx);

	return (:: pow(_Xx, static_cast<double>(_Yx)));
	}

  inline float acos(  float _Xx) noexcept
	{
	return (:: acosf(_Xx));
	}

  inline float acosh(  float _Xx) noexcept
	{
	return (:: acoshf(_Xx));
	}

  inline float asin(  float _Xx) noexcept
	{
	return (:: asinf(_Xx));
	}

  inline float asinh(  float _Xx) noexcept
	{
	return (:: asinhf(_Xx));
	}

  inline float atan(  float _Xx) noexcept
	{
	return (:: atanf(_Xx));
	}

  inline float atanh(  float _Xx) noexcept
	{
	return (:: atanhf(_Xx));
	}

  inline float atan2(  float _Yx,   float _Xx) noexcept
	{
	return (:: atan2f(_Yx, _Xx));
	}

  inline float cbrt(  float _Xx) noexcept
	{
	return (:: cbrtf(_Xx));
	}

  inline float ceil(  float _Xx) noexcept
	{
	return (:: ceilf(_Xx));
	}

  inline float copysign(  float _Number,
	  float _Sign) noexcept
	{
	return (:: copysignf(_Number, _Sign));
	}

  inline float cos(  float _Xx) noexcept
	{
	return (:: cosf(_Xx));
	}

  inline float cosh(  float _Xx) noexcept
	{
	return (:: coshf(_Xx));
	}

  inline float erf(  float _Xx) noexcept
	{
	return (:: erff(_Xx));
	}

  inline float erfc(  float _Xx) noexcept
	{
	return (:: erfcf(_Xx));
	}

  inline float exp(  float _Xx) noexcept
	{
	return (:: expf(_Xx));
	}

  inline float exp2(  float _Xx) noexcept
	{
	return (:: exp2f(_Xx));
	}

  inline float expm1(  float _Xx) noexcept
	{
	return (:: expm1f(_Xx));
	}

  inline float fabs(  float _Xx) noexcept
	{
	return (:: fabsf(_Xx));
	}

  inline float fdim(  float _Xx,   float _Yx) noexcept
	{
	return (:: fdimf(_Xx, _Yx));
	}

  inline float floor(  float _Xx) noexcept
	{
	return (:: floorf(_Xx));
	}

  inline float fma(  float _Xx,   float _Yx,
	  float _Zx) noexcept
	{
	return (:: fmaf(_Xx, _Yx, _Zx));
	}

  inline float fmax(  float _Xx,   float _Yx) noexcept
	{
	return (:: fmaxf(_Xx, _Yx));
	}

  inline float fmin(  float _Xx,   float _Yx) noexcept
	{
	return (:: fminf(_Xx, _Yx));
	}

  inline float fmod(  float _Xx,   float _Yx) noexcept
	{
	return (:: fmodf(_Xx, _Yx));
	}

  inline float frexp(  float _Xx,   int* _Yx) noexcept
	{
	return (:: frexpf(_Xx, _Yx));
	}

  inline float hypot(  float _Xx,   float _Yx) noexcept
	{
	return (:: hypotf(_Xx, _Yx));
	}

  inline int ilogb(  float _Xx) noexcept
	{
	return (:: ilogbf(_Xx));
	}

  inline float ldexp(  float _Xx,   int _Yx) noexcept
	{
	return (:: ldexpf(_Xx, _Yx));
	}

  inline float lgamma(  float _Xx) noexcept
	{
	return (:: lgammaf(_Xx));
	}

  inline long long llrint(  float _Xx) noexcept
	{
	return (:: llrintf(_Xx));
	}

  inline long long llround(  float _Xx) noexcept
	{
	return (:: llroundf(_Xx));
	}

  inline float log(  float _Xx) noexcept
	{
	return (:: logf(_Xx));
	}

  inline float log10(  float _Xx) noexcept
	{
	return (:: log10f(_Xx));
	}

  inline float log1p(  float _Xx) noexcept
	{
	return (:: log1pf(_Xx));
	}

  inline float log2(  float _Xx) noexcept
	{
	return (:: log2f(_Xx));
	}

  inline float logb(  float _Xx) noexcept
	{
	return (:: logbf(_Xx));
	}

  inline long lrint(  float _Xx) noexcept
	{
	return (:: lrintf(_Xx));
	}

  inline long lround(  float _Xx) noexcept
	{
	return (:: lroundf(_Xx));
	}

  inline float modf(  float _Xx,   float* _Yx) noexcept
	{
	return (:: modff(_Xx, _Yx));
	}

  inline float nearbyint(  float _Xx) noexcept
	{
	return (:: nearbyintf(_Xx));
	}

  inline float nextafter(  float _Xx,   float _Yx) noexcept
	{
	return (:: nextafterf(_Xx, _Yx));
	}

  inline float nexttoward(  float _Xx,
	  long double _Yx) noexcept
	{
	return (:: nexttowardf(_Xx, _Yx));
	}

  inline float pow(  float _Xx,
	  float _Yx) noexcept
	{
	return (:: powf(_Xx, _Yx));
	}

  inline float pow(  float _Xx,   int _Yx) noexcept
	{
	if (_Yx == 2)
		return (_Xx * _Xx);

	return (:: powf(_Xx, static_cast<float>(_Yx)));
	}

  inline float remainder(  float _Xx,   float _Yx) noexcept
	{
	return (:: remainderf(_Xx, _Yx));
	}

  inline float remquo(  float _Xx,   float _Yx,
	  int *_Zx) noexcept
	{
	return (:: remquof(_Xx, _Yx, _Zx));
	}

  inline float rint(  float _Xx) noexcept
	{
	return (:: rintf(_Xx));
	}

  inline float round(  float _Xx) noexcept
	{
	return (:: roundf(_Xx));
	}

  inline float scalbln(  float _Xx,   long _Yx) noexcept
	{
	return (:: scalblnf(_Xx, _Yx));
	}

  inline float scalbn(  float _Xx,   int _Yx) noexcept
	{
	return (:: scalbnf(_Xx, _Yx));
	}

  inline float sin(  float _Xx) noexcept
	{
	return (:: sinf(_Xx));
	}

  inline float sinh(  float _Xx) noexcept
	{
	return (:: sinhf(_Xx));
	}

  inline float sqrt(  float _Xx) noexcept
	{
	return (:: sqrtf(_Xx));
	}

  inline float tan(  float _Xx) noexcept
	{
	return (:: tanf(_Xx));
	}

  inline float tanh(  float _Xx) noexcept
	{
	return (:: tanhf(_Xx));
	}

  inline float tgamma(  float _Xx) noexcept
	{
	return (:: tgammaf(_Xx));
	}

  inline float trunc(  float _Xx) noexcept
	{
	return (:: truncf(_Xx));
	}

  inline long double acos(  long double _Xx) noexcept
	{
	return (:: acosl(_Xx));
	}

  inline long double acosh(  long double _Xx) noexcept
	{
	return (:: acoshl(_Xx));
	}

  inline long double asin(  long double _Xx) noexcept
	{
	return (:: asinl(_Xx));
	}

  inline long double asinh(  long double _Xx) noexcept
	{
	return (:: asinhl(_Xx));
	}

  inline long double atan(  long double _Xx) noexcept
	{
	return (:: atanl(_Xx));
	}

  inline long double atanh(  long double _Xx) noexcept
	{
	return (:: atanhl(_Xx));
	}

  inline long double atan2(  long double _Yx,
	  long double _Xx) noexcept
	{
	return (:: atan2l(_Yx, _Xx));
	}

  inline long double cbrt(  long double _Xx) noexcept
	{
	return (:: cbrtl(_Xx));
	}

  inline long double ceil(  long double _Xx) noexcept
	{
	return (:: ceill(_Xx));
	}

  inline long double copysign(  long double _Number,
	  long double _Sign) noexcept
	{
	return (:: copysignl(_Number, _Sign));
	}

  inline long double cos(  long double _Xx) noexcept
	{
	return (:: cosl(_Xx));
	}

  inline long double cosh(  long double _Xx) noexcept
	{
	return (:: coshl(_Xx));
	}

  inline long double erf(  long double _Xx) noexcept
	{
	return (:: erfl(_Xx));
	}

  inline long double erfc(  long double _Xx) noexcept
	{
	return (:: erfcl(_Xx));
	}

  inline long double exp(  long double _Xx) noexcept
	{
	return (:: expl(_Xx));
	}

  inline long double exp2(  long double _Xx) noexcept
	{
	return (:: exp2l(_Xx));
	}

  inline long double expm1(  long double _Xx) noexcept
	{
	return (:: expm1l(_Xx));
	}

  inline long double fabs(  long double _Xx) noexcept
	{
	return (:: fabsl(_Xx));
	}

  inline long double fdim(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: fdiml(_Xx, _Yx));
	}

  inline long double floor(  long double _Xx) noexcept
	{
	return (:: floorl(_Xx));
	}

  inline long double fma(  long double _Xx,
	  long double _Yx,   long double _Zx) noexcept
	{
	return (:: fmal(_Xx, _Yx, _Zx));
	}

  inline long double fmax(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: fmaxl(_Xx, _Yx));
	}

  inline long double fmin(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: fminl(_Xx, _Yx));
	}

  inline long double fmod(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: fmodl(_Xx, _Yx));
	}

  inline long double frexp(  long double _Xx,
	  int* _Yx) noexcept
	{
	return (:: frexpl(_Xx, _Yx));
	}

  inline long double hypot(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: hypotl(_Xx, _Yx));
	}

  inline int ilogb(  long double _Xx) noexcept
	{
	return (:: ilogbl(_Xx));
	}

  inline long double ldexp(  long double _Xx,
	  int _Yx) noexcept
	{
	return (:: ldexpl(_Xx, _Yx));
	}

  inline long double lgamma(  long double _Xx) noexcept
	{
	return (:: lgammal(_Xx));
	}

  inline long long llrint(  long double _Xx) noexcept
	{
	return (:: llrintl(_Xx));
	}

  inline long long llround(  long double _Xx) noexcept
	{
	return (:: llroundl(_Xx));
	}

  inline long double log(  long double _Xx) noexcept
	{
	return (:: logl(_Xx));
	}

  inline long double log10(  long double _Xx) noexcept
	{
	return (:: log10l(_Xx));
	}

  inline long double log1p(  long double _Xx) noexcept
	{
	return (:: log1pl(_Xx));
	}

  inline long double log2(  long double _Xx) noexcept
	{
	return (:: log2l(_Xx));
	}

  inline long double logb(  long double _Xx) noexcept
	{
	return (:: logbl(_Xx));
	}

  inline long lrint(  long double _Xx) noexcept
	{
	return (:: lrintl(_Xx));
	}

  inline long lround(  long double _Xx) noexcept
	{
	return (:: lroundl(_Xx));
	}

  inline long double modf(  long double _Xx,
	  long double* _Yx) noexcept
	{
	return (:: modfl(_Xx, _Yx));
	}

  inline long double nearbyint(  long double _Xx) noexcept
	{
	return (:: nearbyintl(_Xx));
	}

  inline long double nextafter(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: nextafterl(_Xx, _Yx));
	}

  inline long double nexttoward(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: nexttowardl(_Xx, _Yx));
	}

  inline long double pow(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: powl(_Xx, _Yx));
	}

  inline long double pow(  long double _Xx,
	  int _Yx) noexcept
	{
	if (_Yx == 2)
		return (_Xx * _Xx);

	return (:: powl(_Xx, static_cast<long double>(_Yx)));
	}

  inline long double remainder(  long double _Xx,
	  long double _Yx) noexcept
	{
	return (:: remainderl(_Xx, _Yx));
	}

  inline long double remquo(  long double _Xx,
	  long double _Yx,   int *_Zx) noexcept
	{
	return (:: remquol(_Xx, _Yx, _Zx));
	}

  inline long double rint(  long double _Xx) noexcept
	{
	return (:: rintl(_Xx));
	}

  inline long double round(  long double _Xx) noexcept
	{
	return (:: roundl(_Xx));
	}

  inline long double scalbln(  long double _Xx,
	  long _Yx) noexcept
	{
	return (:: scalblnl(_Xx, _Yx));
	}

  inline long double scalbn(  long double _Xx,
	  int _Yx) noexcept
	{
	return (:: scalbnl(_Xx, _Yx));
	}

  inline long double sin(  long double _Xx) noexcept
	{
	return (:: sinl(_Xx));
	}

  inline long double sinh(  long double _Xx) noexcept
	{
	return (:: sinhl(_Xx));
	}

  inline long double sqrt(  long double _Xx) noexcept
	{
	return (:: sqrtl(_Xx));
	}

  inline long double tan(  long double _Xx) noexcept
	{
	return (:: tanl(_Xx));
	}

  inline long double tanh(  long double _Xx) noexcept
	{
	return (:: tanhl(_Xx));
	}

  inline long double tgamma(  long double _Xx) noexcept
	{
	return (:: tgammal(_Xx));
	}

  inline long double trunc(  long double _Xx) noexcept
	{
	return (:: truncl(_Xx));
	}




 
#pragma once





#pragma once





 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
	
struct _Nil
	{	
	};

	
template<class _Ty,
	_Ty _Val>
	struct integral_constant
	{	
	static constexpr _Ty value = _Val;

	typedef _Ty value_type;
	typedef integral_constant<_Ty, _Val> type;

	constexpr operator value_type() const noexcept
		{	
		return (value);
		}

	constexpr value_type operator()() const noexcept
		{	
		return (value);
		}
	};

typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

	
template<bool _Val>
	using bool_constant = integral_constant<bool, _Val>;

	
template<bool _Val>
	struct _Cat_base
		: integral_constant<bool, _Val>
	{	
	};

	
template<bool _Test,
	class _Ty = void>
	struct enable_if
	{	
	};

template<class _Ty>
	struct enable_if<true, _Ty>
	{	
	typedef _Ty type;
	};

	
template<bool _Test,
	class _Ty1,
	class _Ty2>
	struct conditional
	{	
	typedef _Ty2 type;
	};

template<class _Ty1,
	class _Ty2>
	struct conditional<true, _Ty1, _Ty2>
	{	
	typedef _Ty1 type;
	};

	
template<class _Ty1,
	class _Ty2>
	struct is_same
		: false_type
	{	
	};

template<class _Ty1>
	struct is_same<_Ty1, _Ty1>
		: true_type
	{	
	};

template<class _Ty,
	class _Uty>
	constexpr bool is_same_v = is_same<_Ty, _Uty>::value;

	
template<class _Ty>
	struct remove_const
	{	
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_const<const _Ty>
	{	
	typedef _Ty type;
	};

	
template<class _Ty>
	struct remove_volatile
	{	
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_volatile<volatile _Ty>
	{	
	typedef _Ty type;
	};

	
template<class _Ty>
	struct remove_cv
	{	
	typedef typename remove_const<typename remove_volatile<_Ty>::type>::type
		type;
	};

	
template<class _Ty>
	struct _Is_integral
		: false_type
	{	
	};

template<>
	struct _Is_integral<bool>
		: true_type
	{	
	};

template<>
	struct _Is_integral<char>
		: true_type
	{	
	};

template<>
	struct _Is_integral<unsigned char>
		: true_type
	{	
	};

template<>
	struct _Is_integral<signed char>
		: true_type
	{	
	};

 
template<>
	struct _Is_integral<wchar_t>
		: true_type
	{	
	};
 

template<>
	struct _Is_integral<unsigned short>
		: true_type
	{	
	};

template<>
	struct _Is_integral<signed short>
		: true_type
	{	
	};

template<>
	struct _Is_integral<unsigned int>
		: true_type
	{	
	};

template<>
	struct _Is_integral<signed int>
		: true_type
	{	
	};

template<>
	struct _Is_integral<unsigned long>
		: true_type
	{	
	};

template<>
	struct _Is_integral<signed long>
		: true_type
	{	
	};

template<>
	struct _Is_integral<char16_t>
		: true_type
	{	
	};

template<>
	struct _Is_integral<char32_t>
		: true_type
	{	
	};

template<>
	struct _Is_integral<long long>
		: true_type
	{	
	};

template<>
	struct _Is_integral<unsigned long long>
		: true_type
	{	
	};

	
template<class _Ty>
	struct is_integral
		: _Is_integral<typename remove_cv<_Ty>::type>
	{	
	};

template<class _Ty>
	constexpr bool is_integral_v = is_integral<_Ty>::value;

	
template<class _Ty>
	struct _Is_floating_point
		: false_type
	{	
	};

template<>
	struct _Is_floating_point<float>
		: true_type
	{	
	};

template<>
	struct _Is_floating_point<double>
		: true_type
	{	
	};

template<>
	struct _Is_floating_point<long double>
		: true_type
	{	
	};

	
template<class _Ty>
	struct is_floating_point
		: _Is_floating_point<typename remove_cv<_Ty>::type>
	{	
	};

template<class _Ty>
	constexpr bool is_floating_point_v = is_floating_point<_Ty>::value;

	
template<class _Ty>
	struct is_arithmetic
		: _Cat_base<is_integral<_Ty>::value
			|| is_floating_point<_Ty>::value>
	{	
	};

template<class _Ty>
	constexpr bool is_arithmetic_v = is_arithmetic<_Ty>::value;

	
template<class _Ty>
	struct remove_reference
	{	
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_reference<_Ty&>
	{	
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_reference<_Ty&&>
	{	
	typedef _Ty type;
	};

	
struct _Wrap_int
	{	
	_Wrap_int(int)
		{	
		}
	};
}
 
 #pragma warning(pop)
 #pragma pack(pop)









 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
template<class _Ty>
	struct _Promote_to_float
	{	
	typedef typename conditional<is_integral<_Ty>::value,
		double, _Ty>::type type;
	};

template<class _Ty1,
	class _Ty2>
	struct _Common_float_type
	{	
	typedef typename _Promote_to_float<_Ty1>::type _Ty1f;
	typedef typename _Promote_to_float<_Ty2>::type _Ty2f;
	typedef typename conditional<is_same<_Ty1f, long double>::value
		|| is_same<_Ty2f, long double>::value, long double,
		typename conditional<is_same<_Ty1f, double>::value
			|| is_same<_Ty2f, double>::value, double,
			float>::type>::type type;
	};
}







































template<class _Ty1,
	class _Ty2> inline
	typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value
		&& ::std:: is_arithmetic<_Ty2>::value,
		typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type
	pow(const _Ty1 _Left, const _Ty2 _Right)
	{	
	typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type;
	return (:: pow(type(_Left), type(_Right)));
	}


extern "C"    double __cdecl acos(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type acos(_Ty _Left) { return (:: acos((double)_Left)); }
extern "C"    double __cdecl asin(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type asin(_Ty _Left) { return (:: asin((double)_Left)); }
extern "C"    double __cdecl atan(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type atan(_Ty _Left) { return (:: atan((double)_Left)); }
extern "C"    double __cdecl atan2(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type atan2(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: atan2((type)_Left, (type)_Right)); }
extern "C"   __declspec(dllimport) double __cdecl ceil(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type ceil(_Ty _Left) { return (:: ceil((double)_Left)); }
extern "C"    double __cdecl cos(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type cos(_Ty _Left) { return (:: cos((double)_Left)); }
extern "C"    double __cdecl cosh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type cosh(_Ty _Left) { return (:: cosh((double)_Left)); }
extern "C"    double __cdecl exp(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type exp(_Ty _Left) { return (:: exp((double)_Left)); }

extern "C"    double __cdecl fabs(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type fabs(_Ty _Left) { return (:: fabs((double)_Left)); }

extern "C"   __declspec(dllimport) double __cdecl floor(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type floor(_Ty _Left) { return (:: floor((double)_Left)); }
extern "C"    double __cdecl fmod(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type fmod(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: fmod((type)_Left, (type)_Right)); }
extern "C"   __declspec(dllimport) double __cdecl frexp(  double,   int *); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type frexp(_Ty _Left,   int * _Arg2) { return (:: frexp((double)_Left, _Arg2)); }
extern "C"   __declspec(dllimport) double __cdecl ldexp(  double,   int); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type ldexp(_Ty _Left,   int _Arg2) { return (:: ldexp((double)_Left, _Arg2)); }
extern "C"    double __cdecl log(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type log(_Ty _Left) { return (:: log((double)_Left)); }
extern "C"    double __cdecl log10(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type log10(_Ty _Left) { return (:: log10((double)_Left)); }


extern "C"    double __cdecl sin(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type sin(_Ty _Left) { return (:: sin((double)_Left)); }
extern "C"    double __cdecl sinh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type sinh(_Ty _Left) { return (:: sinh((double)_Left)); }
extern "C"    double __cdecl sqrt(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type sqrt(_Ty _Left) { return (:: sqrt((double)_Left)); }
extern "C"    double __cdecl tan(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type tan(_Ty _Left) { return (:: tan((double)_Left)); }
extern "C"    double __cdecl tanh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type tanh(_Ty _Left) { return (:: tanh((double)_Left)); }

		









		

inline float _Fma(float _Left, float _Middle, float _Right)
	{	
	return (:: fmaf(_Left, _Middle, _Right));
	}

inline double _Fma(double _Left, double _Middle, double _Right)
	{	
	return (:: fma(_Left, _Middle, _Right));
	}

inline long double _Fma(long double _Left, long double _Middle,
	long double _Right)
	{	
	return (:: fmal(_Left, _Middle, _Right));
	}

template<class _Ty1,
	class _Ty2,
	class _Ty3> inline
	typename ::std:: _Common_float_type<_Ty1,
		typename ::std:: _Common_float_type<_Ty2, _Ty3>::type>::type
	fma(_Ty1 _Left, _Ty2 _Middle, _Ty3 _Right)
	{	
	typedef typename ::std:: _Common_float_type<_Ty1,
		typename ::std:: _Common_float_type<_Ty2, _Ty3>::type>::type type;
	return (_Fma((type)_Left, (type)_Middle, (type)_Right));
	}

		

inline float _Remquo(float _Left, float _Right, int *_Pquo)
	{	
	return (:: remquof(_Left, _Right, _Pquo));
	}

inline double _Remquo(double _Left, double _Right, int *_Pquo)
	{	
	return (:: remquo(_Left, _Right, _Pquo));
	}

inline long double _Remquo(long double _Left, long double _Right, int *_Pquo)
	{	
	return (:: remquol(_Left, _Right, _Pquo));
	}

template<class _Ty1,
	class _Ty2> inline
	typename ::std:: _Common_float_type<_Ty1, _Ty2>::type
	remquo(_Ty1 _Left, _Ty2 _Right, int *_Pquo)
	{	
	typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type;
	return (_Remquo((type)_Left, (type)_Right, _Pquo));
	}

extern "C"   __declspec(dllimport) double __cdecl acosh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type acosh(_Ty _Left) { return (:: acosh((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl asinh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type asinh(_Ty _Left) { return (:: asinh((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl atanh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type atanh(_Ty _Left) { return (:: atanh((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl cbrt(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type cbrt(_Ty _Left) { return (:: cbrt((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl copysign(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type copysign(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: copysign((type)_Left, (type)_Right)); }
extern "C"   __declspec(dllimport) double __cdecl erf(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type erf(_Ty _Left) { return (:: erf((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl erfc(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type erfc(_Ty _Left) { return (:: erfc((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl expm1(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type expm1(_Ty _Left) { return (:: expm1((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl exp2(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type exp2(_Ty _Left) { return (:: exp2((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl fdim(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type fdim(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: fdim((type)_Left, (type)_Right)); }

extern "C"   __declspec(dllimport) double __cdecl fmax(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type fmax(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: fmax((type)_Left, (type)_Right)); }
extern "C"   __declspec(dllimport) double __cdecl fmin(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type fmin(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: fmin((type)_Left, (type)_Right)); }
extern "C"   __declspec(dllimport) double __cdecl hypot(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type hypot(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: hypot((type)_Left, (type)_Right)); }
extern "C"   __declspec(dllimport) int __cdecl ilogb(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, int>::type ilogb(_Ty _Left) { return (:: ilogb((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl lgamma(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type lgamma(_Ty _Left) { return (:: lgamma((double)_Left)); }
extern "C"   __declspec(dllimport) long long __cdecl llrint(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, long long>::type llrint(_Ty _Left) { return (:: llrint((double)_Left)); }
extern "C"   __declspec(dllimport) long long __cdecl llround(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, long long>::type llround(_Ty _Left) { return (:: llround((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl log1p(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type log1p(_Ty _Left) { return (:: log1p((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl log2(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type log2(_Ty _Left) { return (:: log2((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl logb(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type logb(_Ty _Left) { return (:: logb((double)_Left)); }
extern "C"   __declspec(dllimport) long __cdecl lrint(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, long>::type lrint(_Ty _Left) { return (:: lrint((double)_Left)); }
extern "C"   __declspec(dllimport) long __cdecl lround(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, long>::type lround(_Ty _Left) { return (:: lround((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl nearbyint(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type nearbyint(_Ty _Left) { return (:: nearbyint((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl nextafter(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type nextafter(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: nextafter((type)_Left, (type)_Right)); }
extern "C"   __declspec(dllimport) double __cdecl nexttoward(  double,   long double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type nexttoward(_Ty _Left,   long double _Arg2) { return (:: nexttoward((double)_Left, _Arg2)); }
extern "C"   __declspec(dllimport) double __cdecl remainder(   double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: is_arithmetic<_Ty1>::value && ::std:: is_arithmetic<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type remainder(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: remainder((type)_Left, (type)_Right)); }

extern "C"   __declspec(dllimport) double __cdecl rint(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type rint(_Ty _Left) { return (:: rint((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl round(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type round(_Ty _Left) { return (:: round((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl scalbln(  double,   long); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type scalbln(_Ty _Left,   long _Arg2) { return (:: scalbln((double)_Left, _Arg2)); }
extern "C"   __declspec(dllimport) double __cdecl scalbn(  double,   int); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type scalbn(_Ty _Left,   int _Arg2) { return (:: scalbn((double)_Left, _Arg2)); }
extern "C"   __declspec(dllimport) double __cdecl tgamma(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type tgamma(_Ty _Left) { return (:: tgamma((double)_Left)); }
extern "C"   __declspec(dllimport) double __cdecl trunc(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type trunc(_Ty _Left) { return (:: trunc((double)_Left)); }
 
 #pragma warning(pop)
 #pragma pack(pop)


 







namespace std {
using :: abs; using :: acos; using :: asin;
using :: atan; using :: atan2; using :: ceil;
using :: cos; using :: cosh; using :: exp;
using :: fabs; using :: floor; using :: fmod;
using :: frexp; using :: ldexp; using :: log;
using :: log10; using :: modf; using :: pow;
using :: sin; using :: sinh; using :: sqrt;
using :: tan; using :: tanh;

using :: acosf; using :: asinf;
using :: atanf; using :: atan2f; using :: ceilf;
using :: cosf; using :: coshf; using :: expf;
using :: fabsf; using :: floorf; using :: fmodf;
using :: frexpf; using :: ldexpf; using :: logf;
using :: log10f; using :: modff; using :: powf;
using :: sinf; using :: sinhf; using :: sqrtf;
using :: tanf; using :: tanhf;

using :: acosl; using :: asinl;
using :: atanl; using :: atan2l; using :: ceill;
using :: cosl; using :: coshl; using :: expl;
using :: fabsl; using :: floorl; using :: fmodl;
using :: frexpl; using :: ldexpl; using :: logl;
using :: log10l; using :: modfl; using :: powl;
using :: sinl; using :: sinhl; using :: sqrtl;
using :: tanl; using :: tanhl;

using :: float_t; using :: double_t;

using :: acosh; using :: asinh; using :: atanh;
using :: cbrt; using :: erf; using :: erfc;
using :: expm1; using :: exp2;
using :: hypot; using :: ilogb; using :: lgamma;
using :: log1p; using :: log2; using :: logb;
using :: llrint; using :: lrint; using :: nearbyint;
using :: rint; using :: llround; using :: lround;
using :: fdim; using :: fma; using :: fmax; using :: fmin;
using :: round; using :: trunc;
using :: remainder; using :: remquo;
using :: copysign; using :: nan; using :: nextafter;
using :: scalbn; using :: scalbln;
using :: nexttoward; using :: tgamma;

using :: acoshf; using :: asinhf; using :: atanhf;
using :: cbrtf; using :: erff; using :: erfcf;
using :: expm1f; using :: exp2f;
using :: hypotf; using :: ilogbf; using :: lgammaf;
using :: log1pf; using :: log2f; using :: logbf;
using :: llrintf; using :: lrintf; using :: nearbyintf;
using :: rintf; using :: llroundf; using :: lroundf;
using :: fdimf; using :: fmaf; using :: fmaxf; using :: fminf;
using :: roundf; using :: truncf;
using :: remainderf; using :: remquof;
using :: copysignf; using :: nanf;
using :: nextafterf; using :: scalbnf; using :: scalblnf;
using :: nexttowardf; using :: tgammaf;

using :: acoshl; using :: asinhl; using :: atanhl;
using :: cbrtl; using :: erfl; using :: erfcl;
using :: expm1l; using :: exp2l;
using :: hypotl; using :: ilogbl; using :: lgammal;
using :: log1pl; using :: log2l; using :: logbl;
using :: llrintl; using :: lrintl; using :: nearbyintl;
using :: rintl; using :: llroundl; using :: lroundl;
using :: fdiml; using :: fmal; using :: fmaxl; using :: fminl;
using :: roundl; using :: truncl;
using :: remainderl; using :: remquol;
using :: copysignl; using :: nanl;
using :: nextafterl; using :: scalbnl; using :: scalblnl;
using :: nexttowardl; using :: tgammal;

using :: fpclassify; using :: signbit;
using :: isfinite; using :: isinf;
using :: isnan; using :: isnormal;
using :: isgreater; using :: isgreaterequal;
using :: isless; using :: islessequal;
using :: islessgreater; using :: isunordered;
}
 










#pragma once











#pragma once













#pragma once










#pragma once





__pragma(pack(push, 8)) extern "C" {






    



    




































    


        #pragma detect_mismatch("_CRT_STDIO_ISO_WIDE_SPECIFIERS", "0")
    




   
__declspec(noinline) __inline unsigned __int64* __cdecl __local_stdio_printf_options(void)
{
    static unsigned __int64 _OptionsStorage;
    return &_OptionsStorage;
}



   
__declspec(noinline) __inline unsigned __int64* __cdecl __local_stdio_scanf_options(void)
{
    static unsigned __int64 _OptionsStorage;
    return &_OptionsStorage;
}



















} __pragma(pack(pop))




__pragma(pack(push, 8)) extern "C" {








    
    typedef struct _iobuf
    {
        void* _Placeholder;
    } FILE;


__declspec(dllimport) FILE* __cdecl __acrt_iob_func(unsigned);















__declspec(dllimport) wint_t __cdecl fgetwc(
      FILE* _Stream
    );


__declspec(dllimport) wint_t __cdecl _fgetwchar(void);


__declspec(dllimport) wint_t __cdecl fputwc(
         wchar_t _Character,
      FILE*   _Stream);


__declspec(dllimport) wint_t __cdecl _fputwchar(
      wchar_t _Character
    );

 
__declspec(dllimport) wint_t __cdecl getwc(
      FILE* _Stream
    );

 
__declspec(dllimport) wint_t __cdecl getwchar(void);



 
__declspec(dllimport) wchar_t* __cdecl fgetws(
      wchar_t* _Buffer,
                              int      _BufferCount,
                           FILE*    _Stream
    );


__declspec(dllimport) int __cdecl fputws(
       wchar_t const* _Buffer,
      FILE*          _Stream
    );


 
__declspec(dllimport) wchar_t* __cdecl _getws_s(
      wchar_t* _Buffer,
                              size_t   _BufferCount
    );

extern "C++" { template <size_t _Size> inline   wchar_t* __cdecl _getws_s(  wchar_t (&_Buffer)[_Size]) throw() { return _getws_s(_Buffer, _Size); } }


__declspec(dllimport) wint_t __cdecl putwc(
         wchar_t _Character,
      FILE*   _Stream
    );


__declspec(dllimport) wint_t __cdecl putwchar(
      wchar_t _Character
    );


__declspec(dllimport) int __cdecl _putws(
      wchar_t const* _Buffer
    );


__declspec(dllimport) wint_t __cdecl ungetwc(
         wint_t _Character,
      FILE*  _Stream
    );

 
__declspec(dllimport) FILE * __cdecl _wfdopen(
        int            _FileHandle,
      wchar_t const* _Mode
    );

  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) FILE* __cdecl _wfopen(
      wchar_t const* _FileName,
      wchar_t const* _Mode
    );


__declspec(dllimport) errno_t __cdecl _wfopen_s(
      FILE**         _Stream,
                         wchar_t const* _FileName,
                         wchar_t const* _Mode
    );

 
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfreopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) FILE* __cdecl _wfreopen(
       wchar_t const* _FileName,
       wchar_t const* _Mode,
      FILE*          _OldStream
    );


__declspec(dllimport) errno_t __cdecl _wfreopen_s(
      FILE**         _Stream,
                         wchar_t const* _FileName,
                         wchar_t const* _Mode,
                        FILE*          _OldStream
    );

 
__declspec(dllimport) FILE* __cdecl _wfsopen(
      wchar_t const* _FileName,
      wchar_t const* _Mode,
        int            _ShFlag
    );

__declspec(dllimport) void __cdecl _wperror(
      wchar_t const* _ErrorMessage
    );



     
    __declspec(dllimport) FILE* __cdecl _wpopen(
          wchar_t const* _Command,
          wchar_t const* _Mode
        );



__declspec(dllimport) int __cdecl _wremove(
      wchar_t const* _FileName
    );




 
__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wtempnam(
      wchar_t const* _Directory,
      wchar_t const* _FilePrefix
    );



 

__declspec(dllimport) errno_t __cdecl _wtmpnam_s(
      wchar_t* _Buffer,
                              size_t   _BufferCount
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wtmpnam_s(  wchar_t (&_Buffer)[_Size]) throw() { return _wtmpnam_s(_Buffer, _Size); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wtmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport)  wchar_t* __cdecl _wtmpnam(  wchar_t *_Buffer);









__declspec(dllimport) wint_t __cdecl _fgetwc_nolock(
      FILE* _Stream
    );


__declspec(dllimport) wint_t __cdecl _fputwc_nolock(
         wchar_t _Character, 
      FILE*   _Stream
    );


__declspec(dllimport) wint_t __cdecl _getwc_nolock(
      FILE* _Stream
    );


__declspec(dllimport) wint_t __cdecl _putwc_nolock(
         wchar_t _Character,
      FILE*   _Stream
    );


__declspec(dllimport) wint_t __cdecl _ungetwc_nolock(
         wint_t _Character,
      FILE*  _Stream
    );






















__declspec(dllimport) int __cdecl __stdio_common_vfwprintf(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );


__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_s(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );


__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_p(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );


__inline int __cdecl _vfwprintf_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    return __stdio_common_vfwprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}



__inline int __cdecl vfwprintf(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vfwprintf_l(_Stream, _Format, 0, _ArgList);
}



__inline int __cdecl _vfwprintf_s_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    return __stdio_common_vfwprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}




    
    __inline int __cdecl vfwprintf_s(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList);
    }





__inline int __cdecl _vfwprintf_p_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    return __stdio_common_vfwprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}



__inline int __cdecl _vfwprintf_p(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList);
}



__inline int __cdecl _vwprintf_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    return _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}



__inline int __cdecl vwprintf(
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vfwprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
}



__inline int __cdecl _vwprintf_s_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}




    
    __inline int __cdecl vwprintf_s(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
    }





__inline int __cdecl _vwprintf_p_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}



__inline int __cdecl _vwprintf_p(
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
}



__inline int __cdecl _fwprintf_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl fwprintf(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _fwprintf_s_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl fwprintf_s(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }





__inline int __cdecl _fwprintf_p_l(
                                      FILE*          const _Stream,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _fwprintf_p(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _wprintf_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl wprintf(
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _wprintf_s_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl wprintf_s(
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }





__inline int __cdecl _wprintf_p_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _wprintf_p(
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}









__declspec(dllimport) int __cdecl __stdio_common_vfwscanf(
                                        unsigned __int64 _Options,
                                     FILE*            _Stream,
        wchar_t const*   _Format,
                                    _locale_t        _Locale,
                                           va_list          _ArgList
    );


__inline int __cdecl _vfwscanf_l(
      FILE*                                const _Stream,
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )



{
    return __stdio_common_vfwscanf(
        (*__local_stdio_scanf_options ()),
        _Stream, _Format, _Locale, _ArgList);
}



__inline int __cdecl vfwscanf(
      FILE*                                const _Stream,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vfwscanf_l(_Stream, _Format, 0, _ArgList);
}



__inline int __cdecl _vfwscanf_s_l(
                            FILE*          const _Stream,
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )



{
    return __stdio_common_vfwscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Stream, _Format, _Locale, _ArgList);
}




    
    __inline int __cdecl vfwscanf_s(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList);
    }




__inline int __cdecl _vwscanf_l(
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )



{
    return _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
}



__inline int __cdecl vwscanf(
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vfwscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
}



__inline int __cdecl _vwscanf_s_l(
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )



{
    return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
}




    
    __inline int __cdecl vwscanf_s(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
    }




 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _fwscanf_l(
                                     FILE*          const _Stream,
        wchar_t const* const _Format,
                                    _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl fwscanf(
                           FILE*          const _Stream,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _fwscanf_s_l(
                                       FILE*          const _Stream,
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl fwscanf_s(
                                 FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }




 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _wscanf_l(
        wchar_t const* const _Format,
                                    _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


  __declspec(deprecated("This function or variable may be unsafe. Consider using " "wscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl wscanf(
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _wscanf_s_l(
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl wscanf_s(
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }












    







 

__declspec(dllimport) int __cdecl __stdio_common_vswprintf(
                                         unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                         size_t           _BufferCount,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 

__declspec(dllimport) int __cdecl __stdio_common_vswprintf_s(
                                         unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                         size_t           _BufferCount,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 

__declspec(dllimport) int __cdecl __stdio_common_vsnwprintf_s(
                                         unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                         size_t           _BufferCount,
                                         size_t           _MaxCount,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 

__declspec(dllimport) int __cdecl __stdio_common_vswprintf_p(
                                         unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                         size_t           _BufferCount,
        wchar_t const*   _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _vsnwprintf_l(
           wchar_t*       const _Buffer,
                                             size_t         const _BufferCount,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
    )



{
    int const _Result = __stdio_common_vswprintf(
        (*__local_stdio_printf_options()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


#pragma warning(push)
#pragma warning(disable: 4793)

 

__inline int __cdecl _vsnwprintf_s_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
                                         size_t         const _MaxCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    int const _Result = __stdio_common_vsnwprintf_s(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 

__inline int __cdecl _vsnwprintf_s(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
                               size_t         const _MaxCount,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
}


__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl _snwprintf(    wchar_t *_Buffer,   size_t _BufferCount,     wchar_t const* _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl _vsnwprintf(    wchar_t *_Buffer,   size_t _BufferCount,     wchar_t const* _Format, va_list _Args);

#pragma warning(pop)

 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _vsnwprintf(
        wchar_t*       _Buffer,
                                          size_t         _BufferCount,
                   wchar_t const* _Format,
                                             va_list        _ArgList
    )



{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    #pragma warning(pop)
}


extern "C++" { template <size_t _Size> inline   int __cdecl _vsnwprintf_s(  wchar_t (&_Buffer)[_Size],   size_t _BufferCount,     wchar_t const* _Format, va_list _ArgList) throw() { return _vsnwprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }

 

__inline int __cdecl _vswprintf_c_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    int const _Result = __stdio_common_vswprintf(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 

__inline int __cdecl _vswprintf_c(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
}


 

__inline int __cdecl _vswprintf_l(
                         wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    #pragma warning(pop)
}


 

__inline int __cdecl __vswprintf_l(
                         wchar_t*       const _Buffer,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    return _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}


 

__inline int __cdecl _vswprintf(
               wchar_t*       const _Buffer,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vswprintf_l(_Buffer, (size_t)-1, _Format, 0, _ArgList);
}


 

__inline int __cdecl vswprintf(
                         wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                            va_list              _ArgList
    )



{
    return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
}


 

__inline int __cdecl _vswprintf_s_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    int const _Result = __stdio_common_vswprintf_s(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}




     
    __inline int __cdecl vswprintf_s(
           wchar_t*       const _Buffer,
                                   size_t         const _BufferCount,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    }




extern "C++" { template <size_t _Size> inline   int __cdecl vswprintf_s(  wchar_t (&_Buffer)[_Size],     wchar_t const* _Format, va_list _ArgList) throw() { return vswprintf_s(_Buffer, _Size, _Format, _ArgList); } }

 

__inline int __cdecl _vswprintf_p_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    int const _Result = __stdio_common_vswprintf_p(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 

__inline int __cdecl _vswprintf_p(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
}


 
 
__inline int __cdecl _vscwprintf_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    int const _Result = __stdio_common_vswprintf(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        0, 0, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 
 
__inline int __cdecl _vscwprintf(
        wchar_t const* const _Format,
                                  va_list              _ArgList
    )



{
    return _vscwprintf_l(_Format, 0, _ArgList);
}


 
 
__inline int __cdecl _vscwprintf_p_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
                                            va_list              _ArgList
    )



{
    int const _Result = __stdio_common_vswprintf_p(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        0, 0, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 
 
__inline int __cdecl _vscwprintf_p(
        wchar_t const* const _Format, 
                                  va_list              _ArgList
    )



{
    return _vscwprintf_p_l(_Format, 0, _ArgList);
}


 

__inline int __cdecl __swprintf_l(
                         wchar_t*       const _Buffer,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _swprintf_l(
                         wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _swprintf(
               wchar_t*       const _Buffer,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl swprintf(
               wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


#pragma warning(push)


#pragma warning(disable:4793 4996)

__declspec(deprecated("This function or variable may be unsafe. Consider using " "__swprintf_l_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl __swprintf_l(    wchar_t *_Buffer,     wchar_t const* _Format,   _locale_t _Locale, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl __vswprintf_l(    wchar_t *_Buffer,     wchar_t const* _Format,   _locale_t _Locale, va_list _Args);

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl _swprintf(    wchar_t *_Buffer,     wchar_t const* _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl _vswprintf(    wchar_t *_Buffer,     wchar_t const* _Format, va_list _Args);

#pragma warning(pop)

 

__inline int __cdecl _swprintf_s_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




     
    __inline int __cdecl swprintf_s(
           wchar_t*       const _Buffer,
                                   size_t         const _BufferCount,
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }




extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline   int __cdecl swprintf_s(  wchar_t (&_Buffer)[_Size],     wchar_t const* _Format, ...) throw() { va_list _ArgList; ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1)))))); return vswprintf_s(_Buffer, _Size, _Format, _ArgList); } __pragma(warning(pop)); }

 

__inline int __cdecl _swprintf_p_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _swprintf_p(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _swprintf_c_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _swprintf_c(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _snwprintf_l(
        wchar_t*       const _Buffer,
                                          size_t         const _BufferCount,
         wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    #pragma warning(pop)

    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _snwprintf(
        wchar_t*       _Buffer,
                                          size_t         _BufferCount,
                   wchar_t const* _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    #pragma warning(pop)

    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _snwprintf_s_l(
                 wchar_t*       const _Buffer,
                                         size_t         const _BufferCount,
                                         size_t         const _MaxCount,
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _snwprintf_s(
       wchar_t*       const _Buffer,
                               size_t         const _BufferCount,
                               size_t         const _MaxCount,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline   int __cdecl _snwprintf_s(  wchar_t (&_Buffer)[_Size],   size_t _BufferCount,     wchar_t const* _Format, ...) throw() { va_list _ArgList; ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1)))))); return _vsnwprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } __pragma(warning(pop)); }

 
__inline int __cdecl _scwprintf_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vscwprintf_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
 
__inline int __cdecl _scwprintf(
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vscwprintf_l(_Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
 
__inline int __cdecl _scwprintf_p_l(
        wchar_t const* const _Format,
                                     _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vscwprintf_p_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
 
__inline int __cdecl _scwprintf_p(
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vscwprintf_p_l(_Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    #pragma warning(push)
    #pragma warning(disable: 4141 4412 4793 4996 6054)

    

        extern "C++" __declspec(deprecated("function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
        inline int swprintf(
                       wchar_t*       const _Buffer,
                wchar_t const* const _Format,
            ...) throw()
        {
            int _Result;
            va_list _ArgList;
            ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
            #pragma warning(suppress: 28719)
            _Result = vswprintf(_Buffer, 2147483647, _Format, _ArgList);       
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }

        extern "C++" __declspec(deprecated("function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
        inline int __cdecl vswprintf(
                       wchar_t*       const _Buffer,
                wchar_t const* const _Format,
                                          va_list              _ArgList
            ) throw()
        {
            #pragma warning(suppress: 28719)
            return vswprintf(_Buffer, 2147483647, _Format, _ArgList);
        }

        extern "C++" __declspec(deprecated("function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
        inline int _swprintf_l(
                                 wchar_t*       const _Buffer,
                wchar_t const* const _Format,
                                             _locale_t      const _Locale,
            ...) throw()
        {
            int _Result;
            va_list _ArgList;
            ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
            _Result = _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }

        extern "C++" __declspec(deprecated("function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
        inline int __cdecl _vswprintf_l(
                                 wchar_t*       const _Buffer,
                wchar_t const* const _Format,
                                             _locale_t      const _Locale,
                                                    va_list              _ArgList
            ) throw()
        {
            return _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
        }

    

    #pragma warning(pop)















 
__declspec(dllimport) int __cdecl __stdio_common_vswscanf(
                                        unsigned __int64 _Options,
              wchar_t const*   _Buffer,
                                        size_t           _BufferCount,
        wchar_t const*   _Format,
                                    _locale_t        _Locale,
                                           va_list          _ArgList
    );

 

__inline int __cdecl _vswscanf_l(
                             wchar_t const* const _Buffer,
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )



{
    return __stdio_common_vswscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}


 

__inline int __cdecl vswscanf(
                             wchar_t const* _Buffer,
        wchar_t const* _Format,
                                  va_list        _ArgList
    )



{
    return _vswscanf_l(_Buffer, _Format, 0, _ArgList);
}


 

__inline int __cdecl _vswscanf_s_l(
                             wchar_t const* const _Buffer,
        wchar_t const* const _Format,
                           _locale_t      const _Locale,
                                  va_list              _ArgList
    )



{
    return __stdio_common_vswscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}




     
    
    __inline int __cdecl vswscanf_s(
                                 wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList);
    }




extern "C++" { template <size_t _Size> inline   int __cdecl vswscanf_s(  wchar_t (&_Buffer)[_Size],     wchar_t const* _Format, va_list _Args) throw() { return vswscanf_s(_Buffer, _Size, _Format, _Args); } }

 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _vsnwscanf_l(
              wchar_t const* const _Buffer,
                                        size_t         const _BufferCount,
        wchar_t const* const _Format,
                                    _locale_t      const _Locale,
                                           va_list              _ArgList
    )



{
    return __stdio_common_vswscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
}


 

__inline int __cdecl _vsnwscanf_s_l(
                wchar_t const* const _Buffer,
                                          size_t         const _BufferCount,
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
                                             va_list              _ArgList
    )



{
    return __stdio_common_vswscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);
}


 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_swscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _swscanf_l(
                                      wchar_t const* const _Buffer,
        wchar_t const* const _Format,
                                    _locale_t            _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "swscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl swscanf(
                            wchar_t const* const _Buffer,
        wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _swscanf_s_l(
                                        wchar_t const* const _Buffer,
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




     
    
    __inline int __cdecl swscanf_s(
                                  wchar_t const* const _Buffer,
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList);  
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }




 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _snwscanf_l(
              wchar_t const* const _Buffer,
                                        size_t         const _BufferCount,
        wchar_t const* const _Format,
                                    _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    #pragma warning(pop)

    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _snwscanf(
        wchar_t const* const _Buffer,
                                  size_t         const _BufferCount,
            wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    #pragma warning(pop)

    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _snwscanf_s_l(
                wchar_t const* const _Buffer,
                                          size_t         const _BufferCount,
        wchar_t const* const _Format,
                                      _locale_t      const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _snwscanf_s(
         wchar_t const* const _Buffer,
                                   size_t         const _BufferCount,
           wchar_t const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}








} __pragma(pack(pop))



__pragma(pack(push, 8)) extern "C" {































    
















    
    



typedef __int64 fpos_t;




__declspec(dllimport) errno_t __cdecl _get_stream_buffer_pointers(
           FILE*   _Stream,
      char*** _Base,
      char*** _Pointer,
      int**   _Count
    );









    
    __declspec(dllimport) errno_t __cdecl clearerr_s(
          FILE* _Stream
        );

    
    __declspec(dllimport) errno_t __cdecl fopen_s(
          FILE**      _Stream,
                             char const* _FileName,
                             char const* _Mode
        );
    
    
     
    __declspec(dllimport) size_t __cdecl fread_s(
            void*  _Buffer,
                       size_t _BufferSize,
 size_t _ElementSize,
 size_t _ElementCount,
                                                                     FILE*  _Stream
        );
    
    
    __declspec(dllimport) errno_t __cdecl freopen_s(
          FILE**      _Stream,
                             char const* _FileName,
                             char const* _Mode,
                            FILE*       _OldStream
        );

     
    __declspec(dllimport) char* __cdecl gets_s(
          char*   _Buffer,
                           rsize_t _Size
        );

    
    __declspec(dllimport) errno_t __cdecl tmpfile_s(
            FILE** _Stream
        );

     
    
    __declspec(dllimport) errno_t __cdecl tmpnam_s(
          char*   _Buffer,
                           rsize_t _Size
        );



__declspec(dllimport) void __cdecl clearerr(
      FILE* _Stream
    );

 

__declspec(dllimport) int __cdecl fclose(
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl _fcloseall(void);

 
__declspec(dllimport) FILE* __cdecl _fdopen(
        int         _FileHandle,
      char const* _Mode
    );

 
__declspec(dllimport) int __cdecl feof(
      FILE* _Stream
    );

 
__declspec(dllimport) int __cdecl ferror(
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl fflush(
      FILE* _Stream
    );

 

__declspec(dllimport) int __cdecl fgetc(
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl _fgetchar(void);

 

__declspec(dllimport) int __cdecl fgetpos(
      FILE*   _Stream,
        fpos_t* _Position
    );

 

__declspec(dllimport) char* __cdecl fgets(
      char* _Buffer,
                           int   _MaxCount,
                        FILE* _Stream
    );

 
__declspec(dllimport) int __cdecl _fileno(
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl _flushall(void);

  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) FILE* __cdecl fopen(
      char const* _FileName,
      char const* _Mode
    );


 

__declspec(dllimport) int __cdecl fputc(
         int   _Character,
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl _fputchar(
      int _Character
    );

 

__declspec(dllimport) int __cdecl fputs(
       char const* _Buffer,
      FILE*       _Stream
    );


__declspec(dllimport) size_t __cdecl fread(
      void*  _Buffer,
                                                  size_t _ElementSize,
                                                  size_t _ElementCount,
                                               FILE*  _Stream
    );

 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "freopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) FILE* __cdecl freopen(
       char const* _FileName,
       char const* _Mode,
      FILE*       _Stream
    );

 
__declspec(dllimport) FILE* __cdecl _fsopen(
      char const* _FileName,
      char const* _Mode,
        int         _ShFlag
    );

 

__declspec(dllimport) int __cdecl fsetpos(
      FILE*         _Stream,
         fpos_t const* _Position
    );

 

__declspec(dllimport) int __cdecl fseek(
      FILE* _Stream,
         long  _Offset,
         int   _Origin
    );

 

__declspec(dllimport) int __cdecl _fseeki64(
      FILE*   _Stream,
         __int64 _Offset,
         int     _Origin
    );

 
 
__declspec(dllimport) long __cdecl ftell(
      FILE* _Stream
    );

 
 
__declspec(dllimport) __int64 __cdecl _ftelli64(
      FILE* _Stream
    );


__declspec(dllimport) size_t __cdecl fwrite(
      void const* _Buffer,
                                                size_t      _ElementSize,
                                                size_t      _ElementCount,
                                             FILE*       _Stream
    );

 
 
__declspec(dllimport) int __cdecl getc(
      FILE* _Stream
    );

 
__declspec(dllimport) int __cdecl getchar(void);

 
__declspec(dllimport) int __cdecl _getmaxstdio(void);

extern "C++" { template <size_t _Size> inline char* __cdecl gets_s(char (&_Buffer)[_Size]) throw() { return gets_s(_Buffer, _Size); } }

 
__declspec(dllimport) int __cdecl _getw(
      FILE* _Stream
    );

__declspec(dllimport) void __cdecl perror(
      char const* _ErrorMessage
    );



     
    
    __declspec(dllimport) int __cdecl _pclose(
          FILE* _Stream
        );

     
    __declspec(dllimport) FILE* __cdecl _popen(
          char const* _Command,
          char const* _Mode
        );



 

__declspec(dllimport) int __cdecl putc(
         int   _Character,
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl putchar(
      int _Character
    );


__declspec(dllimport) int __cdecl puts(
      char const* _Buffer
    );

 

__declspec(dllimport) int __cdecl _putw(
         int   _Word, 
      FILE* _Stream
    );



__declspec(dllimport) int __cdecl remove(
      char const* _FileName
    );

 
__declspec(dllimport) int __cdecl rename(
      char const* _OldFileName,
      char const* _NewFileName
    );

__declspec(dllimport) int __cdecl _unlink(
      char const* _FileName
    );



    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_unlink" ". See online help for details."))
    __declspec(dllimport) int __cdecl unlink(
          char const* _FileName
        );





__declspec(dllimport) void __cdecl rewind(
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl _rmtmp(void);

__declspec(deprecated("This function or variable may be unsafe. Consider using " "setvbuf" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) void __cdecl setbuf(
                                                  FILE* _Stream,
        char* _Buffer
    );


__declspec(dllimport) int __cdecl _setmaxstdio(
      int _Maximum
    );

 

__declspec(dllimport) int __cdecl setvbuf(
                           FILE*  _Stream,
        char*  _Buffer,
                              int    _Mode,
                              size_t _Size
    );






 
__declspec(dllimport) __declspec(allocator) char* __cdecl _tempnam(
      char const* _DirectoryName,
      char const* _FilePrefix
    );





  __declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpfile_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) FILE* __cdecl tmpfile(void);

extern "C++" { template <size_t _Size> inline errno_t __cdecl tmpnam_s(  char (&_Buffer)[_Size]) throw() { return tmpnam_s(_Buffer, _Size); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport)  char* __cdecl tmpnam(  char *_Buffer);

 

__declspec(dllimport) int __cdecl ungetc(
         int   _Character,
      FILE* _Stream
    );








__declspec(dllimport) void __cdecl _lock_file(
      FILE* _Stream
    );

__declspec(dllimport) void __cdecl _unlock_file(
      FILE* _Stream
    );

 

__declspec(dllimport) int __cdecl _fclose_nolock(
      FILE* _Stream
    );

 

__declspec(dllimport) int __cdecl _fflush_nolock(
      FILE* _Stream
    );

 

__declspec(dllimport) int __cdecl _fgetc_nolock(
      FILE* _Stream
    );

 

__declspec(dllimport) int __cdecl _fputc_nolock(
         int   _Character,
      FILE* _Stream
    );


__declspec(dllimport) size_t __cdecl _fread_nolock(
      void*  _Buffer,
                                                  size_t _ElementSize,
                                                  size_t _ElementCount,
                                               FILE*  _Stream
    );


 
__declspec(dllimport) size_t __cdecl _fread_nolock_s(
      void*  _Buffer,
               size_t _BufferSize,
                                                                  size_t _ElementSize,
                                                                  size_t _ElementCount,
                                                               FILE*  _Stream
    );


__declspec(dllimport) int __cdecl _fseek_nolock(
      FILE* _Stream,
         long  _Offset,
         int   _Origin
    );


__declspec(dllimport) int __cdecl _fseeki64_nolock(
      FILE*   _Stream,
         __int64 _Offset,
         int     _Origin
    );

 
__declspec(dllimport) long __cdecl _ftell_nolock(
      FILE* _Stream
    );

 
__declspec(dllimport) __int64 __cdecl _ftelli64_nolock(
      FILE* _Stream
    );


__declspec(dllimport) size_t __cdecl _fwrite_nolock(
      void const* _Buffer,
                                                size_t      _ElementSize,
                                                size_t      _ElementCount,
                                             FILE*       _Stream
    );


__declspec(dllimport) int __cdecl _getc_nolock(
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl _putc_nolock(
         int   _Character,
      FILE* _Stream
    );


__declspec(dllimport) int __cdecl _ungetc_nolock(
         int   _Character,
      FILE* _Stream
    );


























__declspec(dllimport) int* __cdecl __p__commode(void);




    














__declspec(dllimport) int __cdecl __stdio_common_vfprintf(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

__declspec(dllimport) int __cdecl __stdio_common_vfprintf_s(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_p(
                                         unsigned __int64 _Options,
                                      FILE*            _Stream,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );


__inline int __cdecl _vfprintf_l(
       FILE*       const _Stream,
        char const* const _Format,
      _locale_t   const _Locale,
             va_list           _ArgList
    )



{
    return __stdio_common_vfprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}



__inline int __cdecl vfprintf(
                            FILE*       const _Stream,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vfprintf_l(_Stream, _Format, 0, _ArgList);
}



__inline int __cdecl _vfprintf_s_l(
       FILE*       const _Stream,
        char const* const _Format,
      _locale_t   const _Locale,
             va_list           _ArgList
    )



{
    return __stdio_common_vfprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}




    
    __inline int __cdecl vfprintf_s(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )



    {
        return _vfprintf_s_l(_Stream, _Format, 0, _ArgList);
    }





__inline int __cdecl _vfprintf_p_l(
       FILE*       const _Stream,
        char const* const _Format,
      _locale_t   const _Locale,
             va_list           _ArgList
    )



{
    return __stdio_common_vfprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
}



__inline int __cdecl _vfprintf_p(
                            FILE*       const _Stream,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vfprintf_p_l(_Stream, _Format, 0, _ArgList);
}



__inline int __cdecl _vprintf_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    return _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}



__inline int __cdecl vprintf(
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vfprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
}



__inline int __cdecl _vprintf_s_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    return _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}




    
    __inline int __cdecl vprintf_s(
            char const* const _Format,
                                      va_list           _ArgList
        )



    {
        return _vfprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
    }





__inline int __cdecl _vprintf_p_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    return _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
}



__inline int __cdecl _vprintf_p(
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vfprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
}



__inline int __cdecl _fprintf_l(
                                      FILE*       const _Stream,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl fprintf(
                            FILE*       const _Stream,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_l(_Stream, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


__declspec(dllimport) int __cdecl _set_printf_count_output(
      int _Value
    );

__declspec(dllimport) int __cdecl _get_printf_count_output(void);


__inline int __cdecl _fprintf_s_l(
                                      FILE*       const _Stream,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl fprintf_s(
                                FILE*       const _Stream,
            char const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }





__inline int __cdecl _fprintf_p_l(
                                      FILE*       const _Stream,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _fprintf_p(
                            FILE*       const _Stream,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _printf_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl printf(
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _printf_s_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl printf_s(
            char const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }





__inline int __cdecl _printf_p_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _printf_p(
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}








__declspec(dllimport) int __cdecl __stdio_common_vfscanf(
                                        unsigned __int64 _Options,
                                     FILE*            _Stream,
        char const*      _Format,
                                    _locale_t        _Locale,
                                           va_list          _Arglist
    );


__inline int __cdecl _vfscanf_l(
                            FILE*       const _Stream,
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )



{
    return __stdio_common_vfscanf(
        (*__local_stdio_scanf_options ()),
        _Stream, _Format, _Locale, _ArgList);
}



__inline int __cdecl vfscanf(
                            FILE*       const _Stream,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vfscanf_l(_Stream, _Format, 0, _ArgList);
}



__inline int __cdecl _vfscanf_s_l(
                            FILE*       const _Stream,
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )



{
    return __stdio_common_vfscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Stream, _Format, _Locale, _ArgList);
}





    
    __inline int __cdecl vfscanf_s(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )



    {
        return _vfscanf_s_l(_Stream, _Format, 0, _ArgList);
    }





__inline int __cdecl _vscanf_l(
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )



{
    return _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
}



__inline int __cdecl vscanf(
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vfscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
}



__inline int __cdecl _vscanf_s_l(
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )



{
    return _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
}




    
    __inline int __cdecl vscanf_s(
            char const* const _Format,
                                      va_list           _ArgList
        )



    {
        return _vfscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
    }




 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _fscanf_l(
                                     FILE*       const _Stream,
        char const* const _Format,
                                    _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl fscanf(
                           FILE*       const _Stream,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfscanf_l(_Stream, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _fscanf_s_l(
                                       FILE*       const _Stream,
        char const* const _Format,
                                      _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl fscanf_s(
                                 FILE*       const _Stream,
            char const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }




 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_scanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _scanf_l(
        char const* const _Format,
                                    _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


  __declspec(deprecated("This function or variable may be unsafe. Consider using " "scanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl scanf(
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _scanf_s_l(
        char const* const _Format,
                                      _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl scanf_s(
            char const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }











 
__declspec(dllimport) int __cdecl __stdio_common_vsprintf(
                                         unsigned __int64 _Options,
                 char*            _Buffer,
                                         size_t           _BufferCount,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_s(
                                         unsigned __int64 _Options,
                 char*            _Buffer,
                                         size_t           _BufferCount,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 
__declspec(dllimport) int __cdecl __stdio_common_vsnprintf_s(
                                         unsigned __int64 _Options,
                 char*            _Buffer,
                                         size_t           _BufferCount,
                                         size_t           _MaxCount,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_p(
                                         unsigned __int64 _Options,
                 char*            _Buffer,
                                         size_t           _BufferCount,
        char const*      _Format,
                                     _locale_t        _Locale,
                                            va_list          _ArgList
    );

 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _vsnprintf_l(
                   char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    int const _Result = __stdio_common_vsprintf(
        (*__local_stdio_printf_options()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 

__inline int __cdecl _vsnprintf(
        char*       const _Buffer,
                                          size_t      const _BufferCount,
                   char const* const _Format,
                                             va_list           _ArgList
    )



{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    #pragma warning(pop)
}













 

__inline int __cdecl vsnprintf(
         char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    int const _Result = __stdio_common_vsprintf(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        _Buffer, _BufferCount, _Format, 0, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _vsprintf_l(
        char*       const _Buffer,
                      char const* const _Format,
                    _locale_t   const _Locale,
                           va_list           _ArgList
    )



{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vsnprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    #pragma warning(pop)
}


 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl vsprintf(
               char*       const _Buffer,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    #pragma warning(push)
    #pragma warning(disable: 4996) 
    return _vsnprintf_l(_Buffer, (size_t)-1, _Format, 0, _ArgList);
    #pragma warning(pop)
}


 

__inline int __cdecl _vsprintf_s_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    int const _Result = __stdio_common_vsprintf_s(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}




     
    
    __inline int __cdecl vsprintf_s(
           char*       const _Buffer,
                                   size_t      const _BufferCount,
            char const* const _Format,
                                      va_list           _ArgList
        )



    {
        return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    }

    
    extern "C++" { template <size_t _Size> inline   int __cdecl vsprintf_s(  char (&_Buffer)[_Size],     char const* _Format, va_list _ArgList) throw() { return vsprintf_s(_Buffer, _Size, _Format, _ArgList); } }



 

__inline int __cdecl _vsprintf_p_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    int const _Result = __stdio_common_vsprintf_p(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 

__inline int __cdecl _vsprintf_p(
       char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
}


 

__inline int __cdecl _vsnprintf_s_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
                                         size_t      const _MaxCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list          _ArgList
    )



{
    int const _Result = __stdio_common_vsnprintf_s(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 

__inline int __cdecl _vsnprintf_s(
       char*       const _Buffer,
                               size_t      const _BufferCount,
                               size_t      const _MaxCount,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
}


extern "C++" { template <size_t _Size> inline   int __cdecl _vsnprintf_s(  char (&_Buffer)[_Size],   size_t _BufferCount,     char const* _Format, va_list _ArgList) throw() { return _vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }



     
    
    __inline int __cdecl vsnprintf_s(
           char*       const _Buffer,
                                   size_t      const _BufferCount,
                                   size_t      const _MaxCount,
            char const* const _Format,
                                      va_list           _ArgList
        )



    {
        return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
    }

    
    extern "C++" { template <size_t _Size> inline   int __cdecl vsnprintf_s(  char (&_Buffer)[_Size],   size_t _BufferCount,     char const* _Format, va_list _ArgList) throw() { return vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }




__inline int __cdecl _vscprintf_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    int const _Result = __stdio_common_vsprintf(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        0, 0, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 
__inline int __cdecl _vscprintf(
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vscprintf_l(_Format, 0, _ArgList);
}



__inline int __cdecl _vscprintf_p_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    int const _Result = __stdio_common_vsprintf_p(
        (*__local_stdio_printf_options()) | (1ULL << 1),
        0, 0, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 
__inline int __cdecl _vscprintf_p(
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vscprintf_p_l(_Format, 0, _ArgList);
}



__inline int __cdecl _vsnprintf_c_l(
                   char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
                                            va_list           _ArgList
    )



{
    int const _Result = __stdio_common_vsprintf(
        (*__local_stdio_printf_options()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    return _Result < 0 ? -1 : _Result;
}


 

__inline int __cdecl _vsnprintf_c(
         char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
}


 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_sprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _sprintf_l(
                         char*       const _Buffer,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList);
    #pragma warning(pop)

    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl sprintf(
               char*       const _Buffer,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList);
    #pragma warning(pop)

    ((void)(_ArgList = (va_list)0));
    return _Result;
}


#pragma warning(push)
#pragma warning(disable: 4996)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "sprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))   int __cdecl sprintf(  char *_Buffer,  char const* _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))   int __cdecl vsprintf(  char *_Buffer,  char const* _Format, va_list _Args);
#pragma warning(pop)

 

__inline int __cdecl _sprintf_s_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




     
    
    __inline int __cdecl sprintf_s(
           char*       const _Buffer,
                                   size_t      const _BufferCount,
            char const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }




extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl sprintf_s(  char (&_Buffer)[_Size],     char const* _Format, ...) throw() { va_list _ArgList; ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1)))))); return vsprintf_s(_Buffer, _Size, _Format, _ArgList); } __pragma(warning(pop)); }

 

__inline int __cdecl _sprintf_p_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _sprintf_p(
       char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _snprintf_l(
                   char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    #pragma warning(push)
    #pragma warning(disable: 4996) 
    _Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    #pragma warning(pop)

    ((void)(_ArgList = (va_list)0));
    return _Result;
}













 
 
__inline int __cdecl snprintf(
       char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
#pragma warning(suppress:28719)    
    _Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
__inline int __cdecl _snprintf(
        char*       const _Buffer,
                                          size_t      const _BufferCount,
                   char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
#pragma warning(suppress:28719)    
    _Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))    int __cdecl _snprintf(    char *_Buffer,   size_t _BufferCount,     char const* _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))    int __cdecl _vsnprintf(    char *_Buffer,   size_t _BufferCount,     char const* _Format, va_list _Args);

 

__inline int __cdecl _snprintf_c_l(
                   char*       const _Buffer,
                                         size_t      const _BufferCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _snprintf_c(
         char*       const _Buffer,
                               size_t      const _BufferCount,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _snprintf_s_l(
                 char*       const _Buffer,
                                         size_t      const _BufferCount,
                                         size_t      const _MaxCount,
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 

__inline int __cdecl _snprintf_s(
       char*       const _Buffer,
                               size_t      const _BufferCount,
                               size_t      const _MaxCount,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline   int __cdecl _snprintf_s(  char (&_Buffer)[_Size],   size_t _BufferCount,     char const* _Format, ...) throw() { va_list _ArgList; ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1)))))); return _vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } __pragma(warning(pop)); }


__inline int __cdecl _scprintf_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vscprintf_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
__inline int __cdecl _scprintf(
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vscprintf_l(_Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _scprintf_p_l(
        char const* const _Format,
                                     _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vscprintf_p_l(_Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 
__inline int __cdecl _scprintf_p(
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vscprintf_p(_Format, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}







__declspec(dllimport) int __cdecl __stdio_common_vsscanf(
                                        unsigned __int64 _Options,
              char const*      _Buffer,
                                        size_t           _BufferCount,
        char const*      _Format,
                                    _locale_t        _Locale,
                                           va_list          _ArgList
    );


__inline int __cdecl _vsscanf_l(
                             char const* const _Buffer,
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )



{
    return __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}



__inline int __cdecl vsscanf(
                             char const* const _Buffer,
        char const* const _Format,
                                  va_list           _ArgList
    )



{
    return _vsscanf_l(_Buffer, _Format, 0, _ArgList);
}



__inline int __cdecl _vsscanf_s_l(
                             char const* const _Buffer,
        char const* const _Format,
                           _locale_t   const _Locale,
                                  va_list           _ArgList
    )



{
    return __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
}




    #pragma warning(push)
    #pragma warning(disable:6530)

    
    __inline int __cdecl vsscanf_s(
                                 char const* const _Buffer,
            char const* const _Format,
                                      va_list           _ArgList
        )



    {
        return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList);
    }


    extern "C++" { template <size_t _Size> inline int __cdecl vsscanf_s(  char const (&_Buffer)[_Size],     char const* _Format, va_list _ArgList) throw() { return vsscanf_s(_Buffer, _Size, _Format, _ArgList); } }
   
    #pragma warning(pop)



 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_sscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _sscanf_l(
                                      char const* const _Buffer,
        char const* const _Format,
                                    _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}


  __declspec(deprecated("This function or variable may be unsafe. Consider using " "sscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl sscanf(
                            char const* const _Buffer,
        char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _sscanf_s_l(
                                        char const* const _Buffer,
        char const* const _Format,
                                      _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
    _Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
    ((void)(_ArgList = (va_list)0));
    return _Result;
}




    
    __inline int __cdecl sscanf_s(
                                  char const* const _Buffer,
            char const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

        #pragma warning(push)
        #pragma warning(disable: 4996) 
        _Result = vsscanf_s(_Buffer, _Format, _ArgList);
        #pragma warning(pop)

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }




#pragma warning(push)
#pragma warning(disable:6530)

 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _snscanf_l(
        char const* const _Buffer,
                                        size_t      const _BufferCount,
        char const* const _Format,
                                    _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    _Result = __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    ((void)(_ArgList = (va_list)0));
    return _Result;
}


 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__inline int __cdecl _snscanf(
        char const* const _Buffer,
                                        size_t      const _BufferCount,
                  char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    _Result = __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()),
        _Buffer, _BufferCount, _Format, 0, _ArgList);

    ((void)(_ArgList = (va_list)0));
    return _Result;
}




__inline int __cdecl _snscanf_s_l(
          char const* const _Buffer,
                                          size_t      const _BufferCount,
        char const* const _Format,
                                      _locale_t   const _Locale,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    _Result = __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, _Locale, _ArgList);

    ((void)(_ArgList = (va_list)0));
    return _Result;
}



__inline int __cdecl _snscanf_s(
        char const* const _Buffer,
                                        size_t      const _BufferCount,
                char const* const _Format,
    ...)



{
    int _Result;
    va_list _ArgList;
    ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

    _Result = __stdio_common_vsscanf(
        (*__local_stdio_scanf_options ()) | (1ULL << 0),
        _Buffer, _BufferCount, _Format, 0, _ArgList);

    ((void)(_ArgList = (va_list)0));
    return _Result;
}


#pragma warning(pop)














    

    




    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_tempnam" ". See online help for details."))
    __declspec(dllimport) char* __cdecl tempnam(
          char const* _Directory,
          char const* _FilePrefix
        );

    



     __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fcloseall" ". See online help for details.")) __declspec(dllimport) int   __cdecl fcloseall(void);
          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fdopen" ". See online help for details."))    __declspec(dllimport) FILE* __cdecl fdopen(  int _FileHandle,   char const* _Format);
     __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fgetchar" ". See online help for details."))  __declspec(dllimport) int   __cdecl fgetchar(void);
          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fileno" ". See online help for details."))    __declspec(dllimport) int   __cdecl fileno(  FILE* _Stream);
     __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_flushall" ". See online help for details."))  __declspec(dllimport) int   __cdecl flushall(void);
     __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fputchar" ". See online help for details."))  __declspec(dllimport) int   __cdecl fputchar(  int _Ch);
          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_getw" ". See online help for details."))      __declspec(dllimport) int   __cdecl getw(  FILE* _Stream);
     __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_putw" ". See online help for details."))      __declspec(dllimport) int   __cdecl putw(  int _Ch,   FILE* _Stream);
          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_rmtmp" ". See online help for details."))     __declspec(dllimport) int   __cdecl rmtmp(void);





} __pragma(pack(pop))




 
 
 
 
 
 
 




typedef FILE FILE;

 
namespace std {
using :: FILE; using :: _Mbstatet;

using :: size_t; using :: fpos_t; using :: FILE;
using :: clearerr; using :: fclose; using :: feof;
using :: ferror; using :: fflush; using :: fgetc;
using :: fgetpos; using :: fgets; using :: fopen;
using :: fprintf; using :: fputc; using :: fputs;
using :: fread; using :: freopen; using :: fscanf;
using :: fseek; using :: fsetpos; using :: ftell;
using :: fwrite; using :: getc; using :: getchar;
using :: perror;
using :: putc; using :: putchar;
using :: printf; using :: puts; using :: remove;
using :: rename; using :: rewind; using :: scanf;
using :: setbuf; using :: setvbuf; using :: sprintf;
using :: sscanf; using :: tmpfile; using :: tmpnam;
using :: ungetc; using :: vfprintf; using :: vprintf;
using :: vsprintf;

using :: snprintf; using :: vsnprintf;
using :: vfscanf; using :: vscanf; using :: vsscanf;
}
 











#pragma once





#pragma once





#pragma once






#pragma once











#pragma once














#pragma once










#pragma once










#pragma once




__pragma(pack(push, 8)) extern "C" {



__declspec(dllimport) extern int* __cdecl _errno(void);


__declspec(dllimport) errno_t __cdecl _set_errno(  int _Value);
__declspec(dllimport) errno_t __cdecl _get_errno(  int* _Value);



__declspec(dllimport) unsigned long* __cdecl __doserrno(void);


__declspec(dllimport) errno_t __cdecl _set_doserrno(  unsigned long _Value);
__declspec(dllimport) errno_t __cdecl _get_doserrno(  unsigned long * _Value);










































    
    
    
    
    







    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    




} __pragma(pack(pop))









#pragma once





































































































































































































































































































































__pragma(pack(push, 8)) extern "C" {



 
__declspec(dllimport) void const* __cdecl memchr(
      void const* _Buf,
                                 int         _Val,
                                 size_t      _MaxCount
    );

 
int __cdecl memcmp(
      void const* _Buf1,
      void const* _Buf2,
                         size_t      _Size
    );


 

void* __cdecl memcpy(
      void* _Dst,
            void const* _Src,
                               size_t      _Size
    );


__declspec(dllimport) void* __cdecl memmove(
      void*       _Dst,
            void const* _Src,
                                   size_t      _Size
    );

 

void* __cdecl memset(
      void*  _Dst,
                               int    _Val,
                               size_t _Size
    );

 
__declspec(dllimport) char const* __cdecl strchr(
      char const* _Str,
        int         _Val
    );

 
__declspec(dllimport) char const* __cdecl strrchr(
      char const* _Str,
        int         _Ch
    );

   
__declspec(dllimport) char const* __cdecl strstr(
      char const* _Str,
      char const* _SubStr
    );

 

__declspec(dllimport) wchar_t const* __cdecl wcschr(
      wchar_t const* _Str,
        wchar_t        _Ch
    );

 
__declspec(dllimport) wchar_t const* __cdecl wcsrchr(
      wchar_t const* _Str,
        wchar_t        _Ch
    );

   

__declspec(dllimport) wchar_t const* __cdecl wcsstr(
      wchar_t const* _Str,
      wchar_t const* _SubStr
    );



} __pragma(pack(pop))




__pragma(pack(push, 8)) extern "C" {


    















     
    
    static __inline errno_t __cdecl memcpy_s(
          void*       const _Destination,
                                                              rsize_t     const _DestinationSize,
                                 void const* const _Source,
                                                              rsize_t     const _SourceSize
        )
    {
        if (_SourceSize == 0)
        {
            return 0;
        }

        { int _Expr_val=!!(_Destination != 0); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        if (_Source == 0 || _DestinationSize < _SourceSize)
        {
            memset(_Destination, 0, _DestinationSize);

            { int _Expr_val=!!(_Source != 0); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
            { int _Expr_val=!!(_DestinationSize >= _SourceSize); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; } };

            
            return 22;
        }

        memcpy(_Destination, _Source, _SourceSize);
        return 0;
    }

    
    static __inline errno_t __cdecl memmove_s(
          void*       const _Destination,
                                                              rsize_t     const _DestinationSize,
                                 void const* const _Source,
                                                              rsize_t     const _SourceSize
        )
    {
        if (_SourceSize == 0)
        {
            return 0;
        }

        { int _Expr_val=!!(_Destination != 0); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        { int _Expr_val=!!(_Source != 0); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        { int _Expr_val=!!(_DestinationSize >= _SourceSize); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; } };

        memmove(_Destination, _Source, _SourceSize);
        return 0;
    }





} __pragma(pack(pop))





__pragma(pack(push, 8)) extern "C" {



 
__declspec(dllimport) int __cdecl _memicmp(
      void const* _Buf1,
      void const* _Buf2,
                             size_t      _Size
    );

 
__declspec(dllimport) int __cdecl _memicmp_l(
      void const* _Buf1,
      void const* _Buf2,
                             size_t      _Size,
                         _locale_t   _Locale
    );





    














    



















    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_memccpy" ". See online help for details."))
    __declspec(dllimport) void* __cdecl memccpy(
          void*       _Dst,
            void const* _Src,
                                   int         _Val,
                                   size_t      _Size
        );

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_memicmp" ". See online help for details."))
    __declspec(dllimport) int __cdecl memicmp(
          void const* _Buf1,
          void const* _Buf2,
                                 size_t      _Size
        );





    extern "C++"  
    inline void* __cdecl memchr(
          void*  _Pv,
                              int    _C,
                              size_t _N
        )
    {
        void const* const _Pvc = _Pv;
        return const_cast<void*>(memchr(_Pvc, _C, _N));
    }




} __pragma(pack(pop))












#pragma once






__pragma(pack(push, 8)) extern "C" {










    
    __declspec(dllimport) errno_t __cdecl wcscat_s(
          wchar_t* _Destination,
          rsize_t _SizeInWords,
          wchar_t const* _Source
        );

    
    __declspec(dllimport) errno_t __cdecl wcscpy_s(
          wchar_t* _Destination,
          rsize_t _SizeInWords,
          wchar_t const* _Source
        );
    
    
    __declspec(dllimport) errno_t __cdecl wcsncat_s(
          wchar_t*       _Destination,
                                     rsize_t        _SizeInWords,
               wchar_t const* _Source,
                                     rsize_t        _MaxCount
        );
    
    
    __declspec(dllimport) errno_t __cdecl wcsncpy_s(
          wchar_t*       _Destination,
                                  rsize_t        _SizeInWords,
            wchar_t const* _Source,
                                  rsize_t        _MaxCount
        );
    
     
    __declspec(dllimport) wchar_t* __cdecl wcstok_s(
                          wchar_t*       _String,
                                 wchar_t const* _Delimiter,
            wchar_t**      _Context
        );















 
__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wcsdup(
      wchar_t const* _String
    );







extern "C++" { template <size_t _Size> inline errno_t __cdecl wcscat_s(wchar_t (&_Destination)[_Size],   wchar_t const* _Source) throw() { return wcscat_s(_Destination, _Size, _Source); } }



    __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl wcscat( wchar_t *_Destination,  wchar_t const* _Source);



 
__declspec(dllimport) int __cdecl wcscmp(
      wchar_t const* _String1,
      wchar_t const* _String2
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl wcscpy_s(wchar_t (&_Destination)[_Size],   wchar_t const* _Source) throw() { return wcscpy_s(_Destination, _Size, _Source); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl wcscpy( wchar_t *_Destination,  wchar_t const* _Source);

 
__declspec(dllimport) size_t __cdecl wcscspn(
      wchar_t const* _String,
      wchar_t const* _Control
    );

 
__declspec(dllimport) size_t __cdecl wcslen(
      wchar_t const* _String
    );

 


__declspec(dllimport) size_t __cdecl wcsnlen(
      wchar_t const* _Source,
                            size_t         _MaxCount
    );



     
    
    
    static __inline size_t __cdecl wcsnlen_s(
          wchar_t const* _Source,
                                size_t         _MaxCount
        )
    {
        return (_Source == 0) ? 0 : wcsnlen(_Source, _MaxCount);
    }



extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsncat_s(  wchar_t (&_Destination)[_Size],   wchar_t const* _Source,   size_t _Count) throw() { return wcsncat_s(_Destination, _Size, _Source, _Count); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl wcsncat(  wchar_t *_Destination,   wchar_t const* _Source,   size_t _Count);

 
__declspec(dllimport) int __cdecl wcsncmp(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsncpy_s(wchar_t (&_Destination)[_Size],   wchar_t const* _Source,   size_t _Count) throw() { return wcsncpy_s(_Destination, _Size, _Source, _Count); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl wcsncpy(    wchar_t *_Destination,   wchar_t const* _Source,   size_t _Count);

 
__declspec(dllimport) wchar_t const* __cdecl wcspbrk(
      wchar_t const* _String,
      wchar_t const* _Control
    );

 
__declspec(dllimport) size_t __cdecl wcsspn(
      wchar_t const* _String,
      wchar_t const* _Control
    );

  __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) wchar_t* __cdecl wcstok(
                          wchar_t*       _String,
                                 wchar_t const* _Delimiter,
        wchar_t**      _Context
    );



    


        



    

    #pragma warning(push)
    #pragma warning(disable: 4141 4996) 

      __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    static __inline wchar_t* __cdecl _wcstok(
          wchar_t*       const _String,
                 wchar_t const* const _Delimiter
        )
    {
        return wcstok(_String, _Delimiter, 0);
    }

    



    
        extern "C++"   __declspec(deprecated("wcstok has been changed to conform with the ISO C standard, " "adding an extra context parameter. To use the legacy Microsoft " "wcstok, define _CRT_NON_CONFORMING_WCSTOK.")) 
        inline wchar_t* __cdecl wcstok(
              wchar_t*       _String,
                     wchar_t const* _Delimiter
            ) throw()
        {
            return wcstok(_String, _Delimiter, 0);
        }
    

    #pragma warning(pop)





 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) wchar_t* __cdecl _wcserror(
      int _ErrorNumber
    );


__declspec(dllimport) errno_t __cdecl _wcserror_s(
      wchar_t* _Buffer,
                                  size_t   _SizeInWords,
                                  int      _ErrorNumber
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcserror_s(wchar_t (&_Buffer)[_Size],   int _Error) throw() { return _wcserror_s(_Buffer, _Size, _Error); } }

 
 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "__wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) wchar_t* __cdecl __wcserror(
      wchar_t const* _String
    );

 __declspec(dllimport) errno_t __cdecl __wcserror_s(
      wchar_t*       _Buffer,
                                  size_t         _SizeInWords,
                                wchar_t const* _ErrorMessage
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl __wcserror_s(wchar_t (&_Buffer)[_Size],   wchar_t const* _ErrorMessage) throw() { return __wcserror_s(_Buffer, _Size, _ErrorMessage); } }

  __declspec(dllimport) int __cdecl _wcsicmp(
      wchar_t const* _String1,
      wchar_t const* _String2
    );

  __declspec(dllimport) int __cdecl _wcsicmp_l(
        wchar_t const* _String1,
        wchar_t const* _String2,
      _locale_t      _Locale
    );

  __declspec(dllimport) int __cdecl _wcsnicmp(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount
    );

  __declspec(dllimport) int __cdecl _wcsnicmp_l(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount,
                        _locale_t      _Locale
    );

 __declspec(dllimport) errno_t __cdecl _wcsnset_s(
      wchar_t* _Destination,
                                 size_t   _SizeInWords,
                                 wchar_t  _Value,
                                 size_t   _MaxCount
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsnset_s(  wchar_t (&_Destination)[_Size],   wchar_t _Value,   size_t _MaxCount) throw() { return _wcsnset_s(_Destination, _Size, _Value, _MaxCount); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcsnset(  wchar_t *_String,   wchar_t _Value,   size_t _MaxCount);

__declspec(dllimport) wchar_t* __cdecl _wcsrev(
      wchar_t* _String
    );

 __declspec(dllimport) errno_t __cdecl _wcsset_s(
      wchar_t* _Destination,
                                 size_t   _SizeInWords,
                                 wchar_t  _Value
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsset_s(  wchar_t (&_String)[_Size],   wchar_t _Value) throw() { return _wcsset_s(_String, _Size, _Value); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcsset(  wchar_t *_String,   wchar_t _Value);

 __declspec(dllimport) errno_t __cdecl _wcslwr_s(
      wchar_t* _String,
                                 size_t   _SizeInWords
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcslwr_s(  wchar_t (&_String)[_Size]) throw() { return _wcslwr_s(_String, _Size); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcslwr( wchar_t *_String);


__declspec(dllimport) errno_t __cdecl _wcslwr_s_l(
      wchar_t*  _String,
                                 size_t    _SizeInWords,
                             _locale_t _Locale
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcslwr_s_l(  wchar_t (&_String)[_Size],   _locale_t _Locale) throw() { return _wcslwr_s_l(_String, _Size, _Locale); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcslwr_l(  wchar_t *_String,   _locale_t _Locale);


__declspec(dllimport) errno_t __cdecl _wcsupr_s(
      wchar_t* _String,
                          size_t   _Size
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsupr_s(  wchar_t (&_String)[_Size]) throw() { return _wcsupr_s(_String, _Size); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcsupr( wchar_t *_String);


__declspec(dllimport) errno_t __cdecl _wcsupr_s_l(
      wchar_t*  _String,
                          size_t    _Size,
                      _locale_t _Locale
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsupr_s_l(  wchar_t (&_String)[_Size],   _locale_t _Locale) throw() { return _wcsupr_s_l(_String, _Size, _Locale); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcsupr_l(  wchar_t *_String,   _locale_t _Locale);

 

__declspec(dllimport) size_t __cdecl wcsxfrm(
        wchar_t*       _Destination,
                                         wchar_t const* _Source,
                size_t         _MaxCount
    );

 

__declspec(dllimport) size_t __cdecl _wcsxfrm_l(
        wchar_t*       _Destination,
                                         wchar_t const* _Source,
                size_t         _MaxCount,
                                       _locale_t      _Locale
    );

 
__declspec(dllimport) int __cdecl wcscoll(
      wchar_t const* _String1,
      wchar_t const* _String2
    );

 
__declspec(dllimport) int __cdecl _wcscoll_l(
        wchar_t const* _String1,
        wchar_t const* _String2,
      _locale_t      _Locale
    );

 
__declspec(dllimport) int __cdecl _wcsicoll(
      wchar_t const* _String1,
      wchar_t const* _String2
    );

 
__declspec(dllimport) int __cdecl _wcsicoll_l(
        wchar_t const* _String1,
        wchar_t const* _String2,
      _locale_t      _Locale
    );

 
__declspec(dllimport) int __cdecl _wcsncoll(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount
    );

 
__declspec(dllimport) int __cdecl _wcsncoll_l(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount,
                        _locale_t      _Locale
    );

 
__declspec(dllimport) int __cdecl _wcsnicoll(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount
    );

 
__declspec(dllimport) int __cdecl _wcsnicoll_l(
      wchar_t const* _String1,
      wchar_t const* _String2,
                            size_t         _MaxCount,
                        _locale_t      _Locale
    );









extern "C++" {

     
    
    inline wchar_t* __cdecl wcschr(  wchar_t* _String, wchar_t _C)
    {
        return const_cast<wchar_t*>(wcschr(static_cast<wchar_t const*>(_String), _C));
    }

     
    inline wchar_t* __cdecl wcspbrk(  wchar_t* _String,   wchar_t const* _Control)
    {
        return const_cast<wchar_t*>(wcspbrk(static_cast<wchar_t const*>(_String), _Control));
    }

     
    inline wchar_t* __cdecl wcsrchr(  wchar_t* _String,   wchar_t _C)
    {
        return const_cast<wchar_t*>(wcsrchr(static_cast<wchar_t const*>(_String), _C));
    }

       
    
    inline wchar_t* __cdecl wcsstr(  wchar_t* _String,   wchar_t const*_SubStr)
    {
        return const_cast<wchar_t*>(wcsstr(static_cast<wchar_t const*>(_String), _SubStr));
    }

}










    




      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsdup" ". See online help for details."))
    __declspec(dllimport) wchar_t* __cdecl wcsdup(
          wchar_t const* _String
        );

    



    
    

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsicmp" ". See online help for details."))
    __declspec(dllimport) int __cdecl wcsicmp(
          wchar_t const* _String1,
          wchar_t const* _String2
        );
    
      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsnicmp" ". See online help for details."))
    __declspec(dllimport) int __cdecl wcsnicmp(
          wchar_t const* _String1,
          wchar_t const* _String2,
                                size_t         _MaxCount
        );
    
    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsnset" ". See online help for details."))
     
    __declspec(dllimport) wchar_t* __cdecl wcsnset(
          wchar_t* _String,
                                  wchar_t  _Value,
                                  size_t   _MaxCount
        );
    
    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsrev" ". See online help for details."))
     
    __declspec(dllimport) wchar_t* __cdecl wcsrev(
          wchar_t* _String
        );
    
    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsset" ". See online help for details."))
     
    __declspec(dllimport) wchar_t* __cdecl wcsset(
          wchar_t* _String,
               wchar_t  _Value
        );
    
    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcslwr" ". See online help for details."))
     
    __declspec(dllimport) wchar_t* __cdecl wcslwr(
          wchar_t* _String
        );
    
    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsupr" ". See online help for details."))
     
    __declspec(dllimport) wchar_t* __cdecl wcsupr(
          wchar_t* _String
        );
    
      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsicoll" ". See online help for details."))
    __declspec(dllimport) int __cdecl wcsicoll(
          wchar_t const* _String1,
          wchar_t const* _String2
        );





} __pragma(pack(pop))







__pragma(pack(push, 8)) extern "C" {







     
    __declspec(dllimport) errno_t __cdecl strcpy_s(
          char*       _Destination,
                                  rsize_t     _SizeInBytes,
                                char const* _Source
        );

    
    __declspec(dllimport) errno_t __cdecl strcat_s(
          char*       _Destination,
                                     rsize_t     _SizeInBytes,
                                   char const* _Source
        );

    
    __declspec(dllimport) errno_t __cdecl strerror_s(
          char*  _Buffer,
                                  size_t _SizeInBytes,
                                  int    _ErrorNumber);

    
    __declspec(dllimport) errno_t __cdecl strncat_s(
          char*       _Destination,
                                     rsize_t     _SizeInBytes,
               char const* _Source,
                                     rsize_t     _MaxCount
        );

    
    __declspec(dllimport) errno_t __cdecl strncpy_s(
          char*       _Destination,
                                  rsize_t     _SizeInBytes,
            char const* _Source,
                                  rsize_t     _MaxCount
        );

     
    __declspec(dllimport) char*  __cdecl strtok_s(
                          char*       _String,
                                 char const* _Delimiter,
            char**      _Context
        );



__declspec(dllimport) void* __cdecl _memccpy(
      void*       _Dst,
                                   void const* _Src,
                                   int         _Val,
                                   size_t      _MaxCount
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl strcat_s(char (&_Destination)[_Size],   char const* _Source) throw() { return strcat_s(_Destination, _Size, _Source); } }



    __declspec(deprecated("This function or variable may be unsafe. Consider using " "strcat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))  char* __cdecl strcat( char *_Destination,  char const* _Source);



 
int __cdecl strcmp(
      char const* _Str1,
      char const* _Str2
    );

 
__declspec(dllimport) int __cdecl _strcmpi(
      char const* _String1,
      char const* _String2
    );

 
__declspec(dllimport) int __cdecl strcoll(
      char const* _String1,
      char const* _String2
    );

 
__declspec(dllimport) int __cdecl _strcoll_l(
        char const* _String1,
        char const* _String2,
      _locale_t   _Locale
    );

char* __cdecl strcpy(
      char*       _Dest,
                                            char const* _Source
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl strcpy_s(  char (&_Destination)[_Size],   char const* _Source) throw() { return strcpy_s(_Destination, _Size, _Source); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))  char* __cdecl strcpy( char *_Destination,  char const* _Source);

 
__declspec(dllimport) size_t __cdecl strcspn(
      char const* _Str,
      char const* _Control
    );






 
__declspec(dllimport) __declspec(allocator) char* __cdecl _strdup(
      char const* _Source
    );





 
 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) char*  __cdecl _strerror(
      char const* _ErrorMessage
    );


__declspec(dllimport) errno_t __cdecl _strerror_s(
      char*       _Buffer,
                              size_t      _SizeInBytes,
                        char const* _ErrorMessage
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _strerror_s(char (&_Buffer)[_Size],   char const* _ErrorMessage) throw() { return _strerror_s(_Buffer, _Size, _ErrorMessage); } }

 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) char* __cdecl strerror(
      int _ErrorMessage
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl strerror_s(char (&_Buffer)[_Size],   int _ErrorMessage) throw() { return strerror_s(_Buffer, _Size, _ErrorMessage); } }

 
__declspec(dllimport) int __cdecl _stricmp(
      char const* _String1,
      char const* _String2
    );

 
__declspec(dllimport) int __cdecl _stricoll(
      char const* _String1,
      char const* _String2
    );

 
__declspec(dllimport) int __cdecl _stricoll_l(
        char const* _String1,
        char const* _String2,
      _locale_t   _Locale
    );

 
__declspec(dllimport) int __cdecl _stricmp_l(
        char const* _String1,
        char const* _String2,
      _locale_t   _Locale
    );

 
size_t __cdecl strlen(
      char const* _Str
    );


__declspec(dllimport) errno_t __cdecl _strlwr_s(
      char*  _String,
                          size_t _Size
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _strlwr_s(  char (&_String)[_Size]) throw() { return _strlwr_s(_String, _Size); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strlwr( char *_String);


__declspec(dllimport) errno_t __cdecl _strlwr_s_l(
      char*     _String,
                          size_t    _Size,
                      _locale_t _Locale
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _strlwr_s_l(  char (&_String)[_Size],   _locale_t _Locale) throw() { return _strlwr_s_l(_String, _Size, _Locale); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strlwr_l(  char *_String,   _locale_t _Locale);

__declspec(dllimport) char* __cdecl strncat(
      char*       _Dest,
        char const* _Source,
                           size_t      _Count
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl strncat_s(  char (&_Destination)[_Size],   char const* _Source,   size_t _Count) throw() { return strncat_s(_Destination, _Size, _Source, _Count); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl strncat(  char *_Destination,   char const* _Source,   size_t _Count);

 
__declspec(dllimport) int __cdecl strncmp(
      char const* _Str1,
      char const* _Str2,
                            size_t      _MaxCount
    );

 
__declspec(dllimport) int __cdecl _strnicmp(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount
    );

 
__declspec(dllimport) int __cdecl _strnicmp_l(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount,
                        _locale_t   _Locale
    );

 
__declspec(dllimport) int __cdecl _strnicoll(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount
    );

 
__declspec(dllimport) int __cdecl _strnicoll_l(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount,
                        _locale_t   _Locale
    );

 
__declspec(dllimport) int __cdecl _strncoll(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount
    );

 
__declspec(dllimport) int __cdecl _strncoll_l(
      char const* _String1,
      char const* _String2,
                            size_t      _MaxCount,
                        _locale_t   _Locale
    );

__declspec(dllimport) size_t __cdecl __strncnt(
      char const* _String,
                         size_t      _Count
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl strncpy_s(char (&_Destination)[_Size],   char const* _Source,   size_t _Count) throw() { return strncpy_s(_Destination, _Size, _Source, _Count); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl strncpy(    char *_Destination,   char const* _Source,   size_t _Count);

 


__declspec(dllimport) size_t __cdecl strnlen(
      char const* _String,
                            size_t      _MaxCount
    );



     
    
    
    static __inline size_t __cdecl strnlen_s(
          char const* _String,
                                size_t      _MaxCount
        )
    {
        return _String == 0 ? 0 : strnlen(_String, _MaxCount);
    }



__declspec(dllimport) char* __cdecl _strnset(
      char*  _Dest,
                           int    _Val,
                           size_t _Count
    );


__declspec(dllimport) errno_t __cdecl _strnset_s(
      char*  _String,
                                 size_t _SizeInBytes,
                                 int    _Value,
                                 size_t _MaxCount
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _strnset_s(  char (&_Destination)[_Size],   int _Value,   size_t _Count) throw() { return _strnset_s(_Destination, _Size, _Value, _Count); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strnset(  char *_Destination,   int _Value,   size_t _Count);

 
__declspec(dllimport) char const* __cdecl strpbrk(
      char const* _Str,
      char const* _Control
    );

__declspec(dllimport) char* __cdecl _strrev(
      char* _Str
    );


__declspec(dllimport) errno_t __cdecl _strset_s(
      char*  _Destination,
                                     size_t _DestinationSize,
                                     int    _Value
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _strset_s(  char (&_Destination)[_Size],   int _Value) throw() { return _strset_s(_Destination, _Size, _Value); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))  char* __cdecl _strset( char *_Destination,  int _Value);

char* __cdecl _strset(
      char* _Dest,
           int   _Value
    );

 
__declspec(dllimport) size_t __cdecl strspn(
      char const* _Str,
      char const* _Control
    );

  __declspec(deprecated("This function or variable may be unsafe. Consider using " "strtok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) char* __cdecl strtok(
      char*       _String,
             char const* _Delimiter
    );


__declspec(dllimport) errno_t __cdecl _strupr_s(
      char*  _String,
                          size_t _Size
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _strupr_s(  char (&_String)[_Size]) throw() { return _strupr_s(_String, _Size); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strupr( char *_String);


__declspec(dllimport) errno_t __cdecl _strupr_s_l(
      char*     _String,
                          size_t    _Size,
                      _locale_t _Locale
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _strupr_s_l(  char (&_String)[_Size],   _locale_t _Locale) throw() { return _strupr_s_l(_String, _Size, _Locale); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strupr_l(  char *_String,   _locale_t _Locale);

 

__declspec(dllimport) size_t __cdecl strxfrm(
        char*       _Destination,
                                         char const* _Source,
                 size_t      _MaxCount
    );

 

__declspec(dllimport) size_t __cdecl _strxfrm_l(
        char*       _Destination,
                                         char const* _Source,
                 size_t      _MaxCount,
                                       _locale_t   _Locale
    );




extern "C++"
{
     
    inline char* __cdecl strchr(  char* const _String,   int const _Ch)
    {
        return const_cast<char*>(strchr(static_cast<char const*>(_String), _Ch));
    }

     
    inline char* __cdecl strpbrk(  char* const _String,   char const* const _Control)
    {
        return const_cast<char*>(strpbrk(static_cast<char const*>(_String), _Control));
    }

     
    inline char* __cdecl strrchr(  char* const _String,   int const _Ch)
    {
        return const_cast<char*>(strrchr(static_cast<char const*>(_String), _Ch));
    }

       
    inline char* __cdecl strstr(  char* const _String,   char const* const _SubString)
    {
        return const_cast<char*>(strstr(static_cast<char const*>(_String), _SubString));
    }
}






    




      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strdup" ". See online help for details."))
    __declspec(dllimport) char* __cdecl strdup(
          char const* _String
        );

    



    
      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strcmpi" ". See online help for details."))
    __declspec(dllimport) int __cdecl strcmpi(
          char const* _String1,
          char const* _String2
        );

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_stricmp" ". See online help for details."))
    __declspec(dllimport) int __cdecl stricmp(
          char const* _String1,
          char const* _String2
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strlwr" ". See online help for details."))
    __declspec(dllimport) char* __cdecl strlwr(
          char* _String
        );

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strnicmp" ". See online help for details."))
    __declspec(dllimport) int __cdecl strnicmp(
          char const* _String1,
          char const* _String2,
                                size_t      _MaxCount
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strnset" ". See online help for details."))
    __declspec(dllimport) char* __cdecl strnset(
          char*  _String,
                                  int    _Value,
                                  size_t _MaxCount
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strrev" ". See online help for details."))
    __declspec(dllimport) char* __cdecl strrev(
          char* _String
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strset" ". See online help for details."))
    char* __cdecl strset(
          char* _String,
               int   _Value);

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strupr" ". See online help for details."))
    __declspec(dllimport) char* __cdecl strupr(
          char* _String
        );





} __pragma(pack(pop))




 
namespace std {
using :: size_t; using :: memchr; using :: memcmp;
using :: memcpy; using :: memmove; using :: memset;
using :: strcat; using :: strchr; using :: strcmp;
using :: strcoll; using :: strcpy; using :: strcspn;
using :: strerror; using :: strlen; using :: strncat;
using :: strncmp; using :: strncpy; using :: strpbrk;
using :: strrchr; using :: strspn; using :: strstr;
using :: strtok; using :: strxfrm;
}
 










#pragma once





#pragma once






#pragma once





#pragma once





#pragma once





 
namespace std {
using :: ptrdiff_t; using :: size_t;
typedef double max_align_t;	
}

using ::std:: max_align_t;	
 











#pragma once





 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
template<class _Elem>
	class initializer_list
	{	
public:
	typedef _Elem value_type;
	typedef const _Elem& reference;
	typedef const _Elem& const_reference;
	typedef size_t size_type;

	typedef const _Elem* iterator;
	typedef const _Elem* const_iterator;

	constexpr initializer_list() noexcept
		: _First(0), _Last(0)
		{	
		}

	constexpr initializer_list(const _Elem *_First_arg,
		const _Elem *_Last_arg) noexcept
		: _First(_First_arg), _Last(_Last_arg)
		{	
		}

	constexpr const _Elem *begin() const noexcept
		{	
		return (_First);
		}

	constexpr const _Elem *end() const noexcept
		{	
		return (_Last);
		}

	constexpr size_t size() const noexcept
		{	
		return ((size_t)(_Last - _First));
		}

private:
	const _Elem *_First;
	const _Elem *_Last;
	};

		
template<class _Elem> inline
	constexpr const _Elem *begin(initializer_list<_Elem> _Ilist) noexcept
	{	
	return (_Ilist.begin());
	}

		
template<class _Elem> inline
	constexpr const _Elem *end(initializer_list<_Elem> _Ilist) noexcept
	{	
	return (_Ilist.end());
	}
}
 
 #pragma warning(pop)
 #pragma pack(pop)











 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
 
 
 

 
 
 
 
 

 
 

  

  












   
   
  

 





















		


		
 

 



































 
 

		

template<bool,
	class _Ty1,
	class _Ty2>
	struct _If
	{	
	typedef _Ty2 type;
	};

template<class _Ty1,
	class _Ty2>
	struct _If<true, _Ty1, _Ty2>
	{	
	typedef _Ty1 type;
	};

template<class _Ty>
	struct _Always_false
	{	
	static constexpr bool value = false;
	};

		

 
		
template<class _Arg,
	class _Result>
	struct unary_function
	{	
	typedef _Arg argument_type;
	typedef _Result result_type;
	};

		
template<class _Arg1,
	class _Arg2,
	class _Result>
	struct binary_function
	{	
	typedef _Arg1 first_argument_type;
	typedef _Arg2 second_argument_type;
	typedef _Result result_type;
	};
 

		
template<class _Ty = void>
	struct plus
	{	
	typedef _Ty first_argument_type;
	typedef _Ty second_argument_type;
	typedef _Ty result_type;

	constexpr _Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left + _Right);
		}
	};

		
template<class _Ty = void>
	struct minus
	{	
	typedef _Ty first_argument_type;
	typedef _Ty second_argument_type;
	typedef _Ty result_type;

	constexpr _Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left - _Right);
		}
	};

		
template<class _Ty = void>
	struct multiplies
	{	
	typedef _Ty first_argument_type;
	typedef _Ty second_argument_type;
	typedef _Ty result_type;

	constexpr _Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left * _Right);
		}
	};

		
template<class _Ty = void>
	struct equal_to
	{	
	typedef _Ty first_argument_type;
	typedef _Ty second_argument_type;
	typedef bool result_type;

	constexpr bool operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left == _Right);
		}
	};

		
template<class _Ty = void>
	struct less
	{	
	typedef _Ty first_argument_type;
	typedef _Ty second_argument_type;
	typedef bool result_type;

	constexpr bool operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left < _Right);
		}
	};

		
template<>
	struct plus<void>
	{	
	typedef int is_transparent;

	template<class _Ty1,
		class _Ty2>
		constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			+ static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			+ static_cast<_Ty2&&>(_Right));
		}
	};

		
template<>
	struct minus<void>
	{	
	typedef int is_transparent;

	template<class _Ty1,
		class _Ty2>
		constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			- static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			- static_cast<_Ty2&&>(_Right));
		}
	};

		
template<>
	struct multiplies<void>
	{	
	typedef int is_transparent;

	template<class _Ty1,
		class _Ty2>
		constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			* static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			* static_cast<_Ty2&&>(_Right));
		}
	};

		
template<>
	struct equal_to<void>
	{	
	typedef int is_transparent;

	template<class _Ty1,
		class _Ty2>
		constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			== static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			== static_cast<_Ty2&&>(_Right));
		}
	};

		
template<>
	struct less<void>
	{	
	typedef int is_transparent;

	template<class _Ty1,
		class _Ty2>
		constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			< static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			< static_cast<_Ty2&&>(_Right));
		}
	};


}



namespace std {
	
inline size_t _Hash_seq(const unsigned char *_First, size_t _Count)
	{	
 





	static_assert(sizeof(size_t) == 4, "This code is for 32-bit size_t.");
	const size_t _FNV_offset_basis = 2166136261U;
	const size_t _FNV_prime = 16777619U;
 

	size_t _Val = _FNV_offset_basis;
	for (size_t _Next = 0; _Next < _Count; ++_Next)
		{	
		_Val ^= (size_t)_First[_Next];
		_Val *= _FNV_prime;
		}
	return (_Val);
	}

	
template<class _Kty>
	struct _Bitwise_hash
	{	
	typedef _Kty argument_type;
	typedef size_t result_type;

	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Hash_seq((const unsigned char *)&_Keyval, sizeof (_Kty)));
		}
	};

	
template<class _Kty>
	struct hash
		: public _Bitwise_hash<_Kty>
	{	
	static constexpr bool _Value = __is_enum(_Kty);
	static_assert(_Value,
		"The C++ Standard doesn't provide a hash for this type.");
	};
template<>
	struct hash<bool>
		: public _Bitwise_hash<bool>
	{	
	};

template<>
	struct hash<char>
		: public _Bitwise_hash<char>
	{	
	};

template<>
	struct hash<signed char>
		: public _Bitwise_hash<signed char>
	{	
	};

template<>
	struct hash<unsigned char>
		: public _Bitwise_hash<unsigned char>
	{	
	};

template<>
	struct hash<char16_t>
		: public _Bitwise_hash<char16_t>
	{	
	};

template<>
	struct hash<char32_t>
		: public _Bitwise_hash<char32_t>
	{	
	};

 
template<>
	struct hash<wchar_t>
		: public _Bitwise_hash<wchar_t>
	{	
	};
 

template<>
	struct hash<short>
		: public _Bitwise_hash<short>
	{	
	};

template<>
	struct hash<unsigned short>
		: public _Bitwise_hash<unsigned short>
	{	
	};

template<>
	struct hash<int>
		: public _Bitwise_hash<int>
	{	
	};

template<>
	struct hash<unsigned int>
		: public _Bitwise_hash<unsigned int>
	{	
	};

template<>
	struct hash<long>
		: public _Bitwise_hash<long>
	{	
	};

template<>
	struct hash<unsigned long>
		: public _Bitwise_hash<unsigned long>
	{	
	};

template<>
	struct hash<long long>
		: public _Bitwise_hash<long long>
	{	
	};

template<>
	struct hash<unsigned long long>
		: public _Bitwise_hash<unsigned long long>
	{	
	};

template<>
	struct hash<float>
		: public _Bitwise_hash<float>
	{	
	typedef float _Kty;
	typedef _Bitwise_hash<_Kty> _Mybase;

	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Mybase::operator()(
			_Keyval == 0 ? 0 : _Keyval));	
		}
	};

template<>
	struct hash<double>
		: public _Bitwise_hash<double>
	{	
	typedef double _Kty;
	typedef _Bitwise_hash<_Kty> _Mybase;

	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Mybase::operator()(
			_Keyval == 0 ? 0 : _Keyval));	
		}
	};

template<>
	struct hash<long double>
		: public _Bitwise_hash<long double>
	{	
	typedef long double _Kty;
	typedef _Bitwise_hash<_Kty> _Mybase;

	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Mybase::operator()(
			_Keyval == 0 ? 0 : _Keyval));	
		}
	};

template<class _Ty>
	struct hash<_Ty *>
		: public _Bitwise_hash<_Ty *>
	{	
	};
}



namespace std {
namespace tr1 {	
using ::std:: hash;
}	
}





 





 

 



 



 





 




 



 

































































namespace std {
		
template<class _Ty> inline
	constexpr _Ty *addressof(_Ty& _Val) noexcept
	{	
	return (__builtin_addressof(_Val));
	}

		
template<class _Ptrty> inline
	auto _Unfancy(_Ptrty _Ptr)
	{	
	return (::std:: addressof(*_Ptr));
	}

template<class _Ty> inline
	_Ty * _Unfancy(_Ty * _Ptr)
	{	
	return (_Ptr);
	}

}
 
 #pragma warning(pop)
 #pragma pack(pop)









 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

 #pragma warning(disable: 4180)	

namespace std {
	
template<class... _Types>
	struct _Arg_types
	{	
	};

template<class _Ty1>
	struct _Arg_types<_Ty1>
	{	
	typedef _Ty1 argument_type;
	};

template<class _Ty1,
	class _Ty2>
	struct _Arg_types<_Ty1, _Ty2>
	{	
	typedef _Ty1 first_argument_type;
	typedef _Ty2 second_argument_type;
	};

	
template<class _Ty>
	struct _Is_function
	{	
	typedef false_type _Bool_type;
	};











template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) > : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) > : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) > : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) > : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) const> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) const> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) const volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) const volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) const &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) const &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) const volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) const volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) const &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) const &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };  template<class _Ret, class... _Types> struct _Is_function<_Ret __fastcall (_Types...) const volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __stdcall (_Types...) const volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; };











template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) > { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) const> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) volatile> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) const volatile> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) &> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) const &> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) volatile &> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) const volatile &> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) &&> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) const &&> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) volatile &&> { typedef true_type _Bool_type; typedef _Ret result_type; }; template<class _Ret, class... _Types> struct _Is_function<_Ret (_Types..., ...) const volatile &&> { typedef true_type _Bool_type; typedef _Ret result_type; };


template<class _Ty>
	struct is_function
		: _Is_function<_Ty>::_Bool_type
	{	
	};

template<class _Ty>
	constexpr bool is_function_v = is_function<_Ty>::value;


template<class _Ty>
	struct _Is_memfunptr
	{	
	typedef false_type _Bool_type;
	};













template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...)  > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...)  > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...)  > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...)  > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...)  > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) const > : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) const > : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) const > : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) const > : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) const > : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) volatile > : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) volatile > : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) volatile > : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) volatile > : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) volatile > : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) const volatile > : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) const volatile > : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) const volatile > : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) const volatile > : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) const volatile > : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...)  &> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...)  &> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...)  &> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...)  &> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...)  &> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) const &> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) const &> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) const &> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) const &> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) const &> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) volatile &> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) volatile &> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) volatile &> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) volatile &> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) volatile &> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) const volatile &> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) const volatile &> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) const volatile &> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) const volatile &> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) const volatile &> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...)  &&> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...)  &&> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...)  &&> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...)  &&> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...)  &&> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) const &&> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) const &&> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) const &&> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) const &&> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) const &&> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) volatile &&> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) volatile &&> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) volatile &&> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) volatile &&> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) volatile &&> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) const volatile &&> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };  template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) const volatile &&> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) const volatile &&> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) const volatile &&> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__vectorcall _Arg0::*)(_Types...) const volatile &&> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };













template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) > { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) const> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) volatile> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) const volatile> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) &> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) const &> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) volatile &> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) const volatile &> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) &&> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) const &&> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) volatile &&> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) const volatile &&> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };


	
template<class _Ty>
	struct is_void
		: false_type
	{	
	};








template<> struct is_void< void> : true_type { }; template<> struct is_void<const void> : true_type { }; template<> struct is_void<volatile void> : true_type { }; template<> struct is_void<const volatile void> : true_type { };


	
template<class... _Types>
	using void_t = void;

	
	
template<class _Ty>
	struct add_const
	{	
	typedef const _Ty type;
	};

	
template<class _Ty>
	struct add_volatile
	{	
	typedef volatile _Ty type;
	};

	
template<class _Ty>
	struct add_cv
	{	
	typedef const volatile _Ty type;
	};

	
template<class _Ty,
	class = void>
	struct _Add_reference
	{	
	typedef _Ty _Lvalue;
	typedef _Ty _Rvalue;
	};

template<class _Ty>
	struct _Add_reference<_Ty, void_t<_Ty&> >
	{	
	typedef _Ty& _Lvalue;
	typedef _Ty&& _Rvalue;
	};

	
template<class _Ty>
	struct add_lvalue_reference
	{	
	typedef typename _Add_reference<_Ty>::_Lvalue type;
	};

	
template<class _Ty>
	struct add_rvalue_reference
	{	
	typedef typename _Add_reference<_Ty>::_Rvalue type;
	};

	
template<class _Ty>
	typename add_rvalue_reference<_Ty>::type
		declval() noexcept;

	
template<class _Ty>
	struct remove_extent
	{	
	typedef _Ty type;
	};

template<class _Ty, size_t _Ix>
	struct remove_extent<_Ty[_Ix]>
	{	
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_extent<_Ty[]>
	{	
	typedef _Ty type;
	};

	
template<class _Ty>
	struct remove_all_extents
	{	
	typedef _Ty type;
	};

template<class _Ty, size_t _Ix>
	struct remove_all_extents<_Ty[_Ix]>
	{	
	typedef typename remove_all_extents<_Ty>::type type;
	};

template<class _Ty>
	struct remove_all_extents<_Ty[]>
	{	
	typedef typename remove_all_extents<_Ty>::type type;
	};

	
template<class _Ty>
	struct remove_pointer
	{	
	typedef _Ty type;
	};








template<class _Ty> struct remove_pointer<_Ty *> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *const> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *volatile> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *const volatile> { typedef _Ty type; };


	
template<class _Ty,
	class = void>
	struct _Add_pointer
	{	
	typedef _Ty type;
	};

template<class _Ty>
	struct _Add_pointer<_Ty, void_t<typename remove_reference<_Ty>::type *> >
	{	
	typedef typename remove_reference<_Ty>::type * type;
	};

template<class _Ty>
	struct add_pointer
	{	
	typedef typename _Add_pointer<_Ty>::type type;
	};

	
	
template<class _Ty>
	struct is_array
		: false_type
	{	
	};

template<class _Ty, size_t _Nx>
	struct is_array<_Ty[_Nx]>
		: true_type
	{	
	};

template<class _Ty>
	struct is_array<_Ty[]>
		: true_type
	{	
	};

	
template<class _Ty>
	struct is_lvalue_reference
		: false_type
	{	
	};

template<class _Ty>
	struct is_lvalue_reference<_Ty&>
		: true_type
	{	
	};

	
template<class _Ty>
	struct is_rvalue_reference
		: false_type
	{	
	};

template<class _Ty>
	struct is_rvalue_reference<_Ty&&>
		: true_type
	{	
	};

	
template<class _Ty>
	struct is_reference
		: _Cat_base<is_lvalue_reference<_Ty>::value
		|| is_rvalue_reference<_Ty>::value>
	{	
	};


	
template<class _Ty,
	bool _Pmf = _Is_memfunptr<_Ty>::_Bool_type::value>
	struct _Is_member_object_pointer
		: false_type
	{	
	};

template<class _Ty1,
	class _Ty2>
	struct _Is_member_object_pointer<_Ty1 _Ty2::*, false>
		: true_type
	{	
	typedef _Ty2 _Class_type;
	};

template<class _Ty>
	struct is_member_object_pointer
		: _Is_member_object_pointer<typename remove_cv<_Ty>::type>::type
	{	
	};

	
template<class _Ty>
	struct is_member_function_pointer
		: _Is_memfunptr<typename remove_cv<_Ty>::type>::_Bool_type
	{	
	};

	
template<class _Ty>
	struct _Is_pointer
		: false_type
	{	
	};

template<class _Ty>
	struct _Is_pointer<_Ty *>
		: _Cat_base<!is_member_object_pointer<_Ty *>::value
		&& !is_member_function_pointer<_Ty *>::value>
	{	
	};

template<class _Ty>
	struct is_pointer
		: _Is_pointer<typename remove_cv<_Ty>::type>
	{	
	};

	

template<class _Ty>
	struct is_null_pointer
		: _Cat_base<is_same<typename remove_cv<_Ty>::type, nullptr_t>::value>
	{	
	};

	
template<class _Ty>
	struct is_union
		: _Cat_base<__is_union(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_class
		: _Cat_base<__is_class(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_fundamental
		: _Cat_base<is_arithmetic<_Ty>::value
		|| is_void<_Ty>::value
		|| is_null_pointer<_Ty>::value>
	{	
	};

	
template<class _Ty>
	struct is_object
		: _Cat_base<!is_function<_Ty>::value
		&& !is_reference<_Ty>::value
		&& !is_void<_Ty>::value>
	{	
	};

	

template<class _From,
	class _To>
	struct is_convertible
		: _Cat_base<__is_convertible_to(_From, _To)>
	{	
	};

	
template<class _Ty>
	struct is_enum
		: _Cat_base<__is_enum(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_compound
		: _Cat_base<!is_fundamental<_Ty>::value>
	{	
	};

	
template<class _Ty>
	struct is_member_pointer
		: _Cat_base<is_member_object_pointer<_Ty>::value
		|| is_member_function_pointer<_Ty>::value>
	{	
	};

	
template<class _Ty>
	struct is_scalar
		: _Cat_base<is_arithmetic<_Ty>::value
		|| is_enum<_Ty>::value
		|| is_pointer<_Ty>::value
		|| is_member_pointer<_Ty>::value
		|| is_null_pointer<_Ty>::value>
	{	
	};

	
template<class _Ty>
	struct is_const
		: false_type
	{	
	};

template<class _Ty>
	struct is_const<const _Ty>
		: true_type
	{	
	};

	
template<class _Ty>
	struct is_volatile
		: false_type
	{	
	};

template<class _Ty>
	struct is_volatile<volatile _Ty>
		: true_type
	{	
	};

	
template<class _Ty>
	struct is_pod
		: _Cat_base<__is_pod(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_empty
		: _Cat_base<__is_empty(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_polymorphic
		: _Cat_base<__is_polymorphic(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_abstract
		: _Cat_base<__is_abstract(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_final
		: _Cat_base<__is_final(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_standard_layout
		: _Cat_base<__is_standard_layout(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_literal_type
		: _Cat_base<__is_literal_type(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_trivial
		: _Cat_base<__is_trivial(_Ty)>
	{	
	};

	
template<class _Ty>
	struct is_trivially_copyable
		: _Cat_base<__is_trivially_copyable(_Ty)>
	{	
	};

	
template<class _Ty>
	struct has_virtual_destructor
		: _Cat_base<__has_virtual_destructor(_Ty)>
	{	
	};

		
	

template<class _Ty,
	class... _Args>
	struct is_constructible
		: _Cat_base<__is_constructible(_Ty, _Args...)>
	{	
	};

	
template<class _Ty>
	struct is_copy_constructible
		: is_constructible<
			_Ty,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_default_constructible
		: is_constructible<_Ty>::type
	{	
	};

	
template<class _Ty>
	struct is_move_constructible
		: is_constructible<
			_Ty,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};

	
template<class _To,
	class _From>
	struct is_assignable
		: integral_constant<bool, __is_assignable(_To, _From)>
	{	
	};

	
template<class _Ty>
	struct is_copy_assignable
		: is_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_move_assignable
		: is_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_destructible
		: _Cat_base<__is_destructible(_Ty)>
	{	
	};

		
	

template<class _Ty,
	class... _Args>
	struct is_trivially_constructible
		: _Cat_base<__is_trivially_constructible(_Ty, _Args...)>
	{	
	};

	
template<class _Ty>
	struct is_trivially_copy_constructible
		: is_trivially_constructible<
			_Ty,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_trivially_default_constructible
		: is_trivially_constructible<_Ty>::type
	{	
	};

	
template<class _Ty>
	struct is_trivially_move_constructible
		: is_trivially_constructible<
			_Ty,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};

	
template<class _To,
	class _From>
	struct is_trivially_assignable
		: _Cat_base<__is_trivially_assignable(_To, _From)>
	{	
	};

	
template<class _Ty>
	struct is_trivially_copy_assignable
		: is_trivially_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_trivially_move_assignable
		: is_trivially_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_trivially_destructible
		: _Cat_base<__has_trivial_destructor(_Ty)>
	{	
	};

		
	

template<class _Ty,
	class... _Args>
	struct is_nothrow_constructible
		: _Cat_base<__is_nothrow_constructible(_Ty, _Args...)>
	{	
	};

	
template<class _Ty>
	struct is_nothrow_copy_constructible
		: is_nothrow_constructible<
			_Ty,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_nothrow_default_constructible
		: is_nothrow_constructible<_Ty>::type
	{	
	};

	
template<class _Ty>
	struct is_nothrow_move_constructible
		: is_nothrow_constructible<
			_Ty,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};

	
template<class _To,
	class _From>
	struct is_nothrow_assignable
		: _Cat_base<__is_nothrow_assignable(_To, _From)>
	{	
	};

	
template<class _Ty>
	struct is_nothrow_copy_assignable
		: is_nothrow_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_nothrow_move_assignable
		: is_nothrow_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};

	
template<class _Ty>
	struct is_nothrow_destructible
		: _Cat_base<__is_nothrow_destructible(_Ty)>
	{	
	};

	
#pragma warning(push)
#pragma warning(disable: 4296)	
template<class _Ty,
	bool = is_integral<_Ty>::value>
	struct _Sign_base
	{	
	typedef typename remove_cv<_Ty>::type _Uty;
	typedef _Cat_base<_Uty(-1) < _Uty(0)> _Signed;
	typedef _Cat_base<_Uty(0) < _Uty(-1)> _Unsigned;
	};
#pragma warning(pop)

template<class _Ty>
	struct _Sign_base<_Ty, false>
	{	
		
	typedef is_floating_point<_Ty> _Signed;
	typedef false_type _Unsigned;
	};

template<class _Ty>
	struct is_signed
		: _Sign_base<_Ty>::_Signed
	{	
	};

	
template<class _Ty>
	struct is_unsigned
		: _Sign_base<_Ty>::_Unsigned
	{	
	};

	
template<class _Ty>
	struct _Change_sign
	{	
	static_assert(
		((is_integral<_Ty>::value || is_enum<_Ty>::value)
			&& !is_same<_Ty, bool>::value),
		"make_signed<T>/make_unsigned<T> require that T shall be a (possibly "
		"cv-qualified) integral type or enumeration but not a bool type.");

	typedef
		typename _If<is_same<_Ty, signed char>::value
			|| is_same<_Ty, unsigned char     >::value, signed char,
		typename _If<is_same<_Ty, short       >::value
			|| is_same<_Ty, unsigned short    >::value, short,
		typename _If<is_same<_Ty, int         >::value
			|| is_same<_Ty, unsigned int      >::value, int,
		typename _If<is_same<_Ty, long        >::value
			|| is_same<_Ty, unsigned long     >::value, long,
		typename _If<is_same<_Ty, long long   >::value
			|| is_same<_Ty, unsigned long long>::value, long long,
		typename _If<sizeof (_Ty) == sizeof (signed char), signed char,
		typename _If<sizeof (_Ty) == sizeof (short      ), short,
		typename _If<sizeof (_Ty) == sizeof (int        ), int,
		typename _If<sizeof (_Ty) == sizeof (long       ), long,
			long long
		>::type>::type>::type>::type>::type>::type>::type>::type>::type
			_Signed;

	typedef
		typename _If<is_same<_Signed, signed char>::value, unsigned char,
		typename _If<is_same<_Signed, short      >::value, unsigned short,
		typename _If<is_same<_Signed, int        >::value, unsigned int,
		typename _If<is_same<_Signed, long       >::value, unsigned long,
			unsigned long long
		>::type>::type>::type>::type
			_Unsigned;
	};

template<class _Ty>
	struct _Change_sign<const _Ty>
	{	
	typedef const typename _Change_sign<_Ty>::_Signed _Signed;
	typedef const typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};

template<class _Ty>
	struct _Change_sign<volatile _Ty>
	{	
	typedef volatile typename _Change_sign<_Ty>::_Signed _Signed;
	typedef volatile typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};

template<class _Ty>
	struct _Change_sign<const volatile _Ty>
	{	
	typedef const volatile typename _Change_sign<_Ty>::_Signed _Signed;
	typedef const volatile typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};

	
template<class _Ty>
	struct make_signed
	{	
	typedef typename _Change_sign<_Ty>::_Signed type;
	};

	
template<class _Ty>
	struct make_unsigned
	{	
	typedef typename _Change_sign<_Ty>::_Unsigned type;
	};

	

template<class _Ty>
	struct alignment_of
		: integral_constant<size_t, alignof(_Ty)>
	{	
	};

	




template<class _Ty,
	size_t _Len>
	union _Align_type
	{	
	_Ty _Val;
	char _Pad[_Len];
	};

template<size_t _Len,
	size_t _Align,
	class _Ty,
	bool _Ok>
	struct _Aligned;

template<size_t _Len,
	size_t _Align,
	class _Ty>
	struct _Aligned<_Len, _Align, _Ty, true>
	{	
	typedef _Align_type<_Ty, _Len> type;
	};

template<size_t _Len,
	size_t _Align>
	struct _Aligned<_Len, _Align, double, false>
	{	
	typedef _Align_type<max_align_t, _Len> type;
	};

template<size_t _Len,
	size_t _Align>
	struct _Aligned<_Len, _Align, int, false>
	{	
	typedef typename _Aligned<_Len, _Align, double, _Align <= alignment_of<double>::value>::type type;
	};

template<size_t _Len,
	size_t _Align>
	struct _Aligned<_Len, _Align, short, false>
	{	
	typedef typename _Aligned<_Len, _Align, int, _Align <= alignment_of<int>::value>::type type;
	};

template<size_t _Len,
	size_t _Align>
	struct _Aligned<_Len, _Align, char, false>
	{	
	typedef typename _Aligned<_Len, _Align, short, _Align <= alignment_of<short>::value>::type type;
	};

template<size_t _Len,
	size_t _Align = alignment_of<max_align_t>::value>
	struct aligned_storage
	{	
	typedef typename _Aligned<_Len, _Align, char, _Align <= alignment_of<char>::value>::type type;
	};




	
template<size_t... _Vals>
	struct _Maximum;

template<>
	struct _Maximum<>
	{	
	static constexpr size_t value = 0;
	};

template<size_t _Val>
	struct _Maximum<_Val>
	{	
	static constexpr size_t value = _Val;
	};

template<size_t _First,
	size_t _Second,
	size_t... _Rest>
	struct _Maximum<_First, _Second, _Rest...>
		: _Maximum<(_First < _Second ? _Second : _First), _Rest...>
	{	
	};

template<size_t _Len,
	class... _Types>
	struct aligned_union
	{	
	static constexpr size_t _Max_len = _Maximum<
		_Len, sizeof(_Types)...>::value;	
	static constexpr size_t alignment_value = _Maximum<
		alignment_of<_Types>::value...>::value;
	typedef typename aligned_storage<_Max_len, alignment_value>::type type;
	};

	
template<class _Ty>
	struct underlying_type
	{	
	typedef __underlying_type(_Ty) type;
	};

	
template<class _Ty>
	struct rank
		: integral_constant<size_t, 0>
	{	
	};

template<class _Ty, size_t _Ix>
	struct rank<_Ty[_Ix]>
		: integral_constant<size_t, rank<_Ty>::value + 1>
	{	
	};

template<class _Ty>
	struct rank<_Ty[]>
		: integral_constant<size_t, rank<_Ty>::value + 1>
	{	
	};

	
template<class _Ty, unsigned int _Nx>
	struct _Extent
		: integral_constant<size_t, 0>
	{	
	};

template<class _Ty, size_t _Ix>
	struct _Extent<_Ty[_Ix], 0>
		: integral_constant<size_t, _Ix>
	{	
	};

template<class _Ty, unsigned int _Nx, size_t _Ix>
	struct _Extent<_Ty[_Ix], _Nx>
		: _Extent<_Ty, _Nx - 1>
	{	
	};

template<class _Ty, unsigned int _Nx>
	struct _Extent<_Ty[], _Nx>
		: _Extent<_Ty, _Nx - 1>
	{	
	};

template<class _Ty, unsigned int _Nx = 0>
	struct extent
		: _Extent<_Ty, _Nx>
	{	
	};

	
template<class _Base,
	class _Der>
	struct is_base_of
		: _Cat_base<__is_base_of(_Base, _Der)>
	{	
	};

	
template<class _Ty>
	struct decay
	{	
	typedef typename remove_reference<_Ty>::type _Ty1;

	typedef typename _If<is_array<_Ty1>::value,
		typename remove_extent<_Ty1>::type *,
		typename _If<is_function<_Ty1>::value,
			typename add_pointer<_Ty1>::type,
			typename remove_cv<_Ty1>::type>::type>::type type;
	};

	
template<class...>
	struct _Conjunction;

template<bool,
	class _Lhs,
	class... _Traits>
	struct _Choose_conjunction
	{	
	typedef _Lhs type;
	};

template<class _Lhs,
	class... _Traits>
	struct _Choose_conjunction<true, _Lhs, _Traits...>
	{	
	typedef typename _Conjunction<_Traits...>::type type;
	};

template<>
	struct _Conjunction<>
	{	
	typedef true_type type;
	};

template<class _Trait>
	struct _Conjunction<_Trait>
	{	
	typedef _Trait type;
	};

template<class _Lhs,
	class... _Traits>
	struct _Conjunction<_Lhs, _Traits...>
	{	
	typedef typename _Choose_conjunction<_Lhs::value, _Lhs, _Traits...>::type type;
	};

template<class... _Traits>
	struct conjunction
		: _Conjunction<_Traits...>::type
	{	
		
		
	};

template<class... _Traits>
	using _Conjunction_t = typename conjunction<_Traits...>::type;

	
template<class...>
	struct _Disjunction;

template<bool,
	class _Lhs,
	class... _Traits>
	struct _Choose_disjunction
	{	
	typedef _Lhs type;
	};

template<class _Lhs,
	class... _Traits>
	struct _Choose_disjunction<false, _Lhs, _Traits...>
	{	
	typedef typename _Disjunction<_Traits...>::type type;
	};

template<>
	struct _Disjunction<>
	{	
	typedef false_type type;
	};

template<class _Trait>
	struct _Disjunction<_Trait>
	{	
	typedef _Trait type;
	};

template<class _Lhs,
	class... _Traits>
	struct _Disjunction<_Lhs, _Traits...>
	{	
	typedef typename _Choose_disjunction<_Lhs::value, _Lhs, _Traits...>::type type;
	};

template<class... _Traits>
	struct disjunction
		: _Disjunction<_Traits...>::type
	{	
		
		
	};

template<class... _Traits>
	using _Disjunction_t = typename disjunction<_Traits...>::type;

	
template<class _Trait>
	struct negation
		: bool_constant<!_Trait::value>
	{	
	};


namespace tr1 {	
using ::std:: add_const;
using ::std:: add_cv;
using ::std:: add_pointer;
using ::std:: add_volatile;
using ::std:: aligned_storage;
using ::std:: alignment_of;
using ::std:: conditional;
using ::std:: decay;
using ::std:: enable_if;
using ::std:: extent;
using ::std:: false_type;
using ::std:: has_virtual_destructor;
using ::std:: integral_constant;
using ::std:: is_abstract;
using ::std:: is_arithmetic;
using ::std:: is_array;
using ::std:: is_base_of;
using ::std:: is_class;
using ::std:: is_compound;
using ::std:: is_const;
using ::std:: is_convertible;
using ::std:: is_empty;
using ::std:: is_enum;
using ::std:: is_floating_point;
using ::std:: is_function;
using ::std:: is_fundamental;
using ::std:: is_integral;
using ::std:: is_member_function_pointer;
using ::std:: is_member_object_pointer;
using ::std:: is_member_pointer;
using ::std:: is_object;
using ::std:: is_pod;
using ::std:: is_pointer;
using ::std:: is_polymorphic;
using ::std:: is_reference;
using ::std:: is_same;
using ::std:: is_scalar;
using ::std:: is_signed;
using ::std:: is_union;
using ::std:: is_unsigned;
using ::std:: is_void;
using ::std:: is_volatile;
using ::std:: make_signed;
using ::std:: make_unsigned;
using ::std:: rank;
using ::std:: remove_all_extents;
using ::std:: remove_const;
using ::std:: remove_cv;
using ::std:: remove_extent;
using ::std:: remove_pointer;
using ::std:: remove_reference;
using ::std:: remove_volatile;
using ::std:: true_type;
	}	


		
template<class... _Ty>
	struct common_type;

template<class _Ty>
	struct common_type<_Ty>
	{	
	typedef typename decay<_Ty>::type type;
	};

template<class _Ty0,
	class _Ty1>
	struct common_type<_Ty0, _Ty1>
	{	
	typedef typename decay<
		decltype(_Always_false<_Ty0>::value
			? ::std:: declval<_Ty0>()
			: ::std:: declval<_Ty1>())
	>::type type;
	};

template<class _Ty0,
	class _Ty1,
	class... _Ty>
	struct common_type<_Ty0, _Ty1, _Ty...>
	{	
	typedef typename common_type<
		typename common_type<_Ty0, _Ty1>::type, _Ty...
	>::type type;
	};

	
template<class _Ty,
	_Ty... _Vals>
	struct integer_sequence
	{	
	static_assert(is_integral<_Ty>::value,
		"integer_sequence<T, I...> requires T to be an integral type.");

	typedef _Ty value_type;

	static constexpr size_t size() noexcept
		{	
		return (sizeof...(_Vals));
		}
	};

	
template<class _Ty,
	_Ty _Size>
	using make_integer_sequence = __make_integer_seq<integer_sequence, _Ty, _Size>;

template<size_t... _Vals>
	using index_sequence = integer_sequence<size_t, _Vals...>;

template<size_t _Size>
	using make_index_sequence = make_integer_sequence<size_t, _Size>;

template<class... _Types>
	using index_sequence_for = make_index_sequence<sizeof...(_Types)>;


	
template<class _Ty>
	struct identity
	{	
	typedef _Ty type;

	const _Ty& operator()(const _Ty& _Left) const
		{	
		return (_Left);
		}
	};


	
template<class _Ty>
	struct _Identity
	{	
	using type = _Ty;
	};
template<class _Ty>
	using _Identity_t = typename _Identity<_Ty>::type;

	
template<class _Type,
	template <class...> class _Template>
	struct _Is_specialization
		: false_type
	{};
template<template <class...> class _Template,
	class... _Types>
	struct _Is_specialization<_Template<_Types...>, _Template>
		: true_type
	{};

	
template<class _Ty> inline
	constexpr _Ty&& forward(
		typename remove_reference<_Ty>::type& _Arg) noexcept
	{	
	return (static_cast<_Ty&&>(_Arg));
	}

template<class _Ty> inline
	constexpr _Ty&& forward(
		typename remove_reference<_Ty>::type&& _Arg) noexcept
	{	
	static_assert(!is_lvalue_reference<_Ty>::value, "bad forward call");
	return (static_cast<_Ty&&>(_Arg));
	}

		
template<class _Ty> inline
	constexpr typename remove_reference<_Ty>::type&&
		move(_Ty&& _Arg) noexcept
	{	
	return (static_cast<typename remove_reference<_Ty>::type&&>(_Arg));
	}

		
template<class _Ty> inline
	constexpr typename _If<!is_nothrow_move_constructible<_Ty>::value
		&& is_copy_constructible<_Ty>::value,
			const _Ty&, _Ty&&>::type
	move_if_noexcept(_Ty& _Arg) noexcept
	{	
	return (::std:: move(_Arg));
	}

template<class _Ty>
	struct _Unrefwrap;








































































































































































struct _Invoker_pmf_object { template<class _Decayed, class _Ty1, class... _Types2> static  auto _Call(_Decayed _Pmf, _Ty1&& _Arg1, _Types2&&... _Args2) noexcept(noexcept((::std:: forward<_Ty1>(_Arg1).*_Pmf)(::std:: forward<_Types2>(_Args2)...))) -> decltype((::std:: forward<_Ty1>(_Arg1).*_Pmf)(::std:: forward<_Types2>(_Args2)...)) { return ((::std:: forward<_Ty1>(_Arg1).*_Pmf)(::std:: forward<_Types2>(_Args2)...)); } }; struct _Invoker_pmf_refwrap { template<class _Decayed, class _Ty1, class... _Types2> static  auto _Call(_Decayed _Pmf, _Ty1&& _Arg1, _Types2&&... _Args2) noexcept(noexcept((::std:: forward<_Ty1>(_Arg1).get().*_Pmf)(::std:: forward<_Types2>(_Args2)...))) -> decltype((::std:: forward<_Ty1>(_Arg1).get().*_Pmf)(::std:: forward<_Types2>(_Args2)...)) { return ((::std:: forward<_Ty1>(_Arg1).get().*_Pmf)(::std:: forward<_Types2>(_Args2)...)); } }; struct _Invoker_pmf_pointer { template<class _Decayed, class _Ty1, class... _Types2> static  auto _Call(_Decayed _Pmf, _Ty1&& _Arg1, _Types2&&... _Args2) noexcept(noexcept(((*::std:: forward<_Ty1>(_Arg1)).*_Pmf)(::std:: forward<_Types2>(_Args2)...))) -> decltype(((*::std:: forward<_Ty1>(_Arg1)).*_Pmf)(::std:: forward<_Types2>(_Args2)...)) { return (((*::std:: forward<_Ty1>(_Arg1)).*_Pmf)(::std:: forward<_Types2>(_Args2)...)); } }; struct _Invoker_pmd_object { template<class _Decayed, class _Ty1> static  auto _Call(_Decayed _Pmd, _Ty1&& _Arg1) noexcept(noexcept(::std:: forward<_Ty1>(_Arg1).*_Pmd)) -> decltype(::std:: forward<_Ty1>(_Arg1).*_Pmd) { return (::std:: forward<_Ty1>(_Arg1).*_Pmd); } }; struct _Invoker_pmd_refwrap { template<class _Decayed, class _Ty1> static  auto _Call(_Decayed _Pmd, _Ty1&& _Arg1) noexcept(noexcept(::std:: forward<_Ty1>(_Arg1).get().*_Pmd)) -> decltype(::std:: forward<_Ty1>(_Arg1).get().*_Pmd) { return (::std:: forward<_Ty1>(_Arg1).get().*_Pmd); } }; struct _Invoker_pmd_pointer { template<class _Decayed, class _Ty1> static  auto _Call(_Decayed _Pmd, _Ty1&& _Arg1) noexcept(noexcept((*::std:: forward<_Ty1>(_Arg1)).*_Pmd)) -> decltype((*::std:: forward<_Ty1>(_Arg1)).*_Pmd) { return ((*::std:: forward<_Ty1>(_Arg1)).*_Pmd); } }; struct _Invoker_functor { template<class _Callable, class... _Types> static  auto _Call(_Callable&& _Obj, _Types&&... _Args) noexcept(noexcept(::std:: forward<_Callable>(_Obj)(::std:: forward<_Types>(_Args)...))) -> decltype(::std:: forward<_Callable>(_Obj)(::std:: forward<_Types>(_Args)...)) { return (::std:: forward<_Callable>(_Obj)(::std:: forward<_Types>(_Args)...)); } }; template<class _Callable, class _Ty1, class _Decayed = typename decay<_Callable>::type, bool _Is_pmf = is_member_function_pointer<_Decayed>::value, bool _Is_pmd = is_member_object_pointer<_Decayed>::value> struct _Invoker1; template<class _Callable, class _Ty1, class _Decayed> struct _Invoker1<_Callable, _Ty1, _Decayed, true, false> : _If<is_base_of< typename _Is_memfunptr<_Decayed>::_Class_type, typename decay<_Ty1>::type>::value, _Invoker_pmf_object, typename _If<_Unrefwrap<_Ty1>::_Is_refwrap, _Invoker_pmf_refwrap, _Invoker_pmf_pointer >::type>::type { }; template<class _Callable, class _Ty1, class _Decayed> struct _Invoker1<_Callable, _Ty1, _Decayed, false, true> : _If<is_base_of< typename _Is_member_object_pointer<_Decayed>::_Class_type, typename decay<_Ty1>::type>::value, _Invoker_pmd_object, typename _If<_Unrefwrap<_Ty1>::_Is_refwrap, _Invoker_pmd_refwrap, _Invoker_pmd_pointer >::type>::type { }; template<class _Callable, class _Ty1, class _Decayed> struct _Invoker1<_Callable, _Ty1, _Decayed, false, false> : _Invoker_functor { }; template<class _Callable, class... _Types> struct _Invoker; template<class _Callable> struct _Invoker<_Callable> : _Invoker_functor { }; template<class _Callable, class _Ty1, class... _Types2> struct _Invoker<_Callable, _Ty1, _Types2...> : _Invoker1<_Callable, _Ty1> { }; template<class _Callable, class... _Types> inline  auto invoke(_Callable&& _Obj, _Types&&... _Args) noexcept(noexcept((_Invoker<_Callable, _Types...>::_Call( ::std:: forward<_Callable>(_Obj), ::std:: forward<_Types>(_Args)...)))) -> decltype(_Invoker<_Callable, _Types...>::_Call( ::std:: forward<_Callable>(_Obj), ::std:: forward<_Types>(_Args)...)) { return (_Invoker<_Callable, _Types...>::_Call( ::std:: forward<_Callable>(_Obj), ::std:: forward<_Types>(_Args)...)); }








template<class _Rx,
	bool = is_void<_Rx>::value>
	struct _Invoker_ret
	{	
	};

struct _Unforced
	{	
	};

template<class _Cv_void>
	struct _Invoker_ret<_Cv_void, true>
	{	
	template<class... _Valtys>
		static void _Call(_Valtys&&... _Vals)
		{	
		::std:: invoke(::std:: forward<_Valtys>(_Vals)...);
		}
	};

template<class _Rx>
	struct _Invoker_ret<_Rx, false>
	{	
	template<class... _Valtys>
		static _Rx _Call(_Valtys&&... _Vals)
		{	
		return (::std:: invoke(::std:: forward<_Valtys>(_Vals)...));
		}
	};

template<>
	struct _Invoker_ret<_Unforced, false>
	{	
	template<class... _Valtys>
		static auto _Call(_Valtys&&... _Vals)
		-> decltype(::std:: invoke(::std:: forward<_Valtys>(_Vals)...))
		{	
		return (::std:: invoke(::std:: forward<_Valtys>(_Vals)...));
		}
	};

	
struct _Unique_tag_result_of
	{	
	};

template<class _Void,
	class... _Types>
	struct _Result_of
	{	
	};

template<class... _Types>
	struct _Result_of<
		void_t<
			_Unique_tag_result_of,	
			decltype(::std:: invoke(::std:: declval<_Types>()...))>,
		_Types...>
	{	
	typedef decltype(::std:: invoke(::std:: declval<_Types>()...)) type;
	};

template<class _Fty>
	struct result_of
	{	
	static_assert(_Always_false<_Fty>::value,
		"result_of<CallableType> is invalid; use "
		"result_of<CallableType(zero or more argument types)> instead.");
	};









template<class _Callable, class... _Args> struct result_of<_Callable __cdecl (_Args...)> : _Result_of<void, _Callable, _Args...> { };  template<class _Callable, class... _Args> struct result_of<_Callable __fastcall (_Args...)> : _Result_of<void, _Callable, _Args...> { }; template<class _Callable, class... _Args> struct result_of<_Callable __stdcall (_Args...)> : _Result_of<void, _Callable, _Args...> { }; template<class _Callable, class... _Args> struct result_of<_Callable __vectorcall (_Args...)> : _Result_of<void, _Callable, _Args...> { };



	
template<bool _Was_void ,
	bool _Was_convertible ,
	class _Rx,
	class... _Types>
	struct _Is_callable2
		: true_type
	{	

	static constexpr bool _Nothrow = noexcept(::std:: invoke(::std:: declval<_Types>()...));



	};

template<class _To>
	void _Implicitly_convert_to(_To) noexcept;

template<class _Rx,
	class... _Types>
	struct _Is_callable2<false, true, _Rx, _Types...>
		: true_type
	{	

	static constexpr bool _Nothrow = noexcept(
		_Implicitly_convert_to<_Rx>(::std:: invoke(::std:: declval<_Types>()...)));



	};

template<class _Rx,
	class... _Types>
	struct _Is_callable2<false, false, _Rx, _Types...>
		: false_type
	{	
	static constexpr bool _Nothrow = false;
	};

struct _Unique_tag_is_callable
	{	
	};

template<class _Void,
	class _Rx,
	class... _Types>
	struct _Is_callable1
		: false_type
	{	
	static constexpr bool _Nothrow = false;
	};

template<class _Rx,
	class... _Types>
	struct _Is_callable1<
		void_t<
			_Unique_tag_is_callable,	
			decltype(::std:: invoke(::std:: declval<_Types>()...))>,
		_Rx,
		_Types...>
		: _Is_callable2<
			is_void<_Rx>::value,
			is_convertible<decltype(::std:: invoke(::std:: declval<_Types>()...)), _Rx>::value,
			_Rx, _Types...>
	{	
	};

















































	
template<class _Ty,
	class = void>
	struct _Weak_result_type
	{	
	};

template<class _Ty>
	struct _Weak_result_type<_Ty, void_t<
		typename _Ty::result_type> >
	{	
	typedef typename _Ty::result_type result_type;
	};

template<class _Ty,
	class = void>
	struct _Weak_argument_type
		: _Weak_result_type<_Ty>
	{	
	};

template<class _Ty>
	struct _Weak_argument_type<_Ty, void_t<
		typename _Ty::argument_type> >
		: _Weak_result_type<_Ty>
	{	
	typedef typename _Ty::argument_type argument_type;
	};

template<class _Ty,
	class = void>
	struct _Weak_binary_args
		: _Weak_argument_type<_Ty>
	{	
	};

template<class _Ty>
	struct _Weak_binary_args<_Ty, void_t<
		typename _Ty::first_argument_type,
		typename _Ty::second_argument_type> >
		: _Weak_argument_type<_Ty>
	{	
	typedef typename _Ty::first_argument_type first_argument_type;
	typedef typename _Ty::second_argument_type second_argument_type;
	};

template<class _Ty>
	struct _Weak_types
	{	
	typedef _Is_function<typename remove_pointer<_Ty>::type> _Is_f_or_pf;
	typedef _Is_memfunptr<typename remove_cv<_Ty>::type> _Is_pmf;
	typedef typename _If<_Is_f_or_pf::_Bool_type::value, _Is_f_or_pf,
		typename _If<_Is_pmf::_Bool_type::value, _Is_pmf,
		_Weak_binary_args<_Ty> >::type>::type type;
	};

	
template<class _Ty>
	class reference_wrapper
		: public _Weak_types<_Ty>::type
	{	
public:
	static_assert(is_object<_Ty>::value || is_function<_Ty>::value,
		"reference_wrapper<T> requires T to be an object type "
		"or a function type.");

	typedef _Ty type;

	reference_wrapper(_Ty& _Val) noexcept
		: _Ptr(::std:: addressof(_Val))
		{	
		}

	operator _Ty&() const noexcept
		{	
		return (*_Ptr);
		}

	_Ty& get() const noexcept
		{	
		return (*_Ptr);
		}

	template<class... _Types>
		auto operator()(_Types&&... _Args) const
		-> decltype(::std:: invoke(get(), ::std:: forward<_Types>(_Args)...))
		{	
		return (::std:: invoke(get(), ::std:: forward<_Types>(_Args)...));
		}

	reference_wrapper(_Ty&&) = delete;

private:
	_Ty *_Ptr;
	};

	
template<class _Ty> inline
	reference_wrapper<_Ty>
		ref(_Ty& _Val) noexcept
	{	
	return (reference_wrapper<_Ty>(_Val));
	}

template<class _Ty>
	void ref(const _Ty&&) = delete;

template<class _Ty> inline
	reference_wrapper<_Ty>
		ref(reference_wrapper<_Ty> _Val) noexcept
	{	
	return (::std:: ref(_Val.get()));
	}

template<class _Ty> inline
	reference_wrapper<const _Ty>
		cref(const _Ty& _Val) noexcept
	{	
	return (reference_wrapper<const _Ty>(_Val));
	}

template<class _Ty>
	void cref(const _Ty&&) = delete;

template<class _Ty> inline
	reference_wrapper<const _Ty>
		cref(reference_wrapper<_Ty> _Val) noexcept
	{	
	return (::std:: cref(_Val.get()));
	}

	
template<class _Ty>
	struct _Unrefwrap_helper
	{	
	typedef _Ty type;
	static constexpr bool _Is_refwrap = false;
	};

template<class _Ty>
	struct _Unrefwrap_helper<reference_wrapper<_Ty> >
	{	
	typedef _Ty& type;
	static constexpr bool _Is_refwrap = true;
	};

template<class _Ty>
	struct _Unrefwrap
	{	
	typedef typename decay<_Ty>::type _Ty1;
	typedef typename _Unrefwrap_helper<_Ty1>::type type;
	static constexpr bool _Is_refwrap = _Unrefwrap_helper<_Ty1>::_Is_refwrap;
	};


namespace tr1 {	
using ::std:: cref;
using ::std:: ref;
using ::std:: reference_wrapper;
using ::std:: result_of;
	}	


		
template<class _Ty>
	struct _Is_swappable;

		
template<class _Ty>
	struct _Is_nothrow_swappable;

		





template<class _Ty,
	class = void> inline

	void swap(_Ty&, _Ty&)
		noexcept(is_nothrow_move_constructible<_Ty>::value && is_nothrow_move_assignable<_Ty>::value);

template<class _Ty,
	size_t _Size,
	class = typename enable_if<_Is_swappable<_Ty>::value>::type> inline
	void swap(_Ty (&)[_Size], _Ty (&)[_Size])
		noexcept(_Is_nothrow_swappable<_Ty>::value);

		
template<class _Ty1,
	class _Ty2,
	class = void>
	struct _Swappable_with_helper
		: false_type
	{	
	};

struct _Swappable_with_helper_unique_type {}; 
template<class _Ty1,
	class _Ty2>
	struct _Swappable_with_helper<_Ty1, _Ty2, void_t<
		_Swappable_with_helper_unique_type,
		decltype(swap(::std:: declval<_Ty1>(), ::std:: declval<_Ty2>()))>>
		: true_type
	{	
	};

		
template<class _Ty1,
	class _Ty2>
	struct _Is_swappable_with
		: _Conjunction_t<
			_Swappable_with_helper<_Ty1, _Ty2>,
			_Swappable_with_helper<_Ty2, _Ty1>>
	{	
		
	};

		
template<class _Ty>
	struct _Is_swappable
		: _Is_swappable_with<
			typename add_lvalue_reference<_Ty>::type,
			typename add_lvalue_reference<_Ty>::type>::type
	{	
	};

		
template<class _Ty1,
	class _Ty2>
	struct _Swap_cannot_throw
		: bool_constant<

			noexcept(swap(::std:: declval<_Ty1>(), ::std:: declval<_Ty2>()))
				&& noexcept(swap(::std:: declval<_Ty2>(), ::std:: declval<_Ty1>()))



			>
	{	
		
		
	};

		
template<class _Ty1,
	class _Ty2>
	struct _Is_nothrow_swappable_with
		: _Conjunction_t<
			_Is_swappable_with<_Ty1, _Ty2>,
			_Swap_cannot_throw<_Ty1, _Ty2>>
	{	
		
	};

		
template<class _Ty>
	struct _Is_nothrow_swappable
		: _Is_nothrow_swappable_with<
			typename add_lvalue_reference<_Ty>::type,
			typename add_lvalue_reference<_Ty>::type>::type
	{	
	};



































		
template<class _Ty>
	using remove_const_t = typename remove_const<_Ty>::type;

template<class _Ty>
	using remove_volatile_t = typename remove_volatile<_Ty>::type;

template<class _Ty>
	using remove_cv_t = typename remove_cv<_Ty>::type;

template<class _Ty>
	using add_const_t = typename add_const<_Ty>::type;

template<class _Ty>
	using add_volatile_t = typename add_volatile<_Ty>::type;

template<class _Ty>
	using add_cv_t = typename add_cv<_Ty>::type;

template<class _Ty>
	using remove_reference_t = typename remove_reference<_Ty>::type;

template<class _Ty>
	using add_lvalue_reference_t = typename add_lvalue_reference<_Ty>::type;

template<class _Ty>
	using add_rvalue_reference_t = typename add_rvalue_reference<_Ty>::type;

template<class _Ty>
	using make_signed_t = typename make_signed<_Ty>::type;

template<class _Ty>
	using make_unsigned_t = typename make_unsigned<_Ty>::type;

template<class _Ty>
	using remove_extent_t = typename remove_extent<_Ty>::type;

template<class _Ty>
	using remove_all_extents_t = typename remove_all_extents<_Ty>::type;

template<class _Ty>
	using remove_pointer_t = typename remove_pointer<_Ty>::type;

template<class _Ty>
	using add_pointer_t = typename add_pointer<_Ty>::type;

template<size_t _Len,
	size_t _Align = alignment_of<max_align_t>::value>
	using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;

template<size_t _Len,
	class... _Types>
	using aligned_union_t = typename aligned_union<_Len, _Types...>::type;

template<class _Ty>
	using decay_t = typename decay<_Ty>::type;

template<bool _Test,
	class _Ty = void>
	using enable_if_t = typename enable_if<_Test, _Ty>::type;

template<bool _Test,
	class _Ty1,
	class _Ty2>
	using conditional_t = typename conditional<_Test, _Ty1, _Ty2>::type;

template<class... _Ty>
	using common_type_t = typename common_type<_Ty...>::type;

template<class _Ty>
	using underlying_type_t = typename underlying_type<_Ty>::type;

template<class _Ty>
	using result_of_t = typename result_of<_Ty>::type;

	
template<class _Ty>
	constexpr bool is_void_v = is_void<_Ty>::value;
template<class _Ty>
	constexpr bool is_null_pointer_v = is_null_pointer<_Ty>::value;
template<class _Ty>
	constexpr bool is_array_v = is_array<_Ty>::value;
template<class _Ty>
	constexpr bool is_pointer_v = is_pointer<_Ty>::value;
template<class _Ty>
	constexpr bool is_lvalue_reference_v = is_lvalue_reference<_Ty>::value;
template<class _Ty>
	constexpr bool is_rvalue_reference_v = is_rvalue_reference<_Ty>::value;
template<class _Ty>
	constexpr bool is_member_object_pointer_v = is_member_object_pointer<_Ty>::value;
template<class _Ty>
	constexpr bool is_member_function_pointer_v = is_member_function_pointer<_Ty>::value;
template<class _Ty>
	constexpr bool is_enum_v = is_enum<_Ty>::value;
template<class _Ty>
	constexpr bool is_union_v = is_union<_Ty>::value;
template<class _Ty>
	constexpr bool is_class_v = is_class<_Ty>::value;
template<class _Ty>
	constexpr bool is_reference_v = is_reference<_Ty>::value;
template<class _Ty>
	constexpr bool is_fundamental_v = is_fundamental<_Ty>::value;
template<class _Ty>
	constexpr bool is_object_v = is_object<_Ty>::value;
template<class _Ty>
	constexpr bool is_scalar_v = is_scalar<_Ty>::value;
template<class _Ty>
	constexpr bool is_compound_v = is_compound<_Ty>::value;
template<class _Ty>
	constexpr bool is_member_pointer_v = is_member_pointer<_Ty>::value;
template<class _Ty>
	constexpr bool is_const_v = is_const<_Ty>::value;
template<class _Ty>
	constexpr bool is_volatile_v = is_volatile<_Ty>::value;
template<class _Ty>
	constexpr bool is_trivial_v = is_trivial<_Ty>::value;
template<class _Ty>
	constexpr bool is_trivially_copyable_v = is_trivially_copyable<_Ty>::value;
template<class _Ty>
	constexpr bool is_standard_layout_v = is_standard_layout<_Ty>::value;
template<class _Ty>
	constexpr bool is_pod_v = is_pod<_Ty>::value;
template<class _Ty>
	constexpr bool is_literal_type_v = is_literal_type<_Ty>::value;
template<class _Ty>
	constexpr bool is_empty_v = is_empty<_Ty>::value;
template<class _Ty>
	constexpr bool is_polymorphic_v = is_polymorphic<_Ty>::value;
template<class _Ty>
	constexpr bool is_abstract_v = is_abstract<_Ty>::value;
template<class _Ty>
	constexpr bool is_final_v = is_final<_Ty>::value;
template<class _Ty>
	constexpr bool is_signed_v = is_signed<_Ty>::value;
template<class _Ty>
	constexpr bool is_unsigned_v = is_unsigned<_Ty>::value;
template<class _Ty,
	class... _Args>
	constexpr bool is_constructible_v = is_constructible<_Ty, _Args...>::value;
template<class _Ty>
	constexpr bool is_default_constructible_v = is_default_constructible<_Ty>::value;
template<class _Ty>
	constexpr bool is_copy_constructible_v = is_copy_constructible<_Ty>::value;
template<class _Ty>
	constexpr bool is_move_constructible_v = is_move_constructible<_Ty>::value;
template<class _Ty,
	class _Uty>
	constexpr bool is_assignable_v = is_assignable<_Ty, _Uty>::value;
template<class _Ty>
	constexpr bool is_copy_assignable_v = is_copy_assignable<_Ty>::value;
template<class _Ty>
	constexpr bool is_move_assignable_v = is_move_assignable<_Ty>::value;







template<class _Ty>
	constexpr bool is_destructible_v = is_destructible<_Ty>::value;
template<class _Ty,
	class... _Args>
	constexpr bool is_trivially_constructible_v = is_trivially_constructible<_Ty, _Args...>::value;
template<class _Ty>
	constexpr bool is_trivially_default_constructible_v = is_trivially_default_constructible<_Ty>::value;
template<class _Ty>
	constexpr bool is_trivially_copy_constructible_v = is_trivially_copy_constructible<_Ty>::value;
template<class _Ty>
	constexpr bool is_trivially_move_constructible_v = is_trivially_move_constructible<_Ty>::value;
template<class _Ty,
	class _Uty>
	constexpr bool is_trivially_assignable_v = is_trivially_assignable<_Ty, _Uty>::value;
template<class _Ty>
	constexpr bool is_trivially_copy_assignable_v = is_trivially_copy_assignable<_Ty>::value;
template<class _Ty>
	constexpr bool is_trivially_move_assignable_v = is_trivially_move_assignable<_Ty>::value;
template<class _Ty>
	constexpr bool is_trivially_destructible_v = is_trivially_destructible<_Ty>::value;
template<class _Ty,
	class... _Args>
	constexpr bool is_nothrow_constructible_v = is_nothrow_constructible<_Ty, _Args...>::value;
template<class _Ty>
	constexpr bool is_nothrow_default_constructible_v = is_nothrow_default_constructible<_Ty>::value;
template<class _Ty>
	constexpr bool is_nothrow_copy_constructible_v = is_nothrow_copy_constructible<_Ty>::value;
template<class _Ty>
	constexpr bool is_nothrow_move_constructible_v = is_nothrow_move_constructible<_Ty>::value;
template<class _Ty,
	class _Uty>
	constexpr bool is_nothrow_assignable_v = is_nothrow_assignable<_Ty, _Uty>::value;
template<class _Ty>
	constexpr bool is_nothrow_copy_assignable_v = is_nothrow_copy_assignable<_Ty>::value;
template<class _Ty>
	constexpr bool is_nothrow_move_assignable_v = is_nothrow_move_assignable<_Ty>::value;







template<class _Ty>
	constexpr bool is_nothrow_destructible_v = is_nothrow_destructible<_Ty>::value;
template<class _Ty>
	constexpr bool has_virtual_destructor_v = has_virtual_destructor<_Ty>::value;
template<class _Ty>
	constexpr size_t alignment_of_v = alignment_of<_Ty>::value;
template<class _Ty>
	constexpr size_t rank_v = rank<_Ty>::value;
template<class _Ty,
	unsigned int _Ix = 0>
	constexpr size_t extent_v = extent<_Ty, _Ix>::value;
template<class _Base,
	class _Derived>
	constexpr bool is_base_of_v = is_base_of<_Base, _Derived>::value;
template<class _From,
	class _To>
	constexpr bool is_convertible_v = is_convertible<_From, _To>::value;








template<class... _Traits>
	constexpr bool conjunction_v = conjunction<_Traits...>::value;
template<class... _Traits>
	constexpr bool disjunction_v = disjunction<_Traits...>::value;
template<class _Trait>
	constexpr bool negation_v = negation<_Trait>::value;

}

 
 #pragma warning(pop)
 #pragma pack(pop)










 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {

  


  



  




  


  

__declspec(dllimport) bool __cdecl uncaught_exception() noexcept;
__declspec(dllimport) int __cdecl uncaught_exceptions() noexcept;

}

 









#pragma once





__pragma(pack(push, 8)) extern "C" {







    
















typedef struct _heapinfo
{
    int* _pentry;
    size_t _size;
    int _useflag;
} _HEAPINFO;








   
void* __cdecl _alloca(  size_t _Size);





    __declspec(dllimport) intptr_t __cdecl _get_heap_handle(void);

     
    __declspec(dllimport) int __cdecl _heapmin(void);

    
        __declspec(dllimport) int __cdecl _heapwalk(  _HEAPINFO* _EntryInfo);
    

    
          __declspec(dllimport) int __cdecl _heapchk(void);
        __declspec(dllimport) int __cdecl _resetstkoflw(void);
    
     
    
    
    

    


        
    

    typedef char __static_assert_t[(sizeof(unsigned int) <= 8) != 0];


    #pragma warning(push)
    #pragma warning(disable:6540)

    __inline void* _MarkAllocaS(   void* _Ptr, unsigned int _Marker)
    {
        if (_Ptr)
        {
            *((unsigned int*)_Ptr) = _Marker;
            _Ptr = (char*)_Ptr + 8;
        }
        return _Ptr;
    }

    __inline size_t _MallocaComputeSize(size_t _Size)
    {
        size_t _MarkedSize = _Size + 8;
        return _MarkedSize > _Size ? _MarkedSize : 0;
    }

    #pragma warning(pop)


















    
    















    

    #pragma warning(push)
    #pragma warning(disable: 6014)
    __inline void __cdecl _freea(    void* _Memory)
    {
        unsigned int _Marker;
        if (_Memory)
        {
            _Memory = (char*)_Memory - 8;
            _Marker = *(unsigned int*)_Memory;
            if (_Marker == 0xDDDD)
            {
                free(_Memory);
            }
            





        }
    }
    #pragma warning(pop)






    




} __pragma(pack(pop))









#pragma once









#pragma once










#pragma once





__pragma(pack(push, 8)) extern "C" {



typedef void (__cdecl* terminate_handler )();
typedef void (__cdecl* terminate_function)();








    __declspec(dllimport) __declspec(noreturn) void __cdecl abort();
    __declspec(dllimport) __declspec(noreturn) void __cdecl terminate() throw();

    

        __declspec(dllimport) terminate_handler __cdecl set_terminate(
              terminate_handler _NewTerminateHandler
            ) throw();

        __declspec(dllimport) terminate_handler __cdecl _get_terminate();

    



} __pragma(pack(pop))






__pragma(pack(push, 8)) extern "C" {



typedef void (__cdecl* unexpected_handler )();
typedef void (__cdecl* unexpected_function)();






struct _EXCEPTION_POINTERS;



    __declspec(dllimport) __declspec(noreturn) void __cdecl unexpected() throw(...);

    

        __declspec(dllimport) unexpected_handler __cdecl set_unexpected(
              unexpected_handler _NewUnexpectedHandler
            ) throw();

        __declspec(dllimport) unexpected_handler __cdecl _get_unexpected();

        typedef void (__cdecl* _se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS*);

        __declspec(dllimport) _se_translator_function __cdecl _set_se_translator(
              _se_translator_function _NewSETranslator
            );

    

    class type_info;

    __declspec(dllimport) int __cdecl _is_exception_typeof(
          type_info const&     _Type,
          _EXCEPTION_POINTERS* _ExceptionPtr
        );

    __declspec(dllimport) bool __cdecl __uncaught_exception();
    __declspec(dllimport) int  __cdecl __uncaught_exceptions();



} __pragma(pack(pop))








#pragma pack(push, 8)


__pragma(pack(push, 8)) extern "C" {

struct __std_exception_data
{
    char const* _What;
    bool        _DoFree;
};

__declspec(dllimport) void __cdecl __std_exception_copy(
       __std_exception_data const* _From,
      __std_exception_data*       _To
    );

__declspec(dllimport) void __cdecl __std_exception_destroy(
      __std_exception_data* _Data
    );

} __pragma(pack(pop))



namespace std {

class exception
{
public:

    exception() throw()
        : _Data()
    {
    }

    explicit exception(char const* const _Message) throw()
        : _Data()
    {
        __std_exception_data _InitData = { _Message, true };
        __std_exception_copy(&_InitData, &_Data);
    }

    exception(char const* const _Message, int) throw()
        : _Data()
    {
        _Data._What = _Message;
    }

    exception(exception const& _Other) throw()
        : _Data()
    {
        __std_exception_copy(&_Other._Data, &_Data);
    }

    exception& operator=(exception const& _Other) throw()
    {
        if (this == &_Other)
        {
            return *this;
        }

        __std_exception_destroy(&_Data);
        __std_exception_copy(&_Other._Data, &_Data);
        return *this;
    }

    virtual ~exception() throw()
    {
        __std_exception_destroy(&_Data);
    }

    virtual char const* what() const
    {
        return _Data._What ? _Data._What : "Unknown exception";
    }

private:

    __std_exception_data _Data;
};

class bad_exception
    : public exception
{
public:

    bad_exception() throw()
        : exception("bad exception", 1)
    {
    }
};

class bad_alloc
    : public exception
{
public:

    bad_alloc() throw()
        : exception("bad allocation", 1)
    {
    }

private:

    friend class bad_array_new_length;

    bad_alloc(char const* const _Message) throw()
        : exception(_Message, 1)
    {
    }
};

class bad_array_new_length
    : public bad_alloc
{
public:

    bad_array_new_length() throw()
        : bad_alloc("bad array new length")
    {
    }
};

} 


#pragma pack(pop)







namespace std {

using ::set_terminate; using ::terminate_handler; using ::terminate; using ::set_unexpected; using ::unexpected_handler; using ::unexpected;

typedef void (__cdecl *_Prhand)(const exception&);


inline terminate_handler __cdecl get_terminate() noexcept
	{	
	return (_get_terminate());
	}

inline unexpected_handler __cdecl get_unexpected() noexcept
	{	
	return (_get_unexpected());
	}


}

 















































































































































































__declspec(dllimport) void __cdecl __ExceptionPtrCreate(  void*);
__declspec(dllimport) void __cdecl __ExceptionPtrDestroy(  void*);
__declspec(dllimport) void __cdecl __ExceptionPtrCopy(  void*,   const void*);
__declspec(dllimport) void __cdecl __ExceptionPtrAssign(  void*,   const void*);
__declspec(dllimport) bool __cdecl __ExceptionPtrCompare(  const void*,   const void*);
__declspec(dllimport) bool __cdecl __ExceptionPtrToBool(  const void*);
__declspec(dllimport) void __cdecl __ExceptionPtrSwap(  void*,   void*);
__declspec(dllimport) void __cdecl __ExceptionPtrCurrentException(  void*);
[[noreturn]] __declspec(dllimport) void __cdecl __ExceptionPtrRethrow(  const void*);
__declspec(dllimport) void __cdecl __ExceptionPtrCopyException(
	  void*,   const void*,   const void*);

namespace std {

class exception_ptr
	{
public:
	exception_ptr() throw ()
		{
		__ExceptionPtrCreate(this);
		}

	exception_ptr(nullptr_t) throw ()
		{
		__ExceptionPtrCreate(this);
		}

	~exception_ptr() throw ()
		{
		__ExceptionPtrDestroy(this);
		}

	exception_ptr(const exception_ptr& _Rhs) throw ()
		{
		__ExceptionPtrCopy(this, &_Rhs);
		}

	exception_ptr& operator=(const exception_ptr& _Rhs) throw ()
		{
		__ExceptionPtrAssign(this, &_Rhs);
		return *this;
		}

	exception_ptr& operator=(nullptr_t) throw ()
		{
		exception_ptr _Ptr;
		__ExceptionPtrAssign(this, &_Ptr);
		return *this;
		}

	explicit operator bool() const throw ()
		{
		return __ExceptionPtrToBool(this);
		}

	[[noreturn]] void _RethrowException() const
		{
		__ExceptionPtrRethrow(this);
		}

	static exception_ptr _Current_exception() throw ()
		{
		exception_ptr _Retval;
		__ExceptionPtrCurrentException(&_Retval);
		return _Retval;
		}

	static exception_ptr _Copy_exception(  void* _Except,   const void* _Ptr)
		{
		exception_ptr _Retval = 0;
		if (!_Ptr)
			{
			
			return _Retval;
			}
		__ExceptionPtrCopyException(&_Retval, _Except, _Ptr);
		return _Retval;
		}

private:




	void* _Data1;
	void* _Data2;



	};

inline void swap(exception_ptr& _Lhs, exception_ptr& _Rhs) throw ()
	{
	__ExceptionPtrSwap(&_Lhs, &_Rhs);
	}

inline bool operator==(const exception_ptr& _Lhs, const exception_ptr& _Rhs) throw ()
	{
	return __ExceptionPtrCompare(&_Lhs, &_Rhs);
	}

inline bool operator==(nullptr_t, const exception_ptr& _Rhs) throw ()
	{
	return !_Rhs;
	}

inline bool operator==(const exception_ptr& _Lhs, nullptr_t) throw ()
	{
	return !_Lhs;
	}

inline bool operator!=(const exception_ptr& _Lhs, const exception_ptr& _Rhs) throw ()
	{
	return !(_Lhs == _Rhs);
	}

inline bool operator!=(nullptr_t _Lhs, const exception_ptr& _Rhs) throw ()
	{
	return !(_Lhs == _Rhs);
	}

inline bool operator!=(const exception_ptr& _Lhs, nullptr_t _Rhs) throw ()
	{
	return !(_Lhs == _Rhs);
	}

inline exception_ptr current_exception() noexcept
	{
	return exception_ptr::_Current_exception();
	}

[[noreturn]] inline void rethrow_exception(  exception_ptr _Ptr)
	{
	_Ptr._RethrowException();
	}

template<class _Ex> void *__GetExceptionInfo(_Ex);

template<class _Ex> exception_ptr make_exception_ptr(_Ex _Except) noexcept
	{
	return exception_ptr::_Copy_exception(::std:: addressof(_Except), __GetExceptionInfo(_Except));
	}

	
class nested_exception
	{	
public:
	nested_exception() noexcept
		: _Exc(::std:: current_exception())
		{	
		}

	nested_exception(const nested_exception&) noexcept = default;
	nested_exception& operator=(const nested_exception&) noexcept = default;
	virtual ~nested_exception() noexcept = default;

	[[noreturn]] void rethrow_nested() const
		{	
		if (_Exc)
			::std:: rethrow_exception(_Exc);
		else
			::std:: terminate();
		}

	exception_ptr nested_ptr() const noexcept
		{	
		return (_Exc);
		}

private:
	exception_ptr _Exc;
	};

	
template<class _Ty,
	class _Uty>
	struct _With_nested
		: _Uty, nested_exception
	{	
	explicit _With_nested(_Ty&& _Arg)
		: _Uty(::std:: forward<_Ty>(_Arg)), nested_exception()
		{	
		}
	};

template<class _Ty>
	[[noreturn]] inline void _Throw_with_nested(_Ty&& _Arg, true_type)
	{	
	typedef typename remove_reference<_Ty>::type _Uty;
	typedef _With_nested<_Ty, _Uty> _Glued;

	throw _Glued(::std:: forward<_Ty>(_Arg));
	}

template<class _Ty>
	[[noreturn]] inline void _Throw_with_nested(_Ty&& _Arg, false_type)
	{	
	typedef typename decay<_Ty>::type _Decayed;

	throw _Decayed(::std:: forward<_Ty>(_Arg));
	}

template<class _Ty>
	[[noreturn]] inline void throw_with_nested(_Ty&& _Arg)
	{	
	typedef typename remove_reference<_Ty>::type _Uty;

	integral_constant<bool,
		is_class<_Uty>::value
		&& !is_base_of<nested_exception, _Uty>::value
		&& !is_final<_Uty>::value> _Tag;

	_Throw_with_nested(::std:: forward<_Ty>(_Arg), _Tag);
	}

	
template<class _Ty> inline
	void _Rethrow_if_nested(const _Ty *_Ptr, true_type)
	{	
	const auto _Nested = dynamic_cast<const nested_exception *>(_Ptr);

	if (_Nested)
		_Nested->rethrow_nested();
	}

template<class _Ty> inline
	void _Rethrow_if_nested(const _Ty *, false_type)
	{	
	}

template<class _Ty> inline
	void rethrow_if_nested(const _Ty& _Arg)
	{	
	integral_constant<bool,
		is_polymorphic<_Ty>::value
		&& (!is_base_of<nested_exception, _Ty>::value
			|| is_convertible<_Ty *, nested_exception *>::value)> _Tag;

	_Rethrow_if_nested(::std:: addressof(_Arg), _Tag);
	}
}

 
 #pragma warning(pop)
 #pragma pack(pop)











#pragma once





#pragma once





#pragma once











#pragma once








































































































































































































































































































































typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

typedef signed char        int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;

typedef signed char        int_fast8_t;
typedef int                int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;

typedef long long          intmax_t;
typedef unsigned long long uintmax_t;














































    
    
    













































 
namespace std {
using :: int8_t; using :: int16_t;
using :: int32_t; using :: int64_t;
using :: uint8_t; using :: uint16_t;
using :: uint32_t; using :: uint64_t;

using :: int_least8_t; using :: int_least16_t;
using :: int_least32_t;  using :: int_least64_t;
using :: uint_least8_t; using :: uint_least16_t;
using :: uint_least32_t; using :: uint_least64_t;

using :: int_fast8_t; using :: int_fast16_t;
using :: int_fast32_t;  using :: int_fast64_t;
using :: uint_fast8_t; using :: uint_fast16_t;
using :: uint_fast32_t; using :: uint_fast64_t;

using :: intmax_t; using :: intptr_t;
using :: uintmax_t; using :: uintptr_t;


	namespace tr1 {
using :: int8_t; using :: int16_t;
using :: int32_t; using :: int64_t;
using :: uint8_t; using :: uint16_t;
using :: uint32_t; using :: uint64_t;

using :: int_least8_t; using :: int_least16_t;
using :: int_least32_t;  using :: int_least64_t;
using :: uint_least8_t; using :: uint_least16_t;
using :: uint_least32_t; using :: uint_least64_t;

using :: int_fast8_t; using :: int_fast16_t;
using :: int_fast32_t;  using :: int_fast64_t;
using :: uint_fast8_t; using :: uint_fast16_t;
using :: uint_fast32_t; using :: uint_fast64_t;

using :: intmax_t; using :: intptr_t;
using :: uintmax_t; using :: uintptr_t;
	}	

}
 











#pragma once





#pragma once




 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 

  

 
 
extern "C" {
 
 

		





		






void __cdecl _Feraise(int);

typedef union
	{	
	unsigned short _Word[8];
	float _Float;
	double _Double;
	long double _Long_double;
	} _Dconst;

		
__declspec(dllimport) double __cdecl _Cosh(double, double);
__declspec(dllimport) short __cdecl _Dtest(double *);
__declspec(dllimport) double __cdecl _Sinh(double, double);

__declspec(dllimport) short __cdecl _Exp(double *, double, short);
extern __declspec(dllimport)  _Dconst _Denorm, _Hugeval, _Inf,
	_Nan, _Snan;

		
__declspec(dllimport) float __cdecl _FCosh(float, float);
__declspec(dllimport) short __cdecl _FDtest(float *);
__declspec(dllimport) float __cdecl _FSinh(float, float);

__declspec(dllimport) short __cdecl _FExp(float *, float, short);
extern __declspec(dllimport)  _Dconst _FDenorm, _FInf, _FNan, _FSnan;

		
__declspec(dllimport) long double __cdecl _LCosh(long double, long double);
__declspec(dllimport) short __cdecl _LDtest(long double *);
__declspec(dllimport) long double __cdecl _LSinh(long double, long double);

__declspec(dllimport) short __cdecl _LExp(long double *, long double, short);
extern __declspec(dllimport)  _Dconst _LDenorm, _LInf, _LNan, _LSnan;

 
 
}
 
 

 
 #pragma warning(pop)
 #pragma pack(pop)










#pragma once













#pragma once




__pragma(pack(push, 8)) extern "C" {




    


        


            
        
    




















    
        
            
        


    

























































































































































    

















__declspec(dllimport) unsigned int __cdecl _clearfp(void);

#pragma warning(push)
#pragma warning(disable: 4141)

 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_controlfp_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) unsigned int __cdecl _controlfp(
      unsigned int _NewValue,
      unsigned int _Mask
    );

#pragma warning(pop)


__declspec(dllimport) void __cdecl _set_controlfp(
      unsigned int _NewValue,
      unsigned int _Mask
    );


__declspec(dllimport) errno_t __cdecl _controlfp_s(
      unsigned int* _CurrentState,
           unsigned int  _NewValue,
           unsigned int  _Mask
    );


__declspec(dllimport) unsigned int __cdecl _statusfp(void);


__declspec(dllimport) void __cdecl _fpreset(void);



    
    __declspec(dllimport) void __cdecl _statusfp2(
          unsigned int* _X86Status,
          unsigned int* _SSE2Status
        );







__declspec(dllimport) unsigned int __cdecl _control87(
      unsigned int _NewValue,
      unsigned int _Mask
    );


    
    __declspec(dllimport) int __cdecl __control87_2(
               unsigned int  _NewValue,
               unsigned int  _Mask,
          unsigned int* _X86ControlWord,
          unsigned int* _Sse2ControlWord
        );



 
__declspec(dllimport) int* __cdecl __fpecode(void);



 
__declspec(dllimport) int __cdecl __fpe_flt_rounds(void);












  __declspec(dllimport) double __cdecl _copysign(  double _Number,   double _Sign);
  __declspec(dllimport) double __cdecl _chgsign(  double _X);
  __declspec(dllimport) double __cdecl _scalb(  double _X,   long _Y);
  __declspec(dllimport) double __cdecl _logb(  double _X);
  __declspec(dllimport) double __cdecl _nextafter(  double _X,   double _Y);
  __declspec(dllimport) int    __cdecl _finite(  double _X);
  __declspec(dllimport) int    __cdecl _isnan(  double _X);
  __declspec(dllimport) int    __cdecl _fpclass(  double _X);














    
    
    

    
    __declspec(dllimport) void __cdecl fpreset(void);

    
    

    
    

    
    
    

    
    
    
    
    
    
    

    
    
    

    
    
    
    
    

    
    
    
    

    

    
    
    
    
    
    

    
    
    
    

    
    
    
    
    
    

    
    
    
    

    





} __pragma(pack(pop))












#pragma once













#pragma once













#pragma once




__pragma(pack(push, 8)) extern "C" {









    
     
    __declspec(dllimport) errno_t __cdecl _cgetws_s(
          wchar_t* _Buffer,
                                               size_t   _BufferCount,
                                              size_t*  _SizeRead
        );

    extern "C++" { template <size_t _Size> inline   errno_t __cdecl _cgetws_s(  wchar_t (&_Buffer)[_Size],   size_t* _SizeRead) throw() { return _cgetws_s(_Buffer, _Size, _SizeRead); } }

    
    __declspec(dllimport) int __cdecl _cputws(
          wchar_t const* _Buffer
        );

          __declspec(dllimport) wint_t __cdecl _getwch  (void);
          __declspec(dllimport) wint_t __cdecl _getwche (void);
     __declspec(dllimport) wint_t __cdecl _putwch  (  wchar_t _Character);
     __declspec(dllimport) wint_t __cdecl _ungetwch(  wint_t  _Character);

          __declspec(dllimport) wint_t __cdecl _getwch_nolock  (void);
          __declspec(dllimport) wint_t __cdecl _getwche_nolock (void);
     __declspec(dllimport) wint_t __cdecl _putwch_nolock  (  wchar_t _Character);
     __declspec(dllimport) wint_t __cdecl _ungetwch_nolock(  wint_t  _Character);



    
    
    
    
    
    
    __declspec(dllimport) int __cdecl __conio_common_vcwprintf(
                                             unsigned __int64 _Options,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
    __declspec(dllimport) int __cdecl __conio_common_vcwprintf_s(
                                             unsigned __int64 _Options,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
    __declspec(dllimport) int __cdecl __conio_common_vcwprintf_p(
                                             unsigned __int64 _Options,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
    __inline int __cdecl _vcwprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )



    {
        return __conio_common_vcwprintf((*__local_stdio_printf_options()), _Format, _Locale, _ArgList);
    }


    
    __inline int __cdecl _vcwprintf(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vcwprintf_l(_Format, 0, _ArgList);
    }


    
    __inline int __cdecl _vcwprintf_s_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )



    {
        return __conio_common_vcwprintf_s((*__local_stdio_printf_options()), _Format, _Locale, _ArgList);
    }


    
    __inline int __cdecl _vcwprintf_s(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vcwprintf_s_l(_Format, 0, _ArgList);
    }


    
    __inline int __cdecl _vcwprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )



    {
        return __conio_common_vcwprintf_p((*__local_stdio_printf_options()), _Format, _Locale, _ArgList);
    }


    
    __inline int __cdecl _vcwprintf_p(
            const wchar_t* const _Format,
                                      va_list              _ArgList
        )



    {
        return _vcwprintf_p_l(_Format, 0, _ArgList);
    }


    
    __inline int __cdecl _cwprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vcwprintf_l(_Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }


    
    __inline int __cdecl _cwprintf(
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vcwprintf_l(_Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }


    
    __inline int __cdecl _cwprintf_s_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vcwprintf_s_l(_Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }


    
    __inline int __cdecl _cwprintf_s(
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vcwprintf_s_l(_Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }


    
    __inline int __cdecl _cwprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vcwprintf_p_l(_Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }


    
    __inline int __cdecl _cwprintf_p(
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vcwprintf_p_l(_Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }




    
    
    
    
    
    
    __declspec(dllimport) int __cdecl __conio_common_vcwscanf(
                                            unsigned __int64 _Options,
            wchar_t const*   _Format,
                                        _locale_t        _Locale,
                                               va_list          _ArgList
        );

     __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vcwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __inline int __cdecl _vcwscanf_l(
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
                                               va_list              _ArgList
        )



    {
        return __conio_common_vcwscanf(
            (*__local_stdio_scanf_options ()),
            _Format, _Locale, _ArgList);
    }


     __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vcwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __inline int __cdecl _vcwscanf(
            wchar_t const* const _Format,
                                               va_list              _ArgList
        )



    {
        #pragma warning(push)
        #pragma warning(disable: 4996) 
        return _vcwscanf_l(_Format, 0, _ArgList);
        #pragma warning(pop)
    }


    
    __inline int __cdecl _vcwscanf_s_l(
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
                                               va_list              _ArgList
        )



    {
        return __conio_common_vcwscanf(
            (*__local_stdio_scanf_options ()) | (1ULL << 0),
            _Format, _Locale, _ArgList);
    }


    
    __inline int __cdecl _vcwscanf_s(
            wchar_t const* const _Format,
                                               va_list              _ArgList
        )



    {
        return _vcwscanf_s_l(_Format, 0, _ArgList);
    }


     __declspec(deprecated("This function or variable may be unsafe. Consider using " "_cwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __inline int __cdecl _cwscanf_l(
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

        #pragma warning(push)
        #pragma warning(disable: 4996) 
        _Result = _vcwscanf_l(_Format, _Locale, _ArgList);
        #pragma warning(pop)

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }


     __declspec(deprecated("This function or variable may be unsafe. Consider using " "_cwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    __inline int __cdecl _cwscanf(
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));

        #pragma warning(push)
        #pragma warning(disable: 4996) 
        _Result = _vcwscanf_l(_Format, 0, _ArgList);
        #pragma warning(pop)

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }


    
    __inline int __cdecl _cwscanf_s_l(
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Locale))) + ((sizeof(_Locale) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vcwscanf_s_l(_Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }


    
    __inline int __cdecl _cwscanf_s(
            wchar_t const* const _Format,
        ...)



    {
        int _Result;
        va_list _ArgList;
        ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(_ArgList = (va_list)(&const_cast<char&>(reinterpret_cast<const volatile char&>(_Format))) + ((sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1))))));
        _Result = _vcwscanf_s_l(_Format, 0, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }






} __pragma(pack(pop))










#pragma once



__pragma(pack(push, 8)) extern "C" {











    


        
    

    __declspec(dllimport) const unsigned short* __cdecl __pctype_func(void);
    __declspec(dllimport) const wctype_t*       __cdecl __pwctype_func(void);

    



        
        
    






















  __declspec(dllimport) int __cdecl iswalnum  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswalpha  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswascii  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswblank  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswcntrl  (  wint_t _C);


  __declspec(dllimport) int __cdecl iswdigit  (  wint_t _C);

  __declspec(dllimport) int __cdecl iswgraph  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswlower  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswprint  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswpunct  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswspace  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswupper  (  wint_t _C);
  __declspec(dllimport) int __cdecl iswxdigit (  wint_t _C);
  __declspec(dllimport) int __cdecl __iswcsymf(  wint_t _C);
  __declspec(dllimport) int __cdecl __iswcsym (  wint_t _C);

  __declspec(dllimport) int __cdecl _iswalnum_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswalpha_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswblank_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswcntrl_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswdigit_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswgraph_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswlower_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswprint_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswpunct_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswspace_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswupper_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswxdigit_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswcsymf_l (  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _iswcsym_l  (  wint_t _C,   _locale_t _Locale);


  __declspec(dllimport) wint_t __cdecl towupper(  wint_t _C);
  __declspec(dllimport) wint_t __cdecl towlower(  wint_t _C);
  __declspec(dllimport) int    __cdecl iswctype(  wint_t _C,   wctype_t _Type);

  __declspec(dllimport) wint_t __cdecl _towupper_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) wint_t __cdecl _towlower_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int    __cdecl _iswctype_l(  wint_t _C,   wctype_t _Type,   _locale_t _Locale);



      __declspec(dllimport) int __cdecl isleadbyte(  int _C);
      __declspec(dllimport) int __cdecl _isleadbyte_l(  int _C,   _locale_t _Locale);

    __declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "iswctype" " " "instead. See online help for details.")) __declspec(dllimport) int __cdecl is_wctype(  wint_t _C,   wctype_t _Type);























































































} __pragma(pack(pop))










#pragma once



__pragma(pack(push, 8)) extern "C" {






 
   
__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wgetcwd(
      wchar_t* _DstBuf,
                                  int      _SizeInWords
    );

 
   
__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wgetdcwd(
                                  int      _Drive,
      wchar_t* _DstBuf,
                                  int      _SizeInWords
    );






 
__declspec(dllimport) int __cdecl _wchdir(
      wchar_t const* _Path
    );

 
__declspec(dllimport) int __cdecl _wmkdir(
      wchar_t const* _Path
    );

 
__declspec(dllimport) int __cdecl _wrmdir(
      wchar_t const* _Path
    );



} __pragma(pack(pop))










#pragma once











#pragma once












    
    
    
    



__pragma(pack(push, 8)) extern "C" {



#pragma warning(push)
#pragma warning(disable:4820) 












    
    


typedef unsigned long _fsize_t;

struct _wfinddata32_t
{
    unsigned   attrib;
    __time32_t time_create;    
    __time32_t time_access;    
    __time32_t time_write;
    _fsize_t   size;
    wchar_t    name[260];
};

struct _wfinddata32i64_t
{
    unsigned   attrib;
    __time32_t time_create;    
    __time32_t time_access;    
    __time32_t time_write;
    __int64    size;
    wchar_t    name[260];
};

struct _wfinddata64i32_t
{
    unsigned   attrib;
    __time64_t time_create;    
    __time64_t time_access;    
    __time64_t time_write;
    _fsize_t   size;
    wchar_t    name[260];
};

struct _wfinddata64_t
{
    unsigned   attrib;
    __time64_t time_create;    
    __time64_t time_access;    
    __time64_t time_write;
    __int64    size;
    wchar_t    name[260];
};














    
    
    
    


 
__declspec(dllimport) int __cdecl _waccess(
      wchar_t const* _FileName,
        int            _AccessMode
    );


__declspec(dllimport) errno_t __cdecl _waccess_s(
      wchar_t const* _FileName,
        int            _AccessMode
    );

 
__declspec(dllimport) int __cdecl _wchmod(
      wchar_t const* _FileName,
        int            _Mode
    );

  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) int __cdecl _wcreat(
      wchar_t const* _FileName,
        int            _PermissionMode
    );

 
 
__declspec(dllimport) intptr_t __cdecl _wfindfirst32(
      wchar_t const*         _FileName,
       struct _wfinddata32_t* _FindData
    );

 
 
__declspec(dllimport) int __cdecl _wfindnext32(
       intptr_t               _FindHandle,
      struct _wfinddata32_t* _FindData
    );

__declspec(dllimport) int __cdecl _wunlink(
      wchar_t const* _FileName
    );

 
__declspec(dllimport) int __cdecl _wrename(
      wchar_t const* _OldFileName,
      wchar_t const* _NewFileName
    );

__declspec(dllimport) errno_t __cdecl _wmktemp_s(
      wchar_t* _TemplateName,
                                 size_t   _SizeInWords
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wmktemp_s(wchar_t (&_TemplateName)[_Size]) throw() { return _wmktemp_s(_TemplateName, _Size); } }

 
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wmktemp_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wmktemp( wchar_t *_TemplateName);

 
 
__declspec(dllimport) intptr_t __cdecl _wfindfirst32i64(
      wchar_t const*            _FileName,
       struct _wfinddata32i64_t* _FindData
    );

 
 
__declspec(dllimport) intptr_t __cdecl _wfindfirst64i32(
      wchar_t const*            _FileName,
       struct _wfinddata64i32_t* _FindData
    );

 
 
__declspec(dllimport) intptr_t __cdecl _wfindfirst64(
      wchar_t const*         _FileName,
       struct _wfinddata64_t* _FindData
    );

 
 
__declspec(dllimport) int __cdecl _wfindnext32i64(
       intptr_t                  _FindHandle,
      struct _wfinddata32i64_t* _FindData
    );

 
 
__declspec(dllimport) int __cdecl _wfindnext64i32(
       intptr_t                  _FindHandle,
      struct _wfinddata64i32_t* _FindData
    );

 
 
__declspec(dllimport) int __cdecl _wfindnext64(
       intptr_t               _FindHandle,
      struct _wfinddata64_t* _FindData
    );


__declspec(dllimport) errno_t __cdecl _wsopen_s(
       int*           _FileHandle,
      wchar_t const* _FileName,
        int            _OpenFlag,
        int            _ShareFlag,
        int            _PermissionFlag
    );

__declspec(dllimport) errno_t __cdecl _wsopen_dispatch(
      wchar_t const* _FileName,
        int            _OFlag,
        int            _ShFlag,
        int            _PMode,
       int*           _PFileHandle,
        int            _BSecure
    );





    
    extern "C++"   __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    inline int __cdecl _wopen(
          wchar_t const* _FileName,
            int            _OFlag,
            int            _PMode = 0
        )
    {
        int _FileHandle;
        
        errno_t const _Result = _wsopen_dispatch(_FileName, _OFlag, 0x40, _PMode, &_FileHandle, 0);
        return _Result ? -1 : _FileHandle;
    }

    extern "C++"   __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    inline int __cdecl _wsopen(
          wchar_t const* _FileName,
            int            _OFlag,
            int            _ShFlag,
            int            _PMode = 0
        )
    {
        int _FileHandle;
        
        errno_t const _Result = _wsopen_dispatch(_FileName, _OFlag, _ShFlag, _PMode, &_FileHandle, 0);
        return _Result ? -1 : _FileHandle;
    }





















#pragma warning(pop)



} __pragma(pack(pop))










#pragma once



__pragma(pack(push, 8)) extern "C" {


    


    __declspec(dllimport) intptr_t __cdecl _wexecl(
          wchar_t const* _FileName,
          wchar_t const* _ArgList,
        ...);

    __declspec(dllimport) intptr_t __cdecl _wexecle(
          wchar_t const* _FileName,
          wchar_t const* _ArgList,
        ...);

    __declspec(dllimport) intptr_t __cdecl _wexeclp(
          wchar_t const* _FileName,
          wchar_t const* _ArgList,
        ...);

    __declspec(dllimport) intptr_t __cdecl _wexeclpe(
          wchar_t const* _FileName,
          wchar_t const* _ArgList,
        ...);

    __declspec(dllimport) intptr_t __cdecl _wexecv(
          wchar_t const*        _FileName,
          wchar_t const* const* _ArgList
        );

    __declspec(dllimport) intptr_t __cdecl _wexecve(
              wchar_t const*        _FileName,
              wchar_t const* const* _ArgList,
          wchar_t const* const* _Env
        );

    __declspec(dllimport) intptr_t __cdecl _wexecvp(
          wchar_t const*        _FileName,
          wchar_t const* const* _ArgList
        );

    __declspec(dllimport) intptr_t __cdecl _wexecvpe(
              wchar_t const*        _FileName,
              wchar_t const* const* _ArgList,
          wchar_t const* const* _Env
        );

    __declspec(dllimport) intptr_t __cdecl _wspawnl(
            int            _Mode,
          wchar_t const* _FileName,
          wchar_t const* _ArgList,
        ...);

    __declspec(dllimport) intptr_t __cdecl _wspawnle(
            int            _Mode,
          wchar_t const* _FileName,
          wchar_t const* _ArgList,
        ...);

    __declspec(dllimport) intptr_t __cdecl _wspawnlp(
            int            _Mode,
          wchar_t const* _FileName,
          wchar_t const* _ArgList,
        ...);

    __declspec(dllimport) intptr_t __cdecl _wspawnlpe(
            int            _Mode,
          wchar_t const* _FileName,
          wchar_t const* _ArgList,
        ...);

    __declspec(dllimport) intptr_t __cdecl _wspawnv(
            int                   _Mode,
          wchar_t const*        _FileName,
          wchar_t const* const* _ArgList
        );

    __declspec(dllimport) intptr_t __cdecl _wspawnve(
                int                   _Mode,
              wchar_t const*        _FileName,
              wchar_t const* const* _ArgList,
          wchar_t const* const* _Env
        );

    __declspec(dllimport) intptr_t __cdecl _wspawnvp(
            int                   _Mode,
          wchar_t const*        _FileName,
          wchar_t const* const* _ArgList
        );

    __declspec(dllimport) intptr_t __cdecl _wspawnvpe(
                int                   _Mode,
              wchar_t const*        _FileName,
              wchar_t const* const* _ArgList,
          wchar_t const* const* _Env
        );

    __declspec(dllimport) int __cdecl _wsystem(
          wchar_t const* _Command
        );





} __pragma(pack(pop))













#pragma once



__pragma(pack(push, 8)) extern "C" {








struct tm
{
    int tm_sec;   
    int tm_min;   
    int tm_hour;  
    int tm_mday;  
    int tm_mon;   
    int tm_year;  
    int tm_wday;  
    int tm_yday;  
    int tm_isdst; 
};







  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wasctime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
 
 
__declspec(dllimport) wchar_t* __cdecl _wasctime(
      struct tm const* _Tm
    );

 

__declspec(dllimport) errno_t __cdecl _wasctime_s(
        wchar_t*         _Buffer,
                                          size_t           _SizeInWords,
                                                       struct tm const* _Tm
    );

extern "C++" { template <size_t _Size> inline   errno_t __cdecl _wasctime_s(  wchar_t (&_Buffer)[_Size],   struct tm const* _Time) throw() { return _wasctime_s(_Buffer, _Size, _Time); } }

 

__declspec(dllimport) size_t __cdecl wcsftime(
       wchar_t*         _Buffer,
                               size_t           _SizeInWords,
                             wchar_t const*   _Format,
                               struct tm const* _Tm
    );

 

__declspec(dllimport) size_t __cdecl _wcsftime_l(
       wchar_t*         _Buffer,
                               size_t           _SizeInWords,
                             wchar_t const*   _Format,
                               struct tm const* _Tm,
                           _locale_t        _Locale
    );

 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctime32_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) wchar_t* __cdecl _wctime32(
      __time32_t const* _Time
    );


__declspec(dllimport) errno_t __cdecl _wctime32_s(
        wchar_t*          _Buffer,
                                      size_t            _SizeInWords,
                                                       __time32_t const* _Time
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wctime32_s(  wchar_t (&_Buffer)[_Size],   __time32_t const* _Time) throw() { return _wctime32_s(_Buffer, _Size, _Time); } }

 
 
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctime64_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
__declspec(dllimport) wchar_t* __cdecl _wctime64(
      __time64_t const* _Time
    );


__declspec(dllimport) errno_t __cdecl _wctime64_s(
        wchar_t*          _Buffer,
                                      size_t            _SizeInWords,
                                                       __time64_t const* _Time);

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wctime64_s(  wchar_t (&_Buffer)[_Size],   __time64_t const* _Time) throw() { return _wctime64_s(_Buffer, _Size, _Time); } }


__declspec(dllimport) errno_t __cdecl _wstrdate_s(
        wchar_t* _Buffer,
                                      size_t   _SizeInWords
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wstrdate_s(  wchar_t (&_Buffer)[_Size]) throw() { return _wstrdate_s(_Buffer, _Size); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wstrdate_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport)  wchar_t* __cdecl _wstrdate( wchar_t *_Buffer);


__declspec(dllimport) errno_t __cdecl _wstrtime_s(
        wchar_t* _Buffer,
                                      size_t   _SizeInWords
    );

extern "C++" { template <size_t _Size> inline errno_t __cdecl _wstrtime_s(  wchar_t (&_Buffer)[_Size]) throw() { return _wstrtime_s(_Buffer, _Size); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wstrtime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport)  wchar_t* __cdecl _wstrtime( wchar_t *_Buffer);









    #pragma warning(push)
    #pragma warning(disable: 4996)

    




















         
        static __inline wchar_t * __cdecl _wctime(
              time_t const* const _Time)
        {
            return _wctime64(_Time);
        }

        
        static __inline errno_t __cdecl _wctime_s(
                  wchar_t*      const _Buffer,
                                                             size_t        const _SizeInWords,
                                                             time_t const* const _Time
            )
        {
            return _wctime64_s(_Buffer, _SizeInWords, _Time);
        }

    

    #pragma warning(pop)




} __pragma(pack(pop))









#pragma once










#pragma once




    

    typedef unsigned short _ino_t; 

    
        typedef _ino_t ino_t;
    





    

    typedef unsigned int _dev_t; 

    
        typedef _dev_t dev_t;
    





    

    typedef long _off_t; 

    
        typedef _off_t off_t;
    



__pragma(pack(push, 8)) extern "C" {



#pragma warning(push)
#pragma warning(disable:4820) 








struct _stat32
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    _off_t         st_size;
    __time32_t     st_atime;
    __time32_t     st_mtime;
    __time32_t     st_ctime;
};

struct _stat32i64
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    __int64        st_size;
    __time32_t     st_atime;
    __time32_t     st_mtime;
    __time32_t     st_ctime;
};

struct _stat64i32
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    _off_t         st_size;
    __time64_t     st_atime;
    __time64_t     st_mtime;
    __time64_t     st_ctime;
};

struct _stat64
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    __int64        st_size;
    __time64_t     st_atime;
    __time64_t     st_mtime;
    __time64_t     st_ctime;
};




    struct stat
    {
        _dev_t         st_dev;
        _ino_t         st_ino;
        unsigned short st_mode;
        short          st_nlink;
        short          st_uid;
        short          st_gid;
        _dev_t         st_rdev;
        _off_t         st_size;
        time_t         st_atime;
        time_t         st_mtime;
        time_t         st_ctime;
    };



















    
    
    
    
    
    
    

















    
    
    
    
    
    




__declspec(dllimport) int __cdecl _fstat32(
       int             _FileHandle,
      struct _stat32* _Stat
    );

__declspec(dllimport) int __cdecl _fstat32i64(
       int                _FileHandle,
      struct _stat32i64* _Stat
    );

__declspec(dllimport) int __cdecl _fstat64i32(
       int                _FileHandle,
      struct _stat64i32* _Stat
    );

__declspec(dllimport) int __cdecl _fstat64(
       int             _FileHandle,
      struct _stat64* _Stat
    );

__declspec(dllimport) int __cdecl _stat32(
      char const*     _FileName,
       struct _stat32* _Stat
    );

__declspec(dllimport) int __cdecl _stat32i64(
      char const*        _FileName,
       struct _stat32i64* _Stat
    );

__declspec(dllimport) int __cdecl _stat64i32(
      char const*        _FileName,
       struct _stat64i32* _Stat
    );

__declspec(dllimport) int __cdecl _stat64(
      char const*     _FileName,
       struct _stat64* _Stat
    );

__declspec(dllimport) int __cdecl _wstat32(
      wchar_t const*  _FileName,
       struct _stat32* _Stat
    );

__declspec(dllimport) int __cdecl _wstat32i64(
      wchar_t const*     _FileName,
       struct _stat32i64* _Stat
    );

__declspec(dllimport) int __cdecl _wstat64i32(
      wchar_t const*     _FileName,
       struct _stat64i32* _Stat
    );

__declspec(dllimport) int __cdecl _wstat64(
      wchar_t const*  _FileName,
       struct _stat64* _Stat
    );




    















        static __inline int __cdecl fstat(int const _FileHandle, struct stat* const _Stat)
        {
            typedef char __static_assert_t[(sizeof(struct stat) == sizeof(struct _stat64i32)) != 0];
            return _fstat64i32(_FileHandle, (struct _stat64i32*)_Stat);
        }
        static __inline int __cdecl stat(char const* const _FileName, struct stat* const _Stat)
        {
            typedef char __static_assert_t[(sizeof(struct stat) == sizeof(struct _stat64i32)) != 0];
            return _stat64i32(_FileName, (struct _stat64i32*)_Stat);
        }

    




#pragma warning(pop)



} __pragma(pack(pop))




__pragma(pack(push, 8)) extern "C" {








typedef wchar_t _Wint_t;




__declspec(dllimport) wchar_t* __cdecl _wsetlocale(
            int            _Category,
      wchar_t const* _Locale
    );


__declspec(dllimport) _locale_t __cdecl _wcreate_locale(
        int            _Category,
      wchar_t const* _Locale
    );



__declspec(dllimport) wint_t __cdecl btowc(
      int _Ch
    );

__declspec(dllimport) size_t __cdecl mbrlen(
        char const* _Ch,
                                                size_t      _SizeInBytes,
                                             mbstate_t*  _State
    );

__declspec(dllimport) size_t __cdecl mbrtowc(
                              wchar_t*    _DstCh,
        char const* _SrcCh,
                                                size_t      _SizeInBytes,
                                             mbstate_t*  _State
    );

 
__declspec(dllimport) errno_t __cdecl mbsrtowcs_s(
                              size_t*      _Retval,
              wchar_t*     _Dst,
                                   size_t       _Size,
                      char const** _PSrc,
                                   size_t       _N,
                                mbstate_t*   _State
    );

extern "C++" { template <size_t _Size> inline   errno_t __cdecl mbsrtowcs_s(  size_t* _Retval,   wchar_t (&_Dest)[_Size],     char const** _PSource,   size_t _Count,   mbstate_t* _State) throw() { return mbsrtowcs_s(_Retval, _Dest, _Size, _PSource, _Count, _State); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "mbsrtowcs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))  __declspec(dllimport) size_t __cdecl mbsrtowcs( wchar_t *_Dest,  char const** _PSrc,  size_t _Count,  mbstate_t* _State);

 
__declspec(dllimport) errno_t __cdecl wcrtomb_s(
                             size_t*    _Retval,
      char*      _Dst,
                                  size_t     _SizeInBytes,
                                  wchar_t    _Ch,
                           mbstate_t* _State
    );

extern "C++" { template <size_t _Size> inline   errno_t __cdecl wcrtomb_s(  size_t* _Retval,   char (&_Dest)[_Size],   wchar_t _Source,   mbstate_t* _State) throw() { return wcrtomb_s(_Retval, _Dest, _Size, _Source, _State); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcrtomb_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl wcrtomb(  char *_Dest,  wchar_t _Source,  mbstate_t* _State);

 
__declspec(dllimport) errno_t __cdecl wcsrtombs_s(
                                              size_t*         _Retval,
      char*           _Dst,
                                                   size_t          _SizeInBytes,
                                wchar_t const** _Src,
                                                   size_t          _Size,
                                            mbstate_t*      _State
    );

extern "C++" { template <size_t _Size> inline   errno_t __cdecl wcsrtombs_s(  size_t* _Retval,   char (&_Dest)[_Size],     wchar_t const** _PSrc,   size_t _Count,   mbstate_t* _State) throw() { return wcsrtombs_s(_Retval, _Dest, _Size, _PSrc, _Count, _State); } }

__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsrtombs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl wcsrtombs(  char *_Dest,  wchar_t const** _PSource,  size_t _Count,  mbstate_t* _State);

__declspec(dllimport) int __cdecl wctob(
      wint_t _WCh
    );





    

         
        errno_t __cdecl wmemcpy_s(
              wchar_t*       _S1,
                                      rsize_t        _N1,
                        wchar_t const* _S2,
                                      rsize_t        _N
            );

         
        errno_t __cdecl wmemmove_s(
              wchar_t*       _S1,
                                      rsize_t        _N1,
                        wchar_t const* _S2,
                                      rsize_t        _N
            );

    

    __inline int __cdecl fwide(
          FILE* _F,
              int   _M
        )
    {
        (void)_F;
        return (_M);
    }

    __inline int __cdecl mbsinit(
          mbstate_t const* _P
        )
    {
        return _P == 0 || _P->_Wchar == 0;
    }

    __inline wchar_t const* __cdecl wmemchr(
          wchar_t const* _S,
                    wchar_t        _C,
                    size_t         _N
        )
    {
        for (; 0 < _N; ++_S, --_N)
            if (*_S == _C)
                return (wchar_t const*)_S;

        return 0;
    }

    __inline int __cdecl wmemcmp(
          wchar_t const* _S1,
          wchar_t const* _S2,
                    size_t         _N
        )
    {
        for (; 0 < _N; ++_S1, ++_S2, --_N)
            if (*_S1 != *_S2)
                return *_S1 < *_S2 ? -1 : 1;

        return 0;
    }

     
    
    __inline 
    wchar_t* __cdecl wmemcpy(
          wchar_t*       _S1,
                wchar_t const* _S2,
                          size_t         _N
        )
    {
        #pragma warning(push)
        #pragma warning(disable : 4995 4996 6386)
        return (wchar_t*)memcpy(_S1, _S2, _N*sizeof(wchar_t));
        #pragma warning(pop)
    }

    __inline 
    wchar_t* __cdecl wmemmove(
          wchar_t*       _S1,
                wchar_t const* _S2,
                              size_t         _N
        )
    {
        #pragma warning(push)
        #pragma warning(disable : 4996 6386)
        return (wchar_t*)memmove(_S1, _S2, _N*sizeof(wchar_t));
        #pragma warning(pop)
    }

     
    
    __inline wchar_t* __cdecl wmemset(
          wchar_t* _S,
                          wchar_t  _C,
                          size_t   _N
        )
    {
        wchar_t *_Su = _S;
        for (; 0 < _N; ++_Su, --_N)
        {
            *_Su = _C;
        }
        return _S;
    }

    

        extern "C++" inline wchar_t* __cdecl wmemchr(
              wchar_t* _S,
                        wchar_t  _C,
                        size_t   _N
            )
        {
            wchar_t const* const _SC = _S;
            return const_cast<wchar_t*>(wmemchr(_SC, _C, _N));
        }

    





} __pragma(pack(pop))


typedef mbstate_t _Mbstatet;

 
namespace std {
using :: _Mbstatet;

using :: mbstate_t; using :: size_t; using :: tm; using :: wint_t;

using :: btowc; using :: fgetwc; using :: fgetws; using :: fputwc;
using :: fputws; using :: fwide; using :: fwprintf;
using :: fwscanf; using :: getwc; using :: getwchar;
using :: mbrlen; using :: mbrtowc; using :: mbsrtowcs;
using :: mbsinit; using :: putwc; using :: putwchar;
using :: swprintf; using :: swscanf; using :: ungetwc;
using :: vfwprintf; using :: vswprintf; using :: vwprintf;
using :: wcrtomb; using :: wprintf; using :: wscanf;
using :: wcsrtombs; using :: wcstol; using :: wcscat;
using :: wcschr; using :: wcscmp; using :: wcscoll;
using :: wcscpy; using :: wcscspn; using :: wcslen;
using :: wcsncat; using :: wcsncmp; using :: wcsncpy;
using :: wcspbrk; using :: wcsrchr; using :: wcsspn;
using :: wcstod; using :: wcstoul; using :: wcsstr;
using :: wcstok; using :: wcsxfrm; using :: wctob;
using :: wmemchr; using :: wmemcmp; using :: wmemcpy;
using :: wmemmove; using :: wmemset; using :: wcsftime;

using :: vfwscanf; using :: vswscanf; using :: vwscanf;
using :: wcstof; using :: wcstold;
using :: wcstoll; using :: wcstoull;
}
 










 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {















 

 
 
 
 

 
 
 
 

 
 
 
 

		
typedef enum
	{	
	denorm_indeterminate = -1,
	denorm_absent = 0,
	denorm_present = 1}
		float_denorm_style;

		
typedef enum
	{	
	round_indeterminate = -1,
	round_toward_zero = 0,
	round_to_nearest = 1,
	round_toward_infinity = 2,
	round_toward_neg_infinity = 3}
		float_round_style;

		
struct _Num_base
	{	
	static constexpr float_denorm_style has_denorm = (float_denorm_style)(denorm_absent);
	static constexpr bool has_denorm_loss = (bool)(false);
	static constexpr bool has_infinity = (bool)(false);
	static constexpr bool has_quiet_NaN = (bool)(false);
	static constexpr bool has_signaling_NaN = (bool)(false);
	static constexpr bool is_bounded = (bool)(false);
	static constexpr bool is_exact = (bool)(false);
	static constexpr bool is_iec559 = (bool)(false);
	static constexpr bool is_integer = (bool)(false);
	static constexpr bool is_modulo = (bool)(false);
	static constexpr bool is_signed = (bool)(false);
	static constexpr bool is_specialized = (bool)(false);
	static constexpr bool tinyness_before = (bool)(false);
	static constexpr bool traps = (bool)(false);
	static constexpr float_round_style round_style = (float_round_style)(round_toward_zero);
	static constexpr int digits = (int)(0);
	static constexpr int digits10 = (int)(0);

	static constexpr int max_digits10 = (int)(0);

	static constexpr int max_exponent = (int)(0);
	static constexpr int max_exponent10 = (int)(0);
	static constexpr int min_exponent = (int)(0);
	static constexpr int min_exponent10 = (int)(0);
	static constexpr int radix = (int)(0);
	};

		
template<class _Ty>
	class numeric_limits
		: public _Num_base
	{	
public:
	static constexpr _Ty (min)() noexcept
		{	
		return (_Ty());
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (_Ty());
		}

	static constexpr _Ty lowest() noexcept
		{	
		return (_Ty());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (_Ty());
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (_Ty());
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (_Ty());
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (_Ty());
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (_Ty());
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (_Ty());
		}
	};

template<class _Ty>
	class numeric_limits<const _Ty>
		: public numeric_limits<_Ty>
	{	
	};

template<class _Ty>
	class numeric_limits<volatile _Ty>
		: public numeric_limits<_Ty>
	{	
	};

template<class _Ty>
	class numeric_limits<const volatile _Ty>
		: public numeric_limits<_Ty>
	{	
	};

		
struct _Num_int_base
	: public _Num_base
	{	
	static constexpr bool is_bounded = (bool)(true);
	static constexpr bool is_exact = (bool)(true);
	static constexpr bool is_integer = (bool)(true);
	static constexpr bool is_modulo = (bool)(true);
	static constexpr bool is_specialized = (bool)(true);
	static constexpr int radix = (int)(2);
	};

		
struct _Num_float_base
	: public _Num_base
	{	
	static constexpr float_denorm_style has_denorm = (float_denorm_style)(denorm_present);
	static constexpr bool has_denorm_loss = (bool)(true);
	static constexpr bool has_infinity = (bool)(true);
	static constexpr bool has_quiet_NaN = (bool)(true);
	static constexpr bool has_signaling_NaN = (bool)(true);
	static constexpr bool is_bounded = (bool)(true);
	static constexpr bool is_exact = (bool)(false);
	static constexpr bool is_iec559 = (bool)(true);
	static constexpr bool is_integer = (bool)(false);
	static constexpr bool is_modulo = (bool)(false);
	static constexpr bool is_signed = (bool)(true);
	static constexpr bool is_specialized = (bool)(true);
	static constexpr bool tinyness_before = (bool)(true);
	static constexpr bool traps = (bool)(false);
	static constexpr float_round_style round_style = (float_round_style)(round_to_nearest);
	static constexpr int radix = (int)(2);
	};

		
template<> class numeric_limits<char>
	: public _Num_int_base
	{	
public:
	typedef char _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return ((-128));
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (127);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)((-128) != 0);
	static constexpr int digits = (int)(8 - ((-128) != 0 ? 1 : 0));
	static constexpr int digits10 = (int)((8 - ((-128) != 0 ? 1 : 0)) * 301L / 1000);
	};

		
template<> class numeric_limits<wchar_t>
	: public _Num_int_base
	{	
public:
	typedef wchar_t _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return ((_Ty)0x0000);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return ((_Ty)0xffff);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(0x0000 != 0);
	static constexpr int digits = (int)(8 * sizeof (wchar_t) - (0x0000 != 0 ? 1 : 0));
	static constexpr int digits10 = (int)((8 * sizeof (wchar_t) - (0x0000 != 0 ? 1 : 0)) * 301L / 1000);
	};

		
template<> class numeric_limits<bool>
	: public _Num_int_base
	{	
public:
	typedef bool _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (false);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (true);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_modulo = (bool)(false);
	static constexpr bool is_signed = (bool)(false);
	static constexpr int digits = (int)(1);
	static constexpr int digits10 = (int)(0);
	};

		
template<> class numeric_limits<signed char>
	: public _Num_int_base
	{	
public:
	typedef signed char _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return ((-128));
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (127);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(true);
	static constexpr int digits = (int)(8 - 1);
	static constexpr int digits10 = (int)((8 - 1) * 301L / 1000);
	};

		
template<> class numeric_limits<unsigned char>
	: public _Num_int_base
	{	
public:
	typedef unsigned char _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (0);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (0xff);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(false);
	static constexpr int digits = (int)(8);
	static constexpr int digits10 = (int)(8 * 301L / 1000);
	};

		
template<> class numeric_limits<short>
	: public _Num_int_base
	{	
public:
	typedef short _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return ((-32768));
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (32767);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(true);
	static constexpr int digits = (int)(8 * sizeof (short) - 1);
	static constexpr int digits10 = (int)((8 * sizeof (short) - 1) * 301L / 1000);
	};

 
		
template<> class numeric_limits<unsigned short>
	: public _Num_int_base
	{	
public:
	typedef unsigned short _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (0);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (0xffff);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(false);
	static constexpr int digits = (int)(8 * sizeof (unsigned short));
	static constexpr int digits10 = (int)(8 * sizeof (unsigned short) * 301L / 1000);
	};
 

		
template<> class numeric_limits<char16_t>
	: public _Num_int_base
	{	
public:
	typedef char16_t _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (0);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (0xffff);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(false);
	static constexpr int digits = (int)(8 * sizeof (char16_t));
	static constexpr int digits10 = (int)(8 * sizeof (char16_t) * 301L / 1000);
	};

		
template<> class numeric_limits<int>
	: public _Num_int_base
	{	
public:
	typedef int _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return ((-2147483647 - 1));
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (2147483647);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(true);
	static constexpr int digits = (int)(8 * sizeof (int) - 1);
	static constexpr int digits10 = (int)((8 * sizeof (int) - 1) * 301L / 1000);
	};

		
template<> class numeric_limits<unsigned int>
	: public _Num_int_base
	{	
public:
	typedef unsigned int _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (0);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (0xffffffff);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(false);
	static constexpr int digits = (int)(8 * sizeof (unsigned int));
	static constexpr int digits10 = (int)(8 * sizeof (unsigned int) * 301L / 1000);
	};

		
template<> class numeric_limits<long>
	: public _Num_int_base
	{	
public:
	typedef long _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return ((-2147483647L - 1));
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (2147483647L);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(true);
	static constexpr int digits = (int)(8 * sizeof (long) - 1);
	static constexpr int digits10 = (int)((8 * sizeof (long) - 1) * 301L / 1000);
	};

		
template<> class numeric_limits<unsigned long>
	: public _Num_int_base
	{	
public:
	typedef unsigned long _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (0);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (0xffffffffUL);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(false);
	static constexpr int digits = (int)(8 * sizeof (unsigned long));
	static constexpr int digits10 = (int)(8 * sizeof (unsigned long) * 301L / 1000);
	};

		
template<> class numeric_limits<char32_t>
	: public _Num_int_base
	{	
public:
	typedef char32_t _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (0);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (0xffffffff);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(false);
	static constexpr int digits = (int)(8 * sizeof (char32_t));
	static constexpr int digits10 = (int)(8 * sizeof (char32_t) * 301L / 1000);
	};

		
template<> class numeric_limits<long long>
	: public _Num_int_base
	{	
public:
	typedef long long _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return ((-9223372036854775807i64 - 1));
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (9223372036854775807i64);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(true);
	static constexpr int digits = (int)(8 * sizeof (long long) - 1);
	static constexpr int digits10 = (int)((8 * sizeof (long long) - 1) * 301L / 1000);
	};

		
template<> class numeric_limits<unsigned long long>
	: public _Num_int_base
	{	
public:
	typedef unsigned long long _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (0);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (0xffffffffffffffffui64);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return ((min)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (0);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (0);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (0);
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (0);
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (0);
		}

	static constexpr bool is_signed = (bool)(false);
	static constexpr int digits = (int)(8 * sizeof (unsigned long long));
	static constexpr int digits10 = (int)(8 * sizeof (unsigned long long) * 301L / 1000);
	};

		
template<> class numeric_limits<float>
	: public _Num_float_base
	{	
public:
	typedef float _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (1.175494351e-38F);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (3.402823466e+38F);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return (-(max)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (1.192092896e-07F);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0.5F);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (1.401298464e-45F);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (__builtin_huge_valf());
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (__builtin_nanf("0"));
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (__builtin_nansf("1"));
		}

	static constexpr int digits = (int)(24);
	static constexpr int digits10 = (int)(6);

	static constexpr int max_digits10 = (int)(2 + 24 * 301L / 1000);

	static constexpr int max_exponent = (int)((int)128);
	static constexpr int max_exponent10 = (int)((int)38);
	static constexpr int min_exponent = (int)((int)(-125));
	static constexpr int min_exponent10 = (int)((int)(-37));
	};

		
template<> class numeric_limits<double>
	: public _Num_float_base
	{	
public:
	typedef double _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (2.2250738585072014e-308);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (1.7976931348623158e+308);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return (-(max)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (2.2204460492503131e-016);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0.5);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (4.9406564584124654e-324);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (__builtin_huge_val());
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (__builtin_nan("0"));
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (__builtin_nans("1"));
		}

	static constexpr int digits = (int)(53);
	static constexpr int digits10 = (int)(15);

	static constexpr int max_digits10 = (int)(2 + 53 * 301L / 1000);

	static constexpr int max_exponent = (int)((int)1024);
	static constexpr int max_exponent10 = (int)((int)308);
	static constexpr int min_exponent = (int)((int)(-1021));
	static constexpr int min_exponent10 = (int)((int)(-307));
	};

		
template<> class numeric_limits<long double>
	: public _Num_float_base
	{	
public:
	typedef long double _Ty;

	static constexpr _Ty (min)() noexcept
		{	
		return (2.2250738585072014e-308);
		}

	static constexpr _Ty (max)() noexcept
		{	
		return (1.7976931348623158e+308);
		}

	static constexpr _Ty lowest() noexcept
		{	
		return (-(max)());
		}

	static constexpr _Ty epsilon() noexcept
		{	
		return (2.2204460492503131e-016);
		}

	static constexpr _Ty round_error() noexcept
		{	
		return (0.5L);
		}

	static constexpr _Ty denorm_min() noexcept
		{	
		return (4.9406564584124654e-324);
		}

	static constexpr _Ty infinity() noexcept
		{	
		return (__builtin_huge_val());
		}

	static constexpr _Ty quiet_NaN() noexcept
		{	
		return (__builtin_nan("0"));
		}

	static constexpr _Ty signaling_NaN() noexcept
		{	
		return (__builtin_nans("1"));
		}

	static constexpr int digits = (int)(53);
	static constexpr int digits10 = (int)(15);

	static constexpr int max_digits10 = (int)(2 + 53 * 301L / 1000);

	static constexpr int max_exponent = (int)((int)1024);
	static constexpr int max_exponent10 = (int)((int)308);
	static constexpr int min_exponent = (int)((int)(-1021));
	static constexpr int min_exponent10 = (int)((int)(-307));
	};

  











































































































































































































 
 
 
 

 
 
 
 

 
 
 
 
}
 
 #pragma warning(pop)
 #pragma pack(pop)











#pragma once












#pragma once




































































































































































































































































































































extern "C++" {

#pragma pack(push, 8)

#pragma warning(push)
#pragma warning(disable: 4985) 






    namespace std
    {
        struct nothrow_t { };

        


            extern nothrow_t const nothrow;
        
    }


   
__declspec(allocator) void* __cdecl operator new(
    size_t _Size
    );

     
__declspec(allocator) void* __cdecl operator new(
    size_t                _Size,
    std::nothrow_t const&
    ) throw();

   
__declspec(allocator) void* __cdecl operator new[](
    size_t _Size
    );

     
__declspec(allocator) void* __cdecl operator new[](
    size_t                _Size,
    std::nothrow_t const&
    ) throw();

void __cdecl operator delete(
    void* _Block
    ) throw();

void __cdecl operator delete(
    void* _Block,
    std::nothrow_t const&
    ) throw();

void __cdecl operator delete[](
    void* _Block
    ) throw();

void __cdecl operator delete[](
    void* _Block,
    std::nothrow_t const&
    ) throw();

void __cdecl operator delete(
    void*  _Block,
    size_t _Size
    ) throw();

void __cdecl operator delete[](
    void* _Block,
    size_t _Size
    ) throw();


    
       
    inline void* __cdecl operator new(size_t _Size,   void* _Where) throw()
    {
        (void)_Size;
        return _Where;
    }

    inline void __cdecl operator delete(void*, void*) throw()
    {
        return;
    }



    
       
    inline void* __cdecl operator new[](size_t _Size,   void* _Where) throw()
    {
        (void)_Size;
        return _Where;
    }

    inline void __cdecl operator delete[](void*, void*) throw()
    {
    }




#pragma warning(pop)
#pragma pack(pop)

} 



 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 

  



namespace std {

		
 

typedef void (__cdecl * new_handler) ();
 

		
__declspec(dllimport) new_handler __cdecl set_new_handler(  new_handler)
	noexcept;	

__declspec(dllimport) new_handler __cdecl get_new_handler()
	noexcept;	
}

 
 #pragma warning(pop)
 #pragma pack(pop)











#pragma once







#pragma once






#pragma once
















#pragma once











#pragma once




extern "C++" {

#pragma pack(push, 8)






         
    __declspec(allocator) void* __cdecl operator new(
            size_t      _Size,
            int         _BlockUse,
          char const* _FileName,
            int         _LineNumber
        );

         
    __declspec(allocator) void* __cdecl operator new[](
            size_t      _Size,
            int         _BlockUse,
          char const* _FileName,
            int         _LineNumber
        );

    void __cdecl operator delete(
        void*       _Block,
        int         _BlockUse,
        char const* _FileName,
        int         _LineNumber
        ) throw();

    void __cdecl operator delete[](
        void*       _Block,
        int         _BlockUse,
        char const* _FileName,
        int         _LineNumber
        ) throw();





#pragma pack(pop)

} 



__pragma(pack(push, 8)) extern "C" {



typedef void* _HFILE; 

























typedef int (__cdecl* _CRT_REPORT_HOOK )(int, char*,    int*);
typedef int (__cdecl* _CRT_REPORT_HOOKW)(int, wchar_t*, int*);





typedef int (__cdecl* _CRT_ALLOC_HOOK)(int, void*, size_t, int, long, unsigned char const*, int);























































typedef void (__cdecl* _CRT_DUMP_CLIENT)(void*, size_t);





struct _CrtMemBlockHeader;

typedef struct _CrtMemState
{
    struct _CrtMemBlockHeader* pBlockHeader;
    size_t lCounts[5];
    size_t lSizes[5];
    size_t lHighWaterCount;
    size_t lTotalCount;
} _CrtMemState;



    
    

    
    

    
    
    
    
    
    
    
    
    
    
    
    
    



































































































    
    
    
    
    
    
    

    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    





























































































































































































































































































































    
    
    
    
    
    
    





























































































    

    
        
    

    
        
    

    
        
    

    
    

    
    

    
    

    
    


























































    




























} __pragma(pack(pop))



 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		

typedef long long streamoff;
typedef long long streamsize;

  



extern __declspec(dllimport)  const streamoff _BADOFF;
  

		
template<class _Statetype>
	class fpos
	{	
	typedef fpos<_Statetype> _Myt;

public:
	 fpos(streamoff _Off = 0)
		: _Myoff(_Off), _Fpos(0), _Mystate()
		{	
		}

	 fpos(_Statetype _State, fpos_t _Fileposition)
		: _Myoff(0), _Fpos(_Fileposition), _Mystate(_State)
		{	
		}

	_Statetype  state() const
		{	
		return (_Mystate);
		}

	void  state(_Statetype _State)
		{	
		_Mystate = _State;
		}

	fpos_t  seekpos() const
		{	
		return (_Fpos);
		}

	 operator streamoff() const
		{	
		return (_Myoff + _Fpos);
		}

	streamoff  operator-(const _Myt& _Right) const
		{	
		return ((streamoff)*this - (streamoff)_Right);
		}

	_Myt&  operator+=(streamoff _Off)
		{	
		_Myoff += _Off;
		return (*this);
		}

	_Myt&  operator-=(streamoff _Off)
		{	
		_Myoff -= _Off;
		return (*this);
		}

	_Myt  operator+(streamoff _Off) const
		{	
		_Myt _Tmp = *this;
		return (_Tmp += _Off);
		}

	_Myt  operator-(streamoff _Off) const
		{	
		_Myt _Tmp = *this;
		return (_Tmp -= _Off);
		}

	bool  operator==(const _Myt& _Right) const
		{	
		return ((streamoff)*this == (streamoff)_Right);
		}

	bool  operator==(streamoff _Right) const
		{	
		return ((streamoff)*this == _Right);
		}

	bool  operator!=(const _Myt& _Right) const
		{	
		return (!(*this == _Right));
		}

private:
	streamoff _Myoff;	
	fpos_t _Fpos;	
	_Statetype _Mystate;	
	};

 

 
 

typedef fpos<_Mbstatet> streampos;

typedef streampos wstreampos;

		
template<class _Elem,
	class _Int_type>
	struct _Char_traits
	{	
	typedef _Elem char_type;
	typedef _Int_type int_type;
	typedef streampos pos_type;
	typedef streamoff off_type;
	typedef _Mbstatet state_type;

	static int __cdecl compare(  const _Elem * _First1,
		  const _Elem * _First2, size_t _Count) noexcept 
		{	
		for (; 0 < _Count; --_Count, ++_First1, ++_First2)
			if (!eq(*_First1, *_First2))
				return (lt(*_First1, *_First2) ? -1 : +1);
		return (0);
		}

	static size_t __cdecl length(  const _Elem * _First) noexcept 
		{	
		size_t _Count;
		for (_Count = 0; !eq(*_First, _Elem()); ++_First)
			++_Count;
		return (_Count);
		}

	static _Elem * __cdecl copy(  _Elem * const _First1,
		  const _Elem * _First2, size_t _Count) noexcept 
		{	
		_Elem * _Next = _First1;
		for (; 0 < _Count; --_Count, ++_Next, ++_First2)
			assign(*_Next, *_First2);
		return (_First1);
		}

	  static _Elem * __cdecl _Copy_s(
		  _Elem * const _First1, const size_t _Dest_size,
		  const _Elem * const _First2, const size_t _Count) noexcept
		{	
		{ if (!(_Count <= _Dest_size)) { ((void)0); ::_invalid_parameter_noinfo_noreturn(); return (0); } };
		return (copy(_First1, _First2, _Count));
		}

	static const _Elem * __cdecl find(  const _Elem * _First,
		size_t _Count, const _Elem& _Ch) noexcept 
		{	
		for (; 0 < _Count; --_Count, ++_First)
			if (eq(*_First, _Ch))
				return (_First);
		return (0);
		}

	static _Elem * __cdecl move(  _Elem * const _First1,
		  const _Elem * _First2, size_t _Count) noexcept 
		{	
		_Elem * _Next = _First1;
		if (_First2 < _Next && _Next < _First2 + _Count)
			for (_Next += _Count, _First2 += _Count; 0 < _Count; --_Count)
				assign(*--_Next, *--_First2);
		else
			for (; 0 < _Count; --_Count, ++_Next, ++_First2)
				assign(*_Next, *_First2);
		return (_First1);
		}

	static _Elem * __cdecl assign(  _Elem * const _First,
		size_t _Count, const _Elem _Ch) noexcept 
		{	
		_Elem * _Next = _First;
		for (; 0 < _Count; --_Count, ++_Next)
			assign(*_Next, _Ch);
		return (_First);
		}

	static void __cdecl assign(_Elem& _Left, const _Elem& _Right) noexcept
		{	
		_Left = _Right;
		}

	static constexpr bool __cdecl eq(const _Elem& _Left, const _Elem& _Right) noexcept
		{	
		return (_Left == _Right);
		}

	static constexpr bool __cdecl lt(const _Elem& _Left, const _Elem& _Right) noexcept
		{	
		return (_Left < _Right);
		}

	static constexpr _Elem __cdecl to_char_type(const int_type& _Meta) noexcept
		{	
		return ((_Elem)_Meta);
		}

	static constexpr int_type __cdecl to_int_type(const _Elem& _Ch) noexcept
		{	
		return ((int_type)_Ch);
		}

	static constexpr bool __cdecl eq_int_type(const int_type& _Left, const int_type& _Right) noexcept
		{	
		return (_Left == _Right);
		}

	static constexpr int_type __cdecl not_eof(const int_type& _Meta) noexcept
		{	
		return (_Meta != eof() ? _Meta : !eof());
		}

	static constexpr int_type __cdecl eof() noexcept
		{	
		return ((int_type)(-1));
		}
	};

		
template<class _Elem>
	struct char_traits
		: public _Char_traits<_Elem, long>
	{	
	};

		
template<>
	struct char_traits<char16_t>
	: public _Char_traits<char16_t, unsigned short>
	{	
	};

typedef streampos u16streampos;

		
template<>
	struct char_traits<char32_t>
	: public _Char_traits<char32_t, unsigned int>
	{	
	};

typedef streampos u32streampos;

		
template<>
	struct char_traits<wchar_t>
	{	
	typedef wchar_t _Elem;
	typedef _Elem char_type;	
	typedef wint_t int_type;
	typedef streampos pos_type;
	typedef streamoff off_type;
	typedef _Mbstatet state_type;

	static int __cdecl compare(  const _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return (:: wmemcmp(_First1, _First2, _Count));
		}

	static size_t __cdecl length(  const _Elem * const _First) noexcept 
		{	
		return (:: wcslen(_First));
		}

	static _Elem * __cdecl copy(  _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return ((_Elem *):: wmemcpy(_First1, _First2, _Count));
		}

	  static _Elem * __cdecl _Copy_s(
		  _Elem * const _First1, const size_t _Size_in_words,
		  const _Elem * const _First2, const size_t _Count) noexcept
		{	
		::wmemcpy_s((_First1), (_Size_in_words), (_First2), (_Count));
		return (_First1);
		}

	static const _Elem * __cdecl find(  const _Elem * const _First,
		const size_t _Count, const _Elem& _Ch) noexcept 
		{	
		return ((const _Elem *):: wmemchr(_First, _Ch, _Count));
		}

	static _Elem * __cdecl move(  _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return ((_Elem *):: wmemmove(_First1, _First2, _Count));
		}

	static _Elem * __cdecl assign(  _Elem * const _First,
		const size_t _Count, const _Elem _Ch) noexcept 
		{	
		return ((_Elem *):: wmemset(_First, _Ch, _Count));
		}

	static void __cdecl assign(_Elem& _Left, const _Elem& _Right) noexcept
		{	
		_Left = _Right;
		}

	static constexpr bool __cdecl eq(const _Elem& _Left, const _Elem& _Right) noexcept
		{	
		return (_Left == _Right);
		}

	static constexpr bool __cdecl lt(const _Elem& _Left, const _Elem& _Right) noexcept
		{	
		return (_Left < _Right);
		}

	static constexpr _Elem __cdecl to_char_type(const int_type& _Meta) noexcept
		{	
		return (_Meta);
		}

	static constexpr int_type __cdecl to_int_type(const _Elem& _Ch) noexcept
		{	
		return (_Ch);
		}

	static constexpr bool __cdecl eq_int_type(const int_type& _Left, const int_type& _Right) noexcept
		{	
		return (_Left == _Right);
		}

	static constexpr int_type __cdecl not_eof(const int_type& _Meta) noexcept
		{	
		return (_Meta != eof() ? _Meta : !eof());
		}

	static constexpr int_type __cdecl eof() noexcept
		{	
		return (((wint_t)(0xFFFF)));
		}
	};

 
		
template<>
	struct char_traits<unsigned short>
	{	
	typedef unsigned short _Elem;
	typedef _Elem char_type;	
	typedef wint_t int_type;
	typedef streampos pos_type;
	typedef streamoff off_type;
	typedef _Mbstatet state_type;

	static int __cdecl compare(  const _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return (:: wmemcmp((const wchar_t *)_First1, (const wchar_t *)_First2, _Count));
		}

	static size_t __cdecl length(  const _Elem * _First) noexcept 
		{	
		return (:: wcslen((const wchar_t *)_First));
		}

	static _Elem * __cdecl copy(  _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return ((_Elem *):: wmemcpy((wchar_t *)_First1, (const wchar_t *)_First2, _Count));
		}

	  static _Elem * __cdecl _Copy_s(
		  _Elem * const _First1, const size_t _Size_in_words,
		  const _Elem * const _First2, const size_t _Count) noexcept
		{	
		::wmemcpy_s(((wchar_t *)_First1), (_Size_in_words), ((const wchar_t *)_First2), (_Count));
		return (_First1);
		}

	static const _Elem * __cdecl find(  const _Elem * _First,
		const size_t _Count, const _Elem& _Ch) noexcept 
		{	
		return ((const _Elem *):: wmemchr((const wchar_t *)_First, _Ch, _Count));
		}

	static _Elem * __cdecl move(  _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return ((_Elem *):: wmemmove((wchar_t *)_First1, (const wchar_t *)_First2, _Count));
		}

	static _Elem * __cdecl assign(  _Elem * const _First, size_t _Count,
		_Elem _Ch) noexcept 
		{	
		return ((_Elem *):: wmemset((wchar_t *)_First, _Ch, _Count));
		}

	static void __cdecl assign(_Elem& _Left, const _Elem& _Right) noexcept
		{	
		_Left = _Right;
		}

	static constexpr bool __cdecl eq(const _Elem& _Left, const _Elem& _Right) noexcept
		{	
		return (_Left == _Right);
		}

	static constexpr bool __cdecl lt(const _Elem& _Left, const _Elem& _Right) noexcept
		{	
		return (_Left < _Right);
		}

	static constexpr _Elem __cdecl to_char_type(const int_type& _Meta) noexcept
		{	
		return (_Meta);
		}

	static constexpr int_type __cdecl to_int_type(const _Elem& _Ch) noexcept
		{	
		return (_Ch);
		}

	static constexpr bool __cdecl eq_int_type(const int_type& _Left, const int_type& _Right) noexcept
		{	
		return (_Left == _Right);
		}

	static constexpr int_type __cdecl not_eof(const int_type& _Meta) noexcept
		{	
		return (_Meta != eof() ? _Meta : !eof());
		}

	static constexpr int_type __cdecl eof() noexcept
		{	
		return (((wint_t)(0xFFFF)));
		}
	};
 

		
template<> struct char_traits<char>
	{	
	typedef char _Elem;
	typedef _Elem char_type;
	typedef int int_type;
	typedef streampos pos_type;
	typedef streamoff off_type;
	typedef _Mbstatet state_type;

	static int __cdecl compare(  const _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return (:: memcmp(_First1, _First2, _Count));
		}

	static size_t __cdecl length(  const _Elem * const _First) noexcept 
		{	
		return (:: strlen(_First));
		}

	static _Elem * __cdecl copy(  _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return ((_Elem *):: memcpy(_First1, _First2, _Count));
		}

	  static _Elem * __cdecl _Copy_s(
		  _Elem * const _First1, const size_t _Size_in_bytes,
		  const _Elem * const _First2, const size_t _Count) noexcept
		{	
		::memcpy_s((_First1), (_Size_in_bytes), (_First2), (_Count));
		return (_First1);
		}

	static const _Elem * __cdecl find(  const _Elem * const _First,
		const size_t _Count, const _Elem& _Ch) noexcept 
		{	
		return ((const _Elem *):: memchr(_First, _Ch, _Count));
		}

	static _Elem * __cdecl move(  _Elem * const _First1,
		  const _Elem * const _First2, const size_t _Count) noexcept 
		{	
		return ((_Elem *):: memmove(_First1, _First2, _Count));
		}

	static _Elem * __cdecl assign(  _Elem * const _First,
		const size_t _Count, const _Elem _Ch) noexcept 
		{	
		return ((_Elem *):: memset(_First, _Ch, _Count));
		}

	static void __cdecl assign(_Elem& _Left, const _Elem& _Right) noexcept
		{	
		_Left = _Right;
		}

	static constexpr bool __cdecl eq(const _Elem& _Left, const _Elem& _Right) noexcept
		{	
		return (_Left == _Right);
		}

	static constexpr bool __cdecl lt(const _Elem& _Left, const _Elem& _Right) noexcept
		{	
		return ((unsigned char)_Left < (unsigned char)_Right);
		}

	static constexpr _Elem __cdecl to_char_type(const int_type& _Meta) noexcept
		{	
		return ((_Elem)_Meta);
		}

	static constexpr int_type __cdecl to_int_type(const _Elem& _Ch) noexcept
		{	
		return ((unsigned char)_Ch);
		}

	static constexpr bool __cdecl eq_int_type(const int_type& _Left, const int_type& _Right) noexcept
		{	
		return (_Left == _Right);
		}

	static constexpr int_type __cdecl not_eof(const int_type& _Meta) noexcept
		{	
		return (_Meta != eof() ? _Meta : !eof());
		}

	static constexpr int_type __cdecl eof() noexcept
		{	
		return ((-1));
		}
	};

		
template<class _Ty>
	class allocator;
class ios_base;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_ios;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class istreambuf_iterator;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class ostreambuf_iterator;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_streambuf;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_istream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_ostream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_iostream;
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem> >
	class basic_stringbuf;
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem> >
	class basic_istringstream;
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem> >
	class basic_ostringstream;
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem> >
	class basic_stringstream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_filebuf;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_ifstream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_ofstream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_fstream;

 
template<class _Elem,
	class _InIt >
	class num_get;
template<class _Elem,
	class _OutIt >
	class num_put;
template<class _Elem>
	class collate;
 

		
typedef basic_ios<char, char_traits<char> > ios;
typedef basic_streambuf<char, char_traits<char> > streambuf;
typedef basic_istream<char, char_traits<char> > istream;
typedef basic_ostream<char, char_traits<char> > ostream;
typedef basic_iostream<char, char_traits<char> > iostream;
typedef basic_stringbuf<char, char_traits<char>,
	allocator<char> > stringbuf;
typedef basic_istringstream<char, char_traits<char>,
	allocator<char> > istringstream;
typedef basic_ostringstream<char, char_traits<char>,
	allocator<char> > ostringstream;
typedef basic_stringstream<char, char_traits<char>,
	allocator<char> > stringstream;
typedef basic_filebuf<char, char_traits<char> > filebuf;
typedef basic_ifstream<char, char_traits<char> > ifstream;
typedef basic_ofstream<char, char_traits<char> > ofstream;
typedef basic_fstream<char, char_traits<char> > fstream;

		
typedef basic_ios<wchar_t, char_traits<wchar_t> > wios;
typedef basic_streambuf<wchar_t, char_traits<wchar_t> >
	wstreambuf;
typedef basic_istream<wchar_t, char_traits<wchar_t> > wistream;
typedef basic_ostream<wchar_t, char_traits<wchar_t> > wostream;
typedef basic_iostream<wchar_t, char_traits<wchar_t> > wiostream;
typedef basic_stringbuf<wchar_t, char_traits<wchar_t>,
	allocator<wchar_t> > wstringbuf;
typedef basic_istringstream<wchar_t, char_traits<wchar_t>,
	allocator<wchar_t> > wistringstream;
typedef basic_ostringstream<wchar_t, char_traits<wchar_t>,
	allocator<wchar_t> > wostringstream;
typedef basic_stringstream<wchar_t, char_traits<wchar_t>,
	allocator<wchar_t> > wstringstream;
typedef basic_filebuf<wchar_t, char_traits<wchar_t> > wfilebuf;
typedef basic_ifstream<wchar_t, char_traits<wchar_t> > wifstream;
typedef basic_ofstream<wchar_t, char_traits<wchar_t> > wofstream;
typedef basic_fstream<wchar_t, char_traits<wchar_t> > wfstream;

 




















}

 
 #pragma warning(pop)
 #pragma pack(pop)










 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
template<class _Ty>
	 
	constexpr const _Ty& _Min_value(const _Ty& _Left, const _Ty& _Right)
		noexcept(noexcept(_Right < _Left))
	{	
	return (_Right < _Left ? _Right : _Left);
	}

		
template<class _Ty>
	 
	constexpr const _Ty& _Max_value(const _Ty& _Left, const _Ty& _Right)
		noexcept(noexcept(_Left < _Right))
	{	
	return (_Left < _Right ? _Right : _Left);
	}

		
template<class _FwdIt1,
	class _FwdIt2> inline
	void iter_swap(_FwdIt1 _Left, _FwdIt2 _Right)
	{	
	swap(*_Left, *_Right);
	}

		
template<class _Ty,
	size_t _Size,
	class> inline
	void swap(_Ty (&_Left)[_Size], _Ty (&_Right)[_Size])
		noexcept(_Is_nothrow_swappable<_Ty>::value)
	{	
	if (&_Left != &_Right)
		{	
		_Ty *_First1 = _Left;
		_Ty *_Last1 = _First1 + _Size;
		_Ty *_First2 = _Right;
		for (; _First1 != _Last1; ++_First1, ++_First2)
			::std:: iter_swap(_First1, _First2);
		}
	}

template<class _Ty,
	class> inline
	void swap(_Ty& _Left, _Ty& _Right)
		noexcept(is_nothrow_move_constructible<_Ty>::value && is_nothrow_move_assignable<_Ty>::value)
	{	
	_Ty _Tmp = ::std:: move(_Left);
	_Left = ::std:: move(_Right);
	_Right = ::std:: move(_Tmp);
	}

		
template<class _Ty> inline
	void _Swap_adl(_Ty& _Left, _Ty& _Right)
		noexcept(_Is_nothrow_swappable<_Ty>::value)
	{	
	swap(_Left, _Right);
	}

		
struct piecewise_construct_t
	{	
	};

constexpr piecewise_construct_t piecewise_construct{};

		
template<class...>
	class tuple;

template<class _Ty1,
	class _Ty2>
	struct pair
	{	
	typedef pair<_Ty1, _Ty2> _Myt;
	typedef _Ty1 first_type;
	typedef _Ty2 second_type;

	template<class _Uty1 = _Ty1,
		class _Uty2 = _Ty2,
		class = enable_if_t<is_default_constructible<_Uty1>::value
						&& is_default_constructible<_Uty2>::value> >
		constexpr pair()
		: first(), second()
		{	
		}

	template<class _Uty1 = _Ty1,
		class _Uty2 = _Ty2,
		class = enable_if_t<is_copy_constructible<_Uty1>::value
						&& is_copy_constructible<_Uty2>::value>,
		enable_if_t<is_convertible<const _Uty1&, _Uty1>::value
				&& is_convertible<const _Uty2&, _Uty2>::value, int> = 0>
		constexpr pair(const _Ty1& _Val1, const _Ty2& _Val2)
		: first(_Val1), second(_Val2)
		{	
		}

	template<class _Uty1 = _Ty1,
		class _Uty2 = _Ty2,
		class = enable_if_t<is_copy_constructible<_Uty1>::value
						&& is_copy_constructible<_Uty2>::value>,
		enable_if_t<!is_convertible<const _Uty1&, _Uty1>::value
				|| !is_convertible<const _Uty2&, _Uty2>::value, int> = 0>
		constexpr explicit pair(const _Ty1& _Val1, const _Ty2& _Val2)
		: first(_Val1), second(_Val2)
		{	
		}

	pair(const pair&) = default;
	pair(pair&&) = default;

	template<class _Other1,
		class _Other2,
		class = enable_if_t<is_constructible<_Ty1, const _Other1&>::value
						&& is_constructible<_Ty2, const _Other2&>::value>,
		enable_if_t<is_convertible<const _Other1&, _Ty1>::value
				&& is_convertible<const _Other2&, _Ty2>::value, int> = 0>
		constexpr pair(const pair<_Other1, _Other2>& _Right)
		: first(_Right.first), second(_Right.second)
		{	
		}

	template<class _Other1,
		class _Other2,
		class = enable_if_t<is_constructible<_Ty1, const _Other1&>::value
						&& is_constructible<_Ty2, const _Other2&>::value>,
		enable_if_t<!is_convertible<const _Other1&, _Ty1>::value
				|| !is_convertible<const _Other2&, _Ty2>::value, int> = 0>
		constexpr explicit pair(const pair<_Other1, _Other2>& _Right)
		: first(_Right.first), second(_Right.second)
		{	
		}

	template<class _Other1,
		class _Other2>
		_Myt& operator=(const pair<_Other1, _Other2>& _Right)
		{	
		first = _Right.first;
		second = _Right.second;
		return (*this);
		}

	template<class _Tuple1,
		class _Tuple2,
		size_t... _Indexes1,
		size_t... _Indexes2> inline
		pair(_Tuple1& _Val1,
			_Tuple2& _Val2,
			index_sequence<_Indexes1...>,
			index_sequence<_Indexes2...>);

	template<class... _Types1,
		class... _Types2> inline
		pair(piecewise_construct_t,
			tuple<_Types1...> _Val1,
			tuple<_Types2...> _Val2);

	template<class _Other1,
		class _Other2,
		class = enable_if_t<is_constructible<_Ty1, _Other1>::value
						&& is_constructible<_Ty2, _Other2>::value>,
		enable_if_t<is_convertible<_Other1, _Ty1>::value
				&& is_convertible<_Other2, _Ty2>::value, int> = 0>
		constexpr pair(_Other1&& _Val1, _Other2&& _Val2)
			noexcept((is_nothrow_constructible<_Ty1, _Other1>::value && is_nothrow_constructible<_Ty2, _Other2>::value))
		: first(::std:: forward<_Other1>(_Val1)),
				second(::std:: forward<_Other2>(_Val2))
		{	
		}

	template<class _Other1,
		class _Other2,
		class = enable_if_t<is_constructible<_Ty1, _Other1>::value
						&& is_constructible<_Ty2, _Other2>::value>,
		enable_if_t<!is_convertible<_Other1, _Ty1>::value
				|| !is_convertible<_Other2, _Ty2>::value, int> = 0>
		constexpr explicit pair(_Other1&& _Val1, _Other2&& _Val2)
			noexcept((is_nothrow_constructible<_Ty1, _Other1>::value && is_nothrow_constructible<_Ty2, _Other2>::value))
		: first(::std:: forward<_Other1>(_Val1)),
				second(::std:: forward<_Other2>(_Val2))
		{	
		}

	template<class _Other1,
		class _Other2,
		class = enable_if_t<is_constructible<_Ty1, _Other1>::value
						&& is_constructible<_Ty2, _Other2>::value>,
		enable_if_t<is_convertible<_Other1, _Ty1>::value
				&& is_convertible<_Other2, _Ty2>::value, int> = 0>
		constexpr pair(pair<_Other1, _Other2>&& _Right)
			noexcept((is_nothrow_constructible<_Ty1, _Other1>::value && is_nothrow_constructible<_Ty2, _Other2>::value))
		: first(::std:: forward<_Other1>(_Right.first)),
			second(::std:: forward<_Other2>(_Right.second))
		{	
		}

	template<class _Other1,
		class _Other2,
		class = enable_if_t<is_constructible<_Ty1, _Other1>::value
						&& is_constructible<_Ty2, _Other2>::value>,
		enable_if_t<!is_convertible<_Other1, _Ty1>::value
				|| !is_convertible<_Other2, _Ty2>::value, int> = 0>
		constexpr explicit pair(pair<_Other1, _Other2>&& _Right)
			noexcept((is_nothrow_constructible<_Ty1, _Other1>::value && is_nothrow_constructible<_Ty2, _Other2>::value))
		: first(::std:: forward<_Other1>(_Right.first)),
			second(::std:: forward<_Other2>(_Right.second))
		{	
		}

	template<class _Other1,
		class _Other2>
		_Myt& operator=(pair<_Other1, _Other2>&& _Right)
		{	
		first = ::std:: forward<_Other1>(_Right.first);
		second = ::std:: forward<_Other2>(_Right.second);
		return (*this);
		}

	_Myt& operator=(_Myt&& _Right)
		noexcept((is_nothrow_move_assignable<_Ty1>::value && is_nothrow_move_assignable<_Ty2>::value))
		{	
		first = ::std:: forward<_Ty1>(_Right.first);
		second = ::std:: forward<_Ty2>(_Right.second);
		return (*this);
		}

	_Myt& operator=(const _Myt& _Right)
		{	
		first = _Right.first;
		second = _Right.second;
		return (*this);
		}

	void swap(_Myt& _Right)
		noexcept(_Is_nothrow_swappable<_Ty1>::value && _Is_nothrow_swappable<_Ty2>::value)
		{	
		if (this != ::std:: addressof(_Right))
			{	
			_Swap_adl(first, _Right.first);
			_Swap_adl(second, _Right.second);
			}
		}

	_Ty1 first;		
	_Ty2 second;	
	};

		

template<class _Ty1,
	class _Ty2,
	class = enable_if_t<_Is_swappable<_Ty1>::value && _Is_swappable<_Ty2>::value>> inline
	void swap(pair<_Ty1, _Ty2>& _Left, pair<_Ty1, _Ty2>& _Right)
		noexcept(noexcept(_Left.swap(_Right)))
	{	
	_Left.swap(_Right);
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr bool operator==(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (_Left.first == _Right.first && _Left.second == _Right.second);
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr bool operator!=(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (!(_Left == _Right));
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr bool operator<(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (_Left.first < _Right.first ||
		(!(_Right.first < _Left.first) && _Left.second < _Right.second));
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr bool operator>(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (_Right < _Left);
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr bool operator<=(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (!(_Right < _Left));
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr bool operator>=(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (!(_Left < _Right));
	}

	

template<class _Ty1,
	class _Ty2> inline
	constexpr pair<typename _Unrefwrap<_Ty1>::type,
		typename _Unrefwrap<_Ty2>::type>
		make_pair(_Ty1&& _Val1, _Ty2&& _Val2)
	{	
	typedef pair<typename _Unrefwrap<_Ty1>::type,
		typename _Unrefwrap<_Ty2>::type> _Mypair;
	return (_Mypair(::std:: forward<_Ty1>(_Val1),
		::std:: forward<_Ty2>(_Val2)));
	}

		
	namespace rel_ops
		{	
template<class _Ty> inline
	bool operator!=(const _Ty& _Left, const _Ty& _Right)
	{	
	return (!(_Left == _Right));
	}

template<class _Ty> inline
	bool operator>(const _Ty& _Left, const _Ty& _Right)
	{	
	return (_Right < _Left);
	}

template<class _Ty> inline
	bool operator<=(const _Ty& _Left, const _Ty& _Right)
	{	
	return (!(_Right < _Left));
	}

template<class _Ty> inline
	bool operator>=(const _Ty& _Left, const _Ty& _Right)
	{	
	return (!(_Left < _Right));
	}
		}
}

namespace std {
template<class _Ty,
	size_t _Size>
	class array;

	
template<class _Tuple>
	struct tuple_size;

template<class _Ty,
	size_t _Size>
	struct tuple_size<array<_Ty, _Size> >
		: integral_constant<size_t, _Size>
	{	
	};

template<class _Ty1,
	class _Ty2>
	struct tuple_size<pair<_Ty1, _Ty2> >
	: integral_constant<size_t, 2>
	{	
	};

template<class... _Types>
	struct tuple_size<tuple<_Types...> >
	: integral_constant<size_t, sizeof...(_Types)>
	{	
	};


template<class _Tuple>
	struct tuple_size<const _Tuple>
	: tuple_size<_Tuple>
	{	
	};

template<class _Tuple>
	struct tuple_size<volatile _Tuple>
	: tuple_size<_Tuple>
	{	
	};

template<class _Tuple>
	struct tuple_size<const volatile _Tuple>
	: tuple_size<_Tuple>
	{	
	};

template<class _Ty>
	constexpr size_t tuple_size_v = tuple_size<_Ty>::value;

	
template<size_t _Index,
	class _Tuple>
	struct tuple_element;

template<size_t _Idx,
	class _Ty,
	size_t _Size>
	struct tuple_element<_Idx, array<_Ty, _Size> >
	{	
	static_assert(_Idx < _Size, "array index out of bounds");

	typedef _Ty type;
	};

template<class _Ty1,
	class _Ty2>
	struct tuple_element<0, pair<_Ty1, _Ty2> >
	{	
	typedef _Ty1 type;
	};

template<class _Ty1,
	class _Ty2>
	struct tuple_element<1, pair<_Ty1, _Ty2> >
	{	
	typedef _Ty2 type;
	};

template<size_t _Index>
	struct tuple_element<_Index, tuple<> >
	{	
	static_assert(_Always_false<integral_constant<size_t, _Index> >::value,
		"tuple index out of bounds");
	};

template<class _This,
	class... _Rest>
	struct tuple_element<0, tuple<_This, _Rest...> >
	{	
	typedef _This type;
	typedef tuple<_This, _Rest...> _Ttype;
	};

template<size_t _Index,
	class _This,
	class... _Rest>
	struct tuple_element<_Index, tuple<_This, _Rest...> >
		: public tuple_element<_Index - 1, tuple<_Rest...> >
	{	
	};


template<size_t _Index,
	class _Tuple>
	struct tuple_element<_Index, const _Tuple>
		: public tuple_element<_Index, _Tuple>
	{	
	typedef tuple_element<_Index, _Tuple> _Mybase;
	typedef typename add_const<typename _Mybase::type>::type type;
	};

template<size_t _Index,
	class _Tuple>
	struct tuple_element<_Index, volatile _Tuple>
		: public tuple_element<_Index, _Tuple>
	{	
	typedef tuple_element<_Index, _Tuple> _Mybase;
	typedef typename add_volatile<typename _Mybase::type>::type type;
	};

template<size_t _Index,
	class _Tuple>
	struct tuple_element<_Index, const volatile _Tuple>
		: public tuple_element<_Index, _Tuple>
	{	
	typedef tuple_element<_Index, _Tuple> _Mybase;
	typedef typename add_cv<typename _Mybase::type>::type type;
	};

template<size_t _Index,
	class _Tuple>
	using tuple_element_t = typename tuple_element<_Index, _Tuple>::type;

	
template<class _Ret,
	class _Pair> inline
	constexpr _Ret _Pair_get(_Pair& _Pr,
		integral_constant<size_t, 0>) noexcept
	{	
	return (_Pr.first);
	}

template<class _Ret,
	class _Pair> inline
	constexpr _Ret _Pair_get(_Pair& _Pr,
		integral_constant<size_t, 1>) noexcept
	{	
	return (_Pr.second);
	}

template<size_t _Idx,
	class _Ty1,
	class _Ty2> inline
	constexpr typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&
		get(pair<_Ty1, _Ty2>& _Pr) noexcept
	{	
	typedef typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type& _Rtype;
	return (_Pair_get<_Rtype>(_Pr, integral_constant<size_t, _Idx>()));
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr _Ty1& get(pair<_Ty1, _Ty2>& _Pr) noexcept
	{	
	return (::std:: get<0>(_Pr));
	}

template<class _Ty2,
	class _Ty1> inline
	constexpr _Ty2& get(pair<_Ty1, _Ty2>& _Pr) noexcept
	{	
	return (::std:: get<1>(_Pr));
	}

template<size_t _Idx,
	class _Ty1,
	class _Ty2> inline
	constexpr const typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&
		get(const pair<_Ty1, _Ty2>& _Pr) noexcept
	{	
	typedef const typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&
		_Ctype;
	return (_Pair_get<_Ctype>(_Pr, integral_constant<size_t, _Idx>()));
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr const _Ty1& get(const pair<_Ty1, _Ty2>& _Pr) noexcept
	{	
	return (::std:: get<0>(_Pr));
	}

template<class _Ty2,
	class _Ty1> inline
	constexpr const _Ty2& get(const pair<_Ty1, _Ty2>& _Pr) noexcept
	{	
	return (::std:: get<1>(_Pr));
	}

template<size_t _Idx,
	class _Ty1,
	class _Ty2> inline
	constexpr typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&&
		get(pair<_Ty1, _Ty2>&& _Pr) noexcept
	{	
	typedef typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&& _RRtype;
	return (::std:: forward<_RRtype>(::std:: get<_Idx>(_Pr)));
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr _Ty1&& get(pair<_Ty1, _Ty2>&& _Pr) noexcept
	{	
	return (::std:: get<0>(::std:: move(_Pr)));
	}

template<class _Ty2,
	class _Ty1> inline
	constexpr _Ty2&& get(pair<_Ty1, _Ty2>&& _Pr) noexcept
	{	
	return (::std:: get<1>(::std:: move(_Pr)));
	}

template<size_t _Idx,
	class _Ty1,
	class _Ty2> inline
	constexpr const typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&&
		get(const pair<_Ty1, _Ty2>&& _Pr) noexcept
	{	
	typedef const typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&& _RRtype;
	return (::std:: forward<_RRtype>(::std:: get<_Idx>(_Pr)));
	}

template<class _Ty1,
	class _Ty2> inline
	constexpr const _Ty1&& get(const pair<_Ty1, _Ty2>&& _Pr) noexcept
	{	
	return (::std:: get<0>(::std:: move(_Pr)));
	}

template<class _Ty2,
	class _Ty1> inline
	constexpr const _Ty2&& get(const pair<_Ty1, _Ty2>&& _Pr) noexcept
	{	
	return (::std:: get<1>(::std:: move(_Pr)));
	}

	
template<class _Ty,
	class _Other = _Ty> inline
	_Ty exchange(_Ty& _Val, _Other&& _New_val)
	{	
	_Ty _Old_val = ::std:: move(_Val);
	_Val = ::std:: forward<_Other>(_New_val);
	return (_Old_val);
	}

	
template<class _Ty> inline
	constexpr add_const_t<_Ty>& as_const(_Ty& _Val) noexcept
	{	
	return (_Val);
	}

template<class _Ty>
	void as_const(const _Ty&&) = delete;

























}


namespace std {
namespace tr1 {	
using ::std:: get;
using ::std:: tuple_element;
using ::std:: tuple_size;
}	
}


 
 #pragma warning(pop)
 #pragma pack(pop)









 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
 














  
 


		





 



		



 



		
struct _Container_proxy;
struct _Container_base12;
struct _Iterator_base12;

struct _Container_base0
	{	
	void _Orphan_all()
		{	
		}

	void _Swap_all(_Container_base0&)
		{	
		}
	};

struct _Iterator_base0
	{	
	void _Adopt(const void *)
		{	
		}

	const _Container_base0 *_Getcont() const
		{	
		return (0);
		}
	};

		
struct _Container_proxy
	{	
	_Container_proxy()
		: _Mycont(0), _Myfirstiter(0)
		{	
		}

	const _Container_base12 *_Mycont;
	_Iterator_base12 *_Myfirstiter;
	};

struct _Container_base12
	{	
public:
	_Container_base12()
		: _Myproxy(0)
		{	
		}

	_Container_base12(const _Container_base12&)
		: _Myproxy(0)
		{	
		}

	_Container_base12& operator=(const _Container_base12&)
		{	
		return (*this);
		}

	~_Container_base12() noexcept
		{	
		_Orphan_all();
		}

	_Iterator_base12 **_Getpfirst() const
		{	
		return (_Myproxy == 0 ? 0 : &_Myproxy->_Myfirstiter);
		}

	void _Orphan_all();	
	void _Swap_all(_Container_base12&);	

	_Container_proxy *_Myproxy;
	};

struct _Iterator_base12
	{	
public:
	_Iterator_base12()
		: _Myproxy(0), _Mynextiter(0)
		{	
		}

	_Iterator_base12(const _Iterator_base12& _Right)
		: _Myproxy(0), _Mynextiter(0)
		{	
		*this = _Right;
		}

	_Iterator_base12& operator=(const _Iterator_base12& _Right)
		{	
		if (_Myproxy == _Right._Myproxy)
			;
		else if (_Right._Myproxy != 0)
			_Adopt(_Right._Myproxy->_Mycont);
		else
			{	
 



			}

		return (*this);
		}

	~_Iterator_base12() noexcept
		{	
 



		}

	void _Adopt(const _Container_base12 *_Parent)
		{	
		if (_Parent == 0)
			{	
 



			}
		else
			{	
			_Container_proxy *_Parent_proxy = _Parent->_Myproxy;

 










			_Myproxy = _Parent_proxy;
 
			}
		}

	void _Clrcont()
		{	
		_Myproxy = 0;
		}

	const _Container_base12 *_Getcont() const
		{	
		return (_Myproxy == 0 ? 0 : _Myproxy->_Mycont);
		}

	_Iterator_base12 **_Getpnext()
		{	
		return (&_Mynextiter);
		}

	void _Orphan_me()
		{	
 















		}

	_Container_proxy *_Myproxy;
	_Iterator_base12 *_Mynextiter;
	};

		
inline void _Container_base12::_Orphan_all()
	{	
 










	}

inline void _Container_base12::_Swap_all(_Container_base12& _Right)
	{	
 



	_Container_proxy *_Temp = _Myproxy;
	_Myproxy = _Right._Myproxy;
	_Right._Myproxy = _Temp;

	if (_Myproxy != 0)
		_Myproxy->_Mycont = (_Container_base12 *)this;
	if (_Right._Myproxy != 0)
		_Right._Myproxy->_Mycont = (_Container_base12 *)&_Right;
	}

 
typedef _Container_base0 _Container_base;
typedef _Iterator_base0 _Iterator_base;

 




	
struct _Zero_then_variadic_args_t
	{	
	};	

struct _One_then_variadic_args_t
	{	
	};	

template<class _Ty1,
	class _Ty2,
	bool = is_empty<_Ty1>::value && !is_final<_Ty1>::value>
	class _Compressed_pair final
		: private _Ty1

	{	
private:
	_Ty2 _Myval2;

	typedef _Ty1 _Mybase;	

public:
	template<class... _Other2>
		constexpr explicit _Compressed_pair(_Zero_then_variadic_args_t,
			_Other2&&... _Val2)
		: _Ty1(), _Myval2(::std:: forward<_Other2>(_Val2)...)
		{	
		}

	template<class _Other1,
		class... _Other2>
		_Compressed_pair(_One_then_variadic_args_t,
			_Other1&& _Val1, _Other2&&... _Val2)
		: _Ty1(::std:: forward<_Other1>(_Val1)),
			_Myval2(::std:: forward<_Other2>(_Val2)...)
		{	
		}


	_Ty1& _Get_first() noexcept
		{	
		return (*this);
		}

	const _Ty1& _Get_first() const noexcept
		{	
		return (*this);
		}

	volatile _Ty1& _Get_first() volatile noexcept
		{	
		return (*this);
		}

	const volatile _Ty1& _Get_first() const volatile noexcept
		{	
		return (*this);
		}

	_Ty2& _Get_second() noexcept
		{	
		return (_Myval2);
		}

	const _Ty2& _Get_second() const noexcept
		{	
		return (_Myval2);
		}

	volatile _Ty2& _Get_second() volatile noexcept
		{	
		return (_Myval2);
		}

	const volatile _Ty2& _Get_second() const volatile noexcept
		{	
		return (_Myval2);
		}
	};

template<class _Ty1,
	class _Ty2>
	class _Compressed_pair<_Ty1, _Ty2, false> final

	{	
private:
	_Ty1 _Myval1;
	_Ty2 _Myval2;

public:
	template<class... _Other2>
		constexpr explicit _Compressed_pair(_Zero_then_variadic_args_t,
			_Other2&&... _Val2)
		: _Myval1(), _Myval2(::std:: forward<_Other2>(_Val2)...)
		{	
		}

	template<class _Other1,
		class... _Other2>
		_Compressed_pair(_One_then_variadic_args_t,
			_Other1&& _Val1, _Other2&&... _Val2)
		: _Myval1(::std:: forward<_Other1>(_Val1)),
			_Myval2(::std:: forward<_Other2>(_Val2)...)
		{	
		}


	_Ty1& _Get_first() noexcept
		{	
		return (_Myval1);
		}

	const _Ty1& _Get_first() const noexcept
		{	
		return (_Myval1);
		}

	volatile _Ty1& _Get_first() volatile noexcept
		{	
		return (_Myval1);
		}

	const volatile _Ty1& _Get_first() const volatile noexcept
		{	
		return (_Myval1);
		}

	_Ty2& _Get_second() noexcept
		{	
		return (_Myval2);
		}

	const _Ty2& _Get_second() const noexcept
		{	
		return (_Myval2);
		}

	volatile _Ty2& _Get_second() volatile noexcept
		{	
		return (_Myval2);
		}

	const volatile _Ty2& _Get_second() const volatile noexcept
		{	
		return (_Myval2);
		}
	};

		
template<class _Ty,
	class = void>
	struct _Is_checked_helper
		: false_type
	{	
	};

template<class _Ty>
	struct _Is_checked_helper<_Ty, void_t<
		typename _Ty::_Unchecked_type> >
		: true_type
	{	
	};

		
template<class _Iter> inline
	typename _Is_checked_helper<_Iter>::type _Is_checked(_Iter)
	{	
	return {};
	}

		
template<class _Iter>
	constexpr _Iter _Unchecked(_Iter _Src)
	{	
	return (_Src);
	}

 


		
 

template<class _Iter> inline
	decltype(_Unchecked(::std:: declval<_Iter>())) _Unchecked_idl0(_Iter _Src)
	{	
	return (_Unchecked(_Src));
	}

 









		
template<class _Iter,
	class _UIter>
	constexpr _Iter& _Rechecked(_Iter& _Dest, _UIter _Src)
	{	
	_Dest = _Src;
	return (_Dest);
	}

		




















		
		
struct input_iterator_tag
	{	
	};

struct _Mutable_iterator_tag	
	{	
	};

struct output_iterator_tag
	: _Mutable_iterator_tag
	{	
	};

struct forward_iterator_tag
	: input_iterator_tag, _Mutable_iterator_tag
	{	
	};

struct bidirectional_iterator_tag
	: forward_iterator_tag
	{	
	};

struct random_access_iterator_tag
	: bidirectional_iterator_tag
	{	
	};

		
struct _General_ptr_iterator_tag
	{	
	};

struct _Trivially_copyable_ptr_iterator_tag
	: _General_ptr_iterator_tag
	{	
	};

struct _Really_trivial_ptr_iterator_tag
	: _Trivially_copyable_ptr_iterator_tag
	{	
	};

	
struct _Any_tag
	{	
	constexpr _Any_tag() noexcept = default;
	template<class _Ty>
		constexpr _Any_tag(_Ty&&) noexcept {}
	};

		
template<class _Category,
	class _Ty,
	class _Diff = ptrdiff_t,
	class _Pointer = _Ty *,
	class _Reference = _Ty&>
	struct iterator
	{	
	typedef _Category iterator_category;
	typedef _Ty value_type;
	typedef _Diff difference_type;

	typedef _Pointer pointer;
	typedef _Reference reference;
	};

template<class _Category,
	class _Ty,
	class _Diff,
	class _Pointer,
	class _Reference,
	class _Base>
	struct _Iterator012
		: public _Base
	{	
	typedef _Category iterator_category;
	typedef _Ty value_type;
	typedef _Diff difference_type;

	typedef _Pointer pointer;
	typedef _Reference reference;
	};


typedef iterator<output_iterator_tag, void, void, void, void> _Outit;

		
template<class,
	class = void>
	struct _Iterator_traits_base
	{	
	};

template<class _Iter>
	struct _Iterator_traits_base<_Iter, void_t<
		typename _Iter::iterator_category,
		typename _Iter::value_type,
		typename _Iter::difference_type,
		typename _Iter::pointer,
		typename _Iter::reference
		> >
	{	
	typedef typename _Iter::iterator_category iterator_category;
	typedef typename _Iter::value_type value_type;
	typedef typename _Iter::difference_type difference_type;

	typedef typename _Iter::pointer pointer;
	typedef typename _Iter::reference reference;
	};

template<class _Iter>
	struct iterator_traits
		: _Iterator_traits_base<_Iter>
	{	
	};

template<class _Ty>
	struct iterator_traits<_Ty *>
	{	
	typedef random_access_iterator_tag iterator_category;
	typedef _Ty value_type;
	typedef ptrdiff_t difference_type;

	typedef _Ty *pointer;
	typedef _Ty& reference;
	};

template<class _Ty>
	struct iterator_traits<const _Ty *>
	{	
	typedef random_access_iterator_tag iterator_category;
	typedef _Ty value_type;
	typedef ptrdiff_t difference_type;

	typedef const _Ty *pointer;
	typedef const _Ty& reference;
	};

		
template<class _Iter>
	using _Iter_value_t = typename iterator_traits<_Iter>::value_type;

		
template<class _Iter>
	using _Iter_diff_t = typename iterator_traits<_Iter>::difference_type;

		
template<class _Iter>
	using _Iter_cat_t = typename iterator_traits<_Iter>::iterator_category;

		
template<class _Ty,
	class = void>
	struct _Is_iterator
		: false_type
	{	
	};

template<class _Ty>
	struct _Is_iterator<_Ty, void_t<
		typename iterator_traits<_Ty>::iterator_category
		> >
		: true_type
	{	
	};


		
struct _Distance_unknown {};

 
template<class _Iter> inline
	_Distance_unknown _Idl_distance(const _Iter&, const _Iter&)
	{	
	return {};
	}
 




















		
 
template<class _Iter,
	class _Diff> inline
	auto _Unchecked_n(_Iter _Src, _Diff)
	{	
	return (_Unchecked(_Src));
	}
 



































		
 
template<class _Iter,
	class _Diff> inline
	auto _Unchecked_n_backward(_Iter _Src, _Diff)
	{	
	return (_Unchecked(_Src));
	}
 



































		
template<class _Ty1,
	class _Ty2>
	struct _Is_same_size
		: bool_constant<sizeof(_Ty1) == sizeof(_Ty2)>
	{	
	};

		
template<class _Elem,
	bool _Is_enum = is_enum<_Elem>::value>
	struct _Unwrap_enum
	{	
	typedef underlying_type_t<_Elem> type;
	};

template<class _Elem>
	struct _Unwrap_enum<_Elem, false>
	{	
	typedef _Elem type;
	};

		
template<class _Ty1,
	class _Ty2>
	struct _Both_or_neither_bool
		: bool_constant<is_same<bool, _Ty1>::value == is_same<bool, _Ty2>::value>
	{	
	};

		
template<class _Source,
	class _Dest>
	struct _Ptr_cat_helper
	{	
	typedef typename _Unwrap_enum<_Source>::type _USource;
	typedef typename _Unwrap_enum<_Dest>::type _UDest;
	typedef conditional_t<
		conjunction<
			_Is_same_size<_USource, _UDest>,
			is_integral<_USource>,
			is_integral<_UDest>,
			_Both_or_neither_bool<_USource, _UDest>,
			
			negation<is_volatile<_Source>>,
			negation<is_volatile<_Dest>>
		>::value,
		_Really_trivial_ptr_iterator_tag,
		_General_ptr_iterator_tag> type;
	};

template<class _Elem>
	struct _Ptr_cat_helper<_Elem, _Elem>
	{	
	typedef conditional_t<
		is_trivially_copyable<_Elem>::value,
		conditional_t<is_trivial<_Elem>::value,
			_Really_trivial_ptr_iterator_tag,
			_Trivially_copyable_ptr_iterator_tag>,
		_General_ptr_iterator_tag> type;
	};

template<class _Anything>
	struct _Ptr_cat_helper<_Anything *, const _Anything *>
	{	
	typedef _Really_trivial_ptr_iterator_tag type;
	};

template<class _Source,
	class _Dest> inline
	_General_ptr_iterator_tag _Ptr_copy_cat(const _Source&, const _Dest&)
	{	
	return {};
	}

template<class _Source,
	class _Dest> inline
	conditional_t<is_trivially_assignable<_Dest&, _Source&>::value,
		typename _Ptr_cat_helper<remove_const_t<_Source>, _Dest>::type,
		_General_ptr_iterator_tag>
		_Ptr_copy_cat(_Source * const&, _Dest * const&)
	{	
	return {};
	}

template<class _Source,
	class _Dest> inline
	_General_ptr_iterator_tag _Ptr_move_cat(const _Source&, const _Dest&)
	{	
	return {};
	}

template<class _Source,
	class _Dest> inline
	conditional_t<is_trivially_assignable<_Dest&, _Source>::value,
		typename _Ptr_cat_helper<remove_const_t<_Source>, _Dest>::type,
		_General_ptr_iterator_tag>
		_Ptr_move_cat(_Source * const&, _Dest * const&)
	{	
	return {};
	}

		

 
  
  
  
  
  

 



















































































































 
  
 























		
		
template<class _InIt,
	class _Diff> inline
	void _Advance1(_InIt& _Where, _Diff _Off, input_iterator_tag)
	{	
 







	for (; 0 < _Off; --_Off)
		++_Where;
	}

template<class _BidIt,
	class _Diff> inline
	void _Advance1(_BidIt& _Where, _Diff _Off, bidirectional_iterator_tag)
	{	
	for (; 0 < _Off; --_Off)
		++_Where;
	for (; _Off < 0; ++_Off)
		--_Where;
	}

template<class _RanIt,
	class _Diff> inline
	void _Advance1(_RanIt& _Where, _Diff _Off, random_access_iterator_tag)
	{	
	_Where += _Off;
	}

template<class _InIt,
	class _Diff> inline
	void advance(_InIt& _Where, _Diff _Off)
	{	
		
	_Advance1(_Where, _Off, _Iter_cat_t<remove_const_t<_InIt>>());
	}

		
template<class _InIt> inline
	_Iter_diff_t<_InIt>
		_Distance1(_InIt _First, _InIt _Last, input_iterator_tag)
	{	
	_Iter_diff_t<_InIt> _Off = 0;
	for (; _First != _Last; ++_First)
		++_Off;

	return (_Off);
	}

template<class _RanIt> inline
	_Iter_diff_t<_RanIt>
		_Distance1(_RanIt _First, _RanIt _Last, random_access_iterator_tag)
	{	
	return (_Last - _First);
	}

template<class _InIt> inline
	_Iter_diff_t<_InIt>
		distance(_InIt _First, _InIt _Last)
	{	
	return (_Distance1(_First, _Last, _Iter_cat_t<_InIt>()));
	}

		
template<class _InIt> inline
	_InIt next(_InIt _First, _Iter_diff_t<_InIt> _Off = 1)
	{	
	static_assert(is_base_of<input_iterator_tag, _Iter_cat_t<_InIt>>::value,
		"next requires input iterator");

	::std:: advance(_First, _Off);
	return (_First);
	}

		
template<class _BidIt> inline
	_BidIt prev(_BidIt _First, _Iter_diff_t<_BidIt> _Off = 1)
	{	
	static_assert(is_base_of<bidirectional_iterator_tag, _Iter_cat_t<_BidIt>>::value,
		"prev requires bidirectional iterator");

	::std:: advance(_First, -_Off);
	return (_First);
	}

		
template<class _Ty>
	struct pointer_traits;

template<class _Iterator>
	constexpr _Iterator _Operator_arrow(_Iterator _Target, true_type)
	{	
	return (_Target);
	}

template<class _Iterator>
	constexpr decltype(auto) _Operator_arrow(_Iterator&& _Target, false_type)
	{	
	return (::std:: forward<_Iterator>(_Target).operator->());
	}

template<class _RanIt>
	class reverse_iterator
		: public iterator<
			typename iterator_traits<_RanIt>::iterator_category,
			typename iterator_traits<_RanIt>::value_type,
			typename iterator_traits<_RanIt>::difference_type,
			typename iterator_traits<_RanIt>::pointer,
			typename iterator_traits<_RanIt>::reference>
	{	
	typedef reverse_iterator<_RanIt> _Myt;

public:
	typedef typename iterator_traits<_RanIt>::difference_type difference_type;
	typedef typename iterator_traits<_RanIt>::pointer pointer;
	typedef typename iterator_traits<_RanIt>::reference reference;
	typedef _RanIt iterator_type;

	inline reverse_iterator()
		: current()
		{	
		}

	inline explicit reverse_iterator(_RanIt _Right)
		: current(_Right)
		{	
		}

	template<class _Other>
		inline reverse_iterator(const reverse_iterator<_Other>& _Right)
		: current(_Right.base())
		{	
		}

	template<class _Other>
		inline _Myt& operator=(const reverse_iterator<_Other>& _Right)
		{	
		current = _Right.base();
		return (*this);
		}

	inline _RanIt base() const
		{	
		return (current);
		}

	inline reference operator*() const
		{	
		_RanIt _Tmp = current;
		return (*--_Tmp);
		}

	inline pointer operator->() const
		{	
		_RanIt _Tmp = current;
		--_Tmp;
		return (_Operator_arrow(_Tmp, is_pointer<_RanIt>()));
		}

	inline _Myt& operator++()
		{	
		--current;
		return (*this);
		}

	inline _Myt operator++(int)
		{	
		_Myt _Tmp = *this;
		--current;
		return (_Tmp);
		}

	inline _Myt& operator--()
		{	
		++current;
		return (*this);
		}

	inline _Myt operator--(int)
		{	
		_Myt _Tmp = *this;
		++current;
		return (_Tmp);
		}



	inline _Myt& operator+=(difference_type _Off)
		{	
		current -= _Off;
		return (*this);
		}

	inline _Myt operator+(difference_type _Off) const
		{	
		return (_Myt(current - _Off));
		}

	inline _Myt& operator-=(difference_type _Off)
		{	
		current += _Off;
		return (*this);
		}

	inline _Myt operator-(difference_type _Off) const
		{	
		return (_Myt(current + _Off));
		}

	inline reference operator[](difference_type _Off) const
		{	
		return (*(*this + _Off));
		}

protected:
	_RanIt current;	
	};

template<class _RanIt>
	struct _Is_checked_helper<reverse_iterator<_RanIt> >
		: public _Is_checked_helper<_RanIt>
	{	
	};

		
template<class _RanIt>
	inline reverse_iterator<_RanIt> operator+(
		typename reverse_iterator<_RanIt>::difference_type _Off,
		const reverse_iterator<_RanIt>& _Right)
	{	
	return (_Right + _Off);
	}

template<class _RanIt1,
	class _RanIt2>
	inline auto operator-(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
			-> decltype(_Right.base() - _Left.base())
	{	
	return (_Right.base() - _Left.base());
	}

template<class _RanIt1,
	class _RanIt2>
	inline bool operator==(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (_Left.base() == _Right.base());
	}

template<class _RanIt1,
	class _RanIt2>
	inline bool operator!=(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (!(_Left == _Right));
	}

template<class _RanIt1,
	class _RanIt2>
	inline bool operator<(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (_Right.base() < _Left.base());
	}

template<class _RanIt1,
	class _RanIt2>
	inline bool operator>(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (_Right < _Left);
	}

template<class _RanIt1,
	class _RanIt2>
	inline bool operator<=(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (!(_Right < _Left));
	}

template<class _RanIt1,
	class _RanIt2>
	inline bool operator>=(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (!(_Left < _Right));
	}

		
template<class _RanIt>
	inline reverse_iterator<_RanIt> make_reverse_iterator(_RanIt _Iter)
	{	
	return (reverse_iterator<_RanIt>(_Iter));
	}

		

template<class _Container>
	auto inline begin(_Container& _Cont) -> decltype(_Cont.begin())
	{	
	return (_Cont.begin());
	}

template<class _Container>
	auto inline begin(const _Container& _Cont) -> decltype(_Cont.begin())
	{	
	return (_Cont.begin());
	}

template<class _Container>
	auto inline end(_Container& _Cont) -> decltype(_Cont.end())
	{	
	return (_Cont.end());
	}

template<class _Container>
	auto inline end(const _Container& _Cont) -> decltype(_Cont.end())
	{	
	return (_Cont.end());
	}

template<class _Ty,
	size_t _Size> inline
	constexpr _Ty *begin(_Ty (&_Array)[_Size]) noexcept
	{	
	return (_Array);
	}

template<class _Ty,
	size_t _Size> inline
	constexpr _Ty *end(_Ty (&_Array)[_Size]) noexcept
	{	
	return (_Array + _Size);
	}

		
template<class _Container>
	constexpr auto inline cbegin(const _Container& _Cont)
		noexcept(noexcept(::std:: begin(_Cont)))
		-> decltype(::std:: begin(_Cont))
	{	
	return (::std:: begin(_Cont));
	}

template<class _Container>
	constexpr auto inline cend(const _Container& _Cont)
		noexcept(noexcept(::std:: end(_Cont)))
		-> decltype(::std:: end(_Cont))
	{	
	return (::std:: end(_Cont));
	}

		
template<class _Container>
	auto inline rbegin(_Container& _Cont) -> decltype(_Cont.rbegin())
	{	
	return (_Cont.rbegin());
	}

template<class _Container>
	auto inline rbegin(const _Container& _Cont) -> decltype(_Cont.rbegin())
	{	
	return (_Cont.rbegin());
	}

template<class _Container>
	auto inline rend(_Container& _Cont) -> decltype(_Cont.rend())
	{	
	return (_Cont.rend());
	}

template<class _Container>
	auto inline rend(const _Container& _Cont) -> decltype(_Cont.rend())
	{	
	return (_Cont.rend());
	}

template<class _Ty,
	size_t _Size> inline
	reverse_iterator<_Ty *> rbegin(_Ty (&_Array)[_Size])
	{	
	return (reverse_iterator<_Ty *>(_Array + _Size));
	}

template<class _Ty,
	size_t _Size> inline
	reverse_iterator<_Ty *> rend(_Ty (&_Array)[_Size])
	{	
	return (reverse_iterator<_Ty *>(_Array));
	}

template<class _Elem> inline
	reverse_iterator<const _Elem *>
		rbegin(initializer_list<_Elem> _Ilist)
	{	
	return (reverse_iterator<const _Elem *>(_Ilist.end()));
	}

template<class _Elem> inline
	reverse_iterator<const _Elem *>
		rend(initializer_list<_Elem> _Ilist)
	{	
	return (reverse_iterator<const _Elem *>(_Ilist.begin()));
	}

		
template<class _Container>
	auto inline crbegin(const _Container& _Cont)
		-> decltype(::std:: rbegin(_Cont))
	{	
	return (::std:: rbegin(_Cont));
	}

template<class _Container>
	auto inline crend(const _Container& _Cont)
		-> decltype(::std:: rend(_Cont))
	{	
	return (::std:: rend(_Cont));
	}


template<class _Container>
	constexpr auto inline size(const _Container& _Cont)
		-> decltype(_Cont.size())
	{	
	return (_Cont.size());
	}

template<class _Ty,
	size_t _Size> inline
	constexpr size_t size(const _Ty(&)[_Size]) noexcept
	{	
	return (_Size);
	}

template<class _Container>
	constexpr auto inline empty(const _Container& _Cont)
		-> decltype(_Cont.empty())
	{	
	return (_Cont.empty());
	}

template<class _Ty,
	size_t _Size> inline
	constexpr bool empty(const _Ty(&)[_Size]) noexcept
	{	
	return (false);
	}

template<class _Elem> inline
	constexpr bool empty(
		initializer_list<_Elem> _Ilist) noexcept
	{	
	return (_Ilist.size() == 0);
	}

template<class _Container>
	constexpr auto inline data(_Container& _Cont)
		-> decltype(_Cont.data())
	{	
	return (_Cont.data());
	}

template<class _Container>
	constexpr auto inline data(const _Container& _Cont)
		-> decltype(_Cont.data())
	{	
	return (_Cont.data());
	}

template<class _Ty,
	size_t _Size> inline
	constexpr _Ty *data(_Ty(&_Array)[_Size]) noexcept
	{	
	return (_Array);
	}

template<class _Elem> inline
	constexpr const _Elem *data(
		initializer_list<_Elem> _Ilist) noexcept
	{	
	return (_Ilist.begin());
	}

		
template<class _Ty,
	size_t _Size>
	class _Array_const_iterator
		: public _Iterator012<random_access_iterator_tag,
			_Ty,
			ptrdiff_t,
			const _Ty *,
			const _Ty&,
			_Iterator_base>
	{	
public:
	typedef _Array_const_iterator<_Ty, _Size> _Myiter;
	typedef random_access_iterator_tag iterator_category;

	typedef _Ty value_type;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef const _Ty *pointer;
	typedef const _Ty& reference;
	enum {_EEN_SIZE = _Size};	
 
	_Array_const_iterator()
		: _Ptr(0)
		{	
		}

	explicit _Array_const_iterator(pointer _Parg, size_t _Off = 0)
		: _Ptr(_Parg + _Off)
		{	
		}

	typedef pointer _Unchecked_type;

	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		_Ptr = _Right;
		return (*this);
		}

	_Unchecked_type _Unchecked() const
		{	
		return (_Ptr);
		}

	reference operator*() const
		{	
		return (*_Ptr);
		}

	pointer operator->() const
		{	
		return (pointer_traits<pointer>::pointer_to(**this));
		}

	_Myiter& operator++()
		{	
		++_Ptr;
		return (*this);
		}

	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}

	_Myiter& operator--()
		{	
		--_Ptr;
		return (*this);
		}

	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}

	_Myiter& operator+=(difference_type _Off)
		{	
		_Ptr += _Off;
		return (*this);
		}

	_Myiter operator+(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp += _Off);
		}

	_Myiter& operator-=(difference_type _Off)
		{	
		return (*this += -_Off);
		}

	_Myiter operator-(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp -= _Off);
		}

	difference_type operator-(const _Myiter& _Right) const
		{	
		return (_Ptr - _Right._Ptr);
		}

	reference operator[](difference_type _Off) const
		{	
		return (*(*this + _Off));
		}

	bool operator==(const _Myiter& _Right) const
		{	
		return (_Ptr == _Right._Ptr);
		}

	bool operator!=(const _Myiter& _Right) const
		{	
		return (!(*this == _Right));
		}

	bool operator<(const _Myiter& _Right) const
		{	
		return (_Ptr < _Right._Ptr);
		}

	bool operator>(const _Myiter& _Right) const
		{	
		return (_Right < *this);
		}

	bool operator<=(const _Myiter& _Right) const
		{	
		return (!(_Right < *this));
		}

	bool operator>=(const _Myiter& _Right) const
		{	
		return (!(*this < _Right));
		}

	pointer _Ptr;	

 




































































































































































































	};

template<class _Ty,
	size_t _Size> inline
	typename _Array_const_iterator<_Ty, _Size>::_Unchecked_type
		_Unchecked(_Array_const_iterator<_Ty, _Size> _Iter)
	{	
	return (_Iter._Unchecked());
	}

template<class _Ty,
	size_t _Size> inline
	_Array_const_iterator<_Ty, _Size>&
		_Rechecked(_Array_const_iterator<_Ty, _Size>& _Iter,
			typename _Array_const_iterator<_Ty, _Size>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}

template<class _Ty,
	size_t _Size> inline
	_Array_const_iterator<_Ty, _Size> operator+(
		typename _Array_const_iterator<_Ty, _Size>::difference_type _Off,
		_Array_const_iterator<_Ty, _Size> _Next)
	{	
	return (_Next += _Off);
	}

		
template<class _Ty,
	size_t _Size>
	class _Array_iterator
		: public _Array_const_iterator<_Ty, _Size>
	{	
public:
	typedef _Array_iterator<_Ty, _Size> _Myiter;
	typedef _Array_const_iterator<_Ty, _Size> _Mybase;
	typedef random_access_iterator_tag iterator_category;

	typedef _Ty value_type;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef _Ty *pointer;
	typedef _Ty& reference;

	_Array_iterator()
		{	
		}

	explicit _Array_iterator(pointer _Parg, size_t _Off = 0)
		: _Mybase(_Parg, _Off)
		{	
		}
	enum {_EEN_SIZE = _Size};	
	typedef pointer _Unchecked_type;

	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		((_Mybase *)this)->_Rechecked(_Right);
		return (*this);
		}

	_Unchecked_type _Unchecked() const
		{	
		return ((pointer)((_Mybase *)this)->_Unchecked());
		}

	reference operator*() const
		{	
		return ((reference)**(_Mybase *)this);
		}

	pointer operator->() const
		{	
		return (pointer_traits<pointer>::pointer_to(**this));
		}

	_Myiter& operator++()
		{	
		++*(_Mybase *)this;
		return (*this);
		}

	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}

	_Myiter& operator--()
		{	
		--*(_Mybase *)this;
		return (*this);
		}

	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}

	_Myiter& operator+=(difference_type _Off)
		{	
		*(_Mybase *)this += _Off;
		return (*this);
		}

	_Myiter operator+(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp += _Off);
		}

	_Myiter& operator-=(difference_type _Off)
		{	
		return (*this += -_Off);
		}

	_Myiter operator-(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp -= _Off);
		}

	difference_type operator-(const _Mybase& _Right) const
		{	
		return (*(_Mybase *)this - _Right);
		}

	reference operator[](difference_type _Off) const
		{	
		return (*(*this + _Off));
		}
	};

template<class _Ty,
	size_t _Size> inline
	typename _Array_iterator<_Ty, _Size>::_Unchecked_type
		_Unchecked(_Array_iterator<_Ty, _Size> _Iter)
	{	
	return (_Iter._Unchecked());
	}

template<class _Ty,
	size_t _Size> inline
	_Array_iterator<_Ty, _Size>&
		_Rechecked(_Array_iterator<_Ty, _Size>& _Iter,
			typename _Array_iterator<_Ty, _Size>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}

template<class _Ty,
	size_t _Size> inline
	_Array_iterator<_Ty, _Size> operator+(
		typename _Array_iterator<_Ty, _Size>::difference_type _Off,
		_Array_iterator<_Ty, _Size> _Next)
	{	
	return (_Next += _Off);
	}

		
template<class _RanIt>
	class move_iterator
	{	
public:
	typedef move_iterator<_RanIt> _Myt;
	typedef typename iterator_traits<_RanIt>::iterator_category
		iterator_category;
	typedef typename iterator_traits<_RanIt>::value_type
		value_type;
	typedef typename iterator_traits<_RanIt>::difference_type
		difference_type;
	typedef _RanIt pointer;
	typedef typename iterator_traits<_RanIt>::reference _Ref0;
	typedef conditional_t<is_reference<_Ref0>::value,
		remove_reference_t<_Ref0>&&, _Ref0> reference;
	typedef _RanIt iterator_type;

	move_iterator()
		: current()
		{	
		}

	explicit move_iterator(iterator_type _Right)
		: current(_Right)
		{	
		}

	template<class _RanIt2>
		move_iterator(const move_iterator<_RanIt2>& _Right)
		: current(_Right.base())
		{	
		}

	template<class _RanIt2>
		_Myt& operator=(const move_iterator<_RanIt2>& _Right)
		{	
		current = _Right.base();
		return (*this);
		}

	_RanIt base() const
		{	
		return (current);
		}

	reference operator*() const
		{	
		return (static_cast<reference>(*current));
		}

	pointer operator->() const
		{	
		return (current);
		}

	_Myt& operator++()
		{	
		++current;
		return (*this);
		}

	_Myt operator++(int)
		{	
		_Myt _Tmp = *this;
		++current;
		return (_Tmp);
		}

	_Myt& operator--()
		{	
		--current;
		return (*this);
		}

	_Myt operator--(int)
		{	
		_Myt _Tmp = *this;
		--current;
		return (_Tmp);
		}

	template<class _RanIt2>
		bool _Equal(const move_iterator<_RanIt2>& _Right) const
		{	
		return (current == _Right.base());
		}



	_Myt& operator+=(difference_type _Off)
		{	
		current += _Off;
		return (*this);
		}

	_Myt operator+(difference_type _Off) const
		{	
		return (_Myt(current + _Off));
		}

	_Myt& operator-=(difference_type _Off)
		{	
		current -= _Off;
		return (*this);
		}

	_Myt operator-(difference_type _Off) const
		{	
		return (_Myt(current - _Off));
		}

	reference operator[](difference_type _Off) const
		{	
		return (::std:: move(current[_Off]));
		}

	template<class _RanIt2>
		bool _Less(const move_iterator<_RanIt2>& _Right) const
		{	
		return (current < _Right.base());
		}

	difference_type operator-(const _Myt& _Right) const
		{	
		return (current - _Right.base());
		}

protected:
	iterator_type current;	
	};

template<class _RanIt>
	struct _Is_checked_helper<move_iterator<_RanIt> >
		: public _Is_checked_helper<_RanIt>
	{	
	};

		
template<class _RanIt,
	class _Diff> inline
	move_iterator<_RanIt>
		operator+(_Diff _Off,
		const move_iterator<_RanIt>& _Right)
	{	
	return (_Right + _Off);
	}

template<class _RanIt1,
	class _RanIt2>
	auto inline operator-(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
			-> decltype(_Left.base() - _Right.base())
	{	
	return (_Left.base() - _Right.base());
	}

template<class _RanIt1,
	class _RanIt2> inline
	bool operator==(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (_Left._Equal(_Right));
	}

template<class _RanIt1,
	class _RanIt2> inline
	bool operator!=(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (!(_Left == _Right));
	}

template<class _RanIt1,
	class _RanIt2> inline
	bool operator<(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (_Left._Less(_Right));
	}

template<class _RanIt1,
	class _RanIt2> inline
	bool operator>(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (_Right < _Left);
	}

template<class _RanIt1,
	class _RanIt2> inline
	bool operator<=(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (!(_Right < _Left));
	}

template<class _RanIt1,
	class _RanIt2> inline
	bool operator>=(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (!(_Left < _Right));
	}

		
template<class _RanIt> inline
	move_iterator<_RanIt> make_move_iterator(_RanIt _Iter)
	{	
	return (move_iterator<_RanIt>(_Iter));
	}

		
template<class _Traits>
	struct _Char_traits_eq
	{
	typedef typename _Traits::char_type _Elem;

	bool operator()(_Elem _Left, _Elem _Right) const
		{
		return (_Traits::eq(_Left, _Right));
		}
	};

		
template<class _Traits>
	struct _Char_traits_lt
	{
	typedef typename _Traits::char_type _Elem;

	bool operator()(_Elem _Left, _Elem _Right) const
		{
		return (_Traits::lt(_Left, _Right));
		}
	};

		
template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_memmove(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
	const char * const _First_ch = reinterpret_cast<const char *>(_First);
	const char * const _Last_ch = reinterpret_cast<const char *>(_Last);
	char * const _Dest_ch = reinterpret_cast<char *>(_Dest);
	const size_t _Count = _Last_ch - _First_ch;
	:: memmove(_Dest_ch, _First_ch, _Count);
	return (reinterpret_cast<_OutIt>(_Dest_ch + _Count));
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_unchecked1(_InIt _First, _InIt _Last,
		_OutIt _Dest, _General_ptr_iterator_tag)
	{	
	for (; _First != _Last; ++_Dest, (void)++_First)
		*_Dest = *_First;
	return (_Dest);
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_unchecked1(_InIt _First, _InIt _Last,
		_OutIt _Dest, _Trivially_copyable_ptr_iterator_tag)
	{	
	return (_Copy_memmove(_First, _Last, _Dest));
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_unchecked(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
		
	return (_Copy_unchecked1(_First, _Last,
		_Dest, _Ptr_copy_cat(_First, _Dest)));
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_no_deprecate(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
	;
	const auto _UFirst = _Unchecked(_First);
	const auto _ULast = _Unchecked(_Last);
	const auto _UDest = _Unchecked_n(_Dest, _Idl_distance(_UFirst, _ULast));
	return (_Rechecked(_Dest,
		_Copy_unchecked(_UFirst, _ULast, _UDest)));
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt copy(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
	struct _Unchecked_iterators { static void  _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
	return (_Copy_no_deprecate(_First, _Last, _Dest));
	}

 












		
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n_unchecked2(_InIt _First, _Diff _Count,
		_OutIt _Dest, input_iterator_tag)
	{	
	if (0 < _Count)
		{
		*_Dest = *_First;
		while (0 < --_Count)
			*++_Dest = *++_First;
		return (++_Dest);
		}

	return (_Dest);
	}

template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n_unchecked2(_InIt _First, _Diff _Count,
		_OutIt _Dest, forward_iterator_tag)
	{	
	for (; 0 < _Count; --_Count, (void)++_Dest, ++_First)
		*_Dest = *_First;
	return (_Dest);
	}

template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n_unchecked1(_InIt _First, _Diff _Count,
		_OutIt _Dest, _General_ptr_iterator_tag)
	{	
		
		
	return (_Copy_n_unchecked2(_First, _Count,
		_Dest, _Iter_cat_t<_InIt>()));
	}

template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n_unchecked1(_InIt _First, _Diff _Count,
		_OutIt _Dest, _Trivially_copyable_ptr_iterator_tag)
	{	
	if (0 < _Count)
		return (_Copy_memmove(_First, _First + _Count, _Dest));
	return (_Dest);
	}

template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n_unchecked(_InIt _First, _Diff _Count,
		_OutIt _Dest)
	{	
	return (_Copy_n_unchecked1(_First, _Count,
		_Dest, _Ptr_copy_cat(_First, _Dest)));
	}

template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest)
	{	
		
	struct _Unchecked_iterators { static void  _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
	return (_Rechecked(_Dest,
		_Copy_n_unchecked(_Unchecked_n(_First, _Count), _Count, _Unchecked_n(_Dest, _Count))));
	}

 







































		
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Copy_backward_memmove(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest)
	{	
	const char * const _First_ch = reinterpret_cast<const char *>(_First);
	const char * const _Last_ch = reinterpret_cast<const char *>(_Last);
	char * const _Dest_ch = reinterpret_cast<char *>(_Dest);
	const size_t _Count = _Last_ch - _First_ch;
	return (static_cast<_BidIt2>(
		:: memmove(_Dest_ch - _Count, _First_ch, _Count)));
	}

template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Copy_backward_unchecked(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, _General_ptr_iterator_tag)
	{	
	while (_First != _Last)
		*--_Dest = *--_Last;
	return (_Dest);
	}

template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Copy_backward_unchecked(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, _Trivially_copyable_ptr_iterator_tag)
	{	
	return (_Copy_backward_memmove(_First, _Last, _Dest));
	}

template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 copy_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest)
	{	
	struct _Unchecked_iterators { static void  _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
	;
	const auto _UFirst = _Unchecked(_First);
	const auto _ULast = _Unchecked(_Last);
	const auto _UDest = _Unchecked_n_backward(_Dest, _Idl_distance(_UFirst, _ULast));
	return (_Rechecked(_Dest,
		_Copy_backward_unchecked(_UFirst, _ULast, _UDest, _Ptr_copy_cat(_UFirst, _UDest))));
	}

		
template<class _InIt,
	class _OutIt> inline
	_OutIt _Move_unchecked1(_InIt _First, _InIt _Last,
		_OutIt _Dest, _General_ptr_iterator_tag)
	{	
	for (; _First != _Last; ++_Dest, (void)++_First)
		*_Dest = ::std:: move(*_First);
	return (_Dest);
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt _Move_unchecked1(_InIt _First, _InIt _Last,
		_OutIt _Dest, _Trivially_copyable_ptr_iterator_tag)
	{	
	return (_Copy_memmove(_First, _Last, _Dest));
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt _Move_unchecked(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
		
	return (_Move_unchecked1(_First, _Last,
		_Dest, _Ptr_move_cat(_First, _Dest)));
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt _Move_no_deprecate(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
		
	;
	const auto _UFirst = _Unchecked(_First);
	const auto _ULast = _Unchecked(_Last);
	const auto _UDest = _Unchecked_n(_Dest, _Idl_distance(_UFirst, _ULast));
	return (_Rechecked(_Dest,
		_Move_unchecked(_UFirst, _ULast, _UDest)));
	}

template<class _InIt,
	class _OutIt> inline
	_OutIt move(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
	struct _Unchecked_iterators { static void  _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
	return (_Move_no_deprecate(_First, _Last, _Dest));
	}

 












		
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Move_backward_unchecked1(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, _General_ptr_iterator_tag)
	{	
	while (_First != _Last)
		*--_Dest = ::std:: move(*--_Last);
	return (_Dest);
	}

template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Move_backward_unchecked1(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, _Trivially_copyable_ptr_iterator_tag)
	{	
	return (_Copy_backward_memmove(_First, _Last, _Dest));
	}

template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Move_backward_unchecked(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest)
	{	
		
	return (_Move_backward_unchecked1(_First, _Last,
		_Dest, _Ptr_move_cat(_First, _Dest)));
	}

template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 move_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest)
	{	
	struct _Unchecked_iterators { static void  _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
	;
	const auto _UFirst = _Unchecked(_First);
	const auto _ULast = _Unchecked(_Last);
	const auto _UDest = _Unchecked_n_backward(_Dest, _Idl_distance(_UFirst, _ULast));
	return (_Rechecked(_Dest,
		_Move_backward_unchecked(_UFirst, _ULast, _UDest)));
	}

		
template<class _Ty>
	struct _Is_character
		: false_type
		{	
		};

template<>
	struct _Is_character<char>
		: true_type
		{	
		};

template<>
	struct _Is_character<signed char>
		: true_type
		{	
		};

template<>
	struct _Is_character<unsigned char>
		: true_type
		{	
		};

template<class _FwdIt,
	class _Ty>
	struct _Fill_memset_is_safe_helper
	{	
	typedef _Iter_value_t<_FwdIt> _Value_type;
	typedef _Conjunction_t<
		is_pointer<_FwdIt>,
		disjunction<
			conjunction<
				_Is_character<_Ty>,
				_Is_character<_Value_type>>,
			conjunction<
				is_same<bool, _Ty>,
				is_same<bool, _Value_type>>
		>> type;
	};

template<class _FwdIt,
	class _Ty> inline
	typename _Fill_memset_is_safe_helper<_FwdIt, _Ty>::type
	_Fill_memset_is_safe(const _FwdIt&, const _Ty&)
	{	
	return {};
	}

template<class _FwdIt,
	class _Ty> inline
	void _Fill_unchecked1(_FwdIt _First, _FwdIt _Last, const _Ty& _Val, false_type)
	{	
	for (; _First != _Last; ++_First)
		*_First = _Val;
	}

template<class _FwdIt,
	class _Ty> inline
	void _Fill_unchecked1(_FwdIt _First, _FwdIt _Last, const _Ty& _Val, true_type)
	{	
	:: memset(_First, _Val, _Last - _First);
	}

template<class _FwdIt,
	class _Ty> inline
	void _Fill_unchecked(_FwdIt _First, _FwdIt _Last, const _Ty& _Val)
	{	
	_Fill_unchecked1(_First, _Last, _Val, _Fill_memset_is_safe(_First, _Val));
	}

template<class _FwdIt,
	class _Ty> inline
	void fill(_FwdIt _First, _FwdIt _Last, const _Ty& _Val)
	{	
	;
	_Fill_unchecked(_Unchecked(_First), _Unchecked(_Last), _Val);
	}

		
template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt _Fill_n_unchecked1(_OutIt _Dest, _Diff _Count, const _Ty& _Val, false_type)
	{	
	for (; 0 < _Count; --_Count, (void)++_Dest)
		*_Dest = _Val;
	return (_Dest);
	}

template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt _Fill_n_unchecked1(_OutIt _Dest, _Diff _Count, const _Ty& _Val, true_type)
	{	
	if (0 < _Count)
		{
		:: memset(_Dest, _Val, _Count);
		return (_Dest + _Count);
		}

	return (_Dest);
	}

template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt _Fill_n_unchecked(_OutIt _Dest, _Diff _Count, const _Ty& _Val)
	{	
		
	return (_Fill_n_unchecked1(_Dest, _Count, _Val, _Fill_memset_is_safe(_Dest, _Val)));
	}

template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt fill_n(_OutIt _Dest, _Diff _Count, const _Ty& _Val)
	{	
	return (_Rechecked(_Dest,
		_Fill_n_unchecked(_Unchecked_n(_Dest, _Count), _Count, _Val)));
	}

		
template<class _Elem1,
	class _Elem2>
	struct _Value_equality_is_bitwise_equality
		: bool_constant<static_cast<_Elem1>(-1) == static_cast<_Elem2>(-1)>
	{	
		
		
		
	};

template<class _Elem1,
	class _Elem2,
	class _Pr>
	struct _Equal_memcmp_is_safe_helper
		: false_type
	{	
		
	};

template<class _Elem1,
	class _Elem2>
	struct _Equal_memcmp_is_safe_helper<_Elem1, _Elem2, equal_to<>>
		: _Conjunction_t<
			_Is_same_size<_Elem1, _Elem2>,
			is_integral<_Elem1>,
			is_integral<_Elem2>,
			negation<is_same<bool, _Elem1>>,
			negation<is_same<bool, _Elem2>>,
			negation<is_volatile<_Elem1>>,
			negation<is_volatile<_Elem2>>,
			
			
			_Value_equality_is_bitwise_equality<_Elem1, _Elem2>
		>
	{	
	};

template<class _Elem1,
	class _Elem2>
	struct _Equal_memcmp_is_safe_helper<_Elem1 *, _Elem2 *, equal_to<>>
		: is_same<remove_cv_t<_Elem1>, remove_cv_t<_Elem2>>::type
	{	
	};

template<class _Elem>
	struct _Equal_memcmp_is_safe_helper<_Elem, _Elem, _Char_traits_eq<char_traits<_Elem>>>
		: _Equal_memcmp_is_safe_helper<_Elem, _Elem, equal_to<>>::type
	{	
	};

template<class _Elem>
	struct _Equal_memcmp_is_safe_helper<_Elem, _Elem, equal_to<_Elem>>
		: _Equal_memcmp_is_safe_helper<_Elem, _Elem, equal_to<>>::type
	{	
		
	};

template<class _Iter1,
	class _Iter2,
	class _Pr> inline
	false_type _Equal_memcmp_is_safe(const _Iter1&, const _Iter2&, const _Pr&)
	{	
	return {};
	}

template<class _Obj1,
	class _Obj2,
	class _Pr> inline
	typename _Equal_memcmp_is_safe_helper<
		remove_const_t<_Obj1>,
		remove_const_t<_Obj2>,
		_Pr>::type
		_Equal_memcmp_is_safe(_Obj1 * const&, _Obj2 * const&, const _Pr&)
	{	
	return {};
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Equal_unchecked1(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr& _Pred, false_type)
	{	
	for (; _First1 != _Last1; ++_First1, (void)++_First2)
		if (!_Pred(*_First1, *_First2))
			return (false);
	return (true);
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Equal_unchecked1(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr&, true_type)
	{	
	const char * const _First1_ch = reinterpret_cast<const char *>(_First1);
	const char * const _First2_ch = reinterpret_cast<const char *>(_First2);
	const size_t _Count = reinterpret_cast<const char *>(_Last1) - _First1_ch;
	return (:: memcmp(_First1_ch, _First2_ch, _Count) == 0);
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Equal_unchecked(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr& _Pred)
	{	
	return (_Equal_unchecked1(_First1, _Last1, _First2, _Pred,
		_Equal_memcmp_is_safe(_First1, _First2, _Pred)));
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Equal_no_deprecate(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr& _Pred)
	{	
	;
	const auto _UFirst1 = _Unchecked(_First1);
	const auto _ULast1 = _Unchecked(_Last1);
	const auto _UFirst2 = _Unchecked_n(_First2, _Idl_distance(_UFirst1, _ULast1));
	return (_Equal_unchecked(_UFirst1, _ULast1, _UFirst2, _Pred));
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool equal(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr _Pred)
	{	
	struct _Unchecked_iterators { static void  _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_First2)));
	return (_Equal_no_deprecate(_First1, _Last1, _First2, _Pred));
	}

 













		
template<class _InIt1,
	class _InIt2> inline
	bool equal(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2)
	{	
	return (::std:: equal(_First1, _Last1, _First2,
		equal_to<>()));
	}

 











		
template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Equal_unchecked(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr& _Pred,
			input_iterator_tag, input_iterator_tag)
	{	
		
	for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, (void)++_First2)
		if (!_Pred(*_First1, *_First2))
			return (false);
	return (_First1 == _Last1 && _First2 == _Last2);
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Equal_unchecked(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr& _Pred,
			random_access_iterator_tag, random_access_iterator_tag)
	{	
		
	if (_Last1 - _First1 != _Last2 - _First2)
		return (false);
	return (_Equal_unchecked(_First1, _Last1, _First2, _Pred));
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool equal(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr _Pred)
	{	
	;
	;
	return (_Equal_unchecked(_Unchecked(_First1), _Unchecked(_Last1),
		_Unchecked(_First2), _Unchecked(_Last2), _Pred,
			_Iter_cat_t<_InIt1>(), _Iter_cat_t<_InIt2>()));
	}

		
template<class _InIt1,
	class _InIt2> inline
	bool equal(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2)
	{	
	return (::std:: equal(_First1, _Last1, _First2, _Last2,
		equal_to<>()));
	}

		
template<class _Elem1,
	class _Elem2,
	class _FTy>
	struct _Lex_compare_check_element_types_helper
		: _Conjunction_t<
			_Is_character<_Elem1>,
			_Is_character<_Elem2>,
			_Is_character<_FTy>,
			is_unsigned<_FTy>
		>
	{	
	};

template<class _Elem1,
	class _Elem2>
	struct _Lex_compare_check_element_types_helper<_Elem1, _Elem2, void>
		: _Conjunction_t<
			_Is_character<_Elem1>,
			_Is_character<_Elem2>,
			is_unsigned<_Elem1>,
			is_unsigned<_Elem2>
		>
	{	
	};

template<class _Memcmp_pr>
	struct _Lex_compare_optimize
	{	
	};

template<class _Memcmp_pr,
	class _Obj1,
	class _Obj2,
	class _FTy>
	using _Lex_compare_check_element_types = _Lex_compare_optimize<conditional_t<
		_Lex_compare_check_element_types_helper<remove_const_t<_Obj1>, remove_const_t<_Obj2>, _FTy>::value,
		_Memcmp_pr, void>>;	

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	_Lex_compare_optimize<void> _Lex_compare_memcmp_classify(const _InIt1&, const _InIt2&, const _Pr&)
	{	
		
	return {};
	}

template<class _Obj1,
	class _Obj2,
	class _FTy> inline
	_Lex_compare_check_element_types<less<int>, _Obj1, _Obj2, _FTy>
		_Lex_compare_memcmp_classify(_Obj1 * const&, _Obj2 * const&, const less<_FTy>&)
	{	
	return {};
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Lex_compare_unchecked1(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr& _Pred, _Lex_compare_optimize<void>)
	{	
	for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, (void)++_First2)
		{	
		if (_Pred(*_First1, *_First2))
			return (true);
		else if (_Pred(*_First2, *_First1))
			return (false);
		}

	return (_First1 == _Last1 && _First2 != _Last2);
	}

template<class _InIt1,
	class _InIt2,
	class _Pr,
	class _Memcmp_pr> inline
	bool _Lex_compare_unchecked1(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr&, _Lex_compare_optimize<_Memcmp_pr>)
	{	
	const size_t _Num1 = _Last1 - _First1;
	const size_t _Num2 = _Last2 - _First2;
	const int _Ans = :: memcmp(_First1, _First2, _Num1 < _Num2 ? _Num1 : _Num2);
	return (_Memcmp_pr{}(_Ans, 0) || _Ans == 0 && _Num1 < _Num2);
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Lex_compare_unchecked(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr& _Pred)
	{	
	return (_Lex_compare_unchecked1(_First1, _Last1, _First2, _Last2, _Pred,
		_Lex_compare_memcmp_classify(_First1, _First2, _Pred)));
	}

template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr _Pred)
	{	
	;
	;
	return (_Lex_compare_unchecked(_Unchecked(_First1), _Unchecked(_Last1),
		_Unchecked(_First2), _Unchecked(_Last2), _Pred));
	}

		
template<class _InIt1,
	class _InIt2> inline
	bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2)
	{	
	return (::std:: lexicographical_compare(_First1, _Last1,
		_First2, _Last2, less<>()));
	}

		
template<class _Ty> inline
	bool _Within_limits(const _Ty& _Val, true_type, true_type, _Any_tag)
	{	
	return ((-128) <= _Val && _Val <= 127);
	}

template<class _Ty> inline
	bool _Within_limits(const _Ty& _Val, true_type, false_type, true_type)
	{	
	return (_Val <= 127 || static_cast<_Ty>((-128)) <= _Val);
	}

template<class _Ty> inline
	bool _Within_limits(const _Ty& _Val, true_type, false_type, false_type)
	{	
	return (_Val <= 127);
	}

template<class _Ty> inline
	bool _Within_limits(const _Ty& _Val, false_type, true_type, _Any_tag)
	{	
	return (0 <= _Val && _Val <= 0xff);
	}

template<class _Ty> inline
	bool _Within_limits(const _Ty& _Val, false_type, false_type, _Any_tag)
	{	
	return (_Val <= 0xff);
	}

template<class _InIt,
	class _Ty> inline
	bool _Within_limits(_InIt, const _Ty& _Val)
	{	
	typedef typename remove_pointer<_InIt>::type _Elem;
	return (_Within_limits(_Val, is_signed<_Elem>(), is_signed<_Ty>(),
		integral_constant<bool, -1 == static_cast<_Ty>(-1)>()));
	}

template<class _InIt> inline
	bool _Within_limits(_InIt, const bool&)
	{	
	return (true);
	}

template<class _InIt,
	class _Ty> inline
	_InIt _Find_unchecked1(_InIt _First, _InIt _Last, const _Ty& _Val, true_type)
	{	
	if (!_Within_limits(_First, _Val))
		return (_Last);
	_First = static_cast<_InIt>(:: memchr(
		_First, static_cast<unsigned char>(_Val), _Last - _First));
	return (_First ? _First : _Last);
	}

template<class _InIt,
	class _Ty> inline
	_InIt _Find_unchecked1(_InIt _First, _InIt _Last, const _Ty& _Val, false_type)
	{	
	for (; _First != _Last; ++_First)
		if (*_First == _Val)
			break;
	return (_First);
	}

template<class _InIt,
	class _Ty> inline
	_InIt _Find_unchecked(_InIt _First, _InIt _Last, const _Ty& _Val)
	{	
	
	typedef integral_constant<bool,
		(is_same<_InIt, char *>::value
		|| is_same<_InIt, signed char *>::value
		|| is_same<_InIt, unsigned char *>::value
		|| is_same<_InIt, const char *>::value
		|| is_same<_InIt, const signed char *>::value
		|| is_same<_InIt, const unsigned char *>::value)
		&& is_integral<_Ty>::value
	> _Memchr_opt;
	return (_Find_unchecked1(_First, _Last, _Val, _Memchr_opt()));
	}

template<class _InIt,
	class _Ty> inline
	_InIt find(_InIt _First, _InIt _Last, const _Ty& _Val)
	{	
	;
	return (_Rechecked(_First,
		_Find_unchecked(_Unchecked(_First), _Unchecked(_Last), _Val)));
	}

		
template<class _InIt,
	class _Ty,
	class _Pr> inline
	_InIt _Find_pr(_InIt _First, _InIt _Last, const _Ty& _Val, _Pr& _Pred)
	{	
	for (; _First != _Last; ++_First)
		if (_Pred(*_First, _Val))
			break;
	return (_First);
	}

		
template<class _InIt,
	class _Ty> inline
	_Iter_diff_t<_InIt>
		_Count_unchecked(_InIt _First, _InIt _Last, const _Ty& _Val)
	{	
	_Iter_diff_t<_InIt> _Count = 0;

	for (; _First != _Last; ++_First)
		if (*_First == _Val)
			++_Count;
	return (_Count);
	}

template<class _InIt,
	class _Ty> inline
	_Iter_diff_t<_InIt>
		count(_InIt _First, _InIt _Last, const _Ty& _Val)
	{	
	;
	return (_Count_unchecked(_Unchecked(_First), _Unchecked(_Last), _Val));
	}

		
template<class _InIt,
	class _Ty,
	class _Pr> inline
	_Iter_diff_t<_InIt>
		_Count_pr(_InIt _First, _InIt _Last, const _Ty& _Val, _Pr& _Pred)
	{	
	_Iter_diff_t<_InIt> _Count = 0;

	for (; _First != _Last; ++_First)
		if (_Pred(*_First, _Val))
			++_Count;
	return (_Count);
	}

		
template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	void _Trim_matching_suffixes(_FwdIt1&, _FwdIt2&, _Pr&,
		forward_iterator_tag, forward_iterator_tag)
	{	
	}

template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	void _Trim_matching_suffixes(_FwdIt1& _Last1, _FwdIt2& _Last2, _Pr& _Pred,
		bidirectional_iterator_tag, bidirectional_iterator_tag)
	{	
	
	while (_Pred(*--_Last1, *--_Last2))
		;	
	++_Last1;
	++_Last2;
	}

		
template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool _Check_match_counts(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _FwdIt2 _Last2, _Pr& _Pred)
	{	
	_Trim_matching_suffixes(_Last1, _Last2, _Pred,
		_Iter_cat_t<_FwdIt1>(), _Iter_cat_t<_FwdIt2>());
	for (_FwdIt1 _Next1 = _First1; _Next1 != _Last1; ++_Next1)
		if (_Next1 == _Find_pr(_First1, _Next1, *_Next1, _Pred))
			{	
			_Iter_diff_t<_FwdIt2> _Count2 = _Count_pr(_First2, _Last2, *_Next1, _Pred);
			if (_Count2 == 0)
				return (false);	
			_FwdIt1 _Skip1 = ::std:: next(_Next1);
			_Iter_diff_t<_FwdIt1> _Count1 = _Count_pr(_Skip1, _Last1, *_Next1, _Pred) + 1;
			if (_Count2 != _Count1)
				return (false);	
			}

	return (true);
	}

		
template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool _Is_permutation_unchecked(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _Pr& _Pred)
	{	
	for (; _First1 != _Last1; ++_First1, (void)++_First2)
		if (!_Pred(*_First1, *_First2))
			{	
			_FwdIt2 _Last2 = ::std:: next(_First2,
				::std:: distance(_First1, _Last1));
			return (_Check_match_counts(_First1, _Last1,
				_First2, _Last2, _Pred));
			}

	return (true);
	}

template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool _Is_permutation_no_deprecate(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _Pr& _Pred)
	{	
	;
	const auto _UFirst1 = _Unchecked(_First1);
	const auto _ULast1 = _Unchecked(_Last1);
	const auto _UFirst2 = _Unchecked_n(_First2, _Idl_distance(_UFirst1, _ULast1));
	return (_Is_permutation_unchecked(_UFirst1, _ULast1, _UFirst2, _Pred));
	}

template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _Pr _Pred)
	{	
	struct _Unchecked_iterators { static void  _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_First2)));
	return (_Is_permutation_no_deprecate(_First1, _Last1, _First2, _Pred));
	}

 













		
template<class _FwdIt1,
	class _FwdIt2> inline
	bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2)
	{	
	return (::std:: is_permutation(_First1, _Last1,
		_First2, equal_to<>()));
	}


 










		
template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool _Is_permutation_unchecked(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _FwdIt2 _Last2, _Pr& _Pred,
		forward_iterator_tag, forward_iterator_tag)
	{	
		
	for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, (void)++_First2)
		if (!_Pred(*_First1, *_First2))
			{	
			if (::std:: distance(_First1, _Last1)
				!= ::std:: distance(_First2, _Last2))
				return (false);	
			else
				return (_Check_match_counts(_First1, _Last1,
					_First2, _Last2, _Pred));
			}

	return (_First1 == _Last1 && _First2 == _Last2);
	}

template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool _Is_permutation_unchecked(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _FwdIt2 _Last2, _Pr& _Pred,
		random_access_iterator_tag, random_access_iterator_tag)
	{	
		
	if (_Last1 - _First1 != _Last2 - _First2)
		return (false);
	return (_Is_permutation_unchecked(_First1, _Last1, _First2, _Pred));
	}

template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred)
	{	
		
	;
	;
	return (_Is_permutation_unchecked(_Unchecked(_First1), _Unchecked(_Last1),
		_Unchecked(_First2), _Unchecked(_Last2), _Pred,
		_Iter_cat_t<_FwdIt1>(), _Iter_cat_t<_FwdIt2>()));
	}

		
template<class _FwdIt1,
	class _FwdIt2> inline
	bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _FwdIt2 _Last2)
	{	
	return (::std:: is_permutation(_First1, _Last1,
		_First2, _Last2, equal_to<>()));
	}

		
template<class _BidIt> inline
	void _Reverse_unchecked(_BidIt _First, _BidIt _Last)
	{	
	for (; _First != _Last && _First != --_Last; ++_First)
		::std:: iter_swap(_First, _Last);
	}

template<class _BidIt> inline
	void reverse(_BidIt _First, _BidIt _Last)
	{	
	;
	_Reverse_unchecked(_Unchecked(_First), _Unchecked(_Last));
	}

		
template<class _FwdIt> inline
	_FwdIt _Rotate_unchecked1(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last,
		forward_iterator_tag)
	{	
	for (_FwdIt _Next = _Mid, _Res = _Last; ; )
		{	
		::std:: iter_swap(_First, _Next);
		if (++_First == _Mid)
			{	
			if (++_Next == _Last)
				return (_Res == _Last ? _Mid : _Res);
			else
				_Mid = _Next;	
			}
		else if (++_Next == _Last)
			{	
			if (_Res == _Last)
				_Res = _First;
			_Next = _Mid;
			}
		}
	}

template<class _BidIt> inline
	pair<_BidIt, _BidIt> _Reverse_until_sentinel_unchecked(
		_BidIt _First, _BidIt _Sentinel, _BidIt _Last)
	{	
	while (_First != _Sentinel && _Last != _Sentinel)
		::std:: iter_swap(_First++, --_Last);
	return (::std:: make_pair(_First, _Last));
	}

template<class _BidIt> inline
	_BidIt _Rotate_unchecked1(_BidIt _First, _BidIt _Mid, _BidIt _Last,
		bidirectional_iterator_tag)
	{	
	_Reverse_unchecked(_First, _Mid);
	_Reverse_unchecked(_Mid, _Last);
	pair<_BidIt, _BidIt> _Tmp = _Reverse_until_sentinel_unchecked(_First, _Mid, _Last);
	_Reverse_unchecked(_Tmp.first, _Tmp.second);
	return (_Mid != _Tmp.first ? _Tmp.first : _Tmp.second);
	}

template<class _RanIt> inline
	_RanIt _Rotate_unchecked1(_RanIt _First, _RanIt _Mid, _RanIt _Last,
		random_access_iterator_tag)
	{	
	_Reverse_unchecked(_First, _Mid);
	_Reverse_unchecked(_Mid, _Last);
	_Reverse_unchecked(_First, _Last);
	return (_First + (_Last - _Mid));
	}

template<class _FwdIt> inline
	_FwdIt _Rotate_unchecked(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last)
	{	
	if (_First == _Mid)
		return (_Last);
	if (_Mid == _Last)
		return (_First);
	return (_Rotate_unchecked1(_First, _Mid, _Last, _Iter_cat_t<_FwdIt>()));
	}

template<class _FwdIt> inline
	_FwdIt rotate(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last)
	{	
	;
	;
	return (_Rechecked(_First,
		_Rotate_unchecked(_Unchecked(_First), _Unchecked(_Mid),
		_Unchecked(_Last))));
	}

	
template<class _Diff,
	class _Urng>
	class _Rng_from_urng
	{	
public:
	typedef typename make_unsigned<_Diff>::type _Ty0;
	typedef typename _Urng::result_type _Ty1;

	typedef typename _If<sizeof (_Ty1) < sizeof (_Ty0),
		_Ty0, _Ty1>::type _Udiff;


	explicit _Rng_from_urng(_Urng& _Func)
		: _Ref(_Func), _Bits(8 * sizeof (_Udiff)), _Bmask(_Udiff(-1))
		{	
		for (; (_Urng::max)() - (_Urng::min)() < _Bmask; _Bmask >>= 1)
			--_Bits;
		}

	_Diff operator()(_Diff _Index)
		{	
		for (; ; )
			{	
			_Udiff _Ret = 0;	
			_Udiff _Mask = 0;	

			while (_Mask < _Udiff(_Index - 1))
				{	
				_Ret <<= _Bits - 1;	
				_Ret <<= 1;
				_Ret |= _Get_bits();
				_Mask <<= _Bits - 1;	
				_Mask <<= 1;
				_Mask |= _Bmask;
				}

			
			if (_Ret / _Index < _Mask / _Index
				|| _Mask % _Index == _Udiff(_Index - 1))
				return (_Ret % _Index);
			}
		}

	_Udiff _Get_all_bits()
		{	
		_Udiff _Ret = 0;

		for (size_t _Num = 0; _Num < 8 * sizeof (_Udiff);
			_Num += _Bits)
			{	
			_Ret <<= _Bits - 1;	
			_Ret <<= 1;
			_Ret |= _Get_bits();
			}

		return (_Ret);
		}

	_Rng_from_urng(const _Rng_from_urng&) = delete;
	_Rng_from_urng& operator=(const _Rng_from_urng&) = delete;

private:
	_Udiff _Get_bits()
		{	
		for (; ; )
			{	
			_Udiff _Val = _Ref() - (_Urng::min)();

			if (_Val <= _Bmask)
				return (_Val);
			}
		}

	_Urng& _Ref;	
	size_t _Bits;	
	_Udiff _Bmask;	
	};

		
template<class _Elem>
	class __declspec(dllimport) _Yarn
	{	
public:
	typedef _Yarn<_Elem> _Myt;

	 _Yarn()
		: _Myptr(0), _Nul(0)
		{	
		}

	 _Yarn(const _Myt& _Right)
		: _Myptr(0), _Nul(0)
		{	
		*this = _Right;
		}

	 _Yarn(const _Elem * _Right)
		: _Myptr(0), _Nul(0)
		{	
		*this = _Right;
		}

	_Myt&  operator=(const _Myt& _Right)
		{	
		return (*this = _Right._Myptr);
		}

	_Myt&  operator=(const _Elem * _Right)
		{	
		if (_Myptr != _Right)
			{	
			_Tidy();

			if (_Right != 0)
				{	
				const _Elem *_Ptr = _Right;
				while (*_Ptr != (_Elem)0)
					++_Ptr;
				size_t _Count = ((const char *)++_Ptr - (const char *)_Right);

 




				_Myptr = (_Elem *):: malloc(_Count);
 

				if (_Myptr != 0)
					:: memcpy(_Myptr, _Right, _Count);
				}
			}

		return (*this);
		}

	 ~_Yarn() noexcept
		{	
		_Tidy();
		}

	bool  empty() const
		{	
		return (_Myptr == 0);
		}

	  const _Elem * c_str() const
		{	
		return (_Myptr != 0 ? _Myptr : &_Nul);
		}

	bool  _Empty() const
		{	
		return (_Myptr == 0);
		}

	  const _Elem * _C_str() const
		{	
		return (_Myptr != 0 ? _Myptr : &_Nul);
		}

private:
	void  _Tidy()
		{	
		if (_Myptr != 0)

 



			:: free(_Myptr);
 

		_Myptr = 0;
		}

	_Elem * _Myptr;	
	_Elem _Nul;		
	};


		
template<class _Container>
	class back_insert_iterator
		: public _Outit
	{	
public:
	using container_type = _Container;

	explicit back_insert_iterator(_Container& _Cont)
		: container(::std:: addressof(_Cont))
		{	
		}

	back_insert_iterator& operator=(const typename _Container::value_type& _Val)
		{	
		container->push_back(_Val);
		return (*this);
		}

	back_insert_iterator& operator=(typename _Container::value_type&& _Val)
		{	
		container->push_back(::std:: move(_Val));
		return (*this);
		}

	back_insert_iterator& operator*()
		{	
		return (*this);
		}

	back_insert_iterator& operator++()
		{	
		return (*this);
		}

	back_insert_iterator operator++(int)
		{	
		return (*this);
		}

protected:
	_Container *container;	
	};

template<class _Container>
	struct _Is_checked_helper<back_insert_iterator<_Container> >
		: public true_type
	{	
	};


		
template<class _Container> inline
	back_insert_iterator<_Container> back_inserter(_Container& _Cont)
	{	
	return (back_insert_iterator<_Container>(_Cont));
	}


	
template<class _Ty,
	class _Alloc,
	class = void>
	struct _Has_allocator_type
		: false_type
	{	
	};

template<class _Ty,
	class _Alloc>
	struct _Has_allocator_type<_Ty, _Alloc, void_t<typename _Ty::allocator_type>>
		: is_convertible<_Alloc, typename _Ty::allocator_type>::type
	{	
	};

		
struct allocator_arg_t
	{	
	};

constexpr allocator_arg_t allocator_arg{};

[[noreturn]] __declspec(dllimport) void __cdecl _Xbad_alloc();
[[noreturn]] __declspec(dllimport) void __cdecl _Xinvalid_argument(  const char *);
[[noreturn]] __declspec(dllimport) void __cdecl _Xlength_error(  const char *);
[[noreturn]] __declspec(dllimport) void __cdecl _Xout_of_range(  const char *);
[[noreturn]] __declspec(dllimport) void __cdecl _Xoverflow_error(  const char *);
[[noreturn]] __declspec(dllimport) void __cdecl _Xruntime_error(  const char *);
}

namespace std {
		
template<class _Ty,
	class _Alloc>
	struct uses_allocator
		: _Has_allocator_type<_Ty, _Alloc>::type
	{	
	};

template<class _Ty,
	class _Alloc>
	constexpr bool uses_allocator_v = uses_allocator<_Ty, _Alloc>::value;
}	
 
 #pragma warning(pop)
 #pragma pack(pop)










 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

 #pragma warning(disable: 4494)	
								

 
  
 

namespace std {



 




 

 









		
inline
	__declspec(allocator) void *_Allocate(size_t _Count, size_t _Sz,
		bool _Try_aligned_allocation = true)
	{	
	void *_Ptr = 0;

	if (_Count == 0)
		return (_Ptr);

	
	if ((size_t)(-1) / _Sz < _Count)
		_Xbad_alloc();	
	const size_t _User_size = _Count * _Sz;

 
	if (_Try_aligned_allocation
		&& 4096 <= _User_size)
		{	
		static_assert(sizeof (void *) < 32,
			"Big allocations should at least match vector register size");
		const size_t _Block_size = (sizeof(void *) + 32 - 1) + _User_size;
		if (_Block_size <= _User_size)
			_Xbad_alloc();	
		const uintptr_t _Ptr_container =
			reinterpret_cast<uintptr_t>(::operator new(_Block_size));
		{ if (!(_Ptr_container != 0)) { ((void)0); ::_invalid_parameter_noinfo_noreturn(); } ; };
		_Ptr = reinterpret_cast<void *>((_Ptr_container + (sizeof(void *) + 32 - 1))
			& ~(32 - 1));
		static_cast<uintptr_t *>(_Ptr)[-1] = _Ptr_container;

 


		}
	else
 



		{	
		_Ptr = ::operator new(_User_size);
		{ if (!(_Ptr != 0)) { ((void)0); ::_invalid_parameter_noinfo_noreturn(); } ; };
		}
	return (_Ptr);
	}

		
inline
	void _Deallocate(void * _Ptr, size_t _Count, size_t _Sz)
	{	
 
	{ if (!(_Count <= (size_t)(-1) / _Sz)) { ((void)0); ::_invalid_parameter_noinfo_noreturn(); } ; };
	const size_t _User_size = _Count * _Sz;
	if (4096 <= _User_size)
		{	
		const uintptr_t _Ptr_user = reinterpret_cast<uintptr_t>(_Ptr);
		{ if (!((_Ptr_user & (32 - 1)) == 0)) { ((void)0); ::_invalid_parameter_noinfo_noreturn(); } ; };
		const uintptr_t _Ptr_ptr = _Ptr_user - sizeof(void *);
		const uintptr_t _Ptr_container =
			*reinterpret_cast<uintptr_t *>(_Ptr_ptr);

 







		
		{ if (!(_Ptr_container < _Ptr_user)) { ((void)0); ::_invalid_parameter_noinfo_noreturn(); } ; };

 




		{ if (!(sizeof(void *) <= _Ptr_user - _Ptr_container)) { ((void)0); ::_invalid_parameter_noinfo_noreturn(); } ; };
 

		{ if (!(_Ptr_user - _Ptr_container <= (sizeof(void *) + 32 - 1))) { ((void)0); ::_invalid_parameter_noinfo_noreturn(); } ; };

		_Ptr = reinterpret_cast<void *>(_Ptr_container);
		}

 




	::operator delete(_Ptr);
	}

		
template<class _Ty,
	class... _Types> inline
	void _Construct_in_place(_Ty& _Obj, _Types&&... _Args)
		noexcept((is_nothrow_constructible<_Ty, _Types...>::value))
	{	
	::new (const_cast<void *>(static_cast<const volatile void *>(::std:: addressof(_Obj))))
		_Ty(::std:: forward<_Types>(_Args)...);
	}

		
template<class _Alty>
	struct _Is_simple_alloc
		: _Cat_base<is_same<typename _Alty::size_type, size_t>::value
		&& is_same<typename _Alty::difference_type, ptrdiff_t>::value
		&& is_same<typename _Alty::pointer,
			typename _Alty::value_type *>::value
		&& is_same<typename _Alty::const_pointer,
			const typename _Alty::value_type *>::value
		&& is_same<typename _Alty::reference,
			typename _Alty::value_type&>::value
		&& is_same<typename _Alty::const_reference,
			const typename _Alty::value_type&>::value>
	{	
	};

		
template<class _Value_type>
	struct _Simple_types
	{	
	typedef _Value_type value_type;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef value_type *pointer;
	typedef const value_type *const_pointer;
	typedef value_type& reference;
	typedef const value_type& const_reference;
	};

		
template<class _Ty>
	struct _Get_first_parameter;

template<template<class, class...> class _Ty,
	class _First,
	class... _Rest>
	struct _Get_first_parameter<_Ty<_First, _Rest...> >
	{	
	typedef _First type;
	};

		
template<class _Newfirst,
	class _Ty>
	struct _Replace_first_parameter;

template<class _Newfirst,
	template<class, class...> class _Ty,
	class _First,
	class... _Rest>
	struct _Replace_first_parameter<_Newfirst, _Ty<_First, _Rest...> >
	{	
	typedef _Ty<_Newfirst, _Rest...> type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_element_type
	{	
	typedef typename _Get_first_parameter<_Ty>::type type;
	};

template<class _Ty>
	struct _Get_element_type<_Ty, void_t<typename _Ty::element_type>>
	{	
	typedef typename _Ty::element_type type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_ptr_difference_type
	{	
	typedef ptrdiff_t type;
	};

template<class _Ty>
	struct _Get_ptr_difference_type<_Ty, void_t<typename _Ty::difference_type>>
	{	
	typedef typename _Ty::difference_type type;
	};

		
template<class _Ty,
	class _Other,
	class = void>
	struct _Get_rebind_alias
	{	
	typedef typename _Replace_first_parameter<_Other, _Ty>::type type;
	};

template<class _Ty,
	class _Other>
	struct _Get_rebind_alias<_Ty, _Other, void_t<typename _Ty::template rebind<_Other>>>
	{	
	typedef typename _Ty::template rebind<_Other> type;
	};

		
template<class _Ty>
	struct pointer_traits
	{	
	typedef typename _Get_element_type<_Ty>::type element_type;
	typedef _Ty pointer;
	typedef typename _Get_ptr_difference_type<_Ty>::type difference_type;

	template<class _Other>
		using rebind = typename _Get_rebind_alias<_Ty, _Other>::type;

	typedef typename _If<is_void<element_type>::value,
		char&,
		typename add_lvalue_reference<element_type>::type>::type _Reftype;

	static pointer pointer_to(_Reftype _Val)
		{	
		return (_Ty::pointer_to(_Val));
		}
	};

		
template<class _Ty>
	struct pointer_traits<_Ty *>
	{	
	typedef _Ty element_type;
	typedef _Ty *pointer;
	typedef ptrdiff_t difference_type;

	template<class _Other>
		using rebind = _Other *;

	typedef typename _If<is_void<_Ty>::value,
		char&,
		typename add_lvalue_reference<_Ty>::type>::type _Reftype;

	static pointer pointer_to(_Reftype _Val)
		{	
		return (::std:: addressof(_Val));
		}
	};

		
template<class _Ty> inline
	void _Destroy_in_place(_Ty& _Obj) noexcept
	{	
	_Obj.~_Ty();
	}

		
template<class _Ptrty> inline
	auto _Const_cast(_Ptrty _Ptr)
	{	
	using _Elem = typename pointer_traits<_Ptrty>::element_type;
	using _Modifiable = remove_const_t<_Elem>;
	using _Dest = typename pointer_traits<_Ptrty>::template rebind<_Modifiable>;

	return (pointer_traits<_Dest>::pointer_to(const_cast<_Modifiable&>(*_Ptr)));
	}

template<class _Ty> inline
	auto _Const_cast(_Ty * _Ptr)
	{	
	return (const_cast<remove_const_t<_Ty> *>(_Ptr));
	}

		
template<class _Ty,
	class = void>
	struct _Get_pointer_type
	{	
	typedef typename _Ty::value_type * type;
	};

template<class _Ty>
	struct _Get_pointer_type<_Ty, void_t<typename _Ty::pointer>>
	{	
	typedef typename _Ty::pointer type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_const_pointer_type
	{	
	typedef typename _Get_pointer_type<_Ty>::type _Ptrty;
	typedef typename _Ty::value_type _Valty;
	typedef typename pointer_traits<_Ptrty>::template rebind<const _Valty> type;
	};

template<class _Ty>
	struct _Get_const_pointer_type<_Ty, void_t<typename _Ty::const_pointer>>
	{	
	typedef typename _Ty::const_pointer type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_void_pointer_type
	{	
	typedef typename _Get_pointer_type<_Ty>::type _Ptrty;
	typedef typename pointer_traits<_Ptrty>::template rebind<void> type;
	};

template<class _Ty>
	struct _Get_void_pointer_type<_Ty, void_t<typename _Ty::void_pointer>>
	{	
	typedef typename _Ty::void_pointer type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_const_void_pointer_type
	{	
	typedef typename _Get_pointer_type<_Ty>::type _Ptrty;
	typedef typename pointer_traits<_Ptrty>::template rebind<const void> type;
	};

template<class _Ty>
	struct _Get_const_void_pointer_type<_Ty, void_t<typename _Ty::const_void_pointer>>
	{	
	typedef typename _Ty::const_void_pointer type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_difference_type
	{	
	typedef typename _Get_pointer_type<_Ty>::type _Ptrty;
	typedef typename pointer_traits<_Ptrty>::difference_type type;
	};

template<class _Ty>
	struct _Get_difference_type<_Ty, void_t<typename _Ty::difference_type>>
	{	
	typedef typename _Ty::difference_type type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_size_type
	{	
	typedef make_unsigned_t<typename _Get_difference_type<_Ty>::type> type;
	};

template<class _Ty>
	struct _Get_size_type<_Ty, void_t<typename _Ty::size_type>>
	{	
	typedef typename _Ty::size_type type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_propagate_on_container_copy
	{	
	typedef false_type type;
	};

template<class _Ty>
	struct _Get_propagate_on_container_copy<_Ty, void_t<typename _Ty::propagate_on_container_copy_assignment>>
	{	
	typedef typename _Ty::propagate_on_container_copy_assignment type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_propagate_on_container_move
	{	
	typedef false_type type;
	};

template<class _Ty>
	struct _Get_propagate_on_container_move<_Ty, void_t<typename _Ty::propagate_on_container_move_assignment>>
	{	
	typedef typename _Ty::propagate_on_container_move_assignment type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_propagate_on_container_swap
	{	
	typedef false_type type;
	};

template<class _Ty>
	struct _Get_propagate_on_container_swap<_Ty, void_t<typename _Ty::propagate_on_container_swap>>
	{	
	typedef typename _Ty::propagate_on_container_swap type;
	};

		
template<class _Ty,
	class = void>
	struct _Get_is_always_equal
	{	
	typedef typename is_empty<_Ty>::type type;
	};

template<class _Ty>
	struct _Get_is_always_equal<_Ty, void_t<typename _Ty::is_always_equal>>
	{	
	typedef typename _Ty::is_always_equal type;
	};

		
template<class _Ty,
	class _Other,
	class = void>
	struct _Get_rebind_type
	{	
	typedef typename _Replace_first_parameter<_Other, _Ty>::type type;
	};

template<class _Ty,
	class _Other>
	struct _Get_rebind_type<_Ty, _Other, void_t<typename _Ty::template rebind<_Other>::other>>
	{	
	typedef typename _Ty::template rebind<_Other>::other type;
	};

		
template<class _Ty>
	class allocator;
template<class _Alloc>
	struct _Wrap_alloc;

template<class _Alloc>
	struct _Unwrap_alloc
	{	
	typedef _Alloc type;
	};

template<class _Alloc>
	struct _Unwrap_alloc<_Wrap_alloc<_Alloc>>
	{	
	typedef _Alloc type;
	};


		
template<class _Alloc>
	using _Unwrap_alloc_t = typename _Unwrap_alloc<_Alloc>::type;


		
template<class _Alloc,
	class = void>
	struct _Is_default_allocator
		: false_type
	{	
	};

template<class _Ty>
	struct _Is_default_allocator<allocator<_Ty>, typename allocator<_Ty>::_Not_user_specialized>
		: true_type
	{	
	};

		
struct _Alloc_allocate
	{	
		

	template<class _Alloc,
		class _Size_type,
		class _Const_void_pointer>
		static auto _Fn(int, _Alloc& _Al,
			_Size_type _Count,
			_Const_void_pointer _Hint)
			-> decltype(_Al.allocate(_Count, _Hint))
		{	
		return (_Al.allocate(_Count, _Hint));
		}

	template<class _Alloc,
		class _Size_type,
		class _Const_void_pointer>
		static auto _Fn(_Wrap_int, _Alloc& _Al,
			_Size_type _Count,
			_Const_void_pointer)
			-> decltype(_Al.allocate(_Count))
		{	
		return (_Al.allocate(_Count));
		}
	};

		
struct _Has_no_alloc_construct_tag
	{	
	};

template<class _Void,
	class... _Types>
	struct _Has_no_alloc_construct
		: true_type
	{	
	};

template<class _Alloc,
	class _Ptr,
	class... _Args>
	struct _Has_no_alloc_construct<
		void_t<
			_Has_no_alloc_construct_tag,	
			decltype(::std:: declval<_Alloc&>().construct(::std:: declval<_Ptr>(), ::std:: declval<_Args>()...))>,
		_Alloc, _Ptr, _Args...>
		: false_type
	{	
	};

template<class _Alloc,
	class _Ptr,
	class... _Args>
	using _Uses_default_construct = disjunction<
		_Is_default_allocator<_Alloc>,
		_Has_no_alloc_construct<void, _Alloc, _Ptr, _Args...>>;

template<class _Alloc,
	class _Ptr,
	class... _Args>
	using _Uses_default_construct_t = typename _Uses_default_construct<_Alloc, _Ptr, _Args...>::type;


		
struct _Has_no_alloc_destroy_tag
	{	
	};

template<class _Alloc,
	class _Ptr,
	class = void>
	struct _Has_no_alloc_destroy
		: true_type
	{	
	};

template<class _Alloc,
	class _Ptr>
	struct _Has_no_alloc_destroy<_Alloc, _Ptr, void_t<
			_Has_no_alloc_destroy_tag,	
			decltype(::std:: declval<_Alloc&>().destroy(::std:: declval<_Ptr>()))>>
		: false_type
	{	
	};

template<class _Alloc,
	class _Ptr>
	using _Uses_default_destroy = disjunction<
		_Is_default_allocator<_Alloc>,
		_Has_no_alloc_destroy<_Alloc, _Ptr>>;

template<class _Alloc,
	class _Ptr>
	using _Uses_default_destroy_t = typename _Uses_default_destroy<_Alloc, _Ptr>::type;


		
struct _Alloc_max_size
	{	
	template<class _Ty>
		static auto _Fn(int, const _Ty& _Al) noexcept
			-> decltype(_Al.max_size())
		{	
		return (_Al.max_size());
		}

	template<class _Ty>
		static auto _Fn(_Wrap_int, const _Ty&) noexcept
			-> typename _Get_size_type<_Ty>::type
		{	
		return ((numeric_limits<typename _Get_size_type<_Ty>::type>::max)()
			/ sizeof(typename _Ty::value_type));
		}
	};

		
struct _Alloc_select
	{	
		

	template<class _Ty>
		static auto _Fn(int, const _Ty& _Al)
			-> decltype((_Ty)_Al.select_on_container_copy_construction())
		{	
		return (_Al.select_on_container_copy_construction());
		}

	template<class _Ty>
		static auto _Fn(_Wrap_int, const _Ty& _Al)
			-> _Ty
		{	
		return (_Al);
		}
	};

		
template<class _Alloc>
	struct allocator_traits
	{	
	typedef _Alloc allocator_type;
	typedef typename _Alloc::value_type value_type;

	typedef typename _Get_pointer_type<_Alloc>::type
		pointer;
	typedef typename _Get_const_pointer_type<_Alloc>::type
		const_pointer;
	typedef typename _Get_void_pointer_type<_Alloc>::type
		void_pointer;
	typedef typename _Get_const_void_pointer_type<_Alloc>::type
		const_void_pointer;

	typedef typename _Get_size_type<_Alloc>::type size_type;
	typedef typename _Get_difference_type<_Alloc>::type difference_type;

	typedef typename _Get_propagate_on_container_copy<_Alloc>::type
		propagate_on_container_copy_assignment;
	typedef typename _Get_propagate_on_container_move<_Alloc>::type
		propagate_on_container_move_assignment;
	typedef typename _Get_propagate_on_container_swap<_Alloc>::type
		propagate_on_container_swap;
	typedef typename _Get_is_always_equal<_Alloc>::type
		is_always_equal;

	template<class _Other>
		using rebind_alloc = typename _Get_rebind_type<_Alloc, _Other>::type;

	template<class _Other>
		using rebind_traits = allocator_traits<rebind_alloc<_Other> >;

	static __declspec(allocator) pointer allocate(_Alloc& _Al, __declspec(guard(overflow)) size_type _Count)
		{	
		return (_Al.allocate(_Count));
		}

	static __declspec(allocator) pointer allocate(_Alloc& _Al, __declspec(guard(overflow)) size_type _Count,
		const_void_pointer _Hint)
		{	
		return (_Alloc_allocate::_Fn(0, _Al, _Count, _Hint));
		}

	static void deallocate(_Alloc& _Al,
		pointer _Ptr, size_type _Count)
		{	
		_Al.deallocate(_Ptr, _Count);
		}

	template<class _Ty,
		class... _Types>
		static void _Construct1(true_type, _Alloc&, _Ty *_Ptr,
			_Types&&... _Args)
		{	
		::new (static_cast<void *>(_Ptr))
			_Ty(::std:: forward<_Types>(_Args)...);
		}

	template<class _Ty,
		class... _Types>
		static void _Construct1(false_type, _Alloc& _Al, _Ty *_Ptr,
			_Types&&... _Args)
		{	
		_Al.construct(_Ptr, ::std:: forward<_Types>(_Args)...);
		}

	template<class _Ty,
		class... _Types>
		static void construct(_Alloc& _Al, _Ty *_Ptr,
			_Types&&... _Args)
		{	
		_Construct1(_Uses_default_construct_t<_Unwrap_alloc_t<_Alloc>, _Ty *, _Types...>(),
			_Al, _Ptr, ::std:: forward<_Types>(_Args)...);
		}

	template<class _Ty>
		static void _Destroy1(_Alloc&, _Ty *_Ptr, true_type)
		{	
		_Ptr->~_Ty();
		}

	template<class _Ty>
		static void _Destroy1(_Alloc& _Al, _Ty *_Ptr, false_type)
		{	
		_Al.destroy(_Ptr);
		}

	template<class _Ty>
		static void destroy(_Alloc& _Al, _Ty *_Ptr)
		{	
		_Destroy1(_Al, _Ptr, _Uses_default_destroy_t<_Unwrap_alloc_t<_Alloc>, _Ty *>());
		}

	static size_type max_size(const _Alloc& _Al) noexcept
		{	
		return (_Alloc_max_size::_Fn(0, _Al));
		}

	static _Alloc select_on_container_copy_construction(
		const _Alloc& _Al)
		{	
		return (_Alloc_select::_Fn(0, _Al));
		}
	};

		
template<class _Ty>
	class allocator
	{	
public:
	static_assert(!is_const<_Ty>::value,
		"The C++ Standard forbids containers of const elements "
		"because allocator<const T> is ill-formed.");

	typedef void _Not_user_specialized;

	typedef _Ty value_type;

	typedef value_type *pointer;
	typedef const value_type *const_pointer;

	typedef value_type& reference;
	typedef const value_type& const_reference;

	typedef size_t size_type;
	typedef ptrdiff_t difference_type;

	typedef true_type propagate_on_container_move_assignment;
	typedef true_type is_always_equal;

	template<class _Other>
		struct rebind
		{	
		typedef allocator<_Other> other;
		};

	pointer address(reference _Val) const noexcept
		{	
		return (::std:: addressof(_Val));
		}

	const_pointer address(const_reference _Val) const noexcept
		{	
		return (::std:: addressof(_Val));
		}

	allocator() noexcept
		{	
		}

	allocator(const allocator<_Ty>&) noexcept
		{	
		}

	template<class _Other>
		allocator(const allocator<_Other>&) noexcept
		{	
		}

	template<class _Other>
		allocator<_Ty>& operator=(const allocator<_Other>&)
		{	
		return (*this);
		}

	void deallocate(pointer _Ptr, size_type _Count)
		{	
		_Deallocate(_Ptr, _Count, sizeof (_Ty));
		}

	__declspec(allocator) pointer allocate(__declspec(guard(overflow)) size_type _Count)
		{	
		return (static_cast<pointer>(_Allocate(_Count, sizeof (_Ty))));
		}

	__declspec(allocator) pointer allocate(__declspec(guard(overflow)) size_type _Count, const void *)
		{	
		return (allocate(_Count));
		}

	template<class _Objty,
		class... _Types>
		void construct(_Objty *_Ptr, _Types&&... _Args)
		{	
		::new ((void *)_Ptr) _Objty(::std:: forward<_Types>(_Args)...);
		}

	template<class _Uty>
		void destroy(_Uty *_Ptr)
		{	
		_Ptr->~_Uty();
		}

	size_t max_size() const noexcept
		{	
		return ((size_t)(-1) / sizeof (_Ty));
		}
	};

		
template<>
	class allocator<void>
	{	
public:
	typedef void _Not_user_specialized;

	typedef void value_type;

	typedef void *pointer;
	typedef const void *const_pointer;

	template<class _Other>
		struct rebind
		{	
		typedef allocator<_Other> other;
		};

	allocator() noexcept
		{	
		}

	allocator(const allocator<void>&) noexcept
		{	
		}

	template<class _Other>
		allocator(const allocator<_Other>&) noexcept
		{	
		}

	template<class _Other>
		allocator<void>& operator=(const allocator<_Other>&)
		{	
		return (*this);
		}
	};

template<class _Ty,
	class _Other> inline
	bool operator==(const allocator<_Ty>&,
		const allocator<_Other>&) noexcept
	{	
	return (true);
	}

template<class _Ty,
	class _Other> inline
	bool operator!=(const allocator<_Ty>&,
		const allocator<_Other>&) noexcept
	{	
	return (false);
	}

		
template<class _Ty>
	struct allocator_traits<allocator<_Ty> >
	{	
	typedef allocator<_Ty> _Alloc;

	typedef _Alloc allocator_type;
	typedef _Ty value_type;

	typedef value_type *pointer;
	typedef const value_type *const_pointer;
	typedef void *void_pointer;
	typedef const void *const_void_pointer;

	typedef size_t size_type;
	typedef ptrdiff_t difference_type;

	typedef false_type propagate_on_container_copy_assignment;
	typedef true_type propagate_on_container_move_assignment;
	typedef false_type propagate_on_container_swap;
	typedef true_type is_always_equal;

	template<class _Other>
		using rebind_alloc = allocator<_Other>;

	template<class _Other>
		using rebind_traits = allocator_traits<allocator<_Other> >;

	static __declspec(allocator) pointer allocate(_Alloc& _Al, __declspec(guard(overflow)) size_type _Count)
		{	
		return (_Al.allocate(_Count));
		}

	static __declspec(allocator) pointer allocate(_Alloc& _Al, __declspec(guard(overflow)) size_type _Count,
		const_void_pointer _Hint)
		{	
		return (_Al.allocate(_Count, _Hint));
		}

	static void deallocate(_Alloc& _Al,
		pointer _Ptr, size_type _Count)
		{	
		_Al.deallocate(_Ptr, _Count);
		}

	template<class _Objty,
		class... _Types>
		static void construct(_Alloc& _Al, _Objty *_Ptr,
			_Types&&... _Args)
		{	
		_Al.construct(_Ptr, ::std:: forward<_Types>(_Args)...);
		}

	template<class _Uty>
		static void destroy(_Alloc& _Al, _Uty *_Ptr)
		{	
		_Al.destroy(_Ptr);
		}

	static size_type max_size(const _Alloc& _Al) noexcept
		{	
		return (_Al.max_size());
		}

	static _Alloc select_on_container_copy_construction(
		const _Alloc& _Al)
		{	
		return (_Al);
		}
	};

		
template<class _Alloc>
	struct _Wrap_alloc
		: public _Alloc
	{	
	typedef _Alloc _Mybase;
	typedef allocator_traits<_Alloc> _Mytraits;

	typedef typename _Mytraits::value_type value_type;

	typedef typename _Mytraits::pointer pointer;
	typedef typename _Mytraits::const_pointer const_pointer;
	typedef typename _Mytraits::void_pointer void_pointer;
	typedef typename _Mytraits::const_void_pointer const_void_pointer;

	typedef typename _If<is_void<value_type>::value,
		int, value_type>::type& reference;
	typedef typename _If<is_void<const value_type>::value,
		const int, const value_type>::type& const_reference;

	typedef typename _Mytraits::size_type size_type;
	typedef typename _Mytraits::difference_type difference_type;

	typedef typename _Mytraits::propagate_on_container_copy_assignment
		propagate_on_container_copy_assignment;
	typedef typename _Mytraits::propagate_on_container_move_assignment
		propagate_on_container_move_assignment;
	typedef typename _Mytraits::propagate_on_container_swap
		propagate_on_container_swap;
	typedef typename _Mytraits::is_always_equal
		is_always_equal;

	_Wrap_alloc select_on_container_copy_construction(_Nil = _Nil()) const
		{	
		return (_Mytraits::select_on_container_copy_construction(*this));
		}

	template<class _Other>
		struct rebind
		{	
		typedef typename _Mytraits::template rebind_alloc<_Other>
			_Other_alloc;
		typedef _Wrap_alloc<_Other_alloc> other;
		};

	pointer address(reference _Val) const
		{	
		return (pointer_traits<pointer>::pointer_to(_Val));
		}

	const_pointer address(const_reference _Val) const
		{	
		return (pointer_traits<const_pointer>::pointer_to(_Val));
		}

	_Wrap_alloc() noexcept(is_nothrow_default_constructible<_Alloc>::value)
		: _Mybase()
		{	
		}

	_Wrap_alloc(const _Wrap_alloc& _Right) noexcept
		: _Mybase(_Right)
		{	
		}

	_Wrap_alloc(_Wrap_alloc&& _Right) noexcept
		: _Mybase(::std:: move(_Right))
		{	
		}

	template<class _Other>
		_Wrap_alloc(_Other&& _Right) noexcept
		: _Mybase(::std:: forward<_Other>(_Right))
		{	
		}

	_Wrap_alloc& operator=(const _Wrap_alloc& _Right)
		{	
		_Mybase::operator=(_Right);
		return (*this);
		}

	_Wrap_alloc& operator=(_Wrap_alloc&& _Right)
		{	
		_Mybase::operator=(::std:: move(_Right));
		return (*this);
		}

	template<class _Other>
		_Wrap_alloc& operator=(_Other&& _Right)
		{	
		_Mybase::operator=(::std:: forward<_Other>(_Right));
		return (*this);
		}

	__declspec(allocator) pointer allocate(__declspec(guard(overflow)) size_type _Count)
		{	
		return (_Mybase::allocate(_Count));
		}

	__declspec(allocator) pointer allocate(__declspec(guard(overflow)) size_type _Count,
		const_void_pointer _Hint, _Nil = _Nil())
		{	
		return (_Mytraits::allocate(*this, _Count, _Hint));
		}

	void deallocate(pointer _Ptr, size_type _Count)
		{	
		_Mybase::deallocate(_Ptr, _Count);
		}

	template<class _Ty,
		class... _Types>
		void construct(_Ty *_Ptr,
			_Types&&... _Args)
		{	
		_Mytraits::construct(*this, _Ptr,
			::std:: forward<_Types>(_Args)...);
		}

	template<class _Ty>
		void destroy(_Ty *_Ptr)
		{	
		_Mytraits::destroy(*this, _Ptr);
		}

	size_type max_size(_Nil = _Nil()) const noexcept
		{	
		return (_Mytraits::max_size(*this));
		}
	};

template<class _Ty,
	class _Other> inline
	bool operator==(const _Wrap_alloc<_Ty>& _Left,
		const _Wrap_alloc<_Other>& _Right) noexcept
	{	
	return (static_cast<const _Ty&>(_Left)
		== static_cast<const _Other&>(_Right));
	}

template<class _Ty,
	class _Other> inline
	bool operator!=(const _Wrap_alloc<_Ty>& _Left,
		const _Wrap_alloc<_Other>& _Right) noexcept
	{	
	return (!(_Left == _Right));
	}

		
template<class _Alty> inline
	void _Pocca(_Alty& _Left, const _Alty& _Right, true_type) noexcept
	{	
	_Left = _Right;
	}

template<class _Alty> inline
	void _Pocca(_Alty&, const _Alty&, false_type) noexcept
	{	
	}

template<class _Alty> inline
	void _Pocca(_Alty& _Left, const _Alty& _Right) noexcept
	{	
	typename _Alty::propagate_on_container_copy_assignment _Tag;
	_Pocca(_Left, _Right, _Tag);
	}

		
template<class _Alty> inline
	void _Pocma(_Alty& _Left, _Alty& _Right, true_type) noexcept
	{	
	_Left = ::std:: move(_Right);
	}

template<class _Alty> inline
	void _Pocma(_Alty&, _Alty&, false_type) noexcept
	{	
	}

template<class _Alty> inline
	void _Pocma(_Alty& _Left, _Alty& _Right) noexcept
	{	
	typename _Alty::propagate_on_container_move_assignment _Tag;
	_Pocma(_Left, _Right, _Tag);
	}

		
template<class _Alty> inline
	void _Pocs(_Alty& _Left, _Alty& _Right, true_type) noexcept
	{	
	_Swap_adl(_Left, _Right);
	}

template<class _Alty> inline
	void _Pocs(_Alty& _Left, _Alty& _Right, false_type) noexcept
	{	
	if (_Left != _Right)
		{	
 


		::std:: terminate();
 
		}
	}

template<class _Alty> inline
	void _Pocs(_Alty& _Left, _Alty& _Right) noexcept
	{	
	typename _Alty::propagate_on_container_swap _Tag;
	_Pocs(_Left, _Right, _Tag);
	}


		
template<class _Alloc,
	class _Ptr = typename _Wrap_alloc<_Alloc>::pointer> inline
	void _Destroy_range1(_Ptr _First, _Ptr _Last, _Wrap_alloc<_Alloc>& _Al, false_type)
	{	
	for (; _First != _Last; ++_First)
		_Al.destroy(_Unfancy(_First));
	}

template<class _Alloc,
	class _Ptr = typename _Wrap_alloc<_Alloc>::pointer> inline
	void _Destroy_range1(_Ptr, _Ptr, _Wrap_alloc<_Alloc>&, true_type)
	{	
		
	}

template<class _Alloc,
	class _Ptr = typename _Wrap_alloc<_Alloc>::pointer> inline
	void _Destroy_range(_Ptr _First, _Ptr _Last, _Wrap_alloc<_Alloc>& _Al)
	{	
		
		
	typedef typename _Alloc::value_type _Val;
	_Destroy_range1(_First, _Last, _Al, _Conjunction_t<
		is_trivially_destructible<_Val>,
		_Uses_default_destroy<_Alloc, _Val *>>());
	}


		
template<class _FwdIt> inline
	void _Destroy_range1(_FwdIt _First, _FwdIt _Last, false_type)
	{	
	for (; _First != _Last; ++_First)
		_Destroy_in_place(*_First);
	}

template<class _FwdIt> inline
	void _Destroy_range1(_FwdIt, _FwdIt, true_type)
	{	
		
	}

template<class _FwdIt> inline
	void _Destroy_range(_FwdIt _First, _FwdIt _Last)
	{	
		
		
	_Destroy_range1(_First, _Last, is_trivially_destructible<_Iter_value_t<_FwdIt>>());
	}

}

		
  

#pragma once





 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
typedef enum memory_order {
	memory_order_relaxed,
	memory_order_consume,
	memory_order_acquire,
	memory_order_release,
	memory_order_acq_rel,
	memory_order_seq_cst
	} memory_order;

typedef _Uint32t _Uint4_t;
typedef _Uint4_t _Atomic_integral_t;

	
	




  
  
  
  
  

  


   
  

		
typedef _Atomic_integral_t _Atomic_counter_t;

inline _Atomic_integral_t
	_Get_atomic_count(const _Atomic_counter_t& _Counter)
	{	
	return (_Counter);
	}

 
  
   
  


 

}
 
 #pragma warning(pop)
 #pragma pack(pop)









  
   












#pragma once





extern "C" {



























































































long _InterlockedAnd(long volatile * _Value, long _Mask);
short _InterlockedAnd16(short volatile * _Value, short _Mask);







char _InterlockedAnd8(char volatile * _Value, char _Mask);






long __cdecl _InterlockedCompareExchange(long volatile * _Destination, long _Exchange, long _Comparand);

short _InterlockedCompareExchange16(short volatile * _Destination, short _Exchange, short _Comparand);



__int64 _InterlockedCompareExchange64(__int64 volatile * _Destination, __int64 _Exchange, __int64 _Comparand);



char _InterlockedCompareExchange8(char volatile * _Destination, char _Exchange, char _Comparand);






long __cdecl _InterlockedDecrement(long volatile * _Addend);

long __cdecl _InterlockedExchange(long volatile * _Target, long _Value);

short _InterlockedExchange16(short volatile * _Target, short _Value);







char _InterlockedExchange8(char volatile * _Target, char _Value);



long __cdecl _InterlockedExchangeAdd(long volatile * _Addend, long _Value);
short _InterlockedExchangeAdd16(short volatile * _Addend, short _Value);







char _InterlockedExchangeAdd8(char volatile * _Addend, char _Value);









long __cdecl _InterlockedIncrement(long volatile * _Addend);

long _InterlockedOr(long volatile * _Value, long _Mask);
short _InterlockedOr16(short volatile * _Value, short _Mask);







char _InterlockedOr8(char volatile * _Value, char _Mask);






long _InterlockedXor(long volatile * _Value, long _Mask);
short _InterlockedXor16(short volatile * _Value, short _Mask);







char _InterlockedXor8(char volatile * _Value, char _Mask);






void _ReadWriteBarrier(void);










unsigned char _interlockedbittestandset(long volatile *, long);











}





   

   


  








 
 #pragma warning(pop)
 #pragma pack(pop)










#pragma pack(push,8)
#pragma warning(push,3)
#pragma warning(disable: 4702 )



namespace std {
template<class _Traits>
	using _Traits_ch_t = typename _Traits::char_type;

template<class _Traits>
	using _Traits_ptr_t = const typename _Traits::char_type *;

template<class _Traits>
	constexpr bool _Traits_equal(  const _Traits_ptr_t<_Traits> _Left, const size_t _Left_size,
		  const _Traits_ptr_t<_Traits> _Right, const size_t _Right_size) noexcept
	{	
	return (_Left_size == _Right_size && _Traits::compare(_Left, _Right, _Left_size) == 0);
	}

template<class _Traits>
	constexpr int _Traits_compare(  const _Traits_ptr_t<_Traits> _Left, const size_t _Left_size,
		  const _Traits_ptr_t<_Traits> _Right, const size_t _Right_size) noexcept
	{	
	const int _Ans = _Traits::compare(_Left, _Right, _Min_value(_Left_size, _Right_size));

	if (_Ans != 0)
		{
		return (_Ans);
		}

	if (_Left_size < _Right_size)
		{
		return (-1);
		}

	if (_Left_size > _Right_size)
		{
		return (1);
		}

	return (0);
	}

template<class _Traits>
	constexpr size_t _Traits_find(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		  const _Traits_ptr_t<_Traits> _Needle, const size_t _Needle_size) noexcept
	{	
	if (_Needle_size > _Hay_size || _Start_at > _Hay_size - _Needle_size)
		{	
			
			
			
			
			
			
			
		return (static_cast<size_t>(-1));
		}

	if (_Needle_size == 0)
		{	
		return (_Start_at);
		}

	const auto _Possible_matches_end = _Haystack + (_Hay_size - _Needle_size) + 1;
	for (auto _Match_try = _Haystack + _Start_at; ; ++_Match_try)
		{
		_Match_try = _Traits::find(_Match_try, _Possible_matches_end - _Match_try, *_Needle);
		if (!_Match_try)
			{	
			return (static_cast<size_t>(-1));
			}

		if (_Traits::compare(_Match_try, _Needle, _Needle_size) == 0)
			{	
			return (_Match_try - _Haystack);
			}
		}
	}

template<class _Traits>
	constexpr size_t _Traits_find_ch(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		const _Traits_ch_t<_Traits> _Ch) noexcept
	{	
	if (_Start_at < _Hay_size)
		{
		const auto _Found_at = _Traits::find(_Haystack + _Start_at, _Hay_size - _Start_at, _Ch);
		if (_Found_at)
			{
			return (_Found_at - _Haystack);
			}
		}

	return (static_cast<size_t>(-1));	
	}

template<class _Traits>
	constexpr size_t _Traits_rfind(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		  const _Traits_ptr_t<_Traits> _Needle, const size_t _Needle_size) noexcept
	{	
	if (_Needle_size == 0)
		{
		return (_Min_value(_Start_at, _Hay_size));	
		}

	if (_Needle_size <= _Hay_size)
		{	
		for (auto _Match_try = _Haystack + _Min_value(_Start_at, _Hay_size - _Needle_size); ; --_Match_try)
			{
			if (_Traits::eq(*_Match_try, *_Needle)
				&& _Traits::compare(_Match_try, _Needle, _Needle_size) == 0)
				{
				return (_Match_try - _Haystack);	
				}

			if (_Match_try == _Haystack)
				{
				break;	
				}
			}
		}

	return (static_cast<size_t>(-1));	
	}

template<class _Traits>
	constexpr size_t _Traits_rfind_ch(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		const _Traits_ch_t<_Traits> _Ch) noexcept
	{	
	if (_Hay_size != 0)
		{	
		for (auto _Match_try = _Haystack + _Min_value(_Start_at, _Hay_size - 1); ; --_Match_try)
			{
			if (_Traits::eq(*_Match_try, _Ch))
				{
				return (_Match_try - _Haystack);	
				}

			if (_Match_try == _Haystack)
				{
				break;	
				}
			}
		}

	return (static_cast<size_t>(-1));	
	}

template<class _Traits>
	constexpr size_t _Traits_find_first_of(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		  const _Traits_ptr_t<_Traits> _Needle, const size_t _Needle_size) noexcept
	{	
	if (_Needle_size != 0 && _Start_at < _Hay_size)
		{	
		const auto _End = _Haystack + _Hay_size;
		for (auto _Match_try = _Haystack + _Start_at; _Match_try < _End; ++_Match_try)
			{
			if (_Traits::find(_Needle, _Needle_size, *_Match_try))
				{
				return (_Match_try - _Haystack);	
				}
			}
		}

	return (static_cast<size_t>(-1));	
	}

template<class _Traits>
	constexpr size_t _Traits_find_last_of(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		  const _Traits_ptr_t<_Traits> _Needle, const size_t _Needle_size) noexcept
	{	
	if (_Needle_size != 0 && _Hay_size != 0)
		{	
		for (auto _Match_try = _Haystack + _Min_value(_Start_at, _Hay_size - 1); ; --_Match_try)
			{
			if (_Traits::find(_Needle, _Needle_size, *_Match_try))
				{
				return (_Match_try - _Haystack);	
				}

			if (_Match_try == _Haystack)
				{
				break;	
				}
			}
		}

	return (static_cast<size_t>(-1));	
	}

template<class _Traits>
	constexpr size_t _Traits_find_first_not_of(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		  const _Traits_ptr_t<_Traits> _Needle, const size_t _Needle_size) noexcept
	{	
	if (_Start_at < _Hay_size)
		{	
		const auto _End = _Haystack + _Hay_size;
		for (auto _Match_try = _Haystack + _Start_at; _Match_try < _End; ++_Match_try)
			{
			if (!_Traits::find(_Needle, _Needle_size, *_Match_try))
				{
				return (_Match_try - _Haystack);	
				}
			}
		}

	return (static_cast<size_t>(-1));	
	}

template<class _Traits>
	constexpr size_t _Traits_find_not_ch(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		const _Traits_ch_t<_Traits> _Ch) noexcept
	{	
	if (_Start_at < _Hay_size)
		{	
		const auto _End = _Haystack + _Hay_size;
		for (auto _Match_try = _Haystack + _Start_at; _Match_try < _End; ++_Match_try)
			{
			if (!_Traits::eq(*_Match_try, _Ch))
				{
				return (_Match_try - _Haystack);	
				}
			}
		}

	return (static_cast<size_t>(-1));	
	}

template<class _Traits>
	constexpr size_t _Traits_find_last_not_of(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		  const _Traits_ptr_t<_Traits> _Needle, const size_t _Needle_size) noexcept
	{	
	if (_Hay_size != 0)
		{	
		for (auto _Match_try = _Haystack + _Min_value(_Start_at, _Hay_size - 1); ; --_Match_try)
			{
			if (!_Traits::find(_Needle, _Needle_size, *_Match_try))
				{
				return (_Match_try - _Haystack);	
				}

			if (_Match_try == _Haystack)
				{
				break;	
				}
			}
		}

	return (static_cast<size_t>(-1));	
	}

template<class _Traits>
	constexpr size_t _Traits_rfind_not_ch(
		  const _Traits_ptr_t<_Traits> _Haystack, const size_t _Hay_size, const size_t _Start_at,
		const _Traits_ch_t<_Traits> _Ch) noexcept
	{	
	if (_Hay_size != 0)
		{	
		for (auto _Match_try = _Haystack + _Min_value(_Start_at, _Hay_size - 1); ; --_Match_try)
			{
			if (!_Traits::eq(*_Match_try, _Ch))
				{
				return (_Match_try - _Haystack);	
				}

			if (_Match_try == _Haystack)
				{
				break;	
				}
			}
		}

	return (static_cast<size_t>(-1));	
	}














































































































































































































































































































































































































































































































































































































































































































































































































































































































		
template<class _Mystr>
	class _String_const_iterator
		: public _Iterator012<random_access_iterator_tag,
			typename _Mystr::value_type,
			typename _Mystr::difference_type,
			typename _Mystr::const_pointer,
			typename _Mystr::const_reference,
			_Iterator_base>
	{	
public:
	typedef _String_const_iterator<_Mystr> _Myiter;
	typedef random_access_iterator_tag iterator_category;

	typedef typename _Mystr::value_type value_type;
	typedef typename _Mystr::difference_type difference_type;
	typedef typename _Mystr::const_pointer pointer;
	typedef typename _Mystr::const_reference reference;

	_String_const_iterator()
		: _Ptr()
		{	
		}

	_String_const_iterator(pointer _Parg, const _Container_base *_Pstring)
		: _Ptr(_Parg)
		{	
		this->_Adopt(_Pstring);
		}

	typedef pointer _Unchecked_type;

	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		_Ptr = _Right;
		return (*this);
		}

	_Unchecked_type _Unchecked() const
		{	
		return (_Ptr);
		}

	reference operator*() const
		{	











		;
		return (*_Ptr);
		}

	pointer operator->() const
		{	
		return (pointer_traits<pointer>::pointer_to(**this));
		}

	_Myiter& operator++()
		{	









		++_Ptr;
		return (*this);
		}

	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}

	_Myiter& operator--()
		{	








		--_Ptr;
		return (*this);
		}

	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}

	_Myiter& operator+=(const difference_type _Off)
		{	















		_Ptr += _Off;
		return (*this);
		}

	_Myiter operator+(const difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp += _Off);
		}

	_Myiter& operator-=(const difference_type _Off)
		{	
		return (*this += -_Off);
		}

	_Myiter operator-(const difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp -= _Off);
		}

	difference_type operator-(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (_Ptr - _Right._Ptr);
		}

	reference operator[](const difference_type _Off) const
		{	
		return (*(*this + _Off));
		}

	bool operator==(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (_Ptr == _Right._Ptr);
		}

	bool operator!=(const _Myiter& _Right) const
		{	
		return (!(*this == _Right));
		}

	bool operator<(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (_Ptr < _Right._Ptr);
		}

	bool operator>(const _Myiter& _Right) const
		{	
		return (_Right < *this);
		}

	bool operator<=(const _Myiter& _Right) const
		{	
		return (!(_Right < *this));
		}

	bool operator>=(const _Myiter& _Right) const
		{	
		return (!(*this < _Right));
		}









	void _Compat(const _Myiter&) const
		{	
		}


	pointer _Ptr;	
	};

template<class _Mystr> inline
	typename _String_const_iterator<_Mystr>::_Unchecked_type
		_Unchecked(_String_const_iterator<_Mystr> _Iter)
	{	
	return (_Iter._Unchecked());
	}

template<class _Mystr> inline
	_String_const_iterator<_Mystr>
		_Rechecked(_String_const_iterator<_Mystr>& _Iter,
			typename _String_const_iterator<_Mystr>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}

template<class _Mystr> inline
	_String_const_iterator<_Mystr> operator+(
		typename _String_const_iterator<_Mystr>
			::difference_type _Off,
		_String_const_iterator<_Mystr> _Next)
	{	
	return (_Next += _Off);
	}

		
template<class _Mystr>
	class _String_iterator
		: public _String_const_iterator<_Mystr>
	{	
public:
	typedef _String_iterator<_Mystr> _Myiter;
	typedef _String_const_iterator<_Mystr> _Mybase;
	typedef random_access_iterator_tag iterator_category;

	typedef typename _Mystr::value_type value_type;
	typedef typename _Mystr::difference_type difference_type;
	typedef typename _Mystr::pointer pointer;
	typedef typename _Mystr::reference reference;

	_String_iterator()
		{	
		}

	_String_iterator(pointer _Parg, const _Container_base *_Pstring)
		: _Mybase(_Parg, _Pstring)
		{	
		}

	typedef pointer _Unchecked_type;

	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		this->_Ptr = _Right;
		return (*this);
		}

	_Unchecked_type _Unchecked() const
		{	
		return (_Const_cast(this->_Ptr));
		}

	reference operator*() const
		{	
		return ((reference)**(_Mybase *)this);
		}

	pointer operator->() const
		{	
		return (pointer_traits<pointer>::pointer_to(**this));
		}

	_Myiter& operator++()
		{	
		++*(_Mybase *)this;
		return (*this);
		}

	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}

	_Myiter& operator--()
		{	
		--*(_Mybase *)this;
		return (*this);
		}

	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}

	_Myiter& operator+=(const difference_type _Off)
		{	
		*(_Mybase *)this += _Off;
		return (*this);
		}

	_Myiter operator+(const difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp += _Off);
		}

	_Myiter& operator-=(const difference_type _Off)
		{	
		return (*this += -_Off);
		}

	_Myiter operator-(const difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp -= _Off);
		}

	difference_type operator-(const _Mybase& _Right) const
		{	
		return (*(_Mybase *)this - _Right);
		}

	reference operator[](const difference_type _Off) const
		{	
		return (*(*this + _Off));
		}
	};

template<class _Mystr> inline
	typename _String_iterator<_Mystr>::_Unchecked_type
		_Unchecked(_String_iterator<_Mystr> _Iter)
	{	
	return (_Iter._Unchecked());
	}

template<class _Mystr> inline
	_String_iterator<_Mystr>
		_Rechecked(_String_iterator<_Mystr>& _Iter,
			typename _String_iterator<_Mystr>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}

template<class _Mystr> inline
	_String_iterator<_Mystr> operator+(
		typename _String_iterator<_Mystr>
			::difference_type _Off,
		_String_iterator<_Mystr> _Next)
	{	
	return (_Next += _Off);
	}

		
template<class _Value_type,
	class _Size_type,
	class _Difference_type,
	class _Pointer,
	class _Const_pointer,
	class _Reference,
	class _Const_reference>
	struct _String_iter_types
	{	
	typedef _Value_type value_type;
	typedef _Size_type size_type;
	typedef _Difference_type difference_type;
	typedef _Pointer pointer;
	typedef _Const_pointer const_pointer;
	typedef _Reference reference;
	typedef _Const_reference const_reference;
	};

template<class _Ty,
	class _Alloc0>
	struct _String_base_types
	{	
	typedef _Alloc0 _Alloc;
	typedef _String_base_types<_Ty, _Alloc> _Myt;

	typedef _Wrap_alloc<_Alloc> _Alty0;
	typedef typename _Alty0::template rebind<_Ty>::other _Alty;


	typedef typename _If<_Is_simple_alloc<_Alty>::value,
		_Simple_types<typename _Alty::value_type>,
		_String_iter_types<typename _Alty::value_type,
			typename _Alty::size_type,
			typename _Alty::difference_type,
			typename _Alty::pointer,
			typename _Alty::const_pointer,
			typename _Alty::reference,
			typename _Alty::const_reference> >::type
		_Val_types;
	};

		
template<class _Val_types>
	class _String_val
		: public _Container_base
	{	
public:
	typedef _String_val<_Val_types> _Myt;

	typedef typename _Val_types::value_type value_type;
	typedef typename _Val_types::size_type size_type;
	typedef typename _Val_types::difference_type difference_type;
	typedef typename _Val_types::pointer pointer;
	typedef typename _Val_types::const_pointer const_pointer;
	typedef typename _Val_types::reference reference;
	typedef typename _Val_types::const_reference const_reference;

	typedef _String_iterator<_Myt> iterator;
	typedef _String_const_iterator<_Myt> const_iterator;

	_String_val()
		: _Bx(),
		_Mysize(0),
		_Myres(0)
		{	
		}

	enum
		{	
		_BUF_SIZE = 16 / sizeof (value_type) < 1 ? 1
			: 16 / sizeof (value_type)};
	enum
		{	
		_ALLOC_MASK = sizeof (value_type) <= 1 ? 15
			: sizeof (value_type) <= 2 ? 7
			: sizeof (value_type) <= 4 ? 3
			: sizeof (value_type) <= 8 ? 1 : 0
		};

	value_type *_Myptr()
		{	
		return (_Large_string_engaged()
			? _Unfancy(_Bx._Ptr)
			: _Bx._Buf);
		}

	const value_type *_Myptr() const
		{	
		return (_Large_string_engaged()
			? _Unfancy(_Bx._Ptr)
			: _Bx._Buf);
		}

	bool _Large_string_engaged() const
		{	
		return (this->_BUF_SIZE <= _Myres);
		}

	union _Bxty
		{	
		_Bxty()
			{	
			}

		~_Bxty() noexcept
			{	
			}

		value_type _Buf[_BUF_SIZE];
		pointer _Ptr;
		char _Alias[_BUF_SIZE];	
		} _Bx;

	size_type _Mysize;	
	size_type _Myres;	
	};

		
template<class _Alloc_types>
	class _String_alloc
	{	
public:
	typedef _String_alloc<_Alloc_types> _Myt;
	typedef typename _Alloc_types::_Alloc _Alloc;
	typedef typename _Alloc_types::_Alty _Alty;
	typedef typename _Alloc_types::_Val_types _Val_types;
	typedef _String_val<_Val_types> _Mydata_t;
	typedef typename _Mydata_t::_Bxty _Bxty;

	typedef typename _Val_types::value_type value_type;
	typedef typename _Val_types::size_type size_type;
	typedef typename _Val_types::difference_type difference_type;
	typedef typename _Val_types::pointer pointer;
	typedef typename _Val_types::const_pointer const_pointer;
	typedef typename _Val_types::reference reference;
	typedef typename _Val_types::const_reference const_reference;

	typedef _String_iterator<_Mydata_t> iterator;
	typedef _String_const_iterator<_Mydata_t> const_iterator;

	enum
		{	
		_BUF_SIZE = _Mydata_t::_BUF_SIZE
		};

	enum
		{	
		_ALLOC_MASK = _Mydata_t::_ALLOC_MASK
		};

	value_type *_Myptr()
		{	
		return (_Get_data()._Myptr());
		}

	const value_type *_Myptr() const
		{	
		return (_Get_data()._Myptr());
		}


	_String_alloc()
		: _Mypair(_Zero_then_variadic_args_t())
		{	
		}

	template<class _Any_alloc,
		class = enable_if_t<!is_same<decay_t<_Any_alloc>, _Myt>::value> >
		_String_alloc(_Any_alloc&& _Al)
		: _Mypair(_One_then_variadic_args_t(),
			::std:: forward<_Any_alloc>(_Al))
		{	
		}

	void _Copy_alloc(const _Alty& _Al)
		{	
		_Pocca(_Getal(), _Al);
		}

	void _Move_alloc(_Alty& _Al)
		{	
		_Pocma(_Getal(), _Al);
		}



























































































	void _Orphan_all()
		{	
		_Get_data()._Orphan_all();
		}

	void _Swap_all(_Myt& _Right)
		{	
		_Get_data()._Swap_all(_Right._Get_data());
		}

	_Alty& _Getal() noexcept
		{	
		return (_Mypair._Get_first());
		}

	const _Alty& _Getal() const noexcept
		{	
		return (_Mypair._Get_first());
		}

	_Mydata_t& _Get_data() noexcept
		{	
		return (_Mypair._Get_second());
		}

	const _Mydata_t& _Get_data() const noexcept
		{	
		return (_Mypair._Get_second());
		}

	size_type& _Mysize() noexcept
		{	
		return (_Get_data()._Mysize);
		}

	const size_type& _Mysize() const noexcept
		{	
		return (_Get_data()._Mysize);
		}

	size_type& _Myres() noexcept
		{	
		return (_Get_data()._Myres);
		}

	const size_type& _Myres() const noexcept
		{	
		return (_Get_data()._Myres);
		}

private:
	_Compressed_pair<_Alty, _Mydata_t> _Mypair;
	};


		
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem>>
	class basic_string
		: public _String_alloc<_String_base_types<_Elem, _Alloc> >
	{	
public:
	typedef basic_string<_Elem, _Traits, _Alloc> _Myt;
	typedef _String_alloc<_String_base_types<_Elem, _Alloc> > _Mybase;
	typedef _Traits traits_type;
	typedef _Alloc allocator_type;

	typedef typename _Mybase::_Alty _Alty;
	typedef typename _Mybase::_Mydata_t _Mydata_t;

	typedef typename _Mybase::value_type value_type;
	typedef typename _Mybase::size_type size_type;
	typedef typename _Mybase::difference_type difference_type;
	typedef typename _Mybase::pointer pointer;
	typedef typename _Mybase::const_pointer const_pointer;
	typedef typename _Mybase::reference reference;
	typedef typename _Mybase::const_reference const_reference;

	typedef typename _Mybase::iterator iterator;
	typedef typename _Mybase::const_iterator const_iterator;

	typedef ::std:: reverse_iterator<iterator> reverse_iterator;
	typedef ::std:: reverse_iterator<const_iterator> const_reverse_iterator;

	
	
	
	
	
	
	
	
	
	
	using _Use_memcpy_move = bool_constant<
		_Is_specialization<_Traits, char_traits>::value && is_trivial<pointer>::value>;
	
	static constexpr size_t _Memcpy_move_offset = ((size_t)&reinterpret_cast<char const volatile&>((((_Mydata_t*)0)->_Bx)));
	static constexpr size_t _Memcpy_move_size = sizeof(_Mydata_t) - _Memcpy_move_offset;

	template<class _Iter>
		using _Is_elem_cptr = _Disjunction_t<
			is_same<_Iter, const _Elem * const>,
			is_same<_Iter, _Elem * const>,
			is_same<_Iter, const _Elem *>,
			is_same<_Iter, _Elem *>>;









	basic_string(const _Myt& _Right)
		: _Mybase(_Right._Getal().select_on_container_copy_construction())
		{	
		_Tidy_init();
		_Assign_lv_contents(_Right);
		}

	basic_string(const _Myt& _Right, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy_init();
		_Assign_lv_contents(_Right);
		}

	basic_string() noexcept(is_nothrow_default_constructible<_Alloc>::value)
		: _Mybase()
		{	
		_Tidy_init();
		}

	explicit basic_string(const _Alloc& _Al) noexcept
		: _Mybase(_Al)
		{	
		_Tidy_init();
		}

	basic_string(const _Myt& _Right, const size_type _Roff, const _Alloc& _Al = _Alloc())
		: _Mybase(_Al)
		{	
		_Tidy_init();
		assign(_Right, _Roff, npos);
		}

	basic_string(const _Myt& _Right, const size_type _Roff, const size_type _Count, const _Alloc& _Al = _Alloc())
		: _Mybase(_Al)
		{	
		_Tidy_init();
		assign(_Right, _Roff, _Count);
		}

	basic_string(  const _Elem * const _Ptr, __declspec(guard(overflow)) const size_type _Count)
		: _Mybase()
		{	
		_Tidy_init();
		assign(_Ptr, _Count);
		}

	basic_string(  const _Elem * const _Ptr, __declspec(guard(overflow)) const size_type _Count,
		const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy_init();
		assign(_Ptr, _Count);
		}

	basic_string(  const _Elem * const _Ptr)
		: _Mybase()
		{	
		_Tidy_init();
		assign(_Ptr);
		}

	basic_string(  const _Elem * const _Ptr, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy_init();
		assign(_Ptr);
		}

	basic_string(__declspec(guard(overflow)) const size_type _Count, const _Elem _Ch)
		: _Mybase()
		{	
		_Tidy_init();
		assign(_Count, _Ch);
		}

	basic_string(__declspec(guard(overflow)) const size_type _Count, const _Elem _Ch, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy_init();
		assign(_Count, _Ch);
		}

	template<class _Iter,
		class = enable_if_t<_Is_iterator<_Iter>::value>>
		basic_string(_Iter _First, _Iter _Last, const _Alloc& _Al = _Alloc())
		: _Mybase(_Al)
		{	
		;
		_Tidy_init();
		_Construct(_Unchecked(_First), _Unchecked(_Last), _Iter_cat_t<_Iter>());
		}

	template<class _Iter>
		void _Construct(_Iter _First, const _Iter _Last, input_iterator_tag)
		{	
		try {
		for (; _First != _Last; ++_First)
			push_back(static_cast<_Elem>(*_First));
		} catch (...) {
		_Tidy_deallocate();
		throw;
		}
		}

	template<class _Iter>
		void _Construct(const _Iter _First, const _Iter _Last, forward_iterator_tag)
		{	
		const size_type _Count = ::std:: distance(_First, _Last);
		reserve(_Count);
		_Construct(_First, _Last, input_iterator_tag());
		}

	void _Construct(_Elem * const _First, _Elem * const _Last, random_access_iterator_tag)
		{	
		if (_First != _Last)
			{
			assign(_First, _Last - _First);
			}
		}

	void _Construct(const _Elem * const _First, const _Elem * const _Last, random_access_iterator_tag)
		{	
		if (_First != _Last)
			{
			assign(_First, _Last - _First);
			}
		}

	basic_string(_Myt&& _Right) noexcept
		: _Mybase(::std:: move(_Right._Getal()))
		{	
		_Assign_rv_contents_with_alloc_always_equal(::std:: move(_Right), _Use_memcpy_move{});
		}

	basic_string(_Myt&& _Right, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Assign_rv_contents(::std:: move(_Right), typename _Alty::is_always_equal{});
		}









	_Myt& operator=(_Myt&& _Right)
		noexcept(_Alty::propagate_on_container_move_assignment::value || _Alty::is_always_equal::value)
		{	
		if (this != ::std:: addressof(_Right))
			{	
			_Tidy_deallocate();
			this->_Move_alloc(_Right._Getal());
			
			
			_Assign_rv_contents(::std:: move(_Right),
				bool_constant<_Alty::propagate_on_container_move_assignment::value
				|| _Alty::is_always_equal::value>{});
			}

		return (*this);
		}

	_Myt& assign(_Myt&& _Right) noexcept(_Alty::propagate_on_container_move_assignment::value || _Alty::is_always_equal::value)
		{	
		*this = ::std:: move(_Right);
		return (*this);
		}

	void _Assign_rv_contents(_Myt&& _Right, true_type)
		{	
			
			
			
		_Assign_rv_contents_with_alloc_always_equal(::std:: move(_Right), _Use_memcpy_move{});
		}

	void _Assign_rv_contents(_Myt&& _Right, false_type)
		{	
			
			
			
		if (this->_Getal() == _Right._Getal())
			{
			_Assign_rv_contents_with_alloc_always_equal(::std:: move(_Right), _Use_memcpy_move{});
			}
		else
			{
			_Tidy_init();
			_Assign_lv_contents(_Right);
			}
		}

	void _Assign_rv_contents_with_alloc_always_equal(_Myt&& _Right, true_type)
		{	
			
			
			
		auto& _Right_data = _Right._Get_data();












		const auto _My_data_mem = reinterpret_cast<unsigned char *>(::std:: addressof(this->_Get_data()))
			+ _Memcpy_move_offset;
		const auto _Right_data_mem = reinterpret_cast<unsigned char *>(::std:: addressof(_Right_data))
			+ _Memcpy_move_offset;
		:: memcpy(_My_data_mem, _Right_data_mem, _Memcpy_move_size);
		_Right._Tidy_init();
		}

	void _Assign_rv_contents_with_alloc_always_equal(_Myt&& _Right, false_type)
		{	
			
			
			
		auto& _My_data = this->_Get_data();
		auto& _Right_data = _Right._Get_data();
		if (_Right_data._Large_string_engaged())
			{	
			this->_Getal().construct(::std:: addressof(_My_data._Bx._Ptr), _Right_data._Bx._Ptr);
			_Right_data._Bx._Ptr = pointer();
			this->_Swap_all(_Right);
			}
		else
			{	
			_Traits::copy(_My_data._Bx._Buf, _Right_data._Bx._Buf, _Right_data._Mysize + 1);
			_Right._Orphan_all();
			}

		_My_data._Mysize = _Right_data._Mysize;
		_My_data._Myres = _Right_data._Myres;
		_Right._Tidy_init();
		}

	void _Assign_lv_contents(const _Myt& _Right)
		{	
			
		assign(_Right, 0, npos);
		}

	basic_string(initializer_list<_Elem> _Ilist, const _Alloc& _Al = allocator_type())
		: _Mybase(_Al)
		{	
		_Tidy_init();
		assign(_Ilist.begin(), _Ilist.end());
		}

	_Myt& operator=(initializer_list<_Elem> _Ilist)
		{	
		return (assign(_Ilist.begin(), _Ilist.end()));
		}

	_Myt& operator+=(initializer_list<_Elem> _Ilist)
		{	
		return (append(_Ilist.begin(), _Ilist.end()));
		}

	_Myt& assign(initializer_list<_Elem> _Ilist)
		{	
		return (assign(_Ilist.begin(), _Ilist.end()));
		}

	_Myt& append(initializer_list<_Elem> _Ilist)
		{	
		return (append(_Ilist.begin(), _Ilist.end()));
		}

	iterator insert(const const_iterator _Where, const initializer_list<_Elem> _Ilist)
		{	
		return (insert(_Where, _Ilist.begin(), _Ilist.end()));
		}

	_Myt& replace(const const_iterator _First, const const_iterator _Last, const initializer_list<_Elem> _Ilist)
		{	
		return (replace(_First, _Last, _Ilist.begin(), _Ilist.end()));
		}

	~basic_string() noexcept
		{	
		_Tidy_deallocate();
		}

	 static const size_type npos;	

	_Myt& operator=(const _Myt& _Right)
		{	
		if (this != ::std:: addressof(_Right))
			{	
#pragma warning(push)
#pragma warning(disable: 4127)	
			if (_Alty::propagate_on_container_copy_assignment::value
				&& this->_Getal() != _Right._Getal())
				{	
				_Tidy_deallocate();
				}
#pragma warning(pop)

			this->_Copy_alloc(_Right._Getal());

			_Assign_lv_contents(_Right);
			}

		return (*this);
		}








	_Myt& operator=(  const _Elem * const _Ptr)
		{	
		return (assign(_Ptr));
		}

	_Myt& operator=(const _Elem _Ch)
		{	
		return (assign(1, _Ch));
		}

	_Myt& operator+=(const _Myt& _Right)
		{	
		return (append(_Right));
		}








	_Myt& operator+=(  const _Elem * const _Ptr)
		{	
		return (append(_Ptr));
		}

	_Myt& operator+=(_Elem _Ch)
		{	
		push_back(_Ch);
		return (*this);
		}

	_Myt& append(const _Myt& _Right)
		{	
		return (append(_Right, 0, npos));
		}

	_Myt& append(const _Myt& _Right, const size_type _Roff, size_type _Count = npos)
		{	
		_Right._Check_offset(_Roff);
		_Count = _Right._Clamp_suffix_size(_Roff, _Count);
		if (npos - this->_Mysize() <= _Count)
			{
			_Xlen();	
			}

		const size_type _Num = this->_Mysize() + _Count;
		if (_Count != 0 && _Grow(_Num))
			{	
			_Traits::copy(this->_Myptr() + this->_Mysize(), _Right._Myptr() + _Roff, _Count);
			_Eos(_Num);
			}
		return (*this);
		}
















	_Myt& append(  const _Elem * const _Ptr, __declspec(guard(overflow)) const size_type _Count)
		{	
		if (_Inside(_Ptr))
			{
			return (append(*this, _Ptr - this->_Myptr(), _Count));	
			}

		if (npos - this->_Mysize() <= _Count)
			{
			_Xlen();	
			}

		const size_type _Num = this->_Mysize() + _Count;
		if (_Count != 0 && _Grow(_Num))
			{	
			_Traits::copy(this->_Myptr() + this->_Mysize(), _Ptr, _Count);
			_Eos(_Num);
			}

		return (*this);
		}

	_Myt& append(  const _Elem * const _Ptr)
		{	
		return (append(_Ptr, _Traits::length(_Ptr)));
		}

	_Myt& append(__declspec(guard(overflow)) const size_type _Count, const _Elem _Ch)
		{	
		if (npos - this->_Mysize() <= _Count)
			{
			_Xlen();	
			}

		const size_type _Num = this->_Mysize() + _Count;
		if (_Count != 0 && _Grow(_Num))
			{	
			_Chassign(this->_Mysize(), _Count, _Ch);
			_Eos(_Num);
			}

		return (*this);
		}

	template<class _Iter,
		class = enable_if_t<_Is_iterator<_Iter>::value>>
		_Myt& append(const _Iter _First, const _Iter _Last)
		{	
		return (replace(end(), end(), _First, _Last));
		}

	_Myt& assign(const _Myt& _Right)
		{	
		*this = _Right;
		return (*this);
		}

	_Myt& assign(const _Myt& _Right, const size_type _Roff, size_type _Count = npos)
		{	
		_Right._Check_offset(_Roff);
		_Count = _Right._Clamp_suffix_size(_Roff, _Count);

		if (this == ::std:: addressof(_Right))
			{	
			erase(_Roff + _Count);
			erase(0, _Roff);
			}
		else if (_Grow(_Count))
			{	
			_Traits::copy(this->_Myptr(), _Right._Myptr() + _Roff, _Count);
			_Eos(_Count);
			}

		return (*this);
		}
















	_Myt& assign(  const _Elem * const _Ptr, __declspec(guard(overflow)) const size_type _Count)
		{	
		if (_Inside(_Ptr))
			{
			return (assign(*this, _Ptr - this->_Myptr(), _Count));	
			}

		if (_Grow(_Count))
			{	
			_Traits::copy(this->_Myptr(), _Ptr, _Count);
			_Eos(_Count);
			}

		return (*this);
		}

	_Myt& assign(  const _Elem * const _Ptr)
		{	
		return (assign(_Ptr, _Traits::length(_Ptr)));
		}

	_Myt& assign(__declspec(guard(overflow)) const size_type _Count, const _Elem _Ch)
		{	
		if (_Count == npos)
			{
			_Xlen();	
			}

		if (_Grow(_Count))
			{	
			_Chassign(0, _Count, _Ch);
			_Eos(_Count);
			}

		return (*this);
		}

	template<class _Iter,
		class = enable_if_t<_Is_iterator<_Iter>::value>>
		_Myt& assign(const _Iter _First, const _Iter _Last)
		{	
		return (replace(begin(), end(), _First, _Last));
		}

	_Myt& insert(const size_type _Off, const _Myt& _Right)
		{	
		return (insert(_Off, _Right, 0, npos));
		}

	_Myt& insert(const size_type _Off, const _Myt& _Right, const size_type _Roff, size_type _Count = npos)
		{	
		_Check_offset(_Off);
		_Right._Check_offset(_Roff);
		_Count = _Right._Clamp_suffix_size(_Roff, _Count);
		if (npos - this->_Mysize() <= _Count)
			{
			_Xlen();	
			}

		const size_type _Num = this->_Mysize() + _Count;
		if (_Count != 0 && _Grow(_Num))
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off,
				this->_Mysize() - _Off);	
			if (this == ::std:: addressof(_Right))
				{
				_Traits::move(this->_Myptr() + _Off, this->_Myptr() + _Min_value(_Off, _Roff), _Count);	
				}
			else
				{
				_Traits::copy(this->_Myptr() + _Off, _Right._Myptr() + _Roff, _Count);	
				}

			_Eos(_Num);
			}

		return (*this);
		}

















	_Myt& insert(const size_type _Off,   const _Elem * const _Ptr,
		__declspec(guard(overflow)) const size_type _Count)
		{	
		if (_Inside(_Ptr))
			{
			return (insert(_Off, *this,
				_Ptr - this->_Myptr(), _Count));	
			}

		_Check_offset(_Off);
		if (npos - this->_Mysize() <= _Count)
			{
			_Xlen();	
			}

		const size_type _Num = this->_Mysize() + _Count;
		if (_Count != 0 && _Grow(_Num))
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off,
				this->_Mysize() - _Off);	
			_Traits::copy(this->_Myptr() + _Off, _Ptr, _Count);	
			_Eos(_Num);
			}

		return (*this);
		}

	_Myt& insert(const size_type _Off,   const _Elem * const _Ptr)
		{	
		return (insert(_Off, _Ptr, _Traits::length(_Ptr)));
		}

	_Myt& insert(const size_type _Off, __declspec(guard(overflow)) const size_type _Count, const _Elem _Ch)
		{	
		_Check_offset(_Off);
		if (npos - this->_Mysize() <= _Count)
			{
			_Xlen();	
			}

		const size_type _Num = this->_Mysize() + _Count;
		if (_Count != 0 && _Grow(_Num))
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off,
				this->_Mysize() - _Off);	
			_Chassign(_Off, _Count, _Ch);	
			_Eos(_Num);
			}

		return (*this);
		}

	iterator insert(const const_iterator _Where, const _Elem _Ch)
		{	
		size_type _Off = _Where - begin();
		insert(_Off, 1, _Ch);
		return (begin() + _Off);
		}

	iterator insert(const const_iterator _Where, __declspec(guard(overflow)) const size_type _Count, const _Elem _Ch)
		{	
		const size_type _Off = _Where - begin();
		insert(_Off, _Count, _Ch);
		return (begin() + _Off);
		}

	template<class _Iter,
		class = enable_if_t<_Is_iterator<_Iter>::value>>
		iterator insert(const const_iterator _Where, const _Iter _First, const _Iter _Last)
		{	
		const size_type _Off = _Where - begin();
		replace(_Where, _Where, _First, _Last);
		return (begin() + _Off);
		}

	_Myt& erase(const size_type _Off = 0)
		{	
		_Check_offset(_Off);
		_Eos(_Off);
		return (*this);
		}

	_Myt& erase(const size_type _Off, const size_type _Count)
		{	
		_Check_offset(_Off);
		if (this->_Mysize() - _Off <= _Count)
			{
			_Eos(_Off);	
			}
		else if (_Count != 0)
			{	
			value_type *_Ptr = this->_Myptr() + _Off;
			size_type _Newsize = this->_Mysize() - _Count;
			_Traits::move(_Ptr, _Ptr + _Count, _Newsize - _Off);
			_Eos(_Newsize);
			}

		return (*this);
		}

	iterator erase(const const_iterator _Where)
		{	
		const size_type _Count = _Where - begin();
		erase(_Count, 1);
		return (begin() + _Count);
		}

	iterator erase(const const_iterator _First, const const_iterator _Last)
		{	
		;
		const size_type _Count = _First - begin();
		erase(_Count, _Last - _First);
		return (begin() + _Count);
		}

	void clear() noexcept
		{	
		_Eos(0);
		}

	_Myt& replace(const size_type _Off, const size_type _N0, const _Myt& _Right)
		{	
		return (replace(_Off, _N0, _Right, 0, npos));
		}

	_Myt& replace(const size_type _Off, size_type _N0,
		const _Myt& _Right, const size_type _Roff, size_type _Count = npos)
		{	
		_Check_offset(_Off);
		_Right._Check_offset(_Roff);
		_N0 = _Clamp_suffix_size(_Off, _N0);
		_Count = _Right._Clamp_suffix_size(_Roff, _Count);
		if (npos - _Count <= this->_Mysize() - _N0)
			{
			_Xlen();	
			}

		const size_type _Nm = this->_Mysize() - _N0 - _Off;	
		const size_type _Newsize = this->_Mysize() + _Count - _N0;
		if (this->_Mysize() < _Newsize)
			{
			_Grow(_Newsize);
			}

		if (_Count == _N0)
			{	
			_Traits::move(this->_Myptr() + _Off,
				_Right._Myptr() + _Roff, _Count);	
			}
		else if (this != ::std:: addressof(_Right))
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::copy(this->_Myptr() + _Off,
				_Right._Myptr() + _Roff, _Count);	
			}
		else if (_Count < _N0)
			{	
			_Traits::move(this->_Myptr() + _Off,
				this->_Myptr() + _Roff, _Count);	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			}
		else if (_Roff <= _Off)
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::move(this->_Myptr() + _Off,
				this->_Myptr() + _Roff, _Count);	
			}
		else if (_Off + _N0 <= _Roff)
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::move(this->_Myptr() + _Off,
				this->_Myptr() + (_Roff + _Count - _N0),
				_Count);	
			}
		else
			{	
			_Traits::move(this->_Myptr() + _Off,
				this->_Myptr() + _Roff, _N0);	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::move(this->_Myptr() + _Off + _N0,
				this->_Myptr() + _Roff + _Count,
				_Count - _N0);	
			}

		_Eos(_Newsize);
		return (*this);
		}

















	_Myt& replace(const size_type _Off, size_type _N0,
		  const _Elem * const _Ptr, const size_type _Count)
		{	
		if (_Inside(_Ptr))
			{
			return (replace(_Off, _N0, *this,
				_Ptr - this->_Myptr(),
				_Count));	
			}

		_Check_offset(_Off);
		_N0 = _Clamp_suffix_size(_Off, _N0);
		if (npos - _Count <= this->_Mysize() - _N0)
			{
			_Xlen();	
			}

		size_type _Nm = this->_Mysize() - _N0 - _Off;
		if (_Count < _N0)
			{
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			}

		const size_type _Num = this->_Mysize() + _Count - _N0;
		if ((_Count != 0 || _N0 != 0)
			&& _Grow(_Num))
			{	
			if (_N0 < _Count)
				{
				_Traits::move(this->_Myptr() + _Off + _Count,
					this->_Myptr() + _Off + _N0, _Nm);	
				}
			_Traits::copy(this->_Myptr() + _Off, _Ptr, _Count);	
			_Eos(_Num);
			}

		return (*this);
		}

	_Myt& replace(const size_type _Off, const size_type _N0,   const _Elem * const _Ptr)
		{	
		return (replace(_Off, _N0, _Ptr, _Traits::length(_Ptr)));
		}

	_Myt& replace(const size_type _Off, size_type _N0, const size_type _Count, const _Elem _Ch)
		{	
		_Check_offset(_Off);
		_N0 = _Clamp_suffix_size(_Off, _N0);
		if (npos - _Count <= this->_Mysize() - _N0)
			{
			_Xlen();	
			}

		const size_type _Nm = this->_Mysize() - _N0 - _Off;
		if (_Count < _N0)
			{
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			}

		const size_type _Num = this->_Mysize() + _Count - _N0;
		if ((_Count != 0 || _N0 != 0) && _Grow(_Num))
			{	
			if (_N0 < _Count)
				{
				_Traits::move(this->_Myptr() + _Off + _Count,
					this->_Myptr() + _Off + _N0, _Nm);	
				}
			_Chassign(_Off, _Count, _Ch);	
			_Eos(_Num);
			}
		return (*this);
		}

	_Myt& replace(const const_iterator _First, const const_iterator _Last, const _Myt& _Right)
		{	
		return (replace(_First - begin(), _Last - _First, _Right));
		}









	_Myt& replace(const const_iterator _First, const const_iterator _Last,
		  const _Elem * const _Ptr, const size_type _Count)
		{	
		return (replace(_First - begin(), _Last - _First, _Ptr, _Count));
		}

	_Myt& replace(const const_iterator _First, const const_iterator _Last,   const _Elem * const _Ptr)
		{	
		return (replace(_First - begin(), _Last - _First, _Ptr));
		}

	_Myt& replace(const const_iterator _First, const const_iterator _Last, const size_type _Count, const _Elem _Ch)
		{	
		return (replace(_First - begin(), _Last - _First, _Count, _Ch));
		}

	template<class _Iter>
		_Myt& _Replace_range(const const_iterator _First, const const_iterator _Last,
		const _Iter _First2, const _Iter _Last2, false_type)
		{	
		const _Myt _Right(_First2, _Last2, get_allocator());
		replace(_First, _Last, _Right);
		return (*this);
		}

	template<class _Ptr>
		_Myt& _Replace_range(const const_iterator _First, const const_iterator _Last,
		const _Ptr _First2, const _Ptr _Last2, true_type)
		{	
		if (_First2 == _Last2)
			{
			erase(_First - cbegin(), _Last - _First);
			}
		else
			{
			replace(_First - cbegin(), _Last - _First, _First2, _Last2 - _First2);
			}

		return (*this);
		}

	template<class _Iter,
		class = enable_if_t<_Is_iterator<_Iter>::value>>
		_Myt& replace(const const_iterator _First, const const_iterator _Last, const _Iter _First2, const _Iter _Last2)
		{	
		;
		const auto _UFirst2 = _Unchecked(_First2);
		const auto _ULast2 = _Unchecked(_Last2);
		return (_Replace_range(_First, _Last, _UFirst2, _ULast2, _Is_elem_cptr<decltype(_UFirst2)>()));
		}

	iterator begin() noexcept
		{	
		auto _My_data = ::std:: addressof(this->_Get_data());
		return (iterator(this->_Getal().address(*_My_data->_Myptr()), _My_data));
		}

	const_iterator begin() const noexcept
		{	
		auto _My_data = ::std:: addressof(this->_Get_data());
		return (const_iterator(this->_Getal().address(*_My_data->_Myptr()), _My_data));
		}

	iterator end() noexcept
		{	
		auto _My_data = ::std:: addressof(this->_Get_data());
		return (iterator(this->_Getal().address(*_My_data->_Myptr()) + _My_data->_Mysize, _My_data));
		}

	const_iterator end() const noexcept
		{	
		auto _My_data = ::std:: addressof(this->_Get_data());
		return (const_iterator(this->_Getal().address(*_My_data->_Myptr()) + _My_data->_Mysize, _My_data));
		}

	reverse_iterator rbegin() noexcept
		{	
		return (reverse_iterator(end()));
		}

	const_reverse_iterator rbegin() const noexcept
		{	
		return (const_reverse_iterator(end()));
		}

	reverse_iterator rend() noexcept
		{	
		return (reverse_iterator(begin()));
		}

	const_reverse_iterator rend() const noexcept
		{	
		return (const_reverse_iterator(begin()));
		}

	const_iterator cbegin() const noexcept
		{	
		return (begin());
		}

	const_iterator cend() const noexcept
		{	
		return (end());
		}

	const_reverse_iterator crbegin() const noexcept
		{	
		return (rbegin());
		}

	const_reverse_iterator crend() const noexcept
		{	
		return (rend());
		}

	void shrink_to_fit()
		{	
		if ((size() | this->_ALLOC_MASK) < capacity())
			{	
			_Myt _Tmp(*this);
			swap(_Tmp);
			}
		}

	reference at(const size_type _Off)
		{	
		_Check_offset_exclusive(_Off);
		return (this->_Myptr()[_Off]);
		}

	const_reference at(const size_type _Off) const
		{	
		_Check_offset_exclusive(_Off);
		return (this->_Myptr()[_Off]);
		}

	reference operator[](const size_type _Off)
		{	
		;
		return (this->_Myptr()[_Off]);
		}

	const_reference operator[](const size_type _Off) const
		{	
		;
		return (this->_Myptr()[_Off]);
		}








	void push_back(const _Elem _Ch)
		{	
		auto& _My_data = this->_Get_data();
		auto& _Sz = _My_data._Mysize;
		if (_Sz == _My_data._Myres)
			{
			_Grow(_Sz + 1);	
			}

		auto _Ptr = _My_data._Myptr();
		_Traits::assign(_Ptr[_Sz], _Ch);
		++_Sz;
		_Traits::assign(_Ptr[_Sz], _Elem());
		}

	void pop_back()
		{	
		erase(this->_Mysize() - 1);	
		}

	reference front()
		{	
		return (*begin());
		}

	const_reference front() const
		{	
		return (*begin());
		}

	reference back()
		{	
		return (*(end() - 1));
		}

	const_reference back() const
		{	
		return (*(end() - 1));
		}

	  const _Elem * c_str() const noexcept
		{	
		return (this->_Myptr());
		}

	  const _Elem * data() const noexcept
		{	
		return (this->_Myptr());
		}








	size_type length() const noexcept
		{	
		return (this->_Mysize());
		}

	size_type size() const noexcept
		{	
		return (this->_Mysize());
		}

	size_type max_size() const noexcept
		{	
		const size_type _Num = this->_Getal().max_size();
		return (_Num <= 1 ? 1 : _Num - 1);
		}

	void resize(__declspec(guard(overflow)) const size_type _Newsize)
		{	
		resize(_Newsize, _Elem());
		}

	void resize(__declspec(guard(overflow)) const size_type _Newsize, const _Elem _Ch)
		{	
		if (_Newsize <= this->_Mysize())
			{
			_Eos(_Newsize);
			}
		else
			{
			append(_Newsize - this->_Mysize(), _Ch);
			}
		}

	size_type capacity() const noexcept
		{	
		return (this->_Myres());
		}

	void reserve(__declspec(guard(overflow)) const size_type _Newcap = 0)
		{	
		auto& _My_data = this->_Get_data();
		if (_My_data._Mysize > _Newcap)
			{	
			return;	
			}

		if (_My_data._Myres == _Newcap)
			{	
			return;	
			}

		if (_My_data._Myres < _Newcap)
			{	
			_Copy(_Newcap);
			return;
			}

		if (this->_BUF_SIZE > _Newcap && _My_data._Large_string_engaged())
			{	
			this->_Orphan_all();
			pointer _Ptr = _My_data._Bx._Ptr;
			auto& _Al = this->_Getal();
			_Al.destroy(::std:: addressof(_My_data._Bx._Ptr));
			_Traits::copy(_My_data._Bx._Buf, _Unfancy(_Ptr), _My_data._Mysize + 1);
			_Al.deallocate(_Ptr, _My_data._Myres + 1);
			_My_data._Myres = this->_BUF_SIZE - 1;
			return;
			}

		
		}

	bool empty() const noexcept
		{	
		return (this->_Mysize() == 0);
		}

	
	size_type copy(  _Elem * const _Ptr,
		size_type _Count, const size_type _Off = 0) const
		{	
		_Check_offset(_Off);
		_Count = _Clamp_suffix_size(_Off, _Count);
		_Traits::copy(_Ptr, this->_Myptr() + _Off, _Count);
		return (_Count);
		}

	  size_type _Copy_s(
		  _Elem * const _Dest, const size_type _Dest_size,
		size_type _Count, const size_type _Off = 0) const
		{	
		_Check_offset(_Off);
		_Count = _Clamp_suffix_size(_Off, _Count);
		_Traits::_Copy_s(_Dest, _Dest_size, this->_Myptr() + _Off, _Count);
		return (_Count);
		}

	void _Swap_data(_Myt& _Right, true_type)
		{	
		const auto _My_data_mem = reinterpret_cast<unsigned char *>(::std:: addressof(this->_Get_data()))
			+ _Memcpy_move_offset;
		const auto _Right_data_mem = reinterpret_cast<unsigned char *>(::std:: addressof(_Right._Get_data()))
			+ _Memcpy_move_offset;
		unsigned char _Temp_mem[_Memcpy_move_size];
		:: memcpy(_Temp_mem, _My_data_mem, _Memcpy_move_size);
		:: memcpy(_My_data_mem, _Right_data_mem, _Memcpy_move_size);
		:: memcpy(_Right_data_mem, _Temp_mem, _Memcpy_move_size);
		}

	void _Swap_bx_large_with_small(_Mydata_t& _Starts_large, _Mydata_t& _Starts_small)
		{	
		pointer _Ptr = _Starts_large._Bx._Ptr;
		auto& _Al = this->_Getal();
		_Al.destroy(::std:: addressof(_Starts_large._Bx._Ptr));
		_Traits::copy(_Starts_large._Bx._Buf, _Starts_small._Bx._Buf, this->_BUF_SIZE);
		_Al.construct(::std:: addressof(_Starts_small._Bx._Ptr), _Ptr);
		}

	void _Swap_data(_Myt& _Right, false_type)
		{	
		auto& _My_data = this->_Get_data();
		auto& _Right_data = _Right._Get_data();
		const bool _My_large = _My_data._Large_string_engaged();
		const bool _Right_large = _Right_data._Large_string_engaged();
		if (_My_large)
			{
			if (_Right_large)
				{	
				_Swap_adl(_My_data._Bx._Ptr, _Right_data._Bx._Ptr);
				}
			else
				{	
				_Swap_bx_large_with_small(_My_data, _Right_data);
				}
			}
		else
			{
			if (_Right_large)
				{	
				_Swap_bx_large_with_small(_Right_data, _My_data);
				}
			else
				{
				_Elem _Temp_buf[_Mybase::_BUF_SIZE]; 
				_Traits::copy(_Temp_buf, _My_data._Bx._Buf, this->_BUF_SIZE);
				_Traits::copy(_My_data._Bx._Buf, _Right_data._Bx._Buf, this->_BUF_SIZE);
				_Traits::copy(_Right_data._Bx._Buf, _Temp_buf, this->_BUF_SIZE);
				}
			}

		::std:: swap(this->_Mysize(), _Right._Mysize());
		::std:: swap(this->_Myres(), _Right._Myres());
		}

	void swap(_Myt& _Right)
		noexcept(_Alty::propagate_on_container_swap::value || _Alty::is_always_equal::value)
		{	
		if (this != ::std:: addressof(_Right))
			{	
			_Pocs(this->_Getal(), _Right._Getal());





















			}

		_Swap_data(_Right, _Use_memcpy_move{});
		}









	size_type find(const _Myt& _Right, const size_type _Off = 0) const noexcept
		{	
		return (static_cast<size_type>(
			_Traits_find<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Right._Myptr(), _Right._Mysize())));
		}

	size_type find(  const _Elem * const _Ptr, const size_type _Off, const size_type _Count) const
		noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Count)));
		}

	size_type find(  const _Elem * const _Ptr, const size_type _Off = 0) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Traits::length(_Ptr))));
		}

	size_type find(const _Elem _Ch, const size_type _Off = 0) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_ch<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ch)));
		}









	size_type rfind(const _Myt& _Right, const size_type _Off = npos) const noexcept
		{	
		return (static_cast<size_type>(
			_Traits_rfind<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Right._Myptr(), _Right._Mysize())));
		}

	size_type rfind(  const _Elem * const _Ptr, const size_type _Off, const size_type _Count) const
		noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_rfind<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Count)));
		}

	size_type rfind(  const _Elem * const _Ptr, const size_type _Off = npos) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_rfind<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Traits::length(_Ptr))));
		}

	size_type rfind(const _Elem _Ch, const size_type _Off = npos) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_rfind_ch<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ch)));
		}









	size_type find_first_of(const _Myt& _Right, const size_type _Off = 0) const noexcept
		{	
		return (static_cast<size_type>(_Traits_find_first_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off,
			_Right._Myptr(), _Right._Mysize())));
		}

	size_type find_first_of(  const _Elem * const _Ptr, const size_type _Off,
		const size_type _Count) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_first_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Count)));
		}

	size_type find_first_of(  const _Elem * const _Ptr, const size_type _Off = 0) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_first_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Traits::length(_Ptr))));
		}

	size_type find_first_of(const _Elem _Ch, const size_type _Off = 0) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_ch<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ch)));
		}









	size_type find_last_of(const _Myt& _Right, size_type _Off = npos) const noexcept
		{	
		return (static_cast<size_type>(_Traits_find_last_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off,
			_Right._Myptr(), _Right._Mysize())));
		}

	size_type find_last_of(  const _Elem * const _Ptr, const size_type _Off,
		const size_type _Count) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_last_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Count)));
		}

	size_type find_last_of(  const _Elem * const _Ptr, const size_type _Off = npos) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_last_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Traits::length(_Ptr))));
		}

	size_type find_last_of(const _Elem _Ch, const size_type _Off = npos) const noexcept 
		{	
		return (static_cast<size_type>(_Traits_rfind_ch<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ch)));
		}










	size_type find_first_not_of(const _Myt& _Right, const size_type _Off = 0) const noexcept
		{	
		return (static_cast<size_type>(_Traits_find_first_not_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off,
			_Right._Myptr(), _Right._Mysize())));
		}

	size_type find_first_not_of(  const _Elem * const _Ptr, const size_type _Off,
		const size_type _Count) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_first_not_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Count)));
		}

	size_type find_first_not_of(  const _Elem * const _Ptr, size_type _Off = 0) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_first_not_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Traits::length(_Ptr))));
		}

	size_type find_first_not_of(const _Elem _Ch, const size_type _Off = 0) const noexcept 
		{	
		return (static_cast<size_type>(_Traits_find_not_ch<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ch)));
		}










	size_type find_last_not_of(const _Myt& _Right, const size_type _Off = npos) const noexcept
		{	
		return (static_cast<size_type>(_Traits_find_last_not_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off,
			_Right._Myptr(), _Right._Mysize())));
		}

	size_type find_last_not_of(  const _Elem * const _Ptr, const size_type _Off,
		const size_type _Count) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_find_last_not_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ptr, _Count)));
		}

	size_type find_last_not_of(  const _Elem * const _Ptr, const size_type _Off = npos) const
		noexcept 
		{	
		return (static_cast<size_type>(_Traits_find_last_not_of<_Traits>(this->_Myptr(), this->_Mysize(), _Off,
			_Ptr, _Traits::length(_Ptr))));
		}

	size_type find_last_not_of(const _Elem _Ch, const size_type _Off = npos) const noexcept 
		{	
		return (static_cast<size_type>(
			_Traits_rfind_not_ch<_Traits>(this->_Myptr(), this->_Mysize(), _Off, _Ch)));
		}

	_Myt substr(const size_type _Off = 0, const size_type _Count = npos) const
		{	
		return (_Myt(*this, _Off, _Count, get_allocator()));
		}

	size_type _Clamp_suffix_size(const size_type _Off, const size_type _Size) const noexcept
		{	
		return (_Min_value(_Size, this->_Mysize() - _Off));
		}

	bool _Equal(const _Myt& _Right) const noexcept
		{	
		return (_Traits_equal<_Traits>(this->_Myptr(), this->_Mysize(), _Right._Myptr(), _Right._Mysize()));
		}

	bool _Equal(  const _Elem * const _Ptr) const noexcept
		{	
		return (_Traits_equal<_Traits>(this->_Myptr(), this->_Mysize(), _Ptr, _Traits::length(_Ptr)));
		}





























	int compare(const _Myt& _Right) const noexcept
		{	
		return (_Traits_compare<_Traits>(this->_Myptr(), this->_Mysize(),
			_Right._Myptr(), _Right._Mysize()));
		}

	int compare(size_type _Off, size_type _N0, const _Myt& _Right) const
		{	
		_Check_offset(_Off);
		return (_Traits_compare<_Traits>(this->_Myptr() + _Off, _Clamp_suffix_size(_Off, _N0),
			_Right._Myptr(), _Right._Mysize()));
		}

	int compare(const size_type _Off, const size_type _N0, const _Myt& _Right,
		const size_type _Roff, const size_type _Count = npos) const
		{	
		_Check_offset(_Off);
		_Right._Check_offset(_Roff);
		return (_Traits_compare<_Traits>(this->_Myptr() + _Off, _Clamp_suffix_size(_Off, _N0),
			_Right._Myptr() + _Roff, _Right._Clamp_suffix_size(_Roff, _Count)));
		}

	int compare(  const _Elem * const _Ptr) const noexcept 
		{	
		return (_Traits_compare<_Traits>(this->_Myptr(), this->_Mysize(),
			_Ptr, _Traits::length(_Ptr)));
		}

	int compare(const size_type _Off, const size_type _N0,   const _Elem * const _Ptr) const
		{	
		_Check_offset(_Off);
		return (_Traits_compare<_Traits>(this->_Myptr() + _Off, _Clamp_suffix_size(_Off, _N0),
			_Ptr, _Traits::length(_Ptr)));
		}

	int compare(const size_type _Off, const size_type _N0,   const _Elem * const _Ptr,
		const size_type _Count) const
		{	
		_Check_offset(_Off);
		return (_Traits_compare<_Traits>(this->_Myptr() + _Off, _Clamp_suffix_size(_Off, _N0),
			_Ptr, _Count));
		}

	allocator_type get_allocator() const noexcept
		{	
		allocator_type _Ret(this->_Getal());
		return (_Ret);
		}

	void _Chassign(const size_type _Off, const size_type _Count, const _Elem _Ch)
		{	
		if (_Count == 1)
			{
			_Traits::assign(*(this->_Myptr() + _Off), _Ch);
			}
		else
			{
			_Traits::assign(this->_Myptr() + _Off, _Count, _Ch);
			}
		}

	void _Copy(const size_type _Newsize)
		{	
		const auto _Max = max_size();
		if (_Newsize > _Max)
			{	
			_Xlen();
			}

		auto& _My_data = this->_Get_data();
		const size_type _Oldres = _My_data._Myres;
		size_type _Newres = _Newsize | this->_ALLOC_MASK;
		if (_Max < _Newres)
			{
			_Newres = _Newsize;	
			}
		else if (_Oldres / 2 <= _Newres / 3)
			;
		else if (_Oldres <= _Max - _Oldres / 2)
			{
			_Newres = _Oldres + _Oldres / 2;	
			}
		else
			{
			_Newres = _Max;	
			}

		auto& _Al = this->_Getal();
		pointer _Ptr;
		try {
			_Ptr = _Al.allocate(_Newres + 1);
		} catch (...) {
			_Newres = _Newsize;	
			_Ptr = _Al.allocate(_Newres + 1);	
		}

		
		this->_Orphan_all();
		if (_My_data._Large_string_engaged())
			{	
			_Traits::copy(_Unfancy(_Ptr), _Unfancy(_My_data._Bx._Ptr), _My_data._Mysize + 1);
			_Al.deallocate(_My_data._Bx._Ptr, _Oldres + 1);
			_My_data._Bx._Ptr = _Ptr;
			}
		else
			{	
			_Traits::copy(_Unfancy(_Ptr), _My_data._Bx._Buf, _My_data._Mysize + 1);
			_Al.construct(::std:: addressof(_My_data._Bx._Ptr), _Ptr);
			}

		_My_data._Myres = _Newres;
		}

	void _Eos(const size_type _Newsize)
		{	
		auto& _My_data = this->_Get_data();
		_Traits::assign(_My_data._Myptr()[_My_data._Mysize = _Newsize], _Elem());
		}

	bool _Grow(const size_type _Newsize)
		{	
		if (_Newsize == 0)
			{
			_Eos(0);	
			return (false);
			}

		if (this->_Myres() < _Newsize)
			{	
			_Copy(_Newsize);
			}

		return (true);	
		}

	bool _Inside(const _Elem * const _Ptr) const
		{	
		const auto& _My_data = this->_Get_data();
		const _Elem * const _My_chars = _My_data._Myptr();
		return (_My_chars <= _Ptr && _Ptr < _My_chars + _My_data._Mysize);
		}

	void _Tidy_init()
		{	
		auto& _My_data = this->_Get_data();
		_My_data._Mysize = 0;
		_My_data._Myres = this->_BUF_SIZE - 1;
		
		
		_Traits::assign(_My_data._Bx._Buf[0], _Elem());
		}

	void _Tidy_deallocate()
		{	
		this->_Orphan_all();
		auto& _My_data = this->_Get_data();
		if (_My_data._Large_string_engaged())
			{
			pointer _Ptr = _My_data._Bx._Ptr;
			auto& _Al = this->_Getal();
			_Al.destroy(::std:: addressof(_My_data._Bx._Ptr));
			_Al.deallocate(_Ptr, _My_data._Myres + 1);
			}

		_My_data._Mysize = 0;
		_My_data._Myres = this->_BUF_SIZE - 1;
		
		
		_Traits::assign(_My_data._Bx._Buf[0], _Elem());
		}

	[[noreturn]] static void _Xlen()
		{	
		_Xlength_error("string too long");
		}

	void _Check_offset(const size_type _Off) const
		{	
		if (this->_Mysize() < _Off)
			{
			_Xran();
			}
		}

	void _Check_offset_exclusive(const size_type _Off) const
		{	
		if (this->_Mysize() <= _Off)
			{
			_Xran();
			}
		}

	[[noreturn]] static void _Xran()
		{	
		_Xout_of_range("invalid string position");
		}
	};

		
template<class _Elem,
	class _Traits,
	class _Alloc>
	 const typename basic_string<_Elem, _Traits, _Alloc>::size_type
		basic_string<_Elem, _Traits, _Alloc>::npos =
			(typename basic_string<_Elem, _Traits, _Alloc>::size_type)(-1);

		

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	void swap(basic_string<_Elem, _Traits, _Alloc>& _Left,
		basic_string<_Elem, _Traits, _Alloc>& _Right)
			noexcept(noexcept(_Left.swap(_Right)))
	{	
	_Left.swap(_Right);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(_Left.size() + _Right.size());
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		  const _Elem * const _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(_Traits::length(_Left) + _Right.size());
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const _Elem _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(1 + _Right.size());
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		  const _Elem * const _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(_Left.size() + _Traits::length(_Right));
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(_Left.size() + 1);
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		basic_string<_Elem, _Traits, _Alloc>&& _Right)
	{	
	return (::std:: move(_Right.insert(0, _Left)));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		basic_string<_Elem, _Traits, _Alloc>&& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (::std:: move(_Left.append(_Right)));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		basic_string<_Elem, _Traits, _Alloc>&& _Left,
		basic_string<_Elem, _Traits, _Alloc>&& _Right)
	{	
	if (_Right.size() <= _Left.capacity() - _Left.size()
		|| _Right.capacity() - _Right.size() < _Left.size())
		return (::std:: move(_Left.append(_Right)));
	else
		return (::std:: move(_Right.insert(0, _Left)));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		  const _Elem * const _Left,
		basic_string<_Elem, _Traits, _Alloc>&& _Right)
	{	
	return (::std:: move(_Right.insert(0, _Left)));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const _Elem _Left,
		basic_string<_Elem, _Traits, _Alloc>&& _Right)
	{	
	typedef typename basic_string<_Elem, _Traits, _Alloc>::size_type
		size_type;
	return (::std:: move(_Right.insert((size_type)0, (size_type)1, _Left)));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		basic_string<_Elem, _Traits, _Alloc>&& _Left,
		  const _Elem * const _Right)
	{	
	return (::std:: move(_Left.append(_Right)));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		basic_string<_Elem, _Traits, _Alloc>&& _Left,
		const _Elem _Right)
	{	
	_Left.push_back(_Right);
	return (::std:: move(_Left));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator==(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right) noexcept
	{	
	return (_Left._Equal(_Right));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator==(
		  const _Elem * const _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Right._Equal(_Left));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator==(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		  const _Elem * const _Right)
	{	
	return (_Left._Equal(_Right));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator!=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right) noexcept
	{	
	return (!(_Left == _Right));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator!=(
		  const _Elem * const _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Left == _Right));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator!=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		  const _Elem * const _Right)
	{	
	return (!(_Left == _Right));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right) noexcept
	{	
	return (_Left.compare(_Right) < 0);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<(
		  const _Elem * const _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Right.compare(_Left) > 0);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		  const _Elem * const _Right)
	{	
	return (_Left.compare(_Right) < 0);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right) noexcept
	{	
	return (_Right < _Left);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>(
		  const _Elem * const _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Right < _Left);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		  const _Elem * const _Right)
	{	
	return (_Right < _Left);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right) noexcept
	{	
	return (!(_Right < _Left));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<=(
		  const _Elem * const _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Right < _Left));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		  const _Elem * const _Right)
	{	
	return (!(_Right < _Left));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right) noexcept
	{	
	return (!(_Left < _Right));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>=(
		  const _Elem * const _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Left < _Right));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		  const _Elem * const _Right)
	{	
	return (!(_Left < _Right));
	}

typedef basic_string<char, char_traits<char>, allocator<char> >
	string;
typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t> >
	wstring;

	
template<class _Elem,
	class _Traits,
	class _Alloc>
	struct hash<basic_string<_Elem, _Traits, _Alloc> >
	{	
	typedef basic_string<_Elem, _Traits, _Alloc> argument_type;
	typedef size_t result_type;

	size_t operator()(const argument_type& _Keyval) const
		{	
		return (_Hash_seq((const unsigned char *)_Keyval.c_str(),
			_Keyval.size() * sizeof (_Elem)));
		}
	};

typedef basic_string<char16_t, char_traits<char16_t>, allocator<char16_t> >
	u16string;
typedef basic_string<char32_t, char_traits<char32_t>, allocator<char32_t> >
	u32string;
}


#pragma warning(pop)
#pragma pack(pop)










 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 
namespace std {
		
class logic_error
	: public exception
	{	
public:
	typedef exception _Mybase;

	explicit logic_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit logic_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};

		
class domain_error
	: public logic_error
	{	
public:
	typedef logic_error _Mybase;

	explicit domain_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit domain_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};

		
class invalid_argument
	: public logic_error
	{	
public:
	typedef logic_error _Mybase;

	explicit invalid_argument(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit invalid_argument(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};

		
class length_error
	: public logic_error
	{	
public:
	typedef logic_error _Mybase;

	explicit length_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit length_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};

		
class out_of_range
	: public logic_error
	{	
public:
	typedef logic_error _Mybase;

	explicit out_of_range(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit out_of_range(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};

		
class runtime_error
	: public exception
	{	
public:
	typedef exception _Mybase;

	explicit runtime_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit runtime_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};

		
class overflow_error
	: public runtime_error
	{	
public:
	typedef runtime_error _Mybase;

	explicit overflow_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit overflow_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};

		
class underflow_error
	: public runtime_error
	{	
public:
	typedef runtime_error _Mybase;

	explicit underflow_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit underflow_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};

		
class range_error
	: public runtime_error
	{	
public:
	typedef runtime_error _Mybase;

	explicit range_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}

	explicit range_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}

 

 






	};
}
 
 #pragma warning(pop)
 #pragma pack(pop)

























#pragma once







#pragma pack(push,8)
#pragma warning(push,3)
#pragma warning(disable: 4702 )



#pragma warning(disable: 4275)	









#pragma once




































































































































































































































































































































#pragma pack(push, 8)







    struct __type_info_node;





    extern __type_info_node __type_info_root_node;




__pragma(pack(push, 8)) extern "C" {


#pragma warning(push)
#pragma warning(disable: 4510 4512 4610) 
struct __std_type_info_data
{
    char const* _UndecoratedName;
    char const  _DecoratedName[1];
};
#pragma warning(pop)

__declspec(dllimport) int __cdecl __std_type_info_compare(
      __std_type_info_data const* _Lhs,
      __std_type_info_data const* _Rhs
    );

__declspec(dllimport) size_t __cdecl __std_type_info_hash(
      __std_type_info_data const* _Data
    );

__declspec(dllimport) char const* __cdecl __std_type_info_name(
      __std_type_info_data* _Data,
      __type_info_node*     _RootNode
    );

} __pragma(pack(pop))



class type_info
{
public:

    type_info(type_info const&) = delete;
    type_info& operator=(type_info const&) = delete;

    size_t hash_code() const throw()
    {
        return __std_type_info_hash(&_Data);
    }

    bool operator==(type_info const& _Other) const throw()
    {
        return __std_type_info_compare(&_Data, &_Other._Data) == 0;
    }

    bool operator!=(type_info const& _Other) const throw()
    {
        return __std_type_info_compare(&_Data, &_Other._Data) != 0;
    }

    bool before(type_info const& _Other) const throw()
    {
        return __std_type_info_compare(&_Data, &_Other._Data) < 0;
    }

    char const* name() const throw()
    {
        


        return __std_type_info_name(&_Data, &__type_info_root_node);
        
    }

    char const* raw_name() const throw()
    {
        return _Data._DecoratedName;
    }

    virtual ~type_info() throw();

private:

    mutable __std_type_info_data _Data;
};

namespace std {
	using ::type_info;
}



namespace std {

class bad_cast
    : public exception
{
public:

    bad_cast() throw()
        : exception("bad cast", 1)
    {
    }

    static bad_cast __construct_from_string_literal(char const* const _Message) throw()
    {
        return bad_cast(_Message, 1);
    }

private:

    bad_cast(char const* const _Message, int) throw()
        : exception(_Message, 1)
    {
    }
};

class bad_typeid
    : public exception
{
public:

    bad_typeid() throw()
        : exception("bad typeid", 1)
    {
    }

    static bad_typeid __construct_from_string_literal(char const* const _Message) throw()
    {
        return bad_typeid(_Message, 1);
    }

private:

    friend class __non_rtti_object;

    bad_typeid(char const* const _Message, int) throw()
        : exception(_Message, 1)
    {
    }
};

class __non_rtti_object
    : public bad_typeid
{
public:

    static __non_rtti_object __construct_from_string_literal(char const* const _Message) throw()
    {
        return __non_rtti_object(_Message, 1);
    }

private:

    __non_rtti_object(char const* const _Message, int) throw()
        : bad_typeid(_Message, 1)
    {
    }
};

} 



#pragma pack(pop)


 namespace std {


constexpr int _Small_object_num_ptrs = 6 + 16 / sizeof (void *);

 






















































 }


#pragma pack(pop)
#pragma warning(pop)












#pragma once





#pragma once











#pragma once





__pragma(pack(push, 8)) extern "C" {









  __declspec(dllimport) int __cdecl _isctype(  int _C,   int _Type);
  __declspec(dllimport) int __cdecl _isctype_l(  int _C,   int _Type,   _locale_t _Locale);
   __declspec(dllimport) int __cdecl isalpha(  int _C);
  __declspec(dllimport) int __cdecl _isalpha_l(  int _C,   _locale_t _Locale);
   __declspec(dllimport) int __cdecl isupper(  int _C);
  __declspec(dllimport) int __cdecl _isupper_l(  int _C,   _locale_t _Locale);
   __declspec(dllimport) int __cdecl islower(  int _C);
  __declspec(dllimport) int __cdecl _islower_l(  int _C,   _locale_t _Locale);


   __declspec(dllimport) int __cdecl isdigit(  int _C);

  __declspec(dllimport) int __cdecl _isdigit_l(  int _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl isxdigit(  int _C);
  __declspec(dllimport) int __cdecl _isxdigit_l(  int _C,   _locale_t _Locale);


   __declspec(dllimport) int __cdecl isspace(  int _C);

  __declspec(dllimport) int __cdecl _isspace_l(  int _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl ispunct(  int _C);
  __declspec(dllimport) int __cdecl _ispunct_l(  int _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl isblank(  int _C);
  __declspec(dllimport) int __cdecl _isblank_l(  int _C,   _locale_t _Locale);
   __declspec(dllimport) int __cdecl isalnum(  int _C);
  __declspec(dllimport) int __cdecl _isalnum_l(  int _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl isprint(  int _C);
  __declspec(dllimport) int __cdecl _isprint_l(  int _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl isgraph(  int _C);
  __declspec(dllimport) int __cdecl _isgraph_l(  int _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iscntrl(  int _C);
  __declspec(dllimport) int __cdecl _iscntrl_l(  int _C,   _locale_t _Locale);


   __declspec(dllimport) int __cdecl toupper(  int _C);


   __declspec(dllimport) int __cdecl tolower(  int _C);

   __declspec(dllimport) int __cdecl _tolower(  int _C);
  __declspec(dllimport) int __cdecl _tolower_l(  int _C,   _locale_t _Locale);
   __declspec(dllimport) int __cdecl _toupper(  int _C);
  __declspec(dllimport) int __cdecl _toupper_l(  int _C,   _locale_t _Locale);

  __declspec(dllimport) int __cdecl __isascii(  int _C);
  __declspec(dllimport) int __cdecl __toascii(  int _C);
  __declspec(dllimport) int __cdecl __iscsymf(  int _C);
  __declspec(dllimport) int __cdecl __iscsym(  int _C);









 
    
    
    






















    
    
    



        
    



    
    
    
    
    
    
    
    



    














    __inline __crt_locale_data_public* __cdecl __acrt_get_locale_data_prefix(void const volatile* const _LocalePointers)
    {
        _locale_t const _TypedLocalePointers = (_locale_t)_LocalePointers;
        return (__crt_locale_data_public*)_TypedLocalePointers->locinfo;
    }

    



    __inline int __cdecl _chvalidchk_l(
              int       const _C,
              int       const _Mask,
          _locale_t const _Locale
        )
    {
        


        if (_Locale)
        {
            return __acrt_get_locale_data_prefix(_Locale)->_locale_pctype[_C] & _Mask;
        }
            
        return (__pctype_func()[(_C)] & (_Mask));
        
    }

    
    

    __inline int __cdecl _ischartype_l(
              int       const _C,
              int       const _Mask,
          _locale_t const _Locale
        )
    {
        if (_Locale && __acrt_get_locale_data_prefix(_Locale)->_locale_mb_cur_max > 1)
        {
            return _isctype_l(_C, _Mask, _Locale);
        }

        return _chvalidchk_l(_C, _Mask, _Locale);
    }

    
    
    
    
    
    
    
    
    
    
    
    

    
    

    
    


    
    
    
    
    

    
    
    
    





    
    
    
    
    





} __pragma(pack(pop))









#pragma once




__pragma(pack(push, 8)) extern "C" {















struct lconv
{
    char*    decimal_point;
    char*    thousands_sep;
    char*    grouping;
    char*    int_curr_symbol;
    char*    currency_symbol;
    char*    mon_decimal_point;
    char*    mon_thousands_sep;
    char*    mon_grouping;
    char*    positive_sign;
    char*    negative_sign;
    char     int_frac_digits;
    char     frac_digits;
    char     p_cs_precedes;
    char     p_sep_by_space;
    char     n_cs_precedes;
    char     n_sep_by_space;
    char     p_sign_posn;
    char     n_sign_posn;
    wchar_t* _W_decimal_point;
    wchar_t* _W_thousands_sep;
    wchar_t* _W_int_curr_symbol;
    wchar_t* _W_currency_symbol;
    wchar_t* _W_mon_decimal_point;
    wchar_t* _W_mon_thousands_sep;
    wchar_t* _W_positive_sign;
    wchar_t* _W_negative_sign;
};





















__declspec(dllimport) void __cdecl _lock_locales(void);
__declspec(dllimport) void __cdecl _unlock_locales(void);


__declspec(dllimport) int __cdecl _configthreadlocale(
      int _Flag
    );


__declspec(dllimport) char* __cdecl setlocale(
            int         _Category,
      char const* _Locale
    );


__declspec(dllimport) struct lconv* __cdecl localeconv(void);


__declspec(dllimport) _locale_t __cdecl _get_current_locale(void);


__declspec(dllimport) _locale_t __cdecl _create_locale(
        int         _Category,
      char const* _Locale
    );

__declspec(dllimport) void __cdecl _free_locale(
      _locale_t _Locale
    );



__declspec(dllimport) wchar_t* __cdecl _wsetlocale(
            int            _Category,
      wchar_t const* _Locale
    );


__declspec(dllimport) _locale_t __cdecl _wcreate_locale(
        int            _Category,
      wchar_t const* _Locale
    );



__declspec(dllimport) wchar_t**    __cdecl ___lc_locale_name_func(void);
__declspec(dllimport) unsigned int __cdecl ___lc_codepage_func   (void);
__declspec(dllimport) unsigned int __cdecl ___lc_collate_cp_func (void);



} __pragma(pack(pop))




 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 


 
extern "C" {
 


		












		










 
 
 
 
 
 
 
 

typedef struct _Collvec
	{	
	unsigned int _Page;		
	wchar_t *_LocaleName;
	} _Collvec;

typedef struct _Ctypevec
	{	
	unsigned int _Page;		
	const short *_Table;
	int _Delfl;
	wchar_t *_LocaleName;
	} _Ctypevec;

typedef struct _Cvtvec
	{	
	unsigned int _Page;		
	unsigned int _Mbcurmax;
	int _Isclocale;	
	unsigned char _Isleadbyte[32];	
	} _Cvtvec;

		
__declspec(dllimport) _Collvec __cdecl _Getcoll(void);
__declspec(dllimport) _Ctypevec __cdecl _Getctype(void);
__declspec(dllimport) _Cvtvec __cdecl _Getcvt(void);
__declspec(dllimport) int __cdecl _Getdateorder(void);

 








__declspec(dllimport) int __cdecl _Mbrtowc(  wchar_t *, const char *, size_t,
	mbstate_t *, const _Cvtvec *);
 

__declspec(dllimport) float __cdecl _Stof(const char *,
	    char **, long);
__declspec(dllimport) double __cdecl _Stod(const char *,
	    char **, long);
__declspec(dllimport) long double __cdecl _Stold(const char *,
	    char **, long);

__declspec(dllimport) int __cdecl _Strcoll(const char *, const char *,
	const char *, const char *, const _Collvec *);
__declspec(dllimport) size_t __cdecl _Strxfrm(
	    char *_String1,
	  char *_End1, const char *, const char *, const _Collvec *);
__declspec(dllimport) int __cdecl _Tolower(int, const _Ctypevec *);
__declspec(dllimport) int __cdecl _Toupper(int, const _Ctypevec *);
__declspec(dllimport) int __cdecl _Wcrtomb(  char *, wchar_t, mbstate_t *,
	const _Cvtvec *);
__declspec(dllimport) int __cdecl _Wcscoll(const wchar_t *, const wchar_t *,
	const wchar_t *, const wchar_t *, const _Collvec *);
__declspec(dllimport) size_t __cdecl _Wcsxfrm(
	    wchar_t *_String1,
	  wchar_t *_End1, const wchar_t *, const wchar_t *, const _Collvec *);

__declspec(dllimport) short __cdecl _Getwctype(wchar_t, const _Ctypevec *);
__declspec(dllimport) const wchar_t *__cdecl _Getwctypes(const wchar_t *,
	const wchar_t *, short *, const _Ctypevec *);
__declspec(dllimport) wchar_t __cdecl _Towlower(wchar_t, const _Ctypevec *);
__declspec(dllimport) wchar_t __cdecl _Towupper(wchar_t, const _Ctypevec *);


 
}
 


extern "C" {
 
 
__declspec(dllimport) char *__cdecl _Getdays(void);

 
 
__declspec(dllimport) char *__cdecl _Getmonths(void);

__declspec(dllimport) void *__cdecl _Gettnames(void);

 
__declspec(dllimport) size_t __cdecl _Strftime(  char *,
	  size_t _Maxsize,   const char *,   const struct tm *,
	  void *);

 
 
__declspec(dllimport) wchar_t *__cdecl _W_Getdays(void);

 
 
__declspec(dllimport) wchar_t *__cdecl _W_Getmonths(void);

__declspec(dllimport) void *__cdecl _W_Gettnames(void);

 
__declspec(dllimport) size_t __cdecl _Wcsftime(  wchar_t *,
	  size_t _Maxsize,   const wchar_t *,   const struct tm *,
	  void *);
}

 







__declspec(dllimport) _locale_t __cdecl _GetLocaleForCP(unsigned int);
 

 
 #pragma warning(pop)
 #pragma pack(pop)











 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
class __declspec(dllimport) _Timevec
	{	
public:
	 _Timevec(void *_Ptr = 0)
		: _Timeptr(_Ptr)
		{	
		}

	 _Timevec(const _Timevec& _Right)
		{	
		*this = _Right;
		}

	 ~_Timevec() noexcept
		{	
		free(_Timeptr);
		}

	_Timevec&  operator=(const _Timevec& _Right)
		{	
		_Timeptr = _Right._Timeptr;
		((_Timevec *)&_Right)->_Timeptr = 0;
		return (*this);
		}

	void * _Getptr() const
		{	
		return (_Timeptr);
		}

private:
	void *_Timeptr;	
	};

		
class __declspec(dllimport) _Locinfo
	{	
public:
	typedef ::_Collvec _Collvec;
	typedef ::_Ctypevec _Ctypevec;
	typedef ::_Cvtvec _Cvtvec;
	typedef ::std:: _Timevec _Timevec;

	static  void __cdecl _Locinfo_ctor(
		_Locinfo *, const char *);
	static  void __cdecl _Locinfo_ctor(
		_Locinfo *, int, const char *);
	static  void __cdecl _Locinfo_dtor(
		_Locinfo *);
	static  _Locinfo& __cdecl _Locinfo_Addcats(
		_Locinfo *, int, const char *);

	 _Locinfo(const char *_Pch = "C")
 
		: _Lock(0)
 

		{	
		if (_Pch == 0)
			throw runtime_error("bad locale name");
		_Locinfo_ctor(this, _Pch);
		}

	 _Locinfo(int _Cat, const char *_Pch)
 
		: _Lock(0)
 

		{	
		if (_Pch == 0)
			throw runtime_error("bad locale name");
		_Locinfo_ctor(this, _Cat, _Pch);
		}

	 ~_Locinfo() noexcept
		{	
		_Locinfo_dtor(this);
		}

	_Locinfo&  _Addcats(int _Cat, const char *_Pch)
		{	
		if (_Pch == 0)
			throw runtime_error("bad locale name");
		return (_Locinfo_Addcats(this, _Cat, _Pch));
		}

	const char * _Getname() const
		{	
		return (_Newlocname._C_str());
		}

	_Collvec  _Getcoll() const
		{	
		return (::_Getcoll());
		}

	_Ctypevec  _Getctype() const
		{	
		return (::_Getctype());
		}

	_Cvtvec  _Getcvt() const
		{	
		return (::_Getcvt());
		}

	const lconv * _Getlconv() const
		{	
		return (localeconv());
		}

	_Timevec  _Gettnames() const
		{	
		return (_Timevec(::_Gettnames()));
		}

	const char * _Getdays() const
		{	
		const char *_Ptr = ::_Getdays();

		if (_Ptr != 0)
			{	
			((_Locinfo *)this)->_Days = _Ptr;
			free((void *)_Ptr);
			}
		return (!_Days._Empty() ? _Days._C_str()
			: ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday"
				":Thu:Thursday:Fri:Friday:Sat:Saturday");
		}

	const char * _Getmonths() const
		{	
		const char *_Ptr = ::_Getmonths();

		if (_Ptr != 0)
			{	
			((_Locinfo *)this)->_Months = _Ptr;
			free((void *)_Ptr);
			}
		return (!_Months._Empty() ? _Months._C_str()
			: ":Jan:January:Feb:February:Mar:March"
				":Apr:April:May:May:Jun:June"
				":Jul:July:Aug:August:Sep:September"
				":Oct:October:Nov:November:Dec:December");
		}

	const char * _Getfalse() const
		{	
		return ("false");
		}

	const char * _Gettrue() const
		{	
		return ("true");
		}

	int  _Getdateorder() const
		{	
		return (::_Getdateorder());
		}

	_Timevec  _W_Gettnames() const
		{	
		return (_Timevec(::_W_Gettnames()));
		}

	const unsigned short * _W_Getdays() const
		{	
		const wchar_t *_Ptr = ::_W_Getdays();

		if (_Ptr != 0)
			{	
			((_Locinfo *)this)->_W_Days = _Ptr;
			free((void *)_Ptr);
			}
		return ((const unsigned short *)(!_W_Days._Empty()
			? _W_Days._C_str()
			: L":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday"
				L":Thu:Thursday:Fri:Friday:Sat:Saturday"));
		}

	const unsigned short * _W_Getmonths() const
		{	
		const wchar_t *_Ptr = ::_W_Getmonths();

		if (_Ptr != 0)
			{	
			((_Locinfo *)this)->_W_Months = _Ptr;
			free((void *)_Ptr);
			}
		return ((const unsigned short *)(!_W_Months._Empty()
			? _W_Months._C_str()
			: L":Jan:January:Feb:February:Mar:March"
				L":Apr:April:May:May:Jun:June"
				L":Jul:July:Aug:August:Sep:September"
				L":Oct:October:Nov:November:Dec:December"));
		}

	_Locinfo(const _Locinfo&) = delete;
	_Locinfo& operator=(const _Locinfo&) = delete;

private:
 



	_Lockit _Lock;	
 

	_Yarn<char> _Days;	
	_Yarn<char> _Months;	
	_Yarn<wchar_t> _W_Days;	
	_Yarn<wchar_t> _W_Months;	
	_Yarn<char> _Oldlocname;	
	_Yarn<char> _Newlocname;	
	};

		
template<class _Elem> inline
	int __cdecl _LStrcoll(const _Elem *_First1, const _Elem *_Last1,
		const _Elem *_First2, const _Elem *_Last2,
			const _Locinfo::_Collvec *)
	{	
	for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, ++_First2)
		if (*_First1 < *_First2)
			return (-1);	
		else if (*_First2 < *_First1)
			return (+1);	
	return (_First2 != _Last2 ? -1 : _First1 != _Last1 ? +1 : 0);
	}

template<> inline
	int __cdecl _LStrcoll(const char *_First1, const char *_Last1,
		const char *_First2, const char *_Last2,
			const _Locinfo::_Collvec *_Vector)
	{	
	return (_Strcoll(_First1, _Last1, _First2, _Last2, _Vector));
	}

template<> inline
	int __cdecl _LStrcoll(const wchar_t *_First1, const wchar_t *_Last1,
		const wchar_t *_First2, const wchar_t *_Last2,
			const _Locinfo::_Collvec *_Vector)
	{	
	return (_Wcscoll(_First1, _Last1, _First2, _Last2, _Vector));
	}

		
template<class _Elem> inline
	size_t __cdecl _LStrxfrm(_Elem *_First1, _Elem *_Last1,
		const _Elem *_First2, const _Elem *_Last2,
			const _Locinfo::_Collvec *)
	{	
	size_t _Count = _Last2 - _First2;
	if (_Count <= (size_t)(_Last1 - _First1))
		::memcpy_s((_First1), ((_Last1 - _First1) * sizeof (_Elem)), (_First2), (_Count * sizeof (_Elem)));
	return (_Count);
	}

template<> inline
	size_t __cdecl _LStrxfrm( 
		  char *_First1,   char *_Last1,
		const char *_First2, const char *_Last2,
			const _Locinfo::_Collvec *_Vector)
	{	
	return (_Strxfrm(_First1, _Last1, _First2, _Last2, _Vector));
	}

template<> inline
	size_t __cdecl _LStrxfrm( 
		  wchar_t *_First1,   wchar_t *_Last1,
		const wchar_t *_First2, const wchar_t *_Last2,
			const _Locinfo::_Collvec *_Vector)
	{	
	return (_Wcsxfrm(_First1, _Last1, _First2, _Last2, _Vector));
	}
}
 
 #pragma warning(pop)
 #pragma pack(pop)











#pragma once





 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 






namespace std {
	
class __declspec(dllimport) _Facet_base
	{	
public:
	virtual  ~_Facet_base() noexcept
		{	
		}

	
	virtual void  _Incref() = 0;

	
	virtual _Facet_base *  _Decref() = 0;
	};

 



void __cdecl _Facet_Register(_Facet_base *);
 
}
 
 #pragma warning(pop)
 #pragma pack(pop)



 





 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
template<class _Dummy>
	class _Locbase
	{	
public:
	 static const int collate = ((1 << (1)) >> 1);
	 static const int ctype = ((1 << (2)) >> 1);
	 static const int monetary = ((1 << (3)) >> 1);
	 static const int numeric = ((1 << (4)) >> 1);
	 static const int time = ((1 << (5)) >> 1);
	 static const int messages = ((1 << (6)) >> 1);
	 static const int all = (((1 << ((6 + 1))) >> 1) - 1);
	 static const int none = 0;
	};

template<class _Dummy>
	const int _Locbase<_Dummy>::collate;
template<class _Dummy>
	const int _Locbase<_Dummy>::ctype;
template<class _Dummy>
	const int _Locbase<_Dummy>::monetary;
template<class _Dummy>
	const int _Locbase<_Dummy>::numeric;
template<class _Dummy>
	const int _Locbase<_Dummy>::time;
template<class _Dummy>
	const int _Locbase<_Dummy>::messages;
template<class _Dummy>
	const int _Locbase<_Dummy>::all;
template<class _Dummy>
	const int _Locbase<_Dummy>::none;

		
class locale;
template<class _Facet>
	const _Facet& __cdecl use_facet(const locale&);
template<class _Elem>
	class collate;

struct __declspec(dllimport) _Crt_new_delete
	{	
  
































	};

class locale
	: public _Locbase<int>, public _Crt_new_delete
	{	
public:
	typedef int category;

			
	class __declspec(dllimport) id
		{	
	public:
		 id(size_t _Val = 0)
			: _Id(_Val)
			{	
			}

		 operator size_t()
			{	
			if (_Id == 0)
				{	
				{ ::std:: _Lockit _Lock(0);
					if (_Id == 0)
						_Id = ++_Id_cnt;
				}
				}
			return (_Id);
			}

	private:
		size_t _Id;	

		 static int _Id_cnt;

	public:
		 id(const id&) = delete;
		id&  operator=(const id&) = delete;
		};

	class _Locimp;

			
	class __declspec(dllimport) facet
		: public _Facet_base, public _Crt_new_delete
		{	
	public:
		static size_t __cdecl _Getcat(const facet ** = 0,
			const locale * = 0)
			{	
			return ((size_t)(-1));
			}

		virtual void  _Incref()
			{	
			_InterlockedIncrement(reinterpret_cast<volatile long *>(&_Myrefs));
			}

		virtual _Facet_base * _Decref()
			{	
			if (_InterlockedDecrement(reinterpret_cast<volatile long *>(&_Myrefs)) == 0)
				return (this);
			else
				return (0);
			}

	private:
		_Atomic_counter_t _Myrefs;	

	protected:
		explicit  facet(size_t _Initrefs = 0)
			: _Myrefs(static_cast<_Atomic_integral_t>(_Initrefs))	
			{	
			}

		virtual  ~facet() noexcept
			{	
			}

	public:
		 facet(const facet&) = delete;
		facet&  operator=(const facet&) = delete;
		};

			
	class __declspec(dllimport) _Locimp
		: public facet
		{	
	protected:
		 ~_Locimp() noexcept
		{	
		_Locimp_dtor(this);
		}

	private:
		static  _Locimp *__cdecl
			_New_Locimp(bool _Transparent = false);
		static  _Locimp *__cdecl
			_New_Locimp(const _Locimp& _Right);

		static  void __cdecl
			_Locimp_dtor(_Locimp *);
		static  void __cdecl
			_Locimp_Addfac(_Locimp *, facet *, size_t);	
		static void __cdecl
			_Locimp_ctor(_Locimp *, const _Locimp&);

		friend class locale;

		 _Locimp(bool _Transparent)
			: locale::facet(1), _Facetvec(0), _Facetcount(0),
				_Catmask(none), _Xparent(_Transparent),
					_Name("*")
			{	
			}

		 _Locimp(const _Locimp& _Right)
			: locale::facet(1), _Facetvec(0), _Facetcount(_Right._Facetcount),
				_Catmask(_Right._Catmask), _Xparent(_Right._Xparent),
					_Name(_Right._Name.c_str())
			{	
			_Locimp_ctor(this, _Right);
			}

		void  _Addfac(facet *_Pfacet, size_t _Id)
			{	
			_Locimp_Addfac(this, _Pfacet, _Id);
			}

		static _Locimp *__cdecl _Makeloc(const _Locinfo&,
			category, _Locimp *, const locale *);	

		static void __cdecl _Makewloc(const _Locinfo&,
			category, _Locimp *, const locale *);	

 
		static void __cdecl _Makeushloc(const _Locinfo&,
			category, _Locimp *, const locale *);	
 

		static void __cdecl _Makexloc(const _Locinfo&,
			category, _Locimp *, const locale *);	

		facet **_Facetvec;	
		size_t _Facetcount;	
		category _Catmask;	
		bool _Xparent;	
		_Yarn<char> _Name;	

		 static _Locimp *_Clocptr;

public:
		_Locimp&  operator=(const _Locimp&) = delete;
		};

	template<class _Elem,
		class _Traits,
		class _Alloc>
		bool operator()(const basic_string<_Elem, _Traits, _Alloc>& _Left,
			const basic_string<_Elem, _Traits, _Alloc>& _Right) const
		{	
		const ::std:: collate<_Elem>& _Coll_fac =
			use_facet< ::std:: collate<_Elem> >(*this);

		return (_Coll_fac.compare(_Left.c_str(), _Left.c_str() + _Left.size(),
			_Right.c_str(), _Right.c_str() + _Right.size()) < 0);
		}

	template<class _Facet>
		locale combine(const locale& _Loc) const
		{	
		_Facet *_Facptr;

		try {
			_Facptr = (_Facet *)&use_facet<_Facet>(_Loc);
		} catch (...) {
			_Xruntime_error("locale::combine facet missing");
		}

		_Locimp *_Newimp = _Locimp::_New_Locimp(*_Ptr);
		_Newimp->_Addfac(_Facptr, _Facet::id);
		_Newimp->_Catmask = none;
		_Newimp->_Name = "*";
		return (locale(_Newimp));
		}

	template<class _Facet>
		locale(const locale& _Loc, const _Facet *_Facptr)
			: _Ptr(_Locimp::_New_Locimp(*_Loc._Ptr))
		{	
		if (_Facptr != 0)
			{	
			_Ptr->_Addfac((_Facet *)_Facptr, _Facet::id);
			_Ptr->_Catmask = none;
			_Ptr->_Name = "*";
			}
		}

	locale(_Uninitialized)
		{	
		}

	locale(const locale& _Right) noexcept
		: _Ptr(_Right._Ptr)
		{	
		_Ptr->_Incref();
		}

	locale() noexcept
		: _Ptr(_Init(true))
		{	
		}

 
	locale(const locale& _Loc, const locale& _Other,
		category _Cat)
		: _Ptr(_Locimp::_New_Locimp(*_Loc._Ptr))
		{	
		if (_Cat != none)
			{	
			try {
				{ _Locinfo _Lobj;
					_Locimp::_Makeloc(_Lobj, _Cat, _Ptr, &_Other);
					_Lobj._Addcats(_Loc._Ptr->_Catmask,
						_Loc.name().c_str());
					_Lobj._Addcats(_Other._Ptr->_Catmask,
						_Other.name().c_str());
					_Ptr->_Catmask = _Loc._Ptr->_Catmask
						| _Other._Ptr->_Catmask;
					_Ptr->_Name = _Lobj._Getname();
				}
			} catch (...) {
			delete _Ptr->_Decref();
			throw;
			}
			}
		}

private:
	void _Construct(const string &_Str,
		category _Cat)
		{	
		bool _Bad = false;
		_Init();
		if (_Cat != none)
			{	
			try {
				{ _Locinfo _Lobj(_Cat, _Str.c_str());
					if (_Badname(_Lobj))
						_Bad = true;
					else
						{	
						_Locimp::_Makeloc(_Lobj, _Cat, _Ptr, 0);
						_Ptr->_Catmask = _Cat;
						_Ptr->_Name = _Str.c_str();
						}
				}
			} catch (...) {
			delete _Ptr->_Decref();
			throw;
			}
			}

		if (_Bad)
			{	
			delete _Ptr->_Decref();
			_Xruntime_error("bad locale name");
			}
		}

public:
	explicit locale(const char *_Locname,
		category _Cat = all)
		: _Ptr(_Locimp::_New_Locimp())
		{	
		
		
		if (_Locname == 0)
			_Xruntime_error("bad locale name");
		_Construct(_Locname, _Cat);
		}

	locale(const locale& _Loc, const char *_Locname,
		category _Cat)
		: _Ptr(_Locimp::_New_Locimp(*_Loc._Ptr))
		{	
		
		
		if (_Locname == 0)
			_Xruntime_error("bad locale name");
		_Construct(_Locname, _Cat);
		}

	explicit locale(const string& _Str,
		category _Cat = all)
		: _Ptr(_Locimp::_New_Locimp())
		{	
		_Construct(_Str, _Cat);
		}

	locale(const locale& _Loc, const string& _Str,
		category _Cat)
		: _Ptr(_Locimp::_New_Locimp(*_Loc._Ptr))
		{	
		_Construct(_Str, _Cat);
		}
 

	~locale() noexcept
		{	
		if (_Ptr != 0)
			delete _Ptr->_Decref();
		}

	locale& operator=(const locale& _Right) noexcept
		{	
		if (_Ptr != _Right._Ptr)
			{	
			delete _Ptr->_Decref();
			_Ptr = _Right._Ptr;
			_Ptr->_Incref();
			}
		return (*this);
		}

	string name() const
		{	
		return (_Ptr == 0 ? string() : _Ptr->_Name.c_str());
		}

	  const char *c_str() const
		{	
		return (_Ptr == 0 ? "" : _Ptr->_Name.c_str());
		}

	const facet *_Getfacet(size_t _Id) const
		{	
		const facet *_Facptr = _Id < _Ptr->_Facetcount
			? _Ptr->_Facetvec[_Id] : 0;	
		if (_Facptr != 0 || !_Ptr->_Xparent)
			return (_Facptr);	
		else
			{	
			locale::_Locimp *_Ptr0 = _Getgloballocale();
			return (_Id < _Ptr0->_Facetcount
				? _Ptr0->_Facetvec[_Id]	
				: 0);	
			}
		}

	bool operator==(const locale& _Loc) const
		{	
		return (_Ptr == _Loc._Ptr
			|| (name().compare("*") != 0
				&& name().compare(_Loc.name()) == 0));
		}

	bool operator!=(const locale& _Right) const
		{	
		return (!(*this == _Right));
		}

	static __declspec(dllimport) const locale& __cdecl
		classic();	

	static __declspec(dllimport) locale __cdecl
		global(const locale&);	

	static __declspec(dllimport) locale __cdecl
		empty();	

private:
	locale(_Locimp *_Ptrimp)
		: _Ptr(_Ptrimp)
		{	
		}

	static __declspec(dllimport) _Locimp *__cdecl
		_Init(bool _Do_incref = false);	
	static __declspec(dllimport) _Locimp *__cdecl
		_Getgloballocale();
	static __declspec(dllimport) void __cdecl
		_Setgloballocale(void *);

	bool _Badname(const _Locinfo& _Lobj)
		{	
		return (:: strcmp(_Lobj._Getname(), "*") == 0);
		}

	_Locimp *_Ptr;	
	};

		
template<class _Facet>
	struct _Facetptr
	{	
	 static const locale::facet *_Psave;
	};

template<class _Facet>
	 const locale::facet *_Facetptr<_Facet>::
		_Psave = 0;

  

  


template<class _Facet> inline
	const _Facet& __cdecl use_facet(const locale& _Loc)

	{	
	{ ::std:: _Lockit _Lock(0);	
		const locale::facet *_Psave =
			_Facetptr<_Facet>::_Psave;	

		size_t _Id = _Facet::id;
		const locale::facet *_Pf = _Loc._Getfacet(_Id);

		if (_Pf != 0)
			;	
		else if (_Psave != 0)
			_Pf = _Psave;	
		else if (_Facet::_Getcat(&_Psave, &_Loc) == (size_t)(-1))

 

			throw bad_cast();	

 



		else
			{	
			_Pf = _Psave;
			_Facetptr<_Facet>::_Psave = _Psave;

			locale::facet *_Pfmod = (_Facet *)_Psave;
			_Pfmod->_Incref();

 



			_Facet_Register(_Pfmod);
 
			}

		return ((const _Facet&)(*_Pf));	
	}
	}	

		
template<class _Elem,
	class _InIt> inline
	int __cdecl _Getloctxt(_InIt& _First, _InIt& _Last, size_t _Numfields,
		const _Elem *_Ptr)
	{	
	for (size_t _Off = 0; _Ptr[_Off] != (_Elem)0; ++_Off)
		if (_Ptr[_Off] == _Ptr[0])
			++_Numfields;	
	string _Str(_Numfields, '\0');	

	int _Ans = -2;	
	for (size_t _Column = 1; ; ++_Column, (void)++_First, _Ans = -1)
		{	
		bool _Prefix = false;	
		size_t _Off = 0;	
		size_t _Field = 0;	

		for (; _Field < _Numfields; ++_Field)
			{	
			for (; _Ptr[_Off] != (_Elem)0 && _Ptr[_Off] != _Ptr[0]; ++_Off)
				;	

			if (_Str[_Field] != '\0')
				_Off += _Str[_Field];	
			else if (_Ptr[_Off += _Column] == _Ptr[0]
				|| _Ptr[_Off] == (_Elem)0)
				{	
				_Str[_Field] = (char)(_Column < 127
					? _Column : 127);	
				_Ans = (int)_Field;	
				}
			else if (_First == _Last || _Ptr[_Off] != *_First)
				_Str[_Field] = (char)(_Column < 127
					? _Column : 127);	
			else
				_Prefix = true;	
			}

		if (!_Prefix || _First == _Last)
			break;	
		}
	return (_Ans);	
	}

		



template<class _Elem> inline
	char __cdecl _Maklocbyte(_Elem _Char,
		const _Locinfo::_Cvtvec&)
	{	
	return ((char)(unsigned char)_Char);
	}

template<> inline
	char __cdecl _Maklocbyte(wchar_t _Char,
		const _Locinfo::_Cvtvec& _Cvt)
	{	
	char _Byte = '\0';
	mbstate_t _Mbst1 = {};
	_Wcrtomb(&_Byte, _Char, &_Mbst1, &_Cvt);
	return (_Byte);
	}

 
template<> inline
	char __cdecl _Maklocbyte(unsigned short _Char,
		const _Locinfo::_Cvtvec &_Cvt)
	{	
	char _Byte = '\0';
	mbstate_t _Mbst1 = {};
	_Wcrtomb(&_Byte, (wchar_t)_Char, &_Mbst1, &_Cvt);
	return (_Byte);
	}
 

		



template<class _Elem> inline
	_Elem __cdecl _Maklocchr(char _Byte, _Elem *,
		const _Locinfo::_Cvtvec&)
	{	
	return ((_Elem)(unsigned char)_Byte);
	}

template<> inline
	wchar_t __cdecl _Maklocchr(char _Byte, wchar_t *,
		const _Locinfo::_Cvtvec& _Cvt)
	{	
	wchar_t _Wc = L'\0';
	mbstate_t _Mbst1 = {};
	_Mbrtowc(&_Wc, &_Byte, 1, &_Mbst1, &_Cvt);
	return (_Wc);
	}

 
template<> inline
	unsigned short __cdecl _Maklocchr(char _Byte, unsigned short *,
		const _Locinfo::_Cvtvec &_Cvt)
	{	
	unsigned short _Wc = (unsigned short)0;
	mbstate_t _Mbst1 = {};
	_Mbrtowc((wchar_t *)&_Wc, &_Byte, 1, &_Mbst1, &_Cvt);
	return (_Wc);
	}
 

		



template<class _Elem> inline
	_Elem *__cdecl _Maklocstr(const char *_Ptr, _Elem *,
		const _Locinfo::_Cvtvec&)
	{	
	size_t _Count = :: strlen(_Ptr) + 1;

	_Elem *_Ptrdest = (_Elem *)calloc(_Count, sizeof (_Elem));

	if (!_Ptrdest)
		_Xbad_alloc();

	for (_Elem *_Ptrnext = _Ptrdest; 0 < _Count; --_Count, ++_Ptrnext, ++_Ptr)
		*_Ptrnext = (_Elem)(unsigned char)*_Ptr;

	return (_Ptrdest);
	}

template<> inline
	wchar_t *__cdecl _Maklocstr(const char *_Ptr, wchar_t *,
		const _Locinfo::_Cvtvec& _Cvt)
	{	
	size_t _Count, _Count1;
	size_t _Wchars;
	const char *_Ptr1;
	int _Bytes;
	wchar_t _Wc;
	mbstate_t _Mbst1 = {};

	_Count1 = :: strlen(_Ptr) + 1;
	for (_Count = _Count1, _Wchars = 0, _Ptr1 = _Ptr; 0 < _Count;
		_Count -= _Bytes, _Ptr1 += _Bytes, ++_Wchars)
		if ((_Bytes = _Mbrtowc(&_Wc, _Ptr1, _Count, &_Mbst1, &_Cvt)) <= 0)
			break;
	++_Wchars;	

	wchar_t *_Ptrdest = (wchar_t *)calloc(_Wchars, sizeof (wchar_t));

	if (!_Ptrdest)
		_Xbad_alloc();
	wchar_t *_Ptrnext = _Ptrdest;
	mbstate_t _Mbst2 = {};

	for (; 0 < _Wchars;
		_Count -= _Bytes, _Ptr += _Bytes, --_Wchars, ++_Ptrnext)
		if ((_Bytes = _Mbrtowc(_Ptrnext, _Ptr, _Count1, &_Mbst2, &_Cvt)) <= 0)
			break;
	*_Ptrnext = L'\0';

	return (_Ptrdest);
	}

 
template<> inline
	unsigned short *__cdecl _Maklocstr(const char *_Ptr, unsigned short *,
		const _Locinfo::_Cvtvec &_Cvt)
	{	
	size_t _Count, _Count1;
	size_t _Wchars;
	const char *_Ptr1;
	int _Bytes;
	unsigned short _Wc;
	mbstate_t _Mbst1 = {};

	_Count1 = :: strlen(_Ptr) + 1;
	for (_Count = _Count1, _Wchars = 0, _Ptr1 = _Ptr; 0 < _Count;
		_Count -= _Bytes, _Ptr1 += _Bytes, ++_Wchars)
		if ((_Bytes =
			_Mbrtowc((wchar_t *)&_Wc, _Ptr1, _Count, &_Mbst1, &_Cvt)) <= 0)
			break;
	++_Wchars;	

	wchar_t *_Ptrdest = (wchar_t *)calloc(_Wchars, sizeof (wchar_t));

	if (!_Ptrdest)
		_Xbad_alloc();

	wchar_t *_Ptrnext = _Ptrdest;
	mbstate_t _Mbst2 = {};
	for (; 0 < _Wchars;
		_Count -= _Bytes, _Ptr += _Bytes, --_Wchars, ++_Ptrnext)
		if ((_Bytes = _Mbrtowc(_Ptrnext, _Ptr, _Count1, &_Mbst2, &_Cvt)) <= 0)
			break;
	*_Ptrnext = L'\0';
	return ((unsigned short *)_Ptrdest);
	}
 

		
class __declspec(dllimport) codecvt_base
	: public locale::facet
	{	
public:
	enum
		{	
		ok, partial, error, noconv};
	typedef int result;

	 codecvt_base(size_t _Refs = 0)
		: locale::facet(_Refs)
		{	
		}

	bool  always_noconv() const noexcept
		{	
		return (do_always_noconv());
		}

	int  max_length() const noexcept
		{	
		return (do_max_length());
		}

	int  encoding() const noexcept
		{	
		return (do_encoding());
		}

	 ~codecvt_base() noexcept
		{	
		}

protected:
	virtual bool  do_always_noconv() const noexcept
		{	
		return (false);
		}

	virtual int  do_max_length() const noexcept
		{	
		return (1);
		}

	virtual int  do_encoding() const noexcept
		{	
		return (1);	
		}
	};

		
template<class _Elem,
	class _Byte,
	class _Statype>
	class codecvt
		: public codecvt_base
	{	
public:
	typedef _Elem intern_type;
	typedef _Byte extern_type;
	typedef _Statype state_type;

	result  in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
		_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		return (do_in(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_out(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  unshift(_Statype& _State,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_unshift(_State, _First2, _Last2, _Mid2));
		}

	int  length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		return (do_length(_State, _First1, _Last1, _Count));
		}

	 static locale::id id;	

	explicit  codecvt(size_t _Refs = 0)
		: codecvt_base(_Refs)
		{	
		_Init(_Locinfo());
		}

	 codecvt(const _Locinfo& _Lobj, size_t _Refs = 0)
		: codecvt_base(_Refs)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new codecvt<_Elem, _Byte, _Statype>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

protected:
	virtual  ~codecvt() noexcept
		{	
		}

	void  _Init(const _Locinfo&)
		{	
		}

	virtual bool  do_always_noconv() const noexcept
		{	
		return (is_same<_Byte, _Elem>::value);
		}

	virtual result  do_in(_Statype&,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
		_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		_Mid1 = _First1;
		_Mid2 = _First2;
		if (is_same<_Byte, _Elem>::value)
			return (noconv);	
		else
			{	
			for (; _Mid1 != _Last1 && _Mid2 != _Last2; ++_Mid1, ++_Mid2)
				*_Mid2 = (_Elem)*_Mid1;
			return (ok);
			}
		}

	virtual result  do_out(_Statype&,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		_Mid1 = _First1;
		_Mid2 = _First2;
		if (is_same<_Byte, _Elem>::value)
			return (noconv);	
		else
			{	
			for (; _Mid1 != _Last1 && _Mid2 != _Last2; ++_Mid1, ++_Mid2)
				*_Mid2 = (_Byte)*_Mid1;
			return (ok);
			}
		}

	virtual result  do_unshift(_Statype&,
		_Byte *_First2, _Byte *, _Byte *&_Mid2) const
		{	
		_Mid2 = _First2;
		return (ok);	
		}

	virtual int  do_length(_Statype&, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		return ((int)(_Count < (size_t)(_Last1 - _First1)
			? _Count : _Last1 - _First1));	
		}
	};

		
template<class _Elem,
	class _Byte,
	class _Statype>
	 locale::id codecvt<_Elem, _Byte, _Statype>::id;

		
enum _Codecvt_mode {
	_Consume_header = 4,
	_Generate_header = 2
	};

		
template<>
	class __declspec(dllimport) codecvt<char16_t, char, _Mbstatet>
	: public codecvt_base
	{	
public:
	typedef codecvt<char16_t, char, _Mbstatet> _Mybase;
	typedef char16_t _Elem;
	typedef char _Byte;
	typedef _Mbstatet _Statype;
	typedef _Elem intern_type;
	typedef _Byte extern_type;
	typedef _Statype state_type;

	result  in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
		_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		return (do_in(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_out(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  unshift(_Statype& _State,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_unshift(_State,
			_First2, _Last2, _Mid2));
		}

	int  length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		return (do_length(_State, _First1, _Last1, _Count));
		}

	 static locale::id id;

	explicit  codecvt(size_t _Refs = 0)
		: codecvt_base(_Refs), _Maxcode(0x10ffff), _Mode(_Consume_header)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 codecvt(const _Locinfo& _Lobj, size_t _Refs = 0)
		: codecvt_base(_Refs), _Maxcode(0x10ffff), _Mode(_Consume_header)
		{	
		_Init(_Lobj);
		}

	 codecvt(const _Locinfo& _Lobj, unsigned long _Maxcode_arg,
		_Codecvt_mode _Mode_arg, size_t _Refs = 0)
		: codecvt_base(_Refs), _Maxcode(_Maxcode_arg), _Mode(_Mode_arg)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new codecvt<_Elem, _Byte, _Statype>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

protected:
	virtual  ~codecvt() noexcept
		{	
		}

	void  _Init(const _Locinfo&)
		{	
		}

	virtual result  do_in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
		_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		unsigned short *_Pstate = (unsigned short *)&_State;
		_Mid1 = _First1;
		_Mid2 = _First2;

		for (; _Mid1 != _Last1 && _Mid2 != _Last2; )
			{	
			unsigned char _By = (unsigned char)*_Mid1;
			unsigned long _Ch;
			int _Nextra, _Nskip;

			if (*_Pstate <= 1)
				;	
			else if (_By < 0x80 || 0xc0 <= _By)
				return (_Mybase::error);	
			else
				{	
				++_Mid1;
				*_Mid2++ = (_Elem)(*_Pstate | (_By & 0x3f));
				*_Pstate = 1;
				continue;
				}

			if (_By < 0x80)
				_Ch = _By, _Nextra = 0;
			else if (_By < 0xc0)
				{	
				++_Mid1;
				return (_Mybase::error);
				}
			else if (_By < 0xe0)
				_Ch = _By & 0x1f, _Nextra = 1;
			else if (_By < 0xf0)
				_Ch = _By & 0x0f, _Nextra = 2;
			else if (_By < 0xf8)
				_Ch = _By & 0x07, _Nextra = 3;
			else
				_Ch = _By & 0x03, _Nextra = _By < 0xfc ? 4 : 5;

			_Nskip = _Nextra < 3 ? 0 : 1;	
			_First1 = _Mid1;	

			if (_Nextra == 0)
				++_Mid1;
			else if (_Last1 - _Mid1 < _Nextra + 1 - _Nskip)
				break;	
			else
				for (++_Mid1; _Nskip < _Nextra; --_Nextra, ++_Mid1)
					if ((_By = (unsigned char)*_Mid1) < 0x80 || 0xc0 <= _By)
						return (_Mybase::error);	
					else
						_Ch = _Ch << 6 | (_By & 0x3f);
			if (0 < _Nskip)
				_Ch <<= 6;	

			if ((_Maxcode < 0x10ffff ? _Maxcode : 0x10ffff) < _Ch)
				return (_Mybase::error);	
			else if (0xffff < _Ch)
				{	
				unsigned short _Ch0 =
					(unsigned short)(0xd800 | (_Ch >> 10) - 0x0040);

				*_Mid2++ = (_Elem)_Ch0;
				*_Pstate = (unsigned short)(0xdc00 | (_Ch & 0x03ff));
				continue;
				}

			if (_Nskip == 0)
				;
			else if (_Mid1 == _Last1)
				{	
				_Mid1 = _First1;
				break;
				}
			else if ((_By = (unsigned char)*_Mid1++) < 0x80 || 0xc0 <= _By)
				return (_Mybase::error);	
			else
				_Ch |= _By & 0x3f;	

			if (*_Pstate == 0)
				{	
				*_Pstate = 1;

				if ((_Mode & _Consume_header) != 0 && _Ch == 0xfeff)
					{	
					result _Ans = do_in(_State, _Mid1, _Last1, _Mid1,
						_First2, _Last2, _Mid2);

					if (_Ans == _Mybase::partial)
						{	
						*_Pstate = 0;
						_Mid1 = _First1;
						}
					return (_Ans);
					}
				}

			*_Mid2++ = (_Elem)_Ch;
			}

		return (_First1 == _Mid1 ? _Mybase::partial : _Mybase::ok);
		}

	virtual result  do_out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		unsigned short *_Pstate = (unsigned short *)&_State;
		_Mid1 = _First1;
		_Mid2 = _First2;

		for (; _Mid1 != _Last1 && _Mid2 != _Last2; )
			{	
			unsigned long _Ch;
			unsigned short _Ch1 = (unsigned short)*_Mid1;
			bool _Save = false;

			if (1 < *_Pstate)
				{	
				if (_Ch1 < 0xdc00 || 0xe000 <= _Ch1)
					return (_Mybase::error);	
				_Ch = (*_Pstate << 10) | (_Ch1 - 0xdc00);
				}
			else if (0xd800 <= _Ch1 && _Ch1 < 0xdc00)
				{	
				_Ch = (_Ch1 - 0xd800 + 0x0040) << 10;
				_Save = true;	
				}
			else
				_Ch = _Ch1;	

			_Byte _By;
			int _Nextra;

			if (_Ch < 0x0080)
				_By = (_Byte)_Ch, _Nextra = 0;
			else if (_Ch < 0x0800)
				_By = (_Byte)(0xc0 | _Ch >> 6), _Nextra = 1;
			else if (_Ch < 0x10000)
				_By = (_Byte)(0xe0 | _Ch >> 12), _Nextra = 2;
			else
				_By = (_Byte)(0xf0 | _Ch >> 18), _Nextra = 3;

			int _Nput = _Nextra < 3 ? _Nextra + 1 : _Save ? 1 : 3;

			if (_Last2 - _Mid2 < _Nput)
				break;	
			else if (*_Pstate != 0 || (_Mode & _Generate_header) == 0)
				;	
			else if (_Last2 - _Mid2 < 3 + _Nput)
				break;	
			else
				{	
				*_Mid2++ = (_Byte)(unsigned char)0xef;
				*_Mid2++ = (_Byte)(unsigned char)0xbb;
				*_Mid2++ = (_Byte)(unsigned char)0xbf;
				}

			++_Mid1;
			if (_Save || _Nextra < 3)
				{	
				*_Mid2++ = _By;
				--_Nput;
				}
			for (; 0 < _Nput; --_Nput)
				*_Mid2++ = (_Byte)((_Ch >> 6 * --_Nextra & 0x3f) | 0x80);

			*_Pstate = (unsigned short)(_Save ? _Ch >> 10 : 1);
			}

		return (_First1 == _Mid1 ? _Mybase::partial : _Mybase::ok);
		}

	virtual result  do_unshift(_Statype& _State,
		_Byte *_First2, _Byte *, _Byte *& _Mid2) const
		{	
		unsigned short *_Pstate = (unsigned short *)&_State;
		_Mid2 = _First2;

		return (1 < *_Pstate
			? _Mybase::error : _Mybase::ok);	
		}

	virtual int  do_length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		size_t _Wchars = 0;
		_Statype _Mystate = _State;

		for (; _Wchars < _Count && _First1 != _Last1; )
			{	
			const _Byte *_Mid1;
			_Elem *_Mid2;
			_Elem _Ch;

			switch (do_in(_Mystate, _First1, _Last1, _Mid1,
				&_Ch, &_Ch + 1, _Mid2))
				{	
			case _Mybase::noconv:
				return ((int)(_Wchars + (_Last1 - _First1)));

			case _Mybase::ok:
				if (_Mid2 == &_Ch + 1)
					++_Wchars;	
				_First1 = _Mid1;
				break;

			default:
				return ((int)_Wchars);	
				}
			}

		return ((int)_Wchars);
		}

	virtual bool  do_always_noconv() const noexcept
		{	
		return (false);
		}

	virtual int  do_max_length() const noexcept
		{	
		return ((_Mode & _Consume_header) != 0 ? 9	
			: (_Mode & _Generate_header) != 0 ? 7	
			: 6);	
		}

	virtual int do_encoding() const noexcept
		{	
		return (0);	
		}

private:
	unsigned long _Maxcode;	
	_Codecvt_mode _Mode;	
	};

		
template<>
	class __declspec(dllimport) codecvt<char32_t, char, _Mbstatet>
	: public codecvt_base
	{	
public:
	typedef codecvt<char32_t, char, _Mbstatet> _Mybase;
	typedef char32_t _Elem;
	typedef char _Byte;
	typedef _Mbstatet _Statype;
	typedef _Elem intern_type;
	typedef _Byte extern_type;
	typedef _Statype state_type;

	result  in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
		_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		return (do_in(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_out(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  unshift(_Statype& _State,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_unshift(_State,
			_First2, _Last2, _Mid2));
		}

	int  length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		return (do_length(_State, _First1, _Last1, _Count));
		}

	 static locale::id id;

	explicit  codecvt(size_t _Refs = 0)
		: codecvt_base(_Refs), _Maxcode(0xffffffff), _Mode(_Consume_header)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 codecvt(const _Locinfo& _Lobj, size_t _Refs = 0)
		: codecvt_base(_Refs), _Maxcode(0xffffffff), _Mode(_Consume_header)
		{	
		_Init(_Lobj);
		}

	 codecvt(const _Locinfo& _Lobj, unsigned long _Maxcode_arg,
		_Codecvt_mode _Mode_arg, size_t _Refs = 0)
		: codecvt_base(_Refs), _Maxcode(_Maxcode_arg), _Mode(_Mode_arg)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new codecvt<_Elem, _Byte, _Statype>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

protected:
	virtual  ~codecvt() noexcept
		{	
		}

	void  _Init(const _Locinfo&)
		{	
		}

	virtual result  do_in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
		_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		char *_Pstate = (char *)&_State;
		_Mid1 = _First1;
		_Mid2 = _First2;

		for (; _Mid1 != _Last1 && _Mid2 != _Last2; )
			{	
			unsigned char _By = (unsigned char)*_Mid1;
			unsigned long _Ch;
			int _Nextra;

			if (_By < 0x80)
				_Ch = _By, _Nextra = 0;
			else if (_By < 0xc0)
				{	
				++_Mid1;
				return (_Mybase::error);
				}
			else if (_By < 0xe0)
				_Ch = _By & 0x1f, _Nextra = 1;
			else if (_By < 0xf0)
				_Ch = _By & 0x0f, _Nextra = 2;
			else if (_By < 0xf8)
				_Ch = _By & 0x07, _Nextra = 3;
			else
				_Ch = _By & 0x03, _Nextra = _By < 0xfc ? 4 : 5;

			if (_Nextra == 0)
				++_Mid1;
			else if (_Last1 - _Mid1 < _Nextra + 1)
				break;	
			else
				for (++_Mid1; 0 < _Nextra; --_Nextra, ++_Mid1)
					if ((_By = (unsigned char)*_Mid1) < 0x80 || 0xc0 <= _By)
						return (_Mybase::error);	
					else
						_Ch = _Ch << 6 | (_By & 0x3f);

			if (*_Pstate == 0)
				{	
				*_Pstate = 1;

				if ((_Mode & _Consume_header) != 0 && _Ch == 0xfeff)
					{	
					result _Ans = do_in(_State, _Mid1, _Last1, _Mid1,
						_First2, _Last2, _Mid2);

					if (_Ans == _Mybase::partial)
						{	
						*_Pstate = 0;
						_Mid1 = _First1;
						}
					return (_Ans);
					}
				}

			if (_Maxcode < _Ch)
				return (_Mybase::error);	
			*_Mid2++ = (_Elem)_Ch;
			}

		return (_First1 == _Mid1 ? _Mybase::partial : _Mybase::ok);
		}

	virtual result  do_out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		char *_Pstate = (char *)&_State;
		_Mid1 = _First1;
		_Mid2 = _First2;

		for (; _Mid1 != _Last1 && _Mid2 != _Last2; )
			{	
			_Byte _By;
			int _Nextra;
			unsigned long _Ch = (unsigned long)*_Mid1;

			if (_Maxcode < _Ch)
				return (_Mybase::error);

			if (_Ch < 0x0080)
				_By = (_Byte)_Ch, _Nextra = 0;
			else if (_Ch < 0x0800)
				_By = (_Byte)(0xc0 | _Ch >> 6), _Nextra = 1;
			else if (_Ch < 0x00010000)
				_By = (_Byte)(0xe0 | _Ch >> 12), _Nextra = 2;
			else if (_Ch < 0x00200000)
				_By = (_Byte)(0xf0 | _Ch >> 18), _Nextra = 3;
			else if (_Ch < 0x04000000)
				_By = (_Byte)(0xf8 | _Ch >> 24), _Nextra = 4;
			else
				_By = (_Byte)(0xfc | (_Ch >> 30 & 0x03)), _Nextra = 5;

			if (*_Pstate == 0)
				{	
				*_Pstate = 1;
				if ((_Mode & _Generate_header) == 0)
					;
				else if (_Last2 - _Mid2 < 3 + 1 + _Nextra)
					return (_Mybase::partial);	
				else
					{	
					*_Mid2++ = (_Byte)(unsigned char)0xef;
					*_Mid2++ = (_Byte)(unsigned char)0xbb;
					*_Mid2++ = (_Byte)(unsigned char)0xbf;
					}
				}

			if (_Last2 - _Mid2 < 1 + _Nextra)
				break;	

			++_Mid1;
			for (*_Mid2++ = _By; 0 < _Nextra; )
				*_Mid2++ = (_Byte)((_Ch >> 6 * --_Nextra & 0x3f) | 0x80);
			}
		return (_First1 == _Mid1 ? _Mybase::partial : _Mybase::ok);
		}

	virtual result  do_unshift(_Statype&,
		_Byte *_First2, _Byte *, _Byte *& _Mid2) const
		{	
		_Mid2 = _First2;
		return (_Mybase::ok);
		}

	virtual int  do_length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		int _Wchars = 0;
		_Statype _Mystate = _State;

		for (; (size_t)_Wchars < _Count && _First1 != _Last1; )
			{	
			const _Byte *_Mid1;
			_Elem *_Mid2;
			_Elem _Ch;

			switch (do_in(_Mystate, _First1, _Last1, _Mid1,
				&_Ch, &_Ch + 1, _Mid2))
				{	
			case _Mybase::noconv:
				return ((int)(_Wchars + (int)(_Last1 - _First1)));

			case _Mybase::ok:
				if (_Mid2 == &_Ch + 1)
					++_Wchars;	
				_First1 = _Mid1;
				break;

			default:
				return ((int)_Wchars);	
				}
			}

		return ((int)_Wchars);
		}

	virtual bool  do_always_noconv() const noexcept
		{	
		return (false);
		}

	virtual int  do_max_length() const noexcept
		{	
		return ((_Mode & (_Consume_header | _Generate_header)) != 0
			? 9 : 6);
		}

	virtual int  do_encoding() const noexcept
		{	
		return ((_Mode & (_Consume_header | _Generate_header)) != 0
			? -1 : 0);	
		}

private:
	unsigned long _Maxcode;	
	_Codecvt_mode _Mode;	
	};

		
template<>
	class __declspec(dllimport) codecvt<wchar_t, char, _Mbstatet>
	: public codecvt_base
	{	
public:
	typedef wchar_t _Elem;
	typedef char _Byte;
	typedef _Mbstatet _Statype;
	typedef _Elem intern_type;
	typedef _Byte extern_type;
	typedef _Statype state_type;

	result  in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
		_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		return (do_in(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_out(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  unshift(_Statype& _State,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_unshift(_State,
			_First2, _Last2, _Mid2));
		}

	int  length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		return (do_length(_State, _First1, _Last1, _Count));
		}

	 static locale::id id;

	explicit  codecvt(size_t _Refs = 0)
		: codecvt_base(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 codecvt(const _Locinfo& _Lobj, size_t _Refs = 0)
		: codecvt_base(_Refs)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new codecvt<_Elem, _Byte, _Statype>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

protected:
	virtual  ~codecvt() noexcept
		{	
		}

	void  _Init(const _Locinfo& _Lobj)
		{	
		_Cvt = _Lobj._Getcvt();
		}

	virtual result  do_in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
			_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		;
		;
		_Mid1 = _First1;
		_Mid2 = _First2;
		result _Ans = _Mid1 == _Last1 ? ok : partial;
		int _Bytes;

		while (_Mid1 != _Last1 && _Mid2 != _Last2)
			switch (_Bytes = _Mbrtowc(_Mid2, _Mid1, _Last1 - _Mid1,
				&_State, &_Cvt))
			{	
			case -2:	
				_Mid1 = _Last1;
				return (_Ans);

			case -1:	
				return (error);

			case 0:	
				if (*_Mid2 == (_Elem)0)
					_Bytes = (int):: strlen(_Mid1) + 1;
				

			default:	
				if (_Bytes == -3)
					_Bytes = 0;	
				_Mid1 += _Bytes;
				++_Mid2;
				_Ans = ok;
			}
		return (_Ans);
		}

	virtual result  do_out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
			_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		;
		;
		_Mid1 = _First1;
		_Mid2 = _First2;
		int _Bytes;

		while (_Mid1 != _Last1 && _Mid2 != _Last2)
			{
			if ((int)5 <= _Last2 - _Mid2)
				{
				if ((_Bytes = _Wcrtomb(_Mid2, *_Mid1,
					&_State, &_Cvt)) < 0)
					{
					return (error);	
					}
				else
					{
					++_Mid1;
					_Mid2 += _Bytes;
					}
				}
			else
				{	
				_Byte _Buf[5];
				_Statype _Stsave = _State;

				if ((_Bytes = _Wcrtomb(_Buf, *_Mid1,
					&_State, &_Cvt)) < 0)
					{
					return (error);	
					}
				else if (_Last2 - _Mid2 < _Bytes)
					{	
					_State = _Stsave;
					break;
					}
				else
					{	
					:: memcpy(_Mid2, _Buf, _Bytes);
					++_Mid1;
					_Mid2 += _Bytes;
					}
				}
			}

		return (_Mid1 == _Last1 ? ok : partial);
		}

	virtual result  do_unshift(_Statype& _State,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		;
		_Mid2 = _First2;
		result _Ans = ok;
		int _Bytes;
		_Byte _Buf[5];
		_Statype _Stsave = _State;

		if ((_Bytes = _Wcrtomb(_Buf, L'\0', &_State, &_Cvt)) <= 0)
			_Ans = error;	
		else if (_Last2 - _Mid2 < --_Bytes)
			{	
			_State = _Stsave;
			_Ans = partial;
			}
		else if (0 < _Bytes)
			{	
			:: memcpy(_Mid2, _Buf, _Bytes);
			_Mid2 += _Bytes;
			}
		return (_Ans);
		}

	virtual int  do_length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		;
		int _Wchars;
		const _Byte *_Mid1;
		_Statype _Mystate = _State;

		for (_Wchars = 0, _Mid1 = _First1;
			(size_t)_Wchars < _Count && _Mid1 != _Last1; )
			{	
			int _Bytes;
			_Elem _Ch;

			switch (_Bytes = _Mbrtowc(&_Ch, _Mid1, _Last1 - _Mid1,
				&_Mystate, &_Cvt))
				{	
			case -2:	
				return (_Wchars);

			case -1:	
				return (_Wchars);

			case 0:	
				if (_Ch == (_Elem)0)
					_Bytes = (int):: strlen(_Mid1) + 1;
				

			default:	
				if (_Bytes == -3)
					_Bytes = 0;	
				_Mid1 += _Bytes;
				++_Wchars;
				}
			}
		return (_Wchars);
		}

	virtual bool  do_always_noconv() const noexcept
		{	
		return (false);
		}

	virtual int  do_max_length() const noexcept
		{	
		return (5);
		}

	virtual int  do_encoding() const noexcept
		{	
		return (0);	
		}

private:
	_Locinfo::_Cvtvec _Cvt;	
	};

 
		
template<>
	class __declspec(dllimport) codecvt<unsigned short, char, _Mbstatet>
	: public codecvt_base
	{	
public:
	typedef unsigned short _Elem;
	typedef char _Byte;
	typedef _Mbstatet _Statype;
	typedef _Elem intern_type;
	typedef _Byte extern_type;
	typedef _Statype state_type;

	result  in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
		_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		return (do_in(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_out(_State,
			_First1, _Last1, _Mid1, _First2, _Last2, _Mid2));
		}

	result  unshift(_Statype& _State,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		return (do_unshift(_State,
			_First2, _Last2, _Mid2));
		}

	int  length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		return (do_length(_State, _First1, _Last1, _Count));
		}

	 static locale::id id;

	explicit  codecvt(size_t _Refs = 0)
		: codecvt_base(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 codecvt(const _Locinfo& _Lobj, size_t _Refs = 0)
		: codecvt_base(_Refs)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new codecvt<_Elem, _Byte, _Statype>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

protected:
	virtual  ~codecvt() noexcept
		{	
		}

	void  _Init(const _Locinfo& _Lobj)
		{	
		_Cvt = _Lobj._Getcvt();
		}

	virtual result  do_in(_Statype& _State,
		const _Byte *_First1, const _Byte *_Last1, const _Byte *& _Mid1,
			_Elem *_First2, _Elem *_Last2, _Elem *& _Mid2) const
		{	
		;
		;
		_Mid1 = _First1;
		_Mid2 = _First2;
		result _Ans = _Mid1 == _Last1 ? ok : partial;
		int _Bytes;

		while (_Mid1 != _Last1 && _Mid2 != _Last2)
			switch (_Bytes = _Mbrtowc((wchar_t *)_Mid2, _Mid1, _Last1 - _Mid1,
				&_State, &_Cvt))
			{	
			case -2:	
				_Mid1 = _Last1;
				return (_Ans);

			case -1:	
				return (error);

			case 0:	
				if (*_Mid2 == (_Elem)0)
					_Bytes = (int):: strlen(_Mid1) + 1;
				

			default:	
				if (_Bytes == -3)
					_Bytes = 0;	
				_Mid1 += _Bytes;
				++_Mid2;
				_Ans = ok;
			}
		return (_Ans);
		}

	virtual result  do_out(_Statype& _State,
		const _Elem *_First1, const _Elem *_Last1, const _Elem *& _Mid1,
			_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		;
		;
		_Mid1 = _First1;
		_Mid2 = _First2;
		int _Bytes;

		while (_Mid1 != _Last1 && _Mid2 != _Last2)
			{
			if ((int)5 <= _Last2 - _Mid2)
				{
				if ((_Bytes = _Wcrtomb(_Mid2, *_Mid1,
					&_State, &_Cvt)) < 0)
					{
					return (error);	
					}
				else
					{
					++_Mid1;
					_Mid2 += _Bytes;
					}
				}
			else
				{	
				_Byte _Buf[5];
				_Statype _Stsave = _State;

				if ((_Bytes = _Wcrtomb(_Buf, *_Mid1,
					&_State, &_Cvt)) < 0)
					{
					return (error);	
					}
				else if (_Last2 - _Mid2 < _Bytes)
					{	
					_State = _Stsave;
					break;
					}
				else
					{	
					:: memcpy(_Mid2, _Buf, _Bytes);
					++_Mid1;
					_Mid2 += _Bytes;
					}
				}
			}

		return (_Mid1 == _Last1 ? ok : partial);
		}

	virtual result  do_unshift(_Statype& _State,
		_Byte *_First2, _Byte *_Last2, _Byte *& _Mid2) const
		{	
		;
		_Mid2 = _First2;
		result _Ans = ok;
		int _Bytes;
		_Byte _Buf[5];
		_Statype _Stsave = _State;

		if ((_Bytes = _Wcrtomb(_Buf, L'\0', &_State, &_Cvt)) <= 0)
			_Ans = error;	
		else if (_Last2 - _Mid2 < --_Bytes)
			{	
			_State = _Stsave;
			_Ans = partial;
			}
		else if (0 < _Bytes)
			{	
			:: memcpy(_Mid2, _Buf, _Bytes);
			_Mid2 += _Bytes;
			}
		return (_Ans);
		}

	virtual int  do_length(_Statype& _State, const _Byte *_First1,
		const _Byte *_Last1, size_t _Count) const
		{	
		;
		int _Wchars;
		const _Byte *_Mid1;
		_Statype _Mystate = _State;

		for (_Wchars = 0, _Mid1 = _First1;
			(size_t)_Wchars < _Count && _Mid1 != _Last1; )
			{	
			int _Bytes;
			_Elem _Ch;

			switch (_Bytes = _Mbrtowc((wchar_t *)&_Ch, _Mid1, _Last1 - _Mid1,
				&_Mystate, &_Cvt))
				{	
			case -2:	
				return (_Wchars);

			case -1:	
				return (_Wchars);

			case 0:	
				if (_Ch == (_Elem)0)
					_Bytes = (int):: strlen(_Mid1) + 1;
				

			default:	
				if (_Bytes == -3)
					_Bytes = 0;	
				_Mid1 += _Bytes;
				++_Wchars;
				}
			}
		return (_Wchars);
		}

	virtual bool  do_always_noconv() const noexcept
		{	
		return (false);
		}

	virtual int  do_max_length() const noexcept
		{	
		return (5);
		}

	virtual int  do_encoding() const noexcept
		{	
		return (0);	
		}

private:
	_Locinfo::_Cvtvec _Cvt;	
	};
 

		
template<class _Elem,
	class _Byte,
	class _Statype>
	class codecvt_byname
		: public codecvt<_Elem, _Byte, _Statype>
	{	
public:
	explicit  codecvt_byname(const char *_Locname, size_t _Refs = 0)
		: codecvt<_Elem, _Byte, _Statype>(_Locinfo(_Locname), _Refs)
		{	
		}

	explicit  codecvt_byname(const string& _Str, size_t _Refs = 0)
		: codecvt<_Elem, _Byte, _Statype>(_Locinfo(_Str.c_str()), _Refs)
		{	
		}

protected:
	virtual  ~codecvt_byname() noexcept
		{	
		}
	};

		
struct __declspec(dllimport) ctype_base
	: public locale::facet
	{	
	enum
		{	
		alnum = 0x04 | 0x02 | 0x01 | 0x100, alpha = 0x02 | 0x01 | 0x100,
		cntrl = 0x20, digit = 0x04, graph = 0x04 | 0x02 | 0x10 | 0x01 | 0x100,
		lower = 0x02, print = 0x04 | 0x02 | 0x10 | 0x40 | 0x01 | 0x100 | 0x80,
		punct = 0x10, space = 0x08 | 0x40 | 0x000, upper = 0x01,
		xdigit = 0x80, blank = 0x08 | 0x40 | 0x000 | 0x000};
	typedef short mask;	

	 ctype_base(size_t _Refs = 0)
		: locale::facet(_Refs)
		{	
		}

	 ~ctype_base() noexcept
		{	
		}
	};

		
template<class _Elem>
	class ctype
		: public ctype_base
	{	
public:
	typedef _Elem char_type;

	bool  is(mask _Maskval, _Elem _Ch) const
		{	
		return (do_is(_Maskval, _Ch));
		}

	const _Elem * is(const _Elem *_First, const _Elem *_Last,
		mask *_Dest) const
		{	
		return (do_is(_First, _Last, _Dest));
		}

	const _Elem * scan_is(mask _Maskval, const _Elem *_First,
		const _Elem *_Last) const
		{	
		return (do_scan_is(_Maskval, _First, _Last));
		}

	const _Elem * scan_not(mask _Maskval, const _Elem *_First,
		const _Elem *_Last) const
		{	
		return (do_scan_not(_Maskval, _First, _Last));
		}

	_Elem  tolower(_Elem _Ch) const
		{	
		return (do_tolower(_Ch));
		}

	const _Elem * tolower(_Elem *_First, const _Elem *_Last) const
		{	
		return (do_tolower(_First, _Last));
		}

	_Elem  toupper(_Elem _Ch) const
		{	
		return (do_toupper(_Ch));
		}

	const _Elem * toupper(_Elem *_First, const _Elem *_Last) const
		{	
		return (do_toupper(_First, _Last));
		}

	_Elem  widen(char _Byte) const
		{	
		return (do_widen(_Byte));
		}

	const char * widen(const char *_First, const char *_Last,
		_Elem *_Dest) const
		{	
		return (do_widen(_First, _Last, _Dest));
		}

	char  narrow(_Elem _Ch, char _Dflt = '\0') const
		{	
		return (do_narrow(_Ch, _Dflt));
		}

	const _Elem * narrow(const _Elem *_First, const _Elem *_Last,
		char _Dflt, char *_Dest) const
		{	
		return (do_narrow(_First, _Last, _Dflt, _Dest));
		}

	 static locale::id id;

	explicit  ctype(size_t _Refs = 0)
		: ctype_base(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 ctype(const _Locinfo& _Lobj, size_t _Refs = 0)
		: ctype_base(_Refs)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new ctype<_Elem>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

protected:
	virtual  ~ctype() noexcept
		{	
		if (_Ctype._Delfl)
			:: free((void *)_Ctype._Table);

		:: free(_Ctype._LocaleName);
		}

	void  _Init(const _Locinfo& _Lobj)
		{	
		_Ctype = _Lobj._Getctype();
		_Cvt = _Lobj._Getcvt();
		}

	virtual bool  do_is(mask _Maskval, _Elem _Ch) const
		{	
		return ((_Ctype._Table[(unsigned char)narrow(_Ch)]
			& _Maskval) != 0);
		}

	virtual const _Elem * do_is(const _Elem *_First, const _Elem *_Last,
		mask *_Dest) const
		{	
		;
		for (; _First != _Last; ++_First, ++_Dest)
			*_Dest = _Ctype._Table[(unsigned char)narrow(*_First)];
		return (_First);
		}

	virtual const _Elem * do_scan_is(mask _Maskval,
		const _Elem *_First, const _Elem *_Last) const
		{	
		;
		for (; _First != _Last && !is(_Maskval, *_First); ++_First)
			;
		return (_First);
		}

	virtual const _Elem * do_scan_not(mask _Maskval,
		const _Elem *_First, const _Elem *_Last) const
		{	
		;
		for (; _First != _Last && is(_Maskval, *_First); ++_First)
			;
		return (_First);
		}

	virtual _Elem  do_tolower(_Elem _Ch) const
		{	
		unsigned char _Byte = (unsigned char)narrow(_Ch, '\0');
		if (_Byte == '\0')
			return (_Ch);
		else
			return (widen((char)_Tolower(_Byte, &_Ctype)));
		}

	virtual const _Elem * do_tolower(_Elem *_First,
		const _Elem *_Last) const
		{	
		;
		for (; _First != _Last; ++_First)
			{	
			unsigned char _Byte = (unsigned char)narrow(*_First, '\0');
			if (_Byte != '\0')
				*_First = (widen((char)_Tolower(_Byte, &_Ctype)));
			}
		return ((const _Elem *)_First);
		}

	virtual _Elem  do_toupper(_Elem _Ch) const
		{	
		unsigned char _Byte = (unsigned char)narrow(_Ch, '\0');
		if (_Byte == '\0')
			return (_Ch);
		else
			return (widen((char)_Toupper(_Byte, &_Ctype)));
		}

	virtual const _Elem * do_toupper(_Elem *_First,
		const _Elem *_Last) const
		{	
		;
		for (; _First != _Last; ++_First)
			{	
			unsigned char _Byte = (unsigned char)narrow(*_First, '\0');
			if (_Byte != '\0')
				*_First = (widen((char)_Toupper(_Byte, &_Ctype)));
			}
		return ((const _Elem *)_First);
		}

	virtual _Elem  do_widen(char _Byte) const
		{	
		return (_Maklocchr(_Byte, (_Elem *)0, _Cvt));
		}

	virtual const char * do_widen(const char *_First,
		const char *_Last, _Elem *_Dest) const
		{	
		;
		for (; _First != _Last; ++_First, ++_Dest)
			*_Dest = _Maklocchr(*_First, (_Elem *)0, _Cvt);
		return (_First);
		}

	char  _Donarrow(_Elem _Ch, char _Dflt) const
		{	
		char _Byte;
		if (_Ch == (_Elem)0)
			return ('\0');
		else if ((_Byte = _Maklocbyte((_Elem)_Ch, _Cvt)) == '\0')
			return (_Dflt);
		else
			return (_Byte);
		}

	virtual char  do_narrow(_Elem _Ch, char _Dflt) const
		{	
		return (_Donarrow(_Ch, _Dflt));
		}

	virtual const _Elem * do_narrow(const _Elem *_First,
		const _Elem *_Last, char _Dflt, char *_Dest) const
		{	
		;
		for (; _First != _Last; ++_First, ++_Dest)
			*_Dest = _Donarrow(*_First, _Dflt);
		return (_First);
		}

private:
	_Locinfo::_Ctypevec _Ctype;	
	_Locinfo::_Cvtvec _Cvt;		
	};

		
template<class _Elem>
	locale::id ctype<_Elem>::id;

		
template<>
	class __declspec(dllimport) ctype<char>
	: public ctype_base
	{	
	typedef ctype<char> _Myt;

public:
	typedef char _Elem;
	typedef _Elem char_type;

	bool  is(mask _Maskval, _Elem _Ch) const
		{	
		return ((_Ctype._Table[(unsigned char)_Ch] & _Maskval) != 0);
		}

	const _Elem * is(const _Elem *_First,
		const _Elem *_Last, mask *_Dest) const
		{	
		;
		for (; _First != _Last; ++_First, ++_Dest)
			*_Dest = _Ctype._Table[(unsigned char)*_First];
		return (_First);
		}

	const _Elem * scan_is(mask _Maskval,
		const _Elem *_First, const _Elem *_Last) const
		{	
		;
		for (; _First != _Last && !is(_Maskval, *_First); ++_First)
			;
		return (_First);
		}

	const _Elem * scan_not(mask _Maskval,
		const _Elem *_First, const _Elem *_Last) const
		{	
		;
		for (; _First != _Last && is(_Maskval, *_First); ++_First)
			;
		return (_First);
		}

	_Elem  tolower(_Elem _Ch) const
		{	
		return (do_tolower(_Ch));
		}

	const _Elem * tolower(_Elem *_First, const _Elem *_Last) const
		{	
		return (do_tolower(_First, _Last));
		}

	_Elem  toupper(_Elem _Ch) const
		{	
		return (do_toupper(_Ch));
		}

	const _Elem * toupper(_Elem *_First, const _Elem *_Last) const
		{	
		return (do_toupper(_First, _Last));
		}

	_Elem  widen(char _Byte) const
		{	
		return (do_widen(_Byte));
		}

	const _Elem * widen(const char *_First, const char *_Last,
		_Elem *_Dest) const
		{	
		return (do_widen(_First, _Last, _Dest));
		}

	_Elem  narrow(_Elem _Ch, char _Dflt = '\0') const
		{	
		return (do_narrow(_Ch, _Dflt));
		}

	const _Elem * narrow(const _Elem *_First, const _Elem *_Last,
		char _Dflt, char *_Dest) const
		{	
		return (do_narrow(_First, _Last, _Dflt, _Dest));
		}

	 static locale::id id;

	explicit  ctype(const mask *_Table = 0,
		bool _Deletetable = false,
		size_t _Refs = 0)
		: ctype_base(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}

		_Tidy();	
		if (_Table != 0)
			{	
			_Ctype._Table = _Table;
			_Ctype._Delfl = _Deletetable ? -1 : 0;
			}
		else
			{	
			_Ctype._Table = classic_table();
			_Ctype._Delfl = 0;
			}
		}

	 ctype(const _Locinfo& _Lobj, size_t _Refs = 0)
		: ctype_base(_Refs)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new ctype<_Elem>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

	const mask * table() const noexcept
		{	
		return (_Ctype._Table);
		}

	static const mask *__cdecl classic_table() noexcept
		{	
		const _Myt& _Ctype_fac = use_facet< _Myt >(locale::classic());
		return (_Ctype_fac.table());
		}

	 static const size_t table_size =
		1 << 8;	

protected:
	virtual  ~ctype() noexcept
		{	
		_Tidy();
		}

	void  _Init(const _Locinfo& _Lobj)
		{	
		_Ctype = _Lobj._Getctype();
		}

	void  _Tidy()
		{	
		if (0 < _Ctype._Delfl)
			:: free((void *)_Ctype._Table);
		else if (_Ctype._Delfl < 0)
			delete[] _Ctype._Table;

		:: free(_Ctype._LocaleName);
		}

	virtual _Elem  do_tolower(_Elem _Ch) const
		{	
		return ((_Elem)_Tolower((unsigned char)_Ch, &_Ctype));
		}

	virtual const _Elem * do_tolower(_Elem *_First,
		const _Elem *_Last) const
		{	
		;
		for (; _First != _Last; ++_First)
			*_First = (_Elem)_Tolower((unsigned char)*_First, &_Ctype);
		return ((const _Elem *)_First);
		}

	virtual _Elem  do_toupper(_Elem _Ch) const
		{	
		return ((_Elem)_Toupper((unsigned char)_Ch, &_Ctype));
		}

	virtual const _Elem * do_toupper(_Elem *_First,
		const _Elem *_Last) const
		{	
		;
		for (; _First != _Last; ++_First)
			*_First = (_Elem)_Toupper((unsigned char)*_First, &_Ctype);
		return ((const _Elem *)_First);
		}

	virtual _Elem  do_widen(char _Byte) const
		{	
		return (_Byte);
		}

	virtual const _Elem * do_widen(const char *_First,
		const char *_Last, _Elem *_Dest) const
		{	
		;
		:: memcpy(_Dest, _First, _Last - _First);
		return (_Last);
		}

	virtual _Elem  do_narrow(_Elem _Ch, char) const
		{	
		return (_Ch);
		}

	virtual const _Elem * do_narrow(const _Elem *_First,
		const _Elem *_Last, char, char *_Dest) const
		{	
		;
		:: memcpy(_Dest, _First, _Last - _First);
		return (_Last);
		}

private:
	_Locinfo::_Ctypevec _Ctype;	
	};

		
template<>
	class __declspec(dllimport) ctype<wchar_t>
	: public ctype_base
	{	
	typedef ctype<wchar_t> _Myt;

public:
	typedef wchar_t _Elem;
	typedef _Elem char_type;

	bool  is(mask _Maskval, _Elem _Ch) const
		{	
		return (do_is(_Maskval, _Ch));
		}

	const _Elem * is(const _Elem *_First, const _Elem *_Last,
		mask *_Dest) const
		{	
		return (do_is(_First, _Last, _Dest));
		}

	const _Elem * scan_is(mask _Maskval, const _Elem *_First,
		const _Elem *_Last) const
		{	
		return (do_scan_is(_Maskval, _First, _Last));
		}

	const _Elem * scan_not(mask _Maskval, const _Elem *_First,
		const _Elem *_Last) const
		{	
		return (do_scan_not(_Maskval, _First, _Last));
		}

	_Elem  tolower(_Elem _Ch) const
		{	
		return (do_tolower(_Ch));
		}

	const _Elem * tolower(_Elem *_First, const _Elem *_Last) const
		{	
		return (do_tolower(_First, _Last));
		}

	_Elem  toupper(_Elem _Ch) const
		{	
		return (do_toupper(_Ch));
		}

	const _Elem * toupper(_Elem *_First, const _Elem *_Last) const
		{	
		return (do_toupper(_First, _Last));
		}

	_Elem  widen(char _Byte) const
		{	
		return (do_widen(_Byte));
		}

	const char * widen(const char *_First, const char *_Last,
		_Elem *_Dest) const
		{	
		return (do_widen(_First, _Last, _Dest));
		}

	char  narrow(_Elem _Ch, char _Dflt = '\0') const
		{	
		return (do_narrow(_Ch, _Dflt));
		}

	const _Elem * narrow(const _Elem *_First, const _Elem *_Last,
		char _Dflt, char *_Dest) const
		{	
		return (do_narrow(_First, _Last, _Dflt, _Dest));
		}

	 static locale::id id;

	explicit  ctype(size_t _Refs = 0)
		: ctype_base(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 ctype(const _Locinfo& _Lobj, size_t _Refs = 0)
		: ctype_base(_Refs)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new ctype<_Elem>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

protected:
	virtual  ~ctype() noexcept
		{	
		if (_Ctype._Delfl)
			:: free((void *)_Ctype._Table);

		:: free(_Ctype._LocaleName);
		}

	void  _Init(const _Locinfo& _Lobj)
		{	
		_Ctype = _Lobj._Getctype();
		_Cvt = _Lobj._Getcvt();
		}

	virtual bool  do_is(mask _Maskval, _Elem _Ch) const
		{	
		return ((:: _Getwctype(_Ch, &_Ctype) & _Maskval) != 0);
		}

	virtual const _Elem * do_is(const _Elem *_First,
		const _Elem *_Last, mask *_Dest) const
		{	
		;
		return (:: _Getwctypes(_First, _Last, _Dest, &_Ctype));
		}

	virtual const _Elem * do_scan_is(mask _Maskval,
		const _Elem *_First, const _Elem *_Last) const
		{	
		;
		for (; _First != _Last && !is(_Maskval, *_First); ++_First)
			;
		return (_First);
		}

	virtual const _Elem * do_scan_not(mask _Maskval,
		const _Elem *_First, const _Elem *_Last) const
		{	
		;
		for (; _First != _Last && is(_Maskval, *_First); ++_First)
			;
		return (_First);
		}

	virtual _Elem  do_tolower(_Elem _Ch) const
		{	
		return (_Towlower(_Ch, &_Ctype));
		}

	virtual const _Elem * do_tolower(_Elem *_First,
		const _Elem *_Last) const
		{	
		;
		for (; _First != _Last; ++_First)
			*_First = _Towlower(*_First, &_Ctype);
		return ((const _Elem *)_First);
		}

	virtual _Elem  do_toupper(_Elem _Ch) const
		{	
		return (_Towupper(_Ch, &_Ctype));
		}

	virtual const _Elem * do_toupper(_Elem *_First,
		const _Elem *_Last) const
		{	
		;
		for (; _First != _Last; ++_First)
			*_First = _Towupper(*_First, &_Ctype);
		return ((const _Elem *)_First);
		}

	_Elem  _Dowiden(char _Byte) const
		{	
		mbstate_t _Mbst = {};
		wchar_t _Wc;
		return (_Mbrtowc(&_Wc, &_Byte, 1, &_Mbst, &_Cvt) < 0
			? (wchar_t)((wint_t)(0xFFFF)) : _Wc);
		}

	virtual _Elem  do_widen(char _Byte) const
		{	
		return (_Dowiden(_Byte));
		}

	virtual const char * do_widen(const char *_First,
		const char *_Last, _Elem *_Dest) const
		{	
		;
		for (; _First != _Last; ++_First, ++_Dest)
			*_Dest = _Dowiden(*_First);
		return (_First);
		}

	char  _Donarrow(_Elem _Ch, char _Dflt) const
		{	
		char _Buf[5];
		mbstate_t _Mbst = {};
		return (_Wcrtomb(_Buf, _Ch, &_Mbst, &_Cvt) != 1
			? _Dflt : _Buf[0]);
		}

	virtual char  do_narrow(_Elem _Ch, char _Dflt) const
		{	
		return (_Donarrow(_Ch, _Dflt));
		}

	virtual const _Elem * do_narrow(const _Elem *_First,
		const _Elem *_Last, char _Dflt, char *_Dest) const
		{	
		;
		for (; _First != _Last; ++_First, ++_Dest)
			*_Dest = _Donarrow(*_First, _Dflt);
		return (_First);
		}

private:
	_Locinfo::_Ctypevec _Ctype;	
	_Locinfo::_Cvtvec _Cvt;		
	};

 
		
template<>
	class __declspec(dllimport) ctype<unsigned short>
	: public ctype_base
	{	
	typedef ctype<unsigned short> _Myt;

public:
	typedef unsigned short _Elem;
	typedef _Elem char_type;

	bool  is(mask _Maskval, _Elem _Ch) const
		{	
		return (do_is(_Maskval, _Ch));
		}

	const _Elem * is(const _Elem *_First, const _Elem *_Last,
		mask *_Dest) const
		{	
		return (do_is(_First, _Last, _Dest));
		}

	const _Elem * scan_is(mask _Maskval, const _Elem *_First,
		const _Elem *_Last) const
		{	
		return (do_scan_is(_Maskval, _First, _Last));
		}

	const _Elem * scan_not(mask _Maskval, const _Elem *_First,
		const _Elem *_Last) const
		{	
		return (do_scan_not(_Maskval, _First, _Last));
		}

	_Elem  tolower(_Elem _Ch) const
		{	
		return (do_tolower(_Ch));
		}

	const _Elem * tolower(_Elem *_First, const _Elem *_Last) const
		{	
		return (do_tolower(_First, _Last));
		}

	_Elem  toupper(_Elem _Ch) const
		{	
		return (do_toupper(_Ch));
		}

	const _Elem * toupper(_Elem *_First, const _Elem *_Last) const
		{	
		return (do_toupper(_First, _Last));
		}

	_Elem  widen(char _Byte) const
		{	
		return (do_widen(_Byte));
		}

	const char * widen(const char *_First, const char *_Last,
		_Elem *_Dest) const
		{	
		return (do_widen(_First, _Last, _Dest));
		}

	char  narrow(_Elem _Ch, char _Dflt = '\0') const
		{	
		return (do_narrow(_Ch, _Dflt));
		}

	const _Elem * narrow(const _Elem *_First, const _Elem *_Last,
		char _Dflt, char *_Dest) const
		{	
		return (do_narrow(_First, _Last, _Dflt, _Dest));
		}

	 static locale::id id;

	explicit  ctype(size_t _Refs = 0)
		: ctype_base(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 ctype(const _Locinfo& _Lobj, size_t _Refs = 0)
		: ctype_base(_Refs)
		{	
		_Init(_Lobj);
		}

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new ctype<_Elem>(
				_Locinfo(_Ploc->c_str()));
		return (2);
		}

protected:
	virtual  ~ctype() noexcept
		{	
		if (_Ctype._Delfl)
			:: free((void *)_Ctype._Table);

		:: free(_Ctype._LocaleName);
		}

	void  _Init(const _Locinfo& _Lobj)
		{	
		_Ctype = _Lobj._Getctype();
		_Cvt = _Lobj._Getcvt();
		}

	virtual bool  do_is(mask _Maskval, _Elem _Ch) const
		{	
		return ((:: _Getwctype(_Ch, &_Ctype) & _Maskval) != 0);
		}

	virtual const _Elem * do_is(const _Elem *_First,
		const _Elem *_Last, mask *_Dest) const
		{	
		;
		return ((const _Elem *):: _Getwctypes((const wchar_t *)_First,
			(const wchar_t *)_Last, _Dest, &_Ctype));
		}

	virtual const _Elem * do_scan_is(mask _Maskval,
		const _Elem *_First, const _Elem *_Last) const
		{	
		;
		for (; _First != _Last && !is(_Maskval, *_First); ++_First)
			;
		return (_First);
		}

	virtual const _Elem * do_scan_not(mask _Maskval,
		const _Elem *_First, const _Elem *_Last) const
		{	
		;
		for (; _First != _Last && is(_Maskval, *_First); ++_First)
			;
		return (_First);
		}

	virtual _Elem  do_tolower(_Elem _Ch) const
		{	
		return (_Towlower(_Ch, &_Ctype));
		}

	virtual const _Elem * do_tolower(_Elem *_First,
		const _Elem *_Last) const
		{	
		;
		for (; _First != _Last; ++_First)
			*_First = _Towlower(*_First, &_Ctype);
		return ((const _Elem *)_First);
		}

	virtual _Elem  do_toupper(_Elem _Ch) const
		{	
		return (_Towupper(_Ch, &_Ctype));
		}

	virtual const _Elem * do_toupper(_Elem *_First,
		const _Elem *_Last) const
		{	
		;
		for (; _First != _Last; ++_First)
			*_First = _Towupper(*_First, &_Ctype);
		return ((const _Elem *)_First);
		}

	_Elem  _Dowiden(char _Byte) const
		{	
		mbstate_t _Mbst = {};
		unsigned short _Wc;
		return (_Mbrtowc((wchar_t *)&_Wc, &_Byte, 1, &_Mbst, &_Cvt) < 0
			? (unsigned short)((wint_t)(0xFFFF)) : _Wc);
		}

	virtual _Elem  do_widen(char _Byte) const
		{	
		return (_Dowiden(_Byte));
		}

	virtual const char * do_widen(const char *_First,
		const char *_Last, _Elem *_Dest) const
		{	
		;
		for (; _First != _Last; ++_First, ++_Dest)
			*_Dest = _Dowiden(*_First);
		return (_First);
		}

	char  _Donarrow(_Elem _Ch, char _Dflt) const
		{	
		char _Buf[5];
		mbstate_t _Mbst = {};
		return (_Wcrtomb(_Buf, _Ch, &_Mbst, &_Cvt) != 1
			? _Dflt : _Buf[0]);
		}

	virtual char  do_narrow(_Elem _Ch, char _Dflt) const
		{	
		return (_Donarrow(_Ch, _Dflt));
		}

	virtual const _Elem * do_narrow(const _Elem *_First,
		const _Elem *_Last, char _Dflt, char *_Dest) const
		{	
		;
		for (; _First != _Last; ++_First, ++_Dest)
			*_Dest = _Donarrow(*_First, _Dflt);
		return (_First);
		}

private:
	_Locinfo::_Ctypevec _Ctype;	
	_Locinfo::_Cvtvec _Cvt;		
	};
 

		
template<class _Elem>
	class ctype_byname
	: public ctype<_Elem>
	{	
public:
	explicit  ctype_byname(const char *_Locname, size_t _Refs = 0)
		: ctype<_Elem>(_Locinfo(_Locname), _Refs)
		{	
		}

	explicit  ctype_byname(const string& _Str, size_t _Refs = 0)
		: ctype<_Elem>(_Locinfo(_Str.c_str()), _Refs)
		{	
		}

protected:
	virtual  ~ctype_byname() noexcept
		{	
		}
	};

		
template<>
	class ctype_byname<char>
	: public ctype<char>
	{	
public:
	explicit  ctype_byname(const char *_Locname, size_t _Refs = 0)
		: ctype<char>(_Locinfo(_Locname), _Refs)
		{	
		}

	explicit  ctype_byname(const string& _Str, size_t _Refs = 0)
		: ctype<char>(_Locinfo(_Str.c_str()), _Refs)
		{	
		}

protected:
	virtual  ~ctype_byname() noexcept
		{	
		}
	};

 

  
template class __declspec(dllimport) codecvt<char, char, _Mbstatet>;
  
 
}
 
 #pragma warning(pop)
 #pragma pack(pop)










 

#pragma once





#pragma once

















 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 


 




namespace std {
		

enum class errc {	
	address_family_not_supported = 102,
	address_in_use = 100,
	address_not_available = 101,
	already_connected = 113,
	argument_list_too_long = 7,
	argument_out_of_domain = 33,
	bad_address = 14,
	bad_file_descriptor = 9,
	bad_message = 104,
	broken_pipe = 32,
	connection_aborted = 106,
	connection_already_in_progress = 103,
	connection_refused = 107,
	connection_reset = 108,
	cross_device_link = 18,
	destination_address_required = 109,
	device_or_resource_busy = 16,
	directory_not_empty = 41,
	executable_format_error = 8,
	file_exists = 17,
	file_too_large = 27,
	filename_too_long = 38,
	function_not_supported = 40,
	host_unreachable = 110,
	identifier_removed = 111,
	illegal_byte_sequence = 42,
	inappropriate_io_control_operation = 25,
	interrupted = 4,
	invalid_argument = 22,
	invalid_seek = 29,
	io_error = 5,
	is_a_directory = 21,
	message_size = 115,
	network_down = 116,
	network_reset = 117,
	network_unreachable = 118,
	no_buffer_space = 119,
	no_child_process = 10,
	no_link = 121,
	no_lock_available = 39,
	no_message_available = 120,
	no_message = 122,
	no_protocol_option = 123,
	no_space_on_device = 28,
	no_stream_resources = 124,
	no_such_device_or_address = 6,
	no_such_device = 19,
	no_such_file_or_directory = 2,
	no_such_process = 3,
	not_a_directory = 20,
	not_a_socket = 128,
	not_a_stream = 125,
	not_connected = 126,
	not_enough_memory = 12,
	not_supported = 129,
	operation_canceled = 105,
	operation_in_progress = 112,
	operation_not_permitted = 1,
	operation_not_supported = 130,
	operation_would_block = 140,
	owner_dead = 133,
	permission_denied = 13,
	protocol_error = 134,
	protocol_not_supported = 135,
	read_only_file_system = 30,
	resource_deadlock_would_occur = 36,
	resource_unavailable_try_again = 11,
	result_out_of_range = 34,
	state_not_recoverable = 127,
	stream_timeout = 137,
	text_file_busy = 139,
	timed_out = 138,
	too_many_files_open_in_system = 23,
	too_many_files_open = 24,
	too_many_links = 31,
	too_many_symbolic_link_levels = 114,
	value_too_large = 132,
	wrong_protocol_type = 136
	};

typedef errc _Errc;

		

enum class io_errc {	
	stream = 1
	};

typedef io_errc _Io_errc;

		
template<class _Enum>
	struct is_error_code_enum
		: public false_type
	{	
	};

template<>
	struct is_error_code_enum<_Io_errc>
		: public true_type
	{	
	};

template<class _Ty>
	constexpr bool is_error_code_enum_v = is_error_code_enum<_Ty>::value;

		
template<class _Enum>
	struct is_error_condition_enum
		: public false_type
	{	
	};

template<>
	struct is_error_condition_enum<_Errc>
		: public true_type
	{	
	};

template<class _Ty>
	constexpr bool is_error_condition_enum_v = is_error_condition_enum<_Ty>::value;

class error_code;
class error_condition;
error_code make_error_code(_Errc) noexcept;
error_code make_error_code(_Io_errc) noexcept;
error_condition make_error_condition(_Errc) noexcept;
error_condition make_error_condition(_Io_errc) noexcept;

		
class error_category;

const error_category& generic_category() noexcept;
const error_category& iostream_category() noexcept;
const error_category& system_category() noexcept;

class error_category
	{	
public:
	 error_category() noexcept	
		{	
		_Addr = reinterpret_cast<uintptr_t>(this);
		}

	virtual ~error_category() noexcept
		{	
		}

	virtual const char *name() const noexcept = 0;

	virtual string message(int _Errval) const = 0;

	virtual error_condition
		default_error_condition(int _Errval) const noexcept;

	virtual bool equivalent(int _Errval,
		const error_condition& _Cond) const noexcept;

	virtual bool equivalent(const error_code& _Code,
		int _Errval) const noexcept;

	bool operator==(const error_category& _Right) const noexcept
		{	
		return (_Addr == _Right._Addr);
		}

	bool operator!=(const error_category& _Right) const noexcept
		{	
		return (!(*this == _Right));
		}

	bool operator<(const error_category& _Right) const noexcept
		{	
		return (_Addr < _Right._Addr);
		}

	error_category(const error_category&) = delete;
	error_category& operator=(const error_category&) = delete;

protected:
	uintptr_t _Addr;

	enum : uintptr_t
		{	
		_Future_addr = 1,
		_Generic_addr = 3,
		_Iostream_addr = 5,
		_System_addr = 7
		};
	};

		
class error_code
	{	
public:
	typedef error_code _Myt;

	error_code() noexcept
		: _Myval(0),
			_Mycat(&system_category())
		{	
		}

	error_code(int _Val, const error_category& _Cat) noexcept
		: _Myval(_Val), _Mycat(&_Cat)
		{	
		}

	template<class _Enum,
		class = typename enable_if<is_error_code_enum<_Enum>::value,
			void>::type>
		error_code(_Enum _Errcode) noexcept
		: _Myval(0), _Mycat(0)
		{	
		*this = make_error_code(_Errcode);	
		}

	void assign(int _Val, const error_category& _Cat) noexcept
		{	
		_Myval = _Val;
		_Mycat = &_Cat;
		}

	template<class _Enum>
		typename enable_if<is_error_code_enum<_Enum>::value,
			error_code>::type& operator=(_Enum _Errcode) noexcept
		{	
		*this = make_error_code(_Errcode);	
		return (*this);
		}

	void clear() noexcept
		{	
		_Myval = 0;
		_Mycat = &system_category();
		}

	int value() const noexcept
		{	
		return (_Myval);
		}

	const error_category& category() const noexcept
		{	
		return (*_Mycat);
		}

	error_condition default_error_condition() const noexcept;

	string message() const
		{	
		return (category().message(value()));
		}

	explicit operator bool() const noexcept
		{	
		return (value() != 0);
		}

private:
	int _Myval;	
	const error_category *_Mycat;	
	};

		
class error_condition
	{	
public:
	typedef error_condition _Myt;

	error_condition() noexcept
		: _Myval(0),
			_Mycat(&generic_category())
		{	
		}

	error_condition(int _Val, const error_category& _Cat) noexcept
		: _Myval(_Val), _Mycat(&_Cat)
		{	
		}

	template<class _Enum,
		class = typename enable_if<is_error_condition_enum<_Enum>::value,
			void>::type>
		error_condition(_Enum _Errcode) noexcept
		: _Myval(0), _Mycat(0)
		{	
		*this = make_error_condition(_Errcode);	
		}

	void assign(int _Val, const error_category& _Cat) noexcept
		{	
		_Myval = _Val;
		_Mycat = &_Cat;
		}

	template<class _Enum>
		typename enable_if<is_error_condition_enum<_Enum>::value,
			error_condition>::type& operator=(_Enum _Errcode) noexcept
		{	
		*this = make_error_condition(_Errcode);	
		return (*this);
		}

	void clear() noexcept
		{	
		_Myval = 0;
		_Mycat = &generic_category();
		}

	int value() const noexcept
		{	
		return (_Myval);
		}

	const error_category& category() const noexcept
		{	
		return (*_Mycat);
		}

	string message() const
		{	
		return (category().message(value()));
		}

	explicit operator bool() const noexcept
		{	
		return (value() != 0);
		}

private:
	int _Myval;	
	const error_category *_Mycat;	
	};

		
inline bool operator==(
	const error_code& _Left,
	const error_code& _Right) noexcept
	{	
	return (_Left.category() == _Right.category()
		&& _Left.value() == _Right.value());
	}

inline bool operator==(
	const error_code& _Left,
	const error_condition& _Right) noexcept
	{	
	return (_Left.category().equivalent(_Left.value(), _Right)
		|| _Right.category().equivalent(_Left, _Right.value()));
	}

inline bool operator==(
	const error_condition& _Left,
	const error_code& _Right) noexcept
	{	
	return (_Right.category().equivalent(_Right.value(), _Left)
		|| _Left.category().equivalent(_Right, _Left.value()));
	}

inline bool operator==(
	const error_condition& _Left,
	const error_condition& _Right) noexcept
	{	
	return (_Left.category() == _Right.category()
		&& _Left.value() == _Right.value());
	}

		
inline bool operator!=(
	const error_code& _Left,
	const error_code& _Right) noexcept
	{	
	return (!(_Left == _Right));
	}

inline bool operator!=(
	const error_code& _Left,
	const error_condition& _Right) noexcept
	{	
	return (!(_Left == _Right));
	}

inline bool operator!=(
	const error_condition& _Left,
	const error_code& _Right) noexcept
	{	
	return (!(_Left == _Right));
	}

inline bool operator!=(
	const error_condition& _Left,
	const error_condition& _Right) noexcept
	{	
	return (!(_Left == _Right));
	}

		
inline bool operator<(
	const error_code& _Left,
	const error_code& _Right) noexcept
	{	
	return (_Left.category() < _Right.category()
		|| (_Left.category() == _Right.category()
			&& _Left.value() < _Right.value()));
	}

inline bool operator<(
	const error_condition& _Left,
	const error_condition& _Right) noexcept
	{	
	return (_Left.category() < _Right.category()
		|| (_Left.category() == _Right.category()
			&& _Left.value() < _Right.value()));
	}

		
inline error_condition
	error_category::default_error_condition(int _Errval) const noexcept
	{	
	return (error_condition(_Errval, *this));
	}

inline bool
	error_category::equivalent(int _Errval,
		const error_condition& _Cond) const noexcept
	{	
	return (default_error_condition(_Errval) == _Cond);
	}

inline bool
	error_category::equivalent(const error_code& _Code,
		int _Errval) const noexcept
	{	
	return (*this == _Code.category() && _Code.value() == _Errval);
	}

		
inline error_condition error_code::default_error_condition() const noexcept
	{	
	return (category().default_error_condition(value()));
	}

		
inline error_code make_error_code(_Errc _Errno) noexcept
	{	
	return (error_code((int)_Errno, generic_category()));
	}

inline error_code make_error_code(_Io_errc _Errno) noexcept
	{	
	return (error_code((int)_Errno, iostream_category()));
	}

		
inline error_condition make_error_condition(_Errc _Errno) noexcept
	{	
	return (error_condition((int)_Errno, generic_category()));
	}

inline error_condition make_error_condition(_Io_errc _Errno) noexcept
	{	
	return (error_condition((int)_Errno, iostream_category()));
	}

		
template<>
	struct hash<error_code>
	{	
	typedef error_code argument_type;
	typedef size_t result_type;

	size_t operator()(const argument_type& _Keyval) const
		{	
		return (hash<int>()(_Keyval.value()));
		}
	};

		
class _System_error
	: public runtime_error
	{	
private:
	static string _Makestr(error_code _Errcode, string _Message)
		{	
		if (!_Message.empty())
			_Message.append(": ");
		_Message.append(_Errcode.message());
		return (_Message);
		}

protected:
	_System_error(error_code _Errcode, const string& _Message)
		: runtime_error(_Makestr(_Errcode, _Message)), _Mycode(_Errcode)
		{	
		}

	error_code _Mycode;	
	};

class system_error
	: public _System_error
	{	
private:
	typedef _System_error _Mybase;

public:
	system_error(error_code _Errcode)
		: _Mybase(_Errcode, "")
		{	
		}

	system_error(error_code _Errcode, const string& _Message)
		: _Mybase(_Errcode, _Message)
		{	
		}

	system_error(error_code _Errcode, const char *_Message)
		: _Mybase(_Errcode, _Message)
		{	
		}

	system_error(int _Errval, const error_category& _Errcat)
		: _Mybase(error_code(_Errval, _Errcat), "")
		{	
		}

	system_error(int _Errval, const error_category& _Errcat,
		const string& _Message)
		: _Mybase(error_code(_Errval, _Errcat), _Message)
		{	
		}

	system_error(int _Errval, const error_category& _Errcat,
		const char *_Message)
		: _Mybase(error_code(_Errval, _Errcat), _Message)
		{	
		}

	const error_code& code() const noexcept
		{	
		return (_Mycode);
		}

 

 






	};

__declspec(dllimport) const char *__cdecl _Syserror_map(int);
__declspec(dllimport) int __cdecl _Winerror_map(int);
__declspec(dllimport) unsigned long __cdecl _Winerror_message(
	unsigned long _Message_id, char *_Narrow, unsigned long _Size);

		
class _Generic_error_category
	: public error_category
	{	
public:
	_Generic_error_category() noexcept
		{	
		_Addr = _Generic_addr;
		}

	virtual const char *name() const noexcept
		{	
		return ("generic");
		}

	virtual string message(int _Errcode) const
		{	
		return (_Syserror_map(_Errcode));
		}
	};

		
class _Iostream_error_category
	: public _Generic_error_category
	{	
public:
	_Iostream_error_category() noexcept
		{	
		_Addr = _Iostream_addr;
		}

	virtual const char *name() const noexcept
		{	
		return ("iostream");
		}

	virtual string message(int _Errcode) const
		{	
		if (_Errcode == (int)io_errc::stream)
			return ("iostream stream error");
		else
			return (_Generic_error_category::message(_Errcode));
		}
	};

		
class _System_error_category
	: public error_category
	{	
public:
	_System_error_category() noexcept
		{	
		_Addr = _System_addr;
		}

	virtual const char *name() const noexcept
		{	
		return ("system");
		}

	virtual string message(int _Errcode) const
		{	
		const unsigned long _Size = 32767;
		string _Narrow(_Size, '\0');

		const unsigned long _Val = _Winerror_message(
			static_cast<unsigned long>(_Errcode), &_Narrow[0], _Size);

		if (_Val == 0)
			return ("unknown error");

		_Narrow.resize(_Val);
		_Narrow.shrink_to_fit();
		return (_Narrow);
		}

	virtual error_condition
		default_error_condition(int _Errval) const noexcept
		{	
		int _Posv = _Winerror_map(_Errval);

		if (_Posv != 0)
			return (error_condition(_Posv, generic_category()));
		else
			return (error_condition(_Errval, system_category()));
		}
	};

template<class _Ty>
	struct _Immortalizer
	{	
	_Immortalizer()
		{	
		::new (static_cast<void *>(&_Storage)) _Ty();
		}

	~_Immortalizer() noexcept
		{	
		}

	_Immortalizer(const _Immortalizer&) = delete;
	_Immortalizer& operator=(const _Immortalizer&) = delete;

	typename aligned_union<1, _Ty>::type _Storage;
	};

template<class _Ty> inline
	_Ty& _Immortalize()
	{	
	 static _Immortalizer<_Ty> _Static;
	return (*reinterpret_cast<_Ty *>(&_Static._Storage));
	}

inline const error_category& generic_category() noexcept
	{	
	return (_Immortalize<_Generic_error_category>());
	}

inline const error_category& iostream_category() noexcept
	{	
	return (_Immortalize<_Iostream_error_category>());
	}

inline const error_category& system_category() noexcept
	{	
	return (_Immortalize<_System_error_category>());
	}
}
 
 #pragma warning(pop)
 #pragma pack(pop)









 







#pragma once





 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

 

namespace std {
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 

 
 

 
 
 

		
template<class _Dummy>
	class _Iosb
	{	
public:
	enum _Dummy_enum {_Dummy_enum_val = 1};	
	enum _Fmtflags
		{	
		_Fmtmask = 0xffff, _Fmtzero = 0};

	static constexpr _Fmtflags skipws = (_Fmtflags)0x0001;
	static constexpr _Fmtflags unitbuf = (_Fmtflags)0x0002;
	static constexpr _Fmtflags uppercase = (_Fmtflags)0x0004;
	static constexpr _Fmtflags showbase = (_Fmtflags)0x0008;
	static constexpr _Fmtflags showpoint = (_Fmtflags)0x0010;
	static constexpr _Fmtflags showpos = (_Fmtflags)0x0020;
	static constexpr _Fmtflags left = (_Fmtflags)0x0040;
	static constexpr _Fmtflags right = (_Fmtflags)0x0080;
	static constexpr _Fmtflags internal = (_Fmtflags)0x0100;
	static constexpr _Fmtflags dec = (_Fmtflags)0x0200;
	static constexpr _Fmtflags oct = (_Fmtflags)0x0400;
	static constexpr _Fmtflags hex = (_Fmtflags)0x0800;
	static constexpr _Fmtflags scientific = (_Fmtflags)0x1000;
	static constexpr _Fmtflags fixed = (_Fmtflags)0x2000;

	static constexpr _Fmtflags hexfloat =
		(_Fmtflags)0x3000;	

	static constexpr _Fmtflags boolalpha = (_Fmtflags)0x4000;
	static constexpr _Fmtflags _Stdio = (_Fmtflags)0x8000;
	static constexpr _Fmtflags adjustfield = (_Fmtflags)(0x0040
		| 0x0080 | 0x0100);
	static constexpr _Fmtflags basefield = (_Fmtflags)(0x0200
		| 0x0400 | 0x0800);
	static constexpr _Fmtflags floatfield = (_Fmtflags)(0x1000
		| 0x2000);

	enum _Iostate
		{	
		_Statmask = 0x17};

	static constexpr _Iostate goodbit = (_Iostate)0x0;
	static constexpr _Iostate eofbit = (_Iostate)0x1;
	static constexpr _Iostate failbit = (_Iostate)0x2;
	static constexpr _Iostate badbit = (_Iostate)0x4;

	enum _Openmode
		{	
		_Openmask = 0xff};

	static constexpr _Openmode in = (_Openmode)0x01;
	static constexpr _Openmode out = (_Openmode)0x02;
	static constexpr _Openmode ate = (_Openmode)0x04;
	static constexpr _Openmode app = (_Openmode)0x08;
	static constexpr _Openmode trunc = (_Openmode)0x10;
	static constexpr _Openmode _Nocreate = (_Openmode)0x40;
	static constexpr _Openmode _Noreplace = (_Openmode)0x80;
	static constexpr _Openmode binary = (_Openmode)0x20;

	enum _Seekdir
		{	
		_Seekbeg,
		_Seekcur,
		_Seekend
		};

	static constexpr _Seekdir beg = _Seekbeg;
	static constexpr _Seekdir cur = _Seekcur;
	static constexpr _Seekdir end = _Seekend;

	enum
		{	
		_Openprot = 0x40};
	};

template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::skipws;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::unitbuf;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::uppercase;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::showbase;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::showpoint;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::showpos;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::left;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::right;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::internal;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::dec;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::oct;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::hex;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::scientific;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::fixed;

template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags
		_Iosb<_Dummy>::hexfloat;	

template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::boolalpha;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::_Stdio;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::adjustfield;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::basefield;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Fmtflags _Iosb<_Dummy>::floatfield;

template<class _Dummy>
	const typename _Iosb<_Dummy>::_Iostate _Iosb<_Dummy>::goodbit;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Iostate _Iosb<_Dummy>::eofbit;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Iostate _Iosb<_Dummy>::failbit;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Iostate _Iosb<_Dummy>::badbit;

template<class _Dummy>
	const typename _Iosb<_Dummy>::_Openmode _Iosb<_Dummy>::in;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Openmode _Iosb<_Dummy>::out;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Openmode _Iosb<_Dummy>::ate;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Openmode _Iosb<_Dummy>::app;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Openmode _Iosb<_Dummy>::trunc;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Openmode _Iosb<_Dummy>::_Nocreate;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Openmode _Iosb<_Dummy>::_Noreplace;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Openmode _Iosb<_Dummy>::binary;

template<class _Dummy>
	const typename _Iosb<_Dummy>::_Seekdir _Iosb<_Dummy>::beg;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Seekdir _Iosb<_Dummy>::cur;
template<class _Dummy>
	const typename _Iosb<_Dummy>::_Seekdir _Iosb<_Dummy>::end;

		
class __declspec(dllimport) ios_base
	: public _Iosb<int>
	{	
public:
	typedef int fmtflags;
	typedef int iostate;
	typedef int openmode;
	typedef int seekdir;

 
	typedef ::std:: streamoff streamoff;
	typedef ::std:: streampos streampos;
 

	enum event
		{	
		erase_event, imbue_event, copyfmt_event};

	typedef void (__cdecl *event_callback)(event, ios_base&, int);

 
	typedef unsigned int io_state, open_mode, seek_dir;
 

			
	class failure

		: public system_error
		{	
	public:
		explicit failure(const string &_Message,
			const error_code& _Errcode = make_error_code(io_errc::stream))
			: system_error(_Errcode, _Message)
			{	
			}

		explicit failure(const char *_Message,
			const error_code& _Errcode = make_error_code(io_errc::stream))
			: system_error(_Errcode, _Message)
			{	
			}


 

 






		};

			
	class __declspec(dllimport) Init
		{	
	public:
		 Init()
			{	
			_Init_ctor(this);
			}

		 ~Init() noexcept
			{	
			_Init_dtor(this);
			}

	private:
		static  void __cdecl _Init_ctor(Init *);
		static  void __cdecl _Init_dtor(Init *);

		 static int _Init_cnt;	

		static  int& __cdecl _Init_cnt_func();
		};

	explicit  operator bool() const
		{	
		return (!fail());
		}

	bool  operator!() const
		{	
		return (fail());
		}

	void  clear(iostate _State, bool _Reraise)
		{	
		_Mystate = (iostate)(_State & _Statmask);
		if ((_Mystate & _Except) == 0)
			;
		else if (_Reraise)
			throw;
		else if (_Mystate & _Except & badbit)
			throw failure("ios_base::badbit set");
		else if (_Mystate & _Except & failbit)
			throw failure("ios_base::failbit set");
		else
			throw failure("ios_base::eofbit set");
		}

	void  clear(iostate _State = goodbit)
		{	
		clear(_State, false);
		}

 
	void  clear(io_state _State)
		{	
		clear((iostate)_State);
		}
 

	iostate  rdstate() const
		{	
		return (_Mystate);
		}

	void  setstate(iostate _State, bool _Exreraise)
		{	
		if (_State != goodbit)
			clear((iostate)((int)rdstate() | (int)_State), _Exreraise);
		}

	void  setstate(iostate _State)
		{	
		if (_State != goodbit)
			clear((iostate)((int)rdstate() | (int)_State), false);
		}

 
	void  setstate(io_state _State)
		{	
		setstate((iostate)_State);
		}
 

	bool  good() const
		{	
		return (rdstate() == goodbit);
		}

	bool  eof() const
		{	
		return ((int)rdstate() & (int)eofbit);
		}

	bool  fail() const
		{	
		return (((int)rdstate()
			& ((int)badbit | (int)failbit)) != 0);
		}

	bool  bad() const
		{	
		return (((int)rdstate() & (int)badbit) != 0);
		}

	iostate  exceptions() const
		{	
		return (_Except);
		}

	void  exceptions(iostate _Newexcept)
		{	
		_Except = (iostate)((int)_Newexcept & (int)_Statmask);
		clear(_Mystate);
		}

 
	void  exceptions(io_state _State)
		{	
		exceptions((iostate)_State);
		}
 

	fmtflags  flags() const
		{	
		return (_Fmtfl);
		}

	fmtflags  flags(fmtflags _Newfmtflags)
		{	
		fmtflags _Oldfmtflags = _Fmtfl;
		_Fmtfl = (fmtflags)((int)_Newfmtflags & (int)_Fmtmask);
		return (_Oldfmtflags);
		}

	fmtflags  setf(fmtflags _Newfmtflags)
		{	
		ios_base::fmtflags _Oldfmtflags = _Fmtfl;
		_Fmtfl = (fmtflags)((int)_Fmtfl
			| ((int)_Newfmtflags & (int)_Fmtmask));
		return (_Oldfmtflags);
		}

	fmtflags  setf(fmtflags _Newfmtflags, fmtflags _Mask)
		{	
		ios_base::fmtflags _Oldfmtflags = _Fmtfl;
		_Fmtfl = (fmtflags)(((int)_Fmtfl & (int)~_Mask)
			| ((int)_Newfmtflags & (int)_Mask & (int)_Fmtmask));
		return (_Oldfmtflags);
		}

	void  unsetf(fmtflags _Mask)
		{	
		_Fmtfl = (fmtflags)((int)_Fmtfl & (int)~_Mask);
		}

	streamsize  precision() const
		{	
		return (_Prec);
		}

	streamsize  precision(streamsize _Newprecision)
		{	
		streamsize _Oldprecision = _Prec;
		_Prec = _Newprecision;
		return (_Oldprecision);
		}

	streamsize  width() const
		{	
		return (_Wide);
		}

	streamsize  width(streamsize _Newwidth)
		{	
		streamsize _Oldwidth = _Wide;
		_Wide = _Newwidth;
		return (_Oldwidth);
		}

	locale  getloc() const
		{	
		return (*_Ploc);
		}

	locale  imbue(const locale& _Loc)
		{	
		locale _Oldlocale = *_Ploc;
		*_Ploc = _Loc;
		_Callfns(imbue_event);
		return (_Oldlocale);
		}

	static int __cdecl xalloc()
		{	
		{ ::std:: _Lockit _Lock(2);	
			return (_Index++);
		}
		}

	long&  iword(int _Idx)
		{	
		return (_Findarr(_Idx)._Lo);
		}

	void *&  pword(int _Idx)
		{	
		return (_Findarr(_Idx)._Vp);
		}

	void  register_callback(event_callback _Pfn,
		int _Idx)
		{	
		_Calls = new _Fnarray(_Idx, _Pfn, _Calls);
		}

	ios_base&  copyfmt(const ios_base& _Other)
		{	
		if (this != ::std:: addressof(_Other))
			{	
			_Tidy();
			*_Ploc = *_Other._Ploc;
			_Fmtfl = _Other._Fmtfl;
			_Prec = _Other._Prec;
			_Wide = _Other._Wide;
			_Iosarray *_Ptr = _Other._Arr;

			for (_Arr = 0; _Ptr != 0; _Ptr = _Ptr->_Next)
				if (_Ptr->_Lo != 0 || _Ptr->_Vp != 0)
					{	
					iword(_Ptr->_Index) = _Ptr->_Lo;
					pword(_Ptr->_Index) = _Ptr->_Vp;
					}

			for (_Fnarray *_Pfa = _Other._Calls; _Pfa != 0;
				_Pfa = _Pfa->_Next)
				register_callback(_Pfa->_Pfn, _Pfa->_Index);

			_Callfns(copyfmt_event);	
			exceptions(_Other._Except);	
			}
		return (*this);
		}

	static bool __cdecl sync_with_stdio(bool _Newsync = true)
		{	
		{ ::std:: _Lockit _Lock(2);	
			const bool _Oldsync = _Sync;
			_Sync = _Newsync;
			return (_Oldsync);
		}
		}

	void  swap(ios_base& _Right)
		{	
		if (this != ::std:: addressof(_Right))
			{	
			::std:: swap(_Mystate, _Right._Mystate);
			::std:: swap(_Except, _Right._Except);
			::std:: swap(_Fmtfl, _Right._Fmtfl);
			::std:: swap(_Prec, _Right._Prec);
			::std:: swap(_Wide, _Right._Wide);

			::std:: swap(_Arr, _Right._Arr);
			::std:: swap(_Calls, _Right._Calls);
			::std:: swap(_Ploc, _Right._Ploc);
			}
		}

	virtual  ~ios_base() noexcept	
		{	
		_Ios_base_dtor(this);
		}

	static  void __cdecl
		_Addstd(ios_base *);	

	size_t _Stdstr;	

protected:
	 ios_base()
		{	
		}

	void  _Init()
		{	
		_Ploc = 0;
		_Stdstr = 0;
		_Except = goodbit;
		_Fmtfl = (fmtflags)(skipws | dec);
		_Prec = 6;
		_Wide = 0;
		_Arr = 0;
		_Calls = 0;
		clear(goodbit);
		_Ploc = new locale;
		}

private:
			
	struct _Iosarray
		: public _Crt_new_delete
		{	
	public:
		 _Iosarray(int _Idx, _Iosarray *_Link)
			: _Next(_Link), _Index(_Idx), _Lo(0), _Vp(0)
			{	
			}

		_Iosarray *_Next;	
		int _Index;	
		long _Lo;	
		void *_Vp;	
		};

			
	struct _Fnarray
		: public _Crt_new_delete
		{	
		 _Fnarray(int _Idx, event_callback _Pnew, _Fnarray *_Link)
			: _Next(_Link), _Index(_Idx), _Pfn(_Pnew)
			{	
			}

		_Fnarray *_Next;	
		int _Index;	
		event_callback _Pfn;	
		};

	void  _Callfns(event _Ev)
		{	
		for (_Fnarray *_Pfa = _Calls; _Pfa != 0; _Pfa = _Pfa->_Next)
			(*_Pfa->_Pfn)(_Ev, *this, _Pfa->_Index);
		}

	_Iosarray&  _Findarr(int _Idx)
		{	
		_Iosarray *_Ptr1, *_Ptr2;

		for (_Ptr1 = _Arr, _Ptr2 = 0; _Ptr1 != 0; _Ptr1 = _Ptr1->_Next)
			if (_Ptr1->_Index == _Idx)
				return (*_Ptr1);	
			else if (_Ptr2 == 0 && _Ptr1->_Lo == 0 && _Ptr1->_Vp == 0)
				_Ptr2 = _Ptr1;	

		if (_Ptr2 != 0)
			{	
			_Ptr2->_Index = _Idx;
			return (*_Ptr2);
			}

		_Arr = new _Iosarray(_Idx, _Arr);	
		return (*_Arr);
		}

	void  _Tidy()
		{	
		_Callfns(erase_event);
		_Iosarray *_Ptr1, *_Ptr2;

		for (_Ptr1 = _Arr; _Ptr1 != 0; _Ptr1 = _Ptr2)
			{	
			_Ptr2 = _Ptr1->_Next;
			delete _Ptr1;
			}
		_Arr = 0;

		_Fnarray *_Pfa1, *_Pfa2;
		for (_Pfa1 = _Calls; _Pfa1 != 0; _Pfa1 = _Pfa2)
			{	
			_Pfa2 = _Pfa1->_Next;
			delete _Pfa1;
			}
		_Calls = 0;
		}

	iostate _Mystate;	
	iostate _Except;	
	fmtflags _Fmtfl;	
	streamsize _Prec;	
	streamsize _Wide;	
	_Iosarray *_Arr;	
	_Fnarray *_Calls;	
	locale *_Ploc;	

	 static int _Index;
	 static bool _Sync;

	static  void __cdecl
		_Ios_base_dtor(ios_base *);

public:
	ios_base(const ios_base&) = delete;
	ios_base& operator=(const ios_base&) = delete;
	};





}
 
 #pragma warning(pop)
 #pragma pack(pop)









 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
template<class _Elem,
	class _Traits>
	class basic_streambuf
	{	
	typedef basic_streambuf<_Elem, _Traits> _Myt;

protected:
	 basic_streambuf()
		: _Plocale(new locale)
		{	
		_Init();
		}

	 basic_streambuf(_Uninitialized)
		{	
		}

	 basic_streambuf(const _Myt& _Right)
		: _Plocale(new locale(_Right.getloc()))
		{	
		_Init();
		setp(_Right.pbase(), _Right.pptr(), _Right.epptr());
		setg(_Right.eback(), _Right.gptr(), _Right.egptr());
		}

	_Myt&  operator=(const _Myt& _Right)
		{	
		if (this != ::std:: addressof(_Right))
			{	
			setp(_Right.pbase(), _Right.pptr(), _Right.epptr());
			setg(_Right.eback(), _Right.gptr(), _Right.egptr());
			pubimbue(_Right.getloc());
			}
		return (*this);
		}

	void  swap(_Myt& _Right)
		{	
		if (this != ::std:: addressof(_Right))
			{	
			_Elem *_Pfirst0 = pbase();
			_Elem *_Pnext0 = pptr();
			_Elem *_Pend = epptr();
			_Elem *_Gfirst0 = eback();
			_Elem *_Gnext0 = gptr();
			_Elem *_Gend = egptr();

			setp(_Right.pbase(), _Right.pptr(), _Right.epptr());
			_Right.setp(_Pfirst0, _Pnext0, _Pend);

			setg(_Right.eback(), _Right.gptr(), _Right.egptr());
			_Right.setg(_Gfirst0, _Gnext0, _Gend);

			::std:: swap(_Plocale, _Right._Plocale);
			}
		}

public:
	typedef _Elem char_type;
	typedef _Traits traits_type;

	virtual  ~basic_streambuf() noexcept
		{	
		delete _Plocale;
		}

	typedef typename _Traits::int_type int_type;
	typedef typename _Traits::pos_type pos_type;
	typedef typename _Traits::off_type off_type;

	pos_type  pubseekoff(off_type _Off,
		ios_base::seekdir _Way,
		ios_base::openmode _Mode = ios_base::in | ios_base::out)
		{	
		return (seekoff(_Off, _Way, _Mode));
		}

 
	pos_type  pubseekoff(off_type _Off,
		ios_base::seek_dir _Way,
		ios_base::open_mode _Mode)
		{	
		return (pubseekoff(_Off, (ios_base::seekdir)_Way,
			(ios_base::openmode)_Mode));
		}
 

	pos_type  pubseekpos(pos_type _Pos,
		ios_base::openmode _Mode = ios_base::in | ios_base::out)
		{	
		return (seekpos(_Pos, _Mode));
		}

 
	pos_type  pubseekpos(pos_type _Pos,
		ios_base::open_mode _Mode)
		{	
		return (seekpos(_Pos, (ios_base::openmode)_Mode));
		}
 

	_Myt * pubsetbuf(_Elem *_Buffer,
		streamsize _Count)
		{	
		return (setbuf(_Buffer, _Count));
		}

	locale  pubimbue(const locale &_Newlocale)
		{	
		locale _Oldlocale = *_Plocale;
		imbue(_Newlocale);
		*_Plocale = _Newlocale;
		return (_Oldlocale);
		}

	locale  getloc() const
		{	
		return (*_Plocale);
		}

	streamsize  in_avail()
		{	
		streamsize _Res = _Gnavail();
		return (0 < _Res ? _Res : showmanyc());
		}

	int  pubsync()
		{	
		return (sync());
		}

	int_type  sbumpc()
		{	
		return (0 < _Gnavail()
			? _Traits::to_int_type(*_Gninc()) : uflow());
		}

	int_type  sgetc()
		{	
		return (0 < _Gnavail()
			? _Traits::to_int_type(*gptr()) : underflow());
		}

	streamsize  sgetn(_Elem *_Ptr,
		streamsize _Count)
		{	
		return (xsgetn(_Ptr, _Count));
		}

	int_type  snextc()
		{	
		return (1 < _Gnavail()
			? _Traits::to_int_type(*_Gnpreinc())
			: _Traits::eq_int_type(_Traits::eof(), sbumpc())
				? _Traits::eof() : sgetc());
		}

	int_type  sputbackc(_Elem _Ch)
		{	
		return (gptr() != 0 && eback() < gptr()
			&& _Traits::eq(_Ch, gptr()[-1])
			? _Traits::to_int_type(*_Gndec())
			: pbackfail(_Traits::to_int_type(_Ch)));
		}

 
	void  stossc()
		{	
		if (0 < _Gnavail())
			_Gninc();
		else
			uflow();
		}
 

	int_type  sungetc()
		{	
		return (gptr() != 0 && eback() < gptr()
			? _Traits::to_int_type(*_Gndec()) : pbackfail());
		}

	int_type  sputc(_Elem _Ch)
		{	
		return (0 < _Pnavail()
			? _Traits::to_int_type(*_Pninc() = _Ch)
			: overflow(_Traits::to_int_type(_Ch)));
		}

	streamsize  sputn(const _Elem *_Ptr,
		streamsize _Count)
		{	
		return (xsputn(_Ptr, _Count));
		}

	virtual void  _Lock()
		{	
		}

	virtual void  _Unlock()
		{	
		}

protected:
	_Elem * eback() const
		{	
		return (*_IGfirst);
		}

	_Elem * gptr() const
		{	
		return (*_IGnext);
		}

	_Elem * pbase() const
		{	
		return (*_IPfirst);
		}

	_Elem * pptr() const
		{	
		return (*_IPnext);
		}

	_Elem * egptr() const
		{	
		return (*_IGnext + *_IGcount);
		}

	void  gbump(int _Off)
		{	
		*_IGcount -= _Off;
		*_IGnext += _Off;
		}

	void  setg(_Elem *_First, _Elem *_Next, _Elem *_Last)
		{	
		*_IGfirst = _First;
		*_IGnext = _Next;
		*_IGcount = (int)(_Last - _Next);
		}

	_Elem * epptr() const
		{	
		return (*_IPnext + *_IPcount);
		}

	_Elem * _Gndec()
		{	
		++*_IGcount;
		return (--*_IGnext);
		}

	_Elem * _Gninc()
		{	
		--*_IGcount;
		return ((*_IGnext)++);
		}

	_Elem * _Gnpreinc()
		{	
		--*_IGcount;
		return (++(*_IGnext));
		}

	streamsize  _Gnavail() const
		{	
		return (*_IGnext != 0 ? *_IGcount : 0);
		}

	void  pbump(int _Off)
		{	
		*_IPcount -= _Off;
		*_IPnext += _Off;
		}

	void  setp(_Elem *_First, _Elem *_Last)
		{	
		*_IPfirst = _First;
		*_IPnext = _First;
		*_IPcount = (int)(_Last - _First);
		}

	void  setp(_Elem *_First, _Elem *_Next, _Elem *_Last)
		{	
		*_IPfirst = _First;
		*_IPnext = _Next;
		*_IPcount = (int)(_Last - _Next);
		}

	_Elem * _Pninc()
		{	
		--*_IPcount;
		return ((*_IPnext)++);
		}

	streamsize  _Pnavail() const
		{	
		return (*_IPnext != 0 ? *_IPcount : 0);
		}

	void  _Init()
		{	
		_IGfirst = &_Gfirst;
		_IPfirst = &_Pfirst;
		_IGnext = &_Gnext;
		_IPnext = &_Pnext;
		_IGcount = &_Gcount;
		_IPcount = &_Pcount;
		setp(0, 0);
		setg(0, 0, 0);
		}

	void  _Init(_Elem **_Gf, _Elem **_Gn, int *_Gc,
		_Elem **_Pf, _Elem **_Pn, int *_Pc)
		{	
		_IGfirst = _Gf;
		_IPfirst = _Pf;
		_IGnext = _Gn;
		_IPnext = _Pn;
		_IGcount = _Gc;
		_IPcount = _Pc;
		}

	virtual int_type  overflow(int_type = _Traits::eof())
		{	
		return (_Traits::eof());
		}

	virtual int_type  pbackfail(int_type = _Traits::eof())
		{	
		return (_Traits::eof());
		}

	virtual streamsize  showmanyc()
		{	
		return (0);
		}

	virtual int_type  underflow()
		{	
		return (_Traits::eof());
		}

	virtual int_type  uflow()
		{	
		return (_Traits::eq_int_type(_Traits::eof(), underflow())
			? _Traits::eof() : _Traits::to_int_type(*_Gninc()));
		}

	virtual streamsize  xsgetn(_Elem * _Ptr,
		streamsize _Count)
		{	
		int_type _Meta;
		streamsize _Size, _Copied;

		for (_Copied = 0; 0 < _Count; )
			if (0 < (_Size = _Gnavail()))
				{	
				if (_Count < _Size)
					_Size = _Count;
				_Traits::copy(_Ptr, gptr(), (size_t)_Size);
				_Ptr += _Size;
				_Copied += _Size;
				_Count -= _Size;
				gbump((int)_Size);
				}
			else if (_Traits::eq_int_type(_Traits::eof(), _Meta = uflow()))
				break;	
			else
				{	
				*_Ptr++ = _Traits::to_char_type(_Meta);
				++_Copied;
				--_Count;
				}

		return (_Copied);
		}

	virtual streamsize  xsputn(const _Elem *_Ptr,
		streamsize _Count)
		{	
		streamsize _Size, _Copied;

		for (_Copied = 0; 0 < _Count; )
			if (0 < (_Size = _Pnavail()))
				{	
				if (_Count < _Size)
					_Size = _Count;
				_Traits::copy(pptr(), _Ptr, (size_t)_Size);
				_Ptr += _Size;
				_Copied += _Size;
				_Count -= _Size;
				pbump((int)_Size);
				}
			else if (_Traits::eq_int_type(_Traits::eof(),
				overflow(_Traits::to_int_type(*_Ptr))))
				break;	
			else
				{	
				++_Ptr;
				++_Copied;
				--_Count;
				}

		return (_Copied);
		}

	virtual pos_type  seekoff(off_type,
		ios_base::seekdir,
		ios_base::openmode = ios_base::in | ios_base::out)
		{	
		return (streampos(_BADOFF));
		}

	virtual pos_type  seekpos(pos_type,
		ios_base::openmode = ios_base::in | ios_base::out)
		{	
		return (streampos(_BADOFF));
		}

	virtual _Myt * setbuf(_Elem *, streamsize)
		{	
		return (this);
		}

	virtual int  sync()
		{	
		return (0);
		}

	virtual void  imbue(const locale&)
		{	
		}

private:
	_Elem *_Gfirst;	
	_Elem *_Pfirst;	
	_Elem **_IGfirst;	
	_Elem **_IPfirst;	
	_Elem *_Gnext;	
	_Elem *_Pnext;	
	_Elem **_IGnext;	
	_Elem **_IPnext;	

	int _Gcount;	
	int _Pcount;	
	int *_IGcount;	
	int *_IPcount;	

protected:
	locale *_Plocale;	
	};

 

  
template class __declspec(dllimport) basic_streambuf<char, char_traits<char> >;
template class __declspec(dllimport) basic_streambuf<wchar_t, char_traits<wchar_t> >;
  

  



 

		
template<class _Elem,
	class _Traits>
	class istreambuf_iterator
		: public iterator<input_iterator_tag,
			_Elem, typename _Traits::off_type, const _Elem *, _Elem>
	{	
	typedef istreambuf_iterator<_Elem, _Traits> _Myt;
public:
	typedef _Elem char_type;
	typedef _Traits traits_type;
	typedef basic_streambuf<_Elem, _Traits> streambuf_type;
	typedef basic_istream<_Elem, _Traits> istream_type;

	typedef typename traits_type::int_type int_type;
	typedef const _Elem *pointer;

	constexpr istreambuf_iterator(streambuf_type *_Sb = 0) noexcept
		: _Strbuf(_Sb), _Got(_Sb == 0), _Val()
		{	
		}

	istreambuf_iterator(istream_type& _Istr) noexcept
		: _Strbuf(_Istr.rdbuf()), _Got(_Istr.rdbuf() == 0)
		{	
		}

	_Elem operator*() const
		{	
		if (!_Got)
			_Peek();

 






		return (_Val);
		}

	const _Elem *operator->() const
		{	
		return (pointer_traits<pointer>::pointer_to(**this));
		}

	_Myt& operator++()
		{	
 






		_Inc();
		return (*this);
		}

	_Myt operator++(int)
		{	
		if (!_Got)
			_Peek();
		_Myt _Tmp = *this;
		++*this;
		return (_Tmp);
		}

	bool equal(const _Myt& _Right) const
		{	
		if (!_Got)
			_Peek();
		if (!_Right._Got)
			_Right._Peek();
		return ((_Strbuf == 0 && _Right._Strbuf == 0)
			|| (_Strbuf != 0 && _Right._Strbuf != 0));
		}

private:
	void _Inc()
		{	
		if (_Strbuf == 0
			|| traits_type::eq_int_type(traits_type::eof(),
				_Strbuf->sbumpc()))
			{
			_Strbuf = 0;
			_Got = true;
			}
		else
			{
			_Got = false;
			}
		}

	_Elem _Peek() const
		{	
		int_type _Meta;
		if (_Strbuf == 0
			|| traits_type::eq_int_type(traits_type::eof(),
				_Meta = _Strbuf->sgetc()))
			_Strbuf = 0;
		else
			_Val = traits_type::to_char_type(_Meta);
		_Got = true;
		return (_Val);
		}

	mutable streambuf_type *_Strbuf;	
	mutable bool _Got;	
	mutable _Elem _Val;	
	};

template<class _Elem,
	class _Traits>
	struct _Is_checked_helper<istreambuf_iterator<_Elem, _Traits> >
		: public true_type
	{	
	};

		
template<class _Elem,
	class _Traits> inline
	bool  operator==(
		const istreambuf_iterator<_Elem, _Traits>& _Left,
		const istreambuf_iterator<_Elem, _Traits>& _Right)
	{	
	return (_Left.equal(_Right));
	}

template<class _Elem,
	class _Traits> inline
	bool  operator!=(
		const istreambuf_iterator<_Elem, _Traits>& _Left,
		const istreambuf_iterator<_Elem, _Traits>& _Right)
	{	
	return (!(_Left == _Right));
	}

		
template<class _Elem,
	class _Traits>
	class ostreambuf_iterator
		: public _Outit
	{	
	typedef ostreambuf_iterator<_Elem, _Traits> _Myt;
public:
	typedef _Elem char_type;
	typedef _Traits traits_type;
	typedef basic_streambuf<_Elem, _Traits> streambuf_type;
	typedef basic_ostream<_Elem, _Traits> ostream_type;

	ostreambuf_iterator(streambuf_type *_Sb) noexcept
		: _Failed(false), _Strbuf(_Sb)
		{	
		}

	ostreambuf_iterator(ostream_type& _Ostr) noexcept
		: _Failed(false), _Strbuf(_Ostr.rdbuf())
		{	
		}

	_Myt& operator=(_Elem _Right)
		{	
		if (_Strbuf == 0
			|| traits_type::eq_int_type(_Traits::eof(),
				_Strbuf->sputc(_Right)))
			_Failed = true;
		return (*this);
		}

	_Myt& operator*()
		{	
		return (*this);
		}

	_Myt& operator++()
		{	
		return (*this);
		}

	_Myt& operator++(int)
		{	
		return (*this);
		}

	bool failed() const noexcept
		{	
		return (_Failed);
		}

private:
	bool _Failed;	
	streambuf_type *_Strbuf;	
	};

template<class _Elem,
	class _Traits>
	struct _Is_checked_helper<ostreambuf_iterator<_Elem, _Traits> >
		: public true_type
	{	
	};
}

 
 #pragma warning(pop)
 #pragma pack(pop)









 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

		

 
extern "C" {
 

extern __declspec(dllimport) float __cdecl _Stofx(const char *,
	    char **,
	long, int *);
extern __declspec(dllimport) double __cdecl _Stodx(const char *,
	    char **,
	long, int *);
extern __declspec(dllimport) long double __cdecl _Stoldx(const char *,
	    char **,
	long, int *);
extern __declspec(dllimport) long __cdecl _Stolx(const char *,
	    char **,
	int, int *);
extern __declspec(dllimport) unsigned long __cdecl _Stoulx(const char *,
	    char **,
	int, int *);
extern __declspec(dllimport) long long __cdecl _Stollx(const char *,
	    char **,
	int, int *);
extern __declspec(dllimport) unsigned long long __cdecl _Stoullx(const char *,
	    char **,
	int, int *);

 
}
 

namespace std {

	
inline double _Stodx_v2(const char *_Str, char **_Endptr, int _Pten, int *_Perr)
	{	
	int& _Errno_ref = (*_errno());	
	const int _Orig = _Errno_ref;

	_Errno_ref = 0;
	double _Val = :: strtod(_Str, _Endptr);
	*_Perr = _Errno_ref;
	_Errno_ref = _Orig;

	if (_Pten != 0)
		_Val *= :: pow(10.0, static_cast<double>(_Pten));

	return (_Val);
	}

	
inline float _Stofx_v2(const char *_Str, char **_Endptr, int _Pten, int *_Perr)
	{	
	int& _Errno_ref = (*_errno());	
	const int _Orig = _Errno_ref;

	_Errno_ref = 0;
	float _Val = :: strtof(_Str, _Endptr);
	*_Perr = _Errno_ref;
	_Errno_ref = _Orig;

	if (_Pten != 0)
		_Val *= :: powf(10.0f, static_cast<float>(_Pten));

	return (_Val);
	}


template<class _Elem> inline
	size_t _Find_elem(_Elem *_Base, _Elem _Ch)
	{	
	_Elem *_Ptr = _Base;
	for (; *_Ptr != (_Elem)0 && *_Ptr != _Ch; ++_Ptr)
		;
	return ((size_t)(_Ptr - _Base));
	}

inline wchar_t *_Maklocwcs(const wchar_t *_Ptr)
	{	
	size_t _Count = :: wcslen(_Ptr) + 1;

	wchar_t *_Ptrdest = (wchar_t *)calloc(_Count, sizeof (wchar_t));

	if (!_Ptrdest)
		_Xbad_alloc();
	:: wmemcpy(_Ptrdest, _Ptr, _Count);
	return (_Ptrdest);
	}

		
template<class _Elem>
	class numpunct
		: public locale::facet
	{	
public:
	typedef basic_string<_Elem, char_traits<_Elem>, allocator<_Elem> >
		string_type;
	typedef _Elem char_type;

	 __declspec(dllimport) static locale::id id;	

	_Elem decimal_point() const
		{	
		return (do_decimal_point());
		}

	_Elem thousands_sep() const
		{	
		return (do_thousands_sep());
		}

	string grouping() const
		{	
		return (do_grouping());
		}

	string_type falsename() const
		{	
		return (do_falsename());
		}

	string_type truename() const
		{	
		return (do_truename());
		}

	explicit numpunct(size_t _Refs = 0)
		: locale::facet(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
			if (_Kseparator == 0)
				_Kseparator =	
					_Maklocchr(',', (_Elem *)0, _Lobj._Getcvt());
		}
		}

	numpunct(const _Locinfo& _Lobj, size_t _Refs = 0, bool _Isdef = false)
		: locale::facet(_Refs)
		{	
		_Init(_Lobj, _Isdef);
		}

	static size_t _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new numpunct<_Elem>(
				_Locinfo(_Ploc->c_str()), 0, true);
		return (4);
		}

protected:
	virtual  ~numpunct() noexcept
		{	
		_Tidy();
		}

	numpunct(const char *_Locname, size_t _Refs = 0, bool _Isdef = false)
		: locale::facet(_Refs)
		{	
		{ _Locinfo _Lobj(_Locname);
			_Init(_Lobj, _Isdef);
		}
		}

	template<class _Elem2>
		void _Getvals(_Elem2, const lconv *_Ptr, _Locinfo::_Cvtvec _Cvt)
		{	
		_Dp = _Maklocchr(_Ptr->decimal_point[0], (_Elem2 *)0, _Cvt);
		_Kseparator = _Maklocchr(_Ptr->thousands_sep[0], (_Elem2 *)0, _Cvt);
		}

	template<>
		void _Getvals(wchar_t, const lconv *_Ptr, _Locinfo::_Cvtvec)
		{	
		_Dp = (_Elem)_Ptr->_W_decimal_point[0];
		_Kseparator = (_Elem)_Ptr->_W_thousands_sep[0];
		}

	void _Init(const _Locinfo& _Lobj, bool _Isdef = false)
		{	
		const lconv *_Ptr = _Lobj._Getlconv();
		_Locinfo::_Cvtvec _Cvt = _Lobj._Getcvt();	

		_Grouping = 0;
		_Falsename = 0;
		_Truename = 0;

		try {
		_Grouping = _Maklocstr(_Isdef ? "" : _Ptr->grouping, (char *)0, _Lobj._Getcvt());
		_Falsename = _Maklocstr(_Lobj._Getfalse(), (_Elem *)0, _Cvt);
		_Truename = _Maklocstr(_Lobj._Gettrue(), (_Elem *)0, _Cvt);
		} catch (...) {
		_Tidy();
		throw;
		}

		if (_Isdef)
			{	

			_Dp = _Maklocchr('.', (_Elem *)0, _Cvt);
			_Kseparator = _Maklocchr(',', (_Elem *)0, _Cvt);
			}
		else
			_Getvals((_Elem)0, _Ptr, _Cvt);
		}

	virtual _Elem  do_decimal_point() const
		{	
		return (_Dp);
		}

	virtual _Elem  do_thousands_sep() const
		{	
		return (_Kseparator);
		}

	virtual string  do_grouping() const
		{	
		return (string(_Grouping));
		}

	virtual string_type  do_falsename() const
		{	
		return (string_type(_Falsename));
		}

	virtual string_type  do_truename() const
		{	
		return (string_type(_Truename));
		}

private:
	void _Tidy()
		{	
		:: free((void *)_Grouping);
		:: free((void *)_Falsename);
		:: free((void *)_Truename);
		}

	const char *_Grouping;	
	_Elem _Dp;	
	_Elem _Kseparator;	
	const _Elem *_Falsename;	
	const _Elem *_Truename;	
	};

		
template<class _Elem>
	class numpunct_byname
		: public numpunct<_Elem>
	{	
public:
	explicit numpunct_byname(const char *_Locname, size_t _Refs = 0)
		: numpunct<_Elem>(_Locname, _Refs)
		{	
		}

	explicit numpunct_byname(const string& _Str, size_t _Refs = 0)
		: numpunct<_Elem>(_Str.c_str(), _Refs)
		{	
		}

protected:
	virtual  ~numpunct_byname() noexcept
		{	
		}
	};

		
template<class _Elem>
	 locale::id numpunct<_Elem>::id;

		
template<class _Elem,
	class _InIt = istreambuf_iterator<_Elem, char_traits<_Elem> > >
	class num_get
		: public locale::facet
	{	
public:
	typedef numpunct<_Elem> _Mypunct;
	typedef basic_string<_Elem, char_traits<_Elem>, allocator<_Elem> >
		_Mystr;

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new num_get<_Elem, _InIt>(
				_Locinfo(_Ploc->c_str()));
		return (4);
		}

	 static locale::id id;	

protected:
	virtual  ~num_get() noexcept
		{	
		}

	void _Init(const _Locinfo&)
		{	
		}

public:
	explicit  num_get(size_t _Refs = 0)
		: locale::facet(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 num_get(const _Locinfo& _Lobj, size_t _Refs = 0)
		: locale::facet(_Refs)
		{	
		_Init(_Lobj);
		}

	typedef _Elem char_type;
	typedef _InIt iter_type;

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			bool& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			unsigned short& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			unsigned int& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			long& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			unsigned long& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			long long& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			unsigned long long& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			float& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			double& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			long double& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

	_InIt  get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			void *& _Val) const
		{	
		return (do_get(_First, _Last, _Iosbase, _State, _Val));
		}

protected:
	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			bool& _Val) const
		{	
		;
		int _Ans = -1;	

		if (_Iosbase.flags() & ios_base::boolalpha)
			{	
			typedef typename _Mystr::size_type _Mystrsize;
			const _Mypunct& _Punct_fac = use_facet< _Mypunct >(_Iosbase.getloc());
			_Mystr _Str((_Mystrsize)1, (char_type)0);
			_Str += _Punct_fac.falsename();
			_Str += (char_type)0;
			_Str += _Punct_fac.truename();	
			_Ans = _Getloctxt(_First, _Last, (size_t)2, _Str.c_str());
			}
		else
			{	
			char _Ac[32], *_Ep;
			int _Errno = 0;
			const unsigned long _Ulo = :: _Stoulx(_Ac, &_Ep,
				_Getifld(_Ac, _First, _Last, _Iosbase.flags(),
					_Iosbase.getloc()), &_Errno);
			if (_Ep != _Ac && _Errno == 0 && _Ulo <= 1)
				_Ans = _Ulo;
			}

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ans < 0)
			_State |= ios_base::failbit;
		else
			_Val = _Ans != 0;	
		return (_First);
		}

	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			unsigned short& _Val) const
		{	
		;
		char _Ac[32], *_Ep;
		int _Errno = 0;
		int _Base = _Getifld(_Ac, _First, _Last, _Iosbase.flags(),
			_Iosbase.getloc());	
		char *_Ptr = _Ac[0] == '-' ? _Ac + 1 : _Ac;	
		const unsigned long _Ans =
			:: _Stoulx(_Ptr, &_Ep, _Base, &_Errno);	

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ptr || _Errno != 0 || 0xffff < _Ans)
			_State |= ios_base::failbit;
		else
			_Val = (unsigned short)(_Ac[0] == '-'
				? 0 -_Ans : _Ans);	
		return (_First);
		}

	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			unsigned int& _Val) const
		{	
		;
		char _Ac[32], *_Ep;
		int _Errno = 0;
		int _Base = _Getifld(_Ac, _First, _Last, _Iosbase.flags(),
			_Iosbase.getloc());	
		char *_Ptr = _Ac[0] == '-' ? _Ac + 1 : _Ac;	
		const unsigned long _Ans =
			:: _Stoulx(_Ptr, &_Ep, _Base, &_Errno);	

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ptr || _Errno != 0 || 0xffffffff < _Ans)
			_State |= ios_base::failbit;
		else
			_Val = _Ac[0] == '-' ? 0 -_Ans : _Ans;	
		return (_First);
		}

	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			long& _Val) const
		{	
		;
		char _Ac[32], *_Ep;
		int _Errno = 0;
		const long _Ans = :: _Stolx(_Ac, &_Ep,
			_Getifld(_Ac, _First, _Last, _Iosbase.flags(),
				_Iosbase.getloc()), &_Errno);	

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ac || _Errno != 0)
			_State |= ios_base::failbit;
		else
			_Val = _Ans;	
		return (_First);
		}

	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			unsigned long& _Val) const
		{	
		;
		char _Ac[32], *_Ep;
		int _Errno = 0;
		const unsigned long _Ans = :: _Stoulx(_Ac, &_Ep,
			_Getifld(_Ac, _First, _Last, _Iosbase.flags(),
				_Iosbase.getloc()), &_Errno);	

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ac || _Errno != 0)
			_State |= ios_base::failbit;
		else
			_Val = _Ans;	
		return (_First);
		}

	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			long long& _Val) const
		{	
		;
		char _Ac[32], *_Ep;
		int _Errno = 0;
		const long long _Ans = :: _Stollx(_Ac, &_Ep,
			_Getifld(_Ac, _First, _Last, _Iosbase.flags(),
				_Iosbase.getloc()), &_Errno);	

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ac || _Errno != 0)
			_State |= ios_base::failbit;
		else
			_Val = _Ans;	
		return (_First);
		}

	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			unsigned long long& _Val) const
		{	
		;
		char _Ac[32], *_Ep;
		int _Errno = 0;
		const unsigned long long _Ans = :: _Stoullx(_Ac, &_Ep,
			_Getifld(_Ac, _First, _Last, _Iosbase.flags(),
				_Iosbase.getloc()), &_Errno);	

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ac || _Errno != 0)
			_State |= ios_base::failbit;
		else
			_Val = _Ans;	
		return (_First);
		}







	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			float& _Val) const
		{	
		;
		char _Ac[(8 + 768 + 16)], *_Ep;
		int _Errno = 0;
		int _Hexexp = 1000000000;
		float _Ans = _Stofx_v2(_Ac, &_Ep,
			_Getffld(_Ac, _First, _Last,
				_Iosbase, &_Hexexp), &_Errno);	

		if (_Hexexp != 1000000000 && _Hexexp != 0)
			_Ans = :: ldexpf(_Ans, 4 * _Hexexp);

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ac || _Errno != 0)
			_State |= ios_base::failbit;
		else
			_Val = _Ans;	
		return (_First);
		}

	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			double& _Val) const
		{	
		;
		char _Ac[(8 + 768 + 16)], *_Ep;
		int _Errno = 0;
		int _Hexexp = 1000000000;
		double _Ans = _Stodx_v2(_Ac, &_Ep,
			_Getffld(_Ac, _First, _Last,
				_Iosbase, &_Hexexp), &_Errno);	

		if (_Hexexp != 1000000000 && _Hexexp != 0)
			_Ans = :: ldexp(_Ans, 4 * _Hexexp);

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ac || _Errno != 0)
			_State |= ios_base::failbit;
		else
			_Val = _Ans;	
		return (_First);
		}

	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			long double& _Val) const
		{	
		;
		char _Ac[(8 + 768 + 16)], *_Ep;
		int _Errno = 0;
		int _Hexexp = 1000000000;
		long double _Ans = _Stodx_v2(_Ac, &_Ep,
			_Getffld(_Ac, _First, _Last,
				_Iosbase, &_Hexexp), &_Errno);	

		if (_Hexexp != 1000000000 && _Hexexp != 0)
			_Ans = :: ldexpl(_Ans, 4 * _Hexexp);

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ac || _Errno != 0)
			_State |= ios_base::failbit;
		else
			_Val = _Ans;	
		return (_First);
		}



	virtual _InIt  do_get(_InIt _First, _InIt _Last,
		ios_base& _Iosbase, ios_base::iostate& _State,
			void *& _Val) const
		{	
		;
		char _Ac[32], *_Ep;
		int _Errno = 0;

		int _Base = _Getifld(_Ac, _First, _Last, ios_base::hex,
			_Iosbase.getloc());	
		const unsigned long long _Ans =
			(sizeof (void *) == sizeof (unsigned long))
				? (unsigned long long):: _Stoulx(_Ac, &_Ep, _Base, &_Errno)
				: :: _Stoullx(_Ac, &_Ep, _Base, &_Errno);

		if (_First == _Last)
			_State |= ios_base::eofbit;
		if (_Ep == _Ac || _Errno != 0)
			_State |= ios_base::failbit;
		else
			_Val = (void *)((char *)0 + _Ans);	
		return (_First);
		}

private:
	int __cdecl _Getifld(char *_Ac,
		_InIt& _First, _InIt& _Last, ios_base::fmtflags _Basefield,
			const locale& _Loc) const
		{	
		const _Mypunct& _Punct_fac = use_facet< _Mypunct >(_Loc);
		const string _Grouping = _Punct_fac.grouping();
		const _Elem _Kseparator = _Grouping.size() == 0
			? (_Elem)0 : _Punct_fac.thousands_sep();

		enum {
			_NUMGET_SIGNOFF = 22,
			_NUMGET_XOFF = 24};
		static constexpr char _Src[] = {"0123456789ABCDEFabcdef-+Xx"};
		_Elem _Atoms[sizeof (_Src)];
		const ctype<_Elem>& _Ctype_fac =
			use_facet< ctype<_Elem> >(_Loc);
		_Ctype_fac.widen(&_Src[0], &_Src[sizeof (_Src)], _Atoms);

		char *_Ptr = _Ac;

		if (_First == _Last)
			;	
		else if (*_First == _Atoms[_NUMGET_SIGNOFF + 1])
			{	
			*_Ptr++ = '+';
			++_First;
			}
		else if (*_First == _Atoms[_NUMGET_SIGNOFF])
			{	
			*_Ptr++ = '-';
			++_First;
			}

		_Basefield &= ios_base::basefield;
		int _Base = _Basefield == ios_base::oct ? 8
			: _Basefield == ios_base::hex ? 16
			: _Basefield == ios_base::_Fmtzero ? 0 : 10;

		bool _Seendigit = false;	
		bool _Nonzero = false;	

		if (_First != _Last && *_First == _Atoms[0])
			{	
			_Seendigit = true;
			++_First;
			if (_First != _Last && (*_First == _Atoms[_NUMGET_XOFF + 1]
					|| *_First == _Atoms[_NUMGET_XOFF])
				&& (_Base == 0 || _Base == 16))
				{
				_Base = 16;
				_Seendigit = false;
				++_First;
				}
			else if (_Base == 0)
				{
				_Base = 8;
				}
			}

		size_t _Dlen = _Base == 0 || _Base == 10 ? 10
			: _Base == 8 ? 8 : 16 + 6;
		string _Groups((size_t)1, (char)_Seendigit);
		size_t _Group = 0;

		for (char *const _Pe = &_Ac[32 - 1];
			_First != _Last; ++_First)
			{	
			size_t _Idx = _Find_elem(_Atoms, *_First);
			if (_Idx < _Dlen)
				{	
				*_Ptr = _Src[_Idx];
				if ((_Nonzero || *_Ptr != '0') && _Ptr < _Pe)
					{
					++_Ptr;
					_Nonzero = true;
					}

				_Seendigit = true;
				if (_Groups[_Group] != 127)
					++_Groups[_Group];
				}
			else if (_Groups[_Group] == '\0'
				|| _Kseparator == (_Elem)0
				|| *_First != _Kseparator)
				break;	
			else
				{	
				_Groups.append((string::size_type)1, '\0');
				++_Group;
				}
			}

		if (_Group == 0)
			;	
		else if ('\0' < _Groups[_Group])
			++_Group;	
		else
			_Seendigit = false;	

		for (const char *_Pg = &_Grouping[0]; _Seendigit && 0 < _Group; )
			if (*_Pg == 127)
				break;	
			else if ((0 < --_Group && *_Pg != _Groups[_Group])
				|| (0 == _Group && *_Pg < _Groups[_Group]))
				_Seendigit = false;	
			else if ('\0' < _Pg[1])
				++_Pg;	

		if (_Seendigit && !_Nonzero)
			*_Ptr++ = '0';	
		else if (!_Seendigit)
			_Ptr = _Ac;	
		*_Ptr = '\0';
		return (_Base);
		}

	int __cdecl _Getffld(char *_Ac,
		_InIt& _First, _InIt &_Last,
		ios_base& _Iosbase, int *_Phexexp) const
		{	
		if ((_Iosbase.flags() & ios_base::floatfield) == ios_base::hexfloat)
			return (_Getffldx(_Ac, _First, _Last,
				_Iosbase, _Phexexp));	

		const _Mypunct& _Punct_fac = use_facet< _Mypunct >(_Iosbase.getloc());
		const string _Grouping = _Punct_fac.grouping();
		char *_Ptr = _Ac;
		bool _Bad = false;
		bool _Sticky = false;

		enum {
			_NUMGET_SIGNOFF = 10,
			_NUMGET_EOFF = 12};
		static constexpr char _Src[] = {"0123456789-+Ee"};
		_Elem _Atoms[sizeof (_Src)];
		const ctype<_Elem>& _Ctype_fac =
			use_facet< ctype<_Elem> >(_Iosbase.getloc());
		_Ctype_fac.widen(&_Src[0], &_Src[sizeof (_Src)], _Atoms);

		if (_First == _Last)
			;	
		else if (*_First == _Atoms[_NUMGET_SIGNOFF + 1])
			{	
			*_Ptr++ = '+';
			++_First;
			}
		else if (*_First == _Atoms[_NUMGET_SIGNOFF])
			{	
			*_Ptr++ = '-';
			++_First;
			}

		char *_Leading = _Ptr;	
		*_Ptr++ = '0';	

		bool _Seendigit = false;	
		int _Significant = 0;	
		int _Pten = 0;	
		size_t _Idx;

		const int _Max_sig_dig = (*_Phexexp == 1000000000 ? 768 : 36);

		const char *_Pg = &_Grouping[0];
		if (*_Pg == 127 || *_Pg <= '\0')
			for (; _First != _Last
				&& (_Idx = _Find_elem(_Atoms, *_First)) < 10;
					_Seendigit = true, (void)++_First)
				if (_Max_sig_dig <= _Significant)
					{	
					++_Pten;
					if (0 < _Idx)
						_Sticky = true;
					}
				else if (_Idx == 0 && _Significant == 0)
					;	
				else
					{	
					*_Ptr++ = _Src[_Idx];
					++_Significant;
					}
		else
			{	
			const _Elem _Kseparator = _Grouping.size() == 0
				? (_Elem)0 : _Punct_fac.thousands_sep();
			string _Groups((size_t)1, '\0');
			size_t _Group = 0;

			for (; _First != _Last; ++_First)
				if ((_Idx = _Find_elem(_Atoms, *_First)) < 10)
					{	
					_Seendigit = true;
					if (_Max_sig_dig <= _Significant)
						{	
						++_Pten;
						if (0 < _Idx)
							_Sticky = true;
						}
					else if (_Idx == 0 && _Significant == 0)
						;	
					else
						{	
						*_Ptr++ = _Src[_Idx];
						++_Significant;
						}
					if (_Groups[_Group] != 127)
						++_Groups[_Group];
					}
				else if (_Groups[_Group] == '\0'
					|| _Kseparator == (_Elem)0
					|| *_First != _Kseparator)
					break;	
				else
					{	
					_Groups.append((size_t)1, '\0');
					++_Group;
					}
			if (_Group == 0)
				;	
			else if ('\0' < _Groups[_Group])
				++_Group;	
			else
				_Bad = true;	

			while (!_Bad && 0 < _Group)
				if (*_Pg == 127)
					break;	
				else if ((0 < --_Group && *_Pg != _Groups[_Group])
					|| (0 == _Group && *_Pg < _Groups[_Group]))
					_Bad = true;	
				else if ('\0' < _Pg[1])
					++_Pg;	
			}

		if (_First != _Last && *_First == _Punct_fac.decimal_point())
			{	
			*_Ptr++ = localeconv()->decimal_point[0];
			++_First;
			}

		if (*_Phexexp != 1000000000 && _Significant == 0)
			{	
			for (; _First != _Last && *_First == _Atoms[0];
				_Seendigit = true, (void)++_First)
				--_Pten;	
			if (_Pten < 0)
				{	
				*_Ptr++ = '0';
				++_Pten;
				}
			}

		for (; _First != _Last
				&& (_Idx = _Find_elem(_Atoms, *_First)) < 10;
				_Seendigit = true, (void)++_First)
			if (_Significant < _Max_sig_dig)
				{	
				*_Ptr++ = _Src[_Idx];
				++_Significant;
				}
			else if (0 < _Idx)
				_Sticky = true;	

		if (_Sticky)
			{	
			char *_Px = _Ptr;
			for (; --_Px != _Leading; )
				{	
				if (*_Px == localeconv()->decimal_point[0])
					;	
				else if (*_Px != '9')
					{	
					++*_Px;
					break;
					}
				else
					*_Px = '0';	
				}

			if (_Px == _Leading)
				{	
				*_Px = '1';
				++_Pten;
				}
			}

		if (_Seendigit && _First != _Last
			&& (*_First == _Atoms[_NUMGET_EOFF + 1]
				|| *_First == _Atoms[_NUMGET_EOFF]))
			{	
			*_Ptr++ = 'e';
			++_First;
			_Seendigit = false;
			_Significant = 0;

			if (_First == _Last)
				;	
			else if (*_First == _Atoms[_NUMGET_SIGNOFF + 1])
				{	
				*_Ptr++ = '+';
				++_First;
				}
			else if (*_First == _Atoms[_NUMGET_SIGNOFF])
				{	
				*_Ptr++ = '-';
				++_First;
				}

			for (; _First != _Last && *_First == _Atoms[0]; ++_First)
				{	
				_Seendigit = true;
				}

			if (_Seendigit)
				*_Ptr++ = '0';	
			for (; _First != _Last
				&& (_Idx = _Find_elem(_Atoms, *_First)) < 10;
				_Seendigit = true, (void)++_First)
				if (_Significant < 8)
					{	
					*_Ptr++ = _Src[_Idx];
					++_Significant;
					}
			}

		if (_Bad || !_Seendigit)
			_Ptr = _Ac;	
		*_Ptr = '\0';
		return (_Pten);
		}

	int __cdecl _Getffldx(char *_Ac,
		_InIt& _First, _InIt &_Last,
		ios_base& _Iosbase, int *_Phexexp) const
		{	
		const _Mypunct& _Punct_fac = use_facet< _Mypunct >(_Iosbase.getloc());
		const string _Grouping = _Punct_fac.grouping();

		enum {
			_NUMGET_SIGNOFF = 22,
			_NUMGET_XOFF = 24,
			_NUMGET_POFF = 26};
		static constexpr char _Src[] = {"0123456789ABCDEFabcdef-+XxPp"};
		_Elem _Atoms[sizeof (_Src)];
		const ctype<_Elem>& _Ctype_fac =
			use_facet< ctype<_Elem> >(_Iosbase.getloc());
		_Ctype_fac.widen(&_Src[0], &_Src[sizeof (_Src)], _Atoms);

		char *_Ptr = _Ac;
		bool _Bad = false;
		size_t _Idx;

		if (_First == _Last)
			;	
		else if (*_First == _Atoms[_NUMGET_SIGNOFF + 1])
			{	
			*_Ptr++ = '+';
			++_First;
			}
		else if (*_First == _Atoms[_NUMGET_SIGNOFF])
			{	
			*_Ptr++ = '-';
			++_First;
			}

		*_Ptr++ = '0';
		*_Ptr++ = 'x';

		bool _Seendigit = false;	
		int _Significant = 0;	
		int _Phex = 0;	

		if (_First == _Last || *_First != _Atoms[0])
			;
		else if (++_First != _Last
			&& (*_First == _Atoms[_NUMGET_XOFF + 1]
				|| *_First == _Atoms[_NUMGET_XOFF]))
			++_First;	
		else
			_Seendigit = true;	

		const int _Max_sig_dig = (*_Phexexp == 1000000000 ? 768 : 36);

		const char *_Pg = &_Grouping[0];
		if (*_Pg == 127 || *_Pg <= '\0')
			for (; _First != _Last
				&& (_Idx = _Find_elem(_Atoms, *_First)) < _NUMGET_SIGNOFF;
					_Seendigit = true, (void)++_First)
				if (_Max_sig_dig <= _Significant)
					++_Phex;	
				else if (_Idx == 0 && _Significant == 0)
					;	
				else
					{	
					*_Ptr++ = _Src[_Idx];
					++_Significant;
					}
		else
			{	
			const _Elem _Kseparator = _Grouping.size() == 0
				? (_Elem)0 : _Punct_fac.thousands_sep();
			string _Groups((size_t)1, '\0');
			size_t _Group = 0;

			for (; _First != _Last; ++_First)
				if ((_Idx = _Find_elem(_Atoms, *_First)) < _NUMGET_SIGNOFF)
					{	
					_Seendigit = true;
					if (_Max_sig_dig <= _Significant)
						++_Phex;	
					else if (_Idx == 0 && _Significant == 0)
						;	
					else
						{	
						*_Ptr++ = _Src[_Idx];
						++_Significant;
						}
					if (_Groups[_Group] != 127)
						++_Groups[_Group];
					}
				else if (_Groups[_Group] == '\0'
					|| _Kseparator == (_Elem)0
					|| *_First != _Kseparator)
					break;	
				else
					{	
					_Groups.append((size_t)1, '\0');
					++_Group;
					}
			if (_Group == 0)
				;	
			else if ('\0' < _Groups[_Group])
				++_Group;	
			else
				_Bad = true;	

			while (!_Bad && 0 < _Group)
				if (*_Pg == 127)
					break;	
				else if ((0 < --_Group && *_Pg != _Groups[_Group])
					|| (0 == _Group && *_Pg < _Groups[_Group]))
					_Bad = true;	
				else if ('\0' < _Pg[1])
					++_Pg;	
			}

		if (_Seendigit && _Significant == 0)
			*_Ptr++ = '0';	

		if (_First != _Last && *_First == _Punct_fac.decimal_point())
			{	
			*_Ptr++ = localeconv()->decimal_point[0];
			++_First;
			}

		if (_Significant == 0)
			{	
			for (; _First != _Last && *_First == _Atoms[0];
				_Seendigit = true, (void)++_First)
				--_Phex;	
			if (_Phex < 0)
				{	
				*_Ptr++ = '0';
				++_Phex;
				}
			}

		for (; _First != _Last
				&& (_Idx = _Find_elem(_Atoms, *_First)) < _NUMGET_SIGNOFF;
				_Seendigit = true, (void)++_First)
			if (_Significant < _Max_sig_dig)
				{	
				*_Ptr++ = _Src[_Idx];
				++_Significant;
				}

		if (_Seendigit && _First != _Last
			&& (*_First == _Atoms[_NUMGET_POFF + 1]
				|| *_First == _Atoms[_NUMGET_POFF]))
			{	
			*_Ptr++ = 'p';
			++_First;
			_Seendigit = false;
			_Significant = 0;

			if (_First == _Last)
				;	
			else if (*_First == _Atoms[_NUMGET_SIGNOFF + 1])
				{	
				*_Ptr++ = '+';
				++_First;
				}
			else if (*_First == _Atoms[_NUMGET_SIGNOFF])
				{	
				*_Ptr++ = '-';
				++_First;
				}

			for (; _First != _Last && *_First == _Atoms[0]; ++_First)
				{	
				_Seendigit = true;
				}

			if (_Seendigit)
				*_Ptr++ = '0';	
			for (; _First != _Last
				&& (_Idx = _Find_elem(_Atoms, *_First)) < _NUMGET_SIGNOFF;
				_Seendigit = true, (void)++_First)
				if (_Significant < 8)
					{	
					*_Ptr++ = _Src[_Idx];
					++_Significant;
					}
			}

		if (_Bad || !_Seendigit)
			_Ptr = _Ac;	
		*_Ptr = '\0';
		*_Phexexp = _Phex;	
		return (0);	
		}



	};

		
template<class _Elem,
	class _InIt>
	 locale::id num_get<_Elem, _InIt>::id;

		
template<class _Elem,
	class _OutIt = ostreambuf_iterator<_Elem, char_traits<_Elem> > >
	class num_put
		: public locale::facet
	{	
public:
	typedef numpunct<_Elem> _Mypunct;
	typedef basic_string<_Elem, char_traits<_Elem>, allocator<_Elem> >
		_Mystr;

	static size_t __cdecl _Getcat(const locale::facet **_Ppf = 0,
		const locale *_Ploc = 0)
		{	
		if (_Ppf != 0 && *_Ppf == 0)
			*_Ppf = new num_put<_Elem, _OutIt>(
				_Locinfo(_Ploc->c_str()));
		return (4);
		}

	 static locale::id id;	

protected:
	virtual  ~num_put() noexcept
		{	
		}

	void  _Init(const _Locinfo&)
		{	
		}

public:
	explicit  num_put(size_t _Refs = 0)
		: locale::facet(_Refs)
		{	
		{ _Locinfo _Lobj;
			_Init(_Lobj);
		}
		}

	 num_put(const _Locinfo& _Lobj, size_t _Refs = 0)
		: locale::facet(_Refs)
		{	
		_Init(_Lobj);
		}

	typedef _Elem char_type;
	typedef _OutIt iter_type;

	_OutIt  put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, bool _Val) const
		{	
		return (do_put(_Dest, _Iosbase, _Fill, _Val));
		}

	_OutIt  put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, long _Val) const
		{	
		return (do_put(_Dest, _Iosbase, _Fill, _Val));
		}

	_OutIt  put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, unsigned long _Val) const
		{	
		return (do_put(_Dest, _Iosbase, _Fill, _Val));
		}

	_OutIt  put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, long long _Val) const
		{	
		return (do_put(_Dest, _Iosbase, _Fill, _Val));
		}

	_OutIt  put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, unsigned long long _Val) const
		{	
		return (do_put(_Dest, _Iosbase, _Fill, _Val));
		}

	_OutIt  put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, double _Val) const
		{	
		return (do_put(_Dest, _Iosbase, _Fill, _Val));
		}

	_OutIt  put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, long double _Val) const
		{	
		return (do_put(_Dest, _Iosbase, _Fill, _Val));
		}

	_OutIt  put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, const void *_Val) const
		{	
		return (do_put(_Dest, _Iosbase, _Fill, _Val));
		}

protected:
	virtual _OutIt  do_put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, bool _Val) const
		{	
		if (!(_Iosbase.flags() & ios_base::boolalpha))
			return (do_put(_Dest, _Iosbase, _Fill, (long)_Val));
		else
			{	
			const _Mypunct& _Punct_fac = use_facet< _Mypunct >(_Iosbase.getloc());
			_Mystr _Str;
			if (_Val)
				_Str.assign(_Punct_fac.truename());
			else
				_Str.assign(_Punct_fac.falsename());

			size_t _Fillcount = _Iosbase.width() <= 0
				|| (size_t)_Iosbase.width() <= _Str.size()
					? 0 : (size_t)_Iosbase.width() - _Str.size();

			if ((_Iosbase.flags() & ios_base::adjustfield) != ios_base::left)
				{	
				_Dest = _Rep(_Dest, _Fill, _Fillcount);
				_Fillcount = 0;
				}
			_Dest = _Put(_Dest, _Str.c_str(), _Str.size());	
			_Iosbase.width(0);
			return (_Rep(_Dest, _Fill, _Fillcount));	
			}
		}

	virtual _OutIt  do_put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, long _Val) const
		{	
		char _Buf[2 * 32], _Fmt[6];

		return (_Iput(_Dest, _Iosbase, _Fill, _Buf,
			:: sprintf_s(_Buf, sizeof (_Buf), _Ifmt(_Fmt, "ld",
				_Iosbase.flags()), _Val)));
		}

	virtual _OutIt  do_put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, unsigned long _Val) const
		{	
		char _Buf[2 * 32], _Fmt[6];

		return (_Iput(_Dest, _Iosbase, _Fill, _Buf,
			:: sprintf_s(_Buf, sizeof (_Buf), _Ifmt(_Fmt, "lu",
				_Iosbase.flags()), _Val)));
		}

	virtual _OutIt  do_put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, long long _Val) const
		{	
		char _Buf[2 * 32], _Fmt[8];

		return (_Iput(_Dest, _Iosbase, _Fill, _Buf,
			:: sprintf_s(_Buf, sizeof (_Buf), _Ifmt(_Fmt, "Ld",
				_Iosbase.flags()), _Val)));
		}

	virtual _OutIt  do_put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, unsigned long long _Val) const
		{	
		char _Buf[2 * 32], _Fmt[8];

		return (_Iput(_Dest, _Iosbase, _Fill, _Buf,
			:: sprintf_s(_Buf, sizeof (_Buf), _Ifmt(_Fmt, "Lu",
				_Iosbase.flags()), _Val)));
		}

	virtual _OutIt  do_put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, double _Val) const
		{	
		string _Buf;
		char _Fmt[8];
		bool _Isfixed = (_Iosbase.flags() & ios_base::floatfield)
			== ios_base::fixed;
		streamsize _Precision = _Iosbase.precision() <= 0 && !_Isfixed
			? 6 : _Iosbase.precision();	
		size_t _Bufsize = (size_t)_Precision;
		if (_Isfixed && 1e10 < :: fabs(_Val))
			{	
			int _Ptwo;
			(void):: frexp(_Val, &_Ptwo);
			_Bufsize += :: abs(_Ptwo) * 30103L / 100000L;
			}
		_Buf.resize(_Bufsize + 50);	

		int _Ngen = :: sprintf_s((char *)_Buf.c_str(), _Buf.size(),
			_Ffmt(_Fmt, 0, _Iosbase.flags()), (int)_Precision, _Val);

		return (_Fput(_Dest, _Iosbase, _Fill, _Buf.c_str(), _Ngen));
		}

	virtual _OutIt  do_put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, long double _Val) const
		{	
		string _Buf;
		char _Fmt[8];
		bool _Isfixed = (_Iosbase.flags() & ios_base::floatfield)
			== ios_base::fixed;
		streamsize _Precision = _Iosbase.precision() <= 0 && !_Isfixed
			? 6 : _Iosbase.precision();	
		size_t _Bufsize = (size_t)_Precision;
		if (_Isfixed && 1e10 < :: fabsl(_Val))
			{	
			int _Ptwo;
			(void):: frexpl(_Val, &_Ptwo);
			_Bufsize += :: abs(_Ptwo) * 30103L / 100000L;
			}
		_Buf.resize(_Bufsize + 50);	

		int _Ngen = :: sprintf_s((char *)_Buf.c_str(), _Buf.size(),
			_Ffmt(_Fmt, 'L', _Iosbase.flags()), (int)_Precision, _Val);

		return (_Fput(_Dest, _Iosbase, _Fill, _Buf.c_str(), _Ngen));
		}

	virtual _OutIt  do_put(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, const void *_Val) const
		{	
		char _Buf[2 * 32];

		return (_Iput(_Dest, _Iosbase, _Fill, _Buf,
			:: sprintf_s(_Buf, sizeof (_Buf), "%p", _Val)));
		}

private:
	char *__cdecl _Ffmt(char *_Fmt,
		char _Spec, ios_base::fmtflags _Flags) const
		{	
		char *_Ptr = _Fmt;
		*_Ptr++ = '%';

		if (_Flags & ios_base::showpos)
			*_Ptr++ = '+';
		if (_Flags & ios_base::showpoint)
			*_Ptr++ = '#';
		*_Ptr++ = '.';
		*_Ptr++ = '*';	
		if (_Spec != '\0')
			*_Ptr++ = _Spec;	

		ios_base::fmtflags _Ffl = _Flags & ios_base::floatfield;
		if (_Flags & ios_base::uppercase)
			*_Ptr++ = _Ffl == ios_base::fixed ? 'f'
				: _Ffl == ios_base::hexfloat ? 'A'	
				: _Ffl == ios_base::scientific ? 'E' : 'G';	
		else
			*_Ptr++ = _Ffl == ios_base::fixed ? 'f'
				: _Ffl == ios_base::hexfloat ? 'a'	
				: _Ffl == ios_base::scientific ? 'e' : 'g';	

		*_Ptr = '\0';
		return (_Fmt);
		}

	_OutIt __cdecl _Fput(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, const char *_Buf,
			size_t _Count) const
		{	
		size_t _Prefix = 0 < _Count && (*_Buf == '+' || *_Buf == '-')
			? 1 : 0;

		const char *_Exps;
		if ((_Iosbase.flags() & ios_base::floatfield) != ios_base::hexfloat)
			_Exps = "eE";
		else
			{	
			_Exps = "pP";
			if (_Prefix + 2 <= _Count && _Buf[_Prefix] == '0'
				&& (_Buf[_Prefix + 1] == 'x' || _Buf[_Prefix + 1] == 'X'))
				_Prefix += 2;
			}
		const size_t _Eoff =
			:: strcspn(&_Buf[0], _Exps);	
		char _Dp[2] = {"."};
		_Dp[0] = :: localeconv()->decimal_point[0];
		const size_t _Poff =
			:: strcspn(&_Buf[0], &_Dp[0]);	

		const ctype<_Elem>& _Ctype_fac =
			use_facet< ctype<_Elem> >(_Iosbase.getloc());
		_Mystr _Groupstring(_Count, _Elem(0));	
		_Ctype_fac.widen(&_Buf[0], &_Buf[_Count], &_Groupstring[0]);

		const _Mypunct& _Punct_fac = use_facet< _Mypunct >(_Iosbase.getloc());
		const string _Grouping = _Punct_fac.grouping();
		const _Elem _Kseparator = _Punct_fac.thousands_sep();

		if (_Poff != _Count)
			_Groupstring[_Poff] = _Punct_fac.decimal_point();

		size_t _Off = _Poff == _Count ? _Eoff : _Poff;
		const char *_Pg = &_Grouping[0];
		while (*_Pg != 127 && '\0' < *_Pg
			&& (size_t)*_Pg < _Off - _Prefix)
			{	
			_Groupstring.insert(_Off -= *_Pg, (size_t)1, _Kseparator);
			if ('\0' < _Pg[1])
				++_Pg;	
			}

		_Count = _Groupstring.size();
		size_t _Fillcount = _Iosbase.width() <= 0
			|| (size_t)_Iosbase.width() <= _Count
				? 0 : (size_t)_Iosbase.width() - _Count;

		ios_base::fmtflags _Adjustfield =
			_Iosbase.flags() & ios_base::adjustfield;
		if (_Adjustfield != ios_base::left
			&& _Adjustfield != ios_base::internal)
			{	
			_Dest = _Rep(_Dest, _Fill, _Fillcount);
			_Fillcount = 0;
			_Dest = _Put(_Dest, &_Groupstring[0], _Prefix);
			}
		else if (_Adjustfield == ios_base::internal)
			{	
			_Dest = _Put(_Dest, &_Groupstring[0], _Prefix);
			_Dest = _Rep(_Dest, _Fill, _Fillcount);
			_Fillcount = 0;
			}
		else
			_Dest = _Put(_Dest, &_Groupstring[0], _Prefix);

		_Dest = _Put(_Dest, &_Groupstring[_Prefix], _Count - _Prefix);
		_Iosbase.width(0);
		return (_Rep(_Dest, _Fill, _Fillcount));	
		}

	char *__cdecl _Ifmt(char *_Fmt,
		const char *_Spec, ios_base::fmtflags _Flags) const
		{	
		char *_Ptr = _Fmt;
		*_Ptr++ = '%';

		if (_Flags & ios_base::showpos)
			*_Ptr++ = '+';
		if (_Flags & ios_base::showbase)
			*_Ptr++ = '#';
		if (_Spec[0] != 'L')
			*_Ptr++ = _Spec[0];	
		else

			{	
			*_Ptr++ = 'I';
			*_Ptr++ = '6';
			*_Ptr++ = '4';
			}

		ios_base::fmtflags _Basefield = _Flags & ios_base::basefield;
		*_Ptr++ = _Basefield == ios_base::oct ? 'o'
			: _Basefield != ios_base::hex ? _Spec[1]	
			: _Flags & ios_base::uppercase ? 'X' : 'x';
		*_Ptr = '\0';
		return (_Fmt);
		}

	_OutIt __cdecl _Iput(_OutIt _Dest,
		ios_base& _Iosbase, _Elem _Fill, char *_Buf, size_t _Count) const
		{	
		size_t _Prefix = 0 < _Count && (*_Buf == '+' || *_Buf == '-')
			? 1 : 0;
		if ((_Iosbase.flags() & ios_base::basefield) == ios_base::hex
			&& _Prefix + 2 <= _Count && _Buf[_Prefix] == '0'
			&& (_Buf[_Prefix + 1] == 'x' || _Buf[_Prefix + 1] == 'X'))
			_Prefix += 2;

		const ctype<_Elem>& _Ctype_fac =
			use_facet< ctype<_Elem> >(_Iosbase.getloc());
		_Mystr _Groupstring(_Count, _Elem(0));	
		_Ctype_fac.widen(&_Buf[0], &_Buf[_Count], &_Groupstring[0]);

		const _Mypunct& _Punct_fac = use_facet< _Mypunct >(_Iosbase.getloc());
		const string _Grouping = _Punct_fac.grouping();
		const char *_Pg = &_Grouping[0];
		if (*_Pg != 127 && '\0' < *_Pg)
			{	
			const _Elem _Kseparator = _Punct_fac.thousands_sep();
			while (*_Pg != 127 && '\0' < *_Pg
				&& (size_t)*_Pg < _Count - _Prefix)
				{	
				_Count -= *_Pg;
				_Groupstring.insert(_Count, 1, _Kseparator);
				if ('\0' < _Pg[1])
					++_Pg;	
				}
			}

		_Count = _Groupstring.size();
		size_t _Fillcount = _Iosbase.width() <= 0
			|| (size_t)_Iosbase.width() <= _Count
				? 0 : (size_t)_Iosbase.width() - _Count;

		ios_base::fmtflags _Adjustfield =
			_Iosbase.flags() & ios_base::adjustfield;
		if (_Adjustfield != ios_base::left
			&& _Adjustfield != ios_base::internal)
			{	
			_Dest = _Rep(_Dest, _Fill, _Fillcount);
			_Fillcount = 0;
			_Dest = _Put(_Dest, &_Groupstring[0], _Prefix);
			}
		else if (_Adjustfield == ios_base::internal)
			{	
			_Dest = _Put(_Dest, &_Groupstring[0], _Prefix);
			_Dest = _Rep(_Dest, _Fill, _Fillcount);
			_Fillcount = 0;
			}
		else
			_Dest = _Put(_Dest, &_Groupstring[0], _Prefix);

		_Dest = _Put(_Dest, &_Groupstring[_Prefix], _Count - _Prefix);
		_Iosbase.width(0);
		return (_Rep(_Dest, _Fill, _Fillcount));	
		}

	_OutIt __cdecl _Put(_OutIt _Dest,
		const _Elem *_Ptr, size_t _Count) const
		{	
		for (; 0 < _Count; --_Count, (void)++_Dest, ++_Ptr)
			*_Dest = *_Ptr;
		return (_Dest);
		}

	_OutIt __cdecl _Rep(_OutIt _Dest,
		_Elem _Ch, size_t _Count) const
		{	
		for (; 0 < _Count; --_Count, (void)++_Dest)
			*_Dest = _Ch;
		return (_Dest);
		}
	};

		
template<class _Elem,
	class _OutIt>
	 locale::id num_put<_Elem, _OutIt>::id;

 

  
template  locale::id numpunct<char>::id;
template class __declspec(dllimport) num_get<char,
	istreambuf_iterator<char, char_traits<char> > >;
template class __declspec(dllimport) num_put<char,
	ostreambuf_iterator<char, char_traits<char> > >;

template  locale::id numpunct<wchar_t>::id;
template class __declspec(dllimport) num_get<wchar_t,
	istreambuf_iterator<wchar_t, char_traits<wchar_t> > >;
template class __declspec(dllimport) num_put<wchar_t,
	ostreambuf_iterator<wchar_t, char_traits<wchar_t> > >;
  

  






 
}
 
 #pragma warning(pop)
 #pragma pack(pop)










 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
template<class _Elem,
	class _Traits>
	class basic_ios
		: public ios_base
	{	
public:
	typedef basic_ios<_Elem, _Traits> _Myt;
	typedef basic_ostream<_Elem, _Traits> _Myos;
	typedef basic_streambuf<_Elem, _Traits> _Mysb;
	typedef ctype<_Elem> _Ctype;
	typedef _Elem char_type;
	typedef _Traits traits_type;
	typedef typename _Traits::int_type int_type;
	typedef typename _Traits::pos_type pos_type;
	typedef typename _Traits::off_type off_type;

	explicit  basic_ios(_Mysb *_Strbuf)
		{	
		init(_Strbuf);
		}

	virtual  ~basic_ios() noexcept
		{	
		}

	void  clear(iostate _State = goodbit,
		bool _Reraise = false)
		{	
		ios_base::clear((iostate)(_Mystrbuf == 0
			? (int)_State | (int)badbit : (int)_State), _Reraise);
		}

 
	void  clear(io_state _State)
		{	
		clear((iostate)_State);
		}
 

	void  setstate(iostate _State,
		bool _Reraise = false)
		{	
		if (_State != goodbit)
			clear((iostate)((int)rdstate() | (int)_State), _Reraise);
		}

 
	void  setstate(io_state _State)
		{	
		setstate((iostate)_State);
		}
 

	_Myt&  copyfmt(const _Myt& _Right)
		{	
		_Tiestr = _Right.tie();
		_Fillch = _Right.fill();
		ios_base::copyfmt(_Right);
		return (*this);
		}

	_Myos * tie() const
		{	
		return (_Tiestr);
		}

	_Myos * tie(_Myos *_Newtie)
		{	
		_Myos *_Oldtie = _Tiestr;
		_Tiestr = _Newtie;
		return (_Oldtie);
		}

	_Mysb * rdbuf() const
		{	
		return (_Mystrbuf);
		}

	_Mysb * rdbuf(_Mysb *_Strbuf)
		{	
		_Mysb *_Oldstrbuf = _Mystrbuf;
		_Mystrbuf = _Strbuf;
		clear();
		return (_Oldstrbuf);
		}

	locale  imbue(const locale& _Loc)
		{	
		locale _Oldlocale = ios_base::imbue(_Loc);
		if (rdbuf() != 0)
			rdbuf()->pubimbue(_Loc);
		return (_Oldlocale);
		}

	_Elem  fill() const
		{	
		return (_Fillch);
		}

	_Elem  fill(_Elem _Newfill)
		{	
		_Elem _Oldfill = _Fillch;
		_Fillch = _Newfill;
		return (_Oldfill);
		}

	char  narrow(_Elem _Ch, char _Dflt = '\0') const
		{	
		const _Ctype& _Ctype_fac = use_facet< _Ctype >(getloc());
		return (_Ctype_fac.narrow(_Ch, _Dflt));
		}

	_Elem  widen(char _Byte) const
		{	
		const _Ctype& _Ctype_fac = use_facet< _Ctype >(getloc());
		return (_Ctype_fac.widen(_Byte));
		}

	void  move(_Myt& _Right)
		{	
		if (this != ::std:: addressof(_Right))
			{	
			_Mystrbuf = 0;
			_Tiestr = 0;
			this->swap(_Right);
			}
		}

	void  move(_Myt&& _Right)
		{	
		if (this != ::std:: addressof(_Right))
			{	
			_Mystrbuf = 0;
			_Tiestr = 0;
			this->swap(_Right);
			}
		}

	void  swap(_Myt& _Right) noexcept
		{	
		ios_base::swap(_Right);
		::std:: swap(_Fillch, _Right._Fillch);
		::std:: swap(_Tiestr, _Right._Tiestr);
		}

	void  set_rdbuf(_Mysb *_Strbuf)
		{	
		_Mystrbuf = _Strbuf;
		}

protected:
	void  init(_Mysb *_Strbuf = 0,
		bool _Isstd = false)
		{	
		_Init();	
		_Mystrbuf = _Strbuf;
		_Tiestr = 0;
		_Fillch = widen(' ');

		if (_Mystrbuf == 0)
			setstate(badbit);

		if (_Isstd)
			_Addstd(this);	
		}

	 basic_ios()
		{	
		}

private:
	_Mysb *_Mystrbuf;	
	_Myos *_Tiestr;	
	_Elem _Fillch;	

public:
	 basic_ios(const _Myt&) = delete;
	_Myt&  operator=(const _Myt&) = delete;
	};

 

  
template class __declspec(dllimport) basic_ios<char,
	char_traits<char> >;
template class __declspec(dllimport) basic_ios<wchar_t,
	char_traits<wchar_t> >;
  

  



 

		
inline ios_base& __cdecl boolalpha(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::boolalpha);
	return (_Iosbase);
	}

inline ios_base& __cdecl dec(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::dec, ios_base::basefield);
	return (_Iosbase);
	}

inline ios_base& __cdecl defaultfloat(ios_base& _Iosbase)
	{	
	_Iosbase.unsetf(ios_base::floatfield);
	return (_Iosbase);
	}

inline ios_base& __cdecl fixed(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::fixed, ios_base::floatfield);
	return (_Iosbase);
	}

inline ios_base& __cdecl hex(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::hex, ios_base::basefield);
	return (_Iosbase);
	}

inline ios_base& __cdecl hexfloat(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::hexfloat, ios_base::floatfield);
	return (_Iosbase);
	}


namespace tr1 {	
using ::std:: hexfloat;
}	


inline ios_base& __cdecl internal(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::internal, ios_base::adjustfield);
	return (_Iosbase);
	}

inline ios_base& __cdecl left(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::left, ios_base::adjustfield);
	return (_Iosbase);
	}

inline ios_base& __cdecl noboolalpha(ios_base& _Iosbase)
	{	
	_Iosbase.unsetf(ios_base::boolalpha);
	return (_Iosbase);
	}

inline ios_base& __cdecl noshowbase(ios_base& _Iosbase)
	{	
	_Iosbase.unsetf(ios_base::showbase);
	return (_Iosbase);
	}

inline ios_base& __cdecl noshowpoint(ios_base& _Iosbase)
	{	
	_Iosbase.unsetf(ios_base::showpoint);
	return (_Iosbase);
	}

inline ios_base& __cdecl noshowpos(ios_base& _Iosbase)
	{	
	_Iosbase.unsetf(ios_base::showpos);
	return (_Iosbase);
	}

inline ios_base& __cdecl noskipws(ios_base& _Iosbase)
	{	
	_Iosbase.unsetf(ios_base::skipws);
	return (_Iosbase);
	}

inline ios_base& __cdecl nounitbuf(ios_base& _Iosbase)
	{	
	_Iosbase.unsetf(ios_base::unitbuf);
	return (_Iosbase);
	}

inline ios_base& __cdecl nouppercase(ios_base& _Iosbase)
	{	
	_Iosbase.unsetf(ios_base::uppercase);
	return (_Iosbase);
	}

inline ios_base& __cdecl oct(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::oct, ios_base::basefield);
	return (_Iosbase);
	}

inline ios_base& __cdecl right(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::right, ios_base::adjustfield);
	return (_Iosbase);
	}

inline ios_base& __cdecl scientific(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::scientific, ios_base::floatfield);
	return (_Iosbase);
	}

inline ios_base& __cdecl showbase(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::showbase);
	return (_Iosbase);
	}

inline ios_base& __cdecl showpoint(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::showpoint);
	return (_Iosbase);
	}

inline ios_base& __cdecl showpos(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::showpos);
	return (_Iosbase);
	}

inline ios_base& __cdecl skipws(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::skipws);
	return (_Iosbase);
	}

inline ios_base& __cdecl unitbuf(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::unitbuf);
	return (_Iosbase);
	}

inline ios_base& __cdecl uppercase(ios_base& _Iosbase)
	{	
	_Iosbase.setf(ios_base::uppercase);
	return (_Iosbase);
	}
}

 
 #pragma warning(pop)
 #pragma pack(pop)









 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		

 
 

 



 



 





 #pragma vtordisp(push, 2)	

		
template<class _Elem,
	class _Traits>
	class basic_ostream
		: virtual public basic_ios<_Elem, _Traits>
	{	
public:
	typedef basic_ostream<_Elem, _Traits> _Myt;
	typedef basic_ios<_Elem, _Traits> _Myios;
	typedef basic_streambuf<_Elem, _Traits> _Mysb;
	typedef ostreambuf_iterator<_Elem, _Traits> _Iter;
	typedef num_put<_Elem, _Iter> _Nput;

	explicit  basic_ostream(
		basic_streambuf<_Elem, _Traits> *_Strbuf,

		bool _Isstd = false)
		{	
		_Myios::init(_Strbuf, _Isstd);
		}

	 basic_ostream(_Uninitialized, bool _Addit = true)
		{	
		if (_Addit)
			this->_Addstd(this);	
		}

protected:
	 basic_ostream(_Myt&& _Right)
		{	
		_Myios::init();
		_Myios::move(::std:: move(_Right));
		}

	_Myt&  operator=(_Myt&& _Right)
		{	
		this->swap(_Right);
		return (*this);
		}

	void  swap(_Myt& _Right)
		{	
		if (this != ::std:: addressof(_Right))
			_Myios::swap(_Right);
		}

public:
	 basic_ostream(const _Myt&) = delete;
	_Myt&  operator=(const _Myt&) = delete;

	virtual  ~basic_ostream() noexcept
		{	
		}

	typedef typename _Traits::int_type int_type;
	typedef typename _Traits::pos_type pos_type;
	typedef typename _Traits::off_type off_type;

	class _Sentry_base
		{	
	public:
		 _Sentry_base(_Myt& _Ostr)
			: _Myostr(_Ostr)
			{	
			if (_Myostr.rdbuf() != 0)
				_Myostr.rdbuf()->_Lock();
			}

		 ~_Sentry_base() noexcept
			{	
			if (_Myostr.rdbuf() != 0)
				_Myostr.rdbuf()->_Unlock();
			}

		_Myt& _Myostr;	

	private:
		_Sentry_base& operator=(const _Sentry_base&);
		};

	class sentry
		: public _Sentry_base
		{	
	public:
		explicit  sentry(_Myt& _Ostr)
			: _Sentry_base(_Ostr)
			{	
			if (_Ostr.good() && _Ostr.tie() != 0 && _Ostr.tie() != &_Ostr)
				_Ostr.tie()->flush();
			_Ok = _Ostr.good();	
			}

		 ~sentry() noexcept
			{	
 
			if (!::std:: uncaught_exception())
				this->_Myostr._Osfx();

 


			}

		explicit  operator bool() const
			{	
			return (_Ok);
			}

		 sentry(const sentry&) = delete;
		sentry&  operator=(const sentry&) = delete;

	private:
		bool _Ok;	
		};

	bool  opfx()
		{	
		if (this->good() && _Myios::tie() != 0 && _Myios::tie() != this)
			_Myios::tie()->flush();
		return (this->good());
		}

	void  osfx()
		{	
		_Osfx();
		}

	void  _Osfx()
		{	
		try {
		if (this->good() && this->flags() & ios_base::unitbuf)
			if (_Myios::rdbuf()->pubsync() == -1)	
				_Myios::setstate(ios_base::badbit);
		} catch (...) {
		}
		}

  


















	_Myt&  operator<<(_Myt& (__cdecl *_Pfn)(_Myt&))
		{	
		return ((*_Pfn)(*this));
		}

	_Myt&  operator<<(_Myios& (__cdecl *_Pfn)(_Myios&))
		{	
		(*_Pfn)(*(_Myios *)this);
		return (*this);
		}

	_Myt&  operator<<(ios_base& (__cdecl *_Pfn)(ios_base&))
		{	
		(*_Pfn)(*(ios_base *)this);
		return (*this);
		}

	_Myt&  operator<<(bool _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(short _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());
			ios_base::fmtflags _Bfl =
				this->flags() & ios_base::basefield;
			long _Tmp = (_Bfl == ios_base::oct
				|| _Bfl == ios_base::hex)
				? (long)(unsigned short)_Val : (long)_Val;

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Tmp).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}










	_Myt&  operator<<(unsigned short _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), (unsigned long)_Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(int _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());
			ios_base::fmtflags _Bfl =
				this->flags() & ios_base::basefield;
			long _Tmp = (_Bfl == ios_base::oct
				|| _Bfl == ios_base::hex)
				? (long)(unsigned int)_Val : (long)_Val;

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Tmp).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(unsigned int _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), (unsigned long)_Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(long _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(unsigned long _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(long long _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(unsigned long long _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(float _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), (double)_Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(double _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(long double _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(const void *_Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nput& _Nput_fac = use_facet< _Nput >(this->getloc());

			try {
			if (_Nput_fac.put(_Iter(_Myios::rdbuf()), *this,
				_Myios::fill(), _Val).failed())
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator<<(_Mysb *_Strbuf)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		bool _Copied = false;
		const sentry _Ok(*this);

		if (_Ok && _Strbuf != 0)
			for (int_type _Meta = _Traits::eof(); ; _Copied = true)
				{	
				try {
				_Meta = _Traits::eq_int_type(_Traits::eof(), _Meta)
					? _Strbuf->sgetc() : _Strbuf->snextc();
				} catch (...) {
					_Myios::setstate(ios_base::failbit);
					throw;
				}

				if (_Traits::eq_int_type(_Traits::eof(), _Meta))
					break;	

				try {
					if (_Traits::eq_int_type(_Traits::eof(),
						_Myios::rdbuf()->sputc(
							_Traits::to_char_type(_Meta))))
						{	
						_State |= ios_base::badbit;
						break;
						}
				} catch (...) { _Myios::setstate(ios_base::badbit, true); }
				}

		this->width(0);
		_Myios::setstate(_Strbuf == 0 ? ios_base::badbit
			: !_Copied ? _State | ios_base::failbit : _State);
		return (*this);
		}

	_Myt&  put(_Elem _Ch)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (!_Ok)
			_State |= ios_base::badbit;
		else
			{	
			try {
			if (_Traits::eq_int_type(_Traits::eof(),
				_Myios::rdbuf()->sputc(_Ch)))
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  write(const _Elem *_Str,
		streamsize _Count)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (!_Ok)
			_State |= ios_base::badbit;
		else if (0 < _Count)
			{	
			try {
			if (_Myios::rdbuf()->sputn(_Str, _Count) != _Count)
				_State |= ios_base::badbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  flush()
		{	
		if (_Myios::rdbuf() != 0)
			{	
			const sentry _Ok(*this);

			if (_Ok && _Myios::rdbuf()->pubsync() == -1)
				_Myios::setstate(ios_base::badbit);	
			}
		return (*this);
		}

	_Myt&  seekp(pos_type _Pos)
		{	
		const sentry _Ok(*this);

		if (!this->fail()
			&& (off_type)_Myios::rdbuf()->pubseekpos(_Pos,
				ios_base::out) == _BADOFF)
			_Myios::setstate(ios_base::failbit);
		return (*this);
		}

	_Myt&  seekp(off_type _Off, ios_base::seekdir _Way)
		{	
		const sentry _Ok(*this);

		if (!this->fail()
			&& (off_type)_Myios::rdbuf()->pubseekoff(_Off, _Way,
				ios_base::out) == _BADOFF)
			_Myios::setstate(ios_base::failbit);
		return (*this);
		}

	pos_type  tellp()
		{	
		const sentry _Ok(*this);

		if (!this->fail())
			return (_Myios::rdbuf()->pubseekoff(0,
				ios_base::cur, ios_base::out));
		else
			return (pos_type(_BADOFF));
		}
	};

 #pragma vtordisp(pop)	

	

  

















































 

  
template class __declspec(dllimport) basic_ostream<char,
	char_traits<char> >;
template class __declspec(dllimport) basic_ostream<wchar_t,
	char_traits<wchar_t> >;
  

  



 

		

template<class _Elem,
	class _Traits> inline
	basic_ostream<_Elem, _Traits>& operator<<(
		basic_ostream<_Elem, _Traits>& _Ostr, const char *_Val)
	{	
	ios_base::iostate _State = ios_base::goodbit;
	streamsize _Count = (streamsize):: strlen(_Val);	
	streamsize _Pad = _Ostr.width() <= 0 || _Ostr.width() <= _Count
		? 0 : _Ostr.width() - _Count;
	const typename basic_ostream<_Elem, _Traits>::sentry _Ok(_Ostr);

	if (!_Ok)
		_State |= ios_base::badbit;
	else
		{	
		try {
		const ctype<_Elem>& _Ctype_fac = use_facet< ctype<_Elem> >(_Ostr.getloc());
		if ((_Ostr.flags() & ios_base::adjustfield) != ios_base::left)
			for (; 0 < _Pad; --_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					{	
					_State |= ios_base::badbit;
					break;
					}

		for (; _State == ios_base::goodbit && 0 < _Count; --_Count, ++_Val)
			if (_Traits::eq_int_type(_Traits::eof(),
				_Ostr.rdbuf()->sputc(_Ctype_fac.widen(*_Val))))
					_State |= ios_base::badbit;

		if (_State == ios_base::goodbit)
			for (; 0 < _Pad; --_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					{	
					_State |= ios_base::badbit;
					break;
					}
		_Ostr.width(0);
		} catch (...) { (_Ostr).setstate(ios_base::badbit, true); }
		}

	_Ostr.setstate(_State);
	return (_Ostr);
	}

template<class _Elem,
	class _Traits> inline
	basic_ostream<_Elem, _Traits>& operator<<(
		basic_ostream<_Elem, _Traits>& _Ostr, char _Ch)
	{	
	ios_base::iostate _State = ios_base::goodbit;
	const typename basic_ostream<_Elem, _Traits>::sentry _Ok(_Ostr);

	if (_Ok)
		{	
		const ctype<_Elem>& _Ctype_fac = use_facet< ctype<_Elem> >(_Ostr.getloc());
		streamsize _Pad = _Ostr.width() <= 1 ? 0 : _Ostr.width() - 1;

		try {
		if ((_Ostr.flags() & ios_base::adjustfield) != ios_base::left)
			for (; _State == ios_base::goodbit && 0 < _Pad;
				--_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					_State |= ios_base::badbit;

		if (_State == ios_base::goodbit
			&& _Traits::eq_int_type(_Traits::eof(),
				_Ostr.rdbuf()->sputc(_Ctype_fac.widen(_Ch))))
			_State |= ios_base::badbit;

		for (; _State == ios_base::goodbit && 0 < _Pad;
			--_Pad)	
			if (_Traits::eq_int_type(_Traits::eof(),
				_Ostr.rdbuf()->sputc(_Ostr.fill())))
				_State |= ios_base::badbit;
		} catch (...) { (_Ostr).setstate(ios_base::badbit, true); }
		}

	_Ostr.width(0);
	_Ostr.setstate(_State);
	return (_Ostr);
	}

template<class _Traits> inline
	basic_ostream<char, _Traits>& operator<<(
		basic_ostream<char, _Traits>& _Ostr,
		const char *_Val)
	{	
	typedef char _Elem;
	typedef basic_ostream<_Elem, _Traits> _Myos;
	ios_base::iostate _State = ios_base::goodbit;
	streamsize _Count = (streamsize)_Traits::length(_Val);	
	streamsize _Pad = _Ostr.width() <= 0 || _Ostr.width() <= _Count
		? 0 : _Ostr.width() - _Count;
	const typename _Myos::sentry _Ok(_Ostr);

	if (!_Ok)
		_State |= ios_base::badbit;
	else
		{	
		try {
		if ((_Ostr.flags() & ios_base::adjustfield) != ios_base::left)
			for (; 0 < _Pad; --_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					{	
					_State |= ios_base::badbit;
					break;
					}

		if (_State == ios_base::goodbit
			&& _Ostr.rdbuf()->sputn(_Val, _Count) != _Count)
			_State |= ios_base::badbit;

		if (_State == ios_base::goodbit)
			for (; 0 < _Pad; --_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					{	
					_State |= ios_base::badbit;
					break;
					}
		_Ostr.width(0);
		} catch (...) { (_Ostr).setstate(ios_base::badbit, true); }
		}

	_Ostr.setstate(_State);
	return (_Ostr);
	}

template<class _Traits> inline
	basic_ostream<char, _Traits>& operator<<(
		basic_ostream<char, _Traits>& _Ostr, char _Ch)
	{	
	typedef char _Elem;
	typedef basic_ostream<_Elem, _Traits> _Myos;
	ios_base::iostate _State = ios_base::goodbit;
	const typename _Myos::sentry _Ok(_Ostr);

	if (_Ok)
		{	
		streamsize _Pad = _Ostr.width() <= 1 ? 0 : _Ostr.width() - 1;

		try {
		if ((_Ostr.flags() & ios_base::adjustfield) != ios_base::left)
			for (; _State == ios_base::goodbit && 0 < _Pad;
				--_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					_State |= ios_base::badbit;

		if (_State == ios_base::goodbit
			&& _Traits::eq_int_type(_Traits::eof(),
				_Ostr.rdbuf()->sputc(_Ch)))
			_State |= ios_base::badbit;

		for (; _State == ios_base::goodbit && 0 < _Pad;
			--_Pad)	
			if (_Traits::eq_int_type(_Traits::eof(),
				_Ostr.rdbuf()->sputc(_Ostr.fill())))
				_State |= ios_base::badbit;
		} catch (...) { (_Ostr).setstate(ios_base::badbit, true); }
		}

	_Ostr.width(0);
	_Ostr.setstate(_State);
	return (_Ostr);
	}

template<class _Elem,
	class _Traits> inline
	basic_ostream<_Elem, _Traits>& operator<<(
		basic_ostream<_Elem, _Traits>& _Ostr, const _Elem *_Val)
	{	
	typedef basic_ostream<_Elem, _Traits> _Myos;

	ios_base::iostate _State = ios_base::goodbit;
	streamsize _Count = (streamsize)_Traits::length(_Val);	
	streamsize _Pad = _Ostr.width() <= 0 || _Ostr.width() <= _Count
		? 0 : _Ostr.width() - _Count;
	const typename _Myos::sentry _Ok(_Ostr);

	if (!_Ok)
		_State |= ios_base::badbit;
	else
		{	
		try {
		if ((_Ostr.flags() & ios_base::adjustfield) != ios_base::left)
			for (; 0 < _Pad; --_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					{	
					_State |= ios_base::badbit;
					break;
					}

		if (_State == ios_base::goodbit
			&& _Ostr.rdbuf()->sputn(_Val, _Count) != _Count)
			_State |= ios_base::badbit;

		if (_State == ios_base::goodbit)
			for (; 0 < _Pad; --_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					{	
					_State |= ios_base::badbit;
					break;
					}
		_Ostr.width(0);
		} catch (...) { (_Ostr).setstate(ios_base::badbit, true); }
		}

	_Ostr.setstate(_State);
	return (_Ostr);
	}

template<class _Elem,
	class _Traits> inline
	basic_ostream<_Elem, _Traits>& operator<<(
		basic_ostream<_Elem, _Traits>& _Ostr, _Elem _Ch)
	{	
	typedef basic_ostream<_Elem, _Traits> _Myos;

	ios_base::iostate _State = ios_base::goodbit;
	const typename _Myos::sentry _Ok(_Ostr);

	if (_Ok)
		{	
		streamsize _Pad = _Ostr.width() <= 1 ? 0 : _Ostr.width() - 1;

		try {
		if ((_Ostr.flags() & ios_base::adjustfield) != ios_base::left)
			for (; _State == ios_base::goodbit && 0 < _Pad;
				--_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					_State |= ios_base::badbit;

		if (_State == ios_base::goodbit
			&& _Traits::eq_int_type(_Traits::eof(),
				_Ostr.rdbuf()->sputc(_Ch)))
			_State |= ios_base::badbit;

		for (; _State == ios_base::goodbit && 0 < _Pad;
			--_Pad)	
			if (_Traits::eq_int_type(_Traits::eof(),
				_Ostr.rdbuf()->sputc(_Ostr.fill())))
				_State |= ios_base::badbit;
		} catch (...) { (_Ostr).setstate(ios_base::badbit, true); }
		}

	_Ostr.width(0);
	_Ostr.setstate(_State);
	return (_Ostr);
	}

template<class _Traits> inline
	basic_ostream<char, _Traits>& operator<<(
		basic_ostream<char, _Traits>& _Ostr, const signed char *_Val)
	{	
	return (_Ostr << (const char *)_Val);
	}

template<class _Traits> inline
	basic_ostream<char, _Traits>& operator<<(
		basic_ostream<char, _Traits>& _Ostr, signed char _Ch)
	{	
	return (_Ostr << (char)_Ch);
	}

template<class _Traits> inline
	basic_ostream<char, _Traits>& operator<<(
		basic_ostream<char, _Traits>& _Ostr, const unsigned char *_Val)
	{	
	return (_Ostr << (const char *)_Val);
	}

template<class _Traits> inline
	basic_ostream<char, _Traits>& operator<<(
		basic_ostream<char, _Traits>& _Ostr, unsigned char _Ch)
	{	
	return (_Ostr << (char)_Ch);
	}

template<class _Elem,
	class _Traits,
	class _Ty> inline
	basic_ostream<_Elem, _Traits>&
		operator<<(basic_ostream<_Elem, _Traits>&& _Ostr, const _Ty& _Val)
	{	
	return (_Ostr << _Val);
	}

		
template<class _Elem,
	class _Traits> inline
	basic_ostream<_Elem, _Traits>&
		__cdecl endl(basic_ostream<_Elem, _Traits>& _Ostr)
	{	
	_Ostr.put(_Ostr.widen('\n'));
	_Ostr.flush();
	return (_Ostr);
	}

template<class _Elem,
	class _Traits> inline
	basic_ostream<_Elem, _Traits>&
		__cdecl ends(basic_ostream<_Elem, _Traits>& _Ostr)
	{	
	_Ostr.put(_Elem());
	return (_Ostr);
	}

template<class _Elem,
	class _Traits> inline
	basic_ostream<_Elem, _Traits>&
		__cdecl flush(basic_ostream<_Elem, _Traits>& _Ostr)
	{	
	_Ostr.flush();
	return (_Ostr);
	}

		
template<class _Elem,
	class _Traits> inline
	basic_ostream<_Elem, _Traits>&
		operator<<(basic_ostream<_Elem, _Traits>& _Ostr,
			const error_code& _Errcode)
	{	
	return (_Ostr << _Errcode.category().name() << ':' << _Errcode.value());
	}
}

 
 #pragma warning(pop)
 #pragma pack(pop)









 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
 #pragma vtordisp(push, 2)	

		
template<class _Elem,
	class _Traits>
	class basic_istream
		: virtual public basic_ios<_Elem, _Traits>
	{	
public:
	typedef basic_istream<_Elem, _Traits> _Myt;
	typedef basic_ios<_Elem, _Traits> _Myios;
	typedef basic_streambuf<_Elem, _Traits> _Mysb;
	typedef istreambuf_iterator<_Elem, _Traits> _Iter;
	typedef ctype<_Elem> _Ctype;
	typedef num_get<_Elem, _Iter> _Nget;

  









	explicit  basic_istream(_Mysb *_Strbuf,
		bool _Isstd = false)

		: _Chcount(0)
		{	
		_Myios::init(_Strbuf, _Isstd);
		}

	 basic_istream(_Uninitialized)
		{	
		this->_Addstd(this);
		}

protected:
	 basic_istream(_Myt&& _Right)
		: _Chcount(_Right._Chcount)
		{	
		_Myios::init();
		_Myios::move(::std:: move(_Right));
		_Right._Chcount = 0;
		}

	_Myt&  operator=(_Myt&& _Right)
		{	
		this->swap(_Right);
		return (*this);
		}

	void  swap(_Myt& _Right)
		{	
		_Myios::swap(_Right);
		::std:: swap(_Chcount, _Right._Chcount);
		}

public:
	 basic_istream(const _Myt&) = delete;
	_Myt&  operator=(const _Myt&) = delete;

	virtual  ~basic_istream() noexcept
		{	
		}

	typedef typename _Traits::int_type int_type;
	typedef typename _Traits::pos_type pos_type;
	typedef typename _Traits::off_type off_type;

		
	class _Sentry_base
		{	
	public:
		 _Sentry_base(_Myt& _Istr)
			: _Myistr(_Istr)
			{	
			if (_Myistr.rdbuf() != 0)
				_Myistr.rdbuf()->_Lock();
			}

		 ~_Sentry_base() noexcept
			{	
			if (_Myistr.rdbuf() != 0)
				_Myistr.rdbuf()->_Unlock();
			}

		_Myt& _Myistr;	

	private:
		_Sentry_base& operator=(const _Sentry_base&);
		};

	class sentry
		: public _Sentry_base
		{	
	public:
		explicit  sentry(_Myt& _Istr, bool _Noskip = false)
			: _Sentry_base(_Istr)
			{	
			_Ok = this->_Myistr._Ipfx(_Noskip);
			}

		explicit  operator bool() const
			{	
			return (_Ok);
			}

		 sentry(const sentry&) = delete;
		sentry&  operator=(const sentry&) = delete;

	private:
		bool _Ok;	
		};

	bool  _Ipfx(bool _Noskip = false)
		{	
		if (this->good())
			{	
			if (_Myios::tie() != 0)
				_Myios::tie()->flush();

			if (!_Noskip && this->flags() & ios_base::skipws)
				{	
				const _Ctype& _Ctype_fac = use_facet< _Ctype >(this->getloc());

				try {
				int_type _Meta = _Myios::rdbuf()->sgetc();

				for (; ; _Meta = _Myios::rdbuf()->snextc())
					if (_Traits::eq_int_type(_Traits::eof(), _Meta))
						{	
						_Myios::setstate(ios_base::eofbit);
						break;
						}
					else if (!_Ctype_fac.is(_Ctype::space,
						_Traits::to_char_type(_Meta)))
						break;	
				} catch (...) { _Myios::setstate(ios_base::badbit, true); }
				}

			if (this->good())
				return (true);
			}
		_Myios::setstate(ios_base::failbit);
		return (false);
		}

	bool  ipfx(bool _Noskip = false)
		{	
		return (_Ipfx(_Noskip));
		}

	void  isfx()
		{	
		}

  


















	_Myt&  operator>>(_Myt& (__cdecl *_Pfn)(_Myt&))
		{	
		return ((*_Pfn)(*this));
		}

	_Myt&  operator>>(_Myios& (__cdecl *_Pfn)(_Myios&))
		{	
		(*_Pfn)(*(_Myios *)this);
		return (*this);
		}

	_Myt&  operator>>(ios_base& (__cdecl *_Pfn)(ios_base&))
		{	
		(*_Pfn)(*(ios_base *)this);
		return (*this);
		}

	_Myt&  operator>>(bool& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(short& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			long _Tmp = 0;
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Tmp);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }

			if (_State & ios_base::failbit
				|| _Tmp < (-32768) || 32767 < _Tmp)
				_State |= ios_base::failbit;
			else
				_Val = (short)_Tmp;
			}

		_Myios::setstate(_State);
		return (*this);
		}










	_Myt&  operator>>(unsigned short& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(int& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			long _Tmp = 0;
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Tmp);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }

			if (_State & ios_base::failbit
				|| _Tmp < (-2147483647 - 1) || 2147483647 < _Tmp)
				_State |= ios_base::failbit;
			else
				_Val = _Tmp;
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(unsigned int& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);
		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(long& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());
			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(unsigned long& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(long long& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(unsigned long long& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);
		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(float& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(double& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);
		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(long double& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());
			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(void *& _Val)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const sentry _Ok(*this);

		if (_Ok)
			{	
			const _Nget& _Nget_fac = use_facet< _Nget >(this->getloc());

			try {
			_Nget_fac.get(_Iter(_Myios::rdbuf()), _Iter(0),
				*this, _State, _Val);
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  operator>>(_Mysb *_Strbuf)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		bool _Copied = false;
		const sentry _Ok(*this);

		if (_Ok && _Strbuf != 0)
			{	
			try {
			int_type _Meta = _Myios::rdbuf()->sgetc();

			for (; ; _Meta = _Myios::rdbuf()->snextc())
				if (_Traits::eq_int_type(_Traits::eof(), _Meta))
					{	
					_State |= ios_base::eofbit;
					break;
					}
				else
					{	
					try {
						if (_Traits::eq_int_type(_Traits::eof(),
							_Strbuf->sputc(_Traits::to_char_type(_Meta))))
							break;
					} catch (...) {
						break;
					}
					_Copied = true;
					}
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(!_Copied ? _State | ios_base::failbit : _State);
		return (*this);
		}

	int_type  get()
		{	
		int_type _Meta = 0;
		ios_base::iostate _State = ios_base::goodbit;
		_Chcount = 0;
		const sentry _Ok(*this, true);

		if (!_Ok)
			_Meta = _Traits::eof();	
		else
			{	
			try {
			_Meta = _Myios::rdbuf()->sgetc();

			if (_Traits::eq_int_type(_Traits::eof(), _Meta))
				_State |= ios_base::eofbit | ios_base::failbit;	
			else
				{	
				_Myios::rdbuf()->sbumpc();
				++_Chcount;
				}
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (_Meta);
		}

	_Myt&  get(_Elem *_Str, streamsize _Count)
		{	
		return (get(_Str, _Count, _Myios::widen('\n')));
		}

	_Myt&  get(_Elem *_Str,
		streamsize _Count, _Elem _Delim)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		_Chcount = 0;
		const sentry _Ok(*this, true);

		if (_Ok && 0 < _Count)
			{	
			try {
			int_type _Meta = _Myios::rdbuf()->sgetc();

			for (; 0 < --_Count; _Meta = _Myios::rdbuf()->snextc())
				if (_Traits::eq_int_type(_Traits::eof(), _Meta))
					{	
					_State |= ios_base::eofbit;
					break;
					}
				else if (_Traits::to_char_type(_Meta) == _Delim)
					break;	
				else
					{	
					*_Str++ = _Traits::to_char_type(_Meta);
					++_Chcount;
					}
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_Chcount == 0
			? _State | ios_base::failbit : _State);
		*_Str = _Elem();	
		return (*this);
		}

	_Myt&  get(_Elem& _Ch)
		{	
		int_type _Meta = get();
		if (!_Traits::eq_int_type(_Traits::eof(), _Meta))
			_Ch = _Traits::to_char_type(_Meta);
		return (*this);
		}

	_Myt&  get(_Mysb& _Strbuf)
		{	
		return (get(_Strbuf, _Myios::widen('\n')));
		}

	_Myt&  get(_Mysb& _Strbuf, _Elem _Delim)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		_Chcount = 0;
		const sentry _Ok(*this, true);

		if (_Ok)
			{	
			try {
			int_type _Meta = _Myios::rdbuf()->sgetc();

			for (; ; _Meta = _Myios::rdbuf()->snextc())
				if (_Traits::eq_int_type(_Traits::eof(), _Meta))
					{	
					_State |= ios_base::eofbit;
					break;
					}
				else
					{	
					try {
						_Elem _Ch = _Traits::to_char_type(_Meta);
						if (_Ch == _Delim
							|| _Traits::eq_int_type(_Traits::eof(),
								_Strbuf.sputc(_Ch)))
							break;
					} catch (...) {
						break;
					}
					++_Chcount;
					}
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		if (_Chcount == 0)
			_State |= ios_base::failbit;
		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  getline(_Elem *_Str, streamsize _Count)
		{	
		return (getline(_Str, _Count, _Myios::widen('\n')));
		}

	_Myt&  getline(_Elem *_Str,
		streamsize _Count, _Elem _Delim)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		_Chcount = 0;
		const sentry _Ok(*this, true);

		if (_Ok && 0 < _Count)
			{	
			int_type _Metadelim = _Traits::to_int_type(_Delim);

			try {
			int_type _Meta = _Myios::rdbuf()->sgetc();

			for (; ; _Meta = _Myios::rdbuf()->snextc())
				if (_Traits::eq_int_type(_Traits::eof(), _Meta))
					{	
					_State |= ios_base::eofbit;
					break;
					}
				else if (_Meta == _Metadelim)
					{	
					++_Chcount;
					_Myios::rdbuf()->sbumpc();
					break;
					}
				else if (--_Count <= 0)
					{	
					_State |= ios_base::failbit;
					break;
					}
				else
					{	
					*_Str++ = _Traits::to_char_type(_Meta);
					++_Chcount;
					}
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		*_Str = _Elem();	
		_Myios::setstate(_Chcount == 0 ? _State | ios_base::failbit : _State);
		return (*this);
		}

	_Myt&  ignore(streamsize _Count = 1,
		int_type _Metadelim = _Traits::eof())
		{	
		ios_base::iostate _State = ios_base::goodbit;
		_Chcount = 0;
		const sentry _Ok(*this, true);

		if (_Ok && 0 < _Count)
			{	
			try {
			for (; ; )
				{	
				int_type _Meta;
				if (_Count != (numeric_limits<streamsize>::max)()
					&& --_Count < 0)
					break;	
				else if (_Traits::eq_int_type(_Traits::eof(),
					_Meta = _Myios::rdbuf()->sbumpc()))
					{	
					_State |= ios_base::eofbit;
					break;
					}
				else
					{	
					++_Chcount;
					if (_Meta == _Metadelim)
						break;	
					}
				}
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  read(_Elem *_Str, streamsize _Count)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		_Chcount = 0;
		const sentry _Ok(*this, true);

		if (_Ok && 0 < _Count)
			{	
			try {
			const streamsize _Num = _Myios::rdbuf()->sgetn(_Str, _Count);
			_Chcount += _Num;
			if (_Num != _Count)
				_State |= ios_base::eofbit | ios_base::failbit;	
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	streamsize  readsome(_Elem *_Str,
		streamsize _Count)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		_Chcount = 0;
		const sentry _Ok(*this, true);
		streamsize _Num;

		if (!_Ok)
			_State |= ios_base::failbit;	
		else if ((_Num = _Myios::rdbuf()->in_avail()) < 0)
			_State |= ios_base::eofbit;	
		else if (0 < _Count && 0 < _Num)
			{	
			read(_Str, _Num < _Count ? _Num : _Count);
			}

		_Myios::setstate(_State);
		return (gcount());
		}

	int_type  peek()
		{	
		ios_base::iostate _State = ios_base::goodbit;
		_Chcount = 0;
		int_type _Meta = 0;
		const sentry _Ok(*this, true);

		if (!_Ok)
			_Meta = _Traits::eof();	
		else
			{	
			try {
			if (_Traits::eq_int_type(_Traits::eof(),
				_Meta = _Myios::rdbuf()->sgetc()))
				_State |= ios_base::eofbit;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (_Meta);
		}

	_Myt&  putback(_Elem _Ch)
		{	
		_Chcount = 0;
		ios_base::iostate _State = ios_base::goodbit;
		ios_base::iostate _Oldstate = _Myios::rdstate();
		_Myios::clear(_Oldstate & ~ios_base::eofbit);
		const sentry _Ok(*this, true);

		if (_Ok)
			{	
			try {
			if (_Traits::eq_int_type(_Traits::eof(),
				_Myios::rdbuf()->sputbackc(_Ch)))
				_State |= ios_base::badbit | _Oldstate;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	_Myt&  unget()
		{	
		_Chcount = 0;
		ios_base::iostate _State = ios_base::goodbit;
		ios_base::iostate _Oldstate = _Myios::rdstate();
		_Myios::clear(_Oldstate & ~ios_base::eofbit);
		const sentry _Ok(*this, true);

		if (_Ok)
			{	
			try {
			if (_Traits::eq_int_type(_Traits::eof(),
				_Myios::rdbuf()->sungetc()))
				_State |= ios_base::badbit | _Oldstate;
			} catch (...) { _Myios::setstate(ios_base::badbit, true); }
			}

		_Myios::setstate(_State);
		return (*this);
		}

	streamsize  gcount() const
		{	
		return (_Chcount);
		}

	int  sync()
		{	
		const sentry _Ok(*this, true);

		if (_Myios::rdbuf() == 0)
			return (-1);
		else if (_Myios::rdbuf()->pubsync() == -1)
			{	
			_Myios::setstate(ios_base::badbit);
			return (-1);
			}
		else
			return (0);
		}

	_Myt&  seekg(pos_type _Pos)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		ios_base::iostate _Oldstate = _Myios::rdstate();
		_Myios::clear(_Oldstate & ~ios_base::eofbit);
		const sentry _Ok(*this, true);

		if (!this->fail()
			&& (off_type)_Myios::rdbuf()->pubseekpos(_Pos,
				ios_base::in) == _BADOFF)
			_Myios::setstate(_State | ios_base::failbit);
		return (*this);
		}

	_Myt&  seekg(off_type _Off, ios_base::seekdir _Way)
		{	
		ios_base::iostate _State = ios_base::goodbit;
		ios_base::iostate _Oldstate = _Myios::rdstate();
		_Myios::clear(_Oldstate & ~ios_base::eofbit);
		const sentry _Ok(*this, true);

		if (!this->fail()
			&& (off_type)_Myios::rdbuf()->pubseekoff(_Off, _Way,
				ios_base::in) == _BADOFF)
			_Myios::setstate(_State | ios_base::failbit);
		return (*this);
		}

	pos_type  tellg()
		{	
		const sentry _Ok(*this, true);

		if (!this->fail())
			return (_Myios::rdbuf()->pubseekoff(0,
				ios_base::cur, ios_base::in));
		else
			return (pos_type(_BADOFF));
		}

private:
	streamsize _Chcount;	
	};

	

 #pragma vtordisp(pop)	

  






















 

  
template class __declspec(dllimport) basic_istream<char, char_traits<char> >;
template class __declspec(dllimport) basic_istream<wchar_t, char_traits<wchar_t> >;
  

  



 

		
template<class _Elem,
	class _Traits>
	class basic_iostream
	: public basic_istream<_Elem, _Traits>,
		public basic_ostream<_Elem, _Traits>
	{	
public:
	typedef basic_iostream<_Elem, _Traits> _Myt;
	typedef basic_istream<_Elem, _Traits> _Myis;
	typedef basic_ostream<_Elem, _Traits> _Myos;
	typedef basic_ios<_Elem, _Traits> _Myios;
	typedef _Elem char_type;
	typedef _Traits traits_type;
	typedef typename _Traits::int_type int_type;
	typedef typename _Traits::pos_type pos_type;
	typedef typename _Traits::off_type off_type;

	explicit  basic_iostream(basic_streambuf<_Elem, _Traits> *_Strbuf)
		: _Myis(_Strbuf, false),
			_Myos(_Noinit, false)
		{	
		}

protected:
	 basic_iostream(_Myt&& _Right)
		: _Myis(_Right.rdbuf(), false),
			_Myos(_Noinit, false)
		{	
		_Myios::init();
		_Myios::move(::std:: move(_Right));
		}

	_Myt&  operator=(_Myt&& _Right)
		{	
		this->swap(_Right);
		return (*this);
		}

	void  swap(_Myt& _Right)
		{	
		if (this != ::std:: addressof(_Right))
			_Myios::swap(_Right);
		}

public:
	 basic_iostream(const _Myt&) = delete;
	_Myt&  operator=(const _Myt&) = delete;

	virtual  ~basic_iostream() noexcept
		{	
		}
	};

	

 

  
template class __declspec(dllimport) basic_iostream<char, char_traits<char> >;
template class __declspec(dllimport) basic_iostream<wchar_t, char_traits<wchar_t> >;
  

  



 

		

template<class _Elem,
	class _Traits> inline
	basic_istream<_Elem, _Traits>& operator>>(
		basic_istream<_Elem, _Traits>& _Istr, _Elem *_Str)
	{	
	typedef basic_istream<_Elem, _Traits> _Myis;
	typedef ctype<_Elem> _Ctype;
	ios_base::iostate _State = ios_base::goodbit;
	_Elem *_Str0 = _Str;
	const typename _Myis::sentry _Ok(_Istr);

	if (_Ok)
		{	
		const _Ctype& _Ctype_fac = use_facet< _Ctype >(_Istr.getloc());

		try {
		streamsize _Count = 0 < _Istr.width() ? _Istr.width()
			: (numeric_limits<streamsize>::max)();
		typename _Myis::int_type _Meta = _Istr.rdbuf()->sgetc();
		_Elem _Ch;
		for (; 0 < --_Count; _Meta = _Istr.rdbuf()->snextc())
			if (_Traits::eq_int_type(_Traits::eof(), _Meta))
				{	
				_State |= ios_base::eofbit;
				break;
				}
			else if (_Ctype_fac.is(_Ctype::space,
				_Ch = _Traits::to_char_type(_Meta))
					|| _Ch == _Elem())
				break;	
			else
				*_Str++ = _Traits::to_char_type(_Meta);	
		} catch (...) { (_Istr).setstate(ios_base::badbit, true); }
		}

	*_Str = _Elem();	
	_Istr.width(0);
	_Istr.setstate(_Str == _Str0 ? _State | ios_base::failbit : _State);
	return (_Istr);
	}

template<class _Elem,
	class _Traits> inline
	basic_istream<_Elem, _Traits>& operator>>(
		basic_istream<_Elem, _Traits>& _Istr, _Elem& _Ch)
	{	
	typedef basic_istream<_Elem, _Traits> _Myis;

	typename _Myis::int_type _Meta;
	ios_base::iostate _State = ios_base::goodbit;
	const typename _Myis::sentry _Ok(_Istr);

	if (_Ok)
		{	
		try {
		_Meta = _Istr.rdbuf()->sbumpc();
		if (_Traits::eq_int_type(_Traits::eof(), _Meta))
			_State |= ios_base::eofbit | ios_base::failbit;	
		else
			_Ch = _Traits::to_char_type(_Meta);	
		} catch (...) { (_Istr).setstate(ios_base::badbit, true); }
		}

	_Istr.setstate(_State);
	return (_Istr);
	}

template<class _Traits> inline
	basic_istream<char, _Traits>& operator>>(
		basic_istream<char, _Traits>& _Istr, signed char *_Str)
	{	
	return (_Istr >> (char *)_Str);
	}

template<class _Traits> inline
	basic_istream<char, _Traits>& operator>>(
		basic_istream<char, _Traits>& _Istr, signed char& _Ch)
	{	
	return (_Istr >> (char&)_Ch);
	}

template<class _Traits> inline
	basic_istream<char, _Traits>& operator>>(
		basic_istream<char, _Traits>& _Istr, unsigned char *_Str)
	{	
	return (_Istr >> (char *)_Str);
	}

template<class _Traits> inline
	basic_istream<char, _Traits>& operator>>(
		basic_istream<char, _Traits>& _Istr, unsigned char& _Ch)
	{	
	return (_Istr >> (char&)_Ch);
	}

template<class _Elem,
	class _Traits,
	class _Ty> inline
	basic_istream<_Elem, _Traits>&
		operator>>(basic_istream<_Elem, _Traits>&& _Istr, _Ty&& _Val)
	{	
	_Istr >> ::std:: forward<_Ty>(_Val);
	return (_Istr);
	}

		
template<class _Elem,
	class _Traits> inline
	basic_istream<_Elem, _Traits>&
		__cdecl ws(basic_istream<_Elem, _Traits>& _Istr)
	{	
	typedef basic_istream<_Elem, _Traits> _Myis;
	typedef ctype<_Elem> _Ctype;

	if (!_Istr.eof())
		{	
		ios_base::iostate _State = ios_base::goodbit;
		const typename _Myis::sentry _Ok(_Istr, true);

		if (_Ok)
			{	
			const _Ctype& _Ctype_fac = use_facet< _Ctype >(_Istr.getloc());

			try {
			for (typename _Traits::int_type _Meta = _Istr.rdbuf()->sgetc(); ;
				_Meta = _Istr.rdbuf()->snextc())
				if (_Traits::eq_int_type(_Traits::eof(), _Meta))
					{	
					_State |= ios_base::eofbit;
					break;
					}
				else if (!_Ctype_fac.is(_Ctype::space,
					_Traits::to_char_type(_Meta)))
					break;	
			} catch (...) { (_Istr).setstate(ios_base::badbit, true); }
			}

		_Istr.setstate(_State);
		}
	return (_Istr);
	}
}

 
 #pragma warning(pop)
 #pragma pack(pop)










 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 
namespace std {
  











		
 extern __declspec(dllimport) istream cin, *_Ptr_cin;
 extern __declspec(dllimport) ostream cout, *_Ptr_cout;
 extern __declspec(dllimport) ostream cerr, *_Ptr_cerr;
 extern __declspec(dllimport) ostream clog, *_Ptr_clog;

 extern __declspec(dllimport) wistream wcin, *_Ptr_wcin;
 extern __declspec(dllimport) wostream wcout, *_Ptr_wcout;
 extern __declspec(dllimport) wostream wcerr, *_Ptr_wcerr;
 extern __declspec(dllimport) wostream wclog, *_Ptr_wclog;

		
class __declspec(dllimport) _Winit {
public:
	__thiscall _Winit();
	__thiscall ~_Winit() noexcept;
private:
	 static int _Init_cnt;
	};
  
}
 
 #pragma warning(pop)
 #pragma pack(pop)










#pragma once







#pragma once






#pragma pack(push,8)
#pragma warning(push,3)
#pragma warning(disable: 4702 )



namespace std {

template<class _Elem,
	class _Traits,
	class _SizeT> inline
	basic_ostream<_Elem, _Traits>& _Insert_string(
		basic_ostream<_Elem, _Traits>& _Ostr,
		const _Elem * const _Data, const _SizeT _Size)
	{	
	ios_base::iostate _State = ios_base::goodbit;
	_SizeT _Pad = _Ostr.width() <= 0 || static_cast<_SizeT>(_Ostr.width()) <= _Size
		? 0 : static_cast<_SizeT>(_Ostr.width()) - _Size;
	const typename basic_ostream<_Elem, _Traits>::sentry _Ok(_Ostr);

	if (!_Ok)
		_State |= ios_base::badbit;
	else
		{	
		try {
		if ((_Ostr.flags() & ios_base::adjustfield) != ios_base::left)
			for (; 0 < _Pad; --_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					{	
					_State |= ios_base::badbit;
					break;
					}

		if (_State == ios_base::goodbit
			&& _Ostr.rdbuf()->sputn(_Data, (streamsize)_Size)
				!= (streamsize)_Size)
				_State |= ios_base::badbit;
		else
			for (; 0 < _Pad; --_Pad)	
				if (_Traits::eq_int_type(_Traits::eof(),
					_Ostr.rdbuf()->sputc(_Ostr.fill())))
					{	
					_State |= ios_base::badbit;
					break;
					}
		_Ostr.width(0);
		} catch (...) { (_Ostr).setstate(ios_base::badbit, true); }
		}

	_Ostr.setstate(_State);
	return (_Ostr);
	}

}


#pragma warning(pop)
#pragma pack(pop)




 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4702 )
 
 

namespace std {
		
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_istream<_Elem, _Traits>& operator>>(
		basic_istream<_Elem, _Traits>&& _Istr,
		basic_string<_Elem, _Traits, _Alloc>& _Str)
	{	
	typedef ctype<_Elem> _Ctype;
	typedef basic_istream<_Elem, _Traits> _Myis;
	typedef basic_string<_Elem, _Traits, _Alloc> _Mystr;
	typedef typename _Mystr::size_type _Mysizt;

	ios_base::iostate _State = ios_base::goodbit;
	bool _Changed = false;
	const typename _Myis::sentry _Ok(_Istr);

	if (_Ok)
		{	
		const _Ctype& _Ctype_fac = use_facet< _Ctype >(_Istr.getloc());
		_Str.erase();

		try {
		_Mysizt _Size = 0 < _Istr.width()
			&& (_Mysizt)_Istr.width() < _Str.max_size()
				? (_Mysizt)_Istr.width() : _Str.max_size();
		typename _Traits::int_type _Meta = _Istr.rdbuf()->sgetc();

		for (; 0 < _Size; --_Size, _Meta = _Istr.rdbuf()->snextc())
			if (_Traits::eq_int_type(_Traits::eof(), _Meta))
				{	
				_State |= ios_base::eofbit;
				break;
				}
			else if (_Ctype_fac.is(_Ctype::space,
				_Traits::to_char_type(_Meta)))
				break;	
			else
				{	
				_Str.append(1, _Traits::to_char_type(_Meta));
				_Changed = true;
				}
		} catch (...) { (_Istr).setstate(ios_base::badbit, true); }
		}

	_Istr.width(0);
	if (!_Changed)
		_State |= ios_base::failbit;
	_Istr.setstate(_State);
	return (_Istr);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_istream<_Elem, _Traits>& getline(
		basic_istream<_Elem, _Traits>&& _Istr,
		basic_string<_Elem, _Traits, _Alloc>& _Str,
		const _Elem _Delim)
	{	
	typedef basic_istream<_Elem, _Traits> _Myis;

	ios_base::iostate _State = ios_base::goodbit;
	bool _Changed = false;
	const typename _Myis::sentry _Ok(_Istr, true);

	if (_Ok)
		{	
		try {
		_Str.erase();
		const typename _Traits::int_type _Metadelim =
			_Traits::to_int_type(_Delim);
		typename _Traits::int_type _Meta = _Istr.rdbuf()->sgetc();

		for (; ; _Meta = _Istr.rdbuf()->snextc())
			if (_Traits::eq_int_type(_Traits::eof(), _Meta))
				{	
				_State |= ios_base::eofbit;
				break;
				}
			else if (_Traits::eq_int_type(_Meta, _Metadelim))
				{	
				_Changed = true;
				_Istr.rdbuf()->sbumpc();
				break;
				}
			else if (_Str.max_size() <= _Str.size())
				{	
				_State |= ios_base::failbit;
				break;
				}
			else
				{	
				_Str += _Traits::to_char_type(_Meta);
				_Changed = true;
				}
		} catch (...) { (_Istr).setstate(ios_base::badbit, true); }
		}

	if (!_Changed)
		_State |= ios_base::failbit;
	_Istr.setstate(_State);
	return (_Istr);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_istream<_Elem, _Traits>& getline(
		basic_istream<_Elem, _Traits>&& _Istr,
		basic_string<_Elem, _Traits, _Alloc>& _Str)
	{	
	return (getline(_Istr, _Str, _Istr.widen('\n')));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_istream<_Elem, _Traits>& operator>>(
		basic_istream<_Elem, _Traits>& _Istr,
		basic_string<_Elem, _Traits, _Alloc>& _Str)
	{	
	return (::std:: move(_Istr) >> _Str);
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_istream<_Elem, _Traits>& getline(
		basic_istream<_Elem, _Traits>& _Istr,
		basic_string<_Elem, _Traits, _Alloc>& _Str,
		const _Elem _Delim)
	{	
	return (getline(::std:: move(_Istr), _Str, _Delim));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_istream<_Elem, _Traits>& getline(
		basic_istream<_Elem, _Traits>& _Istr,
		basic_string<_Elem, _Traits, _Alloc>& _Str)
	{	
	return (getline(::std:: move(_Istr), _Str, _Istr.widen('\n')));
	}

template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_ostream<_Elem, _Traits>& operator<<(
		basic_ostream<_Elem, _Traits>& _Ostr,
		const basic_string<_Elem, _Traits, _Alloc>& _Str)
	{	
	return (_Insert_string(_Ostr, _Str.data(), _Str.size()));
	}

		

inline int stoi(const string& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const char *_Ptr = _Str.c_str();
	char *_Eptr;
	(*_errno()) = 0;
	long _Ans = :: strtol(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stoi argument");
	if ((*_errno()) == 34 || _Ans < (-2147483647 - 1) || 2147483647 < _Ans)
		_Xout_of_range("stoi argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return ((int)_Ans);
	}

inline long stol(const string& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const char *_Ptr = _Str.c_str();
	char *_Eptr;
	(*_errno()) = 0;
	long _Ans = :: strtol(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stol argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stol argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline unsigned long stoul(const string& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const char *_Ptr = _Str.c_str();
	char *_Eptr;
	(*_errno()) = 0;
	unsigned long _Ans = :: strtoul(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stoul argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stoul argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline long long stoll(const string& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const char *_Ptr = _Str.c_str();
	char *_Eptr;
	(*_errno()) = 0;
	long long _Ans = :: strtoll(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stoll argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stoll argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline unsigned long long stoull(const string& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const char *_Ptr = _Str.c_str();
	char *_Eptr;
	(*_errno()) = 0;
	unsigned long long _Ans = :: strtoull(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stoull argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stoull argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline float stof(const string& _Str, size_t *_Idx = 0)
	{	
	const char *_Ptr = _Str.c_str();
	char *_Eptr;
	(*_errno()) = 0;
	float _Ans = :: strtof(_Ptr, &_Eptr);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stof argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stof argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline double stod(const string& _Str, size_t *_Idx = 0)
	{	
	const char *_Ptr = _Str.c_str();
	char *_Eptr;
	(*_errno()) = 0;
	double _Ans = :: strtod(_Ptr, &_Eptr);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stod argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stod argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline long double stold(const string& _Str, size_t *_Idx = 0)
	{	
	const char *_Ptr = _Str.c_str();
	char *_Eptr;
	(*_errno()) = 0;
	long double _Ans = :: strtold(_Ptr, &_Eptr);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stold argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stold argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

		
inline int stoi(const wstring& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const wchar_t *_Ptr = _Str.c_str();
	wchar_t *_Eptr;
	(*_errno()) = 0;
	long _Ans = :: wcstol(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stoi argument");
	if ((*_errno()) == 34 || _Ans < (-2147483647 - 1) || 2147483647 < _Ans)
		_Xout_of_range("stoi argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return ((int)_Ans);
	}

inline long stol(const wstring& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const wchar_t *_Ptr = _Str.c_str();
	wchar_t *_Eptr;
	(*_errno()) = 0;
	long _Ans = :: wcstol(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stol argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stol argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline unsigned long stoul(const wstring& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const wchar_t *_Ptr = _Str.c_str();
	wchar_t *_Eptr;
	(*_errno()) = 0;
	unsigned long _Ans = :: wcstoul(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stoul argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stoul argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline long long stoll(const wstring& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const wchar_t *_Ptr = _Str.c_str();
	wchar_t *_Eptr;
	(*_errno()) = 0;
	long long _Ans = :: wcstoll(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stoll argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stoll argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline unsigned long long stoull(const wstring& _Str, size_t *_Idx = 0,
	int _Base = 10)
	{	
	const wchar_t *_Ptr = _Str.c_str();
	wchar_t *_Eptr;
	(*_errno()) = 0;
	unsigned long long _Ans = :: wcstoull(_Ptr, &_Eptr, _Base);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stoull argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stoull argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline float stof(const wstring& _Str, size_t *_Idx = 0)
	{	
	const wchar_t *_Ptr = _Str.c_str();
	wchar_t *_Eptr;
	(*_errno()) = 0;
	float _Ans = :: wcstof(_Ptr, &_Eptr);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stof argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stof argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline double stod(const wstring& _Str, size_t *_Idx = 0)
	{	
	const wchar_t *_Ptr = _Str.c_str();
	wchar_t *_Eptr;
	(*_errno()) = 0;
	double _Ans = :: wcstod(_Ptr, &_Eptr);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stod argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stod argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

inline long double stold(const wstring& _Str, size_t *_Idx = 0)
	{	
	const wchar_t *_Ptr = _Str.c_str();
	wchar_t *_Eptr;
	(*_errno()) = 0;
	long double _Ans = :: wcstold(_Ptr, &_Eptr);

	if (_Ptr == _Eptr)
		_Xinvalid_argument("invalid stold argument");
	if ((*_errno()) == 34)
		_Xout_of_range("stold argument out of range");
	if (_Idx != 0)
		*_Idx = (size_t)(_Eptr - _Ptr);
	return (_Ans);
	}

		
template<class _Elem,
	class _UTy> inline
	_Elem* _UIntegral_to_buff(_Elem* _RNext, _UTy _UVal)
	{	
	static_assert(is_unsigned<_UTy>::value, "_UTy must be unsigned");





#pragma warning(push)
#pragma warning(disable: 4127)	
	if (sizeof(_UTy) > 4)
		{	
		while (_UVal > 0xFFFFFFFFU)
			{
			auto _UVal_chunk = static_cast<_Uint32t>(_UVal % 1000000000);
			_UVal /= 1000000000;

			for (int _Idx = 0; _Idx != 9; ++_Idx)
				{
				*--_RNext = '0' + _UVal_chunk % 10;
				_UVal_chunk /= 10;
				}
			}
		}
#pragma warning(pop)

	auto _UVal_trunc = static_cast<_Uint32t>(_UVal);


	do
		{
		*--_RNext = '0' + _UVal_trunc % 10;
		_UVal_trunc /= 10;
		}
	while (_UVal_trunc != 0);
	return (_RNext);
	}

template<class _Elem,
	class _Ty> inline
	basic_string<_Elem> _Integral_to_string(const _Ty _Val)
	{	
	static_assert(is_integral<_Ty>::value, "_Ty must be integral");
	using _UTy = make_unsigned_t<_Ty>;
	_Elem _Buff[21]; 
	_Elem* const _Buff_end = ::std:: end(_Buff);
	_Elem* _RNext = _Buff_end;
	auto _UVal = static_cast<_UTy>(_Val);
	if (_Val < 0)
		{
		_RNext = _UIntegral_to_buff(_RNext, 0 - _UVal);
		*--_RNext = '-';
		}
	else
		_RNext = _UIntegral_to_buff(_RNext, _UVal);

	return (basic_string<_Elem>(_RNext, _Buff_end));
	}

template<class _Ty> inline
	string _Floating_to_string(const char *_Fmt, _Ty _Val)
	{	
	static_assert(is_floating_point<_Ty>::value,
		"_Ty must be floating point");

	int _Len = :: _scprintf(_Fmt, _Val);
	string _Str(_Len + 1, '\0');
	:: sprintf_s(&_Str[0], _Len + 1, _Fmt, _Val);
	_Str.resize(_Len);
	return (_Str);
	}

template<class _Ty> inline
	wstring _Floating_to_wstring(const wchar_t *_Fmt, _Ty _Val)
	{	
	static_assert(is_floating_point<_Ty>::value,
		"_Ty must be floating point");

	int _Len = :: _scwprintf(_Fmt, _Val);
	wstring _Str(_Len + 1, L'\0');
	:: swprintf_s(&_Str[0], _Len + 1, _Fmt, _Val);
	_Str.resize(_Len);
	return (_Str);
	}



		
inline string to_string(int _Val)
	{	
	return (_Integral_to_string<char>(_Val));
	}

inline string to_string(unsigned int _Val)
	{	
	return (_Integral_to_string<char>(_Val));
	}

inline string to_string(long _Val)
	{	
	return (_Integral_to_string<char>(_Val));
	}

inline string to_string(unsigned long _Val)
	{	
	return (_Integral_to_string<char>(_Val));
	}

inline string to_string(long long _Val)
	{	
	return (_Integral_to_string<char>(_Val));
	}

inline string to_string(unsigned long long _Val)
	{	
	return (_Integral_to_string<char>(_Val));
	}

inline string to_string(float _Val)
	{	
	return (_Floating_to_string("%f", _Val));
	}

inline string to_string(double _Val)
	{	
	return (_Floating_to_string("%f", _Val));
	}

inline string to_string(long double _Val)
	{	
	return (_Floating_to_string("%Lf", _Val));
	}

		
inline wstring to_wstring(int _Val)
	{	
	return (_Integral_to_string<wchar_t>(_Val));
	}

inline wstring to_wstring(unsigned int _Val)
	{	
	return (_Integral_to_string<wchar_t>(_Val));
	}

inline wstring to_wstring(long _Val)
	{	
	return (_Integral_to_string<wchar_t>(_Val));
	}

inline wstring to_wstring(unsigned long _Val)
	{	
	return (_Integral_to_string<wchar_t>(_Val));
	}

inline wstring to_wstring(long long _Val)
	{	
	return (_Integral_to_string<wchar_t>(_Val));
	}

inline wstring to_wstring(unsigned long long _Val)
	{	
	return (_Integral_to_string<wchar_t>(_Val));
	}

inline wstring to_wstring(float _Val)
	{	
	return (_Floating_to_wstring(L"%f", _Val));
	}

inline wstring to_wstring(double _Val)
	{	
	return (_Floating_to_wstring(L"%f", _Val));
	}

inline wstring to_wstring(long double _Val)
	{	
	return (_Floating_to_wstring(L"%Lf", _Val));
	}

	





#pragma warning(push)
#pragma warning(disable: 4455)	

inline namespace literals {
inline namespace string_literals {
inline string operator "" s(const char *_Str, size_t _Len)
	{	
	return (string(_Str, _Len));
	}

inline wstring operator "" s(const wchar_t *_Str, size_t _Len)
	{	
	return (wstring(_Str, _Len));
	}

inline u16string operator "" s(const char16_t *_Str, size_t _Len)
	{	
	return (u16string(_Str, _Len));
	}

inline u32string operator "" s(const char32_t *_Str, size_t _Len)
	{	
	return (u32string(_Str, _Len));
	}
}	
}	

#pragma warning(pop)





}

 
 #pragma warning(pop)
 #pragma pack(pop)









using namespace std;


































































































































































































































 











 







 









 













































































































































































































#pragma warning( disable : 4503 ) 



















































































































































































































































































































































































































   
   




























































































































































































































































































































































































































































































































































































































































































































































































































































































































namespace boost{




   typedef long long long_long_type;
   typedef unsigned long long ulong_long_type;

}

















































































































































































































































































































































































































































































































































#pragma once








































































































































































































































































































































































































namespace boost { namespace mpl {

struct void_;

}}

























































namespace boost { namespace mpl {

template< bool C_ > struct bool_;


typedef bool_<true> true_;
typedef bool_<false> false_;

}}






















































namespace boost { namespace mpl {
struct integral_c_tag { static const int value = 0; };
}}






namespace boost { namespace mpl {

template< bool C_ > struct bool_
{
    static const bool value = C_;
    typedef integral_c_tag tag;
    typedef bool_ type;
    typedef bool value_type;
    constexpr operator bool() const { return this->value; }
};


template< bool C_ >
bool const bool_<C_>::value;


}}






















namespace boost { namespace mpl {


struct na
{
    typedef na type;
    enum { value = 0 };
};

}}




































namespace boost { namespace mpl {

template< typename T >
struct is_na
    : false_
{



};

template<>
struct is_na<na>
    : true_
{



};

template< typename T >
struct is_not_na
    : true_
{



};

template<>
struct is_not_na<na>
    : false_
{



};


template< typename T, typename U > struct if_na
{
    typedef T type;
};

template< typename U > struct if_na<na,U>
{
    typedef U type;
};























}}

























































































































































































namespace boost { namespace mpl {

template< int N > struct int_;

}}





















































































































































































































namespace boost { namespace mpl {

template< int N >
struct int_
{
    static const int value = N;





    typedef int_ type;

    typedef int value_type;
    typedef integral_c_tag tag;















    typedef boost::mpl::int_< static_cast<int>((value + 1)) > next;
    typedef boost::mpl::int_< static_cast<int>((value - 1)) > prior;


    
    
    
    
    constexpr operator int() const { return static_cast<int>(this->value); } 
};


template< int N >
int const boost::mpl::int_< N >::value;


}}





















































namespace boost { namespace mpl { namespace aux {

template< typename F > struct template_arity;

}}}




namespace boost { namespace mpl {

template< 
      typename T = na
    , typename Tag = void_
    
    >
struct lambda;

}}




























































































































































































































































































































































namespace boost { namespace mpl {

template<
      typename F, typename T1 = na, typename T2 = na, typename T3 = na
    , typename T4 = na, typename T5 = na
    >
struct bind;

template<
      typename F
    >
struct bind0;

template<
      typename F, typename T1
    >
struct bind1;

template<
      typename F, typename T1, typename T2
    >
struct bind2;

template<
      typename F, typename T1, typename T2, typename T3
    >
struct bind3;

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    >
struct bind4;

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5
    >
struct bind5;

}}
















































































































































namespace boost { namespace mpl {

template< int N > struct arg;

}}

















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#pragma warning(once:4002)


































































































































































		














		



























































































































































































































































































































































































































































































































































































































































































































































































































































































































namespace boost { namespace mpl {

namespace aux {

template< long C_ > 
struct not_impl
    : bool_<!C_>
{
};

} 


template<
      typename T = na
    >
struct not_
    : aux::not_impl<
          T::type::value
        >
{
    
};

	template<> struct not_<  na >
	{ 
		template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  >
		struct apply : not_<  T1 > { };
	}; 

	template< typename Tag >
	struct lambda< not_<  na > , Tag  >
	{ 
		typedef false_ is_le;
		typedef not_<  na > result_;
		typedef not_<  na > type;
	};   

}}












































































































namespace boost { namespace mpl { namespace aux {

template< typename T > struct value_type_wknd
{
    typedef typename T::value_type type;
};








}}}






















































namespace boost { namespace mpl { namespace aux {

typedef char (&no_tag)[1];
typedef char (&yes_tag)[2];

template< bool C_ > struct yes_no_tag
{
    typedef no_tag type;
};

template<> struct yes_no_tag<true>
{
    typedef yes_tag type;
};


template< long n > struct weighted_tag
{

    typedef char (&type)[n];




};








}}}








































































































namespace boost { namespace mpl {

struct failed {};










template< bool C >  struct assert        { typedef void* type; };
template<>          struct assert<false> { typedef assert type; };

template< bool C >
int assertion_failed( typename assert<C>::type );

template< bool C >
struct assertion
{
    static int failed( assert<false> );
};

template<>
struct assertion<true>
{
    static int failed( void* );
};

struct assert_
{

    template< typename T1, typename T2 = na, typename T3 = na, typename T4 = na > struct types {};

    static assert_ const arg;
    enum relations { equal = 1, not_equal, greater, greater_equal, less, less_equal };
};




bool operator==( failed, failed );
bool operator!=( failed, failed );
bool operator>( failed, failed );
bool operator>=( failed, failed );
bool operator<( failed, failed );
bool operator<=( failed, failed );





template< long x, long y, bool (*)(failed, failed) > 
struct assert_relation {};

















































template< bool > struct assert_arg_pred_impl { typedef int type; };
template<> struct assert_arg_pred_impl<true> { typedef void* type; };

template< typename P > struct assert_arg_pred
{
    typedef typename P::type p_type;
    typedef typename assert_arg_pred_impl< p_type::value >::type type;
};

template< typename P > struct assert_arg_pred_not
{
    typedef typename P::type p_type;
    static const bool p = !p_type::value;
    typedef typename assert_arg_pred_impl<p>::type type;
};

template< typename Pred >
failed ************ (Pred::************ 
      assert_arg( void (*)(Pred), typename assert_arg_pred<Pred>::type )
    );

template< typename Pred >
failed ************ (boost::mpl::not_<Pred>::************ 
      assert_not_arg( void (*)(Pred), typename assert_arg_pred_not<Pred>::type )
    );

template< typename Pred >
assert<false>
assert_arg( void (*)(Pred), typename assert_arg_pred_not<Pred>::type );

template< typename Pred >
assert<false>
assert_not_arg( void (*)(Pred), typename assert_arg_pred<Pred>::type );










































}}












































































































































































































































































































































































namespace boost { namespace mpl {
template<> struct arg< -1 >
{
    static const int value = -1;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U1 type;
        static const std::size_t mpl_assertion_in_line_0 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<1>
{
    static const int value = 1;
    typedef arg<2> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U1 type;
        static const std::size_t mpl_assertion_in_line_1 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<2>
{
    static const int value = 2;
    typedef arg<3> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U2 type;
        static const std::size_t mpl_assertion_in_line_2 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<3>
{
    static const int value = 3;
    typedef arg<4> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U3 type;
        static const std::size_t mpl_assertion_in_line_3 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<4>
{
    static const int value = 4;
    typedef arg<5> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U4 type;
        static const std::size_t mpl_assertion_in_line_4 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<5>
{
    static const int value = 5;
    typedef arg<6> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U5 type;
        static const std::size_t mpl_assertion_in_line_5 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};



}}









































































































































































namespace boost { namespace mpl {
typedef arg< -1 > _;
}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_;
}

}}



namespace boost { namespace mpl {
typedef arg<1> _1;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_1;
}

}}
namespace boost { namespace mpl {
typedef arg<2> _2;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_2;
}

}}
namespace boost { namespace mpl {
typedef arg<3> _3;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_3;
}

}}
namespace boost { namespace mpl {
typedef arg<4> _4;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_4;
}

}}
namespace boost { namespace mpl {
typedef arg<5> _5;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_5;
}

}}
namespace boost { namespace mpl {
typedef arg<6> _6;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_6;
}

}}










































































































































namespace boost { namespace mpl {




template<
      typename T = na
    >
struct next
{
    typedef typename T::next type;
    
};

template<
      typename T = na
    >
struct prior
{
    typedef typename T::prior type;
    
};

template<> struct next<  na > { template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : next<  T1 > { }; }; template< typename Tag > struct lambda< next<  na > , Tag  > { typedef false_ is_le; typedef next<  na > result_; typedef next<  na > type; };   
template<> struct prior<  na > { template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : prior<  T1 > { }; }; template< typename Tag > struct lambda< prior<  na > , Tag  > { typedef false_ is_le; typedef prior<  na > result_; typedef prior<  na > type; };   

}}





























namespace boost { namespace mpl {

template<
      typename T = na
    , int not_le_ = 0
    >
struct protect : T
{



    typedef protect type;

};











template<> struct protect<  na > { template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : protect<  T1 > { }; };




}}




















































































namespace boost { namespace mpl { namespace aux {

template< typename T > struct type_wrapper
{
    typedef T type;
};






template< typename T > struct wrapped_type;

template< typename T > struct wrapped_type< type_wrapper<T> >
{
    typedef T type;
};







}}}





















































































































































































































































































































































































































































































































































































































































































































































































































































































































namespace boost { namespace mpl { namespace aux {

template< typename T, typename fallback_ = boost::mpl::bool_<false> > struct has_apply { struct gcc_3_2_wknd { template< typename U > static boost::mpl::aux::yes_tag test( boost::mpl::aux::type_wrapper<U> const volatile* , boost::mpl::aux::type_wrapper<typename U::apply>* = 0 ); static boost::mpl::aux::no_tag test(...); }; typedef boost::mpl::aux::type_wrapper<T> t_; static const bool value = sizeof(gcc_3_2_wknd::test(static_cast<t_*>(0))) == sizeof(boost::mpl::aux::yes_tag); typedef boost::mpl::bool_<value> type; };







}}}
































































































namespace boost { namespace mpl {

template<
      typename F

    , typename has_apply_ = typename aux::has_apply<F>::type

    >
struct apply_wrap0

    : F::template apply<  >
{
};

template< typename F >
struct apply_wrap0< F,true_ >
    : F::apply
{
};

template<
      typename F, typename T1

    >
struct apply_wrap1

    : F::template apply<T1>
{
};

template<
      typename F, typename T1, typename T2

    >
struct apply_wrap2

    : F::template apply< T1,T2 >
{
};

template<
      typename F, typename T1, typename T2, typename T3

    >
struct apply_wrap3

    : F::template apply< T1,T2,T3 >
{
};

template<
      typename F, typename T1, typename T2, typename T3, typename T4

    >
struct apply_wrap4

    : F::template apply< T1,T2,T3,T4 >
{
};

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5

    >
struct apply_wrap5

    : F::template apply< T1,T2,T3,T4,T5 >
{
};

}}
























































































































































































































































































namespace boost { namespace mpl {

namespace aux {

template<
      typename T, typename U1, typename U2, typename U3, typename U4
    , typename U5
    >
struct resolve_bind_arg
{
    typedef T type;
};

template<
      typename T
    , typename Arg
    >
struct replace_unnamed_arg
{
    typedef Arg next;
    typedef T type;
};

template<
      typename Arg
    >
struct replace_unnamed_arg< arg< -1 >, Arg >
{
    typedef typename Arg::next next;
    typedef Arg type;
};

template<
      int N, typename U1, typename U2, typename U3, typename U4, typename U5
    >
struct resolve_bind_arg< arg<N>, U1, U2, U3, U4, U5 >
{
    typedef typename apply_wrap5<mpl::arg<N>, U1, U2, U3, U4, U5>::type type;
};

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5, typename U1, typename U2, typename U3, typename U4
    , typename U5
    >
struct resolve_bind_arg< bind< F,T1,T2,T3,T4,T5 >, U1, U2, U3, U4, U5 >
{
    typedef bind< F,T1,T2,T3,T4,T5 > f_;
    typedef typename apply_wrap5< f_,U1,U2,U3,U4,U5 >::type type;
};

} 

template<
      typename F
    >
struct bind0
{
    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
     private:
        typedef aux::replace_unnamed_arg< F, mpl::arg<1> > r0;
        typedef typename r0::type a0;
        typedef typename r0::next n1;
        typedef typename aux::resolve_bind_arg< a0,U1,U2,U3,U4,U5 >::type f_;
        
     public:
        typedef typename apply_wrap0<
              f_
            >::type type;

    };
};

namespace aux {

template<
      typename F, typename U1, typename U2, typename U3, typename U4
    , typename U5
    >
struct resolve_bind_arg<
      bind0<F>, U1, U2, U3, U4, U5
    >
{
    typedef bind0<F> f_;
    typedef typename apply_wrap5< f_,U1,U2,U3,U4,U5 >::type type;
};

} 




template<
      typename F
    >
struct bind< F,na,na,na,na,na >
    : bind0<F>
{
};

template<
      typename F, typename T1
    >
struct bind1
{
    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
     private:
        typedef aux::replace_unnamed_arg< F, mpl::arg<1> > r0;
        typedef typename r0::type a0;
        typedef typename r0::next n1;
        typedef typename aux::resolve_bind_arg< a0,U1,U2,U3,U4,U5 >::type f_;
        
        typedef aux::replace_unnamed_arg< T1,n1 > r1;
        typedef typename r1::type a1;
        typedef typename r1::next n2;
        typedef aux::resolve_bind_arg< a1,U1,U2,U3,U4,U5 > t1;
        
     public:
        typedef typename apply_wrap1<
              f_
            , typename t1::type
            >::type type;

    };
};

namespace aux {

template<
      typename F, typename T1, typename U1, typename U2, typename U3
    , typename U4, typename U5
    >
struct resolve_bind_arg<
      bind1< F,T1 >, U1, U2, U3, U4, U5
    >
{
    typedef bind1< F,T1 > f_;
    typedef typename apply_wrap5< f_,U1,U2,U3,U4,U5 >::type type;
};

} 




template<
      typename F, typename T1
    >
struct bind< F,T1,na,na,na,na >
    : bind1< F,T1 >
{
};

template<
      typename F, typename T1, typename T2
    >
struct bind2
{
    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
     private:
        typedef aux::replace_unnamed_arg< F, mpl::arg<1> > r0;
        typedef typename r0::type a0;
        typedef typename r0::next n1;
        typedef typename aux::resolve_bind_arg< a0,U1,U2,U3,U4,U5 >::type f_;
        
        typedef aux::replace_unnamed_arg< T1,n1 > r1;
        typedef typename r1::type a1;
        typedef typename r1::next n2;
        typedef aux::resolve_bind_arg< a1,U1,U2,U3,U4,U5 > t1;
        
        typedef aux::replace_unnamed_arg< T2,n2 > r2;
        typedef typename r2::type a2;
        typedef typename r2::next n3;
        typedef aux::resolve_bind_arg< a2,U1,U2,U3,U4,U5 > t2;
        
     public:
        typedef typename apply_wrap2<
              f_
            , typename t1::type, typename t2::type
            >::type type;

    };
};

namespace aux {

template<
      typename F, typename T1, typename T2, typename U1, typename U2
    , typename U3, typename U4, typename U5
    >
struct resolve_bind_arg<
      bind2< F,T1,T2 >, U1, U2, U3, U4, U5
    >
{
    typedef bind2< F,T1,T2 > f_;
    typedef typename apply_wrap5< f_,U1,U2,U3,U4,U5 >::type type;
};

} 




template<
      typename F, typename T1, typename T2
    >
struct bind< F,T1,T2,na,na,na >
    : bind2< F,T1,T2 >
{
};

template<
      typename F, typename T1, typename T2, typename T3
    >
struct bind3
{
    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
     private:
        typedef aux::replace_unnamed_arg< F, mpl::arg<1> > r0;
        typedef typename r0::type a0;
        typedef typename r0::next n1;
        typedef typename aux::resolve_bind_arg< a0,U1,U2,U3,U4,U5 >::type f_;
        
        typedef aux::replace_unnamed_arg< T1,n1 > r1;
        typedef typename r1::type a1;
        typedef typename r1::next n2;
        typedef aux::resolve_bind_arg< a1,U1,U2,U3,U4,U5 > t1;
        
        typedef aux::replace_unnamed_arg< T2,n2 > r2;
        typedef typename r2::type a2;
        typedef typename r2::next n3;
        typedef aux::resolve_bind_arg< a2,U1,U2,U3,U4,U5 > t2;
        
        typedef aux::replace_unnamed_arg< T3,n3 > r3;
        typedef typename r3::type a3;
        typedef typename r3::next n4;
        typedef aux::resolve_bind_arg< a3,U1,U2,U3,U4,U5 > t3;
        
     public:
        typedef typename apply_wrap3<
              f_
            , typename t1::type, typename t2::type, typename t3::type
            >::type type;

    };
};

namespace aux {

template<
      typename F, typename T1, typename T2, typename T3, typename U1
    , typename U2, typename U3, typename U4, typename U5
    >
struct resolve_bind_arg<
      bind3< F,T1,T2,T3 >, U1, U2, U3, U4, U5
    >
{
    typedef bind3< F,T1,T2,T3 > f_;
    typedef typename apply_wrap5< f_,U1,U2,U3,U4,U5 >::type type;
};

} 




template<
      typename F, typename T1, typename T2, typename T3
    >
struct bind< F,T1,T2,T3,na,na >
    : bind3< F,T1,T2,T3 >
{
};

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    >
struct bind4
{
    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
     private:
        typedef aux::replace_unnamed_arg< F, mpl::arg<1> > r0;
        typedef typename r0::type a0;
        typedef typename r0::next n1;
        typedef typename aux::resolve_bind_arg< a0,U1,U2,U3,U4,U5 >::type f_;
        
        typedef aux::replace_unnamed_arg< T1,n1 > r1;
        typedef typename r1::type a1;
        typedef typename r1::next n2;
        typedef aux::resolve_bind_arg< a1,U1,U2,U3,U4,U5 > t1;
        
        typedef aux::replace_unnamed_arg< T2,n2 > r2;
        typedef typename r2::type a2;
        typedef typename r2::next n3;
        typedef aux::resolve_bind_arg< a2,U1,U2,U3,U4,U5 > t2;
        
        typedef aux::replace_unnamed_arg< T3,n3 > r3;
        typedef typename r3::type a3;
        typedef typename r3::next n4;
        typedef aux::resolve_bind_arg< a3,U1,U2,U3,U4,U5 > t3;
        
        typedef aux::replace_unnamed_arg< T4,n4 > r4;
        typedef typename r4::type a4;
        typedef typename r4::next n5;
        typedef aux::resolve_bind_arg< a4,U1,U2,U3,U4,U5 > t4;
        
     public:
        typedef typename apply_wrap4<
              f_
            , typename t1::type, typename t2::type, typename t3::type
            , typename t4::type
            >::type type;

    };
};

namespace aux {

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename U1, typename U2, typename U3, typename U4, typename U5
    >
struct resolve_bind_arg<
      bind4< F,T1,T2,T3,T4 >, U1, U2, U3, U4, U5
    >
{
    typedef bind4< F,T1,T2,T3,T4 > f_;
    typedef typename apply_wrap5< f_,U1,U2,U3,U4,U5 >::type type;
};

} 




template<
      typename F, typename T1, typename T2, typename T3, typename T4
    >
struct bind< F,T1,T2,T3,T4,na >
    : bind4< F,T1,T2,T3,T4 >
{
};

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5
    >
struct bind5
{
    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
     private:
        typedef aux::replace_unnamed_arg< F, mpl::arg<1> > r0;
        typedef typename r0::type a0;
        typedef typename r0::next n1;
        typedef typename aux::resolve_bind_arg< a0,U1,U2,U3,U4,U5 >::type f_;
        
        typedef aux::replace_unnamed_arg< T1,n1 > r1;
        typedef typename r1::type a1;
        typedef typename r1::next n2;
        typedef aux::resolve_bind_arg< a1,U1,U2,U3,U4,U5 > t1;
        
        typedef aux::replace_unnamed_arg< T2,n2 > r2;
        typedef typename r2::type a2;
        typedef typename r2::next n3;
        typedef aux::resolve_bind_arg< a2,U1,U2,U3,U4,U5 > t2;
        
        typedef aux::replace_unnamed_arg< T3,n3 > r3;
        typedef typename r3::type a3;
        typedef typename r3::next n4;
        typedef aux::resolve_bind_arg< a3,U1,U2,U3,U4,U5 > t3;
        
        typedef aux::replace_unnamed_arg< T4,n4 > r4;
        typedef typename r4::type a4;
        typedef typename r4::next n5;
        typedef aux::resolve_bind_arg< a4,U1,U2,U3,U4,U5 > t4;
        
        typedef aux::replace_unnamed_arg< T5,n5 > r5;
        typedef typename r5::type a5;
        typedef typename r5::next n6;
        typedef aux::resolve_bind_arg< a5,U1,U2,U3,U4,U5 > t5;
        
     public:
        typedef typename apply_wrap5<
              f_
            , typename t1::type, typename t2::type, typename t3::type
            , typename t4::type, typename t5::type
            >::type type;

    };
};

namespace aux {

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5, typename U1, typename U2, typename U3, typename U4
    , typename U5
    >
struct resolve_bind_arg<
      bind5< F,T1,T2,T3,T4,T5 >, U1, U2, U3, U4, U5
    >
{
    typedef bind5< F,T1,T2,T3,T4,T5 > f_;
    typedef typename apply_wrap5< f_,U1,U2,U3,U4,U5 >::type type;
};

} 






template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5
    >
struct bind
    : bind5< F,T1,T2,T3,T4,T5 >
{
};


template< template< typename T1, typename T2, typename T3 > class F, typename Tag >
struct quote3;

template< typename T1, typename T2, typename T3 > struct if_;

template<
      typename Tag, typename T1, typename T2, typename T3
    >
struct bind3<
      quote3< if_,Tag >
    , T1, T2, T3
    >
{
    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
     private:
        typedef mpl::arg<1> n1;
        typedef aux::replace_unnamed_arg< T1,n1 > r1;
        typedef typename r1::type a1;
        typedef typename r1::next n2;
        typedef aux::resolve_bind_arg< a1,U1,U2,U3,U4,U5 > t1;
        
        typedef aux::replace_unnamed_arg< T2,n2 > r2;
        typedef typename r2::type a2;
        typedef typename r2::next n3;
        typedef aux::resolve_bind_arg< a2,U1,U2,U3,U4,U5 > t2;
        
        typedef aux::replace_unnamed_arg< T3,n3 > r3;
        typedef typename r3::type a3;
        typedef typename r3::next n4;
        typedef aux::resolve_bind_arg< a3,U1,U2,U3,U4,U5 > t3;
        
        typedef typename if_<
              typename t1::type
            , t2, t3
            >::type f_;

     public:
        typedef typename f_::type type;
    };
};

template<
      template< typename T1, typename T2, typename T3 > class F, typename Tag
    >
struct quote3;

template< typename T1, typename T2, typename T3 > struct eval_if;

template<
      typename Tag, typename T1, typename T2, typename T3
    >
struct bind3<
      quote3< eval_if,Tag >
    , T1, T2, T3
    >
{
    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
     private:
        typedef mpl::arg<1> n1;
        typedef aux::replace_unnamed_arg< T1,n1 > r1;
        typedef typename r1::type a1;
        typedef typename r1::next n2;
        typedef aux::resolve_bind_arg< a1,U1,U2,U3,U4,U5 > t1;
        
        typedef aux::replace_unnamed_arg< T2,n2 > r2;
        typedef typename r2::type a2;
        typedef typename r2::next n3;
        typedef aux::resolve_bind_arg< a2,U1,U2,U3,U4,U5 > t2;
        
        typedef aux::replace_unnamed_arg< T3,n3 > r3;
        typedef typename r3::type a3;
        typedef typename r3::next n4;
        typedef aux::resolve_bind_arg< a3,U1,U2,U3,U4,U5 > t3;
        
        typedef typename eval_if<
              typename t1::type
            , t2, t3
            >::type f_;

     public:
        typedef typename f_::type type;
    };
};

}}











































































































































































































































































































































































































































































































































































































































































































namespace boost { namespace mpl {





struct void_ { typedef void_ type; };

}}

namespace boost { namespace mpl {

template< typename T >
struct is_void_
    : false_
{



};

template<>
struct is_void_<void_>
    : true_
{



};

template< typename T >
struct is_not_void_
    : true_
{



};

template<>
struct is_not_void_<void_>
    : false_
{



};

template<> struct is_void_<  na > { template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : is_void_<  T1 > { }; }; template< typename Tag > struct lambda< is_void_<  na > , Tag  > { typedef false_ is_le; typedef is_void_<  na > result_; typedef is_void_<  na > type; };   
template<> struct is_not_void_<  na > { template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : is_not_void_<  T1 > { }; }; template< typename Tag > struct lambda< is_not_void_<  na > , Tag  > { typedef false_ is_le; typedef is_not_void_<  na > result_; typedef is_not_void_<  na > type; };   

}}






















namespace boost { namespace mpl { namespace aux {
template< typename T, typename fallback_ = boost::mpl::bool_<true> > struct has_type { struct gcc_3_2_wknd { template< typename U > static boost::mpl::aux::yes_tag test( boost::mpl::aux::type_wrapper<U> const volatile* , boost::mpl::aux::type_wrapper<typename U::type>* = 0 ); static boost::mpl::aux::no_tag test(...); }; typedef boost::mpl::aux::type_wrapper<T> t_; static const bool value = sizeof(gcc_3_2_wknd::test(static_cast<t_*>(0))) == sizeof(boost::mpl::aux::yes_tag); typedef boost::mpl::bool_<value> type; };
}}}
































































































namespace boost { namespace mpl {

template< typename T, bool has_type_ >
struct quote_impl
    : T
{
};

template< typename T >
struct quote_impl< T,false >
{
    typedef T type;
};

template<
      template< typename P1 > class F
    , typename Tag = void_
    >
struct quote1
{
    template< typename U1 > struct apply

        : quote_impl<
              F<U1>
            , aux::has_type< F<U1> >::value
            >

    {
    };
};

template<
      template< typename P1, typename P2 > class F
    , typename Tag = void_
    >
struct quote2
{
    template< typename U1, typename U2 > struct apply

        : quote_impl<
              F< U1,U2 >
            , aux::has_type< F< U1,U2 > >::value
            >

    {
    };
};

template<
      template< typename P1, typename P2, typename P3 > class F
    , typename Tag = void_
    >
struct quote3
{
    template< typename U1, typename U2, typename U3 > struct apply

        : quote_impl<
              F< U1,U2,U3 >
            , aux::has_type< F< U1,U2,U3 > >::value
            >

    {
    };
};

template<
      template< typename P1, typename P2, typename P3, typename P4 > class F
    , typename Tag = void_
    >
struct quote4
{
    template<
          typename U1, typename U2, typename U3, typename U4
        >
    struct apply

        : quote_impl<
              F< U1,U2,U3,U4 >
            , aux::has_type< F< U1,U2,U3,U4 > >::value
            >

    {
    };
};

template<
      template<
          typename P1, typename P2, typename P3, typename P4
        , typename P5
        >
      class F
    , typename Tag = void_
    >
struct quote5
{
    template<
          typename U1, typename U2, typename U3, typename U4
        , typename U5
        >
    struct apply

        : quote_impl<
              F< U1,U2,U3,U4,U5 >
            , aux::has_type< F< U1,U2,U3,U4,U5 > >::value
            >

    {
    };
};

}}













































































































































































































































































































































































































































































































































































namespace boost { namespace mpl {

namespace aux {

template<
      bool C1 = false, bool C2 = false, bool C3 = false, bool C4 = false
    , bool C5 = false
    >
struct lambda_or
    : true_
{
};

template<>
struct lambda_or< false,false,false,false,false >
    : false_
{
};

} 

template<
      typename T
    , typename Tag
   
    >
struct lambda
{
    typedef false_ is_le;
    typedef T result_;
    typedef T type;
};

template<
      typename T
    >
struct is_lambda_expression
    : lambda<T>::is_le
{
};

template< int N, typename Tag >
struct lambda< arg<N>, Tag >
{
    typedef true_ is_le;
    typedef mpl::arg<N> result_; 
    typedef mpl::protect<result_> type;
};

template<
      typename F
    , typename Tag
    >
struct lambda<
          bind0<F>
        , Tag
       
        >
{
    typedef false_ is_le;
    typedef bind0<
          F
        > result_;

    typedef result_ type;
};

namespace aux {

template<
      typename IsLE, typename Tag
    , template< typename P1 > class F
    , typename L1
    >
struct le_result1
{
    typedef F<
          typename L1::type
        > result_;

    typedef result_ type;
};

template<
      typename Tag
    , template< typename P1 > class F
    , typename L1
    >
struct le_result1< true_,Tag,F,L1 >
{
    typedef bind1<
          quote1< F,Tag >
        , typename L1::result_
        > result_;

    typedef mpl::protect<result_> type;
};

} 

template<
      template< typename P1 > class F
    , typename T1
    , typename Tag
    >
struct lambda<
          F<T1>
        , Tag
       
        >
{
    typedef lambda< T1,Tag > l1;
    typedef typename l1::is_le is_le1;
    typedef typename aux::lambda_or<
          is_le1::value
        >::type is_le;

    typedef aux::le_result1<
          is_le, Tag, F, l1
        > le_result_;

    typedef typename le_result_::result_ result_;
    typedef typename le_result_::type type;
};

template<
      typename F, typename T1
    , typename Tag
    >
struct lambda<
          bind1< F,T1 >
        , Tag
       
        >
{
    typedef false_ is_le;
    typedef bind1<
          F
        , T1
        > result_;

    typedef result_ type;
};

namespace aux {

template<
      typename IsLE, typename Tag
    , template< typename P1, typename P2 > class F
    , typename L1, typename L2
    >
struct le_result2
{
    typedef F<
          typename L1::type, typename L2::type
        > result_;

    typedef result_ type;
};

template<
      typename Tag
    , template< typename P1, typename P2 > class F
    , typename L1, typename L2
    >
struct le_result2< true_,Tag,F,L1,L2 >
{
    typedef bind2<
          quote2< F,Tag >
        , typename L1::result_, typename L2::result_
        > result_;

    typedef mpl::protect<result_> type;
};

} 

template<
      template< typename P1, typename P2 > class F
    , typename T1, typename T2
    , typename Tag
    >
struct lambda<
          F< T1,T2 >
        , Tag
       
        >
{
    typedef lambda< T1,Tag > l1;
    typedef lambda< T2,Tag > l2;
    
    typedef typename l1::is_le is_le1;
    typedef typename l2::is_le is_le2;
    

    typedef typename aux::lambda_or<
          is_le1::value, is_le2::value
        >::type is_le;

    typedef aux::le_result2<
          is_le, Tag, F, l1, l2
        > le_result_;

    typedef typename le_result_::result_ result_;
    typedef typename le_result_::type type;
};

template<
      typename F, typename T1, typename T2
    , typename Tag
    >
struct lambda<
          bind2< F,T1,T2 >
        , Tag
       
        >
{
    typedef false_ is_le;
    typedef bind2<
          F
        , T1, T2
        > result_;

    typedef result_ type;
};

namespace aux {

template<
      typename IsLE, typename Tag
    , template< typename P1, typename P2, typename P3 > class F
    , typename L1, typename L2, typename L3
    >
struct le_result3
{
    typedef F<
          typename L1::type, typename L2::type, typename L3::type
        > result_;

    typedef result_ type;
};

template<
      typename Tag
    , template< typename P1, typename P2, typename P3 > class F
    , typename L1, typename L2, typename L3
    >
struct le_result3< true_,Tag,F,L1,L2,L3 >
{
    typedef bind3<
          quote3< F,Tag >
        , typename L1::result_, typename L2::result_, typename L3::result_
        > result_;

    typedef mpl::protect<result_> type;
};

} 

template<
      template< typename P1, typename P2, typename P3 > class F
    , typename T1, typename T2, typename T3
    , typename Tag
    >
struct lambda<
          F< T1,T2,T3 >
        , Tag
       
        >
{
    typedef lambda< T1,Tag > l1;
    typedef lambda< T2,Tag > l2;
    typedef lambda< T3,Tag > l3;
    
    typedef typename l1::is_le is_le1;
    typedef typename l2::is_le is_le2;
    typedef typename l3::is_le is_le3;
    

    typedef typename aux::lambda_or<
          is_le1::value, is_le2::value, is_le3::value
        >::type is_le;

    typedef aux::le_result3<
          is_le, Tag, F, l1, l2, l3
        > le_result_;

    typedef typename le_result_::result_ result_;
    typedef typename le_result_::type type;
};

template<
      typename F, typename T1, typename T2, typename T3
    , typename Tag
    >
struct lambda<
          bind3< F,T1,T2,T3 >
        , Tag
       
        >
{
    typedef false_ is_le;
    typedef bind3<
          F
        , T1, T2, T3
        > result_;

    typedef result_ type;
};

namespace aux {

template<
      typename IsLE, typename Tag
    , template< typename P1, typename P2, typename P3, typename P4 > class F
    , typename L1, typename L2, typename L3, typename L4
    >
struct le_result4
{
    typedef F<
          typename L1::type, typename L2::type, typename L3::type
        , typename L4::type
        > result_;

    typedef result_ type;
};

template<
      typename Tag
    , template< typename P1, typename P2, typename P3, typename P4 > class F
    , typename L1, typename L2, typename L3, typename L4
    >
struct le_result4< true_,Tag,F,L1,L2,L3,L4 >
{
    typedef bind4<
          quote4< F,Tag >
        , typename L1::result_, typename L2::result_, typename L3::result_
        , typename L4::result_
        > result_;

    typedef mpl::protect<result_> type;
};

} 

template<
      template< typename P1, typename P2, typename P3, typename P4 > class F
    , typename T1, typename T2, typename T3, typename T4
    , typename Tag
    >
struct lambda<
          F< T1,T2,T3,T4 >
        , Tag
       
        >
{
    typedef lambda< T1,Tag > l1;
    typedef lambda< T2,Tag > l2;
    typedef lambda< T3,Tag > l3;
    typedef lambda< T4,Tag > l4;
    
    typedef typename l1::is_le is_le1;
    typedef typename l2::is_le is_le2;
    typedef typename l3::is_le is_le3;
    typedef typename l4::is_le is_le4;
    

    typedef typename aux::lambda_or<
          is_le1::value, is_le2::value, is_le3::value, is_le4::value
        >::type is_le;

    typedef aux::le_result4<
          is_le, Tag, F, l1, l2, l3, l4
        > le_result_;

    typedef typename le_result_::result_ result_;
    typedef typename le_result_::type type;
};

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename Tag
    >
struct lambda<
          bind4< F,T1,T2,T3,T4 >
        , Tag
       
        >
{
    typedef false_ is_le;
    typedef bind4<
          F
        , T1, T2, T3, T4
        > result_;

    typedef result_ type;
};

namespace aux {

template<
      typename IsLE, typename Tag
    , template< typename P1, typename P2, typename P3, typename P4, typename P5 > class F
    , typename L1, typename L2, typename L3, typename L4, typename L5
    >
struct le_result5
{
    typedef F<
          typename L1::type, typename L2::type, typename L3::type
        , typename L4::type, typename L5::type
        > result_;

    typedef result_ type;
};

template<
      typename Tag
    , template< typename P1, typename P2, typename P3, typename P4, typename P5 > class F
    , typename L1, typename L2, typename L3, typename L4, typename L5
    >
struct le_result5< true_,Tag,F,L1,L2,L3,L4,L5 >
{
    typedef bind5<
          quote5< F,Tag >
        , typename L1::result_, typename L2::result_, typename L3::result_
        , typename L4::result_, typename L5::result_
        > result_;

    typedef mpl::protect<result_> type;
};

} 

template<
      template<
          typename P1, typename P2, typename P3, typename P4
        , typename P5
        >
      class F
    , typename T1, typename T2, typename T3, typename T4, typename T5
    , typename Tag
    >
struct lambda<
          F< T1,T2,T3,T4,T5 >
        , Tag
       
        >
{
    typedef lambda< T1,Tag > l1;
    typedef lambda< T2,Tag > l2;
    typedef lambda< T3,Tag > l3;
    typedef lambda< T4,Tag > l4;
    typedef lambda< T5,Tag > l5;
    
    typedef typename l1::is_le is_le1;
    typedef typename l2::is_le is_le2;
    typedef typename l3::is_le is_le3;
    typedef typename l4::is_le is_le4;
    typedef typename l5::is_le is_le5;
    

    typedef typename aux::lambda_or<
          is_le1::value, is_le2::value, is_le3::value, is_le4::value
        , is_le5::value
        >::type is_le;

    typedef aux::le_result5<
          is_le, Tag, F, l1, l2, l3, l4, l5
        > le_result_;

    typedef typename le_result_::result_ result_;
    typedef typename le_result_::type type;
};

template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5
    , typename Tag
    >
struct lambda<
          bind5< F,T1,T2,T3,T4,T5 >
        , Tag
       
        >
{
    typedef false_ is_le;
    typedef bind5<
          F
        , T1, T2, T3, T4, T5
        > result_;

    typedef result_ type;
};


template< typename T, typename Tag >
struct lambda< mpl::protect<T>, Tag >
{
    typedef false_ is_le;
    typedef mpl::protect<T> result_;
    typedef result_ type;
};



template<
      typename F, typename T1, typename T2, typename T3, typename T4
    , typename T5
    , typename Tag
    >
struct lambda<
          bind< F,T1,T2,T3,T4,T5 >
        , Tag
       
        >
{
    typedef false_ is_le;
    typedef bind< F,T1,T2,T3,T4,T5 > result_;
    typedef result_ type;
};



template<
      typename F, typename Tag1, typename Tag2
    >
struct lambda<
          lambda< F,Tag1 >
        , Tag2
        >
{
    typedef lambda< F,Tag2 > l1;
    typedef lambda< Tag1,Tag2 > l2;
    typedef typename l1::is_le is_le;
    typedef aux::le_result2<is_le, Tag2, mpl::lambda, l1, l2> le_result_;
    typedef typename le_result_::result_ result_;
    typedef typename le_result_::type type;
};

template<> struct lambda<  na , na > { template<  typename T1 , typename T2 , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : lambda<  T1 , T2 > { }; }; template< typename Tag > struct lambda< lambda<  na , na > , Tag  > { typedef false_ is_le; typedef lambda<  na , na > result_; typedef lambda<  na , na > type; };   

}}








































































































































































































































































































































int main()
{
	cout << "" << endl;
	getchar();
	return 0;
}
