#ifndef INCLUDED_format_pdf_Data
#define INCLUDED_format_pdf_Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,pdf,Data)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace format{
namespace pdf{


class Data_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Data_obj OBJ_;

	public:
		Data_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.pdf.Data",5d,80,8e,67); }
		::String __ToString() const { return HX_("Data.",a4,7e,b5,67) + _hx_tag; }

		static ::format::pdf::Data DArray(::Array< ::Dynamic> a);
		static ::Dynamic DArray_dyn();
		static ::format::pdf::Data DBool(bool b);
		static ::Dynamic DBool_dyn();
		static ::format::pdf::Data DComment(::String s);
		static ::Dynamic DComment_dyn();
		static ::format::pdf::Data DDict( ::haxe::ds::StringMap h);
		static ::Dynamic DDict_dyn();
		static ::format::pdf::Data DHexString(::String s);
		static ::Dynamic DHexString_dyn();
		static ::format::pdf::Data DIndirect(int id,int rev, ::format::pdf::Data v);
		static ::Dynamic DIndirect_dyn();
		static ::format::pdf::Data DName(::String s);
		static ::Dynamic DName_dyn();
		static ::format::pdf::Data DNull;
		static inline ::format::pdf::Data DNull_dyn() { return DNull; }
		static ::format::pdf::Data DNumber(Float n);
		static ::Dynamic DNumber_dyn();
		static ::format::pdf::Data DRef(int id,int rev);
		static ::Dynamic DRef_dyn();
		static ::format::pdf::Data DStartXRef(int pos);
		static ::Dynamic DStartXRef_dyn();
		static ::format::pdf::Data DStream( ::haxe::io::Bytes b, ::haxe::ds::StringMap props);
		static ::Dynamic DStream_dyn();
		static ::format::pdf::Data DString(::String s);
		static ::Dynamic DString_dyn();
		static ::format::pdf::Data DTrailer( ::format::pdf::Data o);
		static ::Dynamic DTrailer_dyn();
		static ::format::pdf::Data DXRefTable(::Array< ::Dynamic> t);
		static ::Dynamic DXRefTable_dyn();
};

} // end namespace format
} // end namespace pdf

#endif /* INCLUDED_format_pdf_Data */ 
