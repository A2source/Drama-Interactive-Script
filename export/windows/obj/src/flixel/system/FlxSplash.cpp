#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_16_new,"flixel.system.FlxSplash","new",0x887e165e,"flixel.system.FlxSplash.new","flixel/system/FlxSplash.hx",16,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_38_create,"flixel.system.FlxSplash","create",0x2dc273be,"flixel.system.FlxSplash.create","flixel/system/FlxSplash.hx",38,0xa5de80f2)
static const Float _hx_array_data_1ea84f6c_3[] = {
	0.041,0.184,0.334,0.495,0.636,
};
static const int _hx_array_data_1ea84f6c_4[] = {
	(int)47394,(int)16761138,(int)16066382,(int)3555839,(int)314875,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_89_destroy,"flixel.system.FlxSplash","destroy",0xef7e49f8,"flixel.system.FlxSplash.destroy","flixel/system/FlxSplash.hx",89,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_100_onResize,"flixel.system.FlxSplash","onResize",0xb64991b5,"flixel.system.FlxSplash.onResize","flixel/system/FlxSplash.hx",100,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_115_timerCallback,"flixel.system.FlxSplash","timerCallback",0x874bd228,"flixel.system.FlxSplash.timerCallback","flixel/system/FlxSplash.hx",115,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_130_drawGreen,"flixel.system.FlxSplash","drawGreen",0xf0f01c9d,"flixel.system.FlxSplash.drawGreen","flixel/system/FlxSplash.hx",130,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_145_drawYellow,"flixel.system.FlxSplash","drawYellow",0x9c05b05a,"flixel.system.FlxSplash.drawYellow","flixel/system/FlxSplash.hx",145,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_157_drawRed,"flixel.system.FlxSplash","drawRed",0xc6cedcab,"flixel.system.FlxSplash.drawRed","flixel/system/FlxSplash.hx",157,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_169_drawBlue,"flixel.system.FlxSplash","drawBlue",0x23a42e00,"flixel.system.FlxSplash.drawBlue","flixel/system/FlxSplash.hx",169,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_181_drawLightBlue,"flixel.system.FlxSplash","drawLightBlue",0x099f256a,"flixel.system.FlxSplash.drawLightBlue","flixel/system/FlxSplash.hx",181,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_193_onComplete,"flixel.system.FlxSplash","onComplete",0xe7646aba,"flixel.system.FlxSplash.onComplete","flixel/system/FlxSplash.hx",193,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_202_onComplete,"flixel.system.FlxSplash","onComplete",0xe7646aba,"flixel.system.FlxSplash.onComplete","flixel/system/FlxSplash.hx",202,0xa5de80f2)
HX_LOCAL_STACK_FRAME(_hx_pos_0cd566ad6ef5d750_23_boot,"flixel.system.FlxSplash","boot",0xddee7c74,"flixel.system.FlxSplash.boot","flixel/system/FlxSplash.hx",23,0xa5de80f2)
namespace flixel{
namespace _hx_system{

void FlxSplash_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_16_new)
HXLINE(  32)		this->_curPart = 0;
HXLINE(  16)		super::__construct(MaxSize);
            	}

Dynamic FlxSplash_obj::__CreateEmpty() { return new FlxSplash_obj; }

void *FlxSplash_obj::_hx_vtable = 0;

Dynamic FlxSplash_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSplash_obj > _hx_result = new FlxSplash_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxSplash_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x607fd7e6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x607fd7e6;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void FlxSplash_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_38_create)
HXLINE(  39)		this->_cachedBgColor = ::flixel::FlxG_obj::cameras->get_bgColor();
HXLINE(  40)		::flixel::FlxG_obj::cameras->set_bgColor(-16777216);
HXLINE(  43)		this->_cachedTimestep = ::flixel::FlxG_obj::fixedTimestep;
HXLINE(  44)		::flixel::FlxG_obj::fixedTimestep = false;
HXLINE(  46)		this->_cachedAutoPause = ::flixel::FlxG_obj::autoPause;
HXLINE(  47)		::flixel::FlxG_obj::autoPause = false;
HXLINE(  50)		::flixel::FlxG_obj::keys->enabled = false;
HXLINE(  53)		this->_times = ::Array_obj< Float >::fromData( _hx_array_data_1ea84f6c_3,5);
HXLINE(  54)		this->_colors = ::Array_obj< int >::fromData( _hx_array_data_1ea84f6c_4,5);
HXLINE(  55)		this->_functions = ::Array_obj< ::Dynamic>::__new(5)->init(0,this->drawGreen_dyn())->init(1,this->drawYellow_dyn())->init(2,this->drawRed_dyn())->init(3,this->drawBlue_dyn())->init(4,this->drawLightBlue_dyn());
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::Array< Float > _g1 = this->_times;
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				Float time = _g1->__get(_g);
HXDLIN(  57)				_g = (_g + 1);
HXLINE(  59)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(time,this->timerCallback_dyn(),null());
            			}
            		}
HXLINE(  62)		int stageWidth = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  63)		int stageHeight = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  65)		this->_sprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  66)		::openfl::Lib_obj::get_current()->stage->addChild(this->_sprite);
HXLINE(  67)		this->_gfx = this->_sprite->get_graphics();
HXLINE(  69)		this->_text =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  70)		this->_text->set_selectable(false);
HXLINE(  71)		this->_text->set_embedFonts(true);
HXLINE(  72)		 ::openfl::text::TextFormat dtf =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT,16,16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  73)		dtf->align = 0;
HXLINE(  74)		this->_text->set_defaultTextFormat(dtf);
HXLINE(  75)		this->_text->set_text(HX_("HaxeFlixel",42,8f,0c,ac));
HXLINE(  76)		::openfl::Lib_obj::get_current()->stage->addChild(this->_text);
HXLINE(  78)		this->onResize(stageWidth,stageHeight);
HXLINE(  81)		if (!(::flixel::_hx_system::FlxSplash_obj::muted)) {
HXLINE(  83)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  83)			_hx_tmp->load(::flixel::_hx_system::FlxAssets_obj::getSound(HX_("flixel/sounds/flixel",54,41,d6,5d)),null(),null(),null(),null(),null(),null(),null(),null())->play(null(),null(),null());
            		}
            	}


void FlxSplash_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_89_destroy)
HXLINE(  90)		this->_sprite = null();
HXLINE(  91)		this->_gfx = null();
HXLINE(  92)		this->_text = null();
HXLINE(  93)		this->_times = null();
HXLINE(  94)		this->_colors = null();
HXLINE(  95)		this->_functions = null();
HXLINE(  96)		this->super::destroy();
            	}


void FlxSplash_obj::onResize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_100_onResize)
HXLINE( 101)		this->super::onResize(Width,Height);
HXLINE( 103)		this->_sprite->set_x((( (Float)(Width) ) / ( (Float)(2) )));
HXLINE( 104)		 ::openfl::display::Sprite _hx_tmp = this->_sprite;
HXDLIN( 104)		_hx_tmp->set_y(((( (Float)(Height) ) / ( (Float)(2) )) - (( (Float)(20) ) * ::flixel::FlxG_obj::game->get_scaleY())));
HXLINE( 106)		 ::openfl::text::TextField _hx_tmp1 = this->_text;
HXDLIN( 106)		_hx_tmp1->set_width((( (Float)(Width) ) / ::flixel::FlxG_obj::game->get_scaleX()));
HXLINE( 107)		this->_text->set_x(( (Float)(0) ));
HXLINE( 108)		 ::openfl::text::TextField _hx_tmp2 = this->_text;
HXDLIN( 108)		Float _hx_tmp3 = this->_sprite->get_y();
HXDLIN( 108)		_hx_tmp2->set_y((_hx_tmp3 + (( (Float)(80) ) * ::flixel::FlxG_obj::game->get_scaleY())));
HXLINE( 110)		 ::openfl::display::Sprite _hx_tmp4 = this->_sprite;
HXDLIN( 110)		 ::openfl::text::TextField _hx_tmp5 = this->_text;
HXDLIN( 110)		_hx_tmp4->set_scaleX(_hx_tmp5->set_scaleX(::flixel::FlxG_obj::game->get_scaleX()));
HXLINE( 111)		 ::openfl::display::Sprite _hx_tmp6 = this->_sprite;
HXDLIN( 111)		 ::openfl::text::TextField _hx_tmp7 = this->_text;
HXDLIN( 111)		_hx_tmp6->set_scaleY(_hx_tmp7->set_scaleY(::flixel::FlxG_obj::game->get_scaleY()));
            	}


void FlxSplash_obj::timerCallback( ::flixel::util::FlxTimer Timer){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_115_timerCallback)
HXLINE( 116)		this->_functions->__get(this->_curPart)();
HXLINE( 117)		this->_text->set_textColor(this->_colors->__get(this->_curPart));
HXLINE( 118)		this->_text->set_text(HX_("HaxeFlixel",42,8f,0c,ac));
HXLINE( 119)		this->_curPart++;
HXLINE( 121)		if ((this->_curPart == 5)) {
HXLINE( 124)			::flixel::tweens::FlxTween_obj::tween(this->_sprite, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)3.0), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->onComplete_dyn())));
HXLINE( 125)			::flixel::tweens::FlxTween_obj::tween(this->_text, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)3.0), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSplash_obj,timerCallback,(void))

void FlxSplash_obj::drawGreen(){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_130_drawGreen)
HXLINE( 131)		this->_gfx->beginFill(47394,null());
HXLINE( 132)		this->_gfx->moveTo(( (Float)(0) ),( (Float)(-37) ));
HXLINE( 133)		this->_gfx->lineTo(( (Float)(1) ),( (Float)(-37) ));
HXLINE( 134)		this->_gfx->lineTo(( (Float)(37) ),( (Float)(0) ));
HXLINE( 135)		this->_gfx->lineTo(( (Float)(37) ),( (Float)(1) ));
HXLINE( 136)		this->_gfx->lineTo(( (Float)(1) ),( (Float)(37) ));
HXLINE( 137)		this->_gfx->lineTo(( (Float)(0) ),( (Float)(37) ));
HXLINE( 138)		this->_gfx->lineTo(( (Float)(-37) ),( (Float)(1) ));
HXLINE( 139)		this->_gfx->lineTo(( (Float)(-37) ),( (Float)(0) ));
HXLINE( 140)		this->_gfx->lineTo(( (Float)(0) ),( (Float)(-37) ));
HXLINE( 141)		this->_gfx->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawGreen,(void))

void FlxSplash_obj::drawYellow(){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_145_drawYellow)
HXLINE( 146)		this->_gfx->beginFill(16761138,null());
HXLINE( 147)		this->_gfx->moveTo(( (Float)(-50) ),( (Float)(-50) ));
HXLINE( 148)		this->_gfx->lineTo(( (Float)(-25) ),( (Float)(-50) ));
HXLINE( 149)		this->_gfx->lineTo(( (Float)(0) ),( (Float)(-37) ));
HXLINE( 150)		this->_gfx->lineTo(( (Float)(-37) ),( (Float)(0) ));
HXLINE( 151)		this->_gfx->lineTo(( (Float)(-50) ),( (Float)(-25) ));
HXLINE( 152)		this->_gfx->lineTo(( (Float)(-50) ),( (Float)(-50) ));
HXLINE( 153)		this->_gfx->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawYellow,(void))

void FlxSplash_obj::drawRed(){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_157_drawRed)
HXLINE( 158)		this->_gfx->beginFill(16066382,null());
HXLINE( 159)		this->_gfx->moveTo(( (Float)(50) ),( (Float)(-50) ));
HXLINE( 160)		this->_gfx->lineTo(( (Float)(25) ),( (Float)(-50) ));
HXLINE( 161)		this->_gfx->lineTo(( (Float)(1) ),( (Float)(-37) ));
HXLINE( 162)		this->_gfx->lineTo(( (Float)(37) ),( (Float)(0) ));
HXLINE( 163)		this->_gfx->lineTo(( (Float)(50) ),( (Float)(-25) ));
HXLINE( 164)		this->_gfx->lineTo(( (Float)(50) ),( (Float)(-50) ));
HXLINE( 165)		this->_gfx->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawRed,(void))

void FlxSplash_obj::drawBlue(){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_169_drawBlue)
HXLINE( 170)		this->_gfx->beginFill(3555839,null());
HXLINE( 171)		this->_gfx->moveTo(( (Float)(-50) ),( (Float)(50) ));
HXLINE( 172)		this->_gfx->lineTo(( (Float)(-25) ),( (Float)(50) ));
HXLINE( 173)		this->_gfx->lineTo(( (Float)(0) ),( (Float)(37) ));
HXLINE( 174)		this->_gfx->lineTo(( (Float)(-37) ),( (Float)(1) ));
HXLINE( 175)		this->_gfx->lineTo(( (Float)(-50) ),( (Float)(25) ));
HXLINE( 176)		this->_gfx->lineTo(( (Float)(-50) ),( (Float)(50) ));
HXLINE( 177)		this->_gfx->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawBlue,(void))

void FlxSplash_obj::drawLightBlue(){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_181_drawLightBlue)
HXLINE( 182)		this->_gfx->beginFill(314875,null());
HXLINE( 183)		this->_gfx->moveTo(( (Float)(50) ),( (Float)(50) ));
HXLINE( 184)		this->_gfx->lineTo(( (Float)(25) ),( (Float)(50) ));
HXLINE( 185)		this->_gfx->lineTo(( (Float)(1) ),( (Float)(37) ));
HXLINE( 186)		this->_gfx->lineTo(( (Float)(37) ),( (Float)(1) ));
HXLINE( 187)		this->_gfx->lineTo(( (Float)(50) ),( (Float)(25) ));
HXLINE( 188)		this->_gfx->lineTo(( (Float)(50) ),( (Float)(50) ));
HXLINE( 189)		this->_gfx->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawLightBlue,(void))

void FlxSplash_obj::onComplete( ::flixel::tweens::FlxTween Tween){
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_193_onComplete)
HXLINE( 194)		::flixel::FlxG_obj::cameras->set_bgColor(this->_cachedBgColor);
HXLINE( 195)		::flixel::FlxG_obj::fixedTimestep = this->_cachedTimestep;
HXLINE( 196)		::flixel::FlxG_obj::autoPause = this->_cachedAutoPause;
HXLINE( 198)		::flixel::FlxG_obj::keys->enabled = true;
HXLINE( 200)		::openfl::Lib_obj::get_current()->stage->removeChild(this->_sprite);
HXLINE( 201)		::openfl::Lib_obj::get_current()->stage->removeChild(this->_text);
HXLINE( 202)		{
HXLINE( 202)			 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::flixel::_hx_system::FlxSplash_obj::nextState,::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 202)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 202)			 ::Dynamic _hx_tmp = ::Reflect_obj::field(::flixel::FlxG_obj::game->_state,HX_("switchTo",8f,f8,d6,0d));
HXDLIN( 202)			if (( (bool)(_hx_tmp(nextState)) )) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxState,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_202_onComplete)
HXLINE( 202)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE( 202)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            					else {
HXLINE( 202)						::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 202)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            			}
            		}
HXLINE( 203)		::flixel::FlxG_obj::game->_gameJustStarted = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSplash_obj,onComplete,(void))

::hx::Class FlxSplash_obj::nextState;

bool FlxSplash_obj::muted;


::hx::ObjectPtr< FlxSplash_obj > FlxSplash_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< FlxSplash_obj > __this = new FlxSplash_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< FlxSplash_obj > FlxSplash_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	FlxSplash_obj *__this = (FlxSplash_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSplash_obj), true, "flixel.system.FlxSplash"));
	*(void **)__this = FlxSplash_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

FlxSplash_obj::FlxSplash_obj()
{
}

void FlxSplash_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSplash);
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_gfx,"_gfx");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_times,"_times");
	HX_MARK_MEMBER_NAME(_colors,"_colors");
	HX_MARK_MEMBER_NAME(_functions,"_functions");
	HX_MARK_MEMBER_NAME(_curPart,"_curPart");
	HX_MARK_MEMBER_NAME(_cachedBgColor,"_cachedBgColor");
	HX_MARK_MEMBER_NAME(_cachedTimestep,"_cachedTimestep");
	HX_MARK_MEMBER_NAME(_cachedAutoPause,"_cachedAutoPause");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSplash_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_gfx,"_gfx");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_times,"_times");
	HX_VISIT_MEMBER_NAME(_colors,"_colors");
	HX_VISIT_MEMBER_NAME(_functions,"_functions");
	HX_VISIT_MEMBER_NAME(_curPart,"_curPart");
	HX_VISIT_MEMBER_NAME(_cachedBgColor,"_cachedBgColor");
	HX_VISIT_MEMBER_NAME(_cachedTimestep,"_cachedTimestep");
	HX_VISIT_MEMBER_NAME(_cachedAutoPause,"_cachedAutoPause");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSplash_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_gfx") ) { return ::hx::Val( _gfx ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return ::hx::Val( _text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_times") ) { return ::hx::Val( _times ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { return ::hx::Val( _sprite ); }
		if (HX_FIELD_EQ(inName,"_colors") ) { return ::hx::Val( _colors ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawRed") ) { return ::hx::Val( drawRed_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curPart") ) { return ::hx::Val( _curPart ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawBlue") ) { return ::hx::Val( drawBlue_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawGreen") ) { return ::hx::Val( drawGreen_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_functions") ) { return ::hx::Val( _functions ); }
		if (HX_FIELD_EQ(inName,"drawYellow") ) { return ::hx::Val( drawYellow_dyn() ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timerCallback") ) { return ::hx::Val( timerCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawLightBlue") ) { return ::hx::Val( drawLightBlue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedBgColor") ) { return ::hx::Val( _cachedBgColor ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedTimestep") ) { return ::hx::Val( _cachedTimestep ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedAutoPause") ) { return ::hx::Val( _cachedAutoPause ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSplash_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { outValue = ( muted ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextState") ) { outValue = ( nextState ); return true; }
	}
	return false;
}

::hx::Val FlxSplash_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_gfx") ) { _gfx=inValue.Cast<  ::openfl::display::Graphics >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_times") ) { _times=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colors") ) { _colors=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curPart") ) { _curPart=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_functions") ) { _functions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedBgColor") ) { _cachedBgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedTimestep") ) { _cachedTimestep=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedAutoPause") ) { _cachedAutoPause=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSplash_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { muted=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextState") ) { nextState=ioValue.Cast< ::hx::Class >(); return true; }
	}
	return false;
}

void FlxSplash_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_sprite",a4,ed,0c,32));
	outFields->push(HX_("_gfx",7a,c6,19,3f));
	outFields->push(HX_("_text",8c,e8,0a,00));
	outFields->push(HX_("_times",07,07,1d,0c));
	outFields->push(HX_("_colors",4f,d7,fd,34));
	outFields->push(HX_("_functions",1c,86,a5,0f));
	outFields->push(HX_("_curPart",14,af,1f,ef));
	outFields->push(HX_("_cachedBgColor",dd,d9,56,6b));
	outFields->push(HX_("_cachedTimestep",7a,54,fe,e6));
	outFields->push(HX_("_cachedAutoPause",46,cb,1c,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSplash_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(FlxSplash_obj,_sprite),HX_("_sprite",a4,ed,0c,32)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(int)offsetof(FlxSplash_obj,_gfx),HX_("_gfx",7a,c6,19,3f)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(FlxSplash_obj,_text),HX_("_text",8c,e8,0a,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxSplash_obj,_times),HX_("_times",07,07,1d,0c)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxSplash_obj,_colors),HX_("_colors",4f,d7,fd,34)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxSplash_obj,_functions),HX_("_functions",1c,86,a5,0f)},
	{::hx::fsInt,(int)offsetof(FlxSplash_obj,_curPart),HX_("_curPart",14,af,1f,ef)},
	{::hx::fsInt,(int)offsetof(FlxSplash_obj,_cachedBgColor),HX_("_cachedBgColor",dd,d9,56,6b)},
	{::hx::fsBool,(int)offsetof(FlxSplash_obj,_cachedTimestep),HX_("_cachedTimestep",7a,54,fe,e6)},
	{::hx::fsBool,(int)offsetof(FlxSplash_obj,_cachedAutoPause),HX_("_cachedAutoPause",46,cb,1c,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxSplash_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::hx::Class */ ,(void *) &FlxSplash_obj::nextState,HX_("nextState",1e,90,50,2b)},
	{::hx::fsBool,(void *) &FlxSplash_obj::muted,HX_("muted",6b,8f,5b,10)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxSplash_obj_sMemberFields[] = {
	HX_("_sprite",a4,ed,0c,32),
	HX_("_gfx",7a,c6,19,3f),
	HX_("_text",8c,e8,0a,00),
	HX_("_times",07,07,1d,0c),
	HX_("_colors",4f,d7,fd,34),
	HX_("_functions",1c,86,a5,0f),
	HX_("_curPart",14,af,1f,ef),
	HX_("_cachedBgColor",dd,d9,56,6b),
	HX_("_cachedTimestep",7a,54,fe,e6),
	HX_("_cachedAutoPause",46,cb,1c,2d),
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	HX_("onResize",73,50,28,e8),
	HX_("timerCallback",aa,e2,0a,97),
	HX_("drawGreen",1f,44,f8,61),
	HX_("drawYellow",98,1a,20,12),
	HX_("drawRed",ad,bf,d6,fb),
	HX_("drawBlue",be,ec,82,55),
	HX_("drawLightBlue",ec,35,5e,19),
	HX_("onComplete",f8,d4,7e,5d),
	::String(null()) };

static void FlxSplash_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSplash_obj::nextState,"nextState");
	HX_MARK_MEMBER_NAME(FlxSplash_obj::muted,"muted");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSplash_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSplash_obj::nextState,"nextState");
	HX_VISIT_MEMBER_NAME(FlxSplash_obj::muted,"muted");
};

#endif

::hx::Class FlxSplash_obj::__mClass;

static ::String FlxSplash_obj_sStaticFields[] = {
	HX_("nextState",1e,90,50,2b),
	HX_("muted",6b,8f,5b,10),
	::String(null())
};

void FlxSplash_obj::__register()
{
	FlxSplash_obj _hx_dummy;
	FlxSplash_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxSplash",6c,4f,a8,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSplash_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSplash_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSplash_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSplash_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSplash_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSplash_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSplash_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSplash_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSplash_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSplash_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0cd566ad6ef5d750_23_boot)
HXDLIN(  23)		muted = false;
            	}
}

} // end namespace flixel
} // end namespace system
