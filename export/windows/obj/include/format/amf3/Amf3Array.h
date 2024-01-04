#ifndef INCLUDED_format_amf3_Amf3Array
#define INCLUDED_format_amf3_Amf3Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,amf3,Amf3Array)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace format{
namespace amf3{


class HXCPP_CLASS_ATTRIBUTES Amf3Array_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Amf3Array_obj OBJ_;
		Amf3Array_obj();

	public:
		enum { _hx_ClassId = 0x1cae1810 };

		void __construct(::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.amf3.Amf3Array")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.amf3.Amf3Array"); }
		static ::hx::ObjectPtr< Amf3Array_obj > __new(::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra);
		static ::hx::ObjectPtr< Amf3Array_obj > __alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Amf3Array_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Amf3Array",c0,d5,43,98); }

		static void __boot();
		static  ::Dynamic __meta__;
		::cpp::VirtualArray a;
		 ::haxe::ds::StringMap extra;
};

} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_format_amf3_Amf3Array */ 
