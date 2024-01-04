#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_Debug
#include <openfl/display/Debug.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif
#ifndef INCLUDED_states_BaseState
#include <states/BaseState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_18109ed7540de0aa_9_new,"states.BaseState","new",0x747af4e6,"states.BaseState.new","states/BaseState.hx",9,0x1f3e26cb)
HX_LOCAL_STACK_FRAME(_hx_pos_18109ed7540de0aa_12_create,"states.BaseState","create",0xfe895a36,"states.BaseState.create","states/BaseState.hx",12,0x1f3e26cb)
HX_LOCAL_STACK_FRAME(_hx_pos_18109ed7540de0aa_25_update,"states.BaseState","update",0x097f7943,"states.BaseState.update","states/BaseState.hx",25,0x1f3e26cb)
namespace states{

void BaseState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_18109ed7540de0aa_9_new)
HXDLIN(   9)		super::__construct(MaxSize);
            	}

Dynamic BaseState_obj::__CreateEmpty() { return new BaseState_obj; }

void *BaseState_obj::_hx_vtable = 0;

Dynamic BaseState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseState_obj > _hx_result = new BaseState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BaseState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x15cc349e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15cc349e;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void BaseState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_18109ed7540de0aa_12_create)
HXLINE(  13)		this->super::create();
HXLINE(  15)		int Alpha = 255;
HXDLIN(  15)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  15)		{
HXLINE(  15)			color = (color & -16711681);
HXDLIN(  15)			color = (color | 6291456);
            		}
HXDLIN(  15)		{
HXLINE(  15)			color = (color & -65281);
HXDLIN(  15)			color = (color | 24576);
            		}
HXDLIN(  15)		{
HXLINE(  15)			color = (color & -256);
HXDLIN(  15)			color = (color | 96);
            		}
HXDLIN(  15)		{
HXLINE(  15)			color = (color & 16777215);
HXDLIN(  15)			int color1;
HXDLIN(  15)			if ((Alpha > 255)) {
HXLINE(  15)				color1 = 255;
            			}
            			else {
HXLINE(  15)				if ((Alpha < 0)) {
HXLINE(  15)					color1 = 0;
            				}
            				else {
HXLINE(  15)					color1 = Alpha;
            				}
            			}
HXDLIN(  15)			color = (color | (color1 << 24));
            		}
HXDLIN(  15)		this->set_bgColor(color);
HXLINE(  17)		::flixel::FlxG_obj::mouse->set_useSystemCursor(true);
HXLINE(  18)		::openfl::ui::Mouse_obj::set_cursor(HX_("auto",6f,df,76,40));
HXLINE(  20)		if (::hx::IsNotNull( ::Main_obj::debugData )) {
HXLINE(  21)			::Main_obj::debugData->extras = ::Array_obj< ::String >::__new(0);
            		}
            	}


void BaseState_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_18109ed7540de0aa_25_update)
HXLINE(  26)		this->super::update(dt);
HXLINE(  29)		if (::flixel::FlxG_obj::get_fullscreen()) {
HXLINE(  30)			::flixel::FlxG_obj::set_fullscreen(false);
            		}
            	}



::hx::ObjectPtr< BaseState_obj > BaseState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< BaseState_obj > __this = new BaseState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< BaseState_obj > BaseState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	BaseState_obj *__this = (BaseState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseState_obj), true, "states.BaseState"));
	*(void **)__this = BaseState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

BaseState_obj::BaseState_obj()
{
}

::hx::Val BaseState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BaseState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BaseState_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseState_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class BaseState_obj::__mClass;

void BaseState_obj::__register()
{
	BaseState_obj _hx_dummy;
	BaseState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.BaseState",f4,49,21,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
