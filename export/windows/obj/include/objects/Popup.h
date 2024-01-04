#ifndef INCLUDED_objects_Popup
#define INCLUDED_objects_Popup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxButtonPlus)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Popup)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES Popup_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Popup_obj OBJ_;
		Popup_obj();

	public:
		enum { _hx_ClassId = 0x1fac04e4 };

		void __construct(::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_canClose);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.Popup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.Popup"); }
		static ::hx::ObjectPtr< Popup_obj > __new(::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_canClose);
		static ::hx::ObjectPtr< Popup_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_canClose);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Popup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Popup",0c,7a,c2,59); }

		 ::flixel::addons::ui::FlxButtonPlus closeButton;
		 ::flixel::FlxSprite outline;
		void update(Float dt);

		void add();
		::Dynamic add_dyn();

		void open();
		::Dynamic open_dyn();

		void close();
		::Dynamic close_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_Popup */ 
