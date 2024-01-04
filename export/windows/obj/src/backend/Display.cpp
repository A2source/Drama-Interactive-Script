#include <hxcpp.h>

#ifndef INCLUDED_backend_Display
#include <backend/Display.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c42808264c4947ec_10_textFormat,"backend.Display","textFormat",0xc63916aa,"backend.Display.textFormat","backend/Display.hx",10,0xe8847737)
namespace backend{

void Display_obj::__construct() { }

Dynamic Display_obj::__CreateEmpty() { return new Display_obj; }

void *Display_obj::_hx_vtable = 0;

Dynamic Display_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Display_obj > _hx_result = new Display_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Display_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fd22d4a;
}

 ::openfl::text::TextFormat Display_obj::textFormat(int col){
            	HX_GC_STACKFRAME(&_hx_pos_c42808264c4947ec_10_textFormat)
HXDLIN(  10)		return  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getFont(HX_("assets/fonts/metropolis.otf",e8,8b,3c,23),null())->name,20,col,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Display_obj,textFormat,return )


Display_obj::Display_obj()
{
}

bool Display_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { outValue = textFormat_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Display_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Display_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Display_obj::__mClass;

static ::String Display_obj_sStaticFields[] = {
	HX_("textFormat",c4,0f,7f,34),
	::String(null())
};

void Display_obj::__register()
{
	Display_obj _hx_dummy;
	Display_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Display",c8,c3,2b,ee);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Display_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Display_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Display_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Display_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Display_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
