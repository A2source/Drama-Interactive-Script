#ifndef INCLUDED_flixel_addons_ui_FlxButtonPlus
#define INCLUDED_flixel_addons_ui_FlxButtonPlus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedMouseSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxButtonPlus)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxButtonPlus_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef FlxButtonPlus_obj OBJ_;
		FlxButtonPlus_obj();

	public:
		enum { _hx_ClassId = 0x243cd29b };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Callback,::String Label,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxButtonPlus")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxButtonPlus"); }
		static ::hx::ObjectPtr< FlxButtonPlus_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Callback,::String Label,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height);
		static ::hx::ObjectPtr< FlxButtonPlus_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Callback,::String Label,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxButtonPlus_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxButtonPlus",5e,89,a8,e2); }

		static void __boot();
		static int NORMAL;
		static int HIGHLIGHT;
		static int PRESSED;
		int borderColor;
		::Array< int > offColor;
		::Array< int > onColor;
		 ::Dynamic onClickCallback;
		Dynamic onClickCallback_dyn() { return onClickCallback;}
		 ::Dynamic enterCallback;
		Dynamic enterCallback_dyn() { return enterCallback;}
		 ::Dynamic leaveCallback;
		Dynamic leaveCallback_dyn() { return leaveCallback;}
		 ::flixel::addons::display::FlxExtendedMouseSprite buttonNormal;
		 ::flixel::addons::display::FlxExtendedMouseSprite buttonHighlight;
		 ::flixel::text::FlxText textNormal;
		 ::flixel::text::FlxText textHighlight;
		int _status;
		bool _initialized;
		void loadButtonGraphic( ::flixel::FlxSprite Normal, ::flixel::FlxSprite Highlight);
		::Dynamic loadButtonGraphic_dyn();

		void update(Float elapsed);

		void updateButton();
		::Dynamic updateButton_dyn();

		void destroy();

		void onMouseUp( ::openfl::events::MouseEvent E);
		::Dynamic onMouseUp_dyn();

		void updateInactiveButtonColors(::Array< int > Colors);
		::Dynamic updateInactiveButtonColors_dyn();

		void updateActiveButtonColors(::Array< int > Colors);
		::Dynamic updateActiveButtonColors_dyn();

		::String set_text(::String NewText);
		::Dynamic set_text_dyn();

		 ::flixel::addons::display::FlxExtendedMouseSprite set_buttonNormal( ::flixel::addons::display::FlxExtendedMouseSprite Value);
		::Dynamic set_buttonNormal_dyn();

		 ::flixel::addons::display::FlxExtendedMouseSprite set_buttonHighlight( ::flixel::addons::display::FlxExtendedMouseSprite Value);
		::Dynamic set_buttonHighlight_dyn();

		 ::flixel::text::FlxText set_textNormal( ::flixel::text::FlxText Value);
		::Dynamic set_textNormal_dyn();

		 ::flixel::text::FlxText set_textHighlight( ::flixel::text::FlxText Value);
		::Dynamic set_textHighlight_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxButtonPlus */ 
