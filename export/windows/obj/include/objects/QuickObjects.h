#ifndef INCLUDED_objects_QuickObjects
#define INCLUDED_objects_QuickObjects

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxButtonPlus)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,QuickObjects)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES QuickObjects_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QuickObjects_obj OBJ_;
		QuickObjects_obj();

	public:
		enum { _hx_ClassId = 0x425a3193 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="objects.QuickObjects")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"objects.QuickObjects"); }

		inline static ::hx::ObjectPtr< QuickObjects_obj > __new() {
			::hx::ObjectPtr< QuickObjects_obj > __this = new QuickObjects_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QuickObjects_obj > __alloc(::hx::Ctx *_hx_ctx) {
			QuickObjects_obj *__this = (QuickObjects_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QuickObjects_obj), false, "objects.QuickObjects"));
			*(void **)__this = QuickObjects_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuickObjects_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QuickObjects",87,bd,d5,5c); }

		static  ::openfl::text::TextField createTextField(::hx::Null< int >  x,::hx::Null< int >  y,::String defaultString,::hx::Null< int >  width,::hx::Null< int >  height,::hx::Null< int >  textCol);
		static ::Dynamic createTextField_dyn();

		static  ::openfl::text::TextField createText(::hx::Null< int >  x,::hx::Null< int >  y,::String string,::hx::Null< int >  width,::hx::Null< int >  height,::hx::Null< int >  textCol);
		static ::Dynamic createText_dyn();

		static  ::flixel::addons::ui::FlxButtonPlus getButton(::hx::Null< int >  x,::hx::Null< int >  y,::String label, ::Dynamic callback, ::Dynamic customEnterCallback, ::Dynamic customLeaveCallback,::hx::Null< int >  borderCol,::hx::Null< int >  width,::hx::Null< int >  height);
		static ::Dynamic getButton_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_QuickObjects */ 
