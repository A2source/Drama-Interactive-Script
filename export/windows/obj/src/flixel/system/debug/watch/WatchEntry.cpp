#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicCloseButton
#include <flixel/system/debug/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#include <flixel/system/debug/watch/EditableTextField.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_49_new,"flixel.system.debug.watch.WatchEntry","new",0x96ec41fc,"flixel.system.debug.watch.WatchEntry.new","flixel/system/debug/watch/WatchEntry.hx",49,0x2bd112d2)
HX_DEFINE_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_36_new,"flixel.system.debug.watch.WatchEntry","new",0x96ec41fc,"flixel.system.debug.watch.WatchEntry.new","flixel/system/debug/watch/WatchEntry.hx",36,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_56_getTextColor,"flixel.system.debug.watch.WatchEntry","getTextColor",0xd55318e4,"flixel.system.debug.watch.WatchEntry.getTextColor","flixel/system/debug/watch/WatchEntry.hx",56,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_66_initTextField,"flixel.system.debug.watch.WatchEntry","initTextField",0x8df9f439,"flixel.system.debug.watch.WatchEntry.initTextField","flixel/system/debug/watch/WatchEntry.hx",66,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_76_updateSize,"flixel.system.debug.watch.WatchEntry","updateSize",0x108dc54e,"flixel.system.debug.watch.WatchEntry.updateSize","flixel/system/debug/watch/WatchEntry.hx",76,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_86_updateName,"flixel.system.debug.watch.WatchEntry","updateName",0x0d3996d8,"flixel.system.debug.watch.WatchEntry.updateName","flixel/system/debug/watch/WatchEntry.hx",86,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_105_setNameText,"flixel.system.debug.watch.WatchEntry","setNameText",0x82ef23f6,"flixel.system.debug.watch.WatchEntry.setNameText","flixel/system/debug/watch/WatchEntry.hx",105,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_113_getValue,"flixel.system.debug.watch.WatchEntry","getValue",0xc769c7df,"flixel.system.debug.watch.WatchEntry.getValue","flixel/system/debug/watch/WatchEntry.hx",113,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_131_getFormattedValue,"flixel.system.debug.watch.WatchEntry","getFormattedValue",0xb861eca7,"flixel.system.debug.watch.WatchEntry.getFormattedValue","flixel/system/debug/watch/WatchEntry.hx",131,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_140_submitValue,"flixel.system.debug.watch.WatchEntry","submitValue",0x1e7eadd5,"flixel.system.debug.watch.WatchEntry.submitValue","flixel/system/debug/watch/WatchEntry.hx",140,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_150_updateValue,"flixel.system.debug.watch.WatchEntry","updateValue",0x205e5644,"flixel.system.debug.watch.WatchEntry.updateValue","flixel/system/debug/watch/WatchEntry.hx",150,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_156_getNameWidth,"flixel.system.debug.watch.WatchEntry","getNameWidth",0xb6209b29,"flixel.system.debug.watch.WatchEntry.getNameWidth","flixel/system/debug/watch/WatchEntry.hx",156,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_161_getMinWidth,"flixel.system.debug.watch.WatchEntry","getMinWidth",0xf09b5366,"flixel.system.debug.watch.WatchEntry.getMinWidth","flixel/system/debug/watch/WatchEntry.hx",161,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_165_destroy,"flixel.system.debug.watch.WatchEntry","destroy",0x012d9c96,"flixel.system.debug.watch.WatchEntry.destroy","flixel/system/debug/watch/WatchEntry.hx",165,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_23_boot,"flixel.system.debug.watch.WatchEntry","boot",0x6fe67b16,"flixel.system.debug.watch.WatchEntry.boot","flixel/system/debug/watch/WatchEntry.hx",23,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_24_boot,"flixel.system.debug.watch.WatchEntry","boot",0x6fe67b16,"flixel.system.debug.watch.WatchEntry.boot","flixel/system/debug/watch/WatchEntry.hx",24,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_25_boot,"flixel.system.debug.watch.WatchEntry","boot",0x6fe67b16,"flixel.system.debug.watch.WatchEntry.boot","flixel/system/debug/watch/WatchEntry.hx",25,0x2bd112d2)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void WatchEntry_obj::__construct(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::_hx_system::debug::watch::WatchEntry,a1, ::Dynamic,_g) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_49_new)
HXLINE(  49)			_g(a1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_36_new)
HXLINE(  37)		super::__construct();
HXLINE(  39)		this->displayName = displayName;
HXLINE(  40)		this->data = data;
HXLINE(  42)		::String _hx_tmp = ::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER;
HXDLIN(  42)		this->defaultFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,_hx_tmp,12,this->getTextColor(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  43)		this->nameText = ( ( ::openfl::text::TextField)(this->initTextField(::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null()))) );
HXLINE(  44)		 ::ValueType expectedType = ::Type_obj::_hx_typeof(this->getValue());
HXLINE(  45)		bool _hx_tmp1;
HXDLIN(  45)		if ((data->_hx_getIndex() == 0)) {
HXLINE(  45)			 ::Dynamic _g = data->_hx_getObject(0);
HXDLIN(  45)			::String _g1 = data->_hx_getString(1);
HXDLIN(  45)			_hx_tmp1 = true;
            		}
            		else {
HXLINE(  45)			_hx_tmp1 = false;
            		}
HXDLIN(  45)		this->valueText = ( ( ::flixel::_hx_system::debug::watch::EditableTextField)(this->initTextField(::flixel::_hx_system::debug::DebuggerUtil_obj::initTextField( ::flixel::_hx_system::debug::watch::EditableTextField_obj::__alloc( HX_CTX ,_hx_tmp1,this->defaultFormat,this->submitValue_dyn(),expectedType),null(),null(),null(),null()))) );
HXLINE(  47)		this->updateName();
HXLINE(  49)		 ::Dynamic _g = removeEntry;
HXDLIN(  49)		 ::flixel::_hx_system::debug::watch::WatchEntry a1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  49)		 ::Dynamic _hx_tmp2 =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN(  49)		this->addChild((this->removeButton =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX , ::flixel::_hx_system::debug::GraphicCloseButton_obj::__alloc( HX_CTX ,0,0,null(),null()),_hx_tmp2,null())));
HXLINE(  50)		 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp3 = this->removeButton;
HXDLIN(  50)		_hx_tmp3->set_y(((( (Float)(20) ) - this->removeButton->get_height()) / ( (Float)(2) )));
HXLINE(  51)		this->removeButton->set_alpha(((Float)0.3));
            	}

Dynamic WatchEntry_obj::__CreateEmpty() { return new WatchEntry_obj; }

void *WatchEntry_obj::_hx_vtable = 0;

Dynamic WatchEntry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WatchEntry_obj > _hx_result = new WatchEntry_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool WatchEntry_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x24675832 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_system_debug_watch_WatchEntry__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::_hx_system::debug::watch::WatchEntry_obj::destroy,
};

void *WatchEntry_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_system_debug_watch_WatchEntry__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

int WatchEntry_obj::getTextColor(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_56_getTextColor)
HXDLIN(  56)		 ::flixel::_hx_system::debug::watch::WatchEntryData _g = this->data;
HXDLIN(  56)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  58)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN(  58)				::String _g2 = _g->_hx_getString(1);
HXDLIN(  58)				return 16777215;
            			}
            			break;
            			case (int)1: {
HXLINE(  59)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  59)				return 10875373;
            			}
            			break;
            			case (int)2: {
HXLINE(  60)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  60)				 ::hscript::Expr _g2 = _g->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  60)				return 12910211;
            			}
            			break;
            			case (int)3: {
HXLINE(  61)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN(  61)				return 15836581;
            			}
            			break;
            		}
HXLINE(  56)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getTextColor,return )

 ::Dynamic WatchEntry_obj::initTextField( ::Dynamic textField){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_66_initTextField)
HXLINE(  67)		( ( ::openfl::text::TextField)(textField) )->set_selectable(true);
HXLINE(  68)		( ( ::openfl::text::TextField)(textField) )->set_defaultTextFormat(this->defaultFormat);
HXLINE(  69)		( ( ::openfl::text::TextField)(textField) )->set_autoSize(2);
HXLINE(  70)		( ( ::openfl::text::TextField)(textField) )->set_height(( (Float)(20) ));
HXLINE(  71)		this->addChild(( ( ::openfl::display::DisplayObject)(textField) ));
HXLINE(  72)		return textField;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,initTextField,return )

void WatchEntry_obj::updateSize(Float nameWidth,Float windowWidth){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_76_updateSize)
HXLINE(  77)		Float textWidth = ((windowWidth - this->removeButton->get_width()) - ( (Float)(4) ));
HXLINE(  79)		this->nameText->set_width(nameWidth);
HXLINE(  80)		this->valueText->set_x((nameWidth + 4));
HXLINE(  81)		this->valueText->set_width(((textWidth - nameWidth) - ( (Float)(4) )));
HXLINE(  82)		this->removeButton->set_x(textWidth);
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateSize,(void))

void WatchEntry_obj::updateName(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_86_updateName)
HXLINE(  87)		if (::hx::IsNotNull( this->displayName )) {
HXLINE(  89)			this->setNameText(this->displayName);
HXLINE(  90)			return;
            		}
HXLINE(  93)		{
HXLINE(  93)			 ::flixel::_hx_system::debug::watch::WatchEntryData _g = this->data;
HXDLIN(  93)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  95)					 ::Dynamic object = _g->_hx_getObject(0);
HXDLIN(  95)					::String field = _g->_hx_getString(1);
HXLINE(  96)					this->setNameText(((::flixel::util::FlxStringUtil_obj::getClassName(object,true) + HX_(".",2e,00,00,00)) + field));
            				}
            				break;
            				case (int)1: {
HXLINE(  99)					::String _g1 = _g->_hx_getString(0);
            				}
            				break;
            				case (int)2: {
HXLINE(  97)					 ::hscript::Expr _g1 = _g->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  97)					{
HXLINE(  97)						::String expression = _g->_hx_getString(0);
HXLINE(  98)						this->setNameText(expression);
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 100)					 ::Dynamic _g1 = _g->_hx_getObject(0);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateName,(void))

void WatchEntry_obj::setNameText(::String name){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_105_setNameText)
HXLINE( 106)		this->nameText->set_text(name);
HXLINE( 107)		Float currentWidth = (this->nameText->get_textWidth() + 4);
HXLINE( 108)		this->nameText->set_width(::Math_obj::min(currentWidth,( (Float)(125) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setNameText,(void))

 ::Dynamic WatchEntry_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_113_getValue)
HXDLIN( 113)		 ::flixel::_hx_system::debug::watch::WatchEntryData _g = this->data;
HXDLIN( 113)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 115)				 ::Dynamic object = _g->_hx_getObject(0);
HXDLIN( 115)				::String field = _g->_hx_getString(1);
HXLINE( 116)				return ::Reflect_obj::getProperty(object,field);
            			}
            			break;
            			case (int)1: {
HXLINE( 123)				::String value = _g->_hx_getString(0);
HXLINE( 124)				return value;
            			}
            			break;
            			case (int)2: {
HXLINE( 117)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 117)				 ::hscript::Expr parsedExpr = _g->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 119)				return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::runExpr(parsedExpr);
            			}
            			break;
            			case (int)3: {
HXLINE( 125)				 ::Dynamic func = _g->_hx_getObject(0);
HXLINE( 126)				return func();
            			}
            			break;
            		}
HXLINE( 113)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getValue,return )

::String WatchEntry_obj::getFormattedValue(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_131_getFormattedValue)
HXLINE( 132)		 ::Dynamic value = this->getValue();
HXLINE( 133)		if (::Std_obj::isOfType(value,::hx::ClassOf< ::Float >())) {
HXLINE( 134)			value = ::flixel::math::FlxMath_obj::roundDecimal(( (Float)(value) ),::flixel::FlxG_obj::debugger->precision);
            		}
HXLINE( 135)		return ::Std_obj::string(value);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getFormattedValue,return )

void WatchEntry_obj::submitValue( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_140_submitValue)
HXDLIN( 140)		 ::flixel::_hx_system::debug::watch::WatchEntryData _g = this->data;
HXDLIN( 140)		if ((_g->_hx_getIndex() == 0)) {
HXLINE( 142)			 ::Dynamic object = _g->_hx_getObject(0);
HXDLIN( 142)			::String field = _g->_hx_getString(1);
HXLINE( 143)			::Reflect_obj::setProperty(object,field,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,submitValue,(void))

void WatchEntry_obj::updateValue(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_150_updateValue)
HXDLIN( 150)		if (!(this->valueText->isEditing)) {
HXLINE( 151)			 ::flixel::_hx_system::debug::watch::EditableTextField _hx_tmp = this->valueText;
HXDLIN( 151)			_hx_tmp->set_text(this->getFormattedValue());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,(void))

Float WatchEntry_obj::getNameWidth(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_156_getNameWidth)
HXDLIN( 156)		return this->nameText->get_width();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getNameWidth,return )

Float WatchEntry_obj::getMinWidth(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_161_getMinWidth)
HXDLIN( 161)		Float _hx_tmp = (this->valueText->get_x() + 8);
HXDLIN( 161)		return (_hx_tmp + this->removeButton->get_width());
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getMinWidth,return )

void WatchEntry_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_165_destroy)
HXLINE( 166)		this->nameText = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->nameText)) );
HXLINE( 167)		::flixel::util::FlxDestroyUtil_obj::destroy(this->valueText);
HXLINE( 168)		this->valueText = ( ( ::flixel::_hx_system::debug::watch::EditableTextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->valueText)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))

int WatchEntry_obj::GUTTER;

int WatchEntry_obj::TEXT_HEIGHT;

int WatchEntry_obj::MAX_NAME_WIDTH;


::hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry) {
	::hx::ObjectPtr< WatchEntry_obj > __this = new WatchEntry_obj();
	__this->__construct(displayName,data,removeEntry);
	return __this;
}

::hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__alloc(::hx::Ctx *_hx_ctx,::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry) {
	WatchEntry_obj *__this = (WatchEntry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WatchEntry_obj), true, "flixel.system.debug.watch.WatchEntry"));
	*(void **)__this = WatchEntry_obj::_hx_vtable;
	__this->__construct(displayName,data,removeEntry);
	return __this;
}

WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(displayName,"displayName");
	HX_MARK_MEMBER_NAME(nameText,"nameText");
	HX_MARK_MEMBER_NAME(valueText,"valueText");
	HX_MARK_MEMBER_NAME(removeButton,"removeButton");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(displayName,"displayName");
	HX_VISIT_MEMBER_NAME(nameText,"nameText");
	HX_VISIT_MEMBER_NAME(valueText,"valueText");
	HX_VISIT_MEMBER_NAME(removeButton,"removeButton");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WatchEntry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { return ::hx::Val( nameText ); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueText") ) { return ::hx::Val( valueText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateName") ) { return ::hx::Val( updateName_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { return ::hx::Val( displayName ); }
		if (HX_FIELD_EQ(inName,"setNameText") ) { return ::hx::Val( setNameText_dyn() ); }
		if (HX_FIELD_EQ(inName,"submitValue") ) { return ::hx::Val( submitValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return ::hx::Val( updateValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMinWidth") ) { return ::hx::Val( getMinWidth_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return ::hx::Val( removeButton ); }
		if (HX_FIELD_EQ(inName,"getTextColor") ) { return ::hx::Val( getTextColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNameWidth") ) { return ::hx::Val( getNameWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return ::hx::Val( defaultFormat ); }
		if (HX_FIELD_EQ(inName,"initTextField") ) { return ::hx::Val( initTextField_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFormattedValue") ) { return ::hx::Val( getFormattedValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WatchEntry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::flixel::_hx_system::debug::watch::WatchEntryData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { nameText=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueText") ) { valueText=inValue.Cast<  ::flixel::_hx_system::debug::watch::EditableTextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { displayName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { removeButton=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("displayName",ad,11,f2,30));
	outFields->push(HX_("nameText",98,ec,80,49));
	outFields->push(HX_("valueText",be,84,7e,99));
	outFields->push(HX_("removeButton",56,fd,0d,49));
	outFields->push(HX_("defaultFormat",d8,62,07,f8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WatchEntry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::debug::watch::WatchEntryData */ ,(int)offsetof(WatchEntry_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsString,(int)offsetof(WatchEntry_obj,displayName),HX_("displayName",ad,11,f2,30)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(WatchEntry_obj,nameText),HX_("nameText",98,ec,80,49)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::watch::EditableTextField */ ,(int)offsetof(WatchEntry_obj,valueText),HX_("valueText",be,84,7e,99)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(WatchEntry_obj,removeButton),HX_("removeButton",56,fd,0d,49)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(WatchEntry_obj,defaultFormat),HX_("defaultFormat",d8,62,07,f8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WatchEntry_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &WatchEntry_obj::GUTTER,HX_("GUTTER",1b,d3,2b,8c)},
	{::hx::fsInt,(void *) &WatchEntry_obj::TEXT_HEIGHT,HX_("TEXT_HEIGHT",79,d0,dc,87)},
	{::hx::fsInt,(void *) &WatchEntry_obj::MAX_NAME_WIDTH,HX_("MAX_NAME_WIDTH",cd,26,03,84)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WatchEntry_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("displayName",ad,11,f2,30),
	HX_("nameText",98,ec,80,49),
	HX_("valueText",be,84,7e,99),
	HX_("removeButton",56,fd,0d,49),
	HX_("defaultFormat",d8,62,07,f8),
	HX_("getTextColor",00,9e,a0,f2),
	HX_("initTextField",9d,e7,80,14),
	HX_("updateSize",6a,8b,08,05),
	HX_("updateName",f4,5c,b4,01),
	HX_("setNameText",5a,b6,e1,79),
	HX_("getValue",fb,8e,8f,91),
	HX_("getFormattedValue",0b,62,f0,ec),
	HX_("submitValue",39,40,71,15),
	HX_("updateValue",a8,e8,50,17),
	HX_("getNameWidth",45,20,6e,d3),
	HX_("getMinWidth",ca,e5,8d,e7),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void WatchEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::MAX_NAME_WIDTH,"MAX_NAME_WIDTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WatchEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::MAX_NAME_WIDTH,"MAX_NAME_WIDTH");
};

#endif

::hx::Class WatchEntry_obj::__mClass;

static ::String WatchEntry_obj_sStaticFields[] = {
	HX_("GUTTER",1b,d3,2b,8c),
	HX_("TEXT_HEIGHT",79,d0,dc,87),
	HX_("MAX_NAME_WIDTH",cd,26,03,84),
	::String(null())
};

void WatchEntry_obj::__register()
{
	WatchEntry_obj _hx_dummy;
	WatchEntry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.watch.WatchEntry",0a,d4,34,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WatchEntry_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WatchEntry_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WatchEntry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WatchEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WatchEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WatchEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WatchEntry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WatchEntry_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_23_boot)
HXDLIN(  23)		GUTTER = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_24_boot)
HXDLIN(  24)		TEXT_HEIGHT = 20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_25_boot)
HXDLIN(  25)		MAX_NAME_WIDTH = 125;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
