#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionHandler
#include <flixel/system/debug/completion/CompletionHandler.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#include <flixel/system/debug/console/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c69022abc8c5c26b_29_new,"flixel.system.debug.console.Console","new",0x900a6c8a,"flixel.system.debug.console.Console.new","flixel/system/debug/console/Console.hx",29,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_95_createInputTextField,"flixel.system.debug.console.Console","createInputTextField",0x91c24015,"flixel.system.debug.console.Console.createInputTextField","flixel/system/debug/console/Console.hx",95,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_120_registerEventListeners,"flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",120,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_129_registerEventListeners,"flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",129,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_133_registerEventListeners,"flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",133,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_109_registerEventListeners,"flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",109,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_141_update,"flixel.system.debug.console.Console","update",0x661b601f,"flixel.system.debug.console.Console.update","flixel/system/debug/console/Console.hx",141,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_158_onFocus,"flixel.system.debug.console.Console","onFocus",0xeecff763,"flixel.system.debug.console.Console.onFocus","flixel/system/debug/console/Console.hx",158,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_176_onFocusLost,"flixel.system.debug.console.Console","onFocusLost",0x2ed3bae7,"flixel.system.debug.console.Console.onFocusLost","flixel/system/debug/console/Console.hx",176,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_197_onKeyDown,"flixel.system.debug.console.Console","onKeyDown",0x970b39ec,"flixel.system.debug.console.Console.onKeyDown","flixel/system/debug/console/Console.hx",197,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_224_setText,"flixel.system.debug.console.Console","setText",0x66870699,"flixel.system.debug.console.Console.setText","flixel/system/debug/console/Console.hx",224,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_232_processCommand,"flixel.system.debug.console.Console","processCommand",0x640a92b2,"flixel.system.debug.console.Console.processCommand","flixel/system/debug/console/Console.hx",232,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_264_reposition,"flixel.system.debug.console.Console","reposition",0x383e0c72,"flixel.system.debug.console.Console.reposition","flixel/system/debug/console/Console.hx",264,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_279_registerFunction,"flixel.system.debug.console.Console","registerFunction",0xf8dd3a31,"flixel.system.debug.console.Console.registerFunction","flixel/system/debug/console/Console.hx",279,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_296_registerObject,"flixel.system.debug.console.Console","registerObject",0x0bbfe598,"flixel.system.debug.console.Console.registerObject","flixel/system/debug/console/Console.hx",296,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_310_removeByAlias,"flixel.system.debug.console.Console","removeByAlias",0x16ee70ff,"flixel.system.debug.console.Console.removeByAlias","flixel/system/debug/console/Console.hx",310,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_328_removeObject,"flixel.system.debug.console.Console","removeObject",0x3b3aa8b9,"flixel.system.debug.console.Console.removeObject","flixel/system/debug/console/Console.hx",328,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_351_removeFunction,"flixel.system.debug.console.Console","removeFunction",0x0ee7c792,"flixel.system.debug.console.Console.removeFunction","flixel/system/debug/console/Console.hx",351,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_371_registerClass,"flixel.system.debug.console.Console","registerClass",0x7ad06f7f,"flixel.system.debug.console.Console.registerClass","flixel/system/debug/console/Console.hx",371,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_382_removeClass,"flixel.system.debug.console.Console","removeClass",0x33da2b7e,"flixel.system.debug.console.Console.removeClass","flixel/system/debug/console/Console.hx",382,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_393_registerEnum,"flixel.system.debug.console.Console","registerEnum",0x75d3399a,"flixel.system.debug.console.Console.registerEnum","flixel/system/debug/console/Console.hx",393,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_404_removeEnum,"flixel.system.debug.console.Console","removeEnum",0x5311427b,"flixel.system.debug.console.Console.removeEnum","flixel/system/debug/console/Console.hx",404,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_408_destroy,"flixel.system.debug.console.Console","destroy",0x788f2624,"flixel.system.debug.console.Console.destroy","flixel/system/debug/console/Console.hx",408,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_434_updateSize,"flixel.system.debug.console.Console","updateSize",0x97e42880,"flixel.system.debug.console.Console.updateSize","flixel/system/debug/console/Console.hx",434,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_34_boot,"flixel.system.debug.console.Console","boot",0x712d8cc8,"flixel.system.debug.console.Console.boot","flixel/system/debug/console/Console.hx",34,0x367943c8)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void Console_obj::__construct( ::flixel::_hx_system::debug::completion::CompletionList completionList){
            	HX_GC_STACKFRAME(&_hx_pos_c69022abc8c5c26b_29_new)
HXLINE(  63)		this->stageMouseDown = false;
HXLINE(  62)		this->inputMouseDown = false;
HXLINE(  54)		this->objectStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  49)		this->registeredHelp =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  44)		this->registeredFunctions =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  39)		this->registeredObjects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  75)		super::__construct(HX_("Console",37,13,27,e6), ::flixel::_hx_system::debug::GraphicConsole_obj::__alloc( HX_CTX ,0,0,null(),null()),0,0,false,null(),null(),null());
HXLINE(  76)		this->completionList = completionList;
HXLINE(  77)		completionList->setY((this->get_y() + 15));
HXLINE(  80)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::init();
HXLINE(  83)		this->history =  ::flixel::_hx_system::debug::console::ConsoleHistory_obj::__alloc( HX_CTX );
HXLINE(  84)		this->createInputTextField();
HXLINE(  85)		 ::flixel::_hx_system::debug::completion::CompletionHandler_obj::__alloc( HX_CTX ,completionList,this->input);
HXLINE(  86)		this->registerEventListeners();
HXLINE(  90)		 ::flixel::_hx_system::debug::console::ConsoleCommands_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Console_obj::__CreateEmpty() { return new Console_obj; }

void *Console_obj::_hx_vtable = 0;

Dynamic Console_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Console_obj > _hx_result = new Console_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Console_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1794d644 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x39123ef8 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Console_obj::createInputTextField(){
            	HX_GC_STACKFRAME(&_hx_pos_c69022abc8c5c26b_95_createInputTextField)
HXLINE(  97)		this->input =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  98)		this->input->set_embedFonts(true);
HXLINE(  99)		 ::openfl::text::TextField _hx_tmp = this->input;
HXDLIN(  99)		_hx_tmp->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER,12,16777215,false,false,false,null(),null(),null(),null(),null(),null(),null()));
HXLINE( 100)		this->input->set_text(HX_("(Click here / press [Tab] to enter command. Type 'help' for help.)",f9,4e,c0,26));
HXLINE( 101)		this->input->set_width(( (Float)((this->_width - 4)) ));
HXLINE( 102)		this->input->set_height(( (Float)((this->_height - 15)) ));
HXLINE( 103)		this->input->set_x(( (Float)(2) ));
HXLINE( 104)		this->input->set_y(( (Float)(15) ));
HXLINE( 105)		this->addChild(this->input);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,createInputTextField,(void))

void Console_obj::registerEventListeners(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::_hx_system::debug::console::Console,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::KeyboardEvent e){
            			HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_120_registerEventListeners)
HXLINE( 120)			bool _hx_tmp;
HXDLIN( 120)			bool _hx_tmp1;
HXDLIN( 120)			if (::flixel::FlxG_obj::debugger->visible) {
HXLINE( 120)				_hx_tmp1 = ::flixel::FlxG_obj::game->debugger->console->get_visible();
            			}
            			else {
HXLINE( 120)				_hx_tmp1 = false;
            			}
HXDLIN( 120)			if (_hx_tmp1) {
HXLINE( 120)				_hx_tmp = (e->keyCode == 9);
            			}
            			else {
HXLINE( 120)				_hx_tmp = false;
            			}
HXDLIN( 120)			if (_hx_tmp) {
HXLINE( 121)				::openfl::Lib_obj::get_current()->stage->set_focus(_gthis->input);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::flixel::_hx_system::debug::console::Console,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent _){
            			HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_129_registerEventListeners)
HXLINE( 129)			_gthis->inputMouseDown = true;
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::flixel::_hx_system::debug::console::Console,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent _){
            			HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_133_registerEventListeners)
HXLINE( 133)			_gthis->stageMouseDown = true;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_109_registerEventListeners)
HXDLIN( 109)		 ::flixel::_hx_system::debug::console::Console _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 111)		this->input->set_type(1);
HXLINE( 112)		this->input->addEventListener(HX_("focusIn",dd,45,83,41),this->onFocus_dyn(),null(),null(),null());
HXLINE( 113)		this->input->addEventListener(HX_("focusOut",96,6f,5e,11),this->onFocusLost_dyn(),null(),null(),null());
HXLINE( 114)		this->input->addEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null(),null(),null());
HXLINE( 118)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("keyDown",a1,69,47,9c), ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE( 127)		this->input->addEventListener(HX_("mouseDown",27,b1,c2,ee), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
HXLINE( 131)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("mouseDown",27,b1,c2,ee), ::Dynamic(new _hx_Closure_2(_gthis)),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,registerEventListeners,(void))

void Console_obj::update(){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_141_update)
HXLINE( 142)		this->super::update();
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		bool _hx_tmp1;
HXDLIN( 144)		 ::openfl::display::InteractiveObject _hx_tmp2 = ::openfl::Lib_obj::get_current()->stage->get_focus();
HXDLIN( 144)		if (::hx::IsInstanceEq( _hx_tmp2,this->input )) {
HXLINE( 144)			_hx_tmp1 = this->stageMouseDown;
            		}
            		else {
HXLINE( 144)			_hx_tmp1 = false;
            		}
HXDLIN( 144)		if (_hx_tmp1) {
HXLINE( 144)			_hx_tmp = !(this->inputMouseDown);
            		}
            		else {
HXLINE( 144)			_hx_tmp = false;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 146)			::openfl::Lib_obj::get_current()->stage->set_focus(null());
HXLINE( 148)			::flixel::FlxG_obj::game->onFocus(null());
            		}
HXLINE( 151)		this->stageMouseDown = false;
HXLINE( 152)		this->inputMouseDown = false;
            	}


void Console_obj::onFocus( ::openfl::events::FocusEvent _){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_158_onFocus)
HXLINE( 161)		if (::flixel::FlxG_obj::console->autoPause) {
HXLINE( 162)			::flixel::FlxG_obj::vcr->pause();
            		}
HXLINE( 166)		::flixel::FlxG_obj::keys->enabled = false;
HXLINE( 169)		if ((this->input->get_text() == HX_("(Click here / press [Tab] to enter command. Type 'help' for help.)",f9,4e,c0,26))) {
HXLINE( 170)			this->input->set_text(HX_("",00,00,00,00));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocus,(void))

void Console_obj::onFocusLost( ::openfl::events::FocusEvent _){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_176_onFocusLost)
HXLINE( 179)		bool _hx_tmp;
HXDLIN( 179)		if (::flixel::FlxG_obj::console->autoPause) {
HXLINE( 179)			_hx_tmp = !(::flixel::FlxG_obj::game->debugger->vcr->manualPause);
            		}
            		else {
HXLINE( 179)			_hx_tmp = false;
            		}
HXDLIN( 179)		if (_hx_tmp) {
HXLINE( 180)			::flixel::FlxG_obj::vcr->resume();
            		}
HXLINE( 184)		::flixel::FlxG_obj::keys->enabled = true;
HXLINE( 187)		if ((this->input->get_text() == HX_("",00,00,00,00))) {
HXLINE( 188)			this->input->set_text(HX_("(Click here / press [Tab] to enter command. Type 'help' for help.)",f9,4e,c0,26));
            		}
HXLINE( 191)		this->completionList->close();
HXLINE( 192)		::flixel::FlxG_obj::game->debugger->onMouseFocusLost();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocusLost,(void))

void Console_obj::onKeyDown( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_197_onKeyDown)
HXLINE( 198)		if (this->completionList->get_visible()) {
HXLINE( 199)			return;
            		}
HXLINE( 201)		switch((int)(e->keyCode)){
            			case (int)13: {
HXLINE( 204)				if ((this->input->get_text() != HX_("",00,00,00,00))) {
HXLINE( 205)					this->processCommand();
            				}
            			}
            			break;
            			case (int)27: {
HXLINE( 208)				::openfl::Lib_obj::get_current()->stage->set_focus(null());
            			}
            			break;
            			case (int)38: {
HXLINE( 214)				if (!(this->history->get_isEmpty())) {
HXLINE( 215)					this->setText(this->history->getPreviousCommand());
            				}
            			}
            			break;
            			case (int)40: {
HXLINE( 218)				if (!(this->history->get_isEmpty())) {
HXLINE( 219)					this->setText(this->history->getNextCommand());
            				}
            			}
            			break;
            			case (int)46: {
HXLINE( 211)				this->input->set_text(HX_("",00,00,00,00));
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onKeyDown,(void))

void Console_obj::setText(::String text){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_224_setText)
HXLINE( 225)		this->input->set_text(text);
HXLINE( 227)		this->input->setSelection(text.length,text.length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,setText,(void))

void Console_obj::processCommand(){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_232_processCommand)
HXDLIN( 232)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 234)			::String text = ::StringTools_obj::trim(this->input->get_text());
HXLINE( 238)			if (::hx::IsNotNull( this->registeredFunctions->get(text) )) {
HXLINE( 239)				text = (text + HX_("()",01,23,00,00));
            			}
HXLINE( 242)			 ::Dynamic output = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::runCommand(text);
HXLINE( 243)			if (::hx::IsNotNull( output )) {
HXLINE( 244)				::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,output),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            			}
HXLINE( 246)			 ::flixel::_hx_system::debug::console::ConsoleHistory _hx_tmp = this->history;
HXDLIN( 246)			_hx_tmp->addCommand(this->input->get_text());
HXLINE( 250)			bool _hx_tmp1;
HXDLIN( 250)			if (::flixel::FlxG_obj::vcr->paused) {
HXLINE( 250)				_hx_tmp1 = ::flixel::FlxG_obj::console->stepAfterCommand;
            			}
            			else {
HXLINE( 250)				_hx_tmp1 = false;
            			}
HXDLIN( 250)			if (_hx_tmp1) {
HXLINE( 251)				::flixel::FlxG_obj::game->debugger->vcr->onStep();
            			}
HXLINE( 254)			this->input->set_text(HX_("",00,00,00,00));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 256)				{
HXLINE( 256)					null();
            				}
HXDLIN( 256)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 259)				{
HXLINE( 259)					 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 259)					 ::Dynamic data = ((HX_("Console: Invalid syntax: '",78,2b,94,2e) + ::Std_obj::string(e)) + HX_("'",27,00,00,00));
HXDLIN( 259)					_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,processCommand,(void))

void Console_obj::reposition(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_264_reposition)
HXLINE( 265)		this->super::reposition(x,y);
HXLINE( 266)		 ::flixel::_hx_system::debug::completion::CompletionList _hx_tmp = this->completionList;
HXDLIN( 266)		_hx_tmp->setY((this->get_y() + 15));
HXLINE( 267)		this->completionList->close();
            	}


void Console_obj::registerFunction(::String alias, ::Dynamic func,::String helpText){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_279_registerFunction)
HXLINE( 280)		this->registeredFunctions->set(alias,func);
HXLINE( 282)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::registerFunction(alias,func);
HXLINE( 285)		if (::hx::IsNotNull( helpText )) {
HXLINE( 286)			this->registeredHelp->set(alias,helpText);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,registerFunction,(void))

void Console_obj::registerObject(::String alias, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_296_registerObject)
HXLINE( 297)		this->registeredObjects->set(alias,object);
HXLINE( 299)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::registerObject(alias,object);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerObject,(void))

void Console_obj::removeByAlias(::String alias){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_310_removeByAlias)
HXLINE( 311)		this->registeredObjects->remove(alias);
HXLINE( 312)		this->registeredFunctions->remove(alias);
HXLINE( 314)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::removeByAlias(alias);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,removeByAlias,(void))

void Console_obj::removeObject( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_328_removeObject)
HXDLIN( 328)		 ::Dynamic alias = this->registeredObjects->keys();
HXDLIN( 328)		while(( (bool)(alias->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 328)			::String alias1 = ( (::String)(alias->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 330)			if (::hx::IsEq( this->registeredObjects->get(alias1),object )) {
HXLINE( 332)				this->registeredObjects->remove(alias1);
HXLINE( 334)				::flixel::_hx_system::debug::console::ConsoleUtil_obj::removeByAlias(alias1);
HXLINE( 336)				goto _hx_goto_16;
            			}
            		}
            		_hx_goto_16:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,removeObject,(void))

void Console_obj::removeFunction( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_351_removeFunction)
HXDLIN( 351)		 ::Dynamic alias = this->registeredFunctions->keys();
HXDLIN( 351)		while(( (bool)(alias->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 351)			::String alias1 = ( (::String)(alias->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 353)			if (::hx::IsEq( this->registeredFunctions->get(alias1),func )) {
HXLINE( 355)				this->registeredFunctions->remove(alias1);
HXLINE( 357)				::flixel::_hx_system::debug::console::ConsoleUtil_obj::removeByAlias(alias1);
HXLINE( 359)				goto _hx_goto_18;
            			}
            		}
            		_hx_goto_18:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,removeFunction,(void))

void Console_obj::registerClass(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_371_registerClass)
HXDLIN( 371)		this->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(c,true),c);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,registerClass,(void))

void Console_obj::removeClass(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_382_removeClass)
HXDLIN( 382)		this->removeByAlias(::flixel::util::FlxStringUtil_obj::getClassName(c,true));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,removeClass,(void))

void Console_obj::registerEnum(::hx::Class e){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_393_registerEnum)
HXDLIN( 393)		this->registerObject(::flixel::util::FlxStringUtil_obj::getEnumName(e,true),e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,registerEnum,(void))

void Console_obj::removeEnum(::hx::Class e){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_404_removeEnum)
HXDLIN( 404)		this->removeByAlias(::flixel::util::FlxStringUtil_obj::getEnumName(e,true));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,removeEnum,(void))

void Console_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_408_destroy)
HXLINE( 409)		this->super::destroy();
HXLINE( 412)		this->input->removeEventListener(HX_("focusIn",dd,45,83,41),this->onFocus_dyn(),null());
HXLINE( 413)		this->input->removeEventListener(HX_("focusOut",96,6f,5e,11),this->onFocusLost_dyn(),null());
HXLINE( 414)		this->input->removeEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null());
HXLINE( 417)		if (::hx::IsNotNull( this->input )) {
HXLINE( 419)			this->removeChild(this->input);
HXLINE( 420)			this->input = null();
            		}
HXLINE( 423)		this->registeredObjects = null();
HXLINE( 424)		this->registeredFunctions = null();
HXLINE( 425)		this->registeredHelp = null();
HXLINE( 427)		this->objectStack = null();
            	}


void Console_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_434_updateSize)
HXLINE( 435)		this->super::updateSize();
HXLINE( 437)		this->input->set_width(( (Float)((this->_width - 4)) ));
HXLINE( 438)		this->input->set_height(( (Float)((this->_height - 15)) ));
            	}


::String Console_obj::DEFAULT_TEXT;


::hx::ObjectPtr< Console_obj > Console_obj::__new( ::flixel::_hx_system::debug::completion::CompletionList completionList) {
	::hx::ObjectPtr< Console_obj > __this = new Console_obj();
	__this->__construct(completionList);
	return __this;
}

::hx::ObjectPtr< Console_obj > Console_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::completion::CompletionList completionList) {
	Console_obj *__this = (Console_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Console_obj), true, "flixel.system.debug.console.Console"));
	*(void **)__this = Console_obj::_hx_vtable;
	__this->__construct(completionList);
	return __this;
}

Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_MARK_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_MARK_MEMBER_NAME(registeredHelp,"registeredHelp");
	HX_MARK_MEMBER_NAME(objectStack,"objectStack");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(inputMouseDown,"inputMouseDown");
	HX_MARK_MEMBER_NAME(stageMouseDown,"stageMouseDown");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	 ::flixel::_hx_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_VISIT_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_VISIT_MEMBER_NAME(registeredHelp,"registeredHelp");
	HX_VISIT_MEMBER_NAME(objectStack,"objectStack");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(inputMouseDown,"inputMouseDown");
	HX_VISIT_MEMBER_NAME(stageMouseDown,"stageMouseDown");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	 ::flixel::_hx_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Console_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return ::hx::Val( history ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"setText") ) { return ::hx::Val( setText_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"reposition") ) { return ::hx::Val( reposition_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeEnum") ) { return ::hx::Val( removeEnum_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { return ::hx::Val( objectStack ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeClass") ) { return ::hx::Val( removeClass_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeObject") ) { return ::hx::Val( removeObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerEnum") ) { return ::hx::Val( registerEnum_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeByAlias") ) { return ::hx::Val( removeByAlias_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerClass") ) { return ::hx::Val( registerClass_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registeredHelp") ) { return ::hx::Val( registeredHelp ); }
		if (HX_FIELD_EQ(inName,"inputMouseDown") ) { return ::hx::Val( inputMouseDown ); }
		if (HX_FIELD_EQ(inName,"stageMouseDown") ) { return ::hx::Val( stageMouseDown ); }
		if (HX_FIELD_EQ(inName,"completionList") ) { return ::hx::Val( completionList ); }
		if (HX_FIELD_EQ(inName,"processCommand") ) { return ::hx::Val( processCommand_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerObject") ) { return ::hx::Val( registerObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeFunction") ) { return ::hx::Val( removeFunction_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return ::hx::Val( registerFunction_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { return ::hx::Val( registeredObjects ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { return ::hx::Val( registeredFunctions ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createInputTextField") ) { return ::hx::Val( createInputTextField_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerEventListeners") ) { return ::hx::Val( registerEventListeners_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Console_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast<  ::flixel::_hx_system::debug::console::ConsoleHistory >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { objectStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registeredHelp") ) { registeredHelp=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputMouseDown") ) { inputMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageMouseDown") ) { stageMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast<  ::flixel::_hx_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { registeredObjects=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { registeredFunctions=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("registeredObjects",72,87,9b,2a));
	outFields->push(HX_("registeredFunctions",79,8c,8a,1e));
	outFields->push(HX_("registeredHelp",63,e5,ae,b7));
	outFields->push(HX_("objectStack",09,84,3a,f3));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("inputMouseDown",bd,fb,87,2d));
	outFields->push(HX_("stageMouseDown",89,de,11,40));
	outFields->push(HX_("history",54,35,47,64));
	outFields->push(HX_("completionList",9a,d1,5d,23));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Console_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Console_obj,registeredObjects),HX_("registeredObjects",72,87,9b,2a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Console_obj,registeredFunctions),HX_("registeredFunctions",79,8c,8a,1e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Console_obj,registeredHelp),HX_("registeredHelp",63,e5,ae,b7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Console_obj,objectStack),HX_("objectStack",09,84,3a,f3)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Console_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsBool,(int)offsetof(Console_obj,inputMouseDown),HX_("inputMouseDown",bd,fb,87,2d)},
	{::hx::fsBool,(int)offsetof(Console_obj,stageMouseDown),HX_("stageMouseDown",89,de,11,40)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::console::ConsoleHistory */ ,(int)offsetof(Console_obj,history),HX_("history",54,35,47,64)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::completion::CompletionList */ ,(int)offsetof(Console_obj,completionList),HX_("completionList",9a,d1,5d,23)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Console_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Console_obj::DEFAULT_TEXT,HX_("DEFAULT_TEXT",4b,9c,59,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Console_obj_sMemberFields[] = {
	HX_("registeredObjects",72,87,9b,2a),
	HX_("registeredFunctions",79,8c,8a,1e),
	HX_("registeredHelp",63,e5,ae,b7),
	HX_("objectStack",09,84,3a,f3),
	HX_("input",0a,c4,1d,be),
	HX_("inputMouseDown",bd,fb,87,2d),
	HX_("stageMouseDown",89,de,11,40),
	HX_("history",54,35,47,64),
	HX_("completionList",9a,d1,5d,23),
	HX_("createInputTextField",7f,2b,43,44),
	HX_("registerEventListeners",c8,2b,6e,76),
	HX_("update",09,86,05,87),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onKeyDown",42,22,f2,73),
	HX_("setText",6f,0d,7e,12),
	HX_("processCommand",9c,b2,cb,33),
	HX_("reposition",5c,6f,62,a5),
	HX_("registerFunction",9b,a8,15,13),
	HX_("registerObject",82,05,81,db),
	HX_("removeByAlias",55,3c,df,d9),
	HX_("removeObject",23,1a,6d,84),
	HX_("removeFunction",7c,e7,a8,de),
	HX_("registerClass",d5,3a,c1,3d),
	HX_("removeClass",54,55,8c,46),
	HX_("registerEnum",04,ab,05,bf),
	HX_("removeEnum",65,a5,35,c0),
	HX_("destroy",fa,2c,86,24),
	HX_("updateSize",6a,8b,08,05),
	::String(null()) };

static void Console_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::DEFAULT_TEXT,"DEFAULT_TEXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Console_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::DEFAULT_TEXT,"DEFAULT_TEXT");
};

#endif

::hx::Class Console_obj::__mClass;

static ::String Console_obj_sStaticFields[] = {
	HX_("DEFAULT_TEXT",4b,9c,59,2d),
	::String(null())
};

void Console_obj::__register()
{
	Console_obj _hx_dummy;
	Console_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.console.Console",98,1f,eb,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Console_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Console_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Console_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Console_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Console_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Console_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Console_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Console_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_34_boot)
HXDLIN(  34)		DEFAULT_TEXT = HX_("(Click here / press [Tab] to enter command. Type 'help' for help.)",f9,4e,c0,26);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
