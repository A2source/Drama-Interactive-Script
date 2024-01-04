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
#ifndef INCLUDED_flixel_addons_ui_FlxButtonPlus
#include <flixel/addons/ui/FlxButtonPlus.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Ribbon
#include <objects/Ribbon.h>
#endif
#ifndef INCLUDED_objects_Tab
#include <objects/Tab.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc5a71dd841a5b0a_20_new,"objects.Ribbon","new",0xb4e9bf82,"objects.Ribbon.new","objects/Ribbon.hx",20,0xd0069e0d)
HX_DEFINE_STACK_FRAME(_hx_pos_dc5a71dd841a5b0a_8_new,"objects.Ribbon","new",0xb4e9bf82,"objects.Ribbon.new","objects/Ribbon.hx",8,0xd0069e0d)
HX_DEFINE_STACK_FRAME(_hx_pos_dc5a71dd841a5b0a_29_new,"objects.Ribbon","new",0xb4e9bf82,"objects.Ribbon.new","objects/Ribbon.hx",29,0xd0069e0d)
HX_LOCAL_STACK_FRAME(_hx_pos_dc5a71dd841a5b0a_38_hide,"objects.Ribbon","hide",0x93a98360,"objects.Ribbon.hide","objects/Ribbon.hx",38,0xd0069e0d)
HX_LOCAL_STACK_FRAME(_hx_pos_dc5a71dd841a5b0a_35_hide,"objects.Ribbon","hide",0x93a98360,"objects.Ribbon.hide","objects/Ribbon.hx",35,0xd0069e0d)
HX_LOCAL_STACK_FRAME(_hx_pos_dc5a71dd841a5b0a_53_show,"objects.Ribbon","show",0x9aee239b,"objects.Ribbon.show","objects/Ribbon.hx",53,0xd0069e0d)
HX_LOCAL_STACK_FRAME(_hx_pos_dc5a71dd841a5b0a_49_show,"objects.Ribbon","show",0x9aee239b,"objects.Ribbon.show","objects/Ribbon.hx",49,0xd0069e0d)
HX_LOCAL_STACK_FRAME(_hx_pos_dc5a71dd841a5b0a_45_show,"objects.Ribbon","show",0x9aee239b,"objects.Ribbon.show","objects/Ribbon.hx",45,0xd0069e0d)
namespace objects{

void Ribbon_obj::__construct( ::flixel::group::FlxTypedGroup layout,::String __o_alignment){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::cpp::VirtualArray,prevX,::cpp::VirtualArray,totalWidth) HXARGC(1)
            		void _hx_run( ::objects::Tab tab){
            			HX_STACKFRAME(&_hx_pos_dc5a71dd841a5b0a_20_new)
HXLINE(  21)			tab->button->set_x(( (Float)(prevX->__get(0)) ));
HXLINE(  23)			::cpp::VirtualArray prevX1 = prevX;
HXDLIN(  23)			int _hx_tmp = 0;
HXDLIN(  23)			 ::Dynamic prevX2 = prevX1->__get(_hx_tmp);
HXDLIN(  23)			prevX1->set(_hx_tmp,(prevX2 + tab->button->get_width()));
HXLINE(  24)			::cpp::VirtualArray totalWidth1 = totalWidth;
HXDLIN(  24)			int _hx_tmp1 = 0;
HXDLIN(  24)			 ::Dynamic totalWidth2 = totalWidth1->__get(_hx_tmp1);
HXDLIN(  24)			totalWidth1->set(_hx_tmp1,(totalWidth2 + tab->button->get_width()));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		::String alignment = __o_alignment;
            		if (::hx::IsNull(__o_alignment)) alignment = HX_("right",dc,0b,64,e9);
            	HX_STACKFRAME(&_hx_pos_dc5a71dd841a5b0a_8_new)
HXLINE(  11)		this->hidden = false;
HXLINE(  15)		this->tabs = layout;
HXLINE(  17)		::cpp::VirtualArray prevX = ::cpp::VirtualArray_obj::__new(1)->init(0,0);
HXLINE(  18)		::cpp::VirtualArray totalWidth = ::cpp::VirtualArray_obj::__new(1)->init(0,0);
HXLINE(  19)		this->tabs->forEach( ::Dynamic(new _hx_Closure_0(prevX,totalWidth)),null());
HXLINE(  27)		if ((alignment == HX_("right",dc,0b,64,e9))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::cpp::VirtualArray,totalWidth) HXARGC(1)
            			void _hx_run( ::objects::Tab tab){
            				HX_STACKFRAME(&_hx_pos_dc5a71dd841a5b0a_29_new)
HXLINE(  30)				 ::flixel::addons::ui::FlxButtonPlus fh = tab->button;
HXDLIN(  30)				fh->set_x((fh->x + (( (Float)(::flixel::FlxG_obj::width) ) - ( (Float)(totalWidth->__get(0)) ))));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  28)			this->tabs->forEach( ::Dynamic(new _hx_Closure_1(totalWidth)),null());
            		}
            	}

Dynamic Ribbon_obj::__CreateEmpty() { return new Ribbon_obj; }

void *Ribbon_obj::_hx_vtable = 0;

Dynamic Ribbon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ribbon_obj > _hx_result = new Ribbon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Ribbon_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58bc2b0a;
}

void Ribbon_obj::hide(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::objects::Tab tab){
            			HX_STACKFRAME(&_hx_pos_dc5a71dd841a5b0a_38_hide)
HXLINE(  39)			tab->canInteract = false;
HXLINE(  40)			 ::flixel::addons::ui::FlxButtonPlus tab1 = tab->button;
HXDLIN(  40)			Float tab2 = tab->button->y;
HXDLIN(  40)			Float _hx_tmp = (tab2 - tab->button->get_height());
HXDLIN(  40)			::flixel::tweens::FlxTween_obj::tween(tab1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_dc5a71dd841a5b0a_35_hide)
HXLINE(  36)		this->hidden = true;
HXLINE(  37)		this->tabs->forEach( ::Dynamic(new _hx_Closure_0()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ribbon_obj,hide,(void))

void Ribbon_obj::show(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::objects::Tab tab){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::objects::Tab,tab) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween tween){
            				HX_STACKFRAME(&_hx_pos_dc5a71dd841a5b0a_53_show)
HXLINE(  53)				tab->canInteract = true;
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_dc5a71dd841a5b0a_49_show)
HXLINE(  49)			::flixel::tweens::FlxTween_obj::tween(tab->button, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),0)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(tab)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_dc5a71dd841a5b0a_45_show)
HXLINE(  46)		this->hidden = false;
HXLINE(  47)		this->tabs->forEach( ::Dynamic(new _hx_Closure_1()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ribbon_obj,show,(void))


::hx::ObjectPtr< Ribbon_obj > Ribbon_obj::__new( ::flixel::group::FlxTypedGroup layout,::String __o_alignment) {
	::hx::ObjectPtr< Ribbon_obj > __this = new Ribbon_obj();
	__this->__construct(layout,__o_alignment);
	return __this;
}

::hx::ObjectPtr< Ribbon_obj > Ribbon_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::group::FlxTypedGroup layout,::String __o_alignment) {
	Ribbon_obj *__this = (Ribbon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ribbon_obj), true, "objects.Ribbon"));
	*(void **)__this = Ribbon_obj::_hx_vtable;
	__this->__construct(layout,__o_alignment);
	return __this;
}

Ribbon_obj::Ribbon_obj()
{
}

void Ribbon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ribbon);
	HX_MARK_MEMBER_NAME(tabs,"tabs");
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_END_CLASS();
}

void Ribbon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tabs,"tabs");
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
}

::hx::Val Ribbon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { return ::hx::Val( tabs ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return ::hx::Val( hidden ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Ribbon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { tabs=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ribbon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tabs",7e,b0,f6,4c));
	outFields->push(HX_("hidden",6a,ff,95,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Ribbon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Ribbon_obj,tabs),HX_("tabs",7e,b0,f6,4c)},
	{::hx::fsBool,(int)offsetof(Ribbon_obj,hidden),HX_("hidden",6a,ff,95,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Ribbon_obj_sStaticStorageInfo = 0;
#endif

static ::String Ribbon_obj_sMemberFields[] = {
	HX_("tabs",7e,b0,f6,4c),
	HX_("hidden",6a,ff,95,4c),
	HX_("hide",c2,34,0e,45),
	HX_("show",fd,d4,52,4c),
	::String(null()) };

::hx::Class Ribbon_obj::__mClass;

void Ribbon_obj::__register()
{
	Ribbon_obj _hx_dummy;
	Ribbon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Ribbon",90,96,f7,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Ribbon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Ribbon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ribbon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ribbon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
