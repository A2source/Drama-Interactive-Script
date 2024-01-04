#include <hxcpp.h>

#ifndef INCLUDED_backend_Display
#include <backend/Display.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxButtonPlus
#include <flixel/addons/ui/FlxButtonPlus.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_objects_QuickObjects
#include <objects/QuickObjects.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__TextFieldType_TextFieldType_Impl_
#include <openfl/text/_TextFieldType/TextFieldType_Impl_.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ded35fd957a1b3a6_39_createTextField,"objects.QuickObjects","createTextField",0x640ec124,"objects.QuickObjects.createTextField","objects/QuickObjects.hx",39,0x3e5e511c)
HX_LOCAL_STACK_FRAME(_hx_pos_ded35fd957a1b3a6_45_createTextField,"objects.QuickObjects","createTextField",0x640ec124,"objects.QuickObjects.createTextField","objects/QuickObjects.hx",45,0x3e5e511c)
HX_LOCAL_STACK_FRAME(_hx_pos_ded35fd957a1b3a6_22_createTextField,"objects.QuickObjects","createTextField",0x640ec124,"objects.QuickObjects.createTextField","objects/QuickObjects.hx",22,0x3e5e511c)
HX_LOCAL_STACK_FRAME(_hx_pos_ded35fd957a1b3a6_59_createText,"objects.QuickObjects","createText",0xf4df8fb6,"objects.QuickObjects.createText","objects/QuickObjects.hx",59,0x3e5e511c)
HX_LOCAL_STACK_FRAME(_hx_pos_ded35fd957a1b3a6_92_getButton,"objects.QuickObjects","getButton",0xf54e45db,"objects.QuickObjects.getButton","objects/QuickObjects.hx",92,0x3e5e511c)
static const int _hx_array_data_7f24ed61_5[] = {
	(int)-6908266,(int)-6908266,
};
static const int _hx_array_data_7f24ed61_6[] = {
	(int)-11513776,(int)-11513776,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ded35fd957a1b3a6_109_getButton,"objects.QuickObjects","getButton",0xf54e45db,"objects.QuickObjects.getButton","objects/QuickObjects.hx",109,0x3e5e511c)
HX_LOCAL_STACK_FRAME(_hx_pos_ded35fd957a1b3a6_117_getButton,"objects.QuickObjects","getButton",0xf54e45db,"objects.QuickObjects.getButton","objects/QuickObjects.hx",117,0x3e5e511c)
namespace objects{

void QuickObjects_obj::__construct() { }

Dynamic QuickObjects_obj::__CreateEmpty() { return new QuickObjects_obj; }

void *QuickObjects_obj::_hx_vtable = 0;

Dynamic QuickObjects_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QuickObjects_obj > _hx_result = new QuickObjects_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QuickObjects_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x425a3193;
}

 ::openfl::text::TextField QuickObjects_obj::createTextField(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::String __o_defaultString,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_textCol){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,defaultString, ::openfl::text::TextField,textField) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_ded35fd957a1b3a6_39_createTextField)
HXLINE(  39)			::String _hx_tmp = textField->get_text();
HXDLIN(  39)			if ((_hx_tmp == defaultString)) {
HXLINE(  40)				textField->set_text(HX_("",00,00,00,00));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,defaultString, ::openfl::text::TextField,textField) HXARGC(1)
            		void _hx_run( ::openfl::events::FocusEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_ded35fd957a1b3a6_45_createTextField)
HXLINE(  45)			if (!(textField->hitTestPoint(( (Float)(::flixel::FlxG_obj::mouse->x) ),( (Float)(::flixel::FlxG_obj::mouse->y) ),null()))) {
HXLINE(  46)				if ((textField->get_text() == HX_("",00,00,00,00))) {
HXLINE(  47)					textField->set_text(defaultString);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            		::String defaultString = __o_defaultString;
            		if (::hx::IsNull(__o_defaultString)) defaultString = HX_("Input...",44,aa,45,a0);
            		int width = __o_width.Default(300);
            		int height = __o_height.Default(22);
            		int textCol = __o_textCol.Default(-16777216);
            	HX_GC_STACKFRAME(&_hx_pos_ded35fd957a1b3a6_22_createTextField)
HXLINE(  23)		 ::openfl::text::TextField textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  24)		 ::openfl::text::TextField textField1 = textField;
HXDLIN(  24)		textField1->set_defaultTextFormat(::backend::Display_obj::textFormat(textCol));
HXLINE(  25)		textField->set_background(true);
HXLINE(  26)		textField->set_text(defaultString);
HXLINE(  27)		 ::openfl::text::TextField textField2 = textField;
HXDLIN(  27)		textField2->set_type(::openfl::text::_TextFieldType::TextFieldType_Impl__obj::fromString(HX_("input",0a,c4,1d,be)));
HXLINE(  29)		textField->set_x(( (Float)(x) ));
HXLINE(  30)		textField->set_y(( (Float)(y) ));
HXLINE(  31)		textField->set_width(( (Float)(width) ));
HXLINE(  32)		textField->set_height(( (Float)(height) ));
HXLINE(  34)		textField->set_border(true);
HXLINE(  35)		textField->set_borderColor(-16777216);
HXLINE(  37)		textField->addEventListener(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(defaultString,textField)),null(),null(),null());
HXLINE(  43)		textField->addEventListener(HX_("mouseFocusChange",43,f1,81,96), ::Dynamic(new _hx_Closure_1(defaultString,textField)),null(),null(),null());
HXLINE(  50)		::flixel::FlxG_obj::addChildBelowMouse(textField,null());
HXLINE(  52)		return textField;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(QuickObjects_obj,createTextField,return )

 ::openfl::text::TextField QuickObjects_obj::createText(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::String __o_string,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_textCol){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            		::String string = __o_string;
            		if (::hx::IsNull(__o_string)) string = HX_("String",f1,9c,c4,45);
            		int width = __o_width.Default(-1);
            		int height = __o_height.Default(22);
            		int textCol = __o_textCol.Default(-16777216);
            	HX_GC_STACKFRAME(&_hx_pos_ded35fd957a1b3a6_59_createText)
HXLINE(  60)		 ::openfl::text::TextField textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  61)		textField->set_defaultTextFormat(::backend::Display_obj::textFormat(textCol));
HXLINE(  62)		textField->set_text(string);
HXLINE(  63)		textField->set_selectable(false);
HXLINE(  65)		if ((width == -1)) {
HXLINE(  70)			textField->set_width((textField->get_textWidth() + 5));
            		}
            		else {
HXLINE(  75)			textField->set_width(( (Float)(width) ));
            		}
HXLINE(  78)		textField->set_wordWrap(true);
HXLINE(  80)		textField->set_height(( (Float)(height) ));
HXLINE(  82)		::flixel::FlxG_obj::addChildBelowMouse(textField,null());
HXLINE(  84)		return textField;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(QuickObjects_obj,createText,return )

 ::flixel::addons::ui::FlxButtonPlus QuickObjects_obj::getButton(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::String __o_label, ::Dynamic callback, ::Dynamic customEnterCallback, ::Dynamic customLeaveCallback,::hx::Null< int >  __o_borderCol,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            		::String label = __o_label;
            		if (::hx::IsNull(__o_label)) label = HX_("Click Me",70,a8,38,c6);
            		int borderCol = __o_borderCol.Default(-16777216);
            		int width = __o_width.Default(100);
            		int height = __o_height.Default(22);
            	HX_GC_STACKFRAME(&_hx_pos_ded35fd957a1b3a6_92_getButton)
HXLINE(  93)		 ::flixel::addons::ui::FlxButtonPlus button =  ::flixel::addons::ui::FlxButtonPlus_obj::__alloc( HX_CTX ,x,y,callback,label,width,height);
HXLINE(  95)		button->borderColor = borderCol;
HXLINE(  97)		button->updateActiveButtonColors(::Array_obj< int >::fromData( _hx_array_data_7f24ed61_5,2));
HXLINE(  98)		button->updateInactiveButtonColors(::Array_obj< int >::fromData( _hx_array_data_7f24ed61_6,2));
HXLINE( 100)		 ::flixel::text::FlxText button1 = button->textNormal;
HXDLIN( 100)		button1->setFormat(::openfl::utils::Assets_obj::getFont(HX_("assets/fonts/metropolis.otf",e8,8b,3c,23),null())->name,15,-1,null(),null(),null(),null());
HXLINE( 101)		 ::flixel::text::FlxText button2 = button->textHighlight;
HXDLIN( 101)		button2->setFormat(::openfl::utils::Assets_obj::getFont(HX_("assets/fonts/metropolis.otf",e8,8b,3c,23),null())->name,15,-1,null(),null(),null(),null());
HXLINE( 103)		if (::hx::IsNotNull( customEnterCallback )) {
HXLINE( 104)			button->enterCallback = customEnterCallback;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_ded35fd957a1b3a6_109_getButton)
HXLINE( 109)				::openfl::ui::Mouse_obj::set_cursor(HX_("button",f2,61,e0,d9));
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 106)			button->enterCallback =  ::Dynamic(new _hx_Closure_0());
            		}
HXLINE( 112)		if (::hx::IsNotNull( customLeaveCallback )) {
HXLINE( 113)			button->leaveCallback = customLeaveCallback;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_ded35fd957a1b3a6_117_getButton)
HXLINE( 117)				::openfl::ui::Mouse_obj::set_cursor(HX_("auto",6f,df,76,40));
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 115)			button->leaveCallback =  ::Dynamic(new _hx_Closure_1());
            		}
HXLINE( 120)		return button;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(QuickObjects_obj,getButton,return )


QuickObjects_obj::QuickObjects_obj()
{
}

bool QuickObjects_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getButton") ) { outValue = getButton_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createText") ) { outValue = createText_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { outValue = createTextField_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *QuickObjects_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *QuickObjects_obj_sStaticStorageInfo = 0;
#endif

::hx::Class QuickObjects_obj::__mClass;

static ::String QuickObjects_obj_sStaticFields[] = {
	HX_("createTextField",31,de,75,3a),
	HX_("createText",c9,8d,87,5f),
	HX_("getButton",28,eb,36,56),
	::String(null())
};

void QuickObjects_obj::__register()
{
	QuickObjects_obj _hx_dummy;
	QuickObjects_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.QuickObjects",61,ed,24,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &QuickObjects_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(QuickObjects_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< QuickObjects_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuickObjects_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuickObjects_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
