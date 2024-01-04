#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_display_Debug
#include <openfl/display/Debug.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_112b56a048794975_24_new,"openfl.display.Debug","new",0xc3d6471b,"openfl.display.Debug.new","openfl/display/Debug.hx",24,0x5b5d8fb7)
HX_LOCAL_STACK_FRAME(_hx_pos_112b56a048794975_77___enterFrame,"openfl.display.Debug","__enterFrame",0xc0c7d8fa,"openfl.display.Debug.__enterFrame","openfl/display/Debug.hx",77,0x5b5d8fb7)
namespace openfl{
namespace display{

void Debug_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color){
            		Float x = __o_x.Default(10);
            		Float y = __o_y.Default(10);
            		int color = __o_color.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_112b56a048794975_24_new)
HXLINE(  39)		this->lastUpdate = ((Float)0);
HXLINE(  45)		super::__construct();
HXLINE(  47)		this->set_x(x);
HXLINE(  48)		this->set_y(y);
HXLINE(  50)		this->currentFPS = 0;
HXLINE(  51)		this->set_selectable(false);
HXLINE(  52)		this->mouseEnabled = false;
HXLINE(  53)		this->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getFont(HX_("assets/fonts/metropolis.otf",e8,8b,3c,23),null())->name,15,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  54)		this->set_width(( (Float)(::flixel::FlxG_obj::width) ));
HXLINE(  55)		this->set_height(( (Float)(::flixel::FlxG_obj::height) ));
HXLINE(  57)		this->set_text(HX_("",00,00,00,00));
HXLINE(  59)		this->cacheCount = 0;
HXLINE(  60)		this->currentTime = ( (Float)(0) );
HXLINE(  61)		this->highestMem = ( (Float)(0) );
HXLINE(  62)		this->times = ::Array_obj< Float >::__new(0);
HXLINE(  64)		this->extras = ::Array_obj< ::String >::__new(0);
            	}

Dynamic Debug_obj::__CreateEmpty() { return new Debug_obj; }

void *Debug_obj::_hx_vtable = 0;

Dynamic Debug_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Debug_obj > _hx_result = new Debug_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Debug_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1eb56281) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1eb56281;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7f0de750;
	}
}

void Debug_obj::_hx___enterFrame(int _tmp_d){
            	HX_STACKFRAME(&_hx_pos_112b56a048794975_77___enterFrame)
HXLINE(  78)		Float d = ( (Float)(_tmp_d) );
HXDLIN(  78)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  78)		Float _hx_tmp;
HXDLIN(  78)		if ((timer > 0)) {
HXLINE(  78)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  78)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  78)		this->currentTime = _hx_tmp;
HXLINE(  80)		Float dt = (this->currentTime - this->lastUpdate);
HXLINE(  81)		this->lastUpdate = this->currentTime;
HXLINE(  83)		this->times->push(this->currentTime);
HXLINE(  85)		while((this->times->__get(0) < (this->currentTime - ( (Float)(1) )))){
HXLINE(  86)			this->times->shift();
            		}
HXLINE(  88)		int currentCount = this->times->length;
HXLINE(  89)		this->currentFPS = currentCount;
HXLINE(  90)		this->currentMem = ::Math_obj::abs(( (Float)(::Math_obj::round((( (Float)(::openfl::_hx_system::System_obj::get_totalMemory()) ) / ((Float)1e+6)))) ));
HXLINE(  92)		this->set_text(HX_("",00,00,00,00));
HXLINE(  93)		::String _hx_tmp1 = this->get_text();
HXDLIN(  93)		this->set_text((_hx_tmp1 + (this->currentFPS + HX_(" FPS\n",41,7c,54,9b))));
HXLINE(  96)		if ((this->currentMem > this->highestMem)) {
HXLINE(  97)			this->highestMem = this->currentMem;
            		}
HXLINE(  99)		Float desiredMem = this->currentMem;
HXLINE( 100)		::String suffix = HX_(" MB",75,8b,18,00);
HXLINE( 101)		if ((desiredMem > 1000)) {
HXLINE( 103)			desiredMem = ::flixel::math::FlxMath_obj::roundDecimal((desiredMem / ( (Float)(1000) )),2);
HXLINE( 104)			suffix = HX_(" GB",3b,86,18,00);
            		}
HXLINE( 106)		this->set_text((this->get_text() + (desiredMem + suffix)));
HXLINE( 108)		desiredMem = this->highestMem;
HXLINE( 109)		suffix = HX_(" MB",75,8b,18,00);
HXLINE( 110)		if ((this->highestMem > 1000)) {
HXLINE( 112)			desiredMem = ::flixel::math::FlxMath_obj::roundDecimal((this->highestMem / ( (Float)(1000) )),2);
HXLINE( 113)			suffix = HX_(" GB",3b,86,18,00);
            		}
HXLINE( 115)		this->set_text((this->get_text() + ((HX_(" \\ ",64,98,18,00) + desiredMem) + suffix)));
HXLINE( 117)		{
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			::Array< ::String > _g1 = this->extras;
HXDLIN( 117)			while((_g < _g1->length)){
HXLINE( 117)				::String string = _g1->__get(_g);
HXDLIN( 117)				_g = (_g + 1);
HXLINE( 118)				this->set_text((this->get_text() + (HX_("\n",0a,00,00,00) + string)));
            			}
            		}
HXLINE( 120)		this->cacheCount = currentCount;
            	}



::hx::ObjectPtr< Debug_obj > Debug_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color) {
	::hx::ObjectPtr< Debug_obj > __this = new Debug_obj();
	__this->__construct(__o_x,__o_y,__o_color);
	return __this;
}

::hx::ObjectPtr< Debug_obj > Debug_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color) {
	Debug_obj *__this = (Debug_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Debug_obj), true, "openfl.display.Debug"));
	*(void **)__this = Debug_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_color);
	return __this;
}

Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_MEMBER_NAME(currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(currentMem,"currentMem");
	HX_MARK_MEMBER_NAME(highestMem,"highestMem");
	HX_MARK_MEMBER_NAME(cacheCount,"cacheCount");
	HX_MARK_MEMBER_NAME(currentTime,"currentTime");
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(lastUpdate,"lastUpdate");
	HX_MARK_MEMBER_NAME(extras,"extras");
	 ::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(currentMem,"currentMem");
	HX_VISIT_MEMBER_NAME(highestMem,"highestMem");
	HX_VISIT_MEMBER_NAME(cacheCount,"cacheCount");
	HX_VISIT_MEMBER_NAME(currentTime,"currentTime");
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(lastUpdate,"lastUpdate");
	HX_VISIT_MEMBER_NAME(extras,"extras");
	 ::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Debug_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return ::hx::Val( times ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"extras") ) { return ::hx::Val( extras ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { return ::hx::Val( currentFPS ); }
		if (HX_FIELD_EQ(inName,"currentMem") ) { return ::hx::Val( currentMem ); }
		if (HX_FIELD_EQ(inName,"highestMem") ) { return ::hx::Val( highestMem ); }
		if (HX_FIELD_EQ(inName,"cacheCount") ) { return ::hx::Val( cacheCount ); }
		if (HX_FIELD_EQ(inName,"lastUpdate") ) { return ::hx::Val( lastUpdate ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return ::hx::Val( currentTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Debug_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"extras") ) { extras=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentMem") ) { currentMem=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"highestMem") ) { highestMem=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheCount") ) { cacheCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastUpdate") ) { lastUpdate=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentFPS",30,71,28,c7));
	outFields->push(HX_("currentMem",5c,d3,2d,c7));
	outFields->push(HX_("highestMem",51,9a,50,71));
	outFields->push(HX_("cacheCount",2d,ab,1b,8d));
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	outFields->push(HX_("times",c6,bf,35,10));
	outFields->push(HX_("lastUpdate",ff,68,e0,51));
	outFields->push(HX_("extras",e3,a3,24,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Debug_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Debug_obj,currentFPS),HX_("currentFPS",30,71,28,c7)},
	{::hx::fsFloat,(int)offsetof(Debug_obj,currentMem),HX_("currentMem",5c,d3,2d,c7)},
	{::hx::fsFloat,(int)offsetof(Debug_obj,highestMem),HX_("highestMem",51,9a,50,71)},
	{::hx::fsInt,(int)offsetof(Debug_obj,cacheCount),HX_("cacheCount",2d,ab,1b,8d)},
	{::hx::fsFloat,(int)offsetof(Debug_obj,currentTime),HX_("currentTime",e6,a4,8e,85)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Debug_obj,times),HX_("times",c6,bf,35,10)},
	{::hx::fsFloat,(int)offsetof(Debug_obj,lastUpdate),HX_("lastUpdate",ff,68,e0,51)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Debug_obj,extras),HX_("extras",e3,a3,24,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Debug_obj_sStaticStorageInfo = 0;
#endif

static ::String Debug_obj_sMemberFields[] = {
	HX_("currentFPS",30,71,28,c7),
	HX_("currentMem",5c,d3,2d,c7),
	HX_("highestMem",51,9a,50,71),
	HX_("cacheCount",2d,ab,1b,8d),
	HX_("currentTime",e6,a4,8e,85),
	HX_("times",c6,bf,35,10),
	HX_("lastUpdate",ff,68,e0,51),
	HX_("extras",e3,a3,24,c7),
	HX_("__enterFrame",15,7f,e3,3a),
	::String(null()) };

::hx::Class Debug_obj::__mClass;

void Debug_obj::__register()
{
	Debug_obj _hx_dummy;
	Debug_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Debug",a9,1d,90,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Debug_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Debug_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Debug_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Debug_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
