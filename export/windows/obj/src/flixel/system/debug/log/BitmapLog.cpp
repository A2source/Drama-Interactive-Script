#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowLeft
#include <flixel/system/debug/GraphicArrowLeft.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowRight
#include <flixel/system/debug/GraphicArrowRight.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_BitmapLog
#include <flixel/system/debug/log/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_28_new,"flixel.system.debug.log.BitmapLog","new",0x0bf20835,"flixel.system.debug.log.BitmapLog.new","flixel/system/debug/log/BitmapLog.hx",28,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_100_createHeaderUI,"flixel.system.debug.log.BitmapLog","createHeaderUI",0xe86f6e88,"flixel.system.debug.log.BitmapLog.createHeaderUI","flixel/system/debug/log/BitmapLog.hx",100,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_87_createHeaderUI,"flixel.system.debug.log.BitmapLog","createHeaderUI",0xe86f6e88,"flixel.system.debug.log.BitmapLog.createHeaderUI","flixel/system/debug/log/BitmapLog.hx",87,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_118_createFooterUI,"flixel.system.debug.log.BitmapLog","createFooterUI",0xe5498316,"flixel.system.debug.log.BitmapLog.createFooterUI","flixel/system/debug/log/BitmapLog.hx",118,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_131_destroy,"flixel.system.debug.log.BitmapLog","destroy",0x0565734f,"flixel.system.debug.log.BitmapLog.destroy","flixel/system/debug/log/BitmapLog.hx",131,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_153_update,"flixel.system.debug.log.BitmapLog","update",0xf9ae2154,"flixel.system.debug.log.BitmapLog.update","flixel/system/debug/log/BitmapLog.hx",153,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_163_updateSize,"flixel.system.debug.log.BitmapLog","updateSize",0x36a82835,"flixel.system.debug.log.BitmapLog.updateSize","flixel/system/debug/log/BitmapLog.hx",163,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_170_resize,"flixel.system.debug.log.BitmapLog","resize",0x7b23f53f,"flixel.system.debug.log.BitmapLog.resize","flixel/system/debug/log/BitmapLog.hx",170,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_193_resizeTexts,"flixel.system.debug.log.BitmapLog","resizeTexts",0x86a66167,"flixel.system.debug.log.BitmapLog.resizeTexts","flixel/system/debug/log/BitmapLog.hx",193,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_212_next,"flixel.system.debug.log.BitmapLog","next",0x67d5277e,"flixel.system.debug.log.BitmapLog.next","flixel/system/debug/log/BitmapLog.hx",212,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_221_previous,"flixel.system.debug.log.BitmapLog","previous",0x062f0042,"flixel.system.debug.log.BitmapLog.previous","flixel/system/debug/log/BitmapLog.hx",221,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_227_resetSettings,"flixel.system.debug.log.BitmapLog","resetSettings",0xbb149de7,"flixel.system.debug.log.BitmapLog.resetSettings","flixel/system/debug/log/BitmapLog.hx",227,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_236_add,"flixel.system.debug.log.BitmapLog","add",0x0be829f6,"flixel.system.debug.log.BitmapLog.add","flixel/system/debug/log/BitmapLog.hx",236,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_250_clearAt,"flixel.system.debug.log.BitmapLog","clearAt",0x8c242e35,"flixel.system.debug.log.BitmapLog.clearAt","flixel/system/debug/log/BitmapLog.hx",250,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_268_clear,"flixel.system.debug.log.BitmapLog","clear",0x21d708a2,"flixel.system.debug.log.BitmapLog.clear","flixel/system/debug/log/BitmapLog.hx",268,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_283_refreshCanvas,"flixel.system.debug.log.BitmapLog","refreshCanvas",0xb5b52d28,"flixel.system.debug.log.BitmapLog.refreshCanvas","flixel/system/debug/log/BitmapLog.hx",283,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_329_refreshTexts,"flixel.system.debug.log.BitmapLog","refreshTexts",0xaf73ecd6,"flixel.system.debug.log.BitmapLog.refreshTexts","flixel/system/debug/log/BitmapLog.hx",329,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_341_drawBoundingBox,"flixel.system.debug.log.BitmapLog","drawBoundingBox",0xaffc5ab8,"flixel.system.debug.log.BitmapLog.drawBoundingBox","flixel/system/debug/log/BitmapLog.hx",341,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_350_onMouseWheel,"flixel.system.debug.log.BitmapLog","onMouseWheel",0x4e236fc0,"flixel.system.debug.log.BitmapLog.onMouseWheel","flixel/system/debug/log/BitmapLog.hx",350,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_356_onMiddleDown,"flixel.system.debug.log.BitmapLog","onMiddleDown",0xe4b70de1,"flixel.system.debug.log.BitmapLog.onMiddleDown","flixel/system/debug/log/BitmapLog.hx",356,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_363_onMiddleUp,"flixel.system.debug.log.BitmapLog","onMiddleUp",0x4f90ce1a,"flixel.system.debug.log.BitmapLog.onMiddleUp","flixel/system/debug/log/BitmapLog.hx",363,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_367_set_zoom,"flixel.system.debug.log.BitmapLog","set_zoom",0x618efc1b,"flixel.system.debug.log.BitmapLog.set_zoom","flixel/system/debug/log/BitmapLog.hx",367,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_377_get__canvas,"flixel.system.debug.log.BitmapLog","get__canvas",0xe6bd5b63,"flixel.system.debug.log.BitmapLog.get__canvas","flixel/system/debug/log/BitmapLog.hx",377,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_382_get__curEntry,"flixel.system.debug.log.BitmapLog","get__curEntry",0xc066721d,"flixel.system.debug.log.BitmapLog.get__curEntry","flixel/system/debug/log/BitmapLog.hx",382,0x69d60e7d)
HX_LOCAL_STACK_FRAME(_hx_pos_81c1dd4d2eac0533_387_get__curBitmap,"flixel.system.debug.log.BitmapLog","get__curBitmap",0x85268be4,"flixel.system.debug.log.BitmapLog.get__curBitmap","flixel/system/debug/log/BitmapLog.hx",387,0x69d60e7d)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace log{

void BitmapLog_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_28_new)
HXLINE(  48)		this->_middleMouseDown = false;
HXLINE(  41)		this->_matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  40)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  40)		point->_inPool = false;
HXDLIN(  40)		this->_curMouseOffset = point;
HXLINE(  39)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  39)		point1->_inPool = false;
HXDLIN(  39)		this->_lastMousePos = point1;
HXLINE(  38)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  38)		point2->_inPool = false;
HXDLIN(  38)		this->_point = point2;
HXLINE(  35)		this->_curIndex = 0;
HXLINE(  34)		this->_entries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		this->zoom = ((Float)1);
HXLINE(  54)		super::__construct(HX_("BitmapLog",b5,3b,ae,68), ::flixel::_hx_system::debug::GraphicBitmapLog_obj::__alloc( HX_CTX ,0,0,null(),null()),null(),null(),null(),null(),null(),null());
HXLINE(  56)		this->minSize->x = ( (Float)(165) );
HXLINE(  57)		this->minSize->y = ( (Float)(31) );
HXLINE(  59)		int _hx_tmp = ::Std_obj::_hx_int(this->get_width());
HXDLIN(  59)		this->_canvasBitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int((this->get_height() - ( (Float)(15) ))),true,0),null(),null());
HXLINE(  60)		this->_canvasBitmap->set_x(( (Float)(0) ));
HXLINE(  61)		this->_canvasBitmap->set_y(( (Float)(15) ));
HXLINE(  62)		this->addChild(this->_canvasBitmap);
HXLINE(  64)		this->createHeaderUI();
HXLINE(  65)		this->createFooterUI();
HXLINE(  67)		this->setVisible(false);
HXLINE(  70)		this->addEventListener(HX_("mouseWheel",36,28,87,e7),this->onMouseWheel_dyn(),null(),null(),null());
HXLINE(  72)		this->addEventListener(HX_("middleMouseDown",12,2b,fe,01),this->onMiddleDown_dyn(),null(),null(),null());
HXLINE(  73)		this->addEventListener(HX_("middleMouseUp",0b,8d,f5,3a),this->onMiddleUp_dyn(),null(),null(),null());
HXLINE(  77)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->clear_dyn());
HXLINE(  80)		this->removeChild(this->_handle);
HXLINE(  81)		this->addChild(this->_handle);
HXLINE(  83)		this->removeChild(this->_shadow);
            	}

Dynamic BitmapLog_obj::__CreateEmpty() { return new BitmapLog_obj; }

void *BitmapLog_obj::_hx_vtable = 0;

Dynamic BitmapLog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapLog_obj > _hx_result = new BitmapLog_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapLog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2f4a4e2d) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x2f4a4e2d;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x39123ef8 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void BitmapLog_obj::createHeaderUI(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::_hx_system::debug::log::BitmapLog,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_100_createHeaderUI)
HXLINE( 101)			{
HXLINE( 101)				_gthis->set_zoom(( (Float)(1) ));
HXDLIN( 101)				{
HXLINE( 101)					 ::flixel::math::FlxBasePoint this1 = _gthis->_curMouseOffset;
HXDLIN( 101)					this1->set_x(( (Float)(0) ));
HXDLIN( 101)					this1->set_y(( (Float)(0) ));
            				}
            			}
HXLINE( 102)			_gthis->refreshCanvas(null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_87_createHeaderUI)
HXDLIN(  87)		 ::flixel::_hx_system::debug::log::BitmapLog _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  88)		this->_ui =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  89)		this->_ui->set_y(( (Float)(2) ));
HXLINE(  91)		this->_buttonLeft =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX , ::flixel::_hx_system::debug::GraphicArrowLeft_obj::__alloc( HX_CTX ,0,0,null(),null()),this->previous_dyn(),null());
HXLINE(  93)		this->_dimensionsText = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());
HXLINE(  95)		this->_counterText = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(0,-3,null(),null());
HXLINE(  96)		this->_counterText->set_text(HX_("0/0",51,95,24,00));
HXLINE(  99)		this->_buttonText =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX ,null(), ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 104)		this->_buttonText->addChild(this->_counterText);
HXLINE( 106)		this->_buttonRight =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX , ::flixel::_hx_system::debug::GraphicArrowRight_obj::__alloc( HX_CTX ,0,0,null(),null()),this->next_dyn(),null());
HXLINE( 107)		this->_buttonRight->set_x(( (Float)(60) ));
HXLINE( 109)		this->_ui->addChild(this->_buttonLeft);
HXLINE( 110)		this->_ui->addChild(this->_buttonText);
HXLINE( 111)		this->_ui->addChild(this->_buttonRight);
HXLINE( 113)		this->addChild(this->_ui);
HXLINE( 114)		this->addChild(this->_dimensionsText);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,createHeaderUI,(void))

void BitmapLog_obj::createFooterUI(){
            	HX_GC_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_118_createFooterUI)
HXLINE( 119)		this->_footer =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,15,true,(int)-1157627904),null(),null());
HXLINE( 120)		this->_footer->set_alpha(((Float)0.8));
HXLINE( 121)		this->addChild(this->_footer);
HXLINE( 123)		this->_footerText = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());
HXLINE( 124)		this->addChild(this->_footerText);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,createFooterUI,(void))

void BitmapLog_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_131_destroy)
HXLINE( 132)		this->super::destroy();
HXLINE( 134)		this->clear();
HXLINE( 136)		this->removeChild(this->_canvasBitmap);
HXLINE( 137)		::flixel::util::FlxDestroyUtil_obj::dispose(this->_canvasBitmap->get_bitmapData());
HXLINE( 138)		this->_canvasBitmap->set_bitmapData(null());
HXLINE( 139)		this->_canvasBitmap = null();
HXLINE( 140)		this->_entries = null();
HXLINE( 142)		this->removeEventListener(HX_("mouseWheel",36,28,87,e7),this->onMouseWheel_dyn(),null());
HXLINE( 144)		this->removeEventListener(HX_("middleMouseDown",12,2b,fe,01),this->onMiddleDown_dyn(),null());
HXLINE( 145)		this->removeEventListener(HX_("middleMouseUp",0b,8d,f5,3a),this->onMiddleUp_dyn(),null());
HXLINE( 148)		::flixel::FlxG_obj::signals->preStateSwitch->remove(this->clear_dyn());
            	}


void BitmapLog_obj::update(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_153_update)
HXDLIN( 153)		if (this->_middleMouseDown) {
HXLINE( 155)			Float x = this->get_mouseX();
HXDLIN( 155)			Float y = this->get_mouseY();
HXDLIN( 155)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 155)			point->_inPool = false;
HXDLIN( 155)			 ::flixel::math::FlxBasePoint delta = point;
HXLINE( 156)			{
HXLINE( 156)				 ::flixel::math::FlxBasePoint this1 = this->_curMouseOffset;
HXDLIN( 156)				 ::flixel::math::FlxBasePoint point1 = this->_lastMousePos;
HXDLIN( 156)				{
HXLINE( 156)					Float y1 = point1->y;
HXDLIN( 156)					delta->set_x((delta->x - point1->x));
HXDLIN( 156)					delta->set_y((delta->y - y1));
            				}
HXDLIN( 156)				if (point1->_weak) {
HXLINE( 156)					point1->put();
            				}
HXDLIN( 156)				 ::flixel::math::FlxBasePoint point2 = delta;
HXDLIN( 156)				{
HXLINE( 156)					Float y2 = point2->y;
HXDLIN( 156)					this1->set_x((this1->x + point2->x));
HXDLIN( 156)					this1->set_y((this1->y + y2));
            				}
HXDLIN( 156)				if (point2->_weak) {
HXLINE( 156)					point2->put();
            				}
            			}
HXLINE( 157)			this->refreshCanvas(null());
HXLINE( 158)			{
HXLINE( 158)				 ::flixel::math::FlxBasePoint this2 = this->_lastMousePos;
HXDLIN( 158)				Float x1 = this->get_mouseX();
HXDLIN( 158)				Float y3 = this->get_mouseY();
HXDLIN( 158)				this2->set_x(x1);
HXDLIN( 158)				this2->set_y(y3);
            			}
            		}
            	}


void BitmapLog_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_163_updateSize)
HXLINE( 164)		this->super::updateSize();
HXLINE( 166)		 ::openfl::display::Bitmap _hx_tmp = this->_background;
HXDLIN( 166)		int _hx_tmp1 = this->_height;
HXDLIN( 166)		_hx_tmp->set_scaleY((( (Float)(_hx_tmp1) ) - (this->_header->get_height() * ( (Float)(2) ))));
            	}


void BitmapLog_obj::resize(Float Width,Float Height){
            	HX_GC_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_170_resize)
HXLINE( 171)		this->super::resize(Width,Height);
HXLINE( 173)		 ::openfl::display::Bitmap _hx_tmp = this->_canvasBitmap;
HXDLIN( 173)		_hx_tmp->set_bitmapData(::flixel::util::FlxDestroyUtil_obj::dispose(this->_canvasBitmap->get_bitmapData()));
HXLINE( 175)		int newWidth = this->_width;
HXDLIN( 175)		int newWidth1 = ::Std_obj::_hx_int((( (Float)(newWidth) ) - this->_canvasBitmap->get_x()));
HXLINE( 176)		int newHeight = this->_height;
HXDLIN( 176)		Float newHeight1 = (( (Float)(newHeight) ) - this->_canvasBitmap->get_y());
HXDLIN( 176)		int newHeight2 = ::Std_obj::_hx_int((newHeight1 - this->_footer->get_height()));
HXLINE( 178)		bool _hx_tmp1;
HXDLIN( 178)		if ((newWidth1 > 0)) {
HXLINE( 178)			_hx_tmp1 = (newHeight2 > 0);
            		}
            		else {
HXLINE( 178)			_hx_tmp1 = false;
            		}
HXDLIN( 178)		if (_hx_tmp1) {
HXLINE( 180)			 ::openfl::display::Bitmap _hx_tmp = this->_canvasBitmap;
HXDLIN( 180)			_hx_tmp->set_bitmapData( ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,newWidth1,newHeight2,true,0));
HXLINE( 181)			this->refreshCanvas(this->_curIndex);
            		}
HXLINE( 184)		 ::openfl::display::Sprite _hx_tmp2 = this->_ui;
HXDLIN( 184)		Float _hx_tmp3 = this->_header->get_width();
HXDLIN( 184)		_hx_tmp2->set_x(((_hx_tmp3 - this->_ui->get_width()) - ( (Float)(5) )));
HXLINE( 186)		this->_footer->set_width(( (Float)(this->_width) ));
HXLINE( 187)		 ::openfl::display::Bitmap _hx_tmp4 = this->_footer;
HXDLIN( 187)		int _hx_tmp5 = this->_height;
HXDLIN( 187)		_hx_tmp4->set_y((( (Float)(_hx_tmp5) ) - this->_footer->get_height()));
HXLINE( 189)		this->resizeTexts();
            	}


void BitmapLog_obj::resizeTexts(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_193_resizeTexts)
HXLINE( 194)		 ::openfl::text::TextField _hx_tmp = this->_dimensionsText;
HXDLIN( 194)		Float _hx_tmp1 = (this->_header->get_width() / ( (Float)(2) ));
HXDLIN( 194)		_hx_tmp->set_x((_hx_tmp1 - (this->_dimensionsText->get_textWidth() / ( (Float)(2) ))));
HXLINE( 195)		this->_dimensionsText->set_visible((this->_width > 200));
HXLINE( 197)		 ::openfl::text::TextField _hx_tmp2 = this->_footerText;
HXDLIN( 197)		int _hx_tmp3 = this->_height;
HXDLIN( 197)		_hx_tmp2->set_y((( (Float)(_hx_tmp3) ) - this->_footer->get_height()));
HXLINE( 198)		 ::openfl::text::TextField _hx_tmp4 = this->_footerText;
HXDLIN( 198)		Float _hx_tmp5 = (( (Float)(this->_width) ) / ( (Float)(2) ));
HXDLIN( 198)		_hx_tmp4->set_x((_hx_tmp5 - (this->_footerText->get_textWidth() / ( (Float)(2) ))));
HXLINE( 199)		 ::openfl::text::TextField _hx_tmp6 = this->_footerText;
HXDLIN( 199)		_hx_tmp6->set_width(this->_footer->get_width());
HXLINE( 200)		if ((this->_footerText->get_x() < 0)) {
HXLINE( 202)			this->_footerText->set_x(( (Float)(0) ));
            		}
HXLINE( 205)		 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp7 = this->_buttonText;
HXDLIN( 205)		_hx_tmp7->set_x((( (Float)(33) ) - (this->_counterText->get_textWidth() / ( (Float)(2) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,resizeTexts,(void))

void BitmapLog_obj::next(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_212_next)
HXLINE( 213)		{
HXLINE( 213)			this->set_zoom(( (Float)(1) ));
HXDLIN( 213)			{
HXLINE( 213)				 ::flixel::math::FlxBasePoint this1 = this->_curMouseOffset;
HXDLIN( 213)				this1->set_x(( (Float)(0) ));
HXDLIN( 213)				this1->set_y(( (Float)(0) ));
            			}
            		}
HXLINE( 214)		this->refreshCanvas((this->_curIndex + 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,next,(void))

void BitmapLog_obj::previous(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_221_previous)
HXLINE( 222)		{
HXLINE( 222)			this->set_zoom(( (Float)(1) ));
HXDLIN( 222)			{
HXLINE( 222)				 ::flixel::math::FlxBasePoint this1 = this->_curMouseOffset;
HXDLIN( 222)				this1->set_x(( (Float)(0) ));
HXDLIN( 222)				this1->set_y(( (Float)(0) ));
            			}
            		}
HXLINE( 223)		this->refreshCanvas((this->_curIndex - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,previous,(void))

void BitmapLog_obj::resetSettings(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_227_resetSettings)
HXLINE( 228)		this->set_zoom(( (Float)(1) ));
HXLINE( 229)		{
HXLINE( 229)			 ::flixel::math::FlxBasePoint this1 = this->_curMouseOffset;
HXDLIN( 229)			this1->set_x(( (Float)(0) ));
HXDLIN( 229)			this1->set_y(( (Float)(0) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,resetSettings,(void))

bool BitmapLog_obj::add( ::openfl::display::BitmapData bmp,::String __o_name){
            		::String name = __o_name;
            		if (::hx::IsNull(__o_name)) name = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_236_add)
HXLINE( 237)		if (::hx::IsNull( bmp )) {
HXLINE( 239)			return false;
            		}
HXLINE( 241)		this->setVisible(true);
HXLINE( 242)		::Array< ::Dynamic> _hx_tmp = this->_entries;
HXDLIN( 242)		_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("bitmap",ef,0f,0c,f1),bmp->clone())
            			->setFixed(1,HX_("name",4b,72,ff,48),name)));
HXLINE( 243)		return this->refreshCanvas(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLog_obj,add,return )

void BitmapLog_obj::clearAt(::hx::Null< int >  __o_Index){
            		int Index = __o_Index.Default(-1);
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_250_clearAt)
HXLINE( 251)		if ((Index == -1)) {
HXLINE( 253)			Index = (this->_entries->length - 1);
            		}
HXLINE( 255)		::flixel::util::FlxDestroyUtil_obj::dispose(( ( ::openfl::display::BitmapData)(this->_entries->__get(Index)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) ));
HXLINE( 256)		this->_entries[Index] = null();
HXLINE( 257)		this->_entries->removeRange(Index,1);
HXLINE( 259)		if ((this->_curIndex > (this->_entries->length - 1))) {
HXLINE( 261)			this->_curIndex = (this->_entries->length - 1);
            		}
HXLINE( 264)		this->refreshCanvas(this->_curIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,clearAt,(void))

void BitmapLog_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_268_clear)
HXLINE( 269)		{
HXLINE( 269)			int _g = 0;
HXDLIN( 269)			int _g1 = this->_entries->length;
HXDLIN( 269)			while((_g < _g1)){
HXLINE( 269)				_g = (_g + 1);
HXDLIN( 269)				int i = (_g - 1);
HXLINE( 271)				::flixel::util::FlxDestroyUtil_obj::dispose(( ( ::openfl::display::BitmapData)(this->_entries->__get(i)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) ));
HXLINE( 272)				this->_entries[i] = null();
            			}
            		}
HXLINE( 274)		this->_entries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 275)		if (::hx::IsNotNull( this->_canvasBitmap->get_bitmapData() )) {
HXLINE( 276)			 ::openfl::display::BitmapData _hx_tmp = this->_canvasBitmap->get_bitmapData();
HXDLIN( 276)			_hx_tmp->fillRect(this->_canvasBitmap->get_bitmapData()->rect,0);
            		}
HXLINE( 277)		this->_dimensionsText->set_text(HX_("",00,00,00,00));
HXLINE( 278)		this->_counterText->set_text(HX_("0/0",51,95,24,00));
HXLINE( 279)		this->_footerText->set_text(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,clear,(void))

bool BitmapLog_obj::refreshCanvas( ::Dynamic Index){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_283_refreshCanvas)
HXLINE( 284)		bool _hx_tmp;
HXDLIN( 284)		if (::hx::IsNotNull( this->_entries )) {
HXLINE( 284)			_hx_tmp = (this->_entries->length <= 0);
            		}
            		else {
HXLINE( 284)			_hx_tmp = true;
            		}
HXDLIN( 284)		if (_hx_tmp) {
HXLINE( 286)			this->_curIndex = 0;
HXLINE( 287)			return false;
            		}
HXLINE( 290)		if (::hx::IsNull( Index )) {
HXLINE( 292)			Index = this->_curIndex;
            		}
HXLINE( 295)		 ::openfl::display::BitmapData _hx_tmp1 = this->_canvasBitmap->get_bitmapData();
HXDLIN( 295)		_hx_tmp1->fillRect(this->_canvasBitmap->get_bitmapData()->rect,0);
HXLINE( 297)		if (::hx::IsLess( Index,0 )) {
HXLINE( 299)			Index = (this->_entries->length - 1);
            		}
            		else {
HXLINE( 301)			if (::hx::IsGreaterEq( Index,this->_entries->length )) {
HXLINE( 303)				Index = 0;
            			}
            		}
HXLINE( 306)		this->_curIndex = ( (int)(Index) );
HXLINE( 309)		{
HXLINE( 309)			 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN( 309)			Float x = (( (Float)(this->_canvasBitmap->get_bitmapData()->width) ) / ( (Float)(2) ));
HXDLIN( 309)			this1->set_x((x - ((( (Float)(( ( ::openfl::display::BitmapData)(this->_entries->__get(this->_curIndex)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) )->width) ) * this->zoom) / ( (Float)(2) ))));
            		}
HXLINE( 310)		{
HXLINE( 310)			 ::flixel::math::FlxBasePoint this2 = this->_point;
HXDLIN( 310)			Float y = (( (Float)(this->_canvasBitmap->get_bitmapData()->height) ) / ( (Float)(2) ));
HXDLIN( 310)			this2->set_y((y - ((( (Float)(( ( ::openfl::display::BitmapData)(this->_entries->__get(this->_curIndex)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) )->height) ) * this->zoom) / ( (Float)(2) ))));
            		}
HXLINE( 312)		{
HXLINE( 312)			 ::flixel::math::FlxBasePoint this3 = this->_point;
HXDLIN( 312)			 ::flixel::math::FlxBasePoint point = this->_curMouseOffset;
HXDLIN( 312)			{
HXLINE( 312)				Float y1 = point->y;
HXDLIN( 312)				this3->set_x((this3->x + point->x));
HXDLIN( 312)				this3->set_y((this3->y + y1));
            			}
HXDLIN( 312)			if (point->_weak) {
HXLINE( 312)				point->put();
            			}
            		}
HXLINE( 314)		this->_matrix->identity();
HXLINE( 315)		this->_matrix->scale(this->zoom,this->zoom);
HXLINE( 316)		this->_matrix->translate(this->_point->x,this->_point->y);
HXLINE( 318)		 ::openfl::display::BitmapData _hx_tmp2 = this->_canvasBitmap->get_bitmapData();
HXDLIN( 318)		 ::openfl::display::BitmapData _hx_tmp3 = ( ( ::openfl::display::BitmapData)(this->_entries->__get(this->_curIndex)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) );
HXDLIN( 318)		 ::openfl::geom::Matrix _hx_tmp4 = this->_matrix;
HXDLIN( 318)		_hx_tmp2->draw(_hx_tmp3,_hx_tmp4,null(),null(),this->_canvasBitmap->get_bitmapData()->rect,false);
HXLINE( 320)		this->drawBoundingBox(( ( ::openfl::display::BitmapData)(this->_entries->__get(this->_curIndex)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) ));
HXLINE( 321)		 ::openfl::display::BitmapData _hx_tmp5 = this->_canvasBitmap->get_bitmapData();
HXDLIN( 321)		 ::openfl::display::Sprite _hx_tmp6 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;
HXDLIN( 321)		 ::openfl::geom::Matrix _hx_tmp7 = this->_matrix;
HXDLIN( 321)		_hx_tmp5->draw(_hx_tmp6,_hx_tmp7,null(),null(),this->_canvasBitmap->get_bitmapData()->rect,false);
HXLINE( 323)		this->refreshTexts();
HXLINE( 325)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,refreshCanvas,return )

void BitmapLog_obj::refreshTexts(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_329_refreshTexts)
HXLINE( 330)		this->_dimensionsText->set_text(((( ( ::openfl::display::BitmapData)(this->_entries->__get(this->_curIndex)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) )->width + HX_("x",78,00,00,00)) + ( ( ::openfl::display::BitmapData)(this->_entries->__get(this->_curIndex)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) )->height));
HXLINE( 331)		this->_counterText->set_text((((HX_("",00,00,00,00) + (this->_curIndex + 1)) + HX_("/",2f,00,00,00)) + this->_entries->length));
HXLINE( 333)		::String entryName = ( (::String)(this->_entries->__get(this->_curIndex)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 334)		::String name;
HXDLIN( 334)		if ((entryName == HX_("",00,00,00,00))) {
HXLINE( 334)			name = HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 334)			name = ((HX_("\"",22,00,00,00) + entryName) + HX_("\" | ",62,f5,91,16));
            		}
HXLINE( 335)		 ::openfl::text::TextField _hx_tmp = this->_footerText;
HXDLIN( 335)		 ::openfl::display::BitmapData bitmapData = ( ( ::openfl::display::BitmapData)(this->_entries->__get(this->_curIndex)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) );
HXDLIN( 335)		_hx_tmp->set_text((name + ::flixel::util::FlxStringUtil_obj::formatBytes(( (Float)(((bitmapData->width * bitmapData->height) * 4)) ),null())));
HXLINE( 337)		this->resizeTexts();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,refreshTexts,(void))

void BitmapLog_obj::drawBoundingBox( ::openfl::display::BitmapData bitmap){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_341_drawBoundingBox)
HXLINE( 342)		 ::openfl::display::Graphics gfx = ::flixel::util::FlxSpriteUtil_obj::flashGfx;
HXLINE( 343)		gfx->clear();
HXLINE( 344)		gfx->lineStyle(1,-65536,((Float)0.75),false,1,null(),null(),null());
HXLINE( 345)		Float offset = (( (Float)(1) ) / this->zoom);
HXLINE( 346)		gfx->drawRect(-(offset),-(offset),(bitmap->width + offset),(bitmap->height + offset));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,drawBoundingBox,(void))

void BitmapLog_obj::onMouseWheel( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_350_onMouseWheel)
HXLINE( 351)		int _hx_tmp;
HXDLIN( 351)		if ((e->delta < 0)) {
HXLINE( 351)			_hx_tmp = -1;
            		}
            		else {
HXLINE( 351)			_hx_tmp = 1;
            		}
HXDLIN( 351)		this->set_zoom((this->zoom + ((( (Float)(_hx_tmp) ) * ((Float)0.25)) * this->zoom)));
HXLINE( 352)		this->refreshCanvas(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMouseWheel,(void))

void BitmapLog_obj::onMiddleDown( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_356_onMiddleDown)
HXLINE( 357)		this->_middleMouseDown = true;
HXLINE( 358)		{
HXLINE( 358)			 ::flixel::math::FlxBasePoint this1 = this->_lastMousePos;
HXDLIN( 358)			Float x = this->get_mouseX();
HXDLIN( 358)			Float y = this->get_mouseY();
HXDLIN( 358)			this1->set_x(x);
HXDLIN( 358)			this1->set_y(y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMiddleDown,(void))

void BitmapLog_obj::onMiddleUp( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_363_onMiddleUp)
HXDLIN( 363)		this->_middleMouseDown = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMiddleUp,(void))

Float BitmapLog_obj::set_zoom(Float Value){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_367_set_zoom)
HXLINE( 368)		if ((Value < 0)) {
HXLINE( 370)			Value = ( (Float)(0) );
            		}
HXLINE( 372)		return (this->zoom = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,set_zoom,return )

 ::openfl::display::BitmapData BitmapLog_obj::get__canvas(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_377_get__canvas)
HXDLIN( 377)		return this->_canvasBitmap->get_bitmapData();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__canvas,return )

 ::Dynamic BitmapLog_obj::get__curEntry(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_382_get__curEntry)
HXDLIN( 382)		return this->_entries->__get(this->_curIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__curEntry,return )

 ::openfl::display::BitmapData BitmapLog_obj::get__curBitmap(){
            	HX_STACKFRAME(&_hx_pos_81c1dd4d2eac0533_387_get__curBitmap)
HXDLIN( 387)		return ( ( ::openfl::display::BitmapData)(this->_entries->__get(this->_curIndex)->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__curBitmap,return )


::hx::ObjectPtr< BitmapLog_obj > BitmapLog_obj::__new() {
	::hx::ObjectPtr< BitmapLog_obj > __this = new BitmapLog_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BitmapLog_obj > BitmapLog_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BitmapLog_obj *__this = (BitmapLog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapLog_obj), true, "flixel.system.debug.log.BitmapLog"));
	*(void **)__this = BitmapLog_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapLog_obj::BitmapLog_obj()
{
}

void BitmapLog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapLog);
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(_canvasBitmap,"_canvasBitmap");
	HX_MARK_MEMBER_NAME(_entries,"_entries");
	HX_MARK_MEMBER_NAME(_curIndex,"_curIndex");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_MARK_MEMBER_NAME(_curMouseOffset,"_curMouseOffset");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_buttonLeft,"_buttonLeft");
	HX_MARK_MEMBER_NAME(_buttonText,"_buttonText");
	HX_MARK_MEMBER_NAME(_buttonRight,"_buttonRight");
	HX_MARK_MEMBER_NAME(_counterText,"_counterText");
	HX_MARK_MEMBER_NAME(_dimensionsText,"_dimensionsText");
	HX_MARK_MEMBER_NAME(_ui,"_ui");
	HX_MARK_MEMBER_NAME(_middleMouseDown,"_middleMouseDown");
	HX_MARK_MEMBER_NAME(_footer,"_footer");
	HX_MARK_MEMBER_NAME(_footerText,"_footerText");
	 ::flixel::_hx_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapLog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(_canvasBitmap,"_canvasBitmap");
	HX_VISIT_MEMBER_NAME(_entries,"_entries");
	HX_VISIT_MEMBER_NAME(_curIndex,"_curIndex");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_VISIT_MEMBER_NAME(_curMouseOffset,"_curMouseOffset");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_buttonLeft,"_buttonLeft");
	HX_VISIT_MEMBER_NAME(_buttonText,"_buttonText");
	HX_VISIT_MEMBER_NAME(_buttonRight,"_buttonRight");
	HX_VISIT_MEMBER_NAME(_counterText,"_counterText");
	HX_VISIT_MEMBER_NAME(_dimensionsText,"_dimensionsText");
	HX_VISIT_MEMBER_NAME(_ui,"_ui");
	HX_VISIT_MEMBER_NAME(_middleMouseDown,"_middleMouseDown");
	HX_VISIT_MEMBER_NAME(_footer,"_footer");
	HX_VISIT_MEMBER_NAME(_footerText,"_footerText");
	 ::flixel::_hx_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BitmapLog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { return ::hx::Val( _ui ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__canvas() ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"_footer") ) { return ::hx::Val( _footer ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearAt") ) { return ::hx::Val( clearAt_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entries") ) { return ::hx::Val( _entries ); }
		if (HX_FIELD_EQ(inName,"previous") ) { return ::hx::Val( previous_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return ::hx::Val( set_zoom_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { return ::hx::Val( _curIndex ); }
		if (HX_FIELD_EQ(inName,"_curEntry") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__curEntry() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curBitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__curBitmap() ); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMiddleUp") ) { return ::hx::Val( onMiddleUp_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_buttonLeft") ) { return ::hx::Val( _buttonLeft ); }
		if (HX_FIELD_EQ(inName,"_buttonText") ) { return ::hx::Val( _buttonText ); }
		if (HX_FIELD_EQ(inName,"_footerText") ) { return ::hx::Val( _footerText ); }
		if (HX_FIELD_EQ(inName,"resizeTexts") ) { return ::hx::Val( resizeTexts_dyn() ); }
		if (HX_FIELD_EQ(inName,"get__canvas") ) { return ::hx::Val( get__canvas_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonRight") ) { return ::hx::Val( _buttonRight ); }
		if (HX_FIELD_EQ(inName,"_counterText") ) { return ::hx::Val( _counterText ); }
		if (HX_FIELD_EQ(inName,"refreshTexts") ) { return ::hx::Val( refreshTexts_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMiddleDown") ) { return ::hx::Val( onMiddleDown_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canvasBitmap") ) { return ::hx::Val( _canvasBitmap ); }
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { return ::hx::Val( _lastMousePos ); }
		if (HX_FIELD_EQ(inName,"resetSettings") ) { return ::hx::Val( resetSettings_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshCanvas") ) { return ::hx::Val( refreshCanvas_dyn() ); }
		if (HX_FIELD_EQ(inName,"get__curEntry") ) { return ::hx::Val( get__curEntry_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createHeaderUI") ) { return ::hx::Val( createHeaderUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"createFooterUI") ) { return ::hx::Val( createFooterUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"get__curBitmap") ) { return ::hx::Val( get__curBitmap_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_curMouseOffset") ) { return ::hx::Val( _curMouseOffset ); }
		if (HX_FIELD_EQ(inName,"_dimensionsText") ) { return ::hx::Val( _dimensionsText ); }
		if (HX_FIELD_EQ(inName,"drawBoundingBox") ) { return ::hx::Val( drawBoundingBox_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_middleMouseDown") ) { return ::hx::Val( _middleMouseDown ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitmapLog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { _ui=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_zoom(inValue.Cast< Float >()) );zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footer") ) { _footer=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entries") ) { _entries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { _curIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_buttonLeft") ) { _buttonLeft=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttonText") ) { _buttonText=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footerText") ) { _footerText=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonRight") ) { _buttonRight=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counterText") ) { _counterText=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canvasBitmap") ) { _canvasBitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { _lastMousePos=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_curMouseOffset") ) { _curMouseOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dimensionsText") ) { _dimensionsText=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_middleMouseDown") ) { _middleMouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapLog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("_canvas",77,66,b9,26));
	outFields->push(HX_("_canvasBitmap",c6,9d,e4,7e));
	outFields->push(HX_("_entries",d1,86,17,b3));
	outFields->push(HX_("_curIndex",d1,8c,58,4d));
	outFields->push(HX_("_curEntry",31,6a,ca,ff));
	outFields->push(HX_("_curBitmap",50,a5,3b,bd));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("_lastMousePos",c4,43,1f,e8));
	outFields->push(HX_("_curMouseOffset",97,16,9a,f4));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_buttonLeft",38,44,30,84));
	outFields->push(HX_("_buttonText",de,08,7a,89));
	outFields->push(HX_("_buttonRight",8b,7a,18,9d));
	outFields->push(HX_("_counterText",ca,83,9f,ad));
	outFields->push(HX_("_dimensionsText",39,aa,64,11));
	outFields->push(HX_("_ui",73,7c,48,00));
	outFields->push(HX_("_middleMouseDown",93,6d,dd,ec));
	outFields->push(HX_("_footer",3a,50,0f,6a));
	outFields->push(HX_("_footerText",07,ee,07,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapLog_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(BitmapLog_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(BitmapLog_obj,_canvasBitmap),HX_("_canvasBitmap",c6,9d,e4,7e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BitmapLog_obj,_entries),HX_("_entries",d1,86,17,b3)},
	{::hx::fsInt,(int)offsetof(BitmapLog_obj,_curIndex),HX_("_curIndex",d1,8c,58,4d)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(BitmapLog_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(BitmapLog_obj,_lastMousePos),HX_("_lastMousePos",c4,43,1f,e8)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(BitmapLog_obj,_curMouseOffset),HX_("_curMouseOffset",97,16,9a,f4)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(BitmapLog_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(BitmapLog_obj,_buttonLeft),HX_("_buttonLeft",38,44,30,84)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(BitmapLog_obj,_buttonText),HX_("_buttonText",de,08,7a,89)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(BitmapLog_obj,_buttonRight),HX_("_buttonRight",8b,7a,18,9d)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(BitmapLog_obj,_counterText),HX_("_counterText",ca,83,9f,ad)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(BitmapLog_obj,_dimensionsText),HX_("_dimensionsText",39,aa,64,11)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(BitmapLog_obj,_ui),HX_("_ui",73,7c,48,00)},
	{::hx::fsBool,(int)offsetof(BitmapLog_obj,_middleMouseDown),HX_("_middleMouseDown",93,6d,dd,ec)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(BitmapLog_obj,_footer),HX_("_footer",3a,50,0f,6a)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(BitmapLog_obj,_footerText),HX_("_footerText",07,ee,07,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitmapLog_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapLog_obj_sMemberFields[] = {
	HX_("zoom",13,a3,f8,50),
	HX_("_canvasBitmap",c6,9d,e4,7e),
	HX_("_entries",d1,86,17,b3),
	HX_("_curIndex",d1,8c,58,4d),
	HX_("_point",91,fb,76,c2),
	HX_("_lastMousePos",c4,43,1f,e8),
	HX_("_curMouseOffset",97,16,9a,f4),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_buttonLeft",38,44,30,84),
	HX_("_buttonText",de,08,7a,89),
	HX_("_buttonRight",8b,7a,18,9d),
	HX_("_counterText",ca,83,9f,ad),
	HX_("_dimensionsText",39,aa,64,11),
	HX_("_ui",73,7c,48,00),
	HX_("_middleMouseDown",93,6d,dd,ec),
	HX_("_footer",3a,50,0f,6a),
	HX_("_footerText",07,ee,07,c9),
	HX_("createHeaderUI",3d,10,7a,96),
	HX_("createFooterUI",cb,24,54,93),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateSize",6a,8b,08,05),
	HX_("resize",f4,59,7b,08),
	HX_("resizeTexts",92,cc,9c,4c),
	HX_("next",f3,84,02,49),
	HX_("previous",37,bc,b0,23),
	HX_("resetSettings",d2,69,dc,bb),
	HX_("add",21,f2,49,00),
	HX_("clearAt",e0,e7,44,ab),
	HX_("clear",8d,71,5b,48),
	HX_("refreshCanvas",13,f9,7c,b6),
	HX_("refreshTexts",4b,47,1b,21),
	HX_("drawBoundingBox",63,37,3f,4b),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("onMiddleDown",56,68,5e,56),
	HX_("onMiddleUp",4f,31,f1,1d),
	HX_("set_zoom",10,b8,10,7f),
	HX_("get__canvas",8e,c6,b3,ac),
	HX_("get__curEntry",08,3e,2e,c1),
	HX_("get__curBitmap",99,2d,31,33),
	::String(null()) };

::hx::Class BitmapLog_obj::__mClass;

void BitmapLog_obj::__register()
{
	BitmapLog_obj _hx_dummy;
	BitmapLog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.log.BitmapLog",c3,c9,7a,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapLog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapLog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapLog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapLog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log
