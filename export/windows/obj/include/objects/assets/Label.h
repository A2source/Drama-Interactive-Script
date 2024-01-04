#ifndef INCLUDED_objects_assets_Label
#define INCLUDED_objects_assets_Label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_objects_assets_Asset
#include <objects/assets/Asset.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(objects,assets,Asset)
HX_DECLARE_CLASS2(objects,assets,Label)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace objects{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES Label_obj : public  ::objects::assets::Asset_obj
{
	public:
		typedef  ::objects::assets::Asset_obj super;
		typedef Label_obj OBJ_;
		Label_obj();

	public:
		enum { _hx_ClassId = 0x7f6d6e9d };

		void __construct(int _x,int _y,int w,int h,::String __o_string,::hx::Null< int >  __o_col);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.assets.Label")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.assets.Label"); }
		static ::hx::ObjectPtr< Label_obj > __new(int _x,int _y,int w,int h,::String __o_string,::hx::Null< int >  __o_col);
		static ::hx::ObjectPtr< Label_obj > __alloc(::hx::Ctx *_hx_ctx,int _x,int _y,int w,int h,::String __o_string,::hx::Null< int >  __o_col);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Label_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Label",d4,7d,dc,02); }

		 ::openfl::text::TextField text;
		 ::flixel::math::FlxBasePoint textPos;
		void update(Float dt);

		Float getTextWidth();
		::Dynamic getTextWidth_dyn();

		Float getTextHeight();
		::Dynamic getTextHeight_dyn();

		void setTextX(int _x);
		::Dynamic setTextX_dyn();

		void setTextY(int _y);
		::Dynamic setTextY_dyn();

};

} // end namespace objects
} // end namespace assets

#endif /* INCLUDED_objects_assets_Label */ 
