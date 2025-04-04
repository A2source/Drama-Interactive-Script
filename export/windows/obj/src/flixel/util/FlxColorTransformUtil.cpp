#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_8_setMultipliers,"flixel.util.FlxColorTransformUtil","setMultipliers",0x2ef980db,"flixel.util.FlxColorTransformUtil.setMultipliers","flixel/util/FlxColorTransformUtil.hx",8,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_18_setOffsets,"flixel.util.FlxColorTransformUtil","setOffsets",0xbbc06809,"flixel.util.FlxColorTransformUtil.setOffsets","flixel/util/FlxColorTransformUtil.hx",18,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_32_hasRGBMultipliers,"flixel.util.FlxColorTransformUtil","hasRGBMultipliers",0xd2859e14,"flixel.util.FlxColorTransformUtil.hasRGBMultipliers","flixel/util/FlxColorTransformUtil.hx",32,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_40_hasRGBAMultipliers,"flixel.util.FlxColorTransformUtil","hasRGBAMultipliers",0xfe0e906f,"flixel.util.FlxColorTransformUtil.hasRGBAMultipliers","flixel/util/FlxColorTransformUtil.hx",40,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_48_hasRGBOffsets,"flixel.util.FlxColorTransformUtil","hasRGBOffsets",0x81d534c2,"flixel.util.FlxColorTransformUtil.hasRGBOffsets","flixel/util/FlxColorTransformUtil.hx",48,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_56_hasRGBAOffsets,"flixel.util.FlxColorTransformUtil","hasRGBAOffsets",0xc8891d9d,"flixel.util.FlxColorTransformUtil.hasRGBAOffsets","flixel/util/FlxColorTransformUtil.hx",56,0xf5538e7b)
namespace flixel{
namespace util{

void FlxColorTransformUtil_obj::__construct() { }

Dynamic FlxColorTransformUtil_obj::__CreateEmpty() { return new FlxColorTransformUtil_obj; }

void *FlxColorTransformUtil_obj::_hx_vtable = 0;

Dynamic FlxColorTransformUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxColorTransformUtil_obj > _hx_result = new FlxColorTransformUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxColorTransformUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2588ff77;
}

 ::openfl::geom::ColorTransform FlxColorTransformUtil_obj::setMultipliers( ::openfl::geom::ColorTransform transform,Float red,Float green,Float blue,Float alpha){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_8_setMultipliers)
HXLINE(   9)		transform->redMultiplier = red;
HXLINE(  10)		transform->greenMultiplier = green;
HXLINE(  11)		transform->blueMultiplier = blue;
HXLINE(  12)		transform->alphaMultiplier = alpha;
HXLINE(  14)		return transform;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorTransformUtil_obj,setMultipliers,return )

 ::openfl::geom::ColorTransform FlxColorTransformUtil_obj::setOffsets( ::openfl::geom::ColorTransform transform,Float red,Float green,Float blue,Float alpha){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_18_setOffsets)
HXLINE(  19)		transform->redOffset = red;
HXLINE(  20)		transform->greenOffset = green;
HXLINE(  21)		transform->blueOffset = blue;
HXLINE(  22)		transform->alphaOffset = alpha;
HXLINE(  24)		return transform;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorTransformUtil_obj,setOffsets,return )

bool FlxColorTransformUtil_obj::hasRGBMultipliers( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_32_hasRGBMultipliers)
HXDLIN(  32)		bool _hx_tmp;
HXDLIN(  32)		if ((transform->redMultiplier == 1)) {
HXDLIN(  32)			_hx_tmp = (transform->greenMultiplier != 1);
            		}
            		else {
HXDLIN(  32)			_hx_tmp = true;
            		}
HXDLIN(  32)		if (!(_hx_tmp)) {
HXDLIN(  32)			return (transform->blueMultiplier != 1);
            		}
            		else {
HXDLIN(  32)			return true;
            		}
HXDLIN(  32)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBMultipliers,return )

bool FlxColorTransformUtil_obj::hasRGBAMultipliers( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_40_hasRGBAMultipliers)
HXDLIN(  40)		if (!(::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(transform))) {
HXDLIN(  40)			return (transform->alphaMultiplier != 1);
            		}
            		else {
HXDLIN(  40)			return true;
            		}
HXDLIN(  40)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBAMultipliers,return )

bool FlxColorTransformUtil_obj::hasRGBOffsets( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_48_hasRGBOffsets)
HXDLIN(  48)		bool _hx_tmp;
HXDLIN(  48)		if ((transform->redOffset == 0)) {
HXDLIN(  48)			_hx_tmp = (transform->greenOffset != 0);
            		}
            		else {
HXDLIN(  48)			_hx_tmp = true;
            		}
HXDLIN(  48)		if (!(_hx_tmp)) {
HXDLIN(  48)			return (transform->blueOffset != 0);
            		}
            		else {
HXDLIN(  48)			return true;
            		}
HXDLIN(  48)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBOffsets,return )

bool FlxColorTransformUtil_obj::hasRGBAOffsets( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_56_hasRGBAOffsets)
HXDLIN(  56)		if (!(::flixel::util::FlxColorTransformUtil_obj::hasRGBOffsets(transform))) {
HXDLIN(  56)			return (transform->alphaOffset != 0);
            		}
            		else {
HXDLIN(  56)			return true;
            		}
HXDLIN(  56)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBAOffsets,return )


FlxColorTransformUtil_obj::FlxColorTransformUtil_obj()
{
}

bool FlxColorTransformUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"setOffsets") ) { outValue = setOffsets_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasRGBOffsets") ) { outValue = hasRGBOffsets_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setMultipliers") ) { outValue = setMultipliers_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasRGBAOffsets") ) { outValue = hasRGBAOffsets_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasRGBMultipliers") ) { outValue = hasRGBMultipliers_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasRGBAMultipliers") ) { outValue = hasRGBAMultipliers_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxColorTransformUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxColorTransformUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxColorTransformUtil_obj::__mClass;

static ::String FlxColorTransformUtil_obj_sStaticFields[] = {
	HX_("setMultipliers",50,e5,6f,9c),
	HX_("setOffsets",fe,2d,44,2a),
	HX_("hasRGBMultipliers",bf,b0,7b,19),
	HX_("hasRGBAMultipliers",64,d3,68,ce),
	HX_("hasRGBOffsets",ed,d5,2b,a0),
	HX_("hasRGBAOffsets",12,82,ff,35),
	::String(null())
};

void FlxColorTransformUtil_obj::__register()
{
	FlxColorTransformUtil_obj _hx_dummy;
	FlxColorTransformUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxColorTransformUtil",83,a4,ea,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxColorTransformUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxColorTransformUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxColorTransformUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxColorTransformUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxColorTransformUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
