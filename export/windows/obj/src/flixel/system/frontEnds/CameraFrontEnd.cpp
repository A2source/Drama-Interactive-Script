#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_15_new,"flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",15,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_66_add,"flixel.system.frontEnds.CameraFrontEnd","add",0xc6ebc364,"flixel.system.frontEnds.CameraFrontEnd.add","flixel/system/frontEnds/CameraFrontEnd.hx",66,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_85_remove,"flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",85,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_123_setDefaultDrawTarget,"flixel.system.frontEnds.CameraFrontEnd","setDefaultDrawTarget",0xada9a7f1,"flixel.system.frontEnds.CameraFrontEnd.setDefaultDrawTarget","flixel/system/frontEnds/CameraFrontEnd.hx",123,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_145_reset,"flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",145,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_168_flash,"flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",168,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_185_fade,"flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",185,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_202_shake,"flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",202,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_220_lock,"flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",220,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_262_render,"flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",262,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_280_unlock,"flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",280,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_307_update,"flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",307,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_322_resize,"flixel.system.frontEnds.CameraFrontEnd","resize",0xae5b7491,"flixel.system.frontEnds.CameraFrontEnd.resize","flixel/system/frontEnds/CameraFrontEnd.hx",322,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_330_get_bgColor,"flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",330,0x7a57d3ec)
HX_LOCAL_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_334_set_bgColor,"flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",334,0x7a57d3ec)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void CameraFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_15_new)
HXLINE(  53)		this->_cameraRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  48)		this->useBufferLocking = false;
HXLINE(  42)		this->cameraResized =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  39)		this->cameraRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  36)		this->cameraAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  28)		this->defaults = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  22)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 211)		::flixel::FlxCamera_obj::_defaultCameras = this->defaults;
            	}

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return new CameraFrontEnd_obj; }

void *CameraFrontEnd_obj::_hx_vtable = 0;

Dynamic CameraFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CameraFrontEnd_obj > _hx_result = new CameraFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CameraFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x683a772d;
}

 ::Dynamic CameraFrontEnd_obj::add( ::Dynamic NewCamera,::hx::Null< bool >  __o_DefaultDrawTarget){
            		bool DefaultDrawTarget = __o_DefaultDrawTarget.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_66_add)
HXLINE(  67)		 ::flixel::FlxGame _hx_tmp = ::flixel::FlxG_obj::game;
HXDLIN(  67)		 ::openfl::display::Sprite NewCamera1 = ( ( ::flixel::FlxCamera)(NewCamera) )->flashSprite;
HXDLIN(  67)		_hx_tmp->addChildAt(NewCamera1,::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer));
HXLINE(  69)		this->list->push(NewCamera);
HXLINE(  70)		if (DefaultDrawTarget) {
HXLINE(  71)			this->defaults->push(NewCamera);
            		}
HXLINE(  73)		( ( ::flixel::FlxBasic)(NewCamera) )->ID = (this->list->length - 1);
HXLINE(  74)		this->cameraAdded->dispatch(( ( ::flixel::FlxCamera)(NewCamera) ));
HXLINE(  75)		return NewCamera;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,add,return )

void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_85_remove)
HXLINE(  86)		int index = this->list->indexOf(Camera,null());
HXLINE(  87)		bool _hx_tmp;
HXDLIN(  87)		if (::hx::IsNotNull( Camera )) {
HXLINE(  87)			_hx_tmp = (index != -1);
            		}
            		else {
HXLINE(  87)			_hx_tmp = false;
            		}
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  89)			::flixel::FlxG_obj::game->removeChild(Camera->flashSprite);
HXLINE(  90)			this->list->removeRange(index,1);
HXLINE(  91)			this->defaults->remove(Camera);
            		}
            		else {
HXLINE(  95)			::flixel::FlxG_obj::log->advanced(HX_("FlxG.cameras.remove(): The camera you attempted to remove is not a part of the game.",63,6f,2b,31),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE(  96)			return;
            		}
HXLINE(  99)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 101)			int _g = 0;
HXDLIN( 101)			int _g1 = this->list->length;
HXDLIN( 101)			while((_g < _g1)){
HXLINE( 101)				_g = (_g + 1);
HXDLIN( 101)				int i = (_g - 1);
HXLINE( 103)				this->list->__get(i).StaticCast<  ::flixel::FlxCamera >()->ID = i;
            			}
            		}
HXLINE( 107)		if (Destroy) {
HXLINE( 108)			Camera->destroy();
            		}
HXLINE( 110)		this->cameraRemoved->dispatch(Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

void CameraFrontEnd_obj::setDefaultDrawTarget( ::flixel::FlxCamera camera,bool value){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_123_setDefaultDrawTarget)
HXLINE( 124)		if (!(this->list->contains(camera))) {
HXLINE( 126)			::flixel::FlxG_obj::log->advanced(HX_("FlxG.cameras.setDefaultDrawTarget(): The specified camera is not a part of the game.",17,fb,50,a6),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 127)			return;
            		}
HXLINE( 130)		int index = this->defaults->indexOf(camera,null());
HXLINE( 132)		bool _hx_tmp;
HXDLIN( 132)		if (value) {
HXLINE( 132)			_hx_tmp = (index == -1);
            		}
            		else {
HXLINE( 132)			_hx_tmp = false;
            		}
HXDLIN( 132)		if (_hx_tmp) {
HXLINE( 133)			this->defaults->push(camera);
            		}
            		else {
HXLINE( 134)			if (!(value)) {
HXLINE( 135)				this->defaults->removeRange(index,1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,setDefaultDrawTarget,(void))

void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
            	HX_GC_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_145_reset)
HXLINE( 146)		while((this->list->length > 0)){
HXLINE( 147)			this->remove(this->list->__get(0).StaticCast<  ::flixel::FlxCamera >(),null());
            		}
HXLINE( 149)		if (::hx::IsNull( NewCamera )) {
HXLINE( 150)			NewCamera =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null());
            		}
HXLINE( 152)		::flixel::FlxG_obj::camera = ( ( ::flixel::FlxCamera)(this->add(NewCamera,null())) );
HXLINE( 153)		NewCamera->ID = 0;
HXLINE( 155)		::flixel::FlxCamera_obj::_defaultCameras = this->defaults;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

void CameraFrontEnd_obj::flash(::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force){
            		int Color = __o_Color.Default(-1);
            		Float Duration = __o_Duration.Default(1);
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_168_flash)
HXDLIN( 168)		int _g = 0;
HXDLIN( 168)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 168)		while((_g < _g1->length)){
HXDLIN( 168)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 168)			_g = (_g + 1);
HXLINE( 170)			camera->flash(Color,Duration,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

void CameraFrontEnd_obj::fade(::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration,::hx::Null< bool >  __o_FadeIn, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force){
            		int Color = __o_Color.Default(-16777216);
            		Float Duration = __o_Duration.Default(1);
            		bool FadeIn = __o_FadeIn.Default(false);
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_185_fade)
HXDLIN( 185)		int _g = 0;
HXDLIN( 185)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 185)		while((_g < _g1->length)){
HXDLIN( 185)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 185)			_g = (_g + 1);
HXLINE( 187)			camera->fade(Color,Duration,FadeIn,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

void CameraFrontEnd_obj::shake(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force, ::Dynamic Axes){
            		Float Intensity = __o_Intensity.Default(((Float)0.05));
            		Float Duration = __o_Duration.Default(((Float)0.5));
            		bool Force = __o_Force.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_202_shake)
HXDLIN( 202)		int _g = 0;
HXDLIN( 202)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 202)		while((_g < _g1->length)){
HXDLIN( 202)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 202)			_g = (_g + 1);
HXLINE( 204)			camera->shake(Intensity,Duration,OnComplete,Force,Axes);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

void CameraFrontEnd_obj::lock(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_220_lock)
HXDLIN( 220)		int _g = 0;
HXDLIN( 220)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 220)		while((_g < _g1->length)){
HXDLIN( 220)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 220)			_g = (_g + 1);
HXLINE( 222)			bool _hx_tmp;
HXDLIN( 222)			bool _hx_tmp1;
HXDLIN( 222)			if (::hx::IsNotNull( camera )) {
HXLINE( 222)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 222)				_hx_tmp1 = true;
            			}
HXDLIN( 222)			if (!(_hx_tmp1)) {
HXLINE( 222)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 222)				_hx_tmp = true;
            			}
HXDLIN( 222)			if (_hx_tmp) {
HXLINE( 224)				continue;
            			}
HXLINE( 227)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 229)				camera->checkResize();
HXLINE( 231)				if (this->useBufferLocking) {
HXLINE( 233)					camera->buffer->lock();
            				}
            			}
HXLINE( 237)			if (::flixel::FlxG_obj::renderTile) {
HXLINE( 239)				camera->clearDrawStack();
HXLINE( 240)				camera->canvas->get_graphics()->clear();
HXLINE( 243)				camera->debugLayer->get_graphics()->clear();
            			}
HXLINE( 247)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 249)				camera->fill(camera->bgColor,camera->useBgAlphaBlending,null(),null());
HXLINE( 250)				camera->screen->dirty = true;
            			}
            			else {
HXLINE( 254)				camera->fill((camera->bgColor & 16777215),camera->useBgAlphaBlending,(( (Float)(((camera->bgColor >> 24) & 255)) ) / ( (Float)(255) )),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

void CameraFrontEnd_obj::render(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_262_render)
HXDLIN( 262)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 264)			int _g = 0;
HXDLIN( 264)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 264)			while((_g < _g1->length)){
HXLINE( 264)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 264)				_g = (_g + 1);
HXLINE( 266)				bool _hx_tmp;
HXDLIN( 266)				bool _hx_tmp1;
HXDLIN( 266)				if (::hx::IsNotNull( camera )) {
HXLINE( 266)					_hx_tmp1 = camera->exists;
            				}
            				else {
HXLINE( 266)					_hx_tmp1 = false;
            				}
HXDLIN( 266)				if (_hx_tmp1) {
HXLINE( 266)					_hx_tmp = camera->visible;
            				}
            				else {
HXLINE( 266)					_hx_tmp = false;
            				}
HXDLIN( 266)				if (_hx_tmp) {
HXLINE( 268)					camera->render();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

void CameraFrontEnd_obj::unlock(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_280_unlock)
HXDLIN( 280)		int _g = 0;
HXDLIN( 280)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 280)		while((_g < _g1->length)){
HXDLIN( 280)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 280)			_g = (_g + 1);
HXLINE( 282)			bool _hx_tmp;
HXDLIN( 282)			bool _hx_tmp1;
HXDLIN( 282)			if (::hx::IsNotNull( camera )) {
HXLINE( 282)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 282)				_hx_tmp1 = true;
            			}
HXDLIN( 282)			if (!(_hx_tmp1)) {
HXLINE( 282)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 282)				_hx_tmp = true;
            			}
HXDLIN( 282)			if (_hx_tmp) {
HXLINE( 284)				continue;
            			}
HXLINE( 287)			camera->drawFX();
HXLINE( 289)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 291)				if (this->useBufferLocking) {
HXLINE( 293)					camera->buffer->unlock(null());
            				}
HXLINE( 296)				camera->screen->dirty = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

void CameraFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_307_update)
HXDLIN( 307)		int _g = 0;
HXDLIN( 307)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 307)		while((_g < _g1->length)){
HXDLIN( 307)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 307)			_g = (_g + 1);
HXLINE( 309)			bool _hx_tmp;
HXDLIN( 309)			bool _hx_tmp1;
HXDLIN( 309)			if (::hx::IsNotNull( camera )) {
HXLINE( 309)				_hx_tmp1 = camera->exists;
            			}
            			else {
HXLINE( 309)				_hx_tmp1 = false;
            			}
HXDLIN( 309)			if (_hx_tmp1) {
HXLINE( 309)				_hx_tmp = camera->active;
            			}
            			else {
HXLINE( 309)				_hx_tmp = false;
            			}
HXDLIN( 309)			if (_hx_tmp) {
HXLINE( 311)				camera->update(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,update,(void))

void CameraFrontEnd_obj::resize(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_322_resize)
HXDLIN( 322)		int _g = 0;
HXDLIN( 322)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 322)		while((_g < _g1->length)){
HXDLIN( 322)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 322)			_g = (_g + 1);
HXLINE( 324)			camera->onResize();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,resize,(void))

int CameraFrontEnd_obj::get_bgColor(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_330_get_bgColor)
HXDLIN( 330)		if (::hx::IsNull( ::flixel::FlxG_obj::camera )) {
HXDLIN( 330)			return -16777216;
            		}
            		else {
HXDLIN( 330)			return ::flixel::FlxG_obj::camera->bgColor;
            		}
HXDLIN( 330)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

int CameraFrontEnd_obj::set_bgColor(int Color){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_334_set_bgColor)
HXLINE( 335)		{
HXLINE( 335)			int _g = 0;
HXDLIN( 335)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 335)			while((_g < _g1->length)){
HXLINE( 335)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 335)				_g = (_g + 1);
HXLINE( 337)				camera->bgColor = Color;
            			}
            		}
HXLINE( 340)		return Color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


::hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new() {
	::hx::ObjectPtr< CameraFrontEnd_obj > __this = new CameraFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CameraFrontEnd_obj *__this = (CameraFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CameraFrontEnd_obj), true, "flixel.system.frontEnds.CameraFrontEnd"));
	*(void **)__this = CameraFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(defaults,"defaults");
	HX_MARK_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_MARK_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_MARK_MEMBER_NAME(cameraResized,"cameraResized");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(defaults,"defaults");
	HX_VISIT_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_VISIT_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_VISIT_MEMBER_NAME(cameraResized,"cameraResized");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

::hx::Val CameraFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"fade") ) { return ::hx::Val( fade_dyn() ); }
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"flash") ) { return ::hx::Val( flash_dyn() ); }
		if (HX_FIELD_EQ(inName,"shake") ) { return ::hx::Val( shake_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return ::hx::Val( unlock_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bgColor() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { return ::hx::Val( defaults ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { return ::hx::Val( cameraAdded ); }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return ::hx::Val( _cameraRect ); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return ::hx::Val( get_bgColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return ::hx::Val( set_bgColor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { return ::hx::Val( cameraRemoved ); }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { return ::hx::Val( cameraResized ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return ::hx::Val( useBufferLocking ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setDefaultDrawTarget") ) { return ::hx::Val( setDefaultDrawTarget_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CameraFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bgColor(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { defaults=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { cameraAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { cameraRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { cameraResized=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("defaults",92,d0,99,af));
	outFields->push(HX_("bgColor",5e,81,83,f7));
	outFields->push(HX_("cameraAdded",db,c7,89,10));
	outFields->push(HX_("cameraRemoved",7b,4f,fd,fa));
	outFields->push(HX_("cameraResized",cb,8b,70,6b));
	outFields->push(HX_("useBufferLocking",f0,43,3c,76));
	outFields->push(HX_("_cameraRect",88,43,4f,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CameraFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CameraFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CameraFrontEnd_obj,defaults),HX_("defaults",92,d0,99,af)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraAdded),HX_("cameraAdded",db,c7,89,10)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraRemoved),HX_("cameraRemoved",7b,4f,fd,fa)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(CameraFrontEnd_obj,cameraResized),HX_("cameraResized",cb,8b,70,6b)},
	{::hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_("useBufferLocking",f0,43,3c,76)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_("_cameraRect",88,43,4f,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CameraFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String CameraFrontEnd_obj_sMemberFields[] = {
	HX_("list",5e,1c,b3,47),
	HX_("defaults",92,d0,99,af),
	HX_("cameraAdded",db,c7,89,10),
	HX_("cameraRemoved",7b,4f,fd,fa),
	HX_("cameraResized",cb,8b,70,6b),
	HX_("useBufferLocking",f0,43,3c,76),
	HX_("_cameraRect",88,43,4f,84),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("setDefaultDrawTarget",94,14,3f,93),
	HX_("reset",cf,49,c8,e6),
	HX_("flash",b0,35,8c,02),
	HX_("fade",7c,b5,b5,43),
	HX_("shake",c6,de,1c,7c),
	HX_("lock",eb,9b,b7,47),
	HX_("render",56,6b,29,05),
	HX_("unlock",c4,a2,8c,65),
	HX_("update",09,86,05,87),
	HX_("resize",f4,59,7b,08),
	HX_("get_bgColor",75,e1,7d,7d),
	HX_("set_bgColor",81,e8,ea,87),
	::String(null()) };

::hx::Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	CameraFrontEnd_obj _hx_dummy;
	CameraFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.CameraFrontEnd",31,94,3d,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CameraFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CameraFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
