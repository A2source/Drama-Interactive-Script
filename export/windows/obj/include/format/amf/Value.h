#ifndef INCLUDED_format_amf_Value
#define INCLUDED_format_amf_Value

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS2(format,amf,Value)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace format{
namespace amf{


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
		::String GetEnumName( ) const { return HX_("format.amf.Value",e6,1d,f3,38); }
		::String __ToString() const { return HX_("Value.",bd,77,4b,84) + _hx_tag; }

		static ::format::amf::Value AArray(::Array< ::Dynamic> values);
		static ::Dynamic AArray_dyn();
		static ::format::amf::Value ABool(bool b);
		static ::Dynamic ABool_dyn();
		static ::format::amf::Value ADate( ::Date d);
		static ::Dynamic ADate_dyn();
		static ::format::amf::Value ANull;
		static inline ::format::amf::Value ANull_dyn() { return ANull; }
		static ::format::amf::Value ANumber(Float f);
		static ::Dynamic ANumber_dyn();
		static ::format::amf::Value AObject( ::haxe::ds::StringMap fields, ::Dynamic size);
		static ::Dynamic AObject_dyn();
		static ::format::amf::Value AString(::String s);
		static ::Dynamic AString_dyn();
		static ::format::amf::Value AUndefined;
		static inline ::format::amf::Value AUndefined_dyn() { return AUndefined; }
};

} // end namespace format
} // end namespace amf

#endif /* INCLUDED_format_amf_Value */ 
