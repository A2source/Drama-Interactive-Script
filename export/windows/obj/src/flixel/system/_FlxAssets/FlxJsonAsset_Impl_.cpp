#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FlxJsonAsset_Impl_
#include <flixel/system/_FlxAssets/FlxJsonAsset_Impl_.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1a8263561f5674e9_79_getData,"flixel.system._FlxAssets.FlxJsonAsset_Impl_","getData",0x4df94853,"flixel.system._FlxAssets.FlxJsonAsset_Impl_.getData","flixel/system/FlxAssets.hx",79,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_1a8263561f5674e9_94_fromPath,"flixel.system._FlxAssets.FlxJsonAsset_Impl_","fromPath",0x5fe4965c,"flixel.system._FlxAssets.FlxJsonAsset_Impl_.fromPath","flixel/system/FlxAssets.hx",94,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_1a8263561f5674e9_99_fromDataString,"flixel.system._FlxAssets.FlxJsonAsset_Impl_","fromDataString",0x07608292,"flixel.system._FlxAssets.FlxJsonAsset_Impl_.fromDataString","flixel/system/FlxAssets.hx",99,0xd3ac1356)
namespace flixel{
namespace _hx_system{
namespace _FlxAssets{

void FlxJsonAsset_Impl__obj::__construct() { }

Dynamic FlxJsonAsset_Impl__obj::__CreateEmpty() { return new FlxJsonAsset_Impl__obj; }

void *FlxJsonAsset_Impl__obj::_hx_vtable = 0;

Dynamic FlxJsonAsset_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxJsonAsset_Impl__obj > _hx_result = new FlxJsonAsset_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxJsonAsset_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x123cd297;
}

 ::Dynamic FlxJsonAsset_Impl__obj::getData( ::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_1a8263561f5674e9_79_getData)
HXLINE(  80)		if (::Std_obj::isOfType(this1,::hx::ClassOf< ::String >())) {
HXLINE(  82)			::String str = ( (::String)(this1) );
HXLINE(  83)			if (::openfl::utils::Assets_obj::exists(str,null())) {
HXLINE(  84)				return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getText(str))->doParse();
            			}
HXLINE(  86)			return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,str)->doParse();
            		}
HXLINE(  89)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxJsonAsset_Impl__obj,getData,return )

 ::Dynamic FlxJsonAsset_Impl__obj::fromPath(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_1a8263561f5674e9_94_fromPath)
HXDLIN(  94)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getText(path))->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxJsonAsset_Impl__obj,fromPath,return )

 ::Dynamic FlxJsonAsset_Impl__obj::fromDataString(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_1a8263561f5674e9_99_fromDataString)
HXDLIN(  99)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxJsonAsset_Impl__obj,fromDataString,return )


FlxJsonAsset_Impl__obj::FlxJsonAsset_Impl__obj()
{
}

bool FlxJsonAsset_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { outValue = getData_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromPath") ) { outValue = fromPath_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromDataString") ) { outValue = fromDataString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxJsonAsset_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxJsonAsset_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxJsonAsset_Impl__obj::__mClass;

static ::String FlxJsonAsset_Impl__obj_sStaticFields[] = {
	HX_("getData",e0,05,e6,14),
	HX_("fromPath",2f,b4,1d,a8),
	HX_("fromDataString",a5,40,fe,f4),
	::String(null())
};

void FlxJsonAsset_Impl__obj::__register()
{
	FlxJsonAsset_Impl__obj _hx_dummy;
	FlxJsonAsset_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system._FlxAssets.FlxJsonAsset_Impl_",e1,77,06,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxJsonAsset_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxJsonAsset_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxJsonAsset_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxJsonAsset_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxJsonAsset_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace _FlxAssets
