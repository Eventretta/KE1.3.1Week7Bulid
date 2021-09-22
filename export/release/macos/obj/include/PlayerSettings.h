// Generated by Haxe 4.2.2
#ifndef INCLUDED_PlayerSettings
#define INCLUDED_PlayerSettings

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Controls)
HX_DECLARE_CLASS0(KeyboardScheme)
HX_DECLARE_CLASS0(PlayerSettings)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionSet)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)



class HXCPP_CLASS_ATTRIBUTES PlayerSettings_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PlayerSettings_obj OBJ_;
		PlayerSettings_obj();

	public:
		enum { _hx_ClassId = 0x29c50444 };

		void __construct(int id, ::KeyboardScheme scheme);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayerSettings")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayerSettings"); }
		static ::hx::ObjectPtr< PlayerSettings_obj > __new(int id, ::KeyboardScheme scheme);
		static ::hx::ObjectPtr< PlayerSettings_obj > __alloc(::hx::Ctx *_hx_ctx,int id, ::KeyboardScheme scheme);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayerSettings_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayerSettings",84,81,d9,47); }

		static void __boot();
		static int numPlayers;
		static int numAvatars;
		static  ::PlayerSettings player1;
		static  ::PlayerSettings player2;
		static  ::flixel::util::_FlxSignal::FlxSignal1 onAvatarAdd;
		static  ::flixel::util::_FlxSignal::FlxSignal1 onAvatarRemove;
		static void init();
		static ::Dynamic init_dyn();

		static void reset();
		static ::Dynamic reset_dyn();

		int id;
		 ::Controls controls;
		void setKeyboardScheme( ::KeyboardScheme scheme);
		::Dynamic setKeyboardScheme_dyn();

};


#endif /* INCLUDED_PlayerSettings */ 
