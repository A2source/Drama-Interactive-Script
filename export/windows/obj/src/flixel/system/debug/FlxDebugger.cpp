#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicInteractive
#include <flixel/system/debug/GraphicInteractive.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Tooltip
#include <flixel/system/debug/Tooltip.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicDrawDebug
#include <flixel/system/debug/_FlxDebugger/GraphicDrawDebug.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel
#include <flixel/system/debug/_FlxDebugger/GraphicFlixel.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_BitmapLog
#include <flixel/system/debug/log/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_Log
#include <flixel/system/debug/log/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_Stats
#include <flixel/system/debug/stats/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_173_new,"flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",173,0xd9fc0a74)
HX_DEFINE_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_64_new,"flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",64,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_194_destroy,"flixel.system.debug.FlxDebugger","destroy",0x0aa38497,"flixel.system.debug.FlxDebugger.destroy","flixel/system/debug/FlxDebugger.hx",194,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_240_update,"flixel.system.debug.FlxDebugger","update",0x10a9d10c,"flixel.system.debug.FlxDebugger.update","flixel/system/debug/FlxDebugger.hx",240,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_250_setLayout,"flixel.system.debug.FlxDebugger","setLayout",0x62385cc9,"flixel.system.debug.FlxDebugger.setLayout","flixel/system/debug/FlxDebugger.hx",250,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_261_resetLayout,"flixel.system.debug.FlxDebugger","resetLayout",0xf3cb1bf6,"flixel.system.debug.FlxDebugger.resetLayout","flixel/system/debug/FlxDebugger.hx",261,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_327_onResize,"flixel.system.debug.FlxDebugger","onResize",0x5bb7a236,"flixel.system.debug.FlxDebugger.onResize","flixel/system/debug/FlxDebugger.hx",327,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_341_updateBounds,"flixel.system.debug.FlxDebugger","updateBounds",0x09101ca1,"flixel.system.debug.FlxDebugger.updateBounds","flixel/system/debug/FlxDebugger.hx",341,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_353_hAlignButtons,"flixel.system.debug.FlxDebugger","hAlignButtons",0x74a569e1,"flixel.system.debug.FlxDebugger.hAlignButtons","flixel/system/debug/FlxDebugger.hx",353,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_373_resetButtonLayout,"flixel.system.debug.FlxDebugger","resetButtonLayout",0x30f7f488,"flixel.system.debug.FlxDebugger.resetButtonLayout","flixel/system/debug/FlxDebugger.hx",373,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_395_addButton,"flixel.system.debug.FlxDebugger","addButton",0x3bdccfd0,"flixel.system.debug.FlxDebugger.addButton","flixel/system/debug/FlxDebugger.hx",395,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_414_removeButton,"flixel.system.debug.FlxDebugger","removeButton",0xec3cec99,"flixel.system.debug.FlxDebugger.removeButton","flixel/system/debug/FlxDebugger.hx",414,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_427_addWindowToggleButton,"flixel.system.debug.FlxDebugger","addWindowToggleButton",0x07784794,"flixel.system.debug.FlxDebugger.addWindowToggleButton","flixel/system/debug/FlxDebugger.hx",427,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_434_addWindow,"flixel.system.debug.FlxDebugger","addWindow",0xb48901ce,"flixel.system.debug.FlxDebugger.addWindow","flixel/system/debug/FlxDebugger.hx",434,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_446_removeWindow,"flixel.system.debug.FlxDebugger","removeWindow",0x64e91e97,"flixel.system.debug.FlxDebugger.removeWindow","flixel/system/debug/FlxDebugger.hx",446,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_453_addChild,"flixel.system.debug.FlxDebugger","addChild",0x32a6217e,"flixel.system.debug.FlxDebugger.addChild","flixel/system/debug/FlxDebugger.hx",453,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_466_onMouseOver,"flixel.system.debug.FlxDebugger","onMouseOver",0x134e1717,"flixel.system.debug.FlxDebugger.onMouseOver","flixel/system/debug/FlxDebugger.hx",466,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_474_onMouseOut,"flixel.system.debug.FlxDebugger","onMouseOut",0x752e442b,"flixel.system.debug.FlxDebugger.onMouseOut","flixel/system/debug/FlxDebugger.hx",474,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_478_onMouseFocus,"flixel.system.debug.FlxDebugger","onMouseFocus",0x9dc8e4b5,"flixel.system.debug.FlxDebugger.onMouseFocus","flixel/system/debug/FlxDebugger.hx",478,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_490_onMouseFocusLost,"flixel.system.debug.FlxDebugger","onMouseFocusLost",0xe822b939,"flixel.system.debug.FlxDebugger.onMouseFocusLost","flixel/system/debug/FlxDebugger.hx",490,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_506_toggleDrawDebug,"flixel.system.debug.FlxDebugger","toggleDrawDebug",0x1fb0d218,"flixel.system.debug.FlxDebugger.toggleDrawDebug","flixel/system/debug/FlxDebugger.hx",506,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_511_openHomepage,"flixel.system.debug.FlxDebugger","openHomepage",0x2c4a291b,"flixel.system.debug.FlxDebugger.openHomepage","flixel/system/debug/FlxDebugger.hx",511,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_515_openGitHub,"flixel.system.debug.FlxDebugger","openGitHub",0x31aecfb0,"flixel.system.debug.FlxDebugger.openGitHub","flixel/system/debug/FlxDebugger.hx",515,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_70_boot,"flixel.system.debug.FlxDebugger","boot",0xff87f875,"flixel.system.debug.FlxDebugger.boot","flixel/system/debug/FlxDebugger.hx",70,0xd9fc0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_75_boot,"flixel.system.debug.FlxDebugger","boot",0xff87f875,"flixel.system.debug.FlxDebugger.boot","flixel/system/debug/FlxDebugger.hx",75,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void FlxDebugger_obj::__construct(Float Width,Float Height){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::_hx_system::ui::FlxSystemButton,drawDebugButton) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_173_new)
HXLINE( 173)			drawDebugButton->set_toggled(!(::flixel::FlxG_obj::debugger->drawDebug));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_64_new)
HXLINE( 113)		this->_wasUsingSystemCursor = false;
HXLINE( 112)		this->_wasMouseVisible = true;
HXLINE( 111)		this->_usingSystemCursor = false;
HXLINE( 109)		this->_windows = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 102)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 102)		_g->set(::flixel::util::FlxHorizontalAlign_obj::LEFT_dyn(),::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 102)		_g->set(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn(),::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 102)		_g->set(::flixel::util::FlxHorizontalAlign_obj::RIGHT_dyn(),::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 102)		this->_buttons = _g;
HXLINE(  95)		this->_screen =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  90)		this->_layout = ::flixel::_hx_system::debug::FlxDebuggerLayout_obj::STANDARD_dyn();
HXLINE( 124)		super::__construct();
HXLINE( 126)		this->set_visible(false);
HXLINE( 127)		this->set_tabChildren(false);
HXLINE( 129)		::flixel::_hx_system::debug::Tooltip_obj::init(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 131)		this->_topBar =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 132)		this->_topBar->get_graphics()->beginFill(0,((Float)0.66666666666666663));
HXLINE( 133)		 ::openfl::display::Graphics _hx_tmp = this->_topBar->get_graphics();
HXDLIN( 133)		_hx_tmp->drawRect(( (Float)(0) ),( (Float)(0) ),( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ),( (Float)(20) ));
HXLINE( 134)		this->_topBar->get_graphics()->endFill();
HXLINE( 135)		this->addChild(this->_topBar);
HXLINE( 137)		 ::openfl::text::TextField txt =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 138)		txt->set_height(( (Float)(20) ));
HXLINE( 139)		txt->set_selectable(false);
HXLINE( 140)		txt->set_y(( (Float)(-9) ));
HXLINE( 141)		txt->set_multiline(false);
HXLINE( 142)		txt->set_embedFonts(true);
HXLINE( 143)		 ::openfl::text::TextFormat format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER,12,16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 144)		txt->set_defaultTextFormat(format);
HXLINE( 145)		txt->set_autoSize(1);
HXLINE( 146)		txt->set_text(::Std_obj::string(::flixel::FlxG_obj::VERSION));
HXLINE( 148)		{
HXLINE( 148)			 ::flixel::_hx_system::debug::Window window = (this->log =  ::flixel::_hx_system::debug::log::Log_obj::__alloc( HX_CTX ));
HXDLIN( 148)			this->_windows->push(window);
HXDLIN( 148)			this->addChild(window);
HXDLIN( 148)			if (::hx::IsNotNull( this->_screenBounds )) {
HXLINE( 148)				this->updateBounds();
HXDLIN( 148)				window->bound();
            			}
            		}
HXLINE( 149)		{
HXLINE( 149)			 ::flixel::_hx_system::debug::Window window1 = (this->bitmapLog =  ::flixel::_hx_system::debug::log::BitmapLog_obj::__alloc( HX_CTX ));
HXDLIN( 149)			this->_windows->push(window1);
HXDLIN( 149)			this->addChild(window1);
HXDLIN( 149)			if (::hx::IsNotNull( this->_screenBounds )) {
HXLINE( 149)				this->updateBounds();
HXDLIN( 149)				window1->bound();
            			}
            		}
HXLINE( 150)		{
HXLINE( 150)			 ::flixel::_hx_system::debug::Window window2 = (this->watch =  ::flixel::_hx_system::debug::watch::Watch_obj::__alloc( HX_CTX ,null()));
HXDLIN( 150)			this->_windows->push(window2);
HXDLIN( 150)			this->addChild(window2);
HXDLIN( 150)			if (::hx::IsNotNull( this->_screenBounds )) {
HXLINE( 150)				this->updateBounds();
HXDLIN( 150)				window2->bound();
            			}
            		}
HXLINE( 151)		this->completionList =  ::flixel::_hx_system::debug::completion::CompletionList_obj::__alloc( HX_CTX ,5);
HXLINE( 152)		{
HXLINE( 152)			 ::flixel::_hx_system::debug::Window window3 = (this->console =  ::flixel::_hx_system::debug::console::Console_obj::__alloc( HX_CTX ,this->completionList));
HXDLIN( 152)			this->_windows->push(window3);
HXDLIN( 152)			this->addChild(window3);
HXDLIN( 152)			if (::hx::IsNotNull( this->_screenBounds )) {
HXLINE( 152)				this->updateBounds();
HXDLIN( 152)				window3->bound();
            			}
            		}
HXLINE( 153)		{
HXLINE( 153)			 ::flixel::_hx_system::debug::Window window4 = (this->stats =  ::flixel::_hx_system::debug::stats::Stats_obj::__alloc( HX_CTX ));
HXDLIN( 153)			this->_windows->push(window4);
HXDLIN( 153)			this->addChild(window4);
HXDLIN( 153)			if (::hx::IsNotNull( this->_screenBounds )) {
HXLINE( 153)				this->updateBounds();
HXDLIN( 153)				window4->bound();
            			}
            		}
HXLINE( 154)		{
HXLINE( 154)			 ::flixel::_hx_system::debug::Window window5 = (this->interaction =  ::flixel::_hx_system::debug::interaction::Interaction_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this)));
HXDLIN( 154)			this->_windows->push(window5);
HXDLIN( 154)			this->addChild(window5);
HXDLIN( 154)			if (::hx::IsNotNull( this->_screenBounds )) {
HXLINE( 154)				this->updateBounds();
HXDLIN( 154)				window5->bound();
            			}
            		}
HXLINE( 156)		this->vcr =  ::flixel::_hx_system::debug::VCR_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 158)		this->addButton(::flixel::util::FlxHorizontalAlign_obj::LEFT_dyn(), ::flixel::_hx_system::debug::_FlxDebugger::GraphicFlixel_obj::__alloc( HX_CTX ,0,0,null(),null()),this->openHomepage_dyn(),null(),null());
HXLINE( 159)		this->addButton(::flixel::util::FlxHorizontalAlign_obj::LEFT_dyn(),null(),this->openGitHub_dyn(),null(),null())->addChild(txt);
HXLINE( 161)		this->addWindowToggleButton(this->interaction,::hx::ClassOf< ::flixel::_hx_system::debug::GraphicInteractive >());
HXLINE( 162)		this->addWindowToggleButton(this->bitmapLog,::hx::ClassOf< ::flixel::_hx_system::debug::GraphicBitmapLog >());
HXLINE( 163)		this->addWindowToggleButton(this->log,::hx::ClassOf< ::flixel::_hx_system::debug::GraphicLog >());
HXLINE( 165)		this->addWindowToggleButton(this->watch,::hx::ClassOf< ::flixel::_hx_system::debug::GraphicWatch >());
HXLINE( 166)		this->addWindowToggleButton(this->console,::hx::ClassOf< ::flixel::_hx_system::debug::GraphicConsole >());
HXLINE( 167)		this->addWindowToggleButton(this->stats,::hx::ClassOf< ::flixel::_hx_system::debug::GraphicStats >());
HXLINE( 169)		 ::flixel::_hx_system::ui::FlxSystemButton drawDebugButton = this->addButton(::flixel::util::FlxHorizontalAlign_obj::RIGHT_dyn(), ::flixel::_hx_system::debug::_FlxDebugger::GraphicDrawDebug_obj::__alloc( HX_CTX ,0,0,null(),null()),this->toggleDrawDebug_dyn(),true,null());
HXLINE( 170)		drawDebugButton->set_toggled(!(::flixel::FlxG_obj::debugger->drawDebug));
HXLINE( 171)		::flixel::FlxG_obj::debugger->drawDebugChanged->add( ::Dynamic(new _hx_Closure_0(drawDebugButton)));
HXLINE( 180)		this->addChild(this->completionList);
HXLINE( 182)		this->onResize(Width,Height);
HXLINE( 184)		this->addEventListener(HX_("mouseOver",19,4a,0d,f6),this->onMouseOver_dyn(),null(),null(),null());
HXLINE( 185)		this->addEventListener(HX_("mouseOut",69,e7,1d,a4),this->onMouseOut_dyn(),null(),null(),null());
HXLINE( 187)		::flixel::FlxG_obj::signals->preStateSwitch->add(::flixel::_hx_system::debug::watch::Tracker_obj::onStateSwitch_dyn());
            	}

Dynamic FlxDebugger_obj::__CreateEmpty() { return new FlxDebugger_obj; }

void *FlxDebugger_obj::_hx_vtable = 0;

Dynamic FlxDebugger_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDebugger_obj > _hx_result = new FlxDebugger_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxDebugger_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x54b8beab) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x54b8beab;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void FlxDebugger_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_194_destroy)
HXLINE( 195)		this->_screen = null();
HXLINE( 196)		this->_buttons = null();
HXLINE( 198)		this->removeChild(this->_topBar);
HXLINE( 199)		this->_topBar = null();
HXLINE( 201)		if (::hx::IsNotNull( this->log )) {
HXLINE( 203)			this->removeChild(this->log);
HXLINE( 204)			this->log->destroy();
HXLINE( 205)			this->log = null();
            		}
HXLINE( 207)		if (::hx::IsNotNull( this->watch )) {
HXLINE( 209)			this->removeChild(this->watch);
HXLINE( 210)			this->watch->destroy();
HXLINE( 211)			this->watch = null();
            		}
HXLINE( 213)		if (::hx::IsNotNull( this->bitmapLog )) {
HXLINE( 215)			this->removeChild(this->bitmapLog);
HXLINE( 216)			this->bitmapLog->destroy();
HXLINE( 217)			this->bitmapLog = null();
            		}
HXLINE( 219)		if (::hx::IsNotNull( this->stats )) {
HXLINE( 221)			this->removeChild(this->stats);
HXLINE( 222)			this->stats->destroy();
HXLINE( 223)			this->stats = null();
            		}
HXLINE( 225)		if (::hx::IsNotNull( this->console )) {
HXLINE( 227)			this->removeChild(this->console);
HXLINE( 228)			this->console->destroy();
HXLINE( 229)			this->console = null();
            		}
HXLINE( 232)		this->_windows = null();
HXLINE( 234)		this->removeEventListener(HX_("mouseOver",19,4a,0d,f6),this->onMouseOver_dyn(),null());
HXLINE( 235)		this->removeEventListener(HX_("mouseOut",69,e7,1d,a4),this->onMouseOut_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,destroy,(void))

void FlxDebugger_obj::update(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_240_update)
HXDLIN( 240)		int _g = 0;
HXDLIN( 240)		::Array< ::Dynamic> _g1 = this->_windows;
HXDLIN( 240)		while((_g < _g1->length)){
HXDLIN( 240)			 ::flixel::_hx_system::debug::Window window = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::Window >();
HXDLIN( 240)			_g = (_g + 1);
HXLINE( 241)			window->update();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,update,(void))

void FlxDebugger_obj::setLayout( ::flixel::_hx_system::debug::FlxDebuggerLayout Layout){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_250_setLayout)
HXLINE( 251)		this->_layout = Layout;
HXLINE( 252)		this->resetLayout();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,setLayout,(void))

void FlxDebugger_obj::resetLayout(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_261_resetLayout)
HXDLIN( 261)		switch((int)(this->_layout->_hx_getIndex())){
            			case (int)0: {
HXLINE( 314)				this->console->resize((this->_screen->x - ( (Float)(4) )),( (Float)(35) ));
HXLINE( 315)				this->console->reposition(( (Float)(2) ),this->_screen->y);
HXLINE( 316)				this->log->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(this->_screen->y / ( (Float)(4) )));
HXLINE( 317)				 ::flixel::_hx_system::debug::log::Log _hx_tmp = this->log;
HXDLIN( 317)				Float _hx_tmp1 = this->_screen->y;
HXDLIN( 317)				Float _hx_tmp2 = (_hx_tmp1 - this->log->get_height());
HXDLIN( 317)				_hx_tmp->reposition(( (Float)(0) ),((_hx_tmp2 - this->console->get_height()) - ((Float)3.)));
HXLINE( 318)				this->watch->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(this->_screen->y / ( (Float)(4) )));
HXLINE( 319)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp3 = this->watch;
HXDLIN( 319)				Float _hx_tmp4 = this->_screen->x;
HXDLIN( 319)				Float _hx_tmp5 = this->_screen->y;
HXDLIN( 319)				Float _hx_tmp6 = (_hx_tmp5 - this->watch->get_height());
HXDLIN( 319)				_hx_tmp3->reposition(_hx_tmp4,((_hx_tmp6 - this->console->get_height()) - ((Float)3.)));
HXLINE( 320)				this->stats->reposition(this->_screen->x,( (Float)(0) ));
HXLINE( 321)				this->bitmapLog->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(this->_screen->y / ( (Float)(4) )));
HXLINE( 322)				 ::flixel::_hx_system::debug::log::BitmapLog _hx_tmp7 = this->bitmapLog;
HXDLIN( 322)				Float _hx_tmp8 = (this->log->get_y() - ( (Float)(2) ));
HXDLIN( 322)				_hx_tmp7->reposition(( (Float)(0) ),(_hx_tmp8 - this->bitmapLog->get_height()));
            			}
            			break;
            			case (int)1: {
HXLINE( 264)				this->log->resize((this->_screen->x / ( (Float)(4) )),( (Float)(68) ));
HXLINE( 265)				this->log->reposition(( (Float)(0) ),this->_screen->y);
HXLINE( 266)				this->console->resize(((this->_screen->x / ( (Float)(2) )) - ( (Float)(8) )),( (Float)(35) ));
HXLINE( 267)				 ::flixel::_hx_system::debug::console::Console _hx_tmp = this->console;
HXDLIN( 267)				Float _hx_tmp1 = this->log->get_x();
HXDLIN( 267)				Float _hx_tmp2 = ((_hx_tmp1 + this->log->get_width()) + 2);
HXDLIN( 267)				_hx_tmp->reposition(_hx_tmp2,this->_screen->y);
HXLINE( 268)				this->watch->resize((this->_screen->x / ( (Float)(4) )),( (Float)(68) ));
HXLINE( 269)				this->watch->reposition(this->_screen->x,this->_screen->y);
HXLINE( 270)				this->stats->reposition(this->_screen->x,( (Float)(0) ));
HXLINE( 271)				this->bitmapLog->resize((this->_screen->x / ( (Float)(4) )),( (Float)(68) ));
HXLINE( 272)				this->bitmapLog->reposition(( (Float)(0) ),((this->_screen->y - ( (Float)(136) )) - ( (Float)(4) )));
            			}
            			break;
            			case (int)2: {
HXLINE( 274)				this->console->resize((this->_screen->x - ( (Float)(4) )),( (Float)(35) ));
HXLINE( 275)				this->console->reposition(( (Float)(2) ),this->_screen->y);
HXLINE( 276)				this->log->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(this->_screen->y / ( (Float)(2) )));
HXLINE( 277)				 ::flixel::_hx_system::debug::log::Log _hx_tmp = this->log;
HXDLIN( 277)				Float _hx_tmp1 = this->_screen->y;
HXDLIN( 277)				Float _hx_tmp2 = (_hx_tmp1 - this->log->get_height());
HXDLIN( 277)				_hx_tmp->reposition(( (Float)(0) ),((_hx_tmp2 - this->console->get_height()) - ((Float)3.)));
HXLINE( 278)				this->watch->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(this->_screen->y / ( (Float)(2) )));
HXLINE( 279)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp3 = this->watch;
HXDLIN( 279)				Float _hx_tmp4 = this->_screen->x;
HXDLIN( 279)				Float _hx_tmp5 = this->_screen->y;
HXDLIN( 279)				Float _hx_tmp6 = (_hx_tmp5 - this->watch->get_height());
HXDLIN( 279)				_hx_tmp3->reposition(_hx_tmp4,((_hx_tmp6 - this->console->get_height()) - ((Float)3.)));
HXLINE( 280)				this->stats->reposition(this->_screen->x,( (Float)(0) ));
HXLINE( 281)				this->bitmapLog->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(((this->_screen->y - ( (Float)(4) )) - (this->_screen->y / ( (Float)(2) ))) - ( (Float)(70) )));
HXLINE( 282)				this->bitmapLog->reposition(( (Float)(0) ),((Float)3.));
            			}
            			break;
            			case (int)3: {
HXLINE( 284)				this->console->resize((this->_screen->x - ( (Float)(4) )),( (Float)(35) ));
HXLINE( 285)				this->console->reposition(( (Float)(0) ),( (Float)(0) ));
HXLINE( 286)				this->log->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(this->_screen->y / ( (Float)(4) )));
HXLINE( 287)				 ::flixel::_hx_system::debug::log::Log _hx_tmp = this->log;
HXDLIN( 287)				_hx_tmp->reposition(( (Float)(0) ),((this->console->get_height() + 2) + 15));
HXLINE( 288)				this->watch->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(this->_screen->y / ( (Float)(4) )));
HXLINE( 289)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp1 = this->watch;
HXDLIN( 289)				Float _hx_tmp2 = this->_screen->x;
HXDLIN( 289)				_hx_tmp1->reposition(_hx_tmp2,((this->console->get_height() + 2) + 15));
HXLINE( 290)				this->stats->reposition(this->_screen->x,this->_screen->y);
HXLINE( 291)				this->bitmapLog->resize(((this->_screen->x - ( (Float)(6) )) / ( (Float)(2) )),(this->_screen->y / ( (Float)(4) )));
HXLINE( 292)				 ::flixel::_hx_system::debug::log::BitmapLog _hx_tmp3 = this->bitmapLog;
HXDLIN( 292)				Float _hx_tmp4 = ((this->console->get_height() + 4) + 15);
HXDLIN( 292)				_hx_tmp3->reposition(( (Float)(0) ),((_hx_tmp4 + (this->_screen->y / ( (Float)(4) ))) + 2));
            			}
            			break;
            			case (int)4: {
HXLINE( 294)				this->console->resize((this->_screen->x - ( (Float)(4) )),( (Float)(35) ));
HXLINE( 295)				this->console->reposition(( (Float)(2) ),this->_screen->y);
HXLINE( 296)				 ::flixel::_hx_system::debug::log::Log _hx_tmp = this->log;
HXDLIN( 296)				Float _hx_tmp1 = (this->_screen->x / ( (Float)(3) ));
HXDLIN( 296)				Float _hx_tmp2 = (((this->_screen->y - ( (Float)(15) )) - ((Float)5.)) / ( (Float)(2) ));
HXDLIN( 296)				_hx_tmp->resize(_hx_tmp1,((_hx_tmp2 - (this->console->get_height() / ( (Float)(2) ))) - ( (Float)(2) )));
HXLINE( 297)				this->log->reposition(( (Float)(0) ),( (Float)(0) ));
HXLINE( 298)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp3 = this->watch;
HXDLIN( 298)				Float _hx_tmp4 = (this->_screen->x / ( (Float)(3) ));
HXDLIN( 298)				Float _hx_tmp5 = (((this->_screen->y - ( (Float)(15) )) - ((Float)5.)) / ( (Float)(2) ));
HXDLIN( 298)				_hx_tmp3->resize(_hx_tmp4,(_hx_tmp5 - (this->console->get_height() / ( (Float)(2) ))));
HXLINE( 299)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp6 = this->watch;
HXDLIN( 299)				Float _hx_tmp7 = this->log->get_y();
HXDLIN( 299)				_hx_tmp6->reposition(( (Float)(0) ),((_hx_tmp7 + this->log->get_height()) + 2));
HXLINE( 300)				this->stats->reposition(this->_screen->x,( (Float)(0) ));
HXLINE( 301)				 ::flixel::_hx_system::debug::log::BitmapLog _hx_tmp8 = this->bitmapLog;
HXDLIN( 301)				Float _hx_tmp9 = (this->_screen->x / ( (Float)(3) ));
HXDLIN( 301)				Float _hx_tmp10 = (((this->_screen->y - ( (Float)(15) )) - ((Float)5.)) / ( (Float)(2) ));
HXDLIN( 301)				_hx_tmp8->resize(_hx_tmp9,((_hx_tmp10 - (this->console->get_height() / ( (Float)(2) ))) - ( (Float)(2) )));
HXLINE( 302)				this->bitmapLog->reposition(((this->_screen->x / ( (Float)(3) )) + 4),( (Float)(0) ));
            			}
            			break;
            			case (int)5: {
HXLINE( 304)				this->console->resize((this->_screen->x - ( (Float)(4) )),( (Float)(35) ));
HXLINE( 305)				this->console->reposition(( (Float)(2) ),this->_screen->y);
HXLINE( 306)				 ::flixel::_hx_system::debug::log::Log _hx_tmp = this->log;
HXDLIN( 306)				Float _hx_tmp1 = (this->_screen->x / ( (Float)(3) ));
HXDLIN( 306)				Float _hx_tmp2 = (((this->_screen->y - ( (Float)(15) )) - ((Float)5.)) / ( (Float)(2) ));
HXDLIN( 306)				_hx_tmp->resize(_hx_tmp1,((_hx_tmp2 - (this->console->get_height() / ( (Float)(2) ))) - ( (Float)(2) )));
HXLINE( 307)				this->log->reposition(this->_screen->x,( (Float)(0) ));
HXLINE( 308)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp3 = this->watch;
HXDLIN( 308)				Float _hx_tmp4 = (this->_screen->x / ( (Float)(3) ));
HXDLIN( 308)				Float _hx_tmp5 = (((this->_screen->y - ( (Float)(15) )) - ((Float)5.)) / ( (Float)(2) ));
HXDLIN( 308)				_hx_tmp3->resize(_hx_tmp4,(_hx_tmp5 - (this->console->get_height() / ( (Float)(2) ))));
HXLINE( 309)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp6 = this->watch;
HXDLIN( 309)				Float _hx_tmp7 = this->_screen->x;
HXDLIN( 309)				Float _hx_tmp8 = this->log->get_y();
HXDLIN( 309)				_hx_tmp6->reposition(_hx_tmp7,((_hx_tmp8 + this->log->get_height()) + 2));
HXLINE( 310)				this->stats->reposition(( (Float)(0) ),( (Float)(0) ));
HXLINE( 311)				 ::flixel::_hx_system::debug::log::BitmapLog _hx_tmp9 = this->bitmapLog;
HXDLIN( 311)				Float _hx_tmp10 = (this->_screen->x / ( (Float)(3) ));
HXDLIN( 311)				Float _hx_tmp11 = (((this->_screen->y - ( (Float)(15) )) - ((Float)5.)) / ( (Float)(2) ));
HXDLIN( 311)				_hx_tmp9->resize(_hx_tmp10,((_hx_tmp11 - (this->console->get_height() / ( (Float)(2) ))) - ( (Float)(2) )));
HXLINE( 312)				this->bitmapLog->reposition(((this->_screen->x - ( (Float)(4) )) - ((this->_screen->x / ( (Float)(3) )) * ( (Float)(2) ))),( (Float)(0) ));
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetLayout,(void))

void FlxDebugger_obj::onResize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_327_onResize)
HXLINE( 328)		this->_screen->x = Width;
HXLINE( 329)		this->_screen->y = Height;
HXLINE( 331)		this->updateBounds();
HXLINE( 332)		 ::openfl::display::Sprite _hx_tmp = this->_topBar;
HXDLIN( 332)		_hx_tmp->set_width(( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ));
HXLINE( 333)		this->resetButtonLayout();
HXLINE( 334)		this->resetLayout();
HXLINE( 335)		this->set_scaleX(this->set_scaleY(( (Float)(1) )));
HXLINE( 336)		this->set_x(-(::flixel::FlxG_obj::scaleMode->offset->x));
HXLINE( 337)		this->set_y(-(::flixel::FlxG_obj::scaleMode->offset->y));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,onResize,(void))

void FlxDebugger_obj::updateBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_341_updateBounds)
HXLINE( 342)		this->_screenBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,2,((Float)21.),(this->_screen->x - ( (Float)(4) )),((this->_screen->y - ( (Float)(4) )) - ( (Float)(20) )));
HXLINE( 343)		{
HXLINE( 343)			int _g = 0;
HXDLIN( 343)			::Array< ::Dynamic> _g1 = this->_windows;
HXDLIN( 343)			while((_g < _g1->length)){
HXLINE( 343)				 ::flixel::_hx_system::debug::Window window = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::Window >();
HXDLIN( 343)				_g = (_g + 1);
HXLINE( 345)				window->updateBounds(this->_screenBounds);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,updateBounds,(void))

Float FlxDebugger_obj::hAlignButtons(::Array< ::Dynamic> Sprites,::hx::Null< Float >  __o_Padding,::hx::Null< bool >  __o_Set,::hx::Null< Float >  __o_LeftOffset){
            		Float Padding = __o_Padding.Default(0);
            		bool Set = __o_Set.Default(true);
            		Float LeftOffset = __o_LeftOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_353_hAlignButtons)
HXLINE( 354)		Float width = ( (Float)(0) );
HXLINE( 355)		Float last = LeftOffset;
HXLINE( 357)		{
HXLINE( 357)			int _g = 0;
HXDLIN( 357)			int _g1 = Sprites->length;
HXDLIN( 357)			while((_g < _g1)){
HXLINE( 357)				_g = (_g + 1);
HXDLIN( 357)				int i = (_g - 1);
HXLINE( 359)				 ::openfl::display::Sprite o = Sprites->__get(i).StaticCast<  ::flixel::_hx_system::ui::FlxSystemButton >();
HXLINE( 360)				width = (width + (o->get_width() + Padding));
HXLINE( 361)				if (Set) {
HXLINE( 362)					o->set_x(last);
            				}
HXLINE( 363)				Float last1 = o->get_x();
HXDLIN( 363)				last = ((last1 + o->get_width()) + Padding);
            			}
            		}
HXLINE( 366)		return width;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxDebugger_obj,hAlignButtons,return )

void FlxDebugger_obj::resetButtonLayout(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_373_resetButtonLayout)
HXLINE( 374)		this->hAlignButtons(( (::Array< ::Dynamic>)(this->_buttons->get(::flixel::util::FlxHorizontalAlign_obj::LEFT_dyn())) ),10,true,10);
HXLINE( 376)		Float offset = (( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ) * ((Float)0.5));
HXDLIN( 376)		Float offset1 = (offset - (this->hAlignButtons(( (::Array< ::Dynamic>)(this->_buttons->get(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn())) ),10,false,null()) * ((Float)0.5)));
HXLINE( 377)		this->hAlignButtons(( (::Array< ::Dynamic>)(this->_buttons->get(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn())) ),10,true,offset1);
HXLINE( 379)		int offset2 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN( 379)		Float offset3 = (( (Float)(offset2) ) - this->hAlignButtons(( (::Array< ::Dynamic>)(this->_buttons->get(::flixel::util::FlxHorizontalAlign_obj::RIGHT_dyn())) ),10,false,null()));
HXLINE( 380)		this->hAlignButtons(( (::Array< ::Dynamic>)(this->_buttons->get(::flixel::util::FlxHorizontalAlign_obj::RIGHT_dyn())) ),10,true,offset3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetButtonLayout,(void))

 ::flixel::_hx_system::ui::FlxSystemButton FlxDebugger_obj::addButton( ::flixel::util::FlxHorizontalAlign Position, ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode,::hx::Null< bool >  __o_UpdateLayout){
            		bool ToggleMode = __o_ToggleMode.Default(false);
            		bool UpdateLayout = __o_UpdateLayout.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_395_addButton)
HXLINE( 396)		 ::flixel::_hx_system::ui::FlxSystemButton button =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX ,Icon,UpHandler,ToggleMode);
HXLINE( 397)		button->set_y((((Float)10.) - (button->get_height() / ( (Float)(2) ))));
HXLINE( 398)		( (::Array< ::Dynamic>)(this->_buttons->get(Position)) )->push(button);
HXLINE( 399)		this->addChild(button);
HXLINE( 401)		if (UpdateLayout) {
HXLINE( 402)			this->resetButtonLayout();
            		}
HXLINE( 404)		return button;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxDebugger_obj,addButton,return )

void FlxDebugger_obj::removeButton( ::flixel::_hx_system::ui::FlxSystemButton Button,::hx::Null< bool >  __o_UpdateLayout){
            		bool UpdateLayout = __o_UpdateLayout.Default(true);
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_414_removeButton)
HXLINE( 415)		this->removeChild(Button);
HXLINE( 416)		Button->destroy();
HXLINE( 418)		( (::Array< ::Dynamic>)(this->_buttons->get(::flixel::util::FlxHorizontalAlign_obj::LEFT_dyn())) )->remove(Button);
HXLINE( 419)		( (::Array< ::Dynamic>)(this->_buttons->get(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn())) )->remove(Button);
HXLINE( 420)		( (::Array< ::Dynamic>)(this->_buttons->get(::flixel::util::FlxHorizontalAlign_obj::RIGHT_dyn())) )->remove(Button);
HXLINE( 422)		if (UpdateLayout) {
HXLINE( 423)			this->resetButtonLayout();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,removeButton,(void))

void FlxDebugger_obj::addWindowToggleButton( ::flixel::_hx_system::debug::Window window,::hx::Class icon){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_427_addWindowToggleButton)
HXLINE( 428)		 ::flixel::_hx_system::ui::FlxSystemButton button = this->addButton(::flixel::util::FlxHorizontalAlign_obj::RIGHT_dyn(),( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(icon,::cpp::VirtualArray_obj::__new(2)->init(0,0)->init(1,0))) ),window->toggleVisible_dyn(),true,true);
HXLINE( 429)		window->toggleButton = button;
HXLINE( 430)		button->set_toggled(!(window->get_visible()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,addWindowToggleButton,(void))

 ::flixel::_hx_system::debug::Window FlxDebugger_obj::addWindow( ::flixel::_hx_system::debug::Window window){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_434_addWindow)
HXLINE( 435)		this->_windows->push(window);
HXLINE( 436)		this->addChild(window);
HXLINE( 437)		if (::hx::IsNotNull( this->_screenBounds )) {
HXLINE( 439)			this->updateBounds();
HXLINE( 440)			window->bound();
            		}
HXLINE( 442)		return window;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,addWindow,return )

void FlxDebugger_obj::removeWindow( ::flixel::_hx_system::debug::Window window){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_446_removeWindow)
HXLINE( 447)		if (this->contains(window)) {
HXLINE( 448)			this->removeChild(window);
            		}
HXLINE( 449)		{
HXLINE( 449)			::Array< ::Dynamic> array = this->_windows;
HXDLIN( 449)			int index = array->indexOf(window,null());
HXDLIN( 449)			if ((index != -1)) {
HXLINE( 449)				array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::_hx_system::debug::Window >();
HXDLIN( 449)				array->pop().StaticCast<  ::flixel::_hx_system::debug::Window >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,removeWindow,(void))

 ::openfl::display::DisplayObject FlxDebugger_obj::addChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_453_addChild)
HXLINE( 454)		 ::openfl::display::DisplayObject result = this->super::addChild(child);
HXLINE( 456)		if (::hx::IsNotNull( this->completionList )) {
HXLINE( 457)			this->super::addChild(this->completionList);
            		}
HXLINE( 458)		return result;
            	}


void FlxDebugger_obj::onMouseOver( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_466_onMouseOver)
HXDLIN( 466)		this->onMouseFocus();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOver,(void))

void FlxDebugger_obj::onMouseOut( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_474_onMouseOut)
HXDLIN( 474)		this->onMouseFocusLost();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOut,(void))

void FlxDebugger_obj::onMouseFocus(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_478_onMouseFocus)
HXLINE( 480)		::flixel::FlxG_obj::mouse->enabled = false;
HXLINE( 481)		this->_wasMouseVisible = ::flixel::FlxG_obj::mouse->visible;
HXLINE( 482)		this->_wasUsingSystemCursor = ::flixel::FlxG_obj::mouse->useSystemCursor;
HXLINE( 483)		::flixel::FlxG_obj::mouse->set_useSystemCursor(true);
HXLINE( 484)		this->_usingSystemCursor = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,onMouseFocus,(void))

void FlxDebugger_obj::onMouseFocusLost(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_490_onMouseFocusLost)
HXLINE( 494)		::flixel::FlxG_obj::mouse->enabled = !(this->interaction->isInUse());
HXLINE( 496)		if (this->_usingSystemCursor) {
HXLINE( 498)			::flixel::FlxG_obj::mouse->set_useSystemCursor(this->_wasUsingSystemCursor);
HXLINE( 499)			::flixel::FlxG_obj::mouse->set_visible(this->_wasMouseVisible);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,onMouseFocusLost,(void))

void FlxDebugger_obj::toggleDrawDebug(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_506_toggleDrawDebug)
HXDLIN( 506)		::flixel::FlxG_obj::debugger->set_drawDebug(!(::flixel::FlxG_obj::debugger->drawDebug));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,toggleDrawDebug,(void))

void FlxDebugger_obj::openHomepage(){
            	HX_GC_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_511_openHomepage)
HXDLIN( 511)		::String url = HX_("http://www.haxeflixel.com",de,bc,02,e0);
HXDLIN( 511)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^.\\w+?:/*",16,3c,ef,2d),HX_("",00,00,00,00))->match(url))) {
HXDLIN( 511)			url = (HX_("https://",cf,b4,ae,3e) + url);
            		}
HXDLIN( 511)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url),HX_("_blank",95,26,d9,b0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openHomepage,(void))

void FlxDebugger_obj::openGitHub(){
            	HX_GC_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_515_openGitHub)
HXLINE( 516)		::String url = HX_("https://github.com/HaxeFlixel/flixel",bf,0c,67,11);
HXLINE( 517)		if (::hx::IsNotEq( ::flixel::_hx_system::FlxVersion_obj::sha,HX_("",00,00,00,00) )) {
HXLINE( 519)			url = (url + (HX_("/commit/",09,7c,b6,01) + ::Std_obj::string(::flixel::_hx_system::FlxVersion_obj::sha)));
            		}
HXLINE( 521)		{
HXLINE( 521)			::String url1 = url;
HXDLIN( 521)			if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^.\\w+?:/*",16,3c,ef,2d),HX_("",00,00,00,00))->match(url1))) {
HXLINE( 521)				url1 = (HX_("https://",cf,b4,ae,3e) + url1);
            			}
HXDLIN( 521)			::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url1),HX_("_blank",95,26,d9,b0));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openGitHub,(void))

int FlxDebugger_obj::GUTTER;

int FlxDebugger_obj::TOP_HEIGHT;


::hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new(Float Width,Float Height) {
	::hx::ObjectPtr< FlxDebugger_obj > __this = new FlxDebugger_obj();
	__this->__construct(Width,Height);
	return __this;
}

::hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__alloc(::hx::Ctx *_hx_ctx,Float Width,Float Height) {
	FlxDebugger_obj *__this = (FlxDebugger_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDebugger_obj), true, "flixel.system.debug.FlxDebugger"));
	*(void **)__this = FlxDebugger_obj::_hx_vtable;
	__this->__construct(Width,Height);
	return __this;
}

FlxDebugger_obj::FlxDebugger_obj()
{
}

void FlxDebugger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDebugger);
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(watch,"watch");
	HX_MARK_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(vcr,"vcr");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(interaction,"interaction");
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_MARK_MEMBER_NAME(_buttons,"_buttons");
	HX_MARK_MEMBER_NAME(_topBar,"_topBar");
	HX_MARK_MEMBER_NAME(_windows,"_windows");
	HX_MARK_MEMBER_NAME(_usingSystemCursor,"_usingSystemCursor");
	HX_MARK_MEMBER_NAME(_wasMouseVisible,"_wasMouseVisible");
	HX_MARK_MEMBER_NAME(_wasUsingSystemCursor,"_wasUsingSystemCursor");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDebugger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(watch,"watch");
	HX_VISIT_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(vcr,"vcr");
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(interaction,"interaction");
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_VISIT_MEMBER_NAME(_buttons,"_buttons");
	HX_VISIT_MEMBER_NAME(_topBar,"_topBar");
	HX_VISIT_MEMBER_NAME(_windows,"_windows");
	HX_VISIT_MEMBER_NAME(_usingSystemCursor,"_usingSystemCursor");
	HX_VISIT_MEMBER_NAME(_wasMouseVisible,"_wasMouseVisible");
	HX_VISIT_MEMBER_NAME(_wasUsingSystemCursor,"_wasUsingSystemCursor");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxDebugger_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return ::hx::Val( log ); }
		if (HX_FIELD_EQ(inName,"vcr") ) { return ::hx::Val( vcr ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return ::hx::Val( stats ); }
		if (HX_FIELD_EQ(inName,"watch") ) { return ::hx::Val( watch ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return ::hx::Val( console ); }
		if (HX_FIELD_EQ(inName,"_layout") ) { return ::hx::Val( _layout ); }
		if (HX_FIELD_EQ(inName,"_screen") ) { return ::hx::Val( _screen ); }
		if (HX_FIELD_EQ(inName,"_topBar") ) { return ::hx::Val( _topBar ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buttons") ) { return ::hx::Val( _buttons ); }
		if (HX_FIELD_EQ(inName,"_windows") ) { return ::hx::Val( _windows ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { return ::hx::Val( bitmapLog ); }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return ::hx::Val( setLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return ::hx::Val( addButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return ::hx::Val( addWindow_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"openGitHub") ) { return ::hx::Val( openGitHub_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interaction") ) { return ::hx::Val( interaction ); }
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return ::hx::Val( resetLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeButton") ) { return ::hx::Val( removeButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return ::hx::Val( removeWindow_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseFocus") ) { return ::hx::Val( onMouseFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"openHomepage") ) { return ::hx::Val( openHomepage_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { return ::hx::Val( _screenBounds ); }
		if (HX_FIELD_EQ(inName,"hAlignButtons") ) { return ::hx::Val( hAlignButtons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { return ::hx::Val( completionList ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toggleDrawDebug") ) { return ::hx::Val( toggleDrawDebug_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_wasMouseVisible") ) { return ::hx::Val( _wasMouseVisible ); }
		if (HX_FIELD_EQ(inName,"onMouseFocusLost") ) { return ::hx::Val( onMouseFocusLost_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetButtonLayout") ) { return ::hx::Val( resetButtonLayout_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_usingSystemCursor") ) { return ::hx::Val( _usingSystemCursor ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_wasUsingSystemCursor") ) { return ::hx::Val( _wasUsingSystemCursor ); }
		if (HX_FIELD_EQ(inName,"addWindowToggleButton") ) { return ::hx::Val( addWindowToggleButton_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxDebugger_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast<  ::flixel::_hx_system::debug::log::Log >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast<  ::flixel::_hx_system::debug::VCR >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast<  ::flixel::_hx_system::debug::stats::Stats >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast<  ::flixel::_hx_system::debug::watch::Watch >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast<  ::flixel::_hx_system::debug::console::Console >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast<  ::flixel::_hx_system::debug::FlxDebuggerLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { _topBar=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buttons") ) { _buttons=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_windows") ) { _windows=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { bitmapLog=inValue.Cast<  ::flixel::_hx_system::debug::log::BitmapLog >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interaction") ) { interaction=inValue.Cast<  ::flixel::_hx_system::debug::interaction::Interaction >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { _screenBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast<  ::flixel::_hx_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_wasMouseVisible") ) { _wasMouseVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_usingSystemCursor") ) { _usingSystemCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_wasUsingSystemCursor") ) { _wasUsingSystemCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDebugger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("stats",1f,76,0b,84));
	outFields->push(HX_("log",84,54,52,00));
	outFields->push(HX_("watch",4f,16,25,c5));
	outFields->push(HX_("bitmapLog",d5,5b,db,c6));
	outFields->push(HX_("vcr",a5,e0,59,00));
	outFields->push(HX_("console",57,eb,d5,18));
	outFields->push(HX_("interaction",d2,37,59,3c));
	outFields->push(HX_("completionList",9a,d1,5d,23));
	outFields->push(HX_("_layout",49,c0,2f,c7));
	outFields->push(HX_("_screen",0b,4d,d4,b5));
	outFields->push(HX_("_screenBounds",e0,21,aa,25));
	outFields->push(HX_("_buttons",c2,ab,2d,04));
	outFields->push(HX_("_topBar",dd,9f,91,03));
	outFields->push(HX_("_windows",04,38,2d,22));
	outFields->push(HX_("_usingSystemCursor",4a,33,58,e3));
	outFields->push(HX_("_wasMouseVisible",17,92,d7,91));
	outFields->push(HX_("_wasUsingSystemCursor",ff,d8,04,e6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxDebugger_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::debug::stats::Stats */ ,(int)offsetof(FlxDebugger_obj,stats),HX_("stats",1f,76,0b,84)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::log::Log */ ,(int)offsetof(FlxDebugger_obj,log),HX_("log",84,54,52,00)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::watch::Watch */ ,(int)offsetof(FlxDebugger_obj,watch),HX_("watch",4f,16,25,c5)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::log::BitmapLog */ ,(int)offsetof(FlxDebugger_obj,bitmapLog),HX_("bitmapLog",d5,5b,db,c6)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::VCR */ ,(int)offsetof(FlxDebugger_obj,vcr),HX_("vcr",a5,e0,59,00)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::console::Console */ ,(int)offsetof(FlxDebugger_obj,console),HX_("console",57,eb,d5,18)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::interaction::Interaction */ ,(int)offsetof(FlxDebugger_obj,interaction),HX_("interaction",d2,37,59,3c)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::completion::CompletionList */ ,(int)offsetof(FlxDebugger_obj,completionList),HX_("completionList",9a,d1,5d,23)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::FlxDebuggerLayout */ ,(int)offsetof(FlxDebugger_obj,_layout),HX_("_layout",49,c0,2f,c7)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxDebugger_obj,_screen),HX_("_screen",0b,4d,d4,b5)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxDebugger_obj,_screenBounds),HX_("_screenBounds",e0,21,aa,25)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(FlxDebugger_obj,_buttons),HX_("_buttons",c2,ab,2d,04)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(FlxDebugger_obj,_topBar),HX_("_topBar",dd,9f,91,03)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxDebugger_obj,_windows),HX_("_windows",04,38,2d,22)},
	{::hx::fsBool,(int)offsetof(FlxDebugger_obj,_usingSystemCursor),HX_("_usingSystemCursor",4a,33,58,e3)},
	{::hx::fsBool,(int)offsetof(FlxDebugger_obj,_wasMouseVisible),HX_("_wasMouseVisible",17,92,d7,91)},
	{::hx::fsBool,(int)offsetof(FlxDebugger_obj,_wasUsingSystemCursor),HX_("_wasUsingSystemCursor",ff,d8,04,e6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxDebugger_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxDebugger_obj::GUTTER,HX_("GUTTER",1b,d3,2b,8c)},
	{::hx::fsInt,(void *) &FlxDebugger_obj::TOP_HEIGHT,HX_("TOP_HEIGHT",b1,2b,f8,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDebugger_obj_sMemberFields[] = {
	HX_("stats",1f,76,0b,84),
	HX_("log",84,54,52,00),
	HX_("watch",4f,16,25,c5),
	HX_("bitmapLog",d5,5b,db,c6),
	HX_("vcr",a5,e0,59,00),
	HX_("console",57,eb,d5,18),
	HX_("interaction",d2,37,59,3c),
	HX_("completionList",9a,d1,5d,23),
	HX_("_layout",49,c0,2f,c7),
	HX_("_screen",0b,4d,d4,b5),
	HX_("_screenBounds",e0,21,aa,25),
	HX_("_buttons",c2,ab,2d,04),
	HX_("_topBar",dd,9f,91,03),
	HX_("_windows",04,38,2d,22),
	HX_("_usingSystemCursor",4a,33,58,e3),
	HX_("_wasMouseVisible",17,92,d7,91),
	HX_("_wasUsingSystemCursor",ff,d8,04,e6),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("setLayout",ec,23,60,b8),
	HX_("resetLayout",d9,31,cd,f8),
	HX_("onResize",73,50,28,e8),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("hAlignButtons",84,fe,c2,4e),
	HX_("resetButtonLayout",ab,16,c0,05),
	HX_("addButton",f3,96,04,92),
	HX_("removeButton",56,fd,0d,49),
	HX_("addWindowToggleButton",37,b7,ff,a6),
	HX_("addWindow",f1,c8,b0,0a),
	HX_("removeWindow",54,2f,ba,c1),
	HX_("addChild",bb,cf,16,bf),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("onMouseFocus",72,f5,99,fa),
	HX_("onMouseFocusLost",76,6c,77,bd),
	HX_("toggleDrawDebug",7b,15,d7,eb),
	HX_("openHomepage",d8,39,1b,89),
	HX_("openGitHub",2d,47,55,3e),
	::String(null()) };

static void FlxDebugger_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDebugger_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#endif

::hx::Class FlxDebugger_obj::__mClass;

static ::String FlxDebugger_obj_sStaticFields[] = {
	HX_("GUTTER",1b,d3,2b,8c),
	HX_("TOP_HEIGHT",b1,2b,f8,33),
	::String(null())
};

void FlxDebugger_obj::__register()
{
	FlxDebugger_obj _hx_dummy;
	FlxDebugger_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.FlxDebugger",0b,53,a2,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxDebugger_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxDebugger_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxDebugger_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxDebugger_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDebugger_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDebugger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDebugger_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDebugger_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_70_boot)
HXDLIN(  70)		GUTTER = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_75_boot)
HXDLIN(  75)		TOP_HEIGHT = 20;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
