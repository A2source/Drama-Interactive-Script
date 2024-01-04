#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxButtonPlus
#include <flixel/addons/ui/FlxButtonPlus.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_objects_Popup
#include <objects/Popup.h>
#endif
#ifndef INCLUDED_objects_QuickObjects
#include <objects/QuickObjects.h>
#endif
#ifndef INCLUDED_objects_Ribbon
#include <objects/Ribbon.h>
#endif
#ifndef INCLUDED_objects_Script
#include <objects/Script.h>
#endif
#ifndef INCLUDED_objects_Tab
#include <objects/Tab.h>
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
#ifndef INCLUDED_states_BaseState
#include <states/BaseState.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
#ifndef INCLUDED_states_ScriptState
#include <states/ScriptState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_17_new,"states.ScriptState","new",0xffc354ac,"states.ScriptState.new","states/ScriptState.hx",17,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_72_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",72,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_83_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",83,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_87_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",87,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_99_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",99,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_92_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",92,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_109_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",109,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_119_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",119,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_145_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",145,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_149_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",149,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_153_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",153,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_163_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",163,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_157_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",157,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_173_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",173,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_183_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",183,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_187_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",187,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_191_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",191,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_195_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",195,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_208_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",208,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_201_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",201,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_218_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",218,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_44_create,"states.ScriptState","create",0xfe669a30,"states.ScriptState.create","states/ScriptState.hx",44,0x9d048405)
static const int _hx_array_data_bd00ceba_23[] = {
	(int)-27500,(int)-50887,
};
static const int _hx_array_data_bd00ceba_24[] = {
	(int)-65536,(int)-3538944,
};
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_223_update,"states.ScriptState","update",0x095cb93d,"states.ScriptState.update","states/ScriptState.hx",223,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_254_updateAddingLabel,"states.ScriptState","updateAddingLabel",0xbe5e9696,"states.ScriptState.updateAddingLabel","states/ScriptState.hx",254,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_290_updateReading,"states.ScriptState","updateReading",0xffd4bb8f,"states.ScriptState.updateReading","states/ScriptState.hx",290,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_288_updateReading,"states.ScriptState","updateReading",0xffd4bb8f,"states.ScriptState.updateReading","states/ScriptState.hx",288,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_296_showRibbon,"states.ScriptState","showRibbon",0x0e8b3427,"states.ScriptState.showRibbon","states/ScriptState.hx",296,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_302_hideRibbon,"states.ScriptState","hideRibbon",0x3c9c35ac,"states.ScriptState.hideRibbon","states/ScriptState.hx",302,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_306_hideRibbon,"states.ScriptState","hideRibbon",0x3c9c35ac,"states.ScriptState.hideRibbon","states/ScriptState.hx",306,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_313_setDebugData,"states.ScriptState","setDebugData",0xe09a4c4f,"states.ScriptState.setDebugData","states/ScriptState.hx",313,0x9d048405)
HX_LOCAL_STACK_FRAME(_hx_pos_7d1873cd8f2988ac_19_boot,"states.ScriptState","boot",0xc33fc266,"states.ScriptState.boot","states/ScriptState.hx",19,0x9d048405)
namespace states{

void ScriptState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_17_new)
HXLINE(  32)		this->assetToAdd = HX_("",00,00,00,00);
HXLINE(  31)		this->state = HX_("reading",4c,fb,e1,02);
HXLINE(  23)		this->scrollSpeed = ((Float)1);
HXLINE(  17)		super::__construct(MaxSize);
            	}

Dynamic ScriptState_obj::__CreateEmpty() { return new ScriptState_obj; }

void *ScriptState_obj::_hx_vtable = 0;

Dynamic ScriptState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScriptState_obj > _hx_result = new ScriptState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScriptState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x15cc349e) {
			if (inClassId<=(int)0x103b37e4) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x103b37e4;
			} else {
				return inClassId==(int)0x15cc349e;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void ScriptState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::ScriptState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_72_create)
HXLINE(  74)			 ::flixel::util::FlxTimer curTimer = _gthis->ribbonHoverTimers->__get(0).StaticCast<  ::flixel::util::FlxTimer >();
HXLINE(  76)			if (curTimer->active) {
HXLINE(  77)				curTimer->cancel();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_83_create)
HXLINE(  83)			::haxe::Log_obj::trace(HX_("ah, good ol options menu",3c,a4,ff,0b),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),83,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_87_create)
HXLINE(  87)			::haxe::Log_obj::trace(HX_("keyboard shortcuts are hot",15,1e,56,6e),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),87,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_4, ::states::ScriptState,_gthis,Float,hoverDelayTime) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::states::ScriptState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer timer){
            				HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_99_create)
HXLINE( 100)				::haxe::Log_obj::trace(HX_("HOVERED AND OPENED OPTIONS",15,2a,bc,e1),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),100,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
HXLINE( 101)				_gthis->optionsTab->openDropdown();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_92_create)
HXLINE(  94)			 ::flixel::util::FlxTimer curTimer = _gthis->ribbonHoverTimers->__get(0).StaticCast<  ::flixel::util::FlxTimer >();
HXLINE(  95)			if (curTimer->active) {
HXLINE(  96)				curTimer->cancel();
            			}
HXLINE(  98)			curTimer->start(hoverDelayTime, ::Dynamic(new _hx_Closure_3(_gthis)),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::states::ScriptState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_109_create)
HXLINE( 111)			 ::flixel::util::FlxTimer curTimer = _gthis->ribbonHoverTimers->__get(1).StaticCast<  ::flixel::util::FlxTimer >();
HXLINE( 113)			if (curTimer->active) {
HXLINE( 114)				curTimer->cancel();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::states::ScriptState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_119_create)
HXLINE( 138)			 ::objects::Popup popup =  ::objects::Popup_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 139)			popup->add();
HXLINE( 141)			_gthis->hideRibbon();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_145_create)
HXLINE( 145)			::haxe::Log_obj::trace(HX_("sound effect, also a classic",70,3f,1b,a6),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),145,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_149_create)
HXLINE( 149)			::haxe::Log_obj::trace(HX_("music, new but appreciated",74,3d,31,7f),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),149,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_9) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_153_create)
HXLINE( 153)			::haxe::Log_obj::trace(HX_("event, added right before provincials but very useful",46,f8,89,7a),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),153,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_11, ::states::ScriptState,_gthis,Float,hoverDelayTime) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_10, ::states::ScriptState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer timer){
            				HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_163_create)
HXLINE( 164)				::haxe::Log_obj::trace(HX_("HOVERED AND OPENED ASSETS",8c,39,98,cc),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),164,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
HXLINE( 165)				_gthis->assetsTab->openDropdown();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_157_create)
HXLINE( 159)			 ::flixel::util::FlxTimer curTimer = _gthis->ribbonHoverTimers->__get(1).StaticCast<  ::flixel::util::FlxTimer >();
HXLINE( 160)			if (curTimer->active) {
HXLINE( 161)				curTimer->cancel();
            			}
HXLINE( 162)			curTimer->start(hoverDelayTime, ::Dynamic(new _hx_Closure_10(_gthis)),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_12, ::states::ScriptState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_173_create)
HXLINE( 175)			 ::flixel::util::FlxTimer curTimer = _gthis->ribbonHoverTimers->__get(2).StaticCast<  ::flixel::util::FlxTimer >();
HXLINE( 176)			if (curTimer->active) {
HXLINE( 177)				curTimer->cancel();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_13) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_183_create)
HXLINE( 183)			::haxe::Log_obj::trace(HX_("saved lol",70,c2,0a,a5),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),183,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_14) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_187_create)
HXLINE( 187)			::haxe::Log_obj::trace(HX_("saved as lol",d4,da,65,d8),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),187,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_15) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_191_create)
HXLINE( 191)			::haxe::Log_obj::trace(HX_("opening a menu",86,45,81,73),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),191,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_17) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_195_create)
HXLINE( 195)			 ::flixel::FlxState nextState =  ::states::MenuState_obj::__alloc( HX_CTX ,null());
HXDLIN( 195)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 195)			 ::Dynamic _hx_tmp = ::Reflect_obj::field(::flixel::FlxG_obj::game->_state,HX_("switchTo",8f,f8,d6,0d));
HXDLIN( 195)			if (( (bool)(_hx_tmp(nextState)) )) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_16, ::flixel::FlxState,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_195_create)
HXLINE( 195)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE( 195)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            					else {
HXLINE( 195)						::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 195)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_16(nextState,stateOnCall)));
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_19, ::states::ScriptState,_gthis,Float,hoverDelayTime) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_18, ::states::ScriptState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer timer){
            				HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_208_create)
HXLINE( 209)				::haxe::Log_obj::trace(HX_("HOVERED AND OPENED SCRIPT",14,3f,f5,c7),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),209,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
HXLINE( 210)				_gthis->scriptTab->openDropdown();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_201_create)
HXLINE( 203)			 ::flixel::util::FlxTimer curTimer = _gthis->ribbonHoverTimers->__get(2).StaticCast<  ::flixel::util::FlxTimer >();
HXLINE( 205)			if (curTimer->active) {
HXLINE( 206)				curTimer->cancel();
            			}
HXLINE( 207)			curTimer->start(hoverDelayTime, ::Dynamic(new _hx_Closure_18(_gthis)),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_20, ::states::ScriptState,_gthis) HXARGC(1)
            		void _hx_run( ::objects::Tab tab){
            			HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_218_create)
HXLINE( 218)			_gthis->add(tab->button).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_44_create)
HXDLIN(  44)		 ::states::ScriptState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  45)		this->super::create();
HXLINE(  46)		::states::ScriptState_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  48)		this->script =  ::objects::Script_obj::__alloc( HX_CTX ,::states::ScriptState_obj::scriptName);
HXLINE(  49)		this->add(this->script->pages);
HXLINE(  51)		::haxe::Log_obj::trace((HX_("working with script ",6a,5d,c2,0a) + ::states::ScriptState_obj::scriptName),::hx::SourceInfo(HX_("source/states/ScriptState.hx",91,98,cb,db),51,HX_("states.ScriptState",ba,ce,00,bd),HX_("create",fc,66,0f,7c)));
HXLINE(  52)		 ::openfl::text::TextField scriptLabel = ::objects::QuickObjects_obj::createText(0,0,::states::ScriptState_obj::scriptName,null(),null(),null());
HXLINE(  53)		int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  53)		scriptLabel->set_x((( (Float)(_hx_tmp) ) - scriptLabel->get_width()));
HXLINE(  54)		int _hx_tmp1 = ::flixel::FlxG_obj::height;
HXDLIN(  54)		scriptLabel->set_y((( (Float)(_hx_tmp1) ) - scriptLabel->get_height()));
HXLINE(  59)		this->scrollTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  60)		this->placeTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  62)		this->ribbonHoverTimers = ::Array_obj< ::Dynamic>::__new();
HXLINE(  63)		{
HXLINE(  64)			::Array< ::Dynamic> _hx_tmp2 = this->ribbonHoverTimers;
HXDLIN(  64)			_hx_tmp2->push( ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null()));
HXDLIN(  64)			::Array< ::Dynamic> _hx_tmp3 = this->ribbonHoverTimers;
HXDLIN(  64)			_hx_tmp3->push( ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null()));
HXDLIN(  64)			::Array< ::Dynamic> _hx_tmp4 = this->ribbonHoverTimers;
HXDLIN(  64)			_hx_tmp4->push( ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null()));
            		}
HXLINE(  66)		 ::flixel::group::FlxTypedGroup tabs =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  67)		Float hoverDelayTime = ((Float)0.2);
HXLINE(  71)		 ::flixel::addons::ui::FlxButtonPlus optionsButton = ::objects::QuickObjects_obj::getButton(0,0,HX_("Options",3e,5b,4f,ad),null(),null(), ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE(  80)		 ::flixel::group::FlxTypedGroup optionsDropdown =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  81)		Float _hx_tmp5 = optionsButton->get_height();
HXDLIN(  81)		optionsDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp5 * ( (Float)((optionsDropdown->members->get_length() + 1)) ))),HX_("Preferences",98,4e,23,57), ::Dynamic(new _hx_Closure_1()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE(  85)		Float _hx_tmp6 = optionsButton->get_height();
HXDLIN(  85)		optionsDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp6 * ( (Float)((optionsDropdown->members->get_length() + 1)) ))),HX_("Shortcuts",0d,9f,85,49), ::Dynamic(new _hx_Closure_2()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE(  90)		this->optionsTab =  ::objects::Tab_obj::__alloc( HX_CTX ,optionsButton,optionsDropdown);
HXLINE(  91)		optionsButton->enterCallback =  ::Dynamic(new _hx_Closure_4(_gthis,hoverDelayTime));
HXLINE( 104)		tabs->add(this->optionsTab).StaticCast<  ::objects::Tab >();
HXLINE( 108)		 ::flixel::addons::ui::FlxButtonPlus assetsButton = ::objects::QuickObjects_obj::getButton(0,0,HX_("Add",01,aa,31,00),null(),null(), ::Dynamic(new _hx_Closure_5(_gthis)),null(),null(),null());
HXLINE( 117)		 ::flixel::group::FlxTypedGroup assetsDropdown =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 118)		Float _hx_tmp7 = assetsButton->get_height();
HXDLIN( 118)		assetsDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp7 * ( (Float)((assetsDropdown->members->get_length() + 1)) ))),HX_("Label",d4,7d,dc,02), ::Dynamic(new _hx_Closure_6(_gthis)),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE( 143)		Float _hx_tmp8 = assetsButton->get_height();
HXDLIN( 143)		assetsDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp8 * ( (Float)((assetsDropdown->members->get_length() + 1)) ))),HX_("SFX",65,38,3f,00), ::Dynamic(new _hx_Closure_7()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE( 147)		Float _hx_tmp9 = assetsButton->get_height();
HXDLIN( 147)		assetsDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp9 * ( (Float)((assetsDropdown->members->get_length() + 1)) ))),HX_("Music",85,40,88,a3), ::Dynamic(new _hx_Closure_8()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE( 151)		Float _hx_tmp10 = assetsButton->get_height();
HXDLIN( 151)		assetsDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp10 * ( (Float)((assetsDropdown->members->get_length() + 1)) ))),HX_("Event",fa,37,f2,08), ::Dynamic(new _hx_Closure_9()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE( 155)		this->assetsTab =  ::objects::Tab_obj::__alloc( HX_CTX ,assetsButton,assetsDropdown);
HXLINE( 156)		assetsButton->enterCallback =  ::Dynamic(new _hx_Closure_11(_gthis,hoverDelayTime));
HXLINE( 168)		tabs->add(this->assetsTab).StaticCast<  ::objects::Tab >();
HXLINE( 172)		 ::flixel::addons::ui::FlxButtonPlus scriptButton = ::objects::QuickObjects_obj::getButton(0,0,HX_("Script",2b,c2,f4,7b),null(),null(), ::Dynamic(new _hx_Closure_12(_gthis)),null(),null(),null());
HXLINE( 180)		 ::flixel::group::FlxTypedGroup scriptDropdown =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 181)		Float _hx_tmp11 = scriptButton->get_height();
HXDLIN( 181)		scriptDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp11 * ( (Float)((scriptDropdown->members->get_length() + 1)) ))),HX_("Save",5d,b7,26,37), ::Dynamic(new _hx_Closure_13()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE( 185)		Float _hx_tmp12 = scriptButton->get_height();
HXDLIN( 185)		scriptDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp12 * ( (Float)((scriptDropdown->members->get_length() + 1)) ))),HX_("Save As...",19,f5,73,8f), ::Dynamic(new _hx_Closure_14()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE( 189)		Float _hx_tmp13 = scriptButton->get_height();
HXDLIN( 189)		scriptDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp13 * ( (Float)((scriptDropdown->members->get_length() + 1)) ))),HX_("Open",ea,2f,8d,34), ::Dynamic(new _hx_Closure_15()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE( 193)		Float _hx_tmp14 = scriptButton->get_height();
HXDLIN( 193)		scriptDropdown->add(::objects::QuickObjects_obj::getButton(0,::Std_obj::_hx_int((_hx_tmp14 * ( (Float)((scriptDropdown->members->get_length() + 1)) ))),HX_("Exit",3e,23,f7,2d), ::Dynamic(new _hx_Closure_17()),null(),null(),null(),null(),null())).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >();
HXLINE( 197)		Dynamic( scriptDropdown->members->__get((scriptDropdown->length - 1))).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >()->updateActiveButtonColors(::Array_obj< int >::fromData( _hx_array_data_bd00ceba_23,2));
HXLINE( 198)		Dynamic( scriptDropdown->members->__get((scriptDropdown->length - 1))).StaticCast<  ::flixel::addons::ui::FlxButtonPlus >()->updateInactiveButtonColors(::Array_obj< int >::fromData( _hx_array_data_bd00ceba_24,2));
HXLINE( 199)		this->scriptTab =  ::objects::Tab_obj::__alloc( HX_CTX ,scriptButton,scriptDropdown);
HXLINE( 200)		scriptButton->enterCallback =  ::Dynamic(new _hx_Closure_19(_gthis,hoverDelayTime));
HXLINE( 213)		tabs->add(this->scriptTab).StaticCast<  ::objects::Tab >();
HXLINE( 215)		this->ribbon =  ::objects::Ribbon_obj::__alloc( HX_CTX ,tabs,null());
HXLINE( 216)		this->ribbon->tabs->forEach( ::Dynamic(new _hx_Closure_20(_gthis)),null());
            	}


void ScriptState_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_223_update)
HXLINE( 224)		this->super::update(dt);
HXLINE( 226)		this->script->update(dt);
HXLINE( 227)		if ((::flixel::FlxG_obj::mouse->wheel != 0)) {
HXLINE( 229)			 ::objects::Script _hx_tmp = this->script;
HXDLIN( 229)			::String _hx_tmp1 = ::Std_obj::string(::flixel::FlxG_obj::mouse->wheel);
HXDLIN( 229)			Float _hx_tmp2 = (-(::Std_obj::parseFloat(_hx_tmp1)) * this->scrollSpeed);
HXDLIN( 229)			_hx_tmp->scroll(_hx_tmp2,this->scrollTimer);
HXLINE( 231)			if (this->scrollTimer->active) {
HXLINE( 232)				this->scrollTimer->cancel();
            			}
HXLINE( 234)			this->scrollTimer->start(((Float)0.05),null(),null());
            		}
HXLINE( 237)		::String _hx_switch_0 = this->state;
            		if (  (_hx_switch_0==HX_("adding",61,65,19,9f)) ){
HXLINE( 243)			if ((this->assetToAdd == HX_("label",f4,0d,af,6f))) {
HXLINE( 246)				this->updateAddingLabel(dt);
            			}
HXLINE( 243)			goto _hx_goto_25;
            		}
            		if (  (_hx_switch_0==HX_("reading",4c,fb,e1,02)) ){
HXLINE( 240)			this->updateReading(dt);
HXDLIN( 240)			goto _hx_goto_25;
            		}
            		_hx_goto_25:;
HXLINE( 250)		this->setDebugData();
            	}


void ScriptState_obj::updateAddingLabel(Float dt){
            	HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_254_updateAddingLabel)
HXLINE( 255)		Float w = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXLINE( 257)		this->curAddingAsset->__SetField(HX_("y",79,00,00,00),::flixel::FlxG_obj::mouse->y,::hx::paccDynamic);
HXLINE( 258)		 ::Dynamic _hx_tmp =  ::Dynamic(this->curAddingAsset->__Field(HX_("setTextY",0a,b4,cd,1b),::hx::paccDynamic));
HXDLIN( 258)		int _hx_tmp1 = ::flixel::FlxG_obj::mouse->y;
HXDLIN( 258)		_hx_tmp((( (Float)(_hx_tmp1) ) - ( (Float)(this->curAddingAsset->__Field(HX_("getTextHeight",aa,e4,ae,95),::hx::paccDynamic)()) )));
HXLINE( 260)		if (((( (Float)(::flixel::FlxG_obj::mouse->x) ) - w) > 0)) {
HXLINE( 262)			this->curAddingAsset->__SetField(HX_("x",78,00,00,00),w,::hx::paccDynamic);
HXLINE( 263)			this->curAddingAsset->__SetField(HX_("width",06,b6,62,ca),(( (Float)(::flixel::FlxG_obj::mouse->x) ) - w),::hx::paccDynamic);
HXLINE( 265)			 ::Dynamic _hx_tmp =  ::Dynamic(this->curAddingAsset->__Field(HX_("setTextX",09,b4,cd,1b),::hx::paccDynamic));
HXDLIN( 265)			 ::Dynamic _hx_tmp1 =  ::Dynamic((this->curAddingAsset->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) + this->curAddingAsset->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)));
HXDLIN( 265)			_hx_tmp((( (Float)(_hx_tmp1) ) - ( (Float)(this->curAddingAsset->__Field(HX_("getTextWidth",a3,e2,a6,72),::hx::paccDynamic)()) )));
            		}
            		else {
HXLINE( 269)			this->curAddingAsset->__SetField(HX_("x",78,00,00,00),::flixel::FlxG_obj::mouse->x,::hx::paccDynamic);
HXLINE( 270)			this->curAddingAsset->__SetField(HX_("width",06,b6,62,ca),(w - ( (Float)(::flixel::FlxG_obj::mouse->x) )),::hx::paccDynamic);
HXLINE( 272)			this->curAddingAsset->__Field(HX_("setTextX",09,b4,cd,1b),::hx::paccDynamic)(::flixel::FlxG_obj::mouse->x);
            		}
HXLINE( 275)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 277)			this->state = HX_("reading",4c,fb,e1,02);
HXLINE( 278)			this->assetToAdd = HX_("",00,00,00,00);
HXLINE( 280)			this->curAddingAsset = null();
HXLINE( 282)			this->showRibbon();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptState_obj,updateAddingLabel,(void))

void ScriptState_obj::updateReading(Float dt){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,Float,dt) HXARGC(1)
            		void _hx_run( ::objects::Tab tab){
            			HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_290_updateReading)
HXLINE( 290)			tab->update(dt);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_288_updateReading)
HXDLIN( 288)		this->ribbon->tabs->forEach( ::Dynamic(new _hx_Closure_0(dt)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptState_obj,updateReading,(void))

void ScriptState_obj::showRibbon(){
            	HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_296_showRibbon)
HXDLIN( 296)		if (this->ribbon->hidden) {
HXLINE( 297)			this->ribbon->show();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScriptState_obj,showRibbon,(void))

void ScriptState_obj::hideRibbon(){
            	HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_302_hideRibbon)
HXDLIN( 302)		if (!(this->ribbon->hidden)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::objects::Tab tab){
            				HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_306_hideRibbon)
HXLINE( 306)				tab->closeDropdown();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 304)			this->ribbon->tabs->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 308)			this->ribbon->hide();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScriptState_obj,hideRibbon,(void))

void ScriptState_obj::setDebugData(){
            	HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_313_setDebugData)
HXLINE( 315)		::Main_obj::debugData->extras = ::Array_obj< ::String >::__new(0);
HXLINE( 317)		::Main_obj::debugData->extras->push((HX_("\nPage Count: ",6e,69,cb,c1) + this->script->pages->length));
HXLINE( 319)		::Array< ::String > _hx_tmp = ::Main_obj::debugData->extras;
HXDLIN( 319)		_hx_tmp->push((HX_("\nOptions Tab hovering: ",03,9f,18,e4) + ::Std_obj::string(Dynamic( this->ribbon->tabs->members->__get(0)).StaticCast<  ::objects::Tab >()->hovering)));
HXLINE( 320)		::Array< ::String > _hx_tmp1 = ::Main_obj::debugData->extras;
HXDLIN( 320)		_hx_tmp1->push((HX_("Asset Tab hovering: ",27,7d,9a,55) + ::Std_obj::string(Dynamic( this->ribbon->tabs->members->__get(1)).StaticCast<  ::objects::Tab >()->hovering)));
HXLINE( 321)		::Array< ::String > _hx_tmp2 = ::Main_obj::debugData->extras;
HXDLIN( 321)		_hx_tmp2->push((HX_("Script Tab hovering: ",2c,33,10,ed) + ::Std_obj::string(Dynamic( this->ribbon->tabs->members->__get(2)).StaticCast<  ::objects::Tab >()->hovering)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScriptState_obj,setDebugData,(void))

::String ScriptState_obj::scriptName;

 ::states::ScriptState ScriptState_obj::instance;


::hx::ObjectPtr< ScriptState_obj > ScriptState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< ScriptState_obj > __this = new ScriptState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< ScriptState_obj > ScriptState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	ScriptState_obj *__this = (ScriptState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScriptState_obj), true, "states.ScriptState"));
	*(void **)__this = ScriptState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

ScriptState_obj::ScriptState_obj()
{
}

void ScriptState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScriptState);
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(scrollTimer,"scrollTimer");
	HX_MARK_MEMBER_NAME(ribbon,"ribbon");
	HX_MARK_MEMBER_NAME(ribbonHoverTimers,"ribbonHoverTimers");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(assetToAdd,"assetToAdd");
	HX_MARK_MEMBER_NAME(curAddingAsset,"curAddingAsset");
	HX_MARK_MEMBER_NAME(placeTimer,"placeTimer");
	HX_MARK_MEMBER_NAME(optionsTab,"optionsTab");
	HX_MARK_MEMBER_NAME(assetsTab,"assetsTab");
	HX_MARK_MEMBER_NAME(scriptTab,"scriptTab");
	HX_MARK_MEMBER_NAME(savedMousePos,"savedMousePos");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScriptState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(scrollTimer,"scrollTimer");
	HX_VISIT_MEMBER_NAME(ribbon,"ribbon");
	HX_VISIT_MEMBER_NAME(ribbonHoverTimers,"ribbonHoverTimers");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(assetToAdd,"assetToAdd");
	HX_VISIT_MEMBER_NAME(curAddingAsset,"curAddingAsset");
	HX_VISIT_MEMBER_NAME(placeTimer,"placeTimer");
	HX_VISIT_MEMBER_NAME(optionsTab,"optionsTab");
	HX_VISIT_MEMBER_NAME(assetsTab,"assetsTab");
	HX_VISIT_MEMBER_NAME(scriptTab,"scriptTab");
	HX_VISIT_MEMBER_NAME(savedMousePos,"savedMousePos");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScriptState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		if (HX_FIELD_EQ(inName,"ribbon") ) { return ::hx::Val( ribbon ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsTab") ) { return ::hx::Val( assetsTab ); }
		if (HX_FIELD_EQ(inName,"scriptTab") ) { return ::hx::Val( scriptTab ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"assetToAdd") ) { return ::hx::Val( assetToAdd ); }
		if (HX_FIELD_EQ(inName,"placeTimer") ) { return ::hx::Val( placeTimer ); }
		if (HX_FIELD_EQ(inName,"optionsTab") ) { return ::hx::Val( optionsTab ); }
		if (HX_FIELD_EQ(inName,"showRibbon") ) { return ::hx::Val( showRibbon_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideRibbon") ) { return ::hx::Val( hideRibbon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"scrollTimer") ) { return ::hx::Val( scrollTimer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setDebugData") ) { return ::hx::Val( setDebugData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"savedMousePos") ) { return ::hx::Val( savedMousePos ); }
		if (HX_FIELD_EQ(inName,"updateReading") ) { return ::hx::Val( updateReading_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"curAddingAsset") ) { return ::hx::Val( curAddingAsset ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ribbonHoverTimers") ) { return ::hx::Val( ribbonHoverTimers ); }
		if (HX_FIELD_EQ(inName,"updateAddingLabel") ) { return ::hx::Val( updateAddingLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ScriptState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptName") ) { outValue = ( scriptName ); return true; }
	}
	return false;
}

::hx::Val ScriptState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::objects::Script >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ribbon") ) { ribbon=inValue.Cast<  ::objects::Ribbon >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsTab") ) { assetsTab=inValue.Cast<  ::objects::Tab >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scriptTab") ) { scriptTab=inValue.Cast<  ::objects::Tab >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"assetToAdd") ) { assetToAdd=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"placeTimer") ) { placeTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"optionsTab") ) { optionsTab=inValue.Cast<  ::objects::Tab >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollTimer") ) { scrollTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"savedMousePos") ) { savedMousePos=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"curAddingAsset") ) { curAddingAsset=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ribbonHoverTimers") ) { ribbonHoverTimers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ScriptState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::states::ScriptState >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptName") ) { scriptName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void ScriptState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("script",0b,4e,60,47));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("scrollTimer",78,08,13,5a));
	outFields->push(HX_("ribbon",16,b2,d3,4a));
	outFields->push(HX_("ribbonHoverTimers",74,ed,b3,53));
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("assetToAdd",56,a3,e9,c0));
	outFields->push(HX_("curAddingAsset",2f,57,2f,e9));
	outFields->push(HX_("placeTimer",7e,89,c5,e4));
	outFields->push(HX_("optionsTab",97,cd,05,a7));
	outFields->push(HX_("assetsTab",92,bd,10,c6));
	outFields->push(HX_("scriptTab",0a,dd,c9,2a));
	outFields->push(HX_("savedMousePos",16,0a,05,67));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScriptState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::Script */ ,(int)offsetof(ScriptState_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsFloat,(int)offsetof(ScriptState_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(ScriptState_obj,scrollTimer),HX_("scrollTimer",78,08,13,5a)},
	{::hx::fsObject /*  ::objects::Ribbon */ ,(int)offsetof(ScriptState_obj,ribbon),HX_("ribbon",16,b2,d3,4a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ScriptState_obj,ribbonHoverTimers),HX_("ribbonHoverTimers",74,ed,b3,53)},
	{::hx::fsString,(int)offsetof(ScriptState_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsString,(int)offsetof(ScriptState_obj,assetToAdd),HX_("assetToAdd",56,a3,e9,c0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScriptState_obj,curAddingAsset),HX_("curAddingAsset",2f,57,2f,e9)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(ScriptState_obj,placeTimer),HX_("placeTimer",7e,89,c5,e4)},
	{::hx::fsObject /*  ::objects::Tab */ ,(int)offsetof(ScriptState_obj,optionsTab),HX_("optionsTab",97,cd,05,a7)},
	{::hx::fsObject /*  ::objects::Tab */ ,(int)offsetof(ScriptState_obj,assetsTab),HX_("assetsTab",92,bd,10,c6)},
	{::hx::fsObject /*  ::objects::Tab */ ,(int)offsetof(ScriptState_obj,scriptTab),HX_("scriptTab",0a,dd,c9,2a)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(ScriptState_obj,savedMousePos),HX_("savedMousePos",16,0a,05,67)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ScriptState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ScriptState_obj::scriptName,HX_("scriptName",f6,4d,e0,41)},
	{::hx::fsObject /*  ::states::ScriptState */ ,(void *) &ScriptState_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ScriptState_obj_sMemberFields[] = {
	HX_("script",0b,4e,60,47),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("scrollTimer",78,08,13,5a),
	HX_("ribbon",16,b2,d3,4a),
	HX_("ribbonHoverTimers",74,ed,b3,53),
	HX_("state",11,76,0b,84),
	HX_("assetToAdd",56,a3,e9,c0),
	HX_("curAddingAsset",2f,57,2f,e9),
	HX_("placeTimer",7e,89,c5,e4),
	HX_("optionsTab",97,cd,05,a7),
	HX_("assetsTab",92,bd,10,c6),
	HX_("scriptTab",0a,dd,c9,2a),
	HX_("savedMousePos",16,0a,05,67),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updateAddingLabel",4a,a5,9c,41),
	HX_("updateReading",43,60,50,ce),
	HX_("showRibbon",f3,56,48,b4),
	HX_("hideRibbon",78,58,59,e2),
	HX_("setDebugData",1b,ba,fe,49),
	::String(null()) };

static void ScriptState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptState_obj::scriptName,"scriptName");
	HX_MARK_MEMBER_NAME(ScriptState_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScriptState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptState_obj::scriptName,"scriptName");
	HX_VISIT_MEMBER_NAME(ScriptState_obj::instance,"instance");
};

#endif

::hx::Class ScriptState_obj::__mClass;

static ::String ScriptState_obj_sStaticFields[] = {
	HX_("scriptName",f6,4d,e0,41),
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void ScriptState_obj::__register()
{
	ScriptState_obj _hx_dummy;
	ScriptState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.ScriptState",ba,ce,00,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScriptState_obj::__GetStatic;
	__mClass->mSetStaticField = &ScriptState_obj::__SetStatic;
	__mClass->mMarkFunc = ScriptState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScriptState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScriptState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScriptState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScriptState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScriptState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScriptState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScriptState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7d1873cd8f2988ac_19_boot)
HXDLIN(  19)		scriptName = HX_("",00,00,00,00);
            	}
}

} // end namespace states
