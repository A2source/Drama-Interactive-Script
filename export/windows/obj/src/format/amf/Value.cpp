#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_format_amf_Value
#include <format/amf/Value.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace format{
namespace amf{

::format::amf::Value Value_obj::AArray(::Array< ::Dynamic> values)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AArray",98,51,ef,b5),7,1)->_hx_init(0,values);
}

::format::amf::Value Value_obj::ABool(bool b)
{
	return ::hx::CreateEnum< Value_obj >(HX_("ABool",0b,65,00,99),1,1)->_hx_init(0,b);
}

::format::amf::Value Value_obj::ADate( ::Date d)
{
	return ::hx::CreateEnum< Value_obj >(HX_("ADate",0f,37,48,9a),4,1)->_hx_init(0,d);
}

::format::amf::Value Value_obj::ANull;

::format::amf::Value Value_obj::ANumber(Float f)
{
	return ::hx::CreateEnum< Value_obj >(HX_("ANumber",ea,21,02,65),0,1)->_hx_init(0,f);
}

::format::amf::Value Value_obj::AObject( ::haxe::ds::StringMap fields, ::Dynamic size)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AObject",e0,19,c7,d8),3,2)->_hx_init(0,fields)->_hx_init(1,size);
}

::format::amf::Value Value_obj::AString(::String s)
{
	return ::hx::CreateEnum< Value_obj >(HX_("AString",f2,c3,b7,d4),2,1)->_hx_init(0,s);
}

::format::amf::Value Value_obj::AUndefined;

bool Value_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AArray",98,51,ef,b5)) { outValue = Value_obj::AArray_dyn(); return true; }
	if (inName==HX_("ABool",0b,65,00,99)) { outValue = Value_obj::ABool_dyn(); return true; }
	if (inName==HX_("ADate",0f,37,48,9a)) { outValue = Value_obj::ADate_dyn(); return true; }
	if (inName==HX_("ANull",68,7f,f3,a0)) { outValue = Value_obj::ANull; return true; }
	if (inName==HX_("ANumber",ea,21,02,65)) { outValue = Value_obj::ANumber_dyn(); return true; }
	if (inName==HX_("AObject",e0,19,c7,d8)) { outValue = Value_obj::AObject_dyn(); return true; }
	if (inName==HX_("AString",f2,c3,b7,d4)) { outValue = Value_obj::AString_dyn(); return true; }
	if (inName==HX_("AUndefined",0f,8e,c5,11)) { outValue = Value_obj::AUndefined; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Value_obj)

int Value_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return 7;
	if (inName==HX_("ABool",0b,65,00,99)) return 1;
	if (inName==HX_("ADate",0f,37,48,9a)) return 4;
	if (inName==HX_("ANull",68,7f,f3,a0)) return 6;
	if (inName==HX_("ANumber",ea,21,02,65)) return 0;
	if (inName==HX_("AObject",e0,19,c7,d8)) return 3;
	if (inName==HX_("AString",f2,c3,b7,d4)) return 2;
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return 5;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,AArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,ABool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,ADate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,ANumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,AObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,AString,return)

int Value_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return 1;
	if (inName==HX_("ABool",0b,65,00,99)) return 1;
	if (inName==HX_("ADate",0f,37,48,9a)) return 1;
	if (inName==HX_("ANull",68,7f,f3,a0)) return 0;
	if (inName==HX_("ANumber",ea,21,02,65)) return 1;
	if (inName==HX_("AObject",e0,19,c7,d8)) return 2;
	if (inName==HX_("AString",f2,c3,b7,d4)) return 1;
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Value_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return AArray_dyn();
	if (inName==HX_("ABool",0b,65,00,99)) return ABool_dyn();
	if (inName==HX_("ADate",0f,37,48,9a)) return ADate_dyn();
	if (inName==HX_("ANull",68,7f,f3,a0)) return ANull;
	if (inName==HX_("ANumber",ea,21,02,65)) return ANumber_dyn();
	if (inName==HX_("AObject",e0,19,c7,d8)) return AObject_dyn();
	if (inName==HX_("AString",f2,c3,b7,d4)) return AString_dyn();
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return AUndefined;
	return super::__Field(inName,inCallProp);
}

static ::String Value_obj_sStaticFields[] = {
	HX_("ANumber",ea,21,02,65),
	HX_("ABool",0b,65,00,99),
	HX_("AString",f2,c3,b7,d4),
	HX_("AObject",e0,19,c7,d8),
	HX_("ADate",0f,37,48,9a),
	HX_("AUndefined",0f,8e,c5,11),
	HX_("ANull",68,7f,f3,a0),
	HX_("AArray",98,51,ef,b5),
	::String(null())
};

::hx::Class Value_obj::__mClass;

Dynamic __Create_Value_obj() { return new Value_obj; }

void Value_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.amf.Value",e6,1d,f3,38), ::hx::TCanCast< Value_obj >,Value_obj_sStaticFields,0,
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
ANull = ::hx::CreateConstEnum< Value_obj >(HX_("ANull",68,7f,f3,a0),6);
AUndefined = ::hx::CreateConstEnum< Value_obj >(HX_("AUndefined",0f,8e,c5,11),5);
}


} // end namespace format
} // end namespace amf
