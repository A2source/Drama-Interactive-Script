#ifndef INCLUDED_objects_Tab
#define INCLUDED_objects_Tab

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxButtonPlus)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Tab)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES Tab_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef Tab_obj OBJ_;
		Tab_obj();

	public:
		enum { _hx_ClassId = 0x153580e1 };

		void __construct( ::flixel::addons::ui::FlxButtonPlus _button, ::flixel::group::FlxTypedGroup _dropdown);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.Tab")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.Tab"); }
		static ::hx::ObjectPtr< Tab_obj > __new( ::flixel::addons::ui::FlxButtonPlus _button, ::flixel::group::FlxTypedGroup _dropdown);
		static ::hx::ObjectPtr< Tab_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::ui::FlxButtonPlus _button, ::flixel::group::FlxTypedGroup _dropdown);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tab_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tab",35,12,40,00); }

		 ::flixel::addons::ui::FlxButtonPlus button;
		 ::flixel::group::FlxTypedGroup dropdown;
		bool hovering;
		bool open;
		bool canInteract;
		void update(Float dt);

		void openDropdown();
		::Dynamic openDropdown_dyn();

		void closeDropdown();
		::Dynamic closeDropdown_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_Tab */ 
