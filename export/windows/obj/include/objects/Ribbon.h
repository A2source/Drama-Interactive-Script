#ifndef INCLUDED_objects_Ribbon
#define INCLUDED_objects_Ribbon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Ribbon)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES Ribbon_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ribbon_obj OBJ_;
		Ribbon_obj();

	public:
		enum { _hx_ClassId = 0x58bc2b0a };

		void __construct( ::flixel::group::FlxTypedGroup layout,::String __o_alignment);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.Ribbon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.Ribbon"); }
		static ::hx::ObjectPtr< Ribbon_obj > __new( ::flixel::group::FlxTypedGroup layout,::String __o_alignment);
		static ::hx::ObjectPtr< Ribbon_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::group::FlxTypedGroup layout,::String __o_alignment);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Ribbon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ribbon",36,26,68,7f); }

		 ::flixel::group::FlxTypedGroup tabs;
		bool hidden;
		void hide();
		::Dynamic hide_dyn();

		void show();
		::Dynamic show_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_Ribbon */ 
