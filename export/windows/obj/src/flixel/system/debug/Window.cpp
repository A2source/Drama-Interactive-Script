#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicCloseButton
#include <flixel/system/debug/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Window_GraphicWindowHandle
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e51d5a8805713a4_104_new,"flixel.system.debug.Window","new",0x5aefd38a,"flixel.system.debug.Window.new","flixel/system/debug/Window.hx",104,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_176_destroy,"flixel.system.debug.Window","destroy",0x5fb40d24,"flixel.system.debug.Window.destroy","flixel/system/debug/Window.hx",176,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_230_resize,"flixel.system.debug.Window","resize",0x4ec62d0a,"flixel.system.debug.Window.resize","flixel/system/debug/Window.hx",230,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_243_reposition,"flixel.system.debug.Window","reposition",0x0fe38572,"flixel.system.debug.Window.reposition","flixel/system/debug/Window.hx",243,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_250_updateBounds,"flixel.system.debug.Window","updateBounds",0x436474f4,"flixel.system.debug.Window.updateBounds","flixel/system/debug/Window.hx",250,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_263_setVisible,"flixel.system.debug.Window","setVisible",0x6084b306,"flixel.system.debug.Window.setVisible","flixel/system/debug/Window.hx",263,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_280_toggleVisible,"flixel.system.debug.Window","toggleVisible",0x493d16e8,"flixel.system.debug.Window.toggleVisible","flixel/system/debug/Window.hx",280,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_285_putOnTop,"flixel.system.debug.Window","putOnTop",0xbb5abdfd,"flixel.system.debug.Window.putOnTop","flixel/system/debug/Window.hx",285,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_290_loadSaveData,"flixel.system.debug.Window","loadSaveData",0x8d0923e3,"flixel.system.debug.Window.loadSaveData","flixel/system/debug/Window.hx",290,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_303_initWindowsSave,"flixel.system.debug.Window","initWindowsSave",0x601bc45a,"flixel.system.debug.Window.initWindowsSave","flixel/system/debug/Window.hx",303,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_309_saveWindowVisibility,"flixel.system.debug.Window","saveWindowVisibility",0x18e2d0d5,"flixel.system.debug.Window.saveWindowVisibility","flixel/system/debug/Window.hx",309,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_318_update,"flixel.system.debug.Window","update",0xcd50591f,"flixel.system.debug.Window.update","flixel/system/debug/Window.hx",318,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_326_init,"flixel.system.debug.Window","init",0x33a1fca6,"flixel.system.debug.Window.init","flixel/system/debug/Window.hx",326,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_344_onMouseMove,"flixel.system.debug.Window","onMouseMove",0xdd6abbe1,"flixel.system.debug.Window.onMouseMove","flixel/system/debug/Window.hx",344,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_384_onMouseDown,"flixel.system.debug.Window","onMouseDown",0xd777d132,"flixel.system.debug.Window.onMouseDown","flixel/system/debug/Window.hx",384,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_406_onMouseUp,"flixel.system.debug.Window","onMouseUp",0x62a36b2b,"flixel.system.debug.Window.onMouseUp","flixel/system/debug/Window.hx",406,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_416_bound,"flixel.system.debug.Window","bound",0xf2ff51e8,"flixel.system.debug.Window.bound","flixel/system/debug/Window.hx",416,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_427_updateSize,"flixel.system.debug.Window","updateSize",0x6f89a180,"flixel.system.debug.Window.updateSize","flixel/system/debug/Window.hx",427,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_450_close,"flixel.system.debug.Window","close",0x8465b962,"flixel.system.debug.Window.close","flixel/system/debug/Window.hx",450,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_29_boot,"flixel.system.debug.Window","boot",0x2f0245c8,"flixel.system.debug.Window.boot","flixel/system/debug/Window.hx",29,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_31_boot,"flixel.system.debug.Window","boot",0x2f0245c8,"flixel.system.debug.Window.boot","flixel/system/debug/Window.hx",31,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_32_boot,"flixel.system.debug.Window","boot",0x2f0245c8,"flixel.system.debug.Window.boot","flixel/system/debug/Window.hx",32,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_33_boot,"flixel.system.debug.Window","boot",0x2f0245c8,"flixel.system.debug.Window.boot","flixel/system/debug/Window.hx",33,0xb8dfd4e5)
HX_LOCAL_STACK_FRAME(_hx_pos_4e51d5a8805713a4_38_boot,"flixel.system.debug.Window","boot",0x2f0245c8,"flixel.system.debug.Window.boot","flixel/system/debug/Window.hx",38,0xb8dfd4e5)
namespace flixel{
namespace _hx_system{
namespace debug{

void Window_obj::__construct(::String Title, ::openfl::display::BitmapData Icon,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height,::hx::Null< bool >  __o_Resizable, ::openfl::geom::Rectangle Bounds,::hx::Null< bool >  __o_Closable,::hx::Null< bool >  __o_AlwaysOnTop){
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            		bool Resizable = __o_Resizable.Default(true);
            		bool Closable = __o_Closable.Default(false);
            		bool AlwaysOnTop = __o_AlwaysOnTop.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_4e51d5a8805713a4_104_new)
HXLINE( 105)		super::__construct();
HXLINE( 107)		this->minSize =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,50,30);
HXLINE( 109)		this->_width = ::Std_obj::_hx_int(::Math_obj::abs(Width));
HXLINE( 110)		this->_height = ::Std_obj::_hx_int(::Math_obj::abs(Height));
HXLINE( 111)		this->updateBounds(Bounds);
HXLINE( 112)		this->_drag =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 113)		this->_resizable = Resizable;
HXLINE( 114)		this->_closable = Closable;
HXLINE( 115)		this->_alwaysOnTop = AlwaysOnTop;
HXLINE( 117)		this->_shadow =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,2,true,-16777216),null(),null());
HXLINE( 118)		this->_background =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,true,-580952225),null(),null());
HXLINE( 119)		this->_header =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,15,true,(int)-1157627904),null(),null());
HXLINE( 120)		 ::openfl::display::Bitmap _hx_tmp = this->_background;
HXDLIN( 120)		_hx_tmp->set_y(this->_header->get_height());
HXLINE( 122)		this->_title = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(2,-1,null(),null());
HXLINE( 123)		this->_title->set_alpha(((Float)0.8));
HXLINE( 124)		this->_title->set_text(Title);
HXLINE( 126)		this->addChild(this->_shadow);
HXLINE( 127)		this->addChild(this->_background);
HXLINE( 128)		this->addChild(this->_header);
HXLINE( 129)		this->addChild(this->_title);
HXLINE( 131)		if (::hx::IsNotNull( Icon )) {
HXLINE( 133)			::flixel::_hx_system::debug::DebuggerUtil_obj::fixSize(Icon);
HXLINE( 134)			this->_icon =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,Icon,null(),null());
HXLINE( 135)			this->_icon->set_x(( (Float)(5) ));
HXLINE( 136)			this->_icon->set_y(( (Float)(2) ));
HXLINE( 137)			this->_icon->set_alpha(((Float)0.8));
HXLINE( 138)			 ::openfl::text::TextField _hx_tmp = this->_title;
HXDLIN( 138)			Float _hx_tmp1 = this->_icon->get_x();
HXDLIN( 138)			_hx_tmp->set_x(((_hx_tmp1 + this->_icon->get_width()) + 2));
HXLINE( 139)			this->addChild(this->_icon);
            		}
HXLINE( 142)		if (this->_resizable) {
HXLINE( 144)			this->_handle =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::flixel::_hx_system::debug::DebuggerUtil_obj::fixSize( ::flixel::_hx_system::debug::_Window::GraphicWindowHandle_obj::__alloc( HX_CTX ,0,0,null(),null())),null(),null());
HXLINE( 145)			this->addChild(this->_handle);
            		}
HXLINE( 148)		if (this->_closable) {
HXLINE( 150)			this->_closeButton =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX , ::flixel::_hx_system::debug::GraphicCloseButton_obj::__alloc( HX_CTX ,0,0,null(),null()),this->close_dyn(),null());
HXLINE( 151)			this->_closeButton->set_alpha(((Float)0.8));
HXLINE( 152)			this->addChild(this->_closeButton);
            		}
            		else {
HXLINE( 156)			this->_id = ::flixel::_hx_system::debug::Window_obj::windowAmount;
HXLINE( 158)			this->loadSaveData();
HXLINE( 160)			::flixel::_hx_system::debug::Window_obj::windowAmount++;
            		}
HXLINE( 163)		bool _hx_tmp1;
HXDLIN( 163)		if ((this->_width == 0)) {
HXLINE( 163)			_hx_tmp1 = (this->_height != 0);
            		}
            		else {
HXLINE( 163)			_hx_tmp1 = true;
            		}
HXDLIN( 163)		if (_hx_tmp1) {
HXLINE( 165)			this->updateSize();
            		}
HXLINE( 167)		this->bound();
HXLINE( 169)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->init_dyn(),null(),null(),null());
            	}

Dynamic Window_obj::__CreateEmpty() { return new Window_obj; }

void *Window_obj::_hx_vtable = 0;

Dynamic Window_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Window_obj > _hx_result = new Window_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool Window_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x39123ef8 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Window_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_176_destroy)
HXLINE( 177)		this->minSize = null();
HXLINE( 178)		this->maxSize = null();
HXLINE( 179)		this->_bounds = null();
HXLINE( 180)		if (::hx::IsNotNull( this->_shadow )) {
HXLINE( 182)			this->removeChild(this->_shadow);
            		}
HXLINE( 184)		this->_shadow = null();
HXLINE( 185)		if (::hx::IsNotNull( this->_background )) {
HXLINE( 187)			this->removeChild(this->_background);
            		}
HXLINE( 189)		this->_background = null();
HXLINE( 190)		if (::hx::IsNotNull( this->_header )) {
HXLINE( 192)			this->removeChild(this->_header);
            		}
HXLINE( 194)		this->_header = null();
HXLINE( 195)		if (::hx::IsNotNull( this->_title )) {
HXLINE( 197)			this->removeChild(this->_title);
            		}
HXLINE( 199)		this->_title = null();
HXLINE( 200)		if (::hx::IsNotNull( this->_handle )) {
HXLINE( 202)			this->removeChild(this->_handle);
            		}
HXLINE( 204)		this->_handle = null();
HXLINE( 205)		this->_drag = null();
HXLINE( 206)		this->_closeButton = ( ( ::flixel::_hx_system::ui::FlxSystemButton)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_closeButton)) );
HXLINE( 208)		 ::openfl::display::Stage stage = ::openfl::Lib_obj::get_current()->stage;
HXLINE( 209)		if (stage->hasEventListener(HX_("mouseMove",d6,9b,b5,f4))) {
HXLINE( 211)			stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->onMouseMove_dyn(),null());
            		}
HXLINE( 213)		if (this->hasEventListener(HX_("mouseDown",27,b1,c2,ee))) {
HXLINE( 215)			this->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->onMouseDown_dyn(),null());
            		}
HXLINE( 217)		if (stage->hasEventListener(HX_("mouseUp",e0,f3,72,c0))) {
HXLINE( 219)			stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->onMouseUp_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,destroy,(void))

void Window_obj::resize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_230_resize)
HXLINE( 231)		this->_width = ::Std_obj::_hx_int(::Math_obj::abs(Width));
HXLINE( 232)		this->_height = ::Std_obj::_hx_int(::Math_obj::abs(Height));
HXLINE( 233)		this->updateSize();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

void Window_obj::reposition(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_243_reposition)
HXLINE( 244)		this->set_x(X);
HXLINE( 245)		this->set_y(Y);
HXLINE( 246)		this->bound();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,reposition,(void))

void Window_obj::updateBounds( ::openfl::geom::Rectangle Bounds){
            	HX_GC_STACKFRAME(&_hx_pos_4e51d5a8805713a4_250_updateBounds)
HXLINE( 251)		this->_bounds = Bounds;
HXLINE( 252)		if (::hx::IsNotNull( this->_bounds )) {
HXLINE( 254)			this->maxSize =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->_bounds->width,this->_bounds->height);
            		}
            		else {
HXLINE( 258)			this->maxSize =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,((Float)1.79e+308),((Float)1.79e+308));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,updateBounds,(void))

void Window_obj::setVisible(bool Value){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_263_setVisible)
HXLINE( 264)		this->set_visible(Value);
HXLINE( 267)		bool _hx_tmp;
HXDLIN( 267)		if (!(this->_closable)) {
HXLINE( 267)			 ::flixel::util::FlxSaveStatus _g = ::flixel::FlxG_obj::save->status;
HXDLIN( 267)			if ((_g->_hx_getIndex() == 1)) {
HXLINE( 267)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 267)				::String _g2 = _g->_hx_getString(1);
HXDLIN( 267)				_hx_tmp = true;
            			}
            			else {
HXLINE( 267)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 267)			_hx_tmp = false;
            		}
HXDLIN( 267)		if (_hx_tmp) {
HXLINE( 268)			this->saveWindowVisibility();
            		}
HXLINE( 271)		if (::hx::IsNotNull( this->toggleButton )) {
HXLINE( 272)			 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp = this->toggleButton;
HXDLIN( 272)			_hx_tmp->set_toggled(!(this->get_visible()));
            		}
HXLINE( 274)		bool _hx_tmp1;
HXDLIN( 274)		if (this->get_visible()) {
HXLINE( 274)			_hx_tmp1 = this->_alwaysOnTop;
            		}
            		else {
HXLINE( 274)			_hx_tmp1 = false;
            		}
HXDLIN( 274)		if (_hx_tmp1) {
HXLINE( 275)			this->parent->addChild(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setVisible,(void))

void Window_obj::toggleVisible(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_280_toggleVisible)
HXDLIN( 280)		this->setVisible(!(this->get_visible()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,toggleVisible,(void))

void Window_obj::putOnTop(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_285_putOnTop)
HXDLIN( 285)		this->parent->addChild(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,putOnTop,(void))

void Window_obj::loadSaveData(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_290_loadSaveData)
HXLINE( 291)		 ::flixel::util::FlxSaveStatus _g = ::flixel::FlxG_obj::save->status;
HXDLIN( 291)		bool _hx_tmp;
HXDLIN( 291)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 291)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 291)			::String _g2 = _g->_hx_getString(1);
HXDLIN( 291)			_hx_tmp = true;
            		}
            		else {
HXLINE( 291)			_hx_tmp = false;
            		}
HXDLIN( 291)		if (!(_hx_tmp)) {
HXLINE( 292)			return;
            		}
HXLINE( 294)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("windowSettings",f3,3c,19,85),::hx::paccDynamic) )) {
HXLINE( 296)			this->initWindowsSave();
HXLINE( 297)			::flixel::FlxG_obj::save->flush(null());
            		}
HXLINE( 299)		this->set_visible(( (bool)( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("windowSettings",f3,3c,19,85),::hx::paccDynamic))->__GetItem(this->_id)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,loadSaveData,(void))

void Window_obj::initWindowsSave(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_303_initWindowsSave)
HXLINE( 304)		int maxWindows = 10;
HXLINE( 305)		::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 305)		{
HXLINE( 305)			int _g1 = 0;
HXDLIN( 305)			int _g2 = maxWindows;
HXDLIN( 305)			while((_g1 < _g2)){
HXLINE( 305)				_g1 = (_g1 + 1);
HXDLIN( 305)				int _ = (_g1 - 1);
HXDLIN( 305)				_g->push(true);
            			}
            		}
HXDLIN( 305)		::flixel::FlxG_obj::save->data->__SetField(HX_("windowSettings",f3,3c,19,85),_g,::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,initWindowsSave,(void))

void Window_obj::saveWindowVisibility(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_309_saveWindowVisibility)
HXLINE( 310)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("windowSettings",f3,3c,19,85),::hx::paccDynamic) )) {
HXLINE( 311)			this->initWindowsSave();
            		}
HXLINE( 313)		 ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("windowSettings",f3,3c,19,85),::hx::paccDynamic))->__SetItem(this->_id,this->get_visible());
HXLINE( 314)		::flixel::FlxG_obj::save->flush(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,saveWindowVisibility,(void))

void Window_obj::update(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_318_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,update,(void))

void Window_obj::init( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_326_init)
HXLINE( 327)		if (::hx::IsNull( this->stage )) {
HXLINE( 329)			return;
            		}
HXLINE( 331)		this->removeEventListener(HX_("enterFrame",f5,03,50,02),this->init_dyn(),null());
HXLINE( 333)		this->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->onMouseMove_dyn(),null(),null(),null());
HXLINE( 334)		this->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->onMouseUp_dyn(),null(),null(),null());
HXLINE( 337)		this->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->onMouseDown_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,init,(void))

void Window_obj::onMouseMove( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_344_onMouseMove)
HXLINE( 346)		Float mouseX;
HXDLIN( 346)		if ((this->get_mouseX() < 0)) {
HXLINE( 346)			mouseX = ( (Float)(0) );
            		}
            		else {
HXLINE( 346)			mouseX = this->get_mouseX();
            		}
HXLINE( 347)		Float mouseY;
HXDLIN( 347)		if ((this->get_mouseY() < 0)) {
HXLINE( 347)			mouseY = ( (Float)(0) );
            		}
            		else {
HXLINE( 347)			mouseY = this->get_mouseY();
            		}
HXLINE( 349)		if (!(this->parent->get_visible())) {
HXLINE( 351)			this->_overHandle = (this->_overHeader = false);
HXLINE( 352)			return;
            		}
HXLINE( 355)		if (this->_dragging) {
HXLINE( 357)			this->_overHeader = true;
HXLINE( 358)			Float _hx_tmp = this->parent->get_mouseX();
HXDLIN( 358)			Float _hx_tmp1 = (_hx_tmp - this->_drag->x);
HXDLIN( 358)			Float _hx_tmp2 = this->parent->get_mouseY();
HXDLIN( 358)			this->reposition(_hx_tmp1,(_hx_tmp2 - this->_drag->y));
            		}
            		else {
HXLINE( 360)			if (this->_resizing) {
HXLINE( 362)				this->_overHandle = true;
HXLINE( 363)				this->resize((mouseX - this->_drag->x),(mouseY - this->_drag->y));
            			}
            			else {
HXLINE( 365)				bool _hx_tmp;
HXDLIN( 365)				bool _hx_tmp1;
HXDLIN( 365)				bool _hx_tmp2;
HXDLIN( 365)				if ((mouseX >= 0)) {
HXLINE( 365)					_hx_tmp2 = (mouseX <= this->_width);
            				}
            				else {
HXLINE( 365)					_hx_tmp2 = false;
            				}
HXDLIN( 365)				if (_hx_tmp2) {
HXLINE( 365)					_hx_tmp1 = (mouseY >= 0);
            				}
            				else {
HXLINE( 365)					_hx_tmp1 = false;
            				}
HXDLIN( 365)				if (_hx_tmp1) {
HXLINE( 365)					_hx_tmp = (mouseY <= this->_height);
            				}
            				else {
HXLINE( 365)					_hx_tmp = false;
            				}
HXDLIN( 365)				if (_hx_tmp) {
HXLINE( 367)					bool _hx_tmp;
HXDLIN( 367)					if ((mouseX <= this->_header->get_width())) {
HXLINE( 367)						_hx_tmp = (mouseY <= this->_header->get_height());
            					}
            					else {
HXLINE( 367)						_hx_tmp = false;
            					}
HXDLIN( 367)					this->_overHeader = _hx_tmp;
HXLINE( 368)					if (this->_resizable) {
HXLINE( 370)						bool _hx_tmp;
HXDLIN( 370)						int _hx_tmp1 = this->_width;
HXDLIN( 370)						if ((mouseX >= (( (Float)(_hx_tmp1) ) - this->_handle->get_width()))) {
HXLINE( 370)							int _hx_tmp1 = this->_height;
HXDLIN( 370)							_hx_tmp = (mouseY >= (( (Float)(_hx_tmp1) ) - this->_handle->get_height()));
            						}
            						else {
HXLINE( 370)							_hx_tmp = false;
            						}
HXDLIN( 370)						this->_overHandle = _hx_tmp;
            					}
            				}
            				else {
HXLINE( 375)					this->_overHandle = (this->_overHeader = false);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseMove,(void))

void Window_obj::onMouseDown( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_384_onMouseDown)
HXDLIN( 384)		if (this->_overHeader) {
HXLINE( 386)			if (this->_alwaysOnTop) {
HXLINE( 387)				this->parent->addChild(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 388)			this->_dragging = true;
HXLINE( 389)			this->_drag->x = this->get_mouseX();
HXLINE( 390)			this->_drag->y = this->get_mouseY();
            		}
            		else {
HXLINE( 392)			if (this->_overHandle) {
HXLINE( 394)				if (this->_alwaysOnTop) {
HXLINE( 395)					this->parent->addChild(::hx::ObjectPtr<OBJ_>(this));
            				}
HXLINE( 396)				this->_resizing = true;
HXLINE( 397)				int _hx_tmp = this->_width;
HXDLIN( 397)				Float _hx_tmp1 = this->get_mouseX();
HXDLIN( 397)				this->_drag->x = (( (Float)(_hx_tmp) ) - _hx_tmp1);
HXLINE( 398)				int _hx_tmp2 = this->_height;
HXDLIN( 398)				Float _hx_tmp3 = this->get_mouseY();
HXDLIN( 398)				this->_drag->y = (( (Float)(_hx_tmp2) ) - _hx_tmp3);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseDown,(void))

void Window_obj::onMouseUp( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_406_onMouseUp)
HXLINE( 407)		this->_dragging = false;
HXLINE( 408)		this->_resizing = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseUp,(void))

void Window_obj::bound(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_416_bound)
HXDLIN( 416)		if (::hx::IsNotNull( this->_bounds )) {
HXLINE( 418)			Float Value = this->get_x();
HXDLIN( 418)			 ::Dynamic Min = this->_bounds->get_left();
HXDLIN( 418)			Float Max = this->_bounds->get_right();
HXDLIN( 418)			 ::Dynamic Max1 = (Max - ( (Float)(this->_width) ));
HXDLIN( 418)			Float lowerBound;
HXDLIN( 418)			bool lowerBound1;
HXDLIN( 418)			if (::hx::IsNotNull( Min )) {
HXLINE( 418)				lowerBound1 = ::hx::IsLess( Value,Min );
            			}
            			else {
HXLINE( 418)				lowerBound1 = false;
            			}
HXDLIN( 418)			if (lowerBound1) {
HXLINE( 418)				lowerBound = ( (Float)(Min) );
            			}
            			else {
HXLINE( 418)				lowerBound = Value;
            			}
HXDLIN( 418)			Float _hx_tmp;
HXDLIN( 418)			bool _hx_tmp1;
HXDLIN( 418)			if (::hx::IsNotNull( Max1 )) {
HXLINE( 418)				_hx_tmp1 = ::hx::IsGreater( lowerBound,Max1 );
            			}
            			else {
HXLINE( 418)				_hx_tmp1 = false;
            			}
HXDLIN( 418)			if (_hx_tmp1) {
HXLINE( 418)				_hx_tmp = ( (Float)(Max1) );
            			}
            			else {
HXLINE( 418)				_hx_tmp = lowerBound;
            			}
HXDLIN( 418)			this->set_x(_hx_tmp);
HXLINE( 419)			Float Value1 = this->get_y();
HXDLIN( 419)			 ::Dynamic Min1 = this->_bounds->get_top();
HXDLIN( 419)			Float Max2 = this->_bounds->get_bottom();
HXDLIN( 419)			 ::Dynamic Max3 = (Max2 - ( (Float)(this->_height) ));
HXDLIN( 419)			Float lowerBound2;
HXDLIN( 419)			bool lowerBound3;
HXDLIN( 419)			if (::hx::IsNotNull( Min1 )) {
HXLINE( 419)				lowerBound3 = ::hx::IsLess( Value1,Min1 );
            			}
            			else {
HXLINE( 419)				lowerBound3 = false;
            			}
HXDLIN( 419)			if (lowerBound3) {
HXLINE( 419)				lowerBound2 = ( (Float)(Min1) );
            			}
            			else {
HXLINE( 419)				lowerBound2 = Value1;
            			}
HXDLIN( 419)			Float _hx_tmp2;
HXDLIN( 419)			bool _hx_tmp3;
HXDLIN( 419)			if (::hx::IsNotNull( Max3 )) {
HXLINE( 419)				_hx_tmp3 = ::hx::IsGreater( lowerBound2,Max3 );
            			}
            			else {
HXLINE( 419)				_hx_tmp3 = false;
            			}
HXDLIN( 419)			if (_hx_tmp3) {
HXLINE( 419)				_hx_tmp2 = ( (Float)(Max3) );
            			}
            			else {
HXLINE( 419)				_hx_tmp2 = lowerBound2;
            			}
HXDLIN( 419)			this->set_y(_hx_tmp2);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,bound,(void))

void Window_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_427_updateSize)
HXLINE( 428)		Float Value = ( (Float)(this->_width) );
HXDLIN( 428)		 ::Dynamic Min = this->minSize->x;
HXDLIN( 428)		 ::Dynamic Max = this->maxSize->x;
HXDLIN( 428)		Float lowerBound;
HXDLIN( 428)		bool lowerBound1;
HXDLIN( 428)		if (::hx::IsNotNull( Min )) {
HXLINE( 428)			lowerBound1 = ::hx::IsLess( Value,Min );
            		}
            		else {
HXLINE( 428)			lowerBound1 = false;
            		}
HXDLIN( 428)		if (lowerBound1) {
HXLINE( 428)			lowerBound = ( (Float)(Min) );
            		}
            		else {
HXLINE( 428)			lowerBound = Value;
            		}
HXDLIN( 428)		Float _hx_tmp;
HXDLIN( 428)		bool _hx_tmp1;
HXDLIN( 428)		if (::hx::IsNotNull( Max )) {
HXLINE( 428)			_hx_tmp1 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 428)			_hx_tmp1 = false;
            		}
HXDLIN( 428)		if (_hx_tmp1) {
HXLINE( 428)			_hx_tmp = ( (Float)(Max) );
            		}
            		else {
HXLINE( 428)			_hx_tmp = lowerBound;
            		}
HXDLIN( 428)		this->_width = ::Std_obj::_hx_int(_hx_tmp);
HXLINE( 429)		Float Value1 = ( (Float)(this->_height) );
HXDLIN( 429)		 ::Dynamic Min1 = this->minSize->y;
HXDLIN( 429)		 ::Dynamic Max1 = this->maxSize->y;
HXDLIN( 429)		Float lowerBound2;
HXDLIN( 429)		bool lowerBound3;
HXDLIN( 429)		if (::hx::IsNotNull( Min1 )) {
HXLINE( 429)			lowerBound3 = ::hx::IsLess( Value1,Min1 );
            		}
            		else {
HXLINE( 429)			lowerBound3 = false;
            		}
HXDLIN( 429)		if (lowerBound3) {
HXLINE( 429)			lowerBound2 = ( (Float)(Min1) );
            		}
            		else {
HXLINE( 429)			lowerBound2 = Value1;
            		}
HXDLIN( 429)		Float _hx_tmp2;
HXDLIN( 429)		bool _hx_tmp3;
HXDLIN( 429)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 429)			_hx_tmp3 = ::hx::IsGreater( lowerBound2,Max1 );
            		}
            		else {
HXLINE( 429)			_hx_tmp3 = false;
            		}
HXDLIN( 429)		if (_hx_tmp3) {
HXLINE( 429)			_hx_tmp2 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 429)			_hx_tmp2 = lowerBound2;
            		}
HXDLIN( 429)		this->_height = ::Std_obj::_hx_int(_hx_tmp2);
HXLINE( 431)		this->_header->set_scaleX(( (Float)(this->_width) ));
HXLINE( 432)		this->_background->set_scaleX(( (Float)(this->_width) ));
HXLINE( 433)		 ::openfl::display::Bitmap _hx_tmp4 = this->_background;
HXDLIN( 433)		int _hx_tmp5 = this->_height;
HXDLIN( 433)		_hx_tmp4->set_scaleY((( (Float)(_hx_tmp5) ) - this->_header->get_height()));
HXLINE( 434)		this->_shadow->set_scaleX(( (Float)(this->_width) ));
HXLINE( 435)		this->_shadow->set_y(( (Float)(this->_height) ));
HXLINE( 436)		this->_title->set_width(( (Float)((this->_width - 4)) ));
HXLINE( 437)		if (this->_resizable) {
HXLINE( 439)			 ::openfl::display::Bitmap _hx_tmp = this->_handle;
HXDLIN( 439)			int _hx_tmp1 = this->_width;
HXDLIN( 439)			_hx_tmp->set_x((( (Float)(_hx_tmp1) ) - this->_handle->get_width()));
HXLINE( 440)			 ::openfl::display::Bitmap _hx_tmp2 = this->_handle;
HXDLIN( 440)			int _hx_tmp3 = this->_height;
HXDLIN( 440)			_hx_tmp2->set_y((( (Float)(_hx_tmp3) ) - this->_handle->get_height()));
            		}
HXLINE( 442)		if (::hx::IsNotNull( this->_closeButton )) {
HXLINE( 444)			 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp = this->_closeButton;
HXDLIN( 444)			int _hx_tmp1 = this->_width;
HXDLIN( 444)			_hx_tmp->set_x(((( (Float)(_hx_tmp1) ) - this->_closeButton->get_width()) - ( (Float)(3) )));
HXLINE( 445)			this->_closeButton->set_y(( (Float)(3) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,updateSize,(void))

void Window_obj::close(){
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_450_close)
HXLINE( 451)		this->destroy();
HXLINE( 453)		{
HXLINE( 453)			 ::flixel::_hx_system::debug::FlxDebugger _this = ::flixel::FlxG_obj::game->debugger;
HXDLIN( 453)			if (_this->contains(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE( 453)				_this->removeChild(::hx::ObjectPtr<OBJ_>(this));
            			}
HXDLIN( 453)			{
HXLINE( 453)				::Array< ::Dynamic> array = _this->_windows;
HXDLIN( 453)				int index = array->indexOf(::hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 453)				if ((index != -1)) {
HXLINE( 453)					array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::_hx_system::debug::Window >();
HXDLIN( 453)					array->pop().StaticCast<  ::flixel::_hx_system::debug::Window >();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

int Window_obj::BG_COLOR;

int Window_obj::HEADER_COLOR;

Float Window_obj::HEADER_ALPHA;

int Window_obj::HEADER_HEIGHT;

int Window_obj::windowAmount;


::hx::ObjectPtr< Window_obj > Window_obj::__new(::String Title, ::openfl::display::BitmapData Icon,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height,::hx::Null< bool >  __o_Resizable, ::openfl::geom::Rectangle Bounds,::hx::Null< bool >  __o_Closable,::hx::Null< bool >  __o_AlwaysOnTop) {
	::hx::ObjectPtr< Window_obj > __this = new Window_obj();
	__this->__construct(Title,Icon,__o_Width,__o_Height,__o_Resizable,Bounds,__o_Closable,__o_AlwaysOnTop);
	return __this;
}

::hx::ObjectPtr< Window_obj > Window_obj::__alloc(::hx::Ctx *_hx_ctx,::String Title, ::openfl::display::BitmapData Icon,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height,::hx::Null< bool >  __o_Resizable, ::openfl::geom::Rectangle Bounds,::hx::Null< bool >  __o_Closable,::hx::Null< bool >  __o_AlwaysOnTop) {
	Window_obj *__this = (Window_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Window_obj), true, "flixel.system.debug.Window"));
	*(void **)__this = Window_obj::_hx_vtable;
	__this->__construct(Title,Icon,__o_Width,__o_Height,__o_Resizable,Bounds,__o_Closable,__o_AlwaysOnTop);
	return __this;
}

Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(minSize,"minSize");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(toggleButton,"toggleButton");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_handle,"_handle");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_closeButton,"_closeButton");
	HX_MARK_MEMBER_NAME(_overHeader,"_overHeader");
	HX_MARK_MEMBER_NAME(_overHandle,"_overHandle");
	HX_MARK_MEMBER_NAME(_drag,"_drag");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_resizing,"_resizing");
	HX_MARK_MEMBER_NAME(_resizable,"_resizable");
	HX_MARK_MEMBER_NAME(_closable,"_closable");
	HX_MARK_MEMBER_NAME(_alwaysOnTop,"_alwaysOnTop");
	HX_MARK_MEMBER_NAME(_id,"_id");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minSize,"minSize");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(toggleButton,"toggleButton");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_handle,"_handle");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_closeButton,"_closeButton");
	HX_VISIT_MEMBER_NAME(_overHeader,"_overHeader");
	HX_VISIT_MEMBER_NAME(_overHandle,"_overHandle");
	HX_VISIT_MEMBER_NAME(_drag,"_drag");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_resizing,"_resizing");
	HX_VISIT_MEMBER_NAME(_resizable,"_resizable");
	HX_VISIT_MEMBER_NAME(_closable,"_closable");
	HX_VISIT_MEMBER_NAME(_alwaysOnTop,"_alwaysOnTop");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Window_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return ::hx::Val( _id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return ::hx::Val( _icon ); }
		if (HX_FIELD_EQ(inName,"_drag") ) { return ::hx::Val( _drag ); }
		if (HX_FIELD_EQ(inName,"bound") ) { return ::hx::Val( bound_dyn() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"_title") ) { return ::hx::Val( _title ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minSize") ) { return ::hx::Val( minSize ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return ::hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return ::hx::Val( _bounds ); }
		if (HX_FIELD_EQ(inName,"_header") ) { return ::hx::Val( _header ); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return ::hx::Val( _shadow ); }
		if (HX_FIELD_EQ(inName,"_handle") ) { return ::hx::Val( _handle ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putOnTop") ) { return ::hx::Val( putOnTop_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { return ::hx::Val( _dragging ); }
		if (HX_FIELD_EQ(inName,"_resizing") ) { return ::hx::Val( _resizing ); }
		if (HX_FIELD_EQ(inName,"_closable") ) { return ::hx::Val( _closable ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { return ::hx::Val( _resizable ); }
		if (HX_FIELD_EQ(inName,"reposition") ) { return ::hx::Val( reposition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return ::hx::Val( setVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return ::hx::Val( _background ); }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { return ::hx::Val( _overHeader ); }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { return ::hx::Val( _overHandle ); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return ::hx::Val( onMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toggleButton") ) { return ::hx::Val( toggleButton ); }
		if (HX_FIELD_EQ(inName,"_closeButton") ) { return ::hx::Val( _closeButton ); }
		if (HX_FIELD_EQ(inName,"_alwaysOnTop") ) { return ::hx::Val( _alwaysOnTop ); }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadSaveData") ) { return ::hx::Val( loadSaveData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return ::hx::Val( toggleVisible_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initWindowsSave") ) { return ::hx::Val( initWindowsSave_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"saveWindowVisibility") ) { return ::hx::Val( saveWindowVisibility_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Window_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"windowAmount") ) { outValue = ( windowAmount ); return true; }
	}
	return false;
}

::hx::Val Window_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drag") ) { _drag=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minSize") ) { minSize=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_handle") ) { _handle=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { _resizing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_closable") ) { _closable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { _resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { _overHeader=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { _overHandle=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toggleButton") ) { toggleButton=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_closeButton") ) { _closeButton=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alwaysOnTop") ) { _alwaysOnTop=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"windowAmount") ) { windowAmount=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("minSize",73,0f,5d,3d));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	outFields->push(HX_("toggleButton",a6,7c,fa,7f));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_bounds",14,98,94,d4));
	outFields->push(HX_("_background",0d,61,a7,f8));
	outFields->push(HX_("_header",2c,1b,77,6b));
	outFields->push(HX_("_shadow",7f,d9,97,8b));
	outFields->push(HX_("_title",d9,5c,22,0c));
	outFields->push(HX_("_handle",47,95,74,26));
	outFields->push(HX_("_icon",58,03,c4,f8));
	outFields->push(HX_("_closeButton",cb,35,3a,fa));
	outFields->push(HX_("_overHeader",20,93,24,b5));
	outFields->push(HX_("_overHandle",3b,0d,22,70));
	outFields->push(HX_("_drag",d3,47,81,f5));
	outFields->push(HX_("_dragging",2e,34,22,7f));
	outFields->push(HX_("_resizing",90,1f,16,e9));
	outFields->push(HX_("_resizable",2c,b3,f2,04));
	outFields->push(HX_("_closable",86,63,40,ca));
	outFields->push(HX_("_alwaysOnTop",68,fb,5c,7c));
	outFields->push(HX_("_id",fa,71,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Window_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(Window_obj,minSize),HX_("minSize",73,0f,5d,3d)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(Window_obj,maxSize),HX_("maxSize",85,f9,83,cc)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(Window_obj,toggleButton),HX_("toggleButton",a6,7c,fa,7f)},
	{::hx::fsInt,(int)offsetof(Window_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(Window_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Window_obj,_bounds),HX_("_bounds",14,98,94,d4)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(Window_obj,_background),HX_("_background",0d,61,a7,f8)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(Window_obj,_header),HX_("_header",2c,1b,77,6b)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(Window_obj,_shadow),HX_("_shadow",7f,d9,97,8b)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Window_obj,_title),HX_("_title",d9,5c,22,0c)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(Window_obj,_handle),HX_("_handle",47,95,74,26)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(Window_obj,_icon),HX_("_icon",58,03,c4,f8)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(Window_obj,_closeButton),HX_("_closeButton",cb,35,3a,fa)},
	{::hx::fsBool,(int)offsetof(Window_obj,_overHeader),HX_("_overHeader",20,93,24,b5)},
	{::hx::fsBool,(int)offsetof(Window_obj,_overHandle),HX_("_overHandle",3b,0d,22,70)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(Window_obj,_drag),HX_("_drag",d3,47,81,f5)},
	{::hx::fsBool,(int)offsetof(Window_obj,_dragging),HX_("_dragging",2e,34,22,7f)},
	{::hx::fsBool,(int)offsetof(Window_obj,_resizing),HX_("_resizing",90,1f,16,e9)},
	{::hx::fsBool,(int)offsetof(Window_obj,_resizable),HX_("_resizable",2c,b3,f2,04)},
	{::hx::fsBool,(int)offsetof(Window_obj,_closable),HX_("_closable",86,63,40,ca)},
	{::hx::fsBool,(int)offsetof(Window_obj,_alwaysOnTop),HX_("_alwaysOnTop",68,fb,5c,7c)},
	{::hx::fsInt,(int)offsetof(Window_obj,_id),HX_("_id",fa,71,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Window_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Window_obj::BG_COLOR,HX_("BG_COLOR",09,4c,a7,0b)},
	{::hx::fsInt,(void *) &Window_obj::HEADER_COLOR,HX_("HEADER_COLOR",d1,cd,7c,95)},
	{::hx::fsFloat,(void *) &Window_obj::HEADER_ALPHA,HX_("HEADER_ALPHA",cc,03,b7,6c)},
	{::hx::fsInt,(void *) &Window_obj::HEADER_HEIGHT,HX_("HEADER_HEIGHT",99,8b,7c,73)},
	{::hx::fsInt,(void *) &Window_obj::windowAmount,HX_("windowAmount",e8,ad,73,9c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Window_obj_sMemberFields[] = {
	HX_("minSize",73,0f,5d,3d),
	HX_("maxSize",85,f9,83,cc),
	HX_("toggleButton",a6,7c,fa,7f),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_bounds",14,98,94,d4),
	HX_("_background",0d,61,a7,f8),
	HX_("_header",2c,1b,77,6b),
	HX_("_shadow",7f,d9,97,8b),
	HX_("_title",d9,5c,22,0c),
	HX_("_handle",47,95,74,26),
	HX_("_icon",58,03,c4,f8),
	HX_("_closeButton",cb,35,3a,fa),
	HX_("_overHeader",20,93,24,b5),
	HX_("_overHandle",3b,0d,22,70),
	HX_("_drag",d3,47,81,f5),
	HX_("_dragging",2e,34,22,7f),
	HX_("_resizing",90,1f,16,e9),
	HX_("_resizable",2c,b3,f2,04),
	HX_("_closable",86,63,40,ca),
	HX_("_alwaysOnTop",68,fb,5c,7c),
	HX_("_id",fa,71,48,00),
	HX_("destroy",fa,2c,86,24),
	HX_("resize",f4,59,7b,08),
	HX_("reposition",5c,6f,62,a5),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("setVisible",f0,9c,03,f6),
	HX_("toggleVisible",3e,bb,e1,53),
	HX_("putOnTop",67,79,64,2e),
	HX_("loadSaveData",4d,dc,85,af),
	HX_("initWindowsSave",30,aa,72,d8),
	HX_("saveWindowVisibility",3f,03,cd,f2),
	HX_("update",09,86,05,87),
	HX_("init",10,3b,bb,45),
	HX_("onMouseMove",b7,7e,f8,16),
	HX_("onMouseDown",08,94,05,11),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("bound",3e,b0,fc,b6),
	HX_("updateSize",6a,8b,08,05),
	HX_("close",b8,17,63,48),
	::String(null()) };

static void Window_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_COLOR,"HEADER_COLOR");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_ALPHA,"HEADER_ALPHA");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_HEIGHT,"HEADER_HEIGHT");
	HX_MARK_MEMBER_NAME(Window_obj::windowAmount,"windowAmount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Window_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_COLOR,"HEADER_COLOR");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_ALPHA,"HEADER_ALPHA");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_HEIGHT,"HEADER_HEIGHT");
	HX_VISIT_MEMBER_NAME(Window_obj::windowAmount,"windowAmount");
};

#endif

::hx::Class Window_obj::__mClass;

static ::String Window_obj_sStaticFields[] = {
	HX_("BG_COLOR",09,4c,a7,0b),
	HX_("HEADER_COLOR",d1,cd,7c,95),
	HX_("HEADER_ALPHA",cc,03,b7,6c),
	HX_("HEADER_HEIGHT",99,8b,7c,73),
	HX_("windowAmount",e8,ad,73,9c),
	::String(null())
};

void Window_obj::__register()
{
	Window_obj _hx_dummy;
	Window_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.Window",98,06,51,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Window_obj::__GetStatic;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = Window_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Window_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Window_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Window_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Window_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Window_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Window_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Window_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_29_boot)
HXDLIN(  29)		BG_COLOR = -580952225;
            	}
{
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_31_boot)
HXDLIN(  31)		HEADER_COLOR = (int)-1157627904;
            	}
{
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_32_boot)
HXDLIN(  32)		HEADER_ALPHA = ((Float)0.8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_33_boot)
HXDLIN(  33)		HEADER_HEIGHT = 15;
            	}
{
            	HX_STACKFRAME(&_hx_pos_4e51d5a8805713a4_38_boot)
HXDLIN(  38)		windowAmount = 0;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
