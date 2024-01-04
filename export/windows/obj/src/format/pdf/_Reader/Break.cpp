#include <hxcpp.h>

#ifndef INCLUDED_format_pdf__Reader_Break
#include <format/pdf/_Reader/Break.h>
#endif
namespace format{
namespace pdf{
namespace _Reader{

::format::pdf::_Reader::Break Break_obj::BDictEnd;

::format::pdf::_Reader::Break Break_obj::BEndObj;

bool Break_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BDictEnd",e3,c3,ba,13)) { outValue = Break_obj::BDictEnd; return true; }
	if (inName==HX_("BEndObj",be,f0,91,e7)) { outValue = Break_obj::BEndObj; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Break_obj)

int Break_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BDictEnd",e3,c3,ba,13)) return 0;
	if (inName==HX_("BEndObj",be,f0,91,e7)) return 1;
	return super::__FindIndex(inName);
}

int Break_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BDictEnd",e3,c3,ba,13)) return 0;
	if (inName==HX_("BEndObj",be,f0,91,e7)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Break_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BDictEnd",e3,c3,ba,13)) return BDictEnd;
	if (inName==HX_("BEndObj",be,f0,91,e7)) return BEndObj;
	return super::__Field(inName,inCallProp);
}

static ::String Break_obj_sStaticFields[] = {
	HX_("BDictEnd",e3,c3,ba,13),
	HX_("BEndObj",be,f0,91,e7),
	::String(null())
};

::hx::Class Break_obj::__mClass;

Dynamic __Create_Break_obj() { return new Break_obj; }

void Break_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.pdf._Reader.Break",c0,ad,03,6e), ::hx::TCanCast< Break_obj >,Break_obj_sStaticFields,0,
	&__Create_Break_obj, &__Create,
	&super::__SGetClass(), &CreateBreak_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Break_obj::__GetStatic;
}

void Break_obj::__boot()
{
BDictEnd = ::hx::CreateConstEnum< Break_obj >(HX_("BDictEnd",e3,c3,ba,13),0);
BEndObj = ::hx::CreateConstEnum< Break_obj >(HX_("BEndObj",be,f0,91,e7),1);
}


} // end namespace format
} // end namespace pdf
} // end namespace _Reader
