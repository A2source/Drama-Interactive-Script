#ifndef INCLUDED_format_amf3_Tools
#define INCLUDED_format_amf3_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(format,amf3,Amf3Array)
HX_DECLARE_CLASS2(format,amf3,Tools)
HX_DECLARE_CLASS2(format,amf3,Value)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace amf3{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x5642dc4b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.amf3.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.amf3.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "format.amf3.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static  ::format::amf3::Value encode( ::Dynamic o);
		static ::Dynamic encode_dyn();

		static  ::Dynamic decode( ::format::amf3::Value a);
		static ::Dynamic decode_dyn();

		static  ::Dynamic undefined( ::format::amf3::Value a);
		static ::Dynamic undefined_dyn();

		static  ::Dynamic anull( ::format::amf3::Value a);
		static ::Dynamic anull_dyn();

		static  ::Dynamic _hx_bool( ::format::amf3::Value a);
		static ::Dynamic _hx_bool_dyn();

		static  ::Dynamic _hx_int( ::format::amf3::Value a);
		static ::Dynamic _hx_int_dyn();

		static  ::Dynamic number( ::format::amf3::Value a);
		static ::Dynamic number_dyn();

		static ::String string( ::format::amf3::Value a);
		static ::Dynamic string_dyn();

		static  ::Date date( ::format::amf3::Value a);
		static ::Dynamic date_dyn();

		static  ::format::amf3::Amf3Array array( ::format::amf3::Value a);
		static ::Dynamic array_dyn();

		static ::cpp::VirtualArray vector( ::format::amf3::Value a);
		static ::Dynamic vector_dyn();

		static  ::haxe::ds::StringMap object( ::format::amf3::Value a);
		static ::Dynamic object_dyn();

		static  ::Xml xml( ::format::amf3::Value a);
		static ::Dynamic xml_dyn();

		static  ::haxe::io::Bytes bytes( ::format::amf3::Value a);
		static ::Dynamic bytes_dyn();

		static  ::haxe::ds::EnumValueMap map( ::format::amf3::Value a);
		static ::Dynamic map_dyn();

};

} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_format_amf3_Tools */ 
