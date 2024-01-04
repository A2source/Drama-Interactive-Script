#include <hxcpp.h>

#ifndef INCLUDED_backend_Display
#include <backend/Display.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_objects_TextInput
#include <objects/TextInput.h>
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
#ifndef INCLUDED_openfl_text__TextFieldType_TextFieldType_Impl_
#include <openfl/text/_TextFieldType/TextFieldType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9802cc679adf37ee_14_createTextField,"objects.TextInput","createTextField",0x0a006fa6,"objects.TextInput.createTextField","objects/TextInput.hx",14,0x2b31983c)
namespace objects{

void TextInput_obj::__construct() { }

Dynamic TextInput_obj::__CreateEmpty() { return new TextInput_obj; }

void *TextInput_obj::_hx_vtable = 0;

Dynamic TextInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextInput_obj > _hx_result = new TextInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43f9f60d;
}

 ::openfl::text::TextField TextInput_obj::createTextField(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::String __o_defaultString,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_textCol){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            		::String defaultString = __o_defaultString;
            		if (::hx::IsNull(__o_defaultString)) defaultString = HX_("Input...",44,aa,45,a0);
            		int width = __o_width.Default(300);
            		int height = __o_height.Default(22);
            		int textCol = __o_textCol.Default(-16777216);
            	HX_GC_STACKFRAME(&_hx_pos_9802cc679adf37ee_14_createTextField)
HXLINE(  15)		 ::openfl::text::TextField textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  16)		textField->set_defaultTextFormat(::backend::Display_obj::textFormat(textCol));
HXLINE(  17)		textField->set_background(true);
HXLINE(  18)		textField->set_text(defaultString);
HXLINE(  19)		textField->set_type(::openfl::text::_TextFieldType::TextFieldType_Impl__obj::fromString(HX_("input",0a,c4,1d,be)));
HXLINE(  21)		textField->set_x(( (Float)(x) ));
HXLINE(  22)		textField->set_y(( (Float)(y) ));
HXLINE(  23)		textField->set_width(( (Float)(width) ));
HXLINE(  24)		textField->set_height(( (Float)(height) ));
HXLINE(  26)		::flixel::FlxG_obj::addChildBelowMouse(textField,null());
HXLINE(  28)		return textField;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(TextInput_obj,createTextField,return )


TextInput_obj::TextInput_obj()
{
}

bool TextInput_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { outValue = createTextField_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextInput_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextInput_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextInput_obj::__mClass;

static ::String TextInput_obj_sStaticFields[] = {
	HX_("createTextField",31,de,75,3a),
	::String(null())
};

void TextInput_obj::__register()
{
	TextInput_obj _hx_dummy;
	TextInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.TextInput",e3,f7,11,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextInput_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextInput_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
