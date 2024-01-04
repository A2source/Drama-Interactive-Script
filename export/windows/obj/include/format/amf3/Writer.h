#ifndef INCLUDED_format_amf3_Writer
#define INCLUDED_format_amf3_Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,amf3,Value)
HX_DECLARE_CLASS2(format,amf3,Writer)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Output)

namespace format{
namespace amf3{


class HXCPP_CLASS_ATTRIBUTES Writer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Writer_obj OBJ_;
		Writer_obj();

	public:
		enum { _hx_ClassId = 0x0d927683 };

		void __construct( ::haxe::io::Output o);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.amf3.Writer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.amf3.Writer"); }
		static ::hx::ObjectPtr< Writer_obj > __new( ::haxe::io::Output o);
		static ::hx::ObjectPtr< Writer_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Writer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Writer",d3,4a,7a,b2); }

		 ::haxe::io::Output o;
		void writeInt(int i);
		::Dynamic writeInt_dyn();

		void writeUInt(int u,::hx::Null< bool >  shiftLeft);
		::Dynamic writeUInt_dyn();

		void writeString(::String s);
		::Dynamic writeString_dyn();

		void writeObject( ::haxe::ds::StringMap h, ::Dynamic size);
		::Dynamic writeObject_dyn();

		void write( ::format::amf3::Value v);
		::Dynamic write_dyn();

};

} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_format_amf3_Writer */ 
