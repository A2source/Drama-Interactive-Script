#ifndef INCLUDED_format_amf3_Value
#define INCLUDED_format_amf3_Value

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(format,amf3,Value)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace format{
namespace amf3{


class Value_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Value_obj OBJ_;

	public:
		Value_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.amf3.Value",f3,6d,b7,10); }
		::String __ToString() const { return HX_("Value.",bd,77,4b,84) + _hx_tag; }

		static ::format::amf3::Value AArray(::Array< ::Dynamic> values, ::haxe::ds::StringMap extra);
		static ::Dynamic AArray_dyn();
		static ::format::amf3::Value ABool(bool b);
		static ::Dynamic ABool_dyn();
		static ::format::amf3::Value ABytes( ::haxe::io::Bytes b);
		static ::Dynamic ABytes_dyn();
		static ::format::amf3::Value ADate( ::Date d);
		static ::Dynamic ADate_dyn();
		static ::format::amf3::Value AInt(int i);
		static ::Dynamic AInt_dyn();
		static ::format::amf3::Value AMap( ::haxe::ds::EnumValueMap m);
		static ::Dynamic AMap_dyn();
		static ::format::amf3::Value ANull;
		static inline ::format::amf3::Value ANull_dyn() { return ANull; }
		static ::format::amf3::Value ANumber(Float f);
		static ::Dynamic ANumber_dyn();
		static ::format::amf3::Value AObject( ::haxe::ds::StringMap fields, ::Dynamic size,::String classname);
		static ::Dynamic AObject_dyn();
		static ::format::amf3::Value AString(::String s);
		static ::Dynamic AString_dyn();
		static ::format::amf3::Value AUndefined;
		static inline ::format::amf3::Value AUndefined_dyn() { return AUndefined; }
		static ::format::amf3::Value AVector(::Array< ::Dynamic> values,::String classname);
		static ::Dynamic AVector_dyn();
		static ::format::amf3::Value AXml( ::Xml x);
		static ::Dynamic AXml_dyn();
};

} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_format_amf3_Value */ 
