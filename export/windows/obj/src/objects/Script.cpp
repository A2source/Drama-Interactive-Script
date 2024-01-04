#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Script
#include <objects/Script.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_26cd9fd442f79501_25_new,"objects.Script","new",0x148bf9f7,"objects.Script.new","objects/Script.hx",25,0x48fe2938)
HX_LOCAL_STACK_FRAME(_hx_pos_26cd9fd442f79501_61_update,"objects.Script","update",0x635c34d2,"objects.Script.update","objects/Script.hx",61,0x48fe2938)
HX_LOCAL_STACK_FRAME(_hx_pos_26cd9fd442f79501_65_update,"objects.Script","update",0x635c34d2,"objects.Script.update","objects/Script.hx",65,0x48fe2938)
static const int _hx_array_data_c6843285_4[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_26cd9fd442f79501_78_update,"objects.Script","update",0x635c34d2,"objects.Script.update","objects/Script.hx",78,0x48fe2938)
HX_LOCAL_STACK_FRAME(_hx_pos_26cd9fd442f79501_91_scroll,"objects.Script","scroll",0x23bb86d6,"objects.Script.scroll","objects/Script.hx",91,0x48fe2938)
HX_LOCAL_STACK_FRAME(_hx_pos_26cd9fd442f79501_94_scroll,"objects.Script","scroll",0x23bb86d6,"objects.Script.scroll","objects/Script.hx",94,0x48fe2938)
namespace objects{

void Script_obj::__construct(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_26cd9fd442f79501_25_new)
HXLINE(  26)		this->pages =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  28)		::String path = ((HX_("assets/scripts/",73,e1,59,c8) + name) + HX_("/pages/",da,7d,a9,88));
HXLINE(  30)		int i = 0;
HXLINE(  31)		{
HXLINE(  31)			int _g = 0;
HXDLIN(  31)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(path);
HXDLIN(  31)			while((_g < _g1->length)){
HXLINE(  31)				::String file = _g1->__get(_g);
HXDLIN(  31)				_g = (_g + 1);
HXLINE(  33)				 ::openfl::display::BitmapData bitmap = ::openfl::display::BitmapData_obj::fromFile((path + file));
HXLINE(  35)				 ::flixel::FlxSprite page =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  35)				 ::flixel::FlxSprite page1 = page->loadGraphic(::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,null(),null(),null()),null(),null(),null(),null(),null());
HXLINE(  37)				Float width = (( (Float)(::flixel::FlxG_obj::width) ) / ((Float)1.7));
HXLINE(  40)				page1->setGraphicSize(width,(width * ((Float)1.414)));
HXLINE(  41)				page1->updateHitbox();
HXLINE(  43)				page1->set_antialiasing(true);
HXLINE(  45)				{
HXLINE(  45)					int axes = 1;
HXDLIN(  45)					bool _hx_tmp;
HXDLIN(  45)					if ((axes != 1)) {
HXLINE(  45)						_hx_tmp = (axes == 17);
            					}
            					else {
HXLINE(  45)						_hx_tmp = true;
            					}
HXDLIN(  45)					if (_hx_tmp) {
HXLINE(  45)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  45)						page1->set_x(((( (Float)(_hx_tmp) ) - page1->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  45)					bool _hx_tmp1;
HXDLIN(  45)					if ((axes != 16)) {
HXLINE(  45)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE(  45)						_hx_tmp1 = true;
            					}
HXDLIN(  45)					if (_hx_tmp1) {
HXLINE(  45)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  45)						page1->set_y(((( (Float)(_hx_tmp) ) - page1->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  46)				page1->set_y(( (Float)(50) ));
HXLINE(  47)				Float page2 = page1->y;
HXDLIN(  47)				page1->set_y((page2 + ((page1->get_height() + 30) * ( (Float)(i) ))));
HXLINE(  49)				this->pages->add(page1).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  51)				i = (i + 1);
            			}
            		}
HXLINE(  54)		this->firstPage = Dynamic( this->pages->members->__get(0)).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  55)		this->lastPage = Dynamic( this->pages->members->__get((this->pages->length - 1))).StaticCast<  ::flixel::FlxSprite >();
            	}

Dynamic Script_obj::__CreateEmpty() { return new Script_obj; }

void *Script_obj::_hx_vtable = 0;

Dynamic Script_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Script_obj > _hx_result = new Script_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Script_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5548c6ff;
}

void Script_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_26cd9fd442f79501_61_update)
HXDLIN(  61)		if ((this->firstPage->y > 55)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< int >,i) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite page){
            				HX_STACKFRAME(&_hx_pos_26cd9fd442f79501_65_update)
HXLINE(  66)				::flixel::tweens::FlxTween_obj::cancelTweensOf(page->velocity,null());
HXLINE(  67)				page->velocity->set_y(( (Float)(0) ));
HXLINE(  69)				Float _hx_tmp = (page->get_height() + 30);
HXDLIN(  69)				page->set_y((50 + (_hx_tmp * ( (Float)(i->__get(0)) ))));
HXLINE(  71)				i[0]++;
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  63)			::Array< int > i = ::Array_obj< int >::fromData( _hx_array_data_c6843285_4,1);
HXLINE(  64)			this->pages->forEach( ::Dynamic(new _hx_Closure_0(i)),null());
            		}
            		else {
HXLINE(  74)			if ((this->lastPage->y < -415)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< int >,i) HXARGC(1)
            				void _hx_run( ::flixel::FlxSprite page){
            					HX_STACKFRAME(&_hx_pos_26cd9fd442f79501_78_update)
HXLINE(  79)					::flixel::tweens::FlxTween_obj::cancelTweensOf(page->velocity,null());
HXLINE(  80)					page->velocity->set_y(( (Float)(0) ));
HXLINE(  82)					Float _hx_tmp = (page->get_height() - ( (Float)(30) ));
HXDLIN(  82)					page->set_y((( (Float)(-410) ) - (_hx_tmp * ( (Float)(i->__get(0)) ))));
HXLINE(  84)					--i[0];
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  76)				::Array< int > i = ::Array_obj< int >::__new(1)->init(0,(this->pages->length - 1));
HXLINE(  77)				this->pages->forEach( ::Dynamic(new _hx_Closure_1(i)),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,update,(void))

void Script_obj::scroll(Float amt, ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_26cd9fd442f79501_91_scroll)
HXDLIN(  91)		if ((this->firstPage->y < 55)) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::util::FlxTimer,timer,Float,amt) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite page){
            				HX_STACKFRAME(&_hx_pos_26cd9fd442f79501_94_scroll)
HXLINE(  98)				{
HXLINE(  98)					int y;
HXDLIN(  98)					if (timer->active) {
HXLINE(  98)						y = 1400;
            					}
            					else {
HXLINE(  98)						y = 800;
            					}
HXDLIN(  98)					page->velocity->set_y((page->velocity->y - (amt * ( (Float)(y) ))));
            				}
HXLINE( 100)				::flixel::tweens::FlxTween_obj::cancelTweensOf(page->velocity,null());
HXLINE( 101)				::flixel::tweens::FlxTween_obj::tween(page->velocity, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("y",79,00,00,00),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  93)			this->pages->forEach( ::Dynamic(new _hx_Closure_0(timer,amt)),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,scroll,(void))


::hx::ObjectPtr< Script_obj > Script_obj::__new(::String name) {
	::hx::ObjectPtr< Script_obj > __this = new Script_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< Script_obj > Script_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	Script_obj *__this = (Script_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Script_obj), true, "objects.Script"));
	*(void **)__this = Script_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Script_obj::Script_obj()
{
}

void Script_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Script);
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_MEMBER_NAME(firstPage,"firstPage");
	HX_MARK_MEMBER_NAME(lastPage,"lastPage");
	HX_MARK_END_CLASS();
}

void Script_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pages,"pages");
	HX_VISIT_MEMBER_NAME(firstPage,"firstPage");
	HX_VISIT_MEMBER_NAME(lastPage,"lastPage");
}

::hx::Val Script_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return ::hx::Val( pages ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return ::hx::Val( scroll_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastPage") ) { return ::hx::Val( lastPage ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstPage") ) { return ::hx::Val( firstPage ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Script_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastPage") ) { lastPage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstPage") ) { firstPage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Script_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pages",44,2b,4d,bd));
	outFields->push(HX_("firstPage",9f,56,20,01));
	outFields->push(HX_("lastPage",c5,f3,9a,dd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Script_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Script_obj,pages),HX_("pages",44,2b,4d,bd)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Script_obj,firstPage),HX_("firstPage",9f,56,20,01)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Script_obj,lastPage),HX_("lastPage",c5,f3,9a,dd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Script_obj_sStaticStorageInfo = 0;
#endif

static ::String Script_obj_sMemberFields[] = {
	HX_("pages",44,2b,4d,bd),
	HX_("firstPage",9f,56,20,01),
	HX_("lastPage",c5,f3,9a,dd),
	HX_("update",09,86,05,87),
	HX_("scroll",0d,d8,64,47),
	::String(null()) };

::hx::Class Script_obj::__mClass;

void Script_obj::__register()
{
	Script_obj _hx_dummy;
	Script_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Script",85,32,84,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Script_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Script_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Script_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Script_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
