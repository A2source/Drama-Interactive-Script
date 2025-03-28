#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#include <flixel/input/gamepad/FlxAnalogToDigitalMode.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode
#include <flixel/input/gamepad/FlxGamepadDeadZoneMode.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList
#include <flixel/input/gamepad/lists/FlxGamepadMotionValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList
#include <flixel/input/gamepad/lists/FlxGamepadPointerValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_LogitechMapping
#include <flixel/input/gamepad/mappings/LogitechMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_MFiMapping
#include <flixel/input/gamepad/mappings/MFiMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_MayflashWiiRemoteMapping
#include <flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_OUYAMapping
#include <flixel/input/gamepad/mappings/OUYAMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PS4Mapping
#include <flixel/input/gamepad/mappings/PS4Mapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PSVitaMapping
#include <flixel/input/gamepad/mappings/PSVitaMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_SwitchJoyconLeftMapping
#include <flixel/input/gamepad/mappings/SwitchJoyconLeftMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_SwitchJoyconRightMapping
#include <flixel/input/gamepad/mappings/SwitchJoyconRightMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_SwitchProMapping
#include <flixel/input/gamepad/mappings/SwitchProMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#include <flixel/input/gamepad/mappings/WiiRemoteMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_XInputMapping
#include <flixel/input/gamepad/mappings/XInputMapping.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a9014dd1064fc14_32_new,"flixel.input.gamepad.FlxGamepad","new",0x48c92544,"flixel.input.gamepad.FlxGamepad.new","flixel/input/gamepad/FlxGamepad.hx",32,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_174_getButton,"flixel.input.gamepad.FlxGamepad","getButton",0xf881030c,"flixel.input.gamepad.FlxGamepad.getButton","flixel/input/gamepad/FlxGamepad.hx",174,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_189_applyAxisFlip,"flixel.input.gamepad.FlxGamepad","applyAxisFlip",0xd984f960,"flixel.input.gamepad.FlxGamepad.applyAxisFlip","flixel/input/gamepad/FlxGamepad.hx",189,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_199_update,"flixel.input.gamepad.FlxGamepad","update",0x525157a5,"flixel.input.gamepad.FlxGamepad.update","flixel/input/gamepad/FlxGamepad.hx",199,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_265_reset,"flixel.input.gamepad.FlxGamepad","reset",0x36e79fb3,"flixel.input.gamepad.FlxGamepad.reset","flixel/input/gamepad/FlxGamepad.hx",265,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_288_destroy,"flixel.input.gamepad.FlxGamepad","destroy",0x3b91c3de,"flixel.input.gamepad.FlxGamepad.destroy","flixel/input/gamepad/FlxGamepad.hx",288,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_313_checkStatus,"flixel.input.gamepad.FlxGamepad","checkStatus",0x42f892fe,"flixel.input.gamepad.FlxGamepad.checkStatus","flixel/input/gamepad/FlxGamepad.hx",313,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_329_checkStatusRaw,"flixel.input.gamepad.FlxGamepad","checkStatusRaw",0x11516d8a,"flixel.input.gamepad.FlxGamepad.checkStatusRaw","flixel/input/gamepad/FlxGamepad.hx",329,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_342_checkButtonArrayState,"flixel.input.gamepad.FlxGamepad","checkButtonArrayState",0x928c7916,"flixel.input.gamepad.FlxGamepad.checkButtonArrayState","flixel/input/gamepad/FlxGamepad.hx",342,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_365_checkButtonArrayStateRaw,"flixel.input.gamepad.FlxGamepad","checkButtonArrayStateRaw",0x968e6672,"flixel.input.gamepad.FlxGamepad.checkButtonArrayStateRaw","flixel/input/gamepad/FlxGamepad.hx",365,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_388_anyPressed,"flixel.input.gamepad.FlxGamepad","anyPressed",0xee8d44b2,"flixel.input.gamepad.FlxGamepad.anyPressed","flixel/input/gamepad/FlxGamepad.hx",388,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_399_anyPressedRaw,"flixel.input.gamepad.FlxGamepad","anyPressedRaw",0x4ffbc456,"flixel.input.gamepad.FlxGamepad.anyPressedRaw","flixel/input/gamepad/FlxGamepad.hx",399,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_410_anyJustPressed,"flixel.input.gamepad.FlxGamepad","anyJustPressed",0xd6d7c7e6,"flixel.input.gamepad.FlxGamepad.anyJustPressed","flixel/input/gamepad/FlxGamepad.hx",410,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_421_anyJustPressedRaw,"flixel.input.gamepad.FlxGamepad","anyJustPressedRaw",0xeb4439a2,"flixel.input.gamepad.FlxGamepad.anyJustPressedRaw","flixel/input/gamepad/FlxGamepad.hx",421,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_432_anyJustReleased,"flixel.input.gamepad.FlxGamepad","anyJustReleased",0x2ccd2ef9,"flixel.input.gamepad.FlxGamepad.anyJustReleased","flixel/input/gamepad/FlxGamepad.hx",432,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_443_anyJustReleasedRaw,"flixel.input.gamepad.FlxGamepad","anyJustReleasedRaw",0x1df8406f,"flixel.input.gamepad.FlxGamepad.anyJustReleasedRaw","flixel/input/gamepad/FlxGamepad.hx",443,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_451_firstPressedID,"flixel.input.gamepad.FlxGamepad","firstPressedID",0xeb182e49,"flixel.input.gamepad.FlxGamepad.firstPressedID","flixel/input/gamepad/FlxGamepad.hx",451,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_464_firstPressedRawID,"flixel.input.gamepad.FlxGamepad","firstPressedRawID",0xee1a19f5,"flixel.input.gamepad.FlxGamepad.firstPressedRawID","flixel/input/gamepad/FlxGamepad.hx",464,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_480_firstJustPressedID,"flixel.input.gamepad.FlxGamepad","firstJustPressedID",0x153c347d,"flixel.input.gamepad.FlxGamepad.firstJustPressedID","flixel/input/gamepad/FlxGamepad.hx",480,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_493_firstJustPressedRawID,"flixel.input.gamepad.FlxGamepad","firstJustPressedRawID",0xcc1cec41,"flixel.input.gamepad.FlxGamepad.firstJustPressedRawID","flixel/input/gamepad/FlxGamepad.hx",493,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_509_firstJustReleasedID,"flixel.input.gamepad.FlxGamepad","firstJustReleasedID",0x71e64c58,"flixel.input.gamepad.FlxGamepad.firstJustReleasedID","flixel/input/gamepad/FlxGamepad.hx",509,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_522_firstJustReleasedRawID,"flixel.input.gamepad.FlxGamepad","firstJustReleasedRawID",0xfa5cef46,"flixel.input.gamepad.FlxGamepad.firstJustReleasedRawID","flixel/input/gamepad/FlxGamepad.hx",522,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_541_getAxis,"flixel.input.gamepad.FlxGamepad","getAxis",0x2a07633b,"flixel.input.gamepad.FlxGamepad.getAxis","flixel/input/gamepad/FlxGamepad.hx",541,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_569_getAxisRaw,"flixel.input.gamepad.FlxGamepad","getAxisRaw",0x2bb6a16d,"flixel.input.gamepad.FlxGamepad.getAxisRaw","flixel/input/gamepad/FlxGamepad.hx",569,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_579_isAxisForAnalogStick,"flixel.input.gamepad.FlxGamepad","isAxisForAnalogStick",0x770b861e,"flixel.input.gamepad.FlxGamepad.isAxisForAnalogStick","flixel/input/gamepad/FlxGamepad.hx",579,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_597_getAnalogStickByAxis,"flixel.input.gamepad.FlxGamepad","getAnalogStickByAxis",0xdbfed05e,"flixel.input.gamepad.FlxGamepad.getAnalogStickByAxis","flixel/input/gamepad/FlxGamepad.hx",597,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_614_getXAxis,"flixel.input.gamepad.FlxGamepad","getXAxis",0xb657655f,"flixel.input.gamepad.FlxGamepad.getXAxis","flixel/input/gamepad/FlxGamepad.hx",614,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_622_getXAxisRaw,"flixel.input.gamepad.FlxGamepad","getXAxisRaw",0x9b9f8dc9,"flixel.input.gamepad.FlxGamepad.getXAxisRaw","flixel/input/gamepad/FlxGamepad.hx",622,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_631_getYAxis,"flixel.input.gamepad.FlxGamepad","getYAxis",0x49bdf9e0,"flixel.input.gamepad.FlxGamepad.getYAxis","flixel/input/gamepad/FlxGamepad.hx",631,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_640_getYAxisRaw,"flixel.input.gamepad.FlxGamepad","getYAxisRaw",0xd4d1ffe8,"flixel.input.gamepad.FlxGamepad.getYAxisRaw","flixel/input/gamepad/FlxGamepad.hx",640,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_651_getAnalogAxes,"flixel.input.gamepad.FlxGamepad","getAnalogAxes",0xfcc3298f,"flixel.input.gamepad.FlxGamepad.getAnalogAxes","flixel/input/gamepad/FlxGamepad.hx",651,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_658_anyButton,"flixel.input.gamepad.FlxGamepad","anyButton",0xd989e1e2,"flixel.input.gamepad.FlxGamepad.anyButton","flixel/input/gamepad/FlxGamepad.hx",658,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_673_anyInput,"flixel.input.gamepad.FlxGamepad","anyInput",0x4fe8921a,"flixel.input.gamepad.FlxGamepad.anyInput","flixel/input/gamepad/FlxGamepad.hx",673,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_703_getAxisValue,"flixel.input.gamepad.FlxGamepad","getAxisValue",0xcd45f636,"flixel.input.gamepad.FlxGamepad.getAxisValue","flixel/input/gamepad/FlxGamepad.hx",703,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_733_getAnalogXAxisValue,"flixel.input.gamepad.FlxGamepad","getAnalogXAxisValue",0xef30b762,"flixel.input.gamepad.FlxGamepad.getAnalogXAxisValue","flixel/input/gamepad/FlxGamepad.hx",733,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_743_getAnalogYAxisValue,"flixel.input.gamepad.FlxGamepad","getAnalogYAxisValue",0xaf7b2f41,"flixel.input.gamepad.FlxGamepad.getAnalogYAxisValue","flixel/input/gamepad/FlxGamepad.hx",743,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_753_getAnalogAxisValueCircular,"flixel.input.gamepad.FlxGamepad","getAnalogAxisValueCircular",0x954ad2e5,"flixel.input.gamepad.FlxGamepad.getAnalogAxisValueCircular","flixel/input/gamepad/FlxGamepad.hx",753,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_771_getAnalogAxisValueIndependent,"flixel.input.gamepad.FlxGamepad","getAnalogAxisValueIndependent",0x41d504b4,"flixel.input.gamepad.FlxGamepad.getAnalogAxisValueIndependent","flixel/input/gamepad/FlxGamepad.hx",771,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_779_handleAxisMove,"flixel.input.gamepad.FlxGamepad","handleAxisMove",0x0dec85b6,"flixel.input.gamepad.FlxGamepad.handleAxisMove","flixel/input/gamepad/FlxGamepad.hx",779,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_798_handleAxisMoveSub,"flixel.input.gamepad.FlxGamepad","handleAxisMoveSub",0xcf80d16a,"flixel.input.gamepad.FlxGamepad.handleAxisMoveSub","flixel/input/gamepad/FlxGamepad.hx",798,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_830_createMappingForModel,"flixel.input.gamepad.FlxGamepad","createMappingForModel",0x1a17db56,"flixel.input.gamepad.FlxGamepad.createMappingForModel","flixel/input/gamepad/FlxGamepad.hx",830,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_850_get_name,"flixel.input.gamepad.FlxGamepad","get_name",0xdbd29e70,"flixel.input.gamepad.FlxGamepad.get_name","flixel/input/gamepad/FlxGamepad.hx",850,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_858_set_model,"flixel.input.gamepad.FlxGamepad","set_model",0xd59c83f0,"flixel.input.gamepad.FlxGamepad.set_model","flixel/input/gamepad/FlxGamepad.hx",858,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_866_set_attachment,"flixel.input.gamepad.FlxGamepad","set_attachment",0xa3a9463c,"flixel.input.gamepad.FlxGamepad.set_attachment","flixel/input/gamepad/FlxGamepad.hx",866,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_874_get_deadZone,"flixel.input.gamepad.FlxGamepad","get_deadZone",0x3fdae195,"flixel.input.gamepad.FlxGamepad.get_deadZone","flixel/input/gamepad/FlxGamepad.hx",874,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_879_set_deadZone,"flixel.input.gamepad.FlxGamepad","set_deadZone",0x54d40509,"flixel.input.gamepad.FlxGamepad.set_deadZone","flixel/input/gamepad/FlxGamepad.hx",879,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_887_getInputLabel,"flixel.input.gamepad.FlxGamepad","getInputLabel",0x585a0ba4,"flixel.input.gamepad.FlxGamepad.getInputLabel","flixel/input/gamepad/FlxGamepad.hx",887,0xdb78a809)
HX_LOCAL_STACK_FRAME(_hx_pos_0a9014dd1064fc14_892_toString,"flixel.input.gamepad.FlxGamepad","toString",0x4b874148,"flixel.input.gamepad.FlxGamepad.toString","flixel/input/gamepad/FlxGamepad.hx",892,0xdb78a809)
namespace flixel{
namespace input{
namespace gamepad{

void FlxGamepad_obj::__construct(int ID, ::flixel::input::gamepad::FlxGamepadManager Manager, ::flixel::input::gamepad::FlxGamepadModel Model, ::flixel::input::gamepad::FlxGamepadAttachment Attachment){
            	HX_GC_STACKFRAME(&_hx_pos_0a9014dd1064fc14_32_new)
HXLINE( 137)		this->buttons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 131)		this->_deadZone = ((Float)0.15);
HXLINE( 128)		this->axisActive = false;
HXLINE( 127)		::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 127)		{
HXLINE( 127)			_g->push(0);
HXDLIN( 127)			_g->push(0);
HXDLIN( 127)			_g->push(0);
HXDLIN( 127)			_g->push(0);
HXDLIN( 127)			_g->push(0);
HXDLIN( 127)			_g->push(0);
            		}
HXDLIN( 127)		this->axis = _g;
HXLINE(  84)		this->deadZoneMode = ::flixel::input::gamepad::FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES_dyn();
HXLINE(  61)		this->connected = true;
HXLINE( 141)		this->id = ID;
HXLINE( 143)		this->manager = Manager;
HXLINE( 145)		this->pressed =  ::flixel::input::gamepad::lists::FlxGamepadButtonList_obj::__alloc( HX_CTX ,1,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 146)		this->released =  ::flixel::input::gamepad::lists::FlxGamepadButtonList_obj::__alloc( HX_CTX ,0,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 147)		this->justPressed =  ::flixel::input::gamepad::lists::FlxGamepadButtonList_obj::__alloc( HX_CTX ,2,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 148)		this->justReleased =  ::flixel::input::gamepad::lists::FlxGamepadButtonList_obj::__alloc( HX_CTX ,-1,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 149)		this->analog =  ::flixel::input::gamepad::lists::FlxGamepadAnalogList_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 150)		this->motion =  ::flixel::input::gamepad::lists::FlxGamepadMotionValueList_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 151)		this->pointer =  ::flixel::input::gamepad::lists::FlxGamepadPointerValueList_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 153)		if (::hx::IsNull( Model )) {
HXLINE( 162)			Model = ::flixel::input::gamepad::FlxGamepadModel_obj::XINPUT_dyn();
            		}
HXLINE( 166)		if (::hx::IsNull( Attachment )) {
HXLINE( 167)			Attachment = ::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE_dyn();
            		}
HXLINE( 169)		this->set_model(Model);
HXLINE( 170)		this->detectedModel = Model;
            	}

Dynamic FlxGamepad_obj::__CreateEmpty() { return new FlxGamepad_obj; }

void *FlxGamepad_obj::_hx_vtable = 0;

Dynamic FlxGamepad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepad_obj > _hx_result = new FlxGamepad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxGamepad_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38588e22;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_gamepad_FlxGamepad__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::gamepad::FlxGamepad_obj::destroy,
};

void *FlxGamepad_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_gamepad_FlxGamepad__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::input::gamepad::FlxGamepadButton FlxGamepad_obj::getButton(int RawID){
            	HX_GC_STACKFRAME(&_hx_pos_0a9014dd1064fc14_174_getButton)
HXLINE( 175)		if ((RawID == -1)) {
HXLINE( 176)			return null();
            		}
HXLINE( 177)		 ::flixel::input::gamepad::FlxGamepadButton gamepadButton = this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXLINE( 179)		if (::hx::IsNull( gamepadButton )) {
HXLINE( 181)			gamepadButton =  ::flixel::input::gamepad::FlxGamepadButton_obj::__alloc( HX_CTX ,RawID);
HXLINE( 182)			this->buttons[RawID] = gamepadButton;
            		}
HXLINE( 185)		return gamepadButton;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getButton,return )

Float FlxGamepad_obj::applyAxisFlip(Float axisValue,int axisID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_189_applyAxisFlip)
HXLINE( 190)		if (this->mapping->isAxisFlipped(axisID)) {
HXLINE( 191)			axisValue = (axisValue * ( (Float)(-1) ));
            		}
HXLINE( 192)		return axisValue;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,applyAxisFlip,return )

void FlxGamepad_obj::update(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_199_update)
HXLINE( 201)		 ::openfl::ui::GameInputControl control;
HXLINE( 202)		 ::flixel::input::gamepad::FlxGamepadButton button;
HXLINE( 204)		if (::hx::IsNull( this->_device )) {
HXLINE( 205)			return;
            		}
HXLINE( 207)		{
HXLINE( 207)			int _g = 0;
HXDLIN( 207)			int _g1 = this->_device->get_numControls();
HXDLIN( 207)			while((_g < _g1)){
HXLINE( 207)				_g = (_g + 1);
HXDLIN( 207)				int i = (_g - 1);
HXLINE( 209)				control = this->_device->getControlAt(i);
HXLINE( 212)				button = this->getButton(i);
HXLINE( 214)				if (this->isAxisForAnalogStick(i)) {
HXLINE( 216)					this->handleAxisMove(i,control->value,button->value);
            				}
HXLINE( 219)				button->value = control->value;
HXLINE( 221)				Float value = ::Math_obj::abs(control->value);
HXLINE( 223)				if ((value < this->get_deadZone())) {
HXLINE( 225)					button->release();
            				}
            				else {
HXLINE( 227)					if ((value > this->get_deadZone())) {
HXLINE( 229)						button->press();
            					}
            				}
            			}
            		}
HXLINE( 255)		{
HXLINE( 255)			int _g2 = 0;
HXDLIN( 255)			::Array< ::Dynamic> _g3 = this->buttons;
HXDLIN( 255)			while((_g2 < _g3->length)){
HXLINE( 255)				 ::flixel::input::gamepad::FlxGamepadButton button = _g3->__get(_g2).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 255)				_g2 = (_g2 + 1);
HXLINE( 257)				if (::hx::IsNotNull( button )) {
HXLINE( 259)					button->update();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,update,(void))

void FlxGamepad_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_265_reset)
HXLINE( 266)		{
HXLINE( 266)			int _g = 0;
HXDLIN( 266)			::Array< ::Dynamic> _g1 = this->buttons;
HXDLIN( 266)			while((_g < _g1->length)){
HXLINE( 266)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 266)				_g = (_g + 1);
HXLINE( 268)				if (::hx::IsNotNull( button )) {
HXLINE( 270)					button->reset();
            				}
            			}
            		}
HXLINE( 274)		int numAxis = this->axis->length;
HXLINE( 276)		{
HXLINE( 276)			int _g2 = 0;
HXDLIN( 276)			int _g3 = numAxis;
HXDLIN( 276)			while((_g2 < _g3)){
HXLINE( 276)				_g2 = (_g2 + 1);
HXDLIN( 276)				int i = (_g2 - 1);
HXLINE( 278)				this->axis[i] = ( (Float)(0) );
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,reset,(void))

void FlxGamepad_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_288_destroy)
HXLINE( 289)		this->connected = false;
HXLINE( 291)		this->buttons = null();
HXLINE( 292)		this->axis = null();
HXLINE( 293)		this->manager = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,destroy,(void))

bool FlxGamepad_obj::checkStatus(int ID,int Status){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_313_checkStatus)
HXDLIN( 313)		switch((int)(ID)){
            			case (int)-2: {
HXLINE( 315)				return this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXLINE( 316)				return !(this->anyButton(Status));
            			}
            			break;
            			default:{
HXLINE( 317)				int RawID = this->mapping->getRawID(ID);
HXDLIN( 317)				 ::flixel::input::gamepad::FlxGamepadButton button = this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 317)				if (::hx::IsNotNull( button )) {
HXLINE( 317)					return button->hasState(Status);
            				}
            				else {
HXLINE( 317)					return false;
            				}
            			}
            		}
HXLINE( 313)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkStatus,return )

bool FlxGamepad_obj::checkStatusRaw(int RawID,int Status){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_329_checkStatusRaw)
HXLINE( 330)		 ::flixel::input::gamepad::FlxGamepadButton button = this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXLINE( 331)		if (::hx::IsNotNull( button )) {
HXLINE( 331)			return button->hasState(Status);
            		}
            		else {
HXLINE( 331)			return false;
            		}
HXDLIN( 331)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkStatusRaw,return )

bool FlxGamepad_obj::checkButtonArrayState(::Array< int > IDArray,int Status){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_342_checkButtonArrayState)
HXLINE( 343)		if (::hx::IsNull( IDArray )) {
HXLINE( 345)			return false;
            		}
HXLINE( 348)		{
HXLINE( 348)			int _g = 0;
HXDLIN( 348)			while((_g < IDArray->length)){
HXLINE( 348)				int code = IDArray->__get(_g);
HXDLIN( 348)				_g = (_g + 1);
HXLINE( 350)				bool _hx_tmp;
HXDLIN( 350)				switch((int)(code)){
            					case (int)-2: {
HXLINE( 350)						_hx_tmp = this->anyButton(Status);
            					}
            					break;
            					case (int)-1: {
HXLINE( 350)						_hx_tmp = !(this->anyButton(Status));
            					}
            					break;
            					default:{
HXLINE( 350)						int RawID = this->mapping->getRawID(code);
HXDLIN( 350)						 ::flixel::input::gamepad::FlxGamepadButton button = this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 350)						if (::hx::IsNotNull( button )) {
HXLINE( 350)							_hx_tmp = button->hasState(Status);
            						}
            						else {
HXLINE( 350)							_hx_tmp = false;
            						}
            					}
            				}
HXDLIN( 350)				if (_hx_tmp) {
HXLINE( 351)					return true;
            				}
            			}
            		}
HXLINE( 354)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkButtonArrayState,return )

bool FlxGamepad_obj::checkButtonArrayStateRaw(::Array< int > IDArray,int Status){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_365_checkButtonArrayStateRaw)
HXLINE( 366)		if (::hx::IsNull( IDArray )) {
HXLINE( 368)			return false;
            		}
HXLINE( 371)		{
HXLINE( 371)			int _g = 0;
HXDLIN( 371)			while((_g < IDArray->length)){
HXLINE( 371)				int code = IDArray->__get(_g);
HXDLIN( 371)				_g = (_g + 1);
HXLINE( 373)				 ::flixel::input::gamepad::FlxGamepadButton button = this->buttons->__get(code).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 373)				bool _hx_tmp;
HXDLIN( 373)				if (::hx::IsNotNull( button )) {
HXLINE( 373)					_hx_tmp = button->hasState(Status);
            				}
            				else {
HXLINE( 373)					_hx_tmp = false;
            				}
HXDLIN( 373)				if (_hx_tmp) {
HXLINE( 374)					return true;
            				}
            			}
            		}
HXLINE( 377)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkButtonArrayStateRaw,return )

bool FlxGamepad_obj::anyPressed(::Array< int > IDArray){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_388_anyPressed)
HXDLIN( 388)		return this->checkButtonArrayState(IDArray,1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyPressed,return )

bool FlxGamepad_obj::anyPressedRaw(::Array< int > RawIDArray){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_399_anyPressedRaw)
HXDLIN( 399)		return this->checkButtonArrayStateRaw(RawIDArray,1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyPressedRaw,return )

bool FlxGamepad_obj::anyJustPressed(::Array< int > IDArray){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_410_anyJustPressed)
HXDLIN( 410)		return this->checkButtonArrayState(IDArray,2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustPressed,return )

bool FlxGamepad_obj::anyJustPressedRaw(::Array< int > RawIDArray){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_421_anyJustPressedRaw)
HXDLIN( 421)		return this->checkButtonArrayStateRaw(RawIDArray,2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustPressedRaw,return )

bool FlxGamepad_obj::anyJustReleased(::Array< int > IDArray){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_432_anyJustReleased)
HXDLIN( 432)		return this->checkButtonArrayState(IDArray,-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustReleased,return )

bool FlxGamepad_obj::anyJustReleasedRaw(::Array< int > RawIDArray){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_443_anyJustReleasedRaw)
HXDLIN( 443)		return this->checkButtonArrayStateRaw(RawIDArray,-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustReleasedRaw,return )

int FlxGamepad_obj::firstPressedID(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_451_firstPressedID)
HXLINE( 452)		int id = this->firstPressedRawID();
HXLINE( 453)		if ((id < 0)) {
HXLINE( 454)			return id;
            		}
HXLINE( 456)		return this->mapping->getID(id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstPressedID,return )

int FlxGamepad_obj::firstPressedRawID(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_464_firstPressedRawID)
HXLINE( 465)		{
HXLINE( 465)			int _g = 0;
HXDLIN( 465)			::Array< ::Dynamic> _g1 = this->buttons;
HXDLIN( 465)			while((_g < _g1->length)){
HXLINE( 465)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 465)				_g = (_g + 1);
HXLINE( 467)				bool _hx_tmp;
HXDLIN( 467)				if (::hx::IsNotNull( button )) {
HXLINE( 467)					if ((button->current != 1)) {
HXLINE( 467)						_hx_tmp = (button->current == 2);
            					}
            					else {
HXLINE( 467)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 467)					_hx_tmp = false;
            				}
HXDLIN( 467)				if (_hx_tmp) {
HXLINE( 469)					return ( (int)(button->ID) );
            				}
            			}
            		}
HXLINE( 472)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstPressedRawID,return )

int FlxGamepad_obj::firstJustPressedID(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_480_firstJustPressedID)
HXLINE( 481)		int id = this->firstJustPressedRawID();
HXLINE( 482)		if ((id < 0)) {
HXLINE( 483)			return id;
            		}
HXLINE( 485)		return this->mapping->getID(id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustPressedID,return )

int FlxGamepad_obj::firstJustPressedRawID(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_493_firstJustPressedRawID)
HXLINE( 494)		{
HXLINE( 494)			int _g = 0;
HXDLIN( 494)			::Array< ::Dynamic> _g1 = this->buttons;
HXDLIN( 494)			while((_g < _g1->length)){
HXLINE( 494)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 494)				_g = (_g + 1);
HXLINE( 496)				bool _hx_tmp;
HXDLIN( 496)				if (::hx::IsNotNull( button )) {
HXLINE( 496)					_hx_tmp = (button->current == 2);
            				}
            				else {
HXLINE( 496)					_hx_tmp = false;
            				}
HXDLIN( 496)				if (_hx_tmp) {
HXLINE( 498)					return ( (int)(button->ID) );
            				}
            			}
            		}
HXLINE( 501)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustPressedRawID,return )

int FlxGamepad_obj::firstJustReleasedID(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_509_firstJustReleasedID)
HXLINE( 510)		int id = this->firstJustReleasedRawID();
HXLINE( 511)		if ((id < 0)) {
HXLINE( 512)			return id;
            		}
HXLINE( 514)		return this->mapping->getID(id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustReleasedID,return )

int FlxGamepad_obj::firstJustReleasedRawID(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_522_firstJustReleasedRawID)
HXLINE( 523)		{
HXLINE( 523)			int _g = 0;
HXDLIN( 523)			::Array< ::Dynamic> _g1 = this->buttons;
HXDLIN( 523)			while((_g < _g1->length)){
HXLINE( 523)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 523)				_g = (_g + 1);
HXLINE( 525)				bool _hx_tmp;
HXDLIN( 525)				if (::hx::IsNotNull( button )) {
HXLINE( 525)					_hx_tmp = (button->current == -1);
            				}
            				else {
HXLINE( 525)					_hx_tmp = false;
            				}
HXDLIN( 525)				if (_hx_tmp) {
HXLINE( 527)					return ( (int)(button->ID) );
            				}
            			}
            		}
HXLINE( 530)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustReleasedRawID,return )

Float FlxGamepad_obj::getAxis(int AxisButtonID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_541_getAxis)
HXDLIN( 541)		Float axisValue = this->getAxisValue(this->mapping->getRawID(AxisButtonID));
HXDLIN( 541)		Float _hx_tmp = ::Math_obj::abs(axisValue);
HXDLIN( 541)		if ((_hx_tmp > this->get_deadZone())) {
HXDLIN( 541)			return axisValue;
            		}
            		else {
HXDLIN( 541)			return ( (Float)(0) );
            		}
HXDLIN( 541)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxis,return )

Float FlxGamepad_obj::getAxisRaw(int RawAxisID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_569_getAxisRaw)
HXLINE( 570)		Float axisValue = this->getAxisValue(RawAxisID);
HXLINE( 571)		Float _hx_tmp = ::Math_obj::abs(axisValue);
HXDLIN( 571)		if ((_hx_tmp > this->get_deadZone())) {
HXLINE( 573)			return axisValue;
            		}
HXLINE( 575)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxisRaw,return )

bool FlxGamepad_obj::isAxisForAnalogStick(int AxisIndex){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_579_isAxisForAnalogStick)
HXLINE( 580)		 ::flixel::input::gamepad::FlxGamepadAnalogStick leftStick = this->mapping->leftStick;
HXLINE( 581)		 ::flixel::input::gamepad::FlxGamepadAnalogStick rightStick = this->mapping->rightStick;
HXLINE( 583)		if (::hx::IsNotNull( leftStick )) {
HXLINE( 585)			bool _hx_tmp;
HXDLIN( 585)			if ((AxisIndex != leftStick->x)) {
HXLINE( 585)				_hx_tmp = (AxisIndex == leftStick->y);
            			}
            			else {
HXLINE( 585)				_hx_tmp = true;
            			}
HXDLIN( 585)			if (_hx_tmp) {
HXLINE( 586)				return true;
            			}
            		}
HXLINE( 588)		if (::hx::IsNotNull( rightStick )) {
HXLINE( 590)			bool _hx_tmp;
HXDLIN( 590)			if ((AxisIndex != rightStick->x)) {
HXLINE( 590)				_hx_tmp = (AxisIndex == rightStick->y);
            			}
            			else {
HXLINE( 590)				_hx_tmp = true;
            			}
HXDLIN( 590)			if (_hx_tmp) {
HXLINE( 591)				return true;
            			}
            		}
HXLINE( 593)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,isAxisForAnalogStick,return )

 ::flixel::input::gamepad::FlxGamepadAnalogStick FlxGamepad_obj::getAnalogStickByAxis(int AxisIndex){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_597_getAnalogStickByAxis)
HXLINE( 598)		 ::flixel::input::gamepad::FlxGamepadAnalogStick leftStick = this->mapping->leftStick;
HXLINE( 599)		 ::flixel::input::gamepad::FlxGamepadAnalogStick rightStick = this->mapping->rightStick;
HXLINE( 601)		bool _hx_tmp;
HXDLIN( 601)		bool _hx_tmp1;
HXDLIN( 601)		if (::hx::IsNotNull( leftStick )) {
HXLINE( 601)			_hx_tmp1 = (AxisIndex == leftStick->x);
            		}
            		else {
HXLINE( 601)			_hx_tmp1 = false;
            		}
HXDLIN( 601)		if (!(_hx_tmp1)) {
HXLINE( 601)			_hx_tmp = (AxisIndex == leftStick->y);
            		}
            		else {
HXLINE( 601)			_hx_tmp = true;
            		}
HXDLIN( 601)		if (_hx_tmp) {
HXLINE( 602)			return leftStick;
            		}
HXLINE( 603)		bool _hx_tmp2;
HXDLIN( 603)		bool _hx_tmp3;
HXDLIN( 603)		if (::hx::IsNotNull( rightStick )) {
HXLINE( 603)			_hx_tmp3 = (AxisIndex == rightStick->x);
            		}
            		else {
HXLINE( 603)			_hx_tmp3 = false;
            		}
HXDLIN( 603)		if (!(_hx_tmp3)) {
HXLINE( 603)			_hx_tmp2 = (AxisIndex == rightStick->y);
            		}
            		else {
HXLINE( 603)			_hx_tmp2 = true;
            		}
HXDLIN( 603)		if (_hx_tmp2) {
HXLINE( 604)			return rightStick;
            		}
HXLINE( 605)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogStickByAxis,return )

Float FlxGamepad_obj::getXAxis(int AxesButtonID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_614_getXAxis)
HXDLIN( 614)		return this->getAnalogXAxisValue(this->mapping->getAnalogStick(AxesButtonID));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getXAxis,return )

Float FlxGamepad_obj::getXAxisRaw( ::flixel::input::gamepad::FlxGamepadAnalogStick Stick){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_622_getXAxisRaw)
HXDLIN( 622)		return this->getAnalogXAxisValue(Stick);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getXAxisRaw,return )

Float FlxGamepad_obj::getYAxis(int AxesButtonID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_631_getYAxis)
HXDLIN( 631)		return this->getYAxisRaw(this->mapping->getAnalogStick(AxesButtonID));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getYAxis,return )

Float FlxGamepad_obj::getYAxisRaw( ::flixel::input::gamepad::FlxGamepadAnalogStick Stick){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_640_getYAxisRaw)
HXDLIN( 640)		return this->getAnalogYAxisValue(Stick);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getYAxisRaw,return )

 ::flixel::math::FlxBasePoint FlxGamepad_obj::getAnalogAxes(int AxesButtonID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_651_getAnalogAxes)
HXDLIN( 651)		Float x = this->getAnalogXAxisValue(this->mapping->getAnalogStick(AxesButtonID));
HXDLIN( 651)		Float y = this->getYAxisRaw(this->mapping->getAnalogStick(AxesButtonID));
HXDLIN( 651)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 651)		point->_inPool = false;
HXDLIN( 651)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogAxes,return )

bool FlxGamepad_obj::anyButton(::hx::Null< int >  __o_state){
            		int state = __o_state.Default(1);
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_658_anyButton)
HXLINE( 659)		{
HXLINE( 659)			int _g = 0;
HXDLIN( 659)			::Array< ::Dynamic> _g1 = this->buttons;
HXDLIN( 659)			while((_g < _g1->length)){
HXLINE( 659)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 659)				_g = (_g + 1);
HXLINE( 661)				bool _hx_tmp;
HXDLIN( 661)				if (::hx::IsNotNull( button )) {
HXLINE( 661)					_hx_tmp = button->hasState(state);
            				}
            				else {
HXLINE( 661)					_hx_tmp = false;
            				}
HXDLIN( 661)				if (_hx_tmp) {
HXLINE( 663)					return true;
            				}
            			}
            		}
HXLINE( 666)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyButton,return )

bool FlxGamepad_obj::anyInput(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_673_anyInput)
HXLINE( 674)		if (this->anyButton(null())) {
HXLINE( 675)			return true;
            		}
HXLINE( 677)		int numAxis = this->axis->length;
HXLINE( 679)		{
HXLINE( 679)			int _g = 0;
HXDLIN( 679)			int _g1 = numAxis;
HXDLIN( 679)			while((_g < _g1)){
HXLINE( 679)				_g = (_g + 1);
HXDLIN( 679)				int i = (_g - 1);
HXLINE( 681)				if ((this->axis->__get(0) != 0)) {
HXLINE( 683)					return true;
            				}
            			}
            		}
HXLINE( 699)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyInput,return )

Float FlxGamepad_obj::getAxisValue(int AxisID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_703_getAxisValue)
HXLINE( 704)		Float axisValue = ( (Float)(0) );
HXLINE( 707)		if ((AxisID == -1)) {
HXLINE( 709)			return ( (Float)(0) );
            		}
HXLINE( 711)		bool _hx_tmp;
HXDLIN( 711)		bool _hx_tmp1;
HXDLIN( 711)		if (::hx::IsNotNull( this->_device )) {
HXLINE( 711)			_hx_tmp1 = this->_device->enabled;
            		}
            		else {
HXLINE( 711)			_hx_tmp1 = false;
            		}
HXDLIN( 711)		if (_hx_tmp1) {
HXLINE( 711)			 ::Dynamic Max = (this->_device->get_numControls() - 1);
HXDLIN( 711)			if ((AxisID >= 0)) {
HXLINE( 711)				if (::hx::IsNotNull( Max )) {
HXLINE( 711)					_hx_tmp = ::hx::IsLessEq( AxisID,Max );
            				}
            				else {
HXLINE( 711)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 711)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 711)			_hx_tmp = false;
            		}
HXDLIN( 711)		if (_hx_tmp) {
HXLINE( 713)			axisValue = this->_device->getControlAt(AxisID)->value;
            		}
HXLINE( 724)		if (this->isAxisForAnalogStick(AxisID)) {
HXLINE( 726)			Float axisValue1 = axisValue;
HXDLIN( 726)			if (this->mapping->isAxisFlipped(AxisID)) {
HXLINE( 726)				axisValue1 = (axisValue1 * ( (Float)(-1) ));
            			}
HXDLIN( 726)			axisValue = axisValue1;
            		}
HXLINE( 729)		return axisValue;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxisValue,return )

Float FlxGamepad_obj::getAnalogXAxisValue( ::flixel::input::gamepad::FlxGamepadAnalogStick stick){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_733_getAnalogXAxisValue)
HXLINE( 734)		if (::hx::IsNull( stick )) {
HXLINE( 735)			return ( (Float)(0) );
            		}
HXLINE( 736)		if (::hx::IsPointerEq( this->deadZoneMode,::flixel::input::gamepad::FlxGamepadDeadZoneMode_obj::CIRCULAR_dyn() )) {
HXLINE( 737)			return this->getAnalogAxisValueCircular(stick,stick->x);
            		}
            		else {
HXLINE( 739)			return this->getAnalogAxisValueIndependent(stick->x);
            		}
HXLINE( 736)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogXAxisValue,return )

Float FlxGamepad_obj::getAnalogYAxisValue( ::flixel::input::gamepad::FlxGamepadAnalogStick stick){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_743_getAnalogYAxisValue)
HXLINE( 744)		if (::hx::IsNull( stick )) {
HXLINE( 745)			return ( (Float)(0) );
            		}
HXLINE( 746)		if (::hx::IsPointerEq( this->deadZoneMode,::flixel::input::gamepad::FlxGamepadDeadZoneMode_obj::CIRCULAR_dyn() )) {
HXLINE( 747)			return this->getAnalogAxisValueCircular(stick,stick->y);
            		}
            		else {
HXLINE( 749)			return this->getAnalogAxisValueIndependent(stick->y);
            		}
HXLINE( 746)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogYAxisValue,return )

Float FlxGamepad_obj::getAnalogAxisValueCircular( ::flixel::input::gamepad::FlxGamepadAnalogStick stick,int axisID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_753_getAnalogAxisValueCircular)
HXLINE( 754)		if (::hx::IsNull( stick )) {
HXLINE( 755)			return ( (Float)(0) );
            		}
HXLINE( 756)		Float xAxis = this->getAxisValue(stick->x);
HXLINE( 757)		Float yAxis = this->getAxisValue(stick->y);
HXLINE( 759)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(xAxis,yAxis);
HXDLIN( 759)		point->_inPool = false;
HXDLIN( 759)		 ::flixel::math::FlxBasePoint vector = point;
HXLINE( 760)		Float length = ::Math_obj::sqrt(((vector->x * vector->x) + (vector->y * vector->y)));
HXLINE( 761)		vector->put();
HXLINE( 763)		if ((length > this->get_deadZone())) {
HXLINE( 765)			return this->getAxisValue(axisID);
            		}
HXLINE( 767)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,getAnalogAxisValueCircular,return )

Float FlxGamepad_obj::getAnalogAxisValueIndependent(int axisID){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_771_getAnalogAxisValueIndependent)
HXLINE( 772)		Float axisValue = this->getAxisValue(axisID);
HXLINE( 773)		Float _hx_tmp = ::Math_obj::abs(axisValue);
HXDLIN( 773)		if ((_hx_tmp > this->get_deadZone())) {
HXLINE( 774)			return axisValue;
            		}
HXLINE( 775)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogAxisValueIndependent,return )

void FlxGamepad_obj::handleAxisMove(int axis,Float newValue,Float oldValue){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_779_handleAxisMove)
HXLINE( 780)		Float axisValue = newValue;
HXDLIN( 780)		if (this->mapping->isAxisFlipped(axis)) {
HXLINE( 780)			axisValue = (axisValue * ( (Float)(-1) ));
            		}
HXDLIN( 780)		newValue = axisValue;
HXLINE( 781)		Float axisValue1 = oldValue;
HXDLIN( 781)		if (this->mapping->isAxisFlipped(axis)) {
HXLINE( 781)			axisValue1 = (axisValue1 * ( (Float)(-1) ));
            		}
HXDLIN( 781)		oldValue = axisValue1;
HXLINE( 784)		 ::flixel::input::gamepad::FlxGamepadAnalogStick leftStick = this->mapping->leftStick;
HXDLIN( 784)		 ::flixel::input::gamepad::FlxGamepadAnalogStick rightStick = this->mapping->rightStick;
HXDLIN( 784)		 ::flixel::input::gamepad::FlxGamepadAnalogStick stick;
HXDLIN( 784)		bool stick1;
HXDLIN( 784)		bool stick2;
HXDLIN( 784)		if (::hx::IsNotNull( leftStick )) {
HXLINE( 784)			stick2 = (axis == leftStick->x);
            		}
            		else {
HXLINE( 784)			stick2 = false;
            		}
HXDLIN( 784)		if (!(stick2)) {
HXLINE( 784)			stick1 = (axis == leftStick->y);
            		}
            		else {
HXLINE( 784)			stick1 = true;
            		}
HXDLIN( 784)		if (stick1) {
HXLINE( 784)			stick = leftStick;
            		}
            		else {
HXLINE( 784)			bool stick1;
HXDLIN( 784)			bool stick2;
HXDLIN( 784)			if (::hx::IsNotNull( rightStick )) {
HXLINE( 784)				stick2 = (axis == rightStick->x);
            			}
            			else {
HXLINE( 784)				stick2 = false;
            			}
HXDLIN( 784)			if (!(stick2)) {
HXLINE( 784)				stick1 = (axis == rightStick->y);
            			}
            			else {
HXLINE( 784)				stick1 = true;
            			}
HXDLIN( 784)			if (stick1) {
HXLINE( 784)				stick = rightStick;
            			}
            			else {
HXLINE( 784)				stick = null();
            			}
            		}
HXDLIN( 784)		 ::flixel::input::gamepad::FlxGamepadAnalogStick stick3 = stick;
HXLINE( 785)		bool _hx_tmp;
HXDLIN( 785)		if (::hx::IsPointerNotEq( stick3->mode,::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::ONLY_DIGITAL_dyn() )) {
HXLINE( 785)			_hx_tmp = ::hx::IsPointerEq( stick3->mode,::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::BOTH_dyn() );
            		}
            		else {
HXLINE( 785)			_hx_tmp = true;
            		}
HXDLIN( 785)		if (_hx_tmp) {
HXLINE( 787)			this->handleAxisMoveSub(stick3,axis,newValue,oldValue,((Float)1.0));
HXLINE( 788)			this->handleAxisMoveSub(stick3,axis,newValue,oldValue,((Float)-1.0));
HXLINE( 790)			bool _hx_tmp = ::hx::IsPointerEq( stick3->mode,::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::ONLY_DIGITAL_dyn() );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxGamepad_obj,handleAxisMove,(void))

void FlxGamepad_obj::handleAxisMoveSub( ::flixel::input::gamepad::FlxGamepadAnalogStick stick,int axis,Float value,Float oldValue,::hx::Null< Float >  __o_sign){
            		Float sign = __o_sign.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_798_handleAxisMoveSub)
HXLINE( 799)		int digitalButton = -1;
HXLINE( 801)		if ((axis == stick->x)) {
HXLINE( 803)			if ((sign < 0)) {
HXLINE( 803)				digitalButton = stick->rawLeft;
            			}
            			else {
HXLINE( 803)				digitalButton = stick->rawRight;
            			}
            		}
            		else {
HXLINE( 805)			if ((axis == stick->y)) {
HXLINE( 807)				if ((sign < 0)) {
HXLINE( 807)					digitalButton = stick->rawUp;
            				}
            				else {
HXLINE( 807)					digitalButton = stick->rawDown;
            				}
            			}
            		}
HXLINE( 810)		Float threshold = stick->digitalThreshold;
HXLINE( 811)		Float valueSign = (value * sign);
HXLINE( 812)		Float oldValueSign = (oldValue * sign);
HXLINE( 814)		bool _hx_tmp;
HXDLIN( 814)		if ((valueSign > threshold)) {
HXLINE( 814)			_hx_tmp = (oldValueSign <= threshold);
            		}
            		else {
HXLINE( 814)			_hx_tmp = false;
            		}
HXDLIN( 814)		if (_hx_tmp) {
HXLINE( 816)			 ::flixel::input::gamepad::FlxGamepadButton btn = this->getButton(digitalButton);
HXLINE( 817)			if (::hx::IsNotNull( btn )) {
HXLINE( 818)				btn->press();
            			}
            		}
            		else {
HXLINE( 820)			bool _hx_tmp;
HXDLIN( 820)			if ((valueSign <= threshold)) {
HXLINE( 820)				_hx_tmp = (oldValueSign > threshold);
            			}
            			else {
HXLINE( 820)				_hx_tmp = false;
            			}
HXDLIN( 820)			if (_hx_tmp) {
HXLINE( 822)				 ::flixel::input::gamepad::FlxGamepadButton btn = this->getButton(digitalButton);
HXLINE( 823)				if (::hx::IsNotNull( btn )) {
HXLINE( 824)					btn->release();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxGamepad_obj,handleAxisMoveSub,(void))

 ::flixel::input::gamepad::mappings::FlxGamepadMapping FlxGamepad_obj::createMappingForModel( ::flixel::input::gamepad::FlxGamepadModel model){
            	HX_GC_STACKFRAME(&_hx_pos_0a9014dd1064fc14_830_createMappingForModel)
HXDLIN( 830)		switch((int)(model->_hx_getIndex())){
            			case (int)0: {
HXLINE( 832)				return  ::flixel::input::gamepad::mappings::LogitechMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)1: {
HXLINE( 833)				return  ::flixel::input::gamepad::mappings::OUYAMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)2: {
HXLINE( 834)				return  ::flixel::input::gamepad::mappings::PS4Mapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)3: {
HXLINE( 835)				return  ::flixel::input::gamepad::mappings::PSVitaMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)4: {
HXLINE( 836)				return  ::flixel::input::gamepad::mappings::XInputMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)5: {
HXLINE( 837)				return  ::flixel::input::gamepad::mappings::MayflashWiiRemoteMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)6: {
HXLINE( 838)				return  ::flixel::input::gamepad::mappings::WiiRemoteMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)7: {
HXLINE( 839)				return  ::flixel::input::gamepad::mappings::MFiMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)8: {
HXLINE( 840)				return  ::flixel::input::gamepad::mappings::SwitchProMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)9: {
HXLINE( 841)				return  ::flixel::input::gamepad::mappings::SwitchJoyconLeftMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			case (int)10: {
HXLINE( 842)				return  ::flixel::input::gamepad::mappings::SwitchJoyconRightMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            			break;
            			default:{
HXLINE( 844)				return  ::flixel::input::gamepad::mappings::XInputMapping_obj::__alloc( HX_CTX ,this->attachment);
            			}
            		}
HXLINE( 830)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,createMappingForModel,return )

::String FlxGamepad_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_850_get_name)
HXLINE( 851)		if (::hx::IsNull( this->_device )) {
HXLINE( 852)			return null();
            		}
HXLINE( 853)		return this->_device->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_name,return )

 ::flixel::input::gamepad::FlxGamepadModel FlxGamepad_obj::set_model( ::flixel::input::gamepad::FlxGamepadModel Model){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_858_set_model)
HXLINE( 859)		this->model = Model;
HXLINE( 860)		this->mapping = this->createMappingForModel(this->model);
HXLINE( 862)		return this->model;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,set_model,return )

 ::flixel::input::gamepad::FlxGamepadAttachment FlxGamepad_obj::set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment Attachment){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_866_set_attachment)
HXLINE( 867)		this->attachment = Attachment;
HXLINE( 868)		this->mapping->set_attachment(Attachment);
HXLINE( 869)		return this->attachment;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,set_attachment,return )

Float FlxGamepad_obj::get_deadZone(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_874_get_deadZone)
HXDLIN( 874)		bool _hx_tmp;
HXDLIN( 874)		if (::hx::IsNotNull( this->manager )) {
HXDLIN( 874)			_hx_tmp = ::hx::IsNull( this->manager->globalDeadZone );
            		}
            		else {
HXDLIN( 874)			_hx_tmp = true;
            		}
HXDLIN( 874)		if (_hx_tmp) {
HXDLIN( 874)			return this->_deadZone;
            		}
            		else {
HXDLIN( 874)			return ( (Float)(this->manager->globalDeadZone) );
            		}
HXDLIN( 874)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_deadZone,return )

Float FlxGamepad_obj::set_deadZone(Float deadZone){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_879_set_deadZone)
HXDLIN( 879)		return (this->_deadZone = deadZone);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,set_deadZone,return )

::String FlxGamepad_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_887_getInputLabel)
HXDLIN( 887)		return this->mapping->getInputLabel(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getInputLabel,return )

::String FlxGamepad_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_0a9014dd1064fc14_892_toString)
HXLINE( 893)		 ::Dynamic value = this->id;
HXDLIN( 893)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 893)		_this->label = HX_("id",db,5b,00,00);
HXDLIN( 893)		_this->value = value;
HXLINE( 894)		 ::Dynamic value1 = this->model;
HXDLIN( 894)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 894)		_this1->label = HX_("model",a9,23,58,0c);
HXDLIN( 894)		_this1->value = value1;
HXLINE( 895)		 ::Dynamic value2 = this->get_deadZone();
HXDLIN( 895)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 895)		_this2->label = HX_("deadZone",f0,3e,2e,58);
HXDLIN( 895)		_this2->value = value2;
HXLINE( 892)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(3)->init(0,_this)->init(1,_this1)->init(2,_this2));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,toString,return )


::hx::ObjectPtr< FlxGamepad_obj > FlxGamepad_obj::__new(int ID, ::flixel::input::gamepad::FlxGamepadManager Manager, ::flixel::input::gamepad::FlxGamepadModel Model, ::flixel::input::gamepad::FlxGamepadAttachment Attachment) {
	::hx::ObjectPtr< FlxGamepad_obj > __this = new FlxGamepad_obj();
	__this->__construct(ID,Manager,Model,Attachment);
	return __this;
}

::hx::ObjectPtr< FlxGamepad_obj > FlxGamepad_obj::__alloc(::hx::Ctx *_hx_ctx,int ID, ::flixel::input::gamepad::FlxGamepadManager Manager, ::flixel::input::gamepad::FlxGamepadModel Model, ::flixel::input::gamepad::FlxGamepadAttachment Attachment) {
	FlxGamepad_obj *__this = (FlxGamepad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepad_obj), true, "flixel.input.gamepad.FlxGamepad"));
	*(void **)__this = FlxGamepad_obj::_hx_vtable;
	__this->__construct(ID,Manager,Model,Attachment);
	return __this;
}

FlxGamepad_obj::FlxGamepad_obj()
{
}

void FlxGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepad);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(detectedModel,"detectedModel");
	HX_MARK_MEMBER_NAME(mapping,"mapping");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(attachment,"attachment");
	HX_MARK_MEMBER_NAME(deadZoneMode,"deadZoneMode");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(released,"released");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(analog,"analog");
	HX_MARK_MEMBER_NAME(motion,"motion");
	HX_MARK_MEMBER_NAME(pointer,"pointer");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(axisActive,"axisActive");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(_deadZone,"_deadZone");
	HX_MARK_MEMBER_NAME(_device,"_device");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_END_CLASS();
}

void FlxGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(detectedModel,"detectedModel");
	HX_VISIT_MEMBER_NAME(mapping,"mapping");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(attachment,"attachment");
	HX_VISIT_MEMBER_NAME(deadZoneMode,"deadZoneMode");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(released,"released");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(analog,"analog");
	HX_VISIT_MEMBER_NAME(motion,"motion");
	HX_VISIT_MEMBER_NAME(pointer,"pointer");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(axisActive,"axisActive");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(_deadZone,"_deadZone");
	HX_VISIT_MEMBER_NAME(_device,"_device");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
}

::hx::Val FlxGamepad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		if (HX_FIELD_EQ(inName,"axis") ) { return ::hx::Val( axis ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"analog") ) { return ::hx::Val( analog ); }
		if (HX_FIELD_EQ(inName,"motion") ) { return ::hx::Val( motion ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapping") ) { return ::hx::Val( mapping ); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return ::hx::Val( pressed ); }
		if (HX_FIELD_EQ(inName,"pointer") ) { return ::hx::Val( pointer ); }
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
		if (HX_FIELD_EQ(inName,"_device") ) { return ::hx::Val( _device ); }
		if (HX_FIELD_EQ(inName,"buttons") ) { return ::hx::Val( buttons ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return ::hx::Val( getAxis_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_deadZone() ); }
		if (HX_FIELD_EQ(inName,"released") ) { return ::hx::Val( released ); }
		if (HX_FIELD_EQ(inName,"getXAxis") ) { return ::hx::Val( getXAxis_dyn() ); }
		if (HX_FIELD_EQ(inName,"getYAxis") ) { return ::hx::Val( getYAxis_dyn() ); }
		if (HX_FIELD_EQ(inName,"anyInput") ) { return ::hx::Val( anyInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return ::hx::Val( connected ); }
		if (HX_FIELD_EQ(inName,"_deadZone") ) { return ::hx::Val( _deadZone ); }
		if (HX_FIELD_EQ(inName,"getButton") ) { return ::hx::Val( getButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return ::hx::Val( anyButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_model") ) { return ::hx::Val( set_model_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachment") ) { return ::hx::Val( attachment ); }
		if (HX_FIELD_EQ(inName,"axisActive") ) { return ::hx::Val( axisActive ); }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return ::hx::Val( anyPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAxisRaw") ) { return ::hx::Val( getAxisRaw_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return ::hx::Val( justPressed ); }
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return ::hx::Val( checkStatus_dyn() ); }
		if (HX_FIELD_EQ(inName,"getXAxisRaw") ) { return ::hx::Val( getXAxisRaw_dyn() ); }
		if (HX_FIELD_EQ(inName,"getYAxisRaw") ) { return ::hx::Val( getYAxisRaw_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deadZoneMode") ) { return ::hx::Val( deadZoneMode ); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return ::hx::Val( justReleased ); }
		if (HX_FIELD_EQ(inName,"getAxisValue") ) { return ::hx::Val( getAxisValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_deadZone") ) { return ::hx::Val( get_deadZone_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_deadZone") ) { return ::hx::Val( set_deadZone_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detectedModel") ) { return ::hx::Val( detectedModel ); }
		if (HX_FIELD_EQ(inName,"applyAxisFlip") ) { return ::hx::Val( applyAxisFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"anyPressedRaw") ) { return ::hx::Val( anyPressedRaw_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAnalogAxes") ) { return ::hx::Val( getAnalogAxes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkStatusRaw") ) { return ::hx::Val( checkStatusRaw_dyn() ); }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return ::hx::Val( anyJustPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"firstPressedID") ) { return ::hx::Val( firstPressedID_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return ::hx::Val( handleAxisMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return ::hx::Val( set_attachment_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return ::hx::Val( anyJustReleased_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"anyJustPressedRaw") ) { return ::hx::Val( anyJustPressedRaw_dyn() ); }
		if (HX_FIELD_EQ(inName,"firstPressedRawID") ) { return ::hx::Val( firstPressedRawID_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAxisMoveSub") ) { return ::hx::Val( handleAxisMoveSub_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"anyJustReleasedRaw") ) { return ::hx::Val( anyJustReleasedRaw_dyn() ); }
		if (HX_FIELD_EQ(inName,"firstJustPressedID") ) { return ::hx::Val( firstJustPressedID_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"firstJustReleasedID") ) { return ::hx::Val( firstJustReleasedID_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAnalogXAxisValue") ) { return ::hx::Val( getAnalogXAxisValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAnalogYAxisValue") ) { return ::hx::Val( getAnalogYAxisValue_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isAxisForAnalogStick") ) { return ::hx::Val( isAxisForAnalogStick_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAnalogStickByAxis") ) { return ::hx::Val( getAnalogStickByAxis_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"checkButtonArrayState") ) { return ::hx::Val( checkButtonArrayState_dyn() ); }
		if (HX_FIELD_EQ(inName,"firstJustPressedRawID") ) { return ::hx::Val( firstJustPressedRawID_dyn() ); }
		if (HX_FIELD_EQ(inName,"createMappingForModel") ) { return ::hx::Val( createMappingForModel_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"firstJustReleasedRawID") ) { return ::hx::Val( firstJustReleasedRawID_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"checkButtonArrayStateRaw") ) { return ::hx::Val( checkButtonArrayStateRaw_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getAnalogAxisValueCircular") ) { return ::hx::Val( getAnalogAxisValueCircular_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getAnalogAxisValueIndependent") ) { return ::hx::Val( getAnalogAxisValueIndependent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGamepad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_model(inValue.Cast<  ::flixel::input::gamepad::FlxGamepadModel >()) );model=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadModel >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"analog") ) { analog=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadAnalogList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"motion") ) { motion=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadMotionValueList >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapping") ) { mapping=inValue.Cast<  ::flixel::input::gamepad::mappings::FlxGamepadMapping >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadButtonList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointer") ) { pointer=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadPointerValueList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_device") ) { _device=inValue.Cast<  ::openfl::ui::GameInputDevice >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_deadZone(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"released") ) { released=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadButtonList >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deadZone") ) { _deadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_attachment(inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAttachment >()) );attachment=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAttachment >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisActive") ) { axisActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadButtonList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deadZoneMode") ) { deadZoneMode=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadDeadZoneMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadButtonList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detectedModel") ) { detectedModel=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadModel >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("model",a9,23,58,0c));
	outFields->push(HX_("detectedModel",c7,fe,45,f3));
	outFields->push(HX_("mapping",0e,7b,7a,44));
	outFields->push(HX_("connected",c9,e2,f6,a2));
	outFields->push(HX_("attachment",e3,07,73,dd));
	outFields->push(HX_("deadZone",f0,3e,2e,58));
	outFields->push(HX_("deadZoneMode",73,76,8a,42));
	outFields->push(HX_("pressed",a2,d2,e6,39));
	outFields->push(HX_("released",bd,88,e7,76));
	outFields->push(HX_("justPressed",d6,0d,a7,f2));
	outFields->push(HX_("justReleased",09,1b,5b,66));
	outFields->push(HX_("analog",30,d6,21,5f));
	outFields->push(HX_("motion",36,86,5d,cb));
	outFields->push(HX_("pointer",bd,c0,21,51));
	outFields->push(HX_("axis",a1,1c,79,40));
	outFields->push(HX_("axisActive",47,81,10,2c));
	outFields->push(HX_("manager",6d,92,c1,13));
	outFields->push(HX_("_deadZone",4f,36,c4,9f));
	outFields->push(HX_("_device",35,ee,ee,df));
	outFields->push(HX_("buttons",41,52,75,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGamepad_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxGamepad_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadModel */ ,(int)offsetof(FlxGamepad_obj,model),HX_("model",a9,23,58,0c)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadModel */ ,(int)offsetof(FlxGamepad_obj,detectedModel),HX_("detectedModel",c7,fe,45,f3)},
	{::hx::fsObject /*  ::flixel::input::gamepad::mappings::FlxGamepadMapping */ ,(int)offsetof(FlxGamepad_obj,mapping),HX_("mapping",0e,7b,7a,44)},
	{::hx::fsBool,(int)offsetof(FlxGamepad_obj,connected),HX_("connected",c9,e2,f6,a2)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAttachment */ ,(int)offsetof(FlxGamepad_obj,attachment),HX_("attachment",e3,07,73,dd)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadDeadZoneMode */ ,(int)offsetof(FlxGamepad_obj,deadZoneMode),HX_("deadZoneMode",73,76,8a,42)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadButtonList */ ,(int)offsetof(FlxGamepad_obj,pressed),HX_("pressed",a2,d2,e6,39)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadButtonList */ ,(int)offsetof(FlxGamepad_obj,released),HX_("released",bd,88,e7,76)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadButtonList */ ,(int)offsetof(FlxGamepad_obj,justPressed),HX_("justPressed",d6,0d,a7,f2)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadButtonList */ ,(int)offsetof(FlxGamepad_obj,justReleased),HX_("justReleased",09,1b,5b,66)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadAnalogList */ ,(int)offsetof(FlxGamepad_obj,analog),HX_("analog",30,d6,21,5f)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadMotionValueList */ ,(int)offsetof(FlxGamepad_obj,motion),HX_("motion",36,86,5d,cb)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadPointerValueList */ ,(int)offsetof(FlxGamepad_obj,pointer),HX_("pointer",bd,c0,21,51)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxGamepad_obj,axis),HX_("axis",a1,1c,79,40)},
	{::hx::fsBool,(int)offsetof(FlxGamepad_obj,axisActive),HX_("axisActive",47,81,10,2c)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadManager */ ,(int)offsetof(FlxGamepad_obj,manager),HX_("manager",6d,92,c1,13)},
	{::hx::fsFloat,(int)offsetof(FlxGamepad_obj,_deadZone),HX_("_deadZone",4f,36,c4,9f)},
	{::hx::fsObject /*  ::openfl::ui::GameInputDevice */ ,(int)offsetof(FlxGamepad_obj,_device),HX_("_device",35,ee,ee,df)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxGamepad_obj,buttons),HX_("buttons",41,52,75,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGamepad_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepad_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("model",a9,23,58,0c),
	HX_("detectedModel",c7,fe,45,f3),
	HX_("mapping",0e,7b,7a,44),
	HX_("connected",c9,e2,f6,a2),
	HX_("attachment",e3,07,73,dd),
	HX_("deadZoneMode",73,76,8a,42),
	HX_("pressed",a2,d2,e6,39),
	HX_("released",bd,88,e7,76),
	HX_("justPressed",d6,0d,a7,f2),
	HX_("justReleased",09,1b,5b,66),
	HX_("analog",30,d6,21,5f),
	HX_("motion",36,86,5d,cb),
	HX_("pointer",bd,c0,21,51),
	HX_("axis",a1,1c,79,40),
	HX_("axisActive",47,81,10,2c),
	HX_("manager",6d,92,c1,13),
	HX_("_deadZone",4f,36,c4,9f),
	HX_("_device",35,ee,ee,df),
	HX_("buttons",41,52,75,ca),
	HX_("getButton",28,eb,36,56),
	HX_("applyAxisFlip",7c,1f,87,cb),
	HX_("update",09,86,05,87),
	HX_("reset",cf,49,c8,e6),
	HX_("destroy",fa,2c,86,24),
	HX_("checkStatus",1a,ba,0d,e8),
	HX_("checkStatusRaw",ee,9f,30,e1),
	HX_("checkButtonArrayState",32,1b,8c,3e),
	HX_("checkButtonArrayStateRaw",d6,fd,01,5b),
	HX_("anyPressed",16,75,02,90),
	HX_("anyPressedRaw",72,ea,fd,41),
	HX_("anyJustPressed",4a,fa,b6,a6),
	HX_("anyJustPressedRaw",be,9d,89,5f),
	HX_("anyJustReleased",15,14,3a,40),
	HX_("anyJustReleasedRaw",d3,74,6a,66),
	HX_("firstPressedID",ad,60,f7,ba),
	HX_("firstPressedRawID",11,7e,5f,62),
	HX_("firstJustPressedID",e1,68,ae,5d),
	HX_("firstJustPressedRawID",5d,8e,1c,78),
	HX_("firstJustReleasedID",74,ef,61,8d),
	HX_("firstJustReleasedRawID",aa,25,0b,ce),
	HX_("getAxis",57,cc,fb,12),
	HX_("getAxisRaw",d1,d1,2b,cd),
	HX_("isAxisForAnalogStick",82,9b,be,67),
	HX_("getAnalogStickByAxis",c2,e5,b1,cc),
	HX_("getXAxis",c3,f4,3e,a3),
	HX_("getXAxisRaw",e5,b4,b4,40),
	HX_("getYAxis",44,89,a5,36),
	HX_("getYAxisRaw",04,27,e7,79),
	HX_("getAnalogAxes",ab,4f,c5,ee),
	HX_("anyButton",fe,c9,3f,37),
	HX_("anyInput",7e,21,d0,3c),
	HX_("getAxisValue",9a,07,b3,9a),
	HX_("getAnalogXAxisValue",7e,5a,ac,0a),
	HX_("getAnalogYAxisValue",5d,d2,f6,ca),
	HX_("getAnalogAxisValueCircular",49,0b,5e,0f),
	HX_("getAnalogAxisValueIndependent",d0,22,ae,5b),
	HX_("handleAxisMove",1a,b8,cb,dd),
	HX_("handleAxisMoveSub",86,35,c6,43),
	HX_("createMappingForModel",72,7d,17,c6),
	HX_("get_name",d4,2d,ba,c8),
	HX_("set_model",0c,6c,52,33),
	HX_("set_attachment",a0,78,88,73),
	HX_("get_deadZone",f9,f2,47,0d),
	HX_("set_deadZone",6d,16,41,22),
	HX_("getInputLabel",c0,31,5c,4a),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FlxGamepad_obj::__mClass;

void FlxGamepad_obj::__register()
{
	FlxGamepad_obj _hx_dummy;
	FlxGamepad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.FlxGamepad",52,73,7c,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepad_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
