// Generated by Haxe 4.2.2
#ifndef INCLUDED_lime_text_harfbuzz_HB
#define INCLUDED_lime_text_harfbuzz_HB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,text,harfbuzz,HB)
HX_DECLARE_CLASS3(lime,text,harfbuzz,HBFeature)

namespace lime{
namespace text{
namespace harfbuzz{


class HXCPP_CLASS_ATTRIBUTES HB_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HB_obj OBJ_;
		HB_obj();

	public:
		enum { _hx_ClassId = 0x0801f7e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz.HB")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz.HB"); }

		inline static ::hx::ObjectPtr< HB_obj > __new() {
			::hx::ObjectPtr< HB_obj > __this = new HB_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HB_obj > __alloc(::hx::Ctx *_hx_ctx) {
			HB_obj *__this = (HB_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HB_obj), false, "lime.text.harfbuzz.HB"));
			*(void **)__this = HB_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HB_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HB",fa,3e,00,00); }

		static void shape( ::Dynamic font, ::Dynamic buffer,::Array< ::Dynamic> features);
		static ::Dynamic shape_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz

#endif /* INCLUDED_lime_text_harfbuzz_HB */ 
