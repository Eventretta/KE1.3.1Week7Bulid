// Generated by Haxe 4.2.2
#ifndef INCLUDED_polymod_format_TSV
#define INCLUDED_polymod_format_TSV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_format_CSV
#include <polymod/format/CSV.h>
#endif
HX_DECLARE_CLASS2(polymod,format,CSV)
HX_DECLARE_CLASS2(polymod,format,TSV)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES TSV_obj : public  ::polymod::format::CSV_obj
{
	public:
		typedef  ::polymod::format::CSV_obj super;
		typedef TSV_obj OBJ_;
		TSV_obj();

	public:
		enum { _hx_ClassId = 0x37b87aea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.format.TSV")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.format.TSV"); }
		static ::hx::ObjectPtr< TSV_obj > __new();
		static ::hx::ObjectPtr< TSV_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TSV_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TSV",f7,05,40,00); }

		static  ::polymod::format::TSV parse(::String input);
		static ::Dynamic parse_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_TSV */ 
