// Generated by Haxe 4.2.2
#ifndef INCLUDED_openfl_display3D__Context3DWrapMode_Context3DWrapMode_Impl_
#define INCLUDED_openfl_display3D__Context3DWrapMode_Context3DWrapMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DWrapMode,Context3DWrapMode_Impl_)

namespace openfl{
namespace display3D{
namespace _Context3DWrapMode{


class HXCPP_CLASS_ATTRIBUTES Context3DWrapMode_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DWrapMode_Impl__obj OBJ_;
		Context3DWrapMode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7f2c45ec };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_"); }

		inline static ::hx::ObjectPtr< Context3DWrapMode_Impl__obj > __new() {
			::hx::ObjectPtr< Context3DWrapMode_Impl__obj > __this = new Context3DWrapMode_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DWrapMode_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DWrapMode_Impl__obj *__this = (Context3DWrapMode_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DWrapMode_Impl__obj), false, "openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_"));
			*(void **)__this = Context3DWrapMode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DWrapMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DWrapMode_Impl_",0d,1b,27,fa); }

		static void __boot();
		static  ::Dynamic CLAMP;
		static  ::Dynamic CLAMP_U_REPEAT_V;
		static  ::Dynamic REPEAT;
		static  ::Dynamic REPEAT_U_CLAMP_V;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DWrapMode

#endif /* INCLUDED_openfl_display3D__Context3DWrapMode_Context3DWrapMode_Impl_ */ 
