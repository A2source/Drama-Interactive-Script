#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_amf3_Value
#include <format/amf3/Value.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace format{
namespace amf3{

::format::amf3::Value Value_obj::AArray(::Array< ::Dynamic> values, ::haxe::ds::StringMap extra)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AArray",98,51,ef,b5),8,2)->_hx_init(0,values)->_hx_init(1,extra);
}

::format::amf3::Value Value_obj::ABool(bool b)
{
	return ::hx::CreateEnum< Value_obj >(HX_("ABool",0b,65,00,99),2,1)->_hx_init(0,b);
}

::format::amf3::Value Value_obj::ABytes( ::haxe::io::Bytes b)
{
	return ::hx::CreateEnum< Value_obj >(HX_("ABytes",6a,ec,f7,4d),11,1)->_hx_init(0,b);
}

::format::amf3::Value Value_obj::ADate( ::Date d)
{
	return ::hx::CreateEnum< Value_obj >(HX_("ADate",0f,37,48,9a),6,1)->_hx_init(0,d);
}

::format::amf3::Value Value_obj::AInt(int i)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AInt",2e,a3,2e,2b),3,1)->_hx_init(0,i);
}

::format::amf3::Value Value_obj::AMap( ::haxe::ds::EnumValueMap m)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AMap",db,a0,31,2b),12,1)->_hx_init(0,m);
}

::format::amf3::Value Value_obj::ANull;

::format::amf3::Value Value_obj::ANumber(Float f)
{
	return ::hx::CreateEnum< Value_obj >(HX_("ANumber",ea,21,02,65),4,1)->_hx_init(0,f);
}

::format::amf3::Value Value_obj::AObject( ::haxe::ds::StringMap fields, ::Dynamic size,::String classname)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AObject",e0,19,c7,d8),7,3)->_hx_init(0,fields)->_hx_init(1,size)->_hx_init(2,classname);
}

::format::amf3::Value Value_obj::AString(::String s)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AString",f2,c3,b7,d4),5,1)->_hx_init(0,s);
}

::format::amf3::Value Value_obj::AUndefined;

::format::amf3::Value Value_obj::AVector(::Array< ::Dynamic> values,::String classname)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AVector",e4,4b,e5,5a),9,2)->_hx_init(0,values)->_hx_init(1,classname);
}

::format::amf3::Value Value_obj::AXml( ::Xml x)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AXml",16,04,3a,2b),10,1)->_hx_init(0,x);
}

bool Value_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AArray",98,51,ef,b5)) { outValue = Value_obj::AArray_dyn(); return true; }
	if (inName==HX_("ABool",0b,65,00,99)) { outValue = Value_obj::ABool_dyn(); return true; }
	if (inName==HX_("ABytes",6a,ec,f7,4d)) { outValue = Value_obj::ABytes_dyn(); return true; }
	if (inName==HX_("ADate",0f,37,48,9a)) { outValue = Value_obj::ADate_dyn(); return true; }
	if (inName==HX_("AInt",2e,a3,2e,2b)) { outValue = Value_obj::AInt_dyn(); return true; }
	if (inName==HX_("AMap",db,a0,31,2b)) { outValue = Value_obj::AMap_dyn(); return true; }
	if (inName==HX_("ANull",68,7f,f3,a0)) { outValue = Value_obj::ANull; return true; }
	if (inName==HX_("ANumber",ea,21,02,65)) { outValue = Value_obj::ANumber_dyn(); return true; }
	if (inName==HX_("AObject",e0,19,c7,d8)) { outValue = Value_obj::AObject_dyn(); return true; }
	if (inName==HX_("AString",f2,c3,b7,d4)) { outValue = Value_obj::AString_dyn(); return true; }
	if (inName==HX_("AUndefined",0f,8e,c5,11)) { outValue = Value_obj::AUndefined; return true; }
	if (inName==HX_("AVector",e4,4b,e5,5a)) { outValue = Value_obj::AVector_dyn(); return true; }
	if (inName==HX_("AXml",16,04,3a,2b)) { outValue = Value_obj::AXml_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Value_obj)

int Value_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return 8;
	if (inName==HX_("ABool",0b,65,00,99)) return 2;
	if (inName==HX_("ABytes",6a,ec,f7,4d)) return 11;
	if (inName==HX_("ADate",0f,37,48,9a)) return 6;
	if (inName==HX_("AInt",2e,a3,2e,2b)) return 3;
	if (inName==HX_("AMap",db,a0,31,2b)) return 12;
	if (inName==HX_("ANull",68,7f,f3,a0)) return 1;
	if (inName==HX_("ANumber",ea,21,02,65)) return 4;
	if (inName==HX_("AObject",e0,19,c7,d8)) return 7;
	if (inName==HX_("AString",f2,c3,b7,d4)) return 5;
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return 0;
	if (inName==HX_("AVector",e4,4b,e5,5a)) return 9;
	if (inName==HX_("AXml",16,04,3a,2b)) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,AArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,ABool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,ABytes,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,ADate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,AInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,AMap,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,ANumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Value_obj,AObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,AString,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,AVector,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,AXml,return)

int Value_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return 2;
	if (inName==HX_("ABool",0b,65,00,99)) return 1;
	if (inName==HX_("ABytes",6a,ec,f7,4d)) return 1;
	if (inName==HX_("ADate",0f,37,48,9a)) return 1;
	if (inName==HX_("AInt",2e,a3,2e,2b)) return 1;
	if (inName==HX_("AMap",db,a0,31,2b)) return 1;
	if (inName==HX_("ANull",68,7f,f3,a0)) return 0;
	if (inName==HX_("ANumber",ea,21,02,65)) return 1;
	if (inName==HX_("AObject",e0,19,c7,d8)) return 3;
	if (inName==HX_("AString",f2,c3,b7,d4)) return 1;
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return 0;
	if (inName==HX_("AVector",e4,4b,e5,5a)) return 2;
	if (inName==HX_("AXml",16,04,3a,2b)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Value_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return AArray_dyn();
	if (inName==HX_("ABool",0b,65,00,99)) return ABool_dyn();
	if (inName==HX_("ABytes",6a,ec,f7,4d)) return ABytes_dyn();
	if (inName==HX_("ADate",0f,37,48,9a)) return ADate_dyn();
	if (inName==HX_("AInt",2e,a3,2e,2b)) return AInt_dyn();
	if (inName==HX_("AMap",db,a0,31,2b)) return AMap_dyn();
	if (inName==HX_("ANull",68,7f,f3,a0)) return ANull;
	if (inName==HX_("ANumber",ea,21,02,65)) return ANumber_dyn();
	if (inName==HX_("AObject",e0,19,c7,d8)) return AObject_dyn();
	if (inName==HX_("AString",f2,c3,b7,d4)) return AString_dyn();
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return AUndefined;
	if (inName==HX_("AVector",e4,4b,e5,5a)) return AVector_dyn();
	if (inName==HX_("AXml",16,04,3a,2b)) return AXml_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Value_obj_sStaticFields[] = {
	HX_("AUndefined",0f,8e,c5,11),
	HX_("ANull",68,7f,f3,a0),
	HX_("ABool",0b,65,00,99),
	HX_("AInt",2e,a3,2e,2b),
	HX_("ANumber",ea,21,02,65),
	HX_("AString",f2,c3,b7,d4),
	HX_("ADate",0f,37,48,9a),
	HX_("AObject",e0,19,c7,d8),
	HX_("AArray",98,51,ef,b5),
	HX_("AVector",e4,4b,e5,5a),
	HX_("AXml",16,04,3a,2b),
	HX_("ABytes",6a,ec,f7,4d),
	HX_("AMap",db,a0,31,2b),
	::String(null())
};

::hx::Class Value_obj::__mClass;

Dynamic __Create_Value_obj() { return new Value_obj; }

void Value_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.amf3.Value",f3,6d,b7,10), ::hx::TCanCast< Value_obj >,Value_obj_sStaticFields,0,
	&__Create_Value_obj, &__Create,
	&super::__SGetClass(), &CreateValue_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Value_obj::__GetStatic;
}

void Value_obj::__boot()
{
ANull = ::hx::CreateConstEnum< Value_obj >(HX_("ANull",68,7f,f3,a0),1);
AUndefined = ::hx::CreateConstEnum< Value_obj >(HX_("AUndefined",0f,8e,c5,11),0);
}


} // end namespace format
} // end namespace amf3
