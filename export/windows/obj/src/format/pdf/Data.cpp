#include <hxcpp.h>

#ifndef INCLUDED_format_pdf_Data
#include <format/pdf/Data.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace format{
namespace pdf{

::format::pdf::Data Data_obj::DArray(::Array< ::Dynamic> a)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DArray",b5,66,01,e9),6,1)->_hx_init(0,a);
}

::format::pdf::Data Data_obj::DBool(bool b)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DBool",8e,22,34,53),1,1)->_hx_init(0,b);
}

::format::pdf::Data Data_obj::DComment(::String s)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DComment",7b,f2,27,80),14,1)->_hx_init(0,s);
}

::format::pdf::Data Data_obj::DDict( ::haxe::ds::StringMap h)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DDict",da,f7,81,54),7,1)->_hx_init(0,h);
}

::format::pdf::Data Data_obj::DHexString(::String s)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DHexString",28,ad,68,bc),4,1)->_hx_init(0,s);
}

::format::pdf::Data Data_obj::DIndirect(int id,int rev, ::format::pdf::Data v)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DIndirect",32,c1,25,f2),8,3)->_hx_init(0,id)->_hx_init(1,rev)->_hx_init(2,v);
}

::format::pdf::Data Data_obj::DName(::String s)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DName",af,10,18,5b),5,1)->_hx_init(0,s);
}

::format::pdf::Data Data_obj::DNull;

::format::pdf::Data Data_obj::DNumber(Float n)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DNumber",2d,86,c2,e1),2,1)->_hx_init(0,n);
}

::format::pdf::Data Data_obj::DRef(int id,int rev)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DRef",6f,13,31,2d),10,2)->_hx_init(0,id)->_hx_init(1,rev);
}

::format::pdf::Data Data_obj::DStartXRef(int pos)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DStartXRef",59,5c,1e,be),13,1)->_hx_init(0,pos);
}

::format::pdf::Data Data_obj::DStream( ::haxe::io::Bytes b, ::haxe::ds::StringMap props)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DStream",e4,13,75,51),9,2)->_hx_init(0,b)->_hx_init(1,props);
}

::format::pdf::Data Data_obj::DString(::String s)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DString",35,28,78,51),3,1)->_hx_init(0,s);
}

::format::pdf::Data Data_obj::DTrailer( ::format::pdf::Data o)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DTrailer",cf,61,b8,8a),12,1)->_hx_init(0,o);
}

::format::pdf::Data Data_obj::DXRefTable(::Array< ::Dynamic> t)
{
	return ::hx::CreateEnum< Data_obj >(HX_("DXRefTable",6f,4d,5c,b7),11,1)->_hx_init(0,t);
}

bool Data_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DArray",b5,66,01,e9)) { outValue = Data_obj::DArray_dyn(); return true; }
	if (inName==HX_("DBool",8e,22,34,53)) { outValue = Data_obj::DBool_dyn(); return true; }
	if (inName==HX_("DComment",7b,f2,27,80)) { outValue = Data_obj::DComment_dyn(); return true; }
	if (inName==HX_("DDict",da,f7,81,54)) { outValue = Data_obj::DDict_dyn(); return true; }
	if (inName==HX_("DHexString",28,ad,68,bc)) { outValue = Data_obj::DHexString_dyn(); return true; }
	if (inName==HX_("DIndirect",32,c1,25,f2)) { outValue = Data_obj::DIndirect_dyn(); return true; }
	if (inName==HX_("DName",af,10,18,5b)) { outValue = Data_obj::DName_dyn(); return true; }
	if (inName==HX_("DNull",eb,3c,27,5b)) { outValue = Data_obj::DNull; return true; }
	if (inName==HX_("DNumber",2d,86,c2,e1)) { outValue = Data_obj::DNumber_dyn(); return true; }
	if (inName==HX_("DRef",6f,13,31,2d)) { outValue = Data_obj::DRef_dyn(); return true; }
	if (inName==HX_("DStartXRef",59,5c,1e,be)) { outValue = Data_obj::DStartXRef_dyn(); return true; }
	if (inName==HX_("DStream",e4,13,75,51)) { outValue = Data_obj::DStream_dyn(); return true; }
	if (inName==HX_("DString",35,28,78,51)) { outValue = Data_obj::DString_dyn(); return true; }
	if (inName==HX_("DTrailer",cf,61,b8,8a)) { outValue = Data_obj::DTrailer_dyn(); return true; }
	if (inName==HX_("DXRefTable",6f,4d,5c,b7)) { outValue = Data_obj::DXRefTable_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Data_obj)

int Data_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DArray",b5,66,01,e9)) return 6;
	if (inName==HX_("DBool",8e,22,34,53)) return 1;
	if (inName==HX_("DComment",7b,f2,27,80)) return 14;
	if (inName==HX_("DDict",da,f7,81,54)) return 7;
	if (inName==HX_("DHexString",28,ad,68,bc)) return 4;
	if (inName==HX_("DIndirect",32,c1,25,f2)) return 8;
	if (inName==HX_("DName",af,10,18,5b)) return 5;
	if (inName==HX_("DNull",eb,3c,27,5b)) return 0;
	if (inName==HX_("DNumber",2d,86,c2,e1)) return 2;
	if (inName==HX_("DRef",6f,13,31,2d)) return 10;
	if (inName==HX_("DStartXRef",59,5c,1e,be)) return 13;
	if (inName==HX_("DStream",e4,13,75,51)) return 9;
	if (inName==HX_("DString",35,28,78,51)) return 3;
	if (inName==HX_("DTrailer",cf,61,b8,8a)) return 12;
	if (inName==HX_("DXRefTable",6f,4d,5c,b7)) return 11;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DBool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DComment,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DDict,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DHexString,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,DIndirect,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DName,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DNumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,DRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DStartXRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,DStream,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DString,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DTrailer,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,DXRefTable,return)

int Data_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DArray",b5,66,01,e9)) return 1;
	if (inName==HX_("DBool",8e,22,34,53)) return 1;
	if (inName==HX_("DComment",7b,f2,27,80)) return 1;
	if (inName==HX_("DDict",da,f7,81,54)) return 1;
	if (inName==HX_("DHexString",28,ad,68,bc)) return 1;
	if (inName==HX_("DIndirect",32,c1,25,f2)) return 3;
	if (inName==HX_("DName",af,10,18,5b)) return 1;
	if (inName==HX_("DNull",eb,3c,27,5b)) return 0;
	if (inName==HX_("DNumber",2d,86,c2,e1)) return 1;
	if (inName==HX_("DRef",6f,13,31,2d)) return 2;
	if (inName==HX_("DStartXRef",59,5c,1e,be)) return 1;
	if (inName==HX_("DStream",e4,13,75,51)) return 2;
	if (inName==HX_("DString",35,28,78,51)) return 1;
	if (inName==HX_("DTrailer",cf,61,b8,8a)) return 1;
	if (inName==HX_("DXRefTable",6f,4d,5c,b7)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Data_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DArray",b5,66,01,e9)) return DArray_dyn();
	if (inName==HX_("DBool",8e,22,34,53)) return DBool_dyn();
	if (inName==HX_("DComment",7b,f2,27,80)) return DComment_dyn();
	if (inName==HX_("DDict",da,f7,81,54)) return DDict_dyn();
	if (inName==HX_("DHexString",28,ad,68,bc)) return DHexString_dyn();
	if (inName==HX_("DIndirect",32,c1,25,f2)) return DIndirect_dyn();
	if (inName==HX_("DName",af,10,18,5b)) return DName_dyn();
	if (inName==HX_("DNull",eb,3c,27,5b)) return DNull;
	if (inName==HX_("DNumber",2d,86,c2,e1)) return DNumber_dyn();
	if (inName==HX_("DRef",6f,13,31,2d)) return DRef_dyn();
	if (inName==HX_("DStartXRef",59,5c,1e,be)) return DStartXRef_dyn();
	if (inName==HX_("DStream",e4,13,75,51)) return DStream_dyn();
	if (inName==HX_("DString",35,28,78,51)) return DString_dyn();
	if (inName==HX_("DTrailer",cf,61,b8,8a)) return DTrailer_dyn();
	if (inName==HX_("DXRefTable",6f,4d,5c,b7)) return DXRefTable_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Data_obj_sStaticFields[] = {
	HX_("DNull",eb,3c,27,5b),
	HX_("DBool",8e,22,34,53),
	HX_("DNumber",2d,86,c2,e1),
	HX_("DString",35,28,78,51),
	HX_("DHexString",28,ad,68,bc),
	HX_("DName",af,10,18,5b),
	HX_("DArray",b5,66,01,e9),
	HX_("DDict",da,f7,81,54),
	HX_("DIndirect",32,c1,25,f2),
	HX_("DStream",e4,13,75,51),
	HX_("DRef",6f,13,31,2d),
	HX_("DXRefTable",6f,4d,5c,b7),
	HX_("DTrailer",cf,61,b8,8a),
	HX_("DStartXRef",59,5c,1e,be),
	HX_("DComment",7b,f2,27,80),
	::String(null())
};

::hx::Class Data_obj::__mClass;

Dynamic __Create_Data_obj() { return new Data_obj; }

void Data_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.pdf.Data",5d,80,8e,67), ::hx::TCanCast< Data_obj >,Data_obj_sStaticFields,0,
	&__Create_Data_obj, &__Create,
	&super::__SGetClass(), &CreateData_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Data_obj::__GetStatic;
}

void Data_obj::__boot()
{
DNull = ::hx::CreateConstEnum< Data_obj >(HX_("DNull",eb,3c,27,5b),0);
}


} // end namespace format
} // end namespace pdf
