#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FlxXmlAsset_Impl_
#include <flixel/system/_FlxAssets/FlxXmlAsset_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_392c32109d0ee29a_52_getXml,"flixel.system._FlxAssets.FlxXmlAsset_Impl_","getXml",0x8489080f,"flixel.system._FlxAssets.FlxXmlAsset_Impl_.getXml","flixel/system/FlxAssets.hx",52,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_392c32109d0ee29a_67_fromPath,"flixel.system._FlxAssets.FlxXmlAsset_Impl_","fromPath",0x66b93cdd,"flixel.system._FlxAssets.FlxXmlAsset_Impl_.fromPath","flixel/system/FlxAssets.hx",67,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_392c32109d0ee29a_72_fromXmlString,"flixel.system._FlxAssets.FlxXmlAsset_Impl_","fromXmlString",0x0b1003d0,"flixel.system._FlxAssets.FlxXmlAsset_Impl_.fromXmlString","flixel/system/FlxAssets.hx",72,0xd3ac1356)
namespace flixel{
namespace _hx_system{
namespace _FlxAssets{

void FlxXmlAsset_Impl__obj::__construct() { }

Dynamic FlxXmlAsset_Impl__obj::__CreateEmpty() { return new FlxXmlAsset_Impl__obj; }

void *FlxXmlAsset_Impl__obj::_hx_vtable = 0;

Dynamic FlxXmlAsset_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxXmlAsset_Impl__obj > _hx_result = new FlxXmlAsset_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxXmlAsset_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b3e938a;
}

 ::Xml FlxXmlAsset_Impl__obj::getXml( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_392c32109d0ee29a_52_getXml)
HXLINE(  53)		if (::Std_obj::isOfType(this1,::hx::ClassOf< ::String >())) {
HXLINE(  55)			::String str = ( (::String)(this1) );
HXLINE(  56)			if (::openfl::utils::Assets_obj::exists(str,null())) {
HXLINE(  57)				return ::Xml_obj::parse(::openfl::utils::Assets_obj::getText(str));
            			}
HXLINE(  59)			return ::Xml_obj::parse(str);
            		}
HXLINE(  62)		return ::hx::TCast<  ::Xml >::cast(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxXmlAsset_Impl__obj,getXml,return )

 ::Xml FlxXmlAsset_Impl__obj::fromPath(::String path){
            	HX_STACKFRAME(&_hx_pos_392c32109d0ee29a_67_fromPath)
HXDLIN(  67)		return ::Xml_obj::parse(::openfl::utils::Assets_obj::getText(path));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxXmlAsset_Impl__obj,fromPath,return )

 ::Xml FlxXmlAsset_Impl__obj::fromXmlString(::String data){
            	HX_STACKFRAME(&_hx_pos_392c32109d0ee29a_72_fromXmlString)
HXDLIN(  72)		return ::Xml_obj::parse(data);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxXmlAsset_Impl__obj,fromXmlString,return )


FlxXmlAsset_Impl__obj::FlxXmlAsset_Impl__obj()
{
}

bool FlxXmlAsset_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getXml") ) { outValue = getXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromPath") ) { outValue = fromPath_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromXmlString") ) { outValue = fromXmlString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxXmlAsset_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxXmlAsset_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxXmlAsset_Impl__obj::__mClass;

static ::String FlxXmlAsset_Impl__obj_sStaticFields[] = {
	HX_("getXml",e1,a6,2a,a3),
	HX_("fromPath",2f,b4,1d,a8),
	HX_("fromXmlString",3e,c3,5f,80),
	::String(null())
};

void FlxXmlAsset_Impl__obj::__register()
{
	FlxXmlAsset_Impl__obj _hx_dummy;
	FlxXmlAsset_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system._FlxAssets.FlxXmlAsset_Impl_",80,a5,c4,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxXmlAsset_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxXmlAsset_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxXmlAsset_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxXmlAsset_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxXmlAsset_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace _FlxAssets
