#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_GraphicVirtualInput
#include <flixel/system/GraphicVirtualInput.h>
#endif
#ifndef INCLUDED_flixel_system_VirtualInputData
#include <flixel/system/VirtualInputData.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_215_drawLogo,"flixel.system.FlxAssets","drawLogo",0xabec0035,"flixel.system.FlxAssets.drawLogo","flixel/system/FlxAssets.hx",215,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_271_getBitmapData,"flixel.system.FlxAssets","getBitmapData",0x17128189,"flixel.system.FlxAssets.getBitmapData","flixel/system/FlxAssets.hx",271,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_286_getBitmapFromClass,"flixel.system.FlxAssets","getBitmapFromClass",0x223d9eaf,"flixel.system.FlxAssets.getBitmapFromClass","flixel/system/FlxAssets.hx",286,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_300_resolveBitmapData,"flixel.system.FlxAssets","resolveBitmapData",0x02df705f,"flixel.system.FlxAssets.resolveBitmapData","flixel/system/FlxAssets.hx",300,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_329_resolveKey,"flixel.system.FlxAssets","resolveKey",0xd790f639,"flixel.system.FlxAssets.resolveKey","flixel/system/FlxAssets.hx",329,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_359_getSound,"flixel.system.FlxAssets","getSound",0x306e52ff,"flixel.system.FlxAssets.getSound","flixel/system/FlxAssets.hx",359,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_367_getVirtualInputFrames,"flixel.system.FlxAssets","getVirtualInputFrames",0xfe1716d5,"flixel.system.FlxAssets.getVirtualInputFrames","flixel/system/FlxAssets.hx",367,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_120_boot,"flixel.system.FlxAssets","boot",0x48106fd8,"flixel.system.FlxAssets.boot","flixel/system/FlxAssets.hx",120,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_211_boot,"flixel.system.FlxAssets","boot",0x48106fd8,"flixel.system.FlxAssets.boot","flixel/system/FlxAssets.hx",211,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_212_boot,"flixel.system.FlxAssets","boot",0x48106fd8,"flixel.system.FlxAssets.boot","flixel/system/FlxAssets.hx",212,0xd3ac1356)
namespace flixel{
namespace _hx_system{

void FlxAssets_obj::__construct() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return new FlxAssets_obj; }

void *FlxAssets_obj::_hx_vtable = 0;

Dynamic FlxAssets_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAssets_obj > _hx_result = new FlxAssets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAssets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d7f0aca;
}

::String FlxAssets_obj::defaultSoundExtension;

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

void FlxAssets_obj::drawLogo( ::openfl::display::Graphics graph){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_215_drawLogo)
HXLINE( 217)		graph->beginFill(47394,null());
HXLINE( 218)		graph->moveTo(( (Float)(50) ),( (Float)(13) ));
HXLINE( 219)		graph->lineTo(( (Float)(51) ),( (Float)(13) ));
HXLINE( 220)		graph->lineTo(( (Float)(87) ),( (Float)(50) ));
HXLINE( 221)		graph->lineTo(( (Float)(87) ),( (Float)(51) ));
HXLINE( 222)		graph->lineTo(( (Float)(51) ),( (Float)(87) ));
HXLINE( 223)		graph->lineTo(( (Float)(50) ),( (Float)(87) ));
HXLINE( 224)		graph->lineTo(( (Float)(13) ),( (Float)(51) ));
HXLINE( 225)		graph->lineTo(( (Float)(13) ),( (Float)(50) ));
HXLINE( 226)		graph->lineTo(( (Float)(50) ),( (Float)(13) ));
HXLINE( 227)		graph->endFill();
HXLINE( 230)		graph->beginFill(16761138,null());
HXLINE( 231)		graph->moveTo(( (Float)(0) ),( (Float)(0) ));
HXLINE( 232)		graph->lineTo(( (Float)(25) ),( (Float)(0) ));
HXLINE( 233)		graph->lineTo(( (Float)(50) ),( (Float)(13) ));
HXLINE( 234)		graph->lineTo(( (Float)(13) ),( (Float)(50) ));
HXLINE( 235)		graph->lineTo(( (Float)(0) ),( (Float)(25) ));
HXLINE( 236)		graph->lineTo(( (Float)(0) ),( (Float)(0) ));
HXLINE( 237)		graph->endFill();
HXLINE( 240)		graph->beginFill(16066382,null());
HXLINE( 241)		graph->moveTo(( (Float)(100) ),( (Float)(0) ));
HXLINE( 242)		graph->lineTo(( (Float)(75) ),( (Float)(0) ));
HXLINE( 243)		graph->lineTo(( (Float)(51) ),( (Float)(13) ));
HXLINE( 244)		graph->lineTo(( (Float)(87) ),( (Float)(50) ));
HXLINE( 245)		graph->lineTo(( (Float)(100) ),( (Float)(25) ));
HXLINE( 246)		graph->lineTo(( (Float)(100) ),( (Float)(0) ));
HXLINE( 247)		graph->endFill();
HXLINE( 250)		graph->beginFill(3555839,null());
HXLINE( 251)		graph->moveTo(( (Float)(0) ),( (Float)(100) ));
HXLINE( 252)		graph->lineTo(( (Float)(25) ),( (Float)(100) ));
HXLINE( 253)		graph->lineTo(( (Float)(50) ),( (Float)(87) ));
HXLINE( 254)		graph->lineTo(( (Float)(13) ),( (Float)(51) ));
HXLINE( 255)		graph->lineTo(( (Float)(0) ),( (Float)(75) ));
HXLINE( 256)		graph->lineTo(( (Float)(0) ),( (Float)(100) ));
HXLINE( 257)		graph->endFill();
HXLINE( 260)		graph->beginFill(314875,null());
HXLINE( 261)		graph->moveTo(( (Float)(100) ),( (Float)(100) ));
HXLINE( 262)		graph->lineTo(( (Float)(75) ),( (Float)(100) ));
HXLINE( 263)		graph->lineTo(( (Float)(51) ),( (Float)(87) ));
HXLINE( 264)		graph->lineTo(( (Float)(87) ),( (Float)(51) ));
HXLINE( 265)		graph->lineTo(( (Float)(100) ),( (Float)(75) ));
HXLINE( 266)		graph->lineTo(( (Float)(100) ),( (Float)(100) ));
HXLINE( 267)		graph->endFill();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

 ::openfl::display::BitmapData FlxAssets_obj::getBitmapData(::String id){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_271_getBitmapData)
HXLINE( 272)		if (::openfl::utils::Assets_obj::exists(id,null())) {
HXLINE( 273)			return ::openfl::utils::Assets_obj::getBitmapData(id,false);
            		}
HXLINE( 274)		::flixel::FlxG_obj::log->advanced(((HX_("Could not find a BitmapData asset with ID '",5f,79,a9,21) + id) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 275)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

 ::openfl::display::BitmapData FlxAssets_obj::getBitmapFromClass(::hx::Class source){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_286_getBitmapFromClass)
HXDLIN( 286)		return ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(source,::cpp::VirtualArray_obj::__new(0))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapFromClass,return )

 ::openfl::display::BitmapData FlxAssets_obj::resolveBitmapData( ::Dynamic Graphic){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_300_resolveBitmapData)
HXLINE( 301)		if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 303)			return ( ( ::openfl::display::BitmapData)(Graphic) );
            		}
            		else {
HXLINE( 305)			if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 307)				return ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(Graphic,::cpp::VirtualArray_obj::__new(0))) );
            			}
            			else {
HXLINE( 309)				if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::String >())) {
HXLINE( 311)					 ::openfl::display::BitmapData _hx_tmp;
HXDLIN( 311)					if (::openfl::utils::Assets_obj::exists(( (::String)(Graphic) ),null())) {
HXLINE( 311)						_hx_tmp = ::openfl::utils::Assets_obj::getBitmapData(( (::String)(Graphic) ),false);
            					}
            					else {
HXLINE( 311)						::flixel::FlxG_obj::log->advanced(((HX_("Could not find a BitmapData asset with ID '",5f,79,a9,21) + Graphic) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN( 311)						_hx_tmp = null();
            					}
HXDLIN( 311)					return _hx_tmp;
            				}
            			}
            		}
HXLINE( 314)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,resolveBitmapData,return )

::String FlxAssets_obj::resolveKey( ::Dynamic Graphic,::String Key){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_329_resolveKey)
HXLINE( 330)		if (::hx::IsNotNull( Key )) {
HXLINE( 332)			return Key;
            		}
HXLINE( 335)		if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 337)			return Key;
            		}
            		else {
HXLINE( 339)			if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 341)				 ::flixel::_hx_system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;
HXDLIN( 341)				return ::Type_obj::getClassName(Graphic);
            			}
            			else {
HXLINE( 343)				if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::String >())) {
HXLINE( 345)					return ( (::String)(Graphic) );
            				}
            			}
            		}
HXLINE( 348)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAssets_obj,resolveKey,return )

 ::openfl::media::Sound FlxAssets_obj::getSound(::String id){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_359_getSound)
HXLINE( 360)		bool _hx_tmp;
HXDLIN( 360)		bool _hx_tmp1;
HXDLIN( 360)		if (!(::StringTools_obj::endsWith(id,HX_(".mp3",02,e8,ba,1e)))) {
HXLINE( 360)			_hx_tmp1 = !(::StringTools_obj::endsWith(id,HX_(".ogg",e1,64,bc,1e)));
            		}
            		else {
HXLINE( 360)			_hx_tmp1 = false;
            		}
HXDLIN( 360)		if (_hx_tmp1) {
HXLINE( 360)			_hx_tmp = !(::StringTools_obj::endsWith(id,HX_(".wav",be,71,c2,1e)));
            		}
            		else {
HXLINE( 360)			_hx_tmp = false;
            		}
HXDLIN( 360)		if (_hx_tmp) {
HXLINE( 361)			id = (id + (HX_(".",2e,00,00,00) + ::flixel::_hx_system::FlxAssets_obj::defaultSoundExtension));
            		}
HXLINE( 363)		return ::openfl::utils::Assets_obj::getSound(id,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getSound,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAssets_obj::getVirtualInputFrames(){
            	HX_GC_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_367_getVirtualInputFrames)
HXLINE( 368)		 ::flixel::_hx_system::GraphicVirtualInput bitmapData =  ::flixel::_hx_system::GraphicVirtualInput_obj::__alloc( HX_CTX ,0,0,null(),null());
HXLINE( 373)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmapData,null(),null(),null());
HXLINE( 374)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(graphic,::Std_obj::string( ::flixel::_hx_system::VirtualInputData_obj::__alloc( HX_CTX ,null())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,getVirtualInputFrames,return )


FlxAssets_obj::FlxAssets_obj()
{
}

bool FlxAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { outValue = drawLogo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resolveKey") ) { outValue = resolveKey_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { outValue = ( FONT_DEFAULT ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { outValue = ( FONT_DEBUGGER ); return true; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolveBitmapData") ) { outValue = resolveBitmapData_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBitmapFromClass") ) { outValue = getBitmapFromClass_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defaultSoundExtension") ) { outValue = ( defaultSoundExtension ); return true; }
		if (HX_FIELD_EQ(inName,"getVirtualInputFrames") ) { outValue = getVirtualInputFrames_dyn(); return true; }
	}
	return false;
}

bool FlxAssets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { FONT_DEFAULT=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { FONT_DEBUGGER=ioValue.Cast< ::String >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defaultSoundExtension") ) { defaultSoundExtension=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAssets_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxAssets_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxAssets_obj::defaultSoundExtension,HX_("defaultSoundExtension",51,31,33,98)},
	{::hx::fsString,(void *) &FlxAssets_obj::FONT_DEFAULT,HX_("FONT_DEFAULT",f1,12,32,e2)},
	{::hx::fsString,(void *) &FlxAssets_obj::FONT_DEBUGGER,HX_("FONT_DEBUGGER",d1,d3,ef,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxAssets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::defaultSoundExtension,"defaultSoundExtension");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAssets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::defaultSoundExtension,"defaultSoundExtension");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#endif

::hx::Class FlxAssets_obj::__mClass;

static ::String FlxAssets_obj_sStaticFields[] = {
	HX_("defaultSoundExtension",51,31,33,98),
	HX_("FONT_DEFAULT",f1,12,32,e2),
	HX_("FONT_DEBUGGER",d1,d3,ef,ea),
	HX_("drawLogo",8f,49,21,5c),
	HX_("getBitmapData",ef,11,33,90),
	HX_("getBitmapFromClass",89,dc,79,c1),
	HX_("resolveBitmapData",c5,2b,67,fa),
	HX_("resolveKey",13,ca,ae,f6),
	HX_("getSound",59,9c,a3,e0),
	HX_("getVirtualInputFrames",3b,7d,77,6e),
	::String(null())
};

void FlxAssets_obj::__register()
{
	FlxAssets_obj _hx_dummy;
	FlxAssets_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxAssets",88,16,13,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAssets_obj::__SetStatic;
	__mClass->mMarkFunc = FlxAssets_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAssets_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAssets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAssets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAssets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAssets_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxAssets_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_120_boot)
HXDLIN( 120)		defaultSoundExtension = HX_("ogg",4f,94,54,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_211_boot)
HXDLIN( 211)		FONT_DEFAULT = HX_("Nokia Cellphone FC Small",d6,2f,44,ca);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_212_boot)
HXDLIN( 212)		FONT_DEBUGGER = HX_("Monsterrat",2b,92,73,63);
            	}
}

} // end namespace flixel
} // end namespace system
