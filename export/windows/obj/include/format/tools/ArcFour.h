#ifndef INCLUDED_format_tools_ArcFour
#define INCLUDED_format_tools_ArcFour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tools,ArcFour)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES ArcFour_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArcFour_obj OBJ_;
		ArcFour_obj();

	public:
		enum { _hx_ClassId = 0x119a3e18 };

		void __construct( ::haxe::io::Bytes key);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.tools.ArcFour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.tools.ArcFour"); }
		static ::hx::ObjectPtr< ArcFour_obj > __new( ::haxe::io::Bytes key);
		static ::hx::ObjectPtr< ArcFour_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes key);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArcFour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArcFour",38,47,e7,52); }

		 ::haxe::io::Bytes s;
		 ::haxe::io::Bytes sbase;
		int i;
		int j;
		void reset();
		::Dynamic reset_dyn();

		void run( ::haxe::io::Bytes input,int ipos,int length, ::haxe::io::Bytes output,int opos);
		::Dynamic run_dyn();

};

} // end namespace format
} // end namespace tools

#endif /* INCLUDED_format_tools_ArcFour */ 
