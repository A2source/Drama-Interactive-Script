#ifndef INCLUDED_objects_Script
#define INCLUDED_objects_Script

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Script)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES Script_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Script_obj OBJ_;
		Script_obj();

	public:
		enum { _hx_ClassId = 0x5548c6ff };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.Script")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.Script"); }
		static ::hx::ObjectPtr< Script_obj > __new(::String name);
		static ::hx::ObjectPtr< Script_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Script_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Script",2b,c2,f4,7b); }

		 ::flixel::group::FlxTypedGroup pages;
		 ::flixel::FlxSprite firstPage;
		 ::flixel::FlxSprite lastPage;
		void update(Float dt);
		::Dynamic update_dyn();

		void scroll(Float amt, ::flixel::util::FlxTimer timer);
		::Dynamic scroll_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_Script */ 
