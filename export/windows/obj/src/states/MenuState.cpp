#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_objects_QuickObjects
#include <objects/QuickObjects.h>
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
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0d696801db43af0_17_new,"states.MenuState","new",0xfb0d7598,"states.MenuState.new","states/MenuState.hx",17,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_32_create,"states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",32,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_35_create,"states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",35,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_40_create,"states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",40,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_26_create,"states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",26,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_63_create,"states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",63,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_67_create,"states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",67,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_79_update,"states.MenuState","update",0x7b24f3d1,"states.MenuState.update","states/MenuState.hx",79,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_83_onSelectPDF,"states.MenuState","onSelectPDF",0x49805a6f,"states.MenuState.onSelectPDF","states/MenuState.hx",83,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_112_onSelectPDF,"states.MenuState","onSelectPDF",0x49805a6f,"states.MenuState.onSelectPDF","states/MenuState.hx",112,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_123_onClosePDF,"states.MenuState","onClosePDF",0x27f64121,"states.MenuState.onClosePDF","states/MenuState.hx",123,0x6393c259)
HX_LOCAL_STACK_FRAME(_hx_pos_b0d696801db43af0_132_onErrorPDF,"states.MenuState","onErrorPDF",0x81eb7711,"states.MenuState.onErrorPDF","states/MenuState.hx",132,0x6393c259)
namespace states{

void MenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_b0d696801db43af0_17_new)
HXDLIN(  17)		super::__construct(MaxSize);
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

void *MenuState_obj::_hx_vtable = 0;

Dynamic MenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c795c9f) {
		if (inClassId<=(int)0x62817b24) {
			if (inClassId<=(int)0x15cc349e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x15cc349e;
			} else {
				return inClassId==(int)0x62817b24;
			}
		} else {
			return inClassId==(int)0x7c795c9f;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7fce9990;
	}
}

void MenuState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::MenuState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b0d696801db43af0_32_create)
HXLINE(  33)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  33)			::String _hx_tmp1 = (HX_("opening ",c8,e9,1d,fc) + _gthis->scriptInput->get_text());
HXDLIN(  33)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),33,HX_("states.MenuState",a6,09,15,7e),HX_("create",fc,66,0f,7c)));
HXLINE(  35)			{
HXLINE(  35)				 ::flixel::FlxState nextState =  ::states::ScriptState_obj::__alloc( HX_CTX ,null());
HXDLIN(  35)				 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  35)				 ::Dynamic _hx_tmp2 = ::Reflect_obj::field(::flixel::FlxG_obj::game->_state,HX_("switchTo",8f,f8,d6,0d));
HXDLIN(  35)				if (( (bool)(_hx_tmp2(nextState)) )) {
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxState,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            					void _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_b0d696801db43af0_35_create)
HXLINE(  35)						if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  35)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            						else {
HXLINE(  35)							::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            						}
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE(  35)					::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b0d696801db43af0_40_create)
HXLINE(  41)			::haxe::Log_obj::trace(HX_("select file",20,f2,cb,76),::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),41,HX_("states.MenuState",a6,09,15,7e),HX_("create",fc,66,0f,7c)));
HXLINE(  43)			::states::MenuState_obj::pdf =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE(  45)			::Array< ::Dynamic> filters = ::Array_obj< ::Dynamic>::__new();
HXLINE(  46)			filters->push( ::openfl::net::FileFilter_obj::__alloc( HX_CTX ,HX_("PDF Files",89,73,e7,da),HX_("*.pdf",ae,81,91,4d),null()));
HXLINE(  48)			::states::MenuState_obj::pdf->addEventListener(HX_("select",fc,1a,33,6a),::states::MenuState_obj::onSelectPDF_dyn(),null(),null(),null());
HXLINE(  49)			::states::MenuState_obj::pdf->addEventListener(HX_("cancel",7a,ed,33,b8),::states::MenuState_obj::onClosePDF_dyn(),null(),null(),null());
HXLINE(  50)			::states::MenuState_obj::pdf->addEventListener(HX_("ioError",02,fe,41,76),::states::MenuState_obj::onErrorPDF_dyn(),null(),null(),null());
HXLINE(  51)			::states::MenuState_obj::pdf->browse(filters);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_b0d696801db43af0_26_create)
HXDLIN(  26)		 ::states::MenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  27)		this->super::create();
HXLINE(  29)		this->scriptInput = ::objects::QuickObjects_obj::createTextField(40,100,HX_("Enter Script Name",58,d5,04,38),null(),null(),null());
HXLINE(  31)		this->loadButton = ::objects::QuickObjects_obj::getButton(40,134,HX_("Load Script",c5,c8,22,96), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null(),null(),null());
HXLINE(  37)		this->add(this->loadButton);
HXLINE(  39)		this->openButton = ::objects::QuickObjects_obj::getButton(40,180,HX_("Open PDF",9c,30,78,a5), ::Dynamic(new _hx_Closure_2()),null(),null(),null(),null(),null());
HXLINE(  53)		this->add(this->openButton);
HXLINE(  56)		int i = 0;
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(HX_("assets/scripts/",73,e1,59,c8));
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				::String dir = _g1->__get(_g);
HXDLIN(  57)				_g = (_g + 1);
HXLINE(  59)				::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,HX_("assets/scripts/",73,e1,59,c8))->init(1,dir));
HXLINE(  60)				if (::sys::FileSystem_obj::isDirectory(path)) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4,::String,dir) HXARGC(0)
            					void _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_b0d696801db43af0_63_create)
HXLINE(  64)						::haxe::Log_obj::trace((HX_("opening ",c8,e9,1d,fc) + dir),::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),64,HX_("states.MenuState",a6,09,15,7e),HX_("create",fc,66,0f,7c)));
HXLINE(  66)						::states::ScriptState_obj::scriptName = dir;
HXLINE(  67)						{
HXLINE(  67)							 ::flixel::FlxState nextState =  ::states::ScriptState_obj::__alloc( HX_CTX ,null());
HXDLIN(  67)							 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  67)							 ::Dynamic button = ::Reflect_obj::field(::flixel::FlxG_obj::game->_state,HX_("switchTo",8f,f8,d6,0d));
HXDLIN(  67)							if (( (bool)(button(nextState)) )) {
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::flixel::FlxState,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            								void _hx_run(){
            									HX_GC_STACKFRAME(&_hx_pos_b0d696801db43af0_67_create)
HXLINE(  67)									if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  67)										::flixel::FlxG_obj::game->_requestedState = nextState;
            									}
            									else {
HXLINE(  67)										::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            									}
            								}
            								HX_END_LOCAL_FUNC0((void))

HXLINE(  67)								::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_3(nextState,stateOnCall)));
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE(  62)					 ::flixel::addons::ui::FlxButtonPlus button = ::objects::QuickObjects_obj::getButton(800,(80 + (i * 40)),dir, ::Dynamic(new _hx_Closure_4(dir)),null(),null(),null(),null(),null());
HXLINE(  69)					this->add(button);
HXLINE(  71)					i = (i + 1);
            				}
            			}
            		}
            	}


void MenuState_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_b0d696801db43af0_79_update)
HXDLIN(  79)		this->super::update(dt);
            	}


 ::openfl::net::FileReference MenuState_obj::pdf;

void MenuState_obj::onSelectPDF( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_b0d696801db43af0_83_onSelectPDF)
HXLINE(  84)		::states::MenuState_obj::pdf->removeEventListener(HX_("select",fc,1a,33,6a),::states::MenuState_obj::onSelectPDF_dyn(),null());
HXLINE(  85)		::states::MenuState_obj::pdf->removeEventListener(HX_("cancel",7a,ed,33,b8),::states::MenuState_obj::onClosePDF_dyn(),null());
HXLINE(  86)		::states::MenuState_obj::pdf->removeEventListener(HX_("ioError",02,fe,41,76),::states::MenuState_obj::onErrorPDF_dyn(),null());
HXLINE(  88)		::haxe::Log_obj::trace(HX_("success!",fe,e4,12,8c),::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),88,HX_("states.MenuState",a6,09,15,7e),HX_("onSelectPDF",37,bd,4a,b0)));
HXLINE(  89)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  89)		::String _hx_tmp1 = (HX_("found pdf file ",18,64,b8,45) + ::states::MenuState_obj::pdf->get_name());
HXDLIN(  89)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),89,HX_("states.MenuState",a6,09,15,7e),HX_("onSelectPDF",37,bd,4a,b0)));
HXLINE(  92)		::String path = null();
HXLINE(  94)		if (::hx::IsNotNull( ::states::MenuState_obj::pdf->_hx___path )) {
HXLINE(  95)			path = ::states::MenuState_obj::pdf->_hx___path;
            		}
HXLINE(  97)		if (::hx::IsNotNull( path )) {
HXLINE(  99)			::haxe::Log_obj::trace(((HX_("saving path \"",8d,da,99,4c) + path) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),99,HX_("states.MenuState",a6,09,15,7e),HX_("onSelectPDF",37,bd,4a,b0)));
HXLINE( 101)			::Array< ::String > split = path.split(HX_("\\",5c,00,00,00));
HXLINE( 102)			::String name = split->__get((split->length - 1)).split(HX_(".",2e,00,00,00))->__get(0);
HXLINE( 103)			::haxe::Log_obj::trace(name,::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),103,HX_("states.MenuState",a6,09,15,7e),HX_("onSelectPDF",37,bd,4a,b0)));
HXLINE( 105)			if (!(::sys::FileSystem_obj::exists(((HX_("assets/scripts/",73,e1,59,c8) + name) + HX_("/",2f,00,00,00))))) {
HXLINE( 107)				::sys::FileSystem_obj::createDirectory(((HX_("assets/scripts/",73,e1,59,c8) + name) + HX_("/pages/",da,7d,a9,88)));
HXLINE( 109)				::Sys_obj::command(((((HX_("py assets/converter/main.py \"",9c,b1,20,e8) + path) + HX_("\" \"",a4,e8,19,00)) + name) + HX_("\"",22,00,00,00)),null());
HXLINE( 111)				::states::ScriptState_obj::scriptName = name;
HXLINE( 112)				{
HXLINE( 112)					 ::flixel::FlxState nextState =  ::states::ScriptState_obj::__alloc( HX_CTX ,null());
HXDLIN( 112)					 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 112)					 ::Dynamic _hx_tmp = ::Reflect_obj::field(::flixel::FlxG_obj::game->_state,HX_("switchTo",8f,f8,d6,0d));
HXDLIN( 112)					if (( (bool)(_hx_tmp(nextState)) )) {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxState,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            						void _hx_run(){
            							HX_GC_STACKFRAME(&_hx_pos_b0d696801db43af0_112_onSelectPDF)
HXLINE( 112)							if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE( 112)								::flixel::FlxG_obj::game->_requestedState = nextState;
            							}
            							else {
HXLINE( 112)								::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            							}
            						}
            						HX_END_LOCAL_FUNC0((void))

HXLINE( 112)						::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            					}
            				}
            			}
            			else {
HXLINE( 115)				::haxe::Log_obj::trace(HX_("this script exists already!",ba,09,f1,e1),::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),115,HX_("states.MenuState",a6,09,15,7e),HX_("onSelectPDF",37,bd,4a,b0)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MenuState_obj,onSelectPDF,(void))

void MenuState_obj::onClosePDF( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_b0d696801db43af0_123_onClosePDF)
HXLINE( 124)		::states::MenuState_obj::pdf->removeEventListener(HX_("select",fc,1a,33,6a),::states::MenuState_obj::onSelectPDF_dyn(),null());
HXLINE( 125)		::states::MenuState_obj::pdf->removeEventListener(HX_("cancel",7a,ed,33,b8),::states::MenuState_obj::onClosePDF_dyn(),null());
HXLINE( 126)		::states::MenuState_obj::pdf->removeEventListener(HX_("ioError",02,fe,41,76),::states::MenuState_obj::onErrorPDF_dyn(),null());
HXLINE( 128)		::haxe::Log_obj::trace(HX_("closed file browser",f8,54,74,c8),::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),128,HX_("states.MenuState",a6,09,15,7e),HX_("onClosePDF",59,4f,f8,62)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MenuState_obj,onClosePDF,(void))

void MenuState_obj::onErrorPDF( ::openfl::events::IOErrorEvent e){
            	HX_STACKFRAME(&_hx_pos_b0d696801db43af0_132_onErrorPDF)
HXLINE( 133)		::states::MenuState_obj::pdf->removeEventListener(HX_("select",fc,1a,33,6a),::states::MenuState_obj::onSelectPDF_dyn(),null());
HXLINE( 134)		::states::MenuState_obj::pdf->removeEventListener(HX_("cancel",7a,ed,33,b8),::states::MenuState_obj::onClosePDF_dyn(),null());
HXLINE( 135)		::states::MenuState_obj::pdf->removeEventListener(HX_("ioError",02,fe,41,76),::states::MenuState_obj::onErrorPDF_dyn(),null());
HXLINE( 137)		::haxe::Log_obj::trace(HX_("IO Error",ee,f7,44,f6),::hx::SourceInfo(HX_("source/states/MenuState.hx",e5,5b,d8,54),137,HX_("states.MenuState",a6,09,15,7e),HX_("onErrorPDF",49,85,ed,bc)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MenuState_obj,onErrorPDF,(void))


::hx::ObjectPtr< MenuState_obj > MenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MenuState_obj > __this = new MenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MenuState_obj > MenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MenuState_obj *__this = (MenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuState_obj), true, "states.MenuState"));
	*(void **)__this = MenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(scriptInput,"scriptInput");
	HX_MARK_MEMBER_NAME(loadButton,"loadButton");
	HX_MARK_MEMBER_NAME(openButton,"openButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scriptInput,"scriptInput");
	HX_VISIT_MEMBER_NAME(loadButton,"loadButton");
	HX_VISIT_MEMBER_NAME(openButton,"openButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadButton") ) { return ::hx::Val( loadButton ); }
		if (HX_FIELD_EQ(inName,"openButton") ) { return ::hx::Val( openButton ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scriptInput") ) { return ::hx::Val( scriptInput ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pdf") ) { outValue = ( pdf ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onClosePDF") ) { outValue = onClosePDF_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onErrorPDF") ) { outValue = onErrorPDF_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onSelectPDF") ) { outValue = onSelectPDF_dyn(); return true; }
	}
	return false;
}

::hx::Val MenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"loadButton") ) { loadButton=inValue.Cast<  ::flixel::addons::ui::FlxButtonPlus >(); return inValue; }
		if (HX_FIELD_EQ(inName,"openButton") ) { openButton=inValue.Cast<  ::flixel::addons::ui::FlxButtonPlus >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scriptInput") ) { scriptInput=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pdf") ) { pdf=ioValue.Cast<  ::openfl::net::FileReference >(); return true; }
	}
	return false;
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scriptInput",ff,1d,fd,89));
	outFields->push(HX_("loadButton",b8,90,0b,8f));
	outFields->push(HX_("openButton",5c,cd,7c,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(MenuState_obj,scriptInput),HX_("scriptInput",ff,1d,fd,89)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxButtonPlus */ ,(int)offsetof(MenuState_obj,loadButton),HX_("loadButton",b8,90,0b,8f)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxButtonPlus */ ,(int)offsetof(MenuState_obj,openButton),HX_("openButton",5c,cd,7c,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::net::FileReference */ ,(void *) &MenuState_obj::pdf,HX_("pdf",f2,53,55,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_("scriptInput",ff,1d,fd,89),
	HX_("loadButton",b8,90,0b,8f),
	HX_("openButton",5c,cd,7c,27),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void MenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::pdf,"pdf");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::pdf,"pdf");
};

#endif

::hx::Class MenuState_obj::__mClass;

static ::String MenuState_obj_sStaticFields[] = {
	HX_("pdf",f2,53,55,00),
	HX_("onSelectPDF",37,bd,4a,b0),
	HX_("onClosePDF",59,4f,f8,62),
	HX_("onErrorPDF",49,85,ed,bc),
	::String(null())
};

void MenuState_obj::__register()
{
	MenuState_obj _hx_dummy;
	MenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.MenuState",a6,09,15,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
