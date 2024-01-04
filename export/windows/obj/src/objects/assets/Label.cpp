#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_QuickObjects
#include <objects/QuickObjects.h>
#endif
#ifndef INCLUDED_objects_assets_Asset
#include <objects/assets/Asset.h>
#endif
#ifndef INCLUDED_objects_assets_Label
#include <objects/assets/Label.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c42927755b3cd1ff_13_new,"objects.assets.Label","new",0xd29a71f5,"objects.assets.Label.new","objects/assets/Label.hx",13,0x69b6553b)
HX_LOCAL_STACK_FRAME(_hx_pos_c42927755b3cd1ff_21_update,"objects.assets.Label","update",0xb2564f94,"objects.assets.Label.update","objects/assets/Label.hx",21,0x69b6553b)
HX_LOCAL_STACK_FRAME(_hx_pos_c42927755b3cd1ff_30_getTextWidth,"objects.assets.Label","getTextWidth",0xe85be66e,"objects.assets.Label.getTextWidth","objects/assets/Label.hx",30,0x69b6553b)
HX_LOCAL_STACK_FRAME(_hx_pos_c42927755b3cd1ff_35_getTextHeight,"objects.assets.Label","getTextHeight",0x1e5d327f,"objects.assets.Label.getTextHeight","objects/assets/Label.hx",35,0x69b6553b)
HX_LOCAL_STACK_FRAME(_hx_pos_c42927755b3cd1ff_40_setTextX,"objects.assets.Label","setTextX",0x540c3654,"objects.assets.Label.setTextX","objects/assets/Label.hx",40,0x69b6553b)
HX_LOCAL_STACK_FRAME(_hx_pos_c42927755b3cd1ff_45_setTextY,"objects.assets.Label","setTextY",0x540c3655,"objects.assets.Label.setTextY","objects/assets/Label.hx",45,0x69b6553b)
namespace objects{
namespace assets{

void Label_obj::__construct(int _x,int _y,int w,int h,::String __o_string,::hx::Null< int >  __o_col){
            		::String string = __o_string;
            		if (::hx::IsNull(__o_string)) string = HX_("Label",d4,7d,dc,02);
            		int col = __o_col.Default(-16777216);
            	HX_GC_STACKFRAME(&_hx_pos_c42927755b3cd1ff_13_new)
HXLINE(  14)		super::__construct(_x,_y,w,h,col);
HXLINE(  16)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,_x,_y);
HXDLIN(  16)		this->textPos = this1;
HXLINE(  17)		this->text = ::objects::QuickObjects_obj::createText(_x,_y,string,-1,22,col);
            	}

Dynamic Label_obj::__CreateEmpty() { return new Label_obj; }

void *Label_obj::_hx_vtable = 0;

Dynamic Label_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Label_obj > _hx_result = new Label_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Label_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x35f7ca99) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x35f7ca99;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7f6d6e9d;
	}
}

void Label_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_c42927755b3cd1ff_21_update)
HXLINE(  22)		this->super::update(dt);
HXLINE(  24)		this->text->set_x(this->textPos->x);
HXLINE(  25)		this->text->set_y(this->textPos->y);
            	}


Float Label_obj::getTextWidth(){
            	HX_STACKFRAME(&_hx_pos_c42927755b3cd1ff_30_getTextWidth)
HXDLIN(  30)		return this->text->get_width();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,getTextWidth,return )

Float Label_obj::getTextHeight(){
            	HX_STACKFRAME(&_hx_pos_c42927755b3cd1ff_35_getTextHeight)
HXDLIN(  35)		return this->text->get_height();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,getTextHeight,return )

void Label_obj::setTextX(int _x){
            	HX_STACKFRAME(&_hx_pos_c42927755b3cd1ff_40_setTextX)
HXDLIN(  40)		this->text->set_x(( (Float)(_x) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,setTextX,(void))

void Label_obj::setTextY(int _y){
            	HX_STACKFRAME(&_hx_pos_c42927755b3cd1ff_45_setTextY)
HXDLIN(  45)		this->text->set_y(( (Float)(_y) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,setTextY,(void))


::hx::ObjectPtr< Label_obj > Label_obj::__new(int _x,int _y,int w,int h,::String __o_string,::hx::Null< int >  __o_col) {
	::hx::ObjectPtr< Label_obj > __this = new Label_obj();
	__this->__construct(_x,_y,w,h,__o_string,__o_col);
	return __this;
}

::hx::ObjectPtr< Label_obj > Label_obj::__alloc(::hx::Ctx *_hx_ctx,int _x,int _y,int w,int h,::String __o_string,::hx::Null< int >  __o_col) {
	Label_obj *__this = (Label_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Label_obj), true, "objects.assets.Label"));
	*(void **)__this = Label_obj::_hx_vtable;
	__this->__construct(_x,_y,w,h,__o_string,__o_col);
	return __this;
}

Label_obj::Label_obj()
{
}

void Label_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Label);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textPos,"textPos");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Label_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textPos,"textPos");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Label_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textPos") ) { return ::hx::Val( textPos ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTextX") ) { return ::hx::Val( setTextX_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTextY") ) { return ::hx::Val( setTextY_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { return ::hx::Val( getTextWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTextHeight") ) { return ::hx::Val( getTextHeight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Label_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textPos") ) { textPos=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textPos",e7,b2,c4,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Label_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Label_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Label_obj,textPos),HX_("textPos",e7,b2,c4,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Label_obj_sStaticStorageInfo = 0;
#endif

static ::String Label_obj_sMemberFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("textPos",e7,b2,c4,9e),
	HX_("update",09,86,05,87),
	HX_("getTextWidth",a3,e2,a6,72),
	HX_("getTextHeight",aa,e4,ae,95),
	HX_("setTextX",09,b4,cd,1b),
	HX_("setTextY",0a,b4,cd,1b),
	::String(null()) };

::hx::Class Label_obj::__mClass;

void Label_obj::__register()
{
	Label_obj _hx_dummy;
	Label_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.assets.Label",83,53,bb,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Label_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Label_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Label_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Label_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
} // end namespace assets
