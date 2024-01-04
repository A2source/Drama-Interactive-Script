#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_objects_Popup
#include <objects/Popup.h>
#endif
#ifndef INCLUDED_objects_QuickObjects
#include <objects/QuickObjects.h>
#endif
#ifndef INCLUDED_states_BaseState
#include <states/BaseState.h>
#endif
#ifndef INCLUDED_states_ScriptState
#include <states/ScriptState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d7ab05d03330597_18_new,"objects.Popup","new",0x0945d4e4,"objects.Popup.new","objects/Popup.hx",18,0xcc18bc0d)
static const int _hx_array_data_8dc0d2f2_1[] = {
	(int)-27500,(int)-50887,
};
static const int _hx_array_data_8dc0d2f2_2[] = {
	(int)-65536,(int)-3538944,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8d7ab05d03330597_39_update,"objects.Popup","update",0x1d6e2c05,"objects.Popup.update","objects/Popup.hx",39,0xcc18bc0d)
HX_LOCAL_STACK_FRAME(_hx_pos_8d7ab05d03330597_47_add,"objects.Popup","add",0x093bf6a5,"objects.Popup.add","objects/Popup.hx",47,0xcc18bc0d)
HX_LOCAL_STACK_FRAME(_hx_pos_8d7ab05d03330597_67_open,"objects.Popup","open",0x1485f2c6,"objects.Popup.open","objects/Popup.hx",67,0xcc18bc0d)
HX_LOCAL_STACK_FRAME(_hx_pos_8d7ab05d03330597_58_open,"objects.Popup","open",0x1485f2c6,"objects.Popup.open","objects/Popup.hx",58,0xcc18bc0d)
HX_LOCAL_STACK_FRAME(_hx_pos_8d7ab05d03330597_83_close,"objects.Popup","close",0xf542453c,"objects.Popup.close","objects/Popup.hx",83,0xcc18bc0d)
HX_LOCAL_STACK_FRAME(_hx_pos_8d7ab05d03330597_74_close,"objects.Popup","close",0xf542453c,"objects.Popup.close","objects/Popup.hx",74,0xcc18bc0d)
namespace objects{

void Popup_obj::__construct(::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_canClose){
            		Float scale = __o_scale.Default(((Float)0.65));
            		bool canClose = __o_canClose.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_8d7ab05d03330597_18_new)
HXLINE(  19)		super::__construct(null(),null(),null());
HXLINE(  20)		int _hx_tmp = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * scale));
HXDLIN(  20)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * scale));
HXDLIN(  20)		int Alpha = 255;
HXDLIN(  20)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  20)		{
HXLINE(  20)			color = (color & -16711681);
HXDLIN(  20)			color = (color | 3932160);
            		}
HXDLIN(  20)		{
HXLINE(  20)			color = (color & -65281);
HXDLIN(  20)			color = (color | 15360);
            		}
HXDLIN(  20)		{
HXLINE(  20)			color = (color & -256);
HXDLIN(  20)			color = (color | 60);
            		}
HXDLIN(  20)		{
HXLINE(  20)			color = (color & 16777215);
HXDLIN(  20)			int color1;
HXDLIN(  20)			if ((Alpha > 255)) {
HXLINE(  20)				color1 = 255;
            			}
            			else {
HXLINE(  20)				if ((Alpha < 0)) {
HXLINE(  20)					color1 = 0;
            				}
            				else {
HXLINE(  20)					color1 = Alpha;
            				}
            			}
HXDLIN(  20)			color = (color | (color1 << 24));
            		}
HXDLIN(  20)		this->makeGraphic(_hx_tmp,_hx_tmp1,color,null(),null());
HXLINE(  21)		{
HXLINE(  21)			int axes = 17;
HXDLIN(  21)			bool _hx_tmp2;
HXDLIN(  21)			if ((axes != 1)) {
HXLINE(  21)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  21)				_hx_tmp2 = true;
            			}
HXDLIN(  21)			if (_hx_tmp2) {
HXLINE(  21)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  21)				this->set_x(((( (Float)(_hx_tmp) ) - this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  21)			bool _hx_tmp3;
HXDLIN(  21)			if ((axes != 16)) {
HXLINE(  21)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE(  21)				_hx_tmp3 = true;
            			}
HXDLIN(  21)			if (_hx_tmp3) {
HXLINE(  21)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  21)				this->set_y(((( (Float)(_hx_tmp) ) - this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  23)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  23)		int _hx_tmp5 = ::Std_obj::_hx_int((this->get_width() + 2));
HXDLIN(  23)		this->outline = _hx_tmp4->makeGraphic(_hx_tmp5,::Std_obj::_hx_int((this->get_height() + 2)),-16777216,null(),null());
HXLINE(  24)		this->outline->set_visible(false);
HXLINE(  26)		if (canClose) {
HXLINE(  28)			this->closeButton = ::objects::QuickObjects_obj::getButton(0,(::Std_obj::_hx_int(this->y) + 1),HX_("X",58,00,00,00),this->close_dyn(),null(),null(),-65536,22,null());
HXLINE(  29)			this->closeButton->updateActiveButtonColors(::Array_obj< int >::fromData( _hx_array_data_8dc0d2f2_1,2));
HXLINE(  30)			this->closeButton->updateInactiveButtonColors(::Array_obj< int >::fromData( _hx_array_data_8dc0d2f2_2,2));
HXLINE(  32)			 ::flixel::addons::ui::FlxButtonPlus _hx_tmp = this->closeButton;
HXDLIN(  32)			Float _hx_tmp1 = this->x;
HXDLIN(  32)			Float _hx_tmp2 = (_hx_tmp1 + this->get_width());
HXDLIN(  32)			_hx_tmp->set_x((_hx_tmp2 - this->closeButton->get_width()));
            		}
HXLINE(  35)		this->set_visible(false);
            	}

Dynamic Popup_obj::__CreateEmpty() { return new Popup_obj; }

void *Popup_obj::_hx_vtable = 0;

Dynamic Popup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Popup_obj > _hx_result = new Popup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Popup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x1fac04e4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1fac04e4;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Popup_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_8d7ab05d03330597_39_update)
HXLINE(  40)		this->super::update(dt);
HXLINE(  42)		this->outline->setPosition((this->x - ( (Float)(1) )),(this->y - ( (Float)(1) )));
HXLINE(  43)		{
HXLINE(  43)			 ::flixel::math::FlxBasePoint this1 = this->outline->scale;
HXDLIN(  43)			Float y = this->scale->y;
HXDLIN(  43)			this1->set_x(this->scale->x);
HXDLIN(  43)			this1->set_y(y);
            		}
            	}


void Popup_obj::add(){
            	HX_STACKFRAME(&_hx_pos_8d7ab05d03330597_47_add)
HXLINE(  48)		::states::ScriptState_obj::instance->add(this->outline).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  49)		::states::ScriptState_obj::instance->add(::hx::ObjectPtr<OBJ_>(this)).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  51)		if (::hx::IsNotNull( this->closeButton )) {
HXLINE(  52)			::states::ScriptState_obj::instance->add(this->closeButton).StaticCast<  ::flixel::FlxBasic >();
            		}
HXLINE(  54)		this->open();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Popup_obj,add,(void))

void Popup_obj::open(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::objects::Popup,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween tween){
            			HX_STACKFRAME(&_hx_pos_8d7ab05d03330597_67_open)
HXLINE(  67)			if (::hx::IsNotNull( _gthis->closeButton )) {
HXLINE(  68)				_gthis->closeButton->set_exists(true);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_8d7ab05d03330597_58_open)
HXDLIN(  58)		 ::objects::Popup _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  59)		this->set_visible(true);
HXLINE(  60)		this->outline->set_visible(true);
HXLINE(  62)		{
HXLINE(  62)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  62)			this1->set_x(( (Float)(0) ));
HXDLIN(  62)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  63)		::flixel::tweens::FlxTween_obj::tween(this->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),1)
            			->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Popup_obj,open,(void))

void Popup_obj::close(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::objects::Popup,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween tween){
            			HX_STACKFRAME(&_hx_pos_8d7ab05d03330597_83_close)
HXLINE(  84)			_gthis->set_visible(false);
HXLINE(  85)			_gthis->outline->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_8d7ab05d03330597_74_close)
HXDLIN(  74)		 ::objects::Popup _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  75)		::haxe::Log_obj::trace(HX_("gbye popup o7",f5,d4,44,de),::hx::SourceInfo(HX_("source/objects/Popup.hx",01,f3,41,8d),75,HX_("objects.Popup",f2,d2,c0,8d),HX_("close",b8,17,63,48)));
HXLINE(  77)		if (::hx::IsNotNull( this->closeButton )) {
HXLINE(  78)			this->closeButton->set_exists(false);
            		}
HXLINE(  80)		::flixel::tweens::FlxTween_obj::tween(this->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),0)
            			->setFixed(1,HX_("y",79,00,00,00),0)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE(  89)		::states::ScriptState_obj::instance->showRibbon();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Popup_obj,close,(void))


::hx::ObjectPtr< Popup_obj > Popup_obj::__new(::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_canClose) {
	::hx::ObjectPtr< Popup_obj > __this = new Popup_obj();
	__this->__construct(__o_scale,__o_canClose);
	return __this;
}

::hx::ObjectPtr< Popup_obj > Popup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_canClose) {
	Popup_obj *__this = (Popup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Popup_obj), true, "objects.Popup"));
	*(void **)__this = Popup_obj::_hx_vtable;
	__this->__construct(__o_scale,__o_canClose);
	return __this;
}

Popup_obj::Popup_obj()
{
}

void Popup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Popup);
	HX_MARK_MEMBER_NAME(closeButton,"closeButton");
	HX_MARK_MEMBER_NAME(outline,"outline");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Popup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(closeButton,"closeButton");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Popup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return ::hx::Val( open_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return ::hx::Val( outline ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeButton") ) { return ::hx::Val( closeButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Popup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeButton") ) { closeButton=inValue.Cast<  ::flixel::addons::ui::FlxButtonPlus >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Popup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("closeButton",ca,87,30,94));
	outFields->push(HX_("outline",82,17,be,e1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Popup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::ui::FlxButtonPlus */ ,(int)offsetof(Popup_obj,closeButton),HX_("closeButton",ca,87,30,94)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Popup_obj,outline),HX_("outline",82,17,be,e1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Popup_obj_sStaticStorageInfo = 0;
#endif

static ::String Popup_obj_sMemberFields[] = {
	HX_("closeButton",ca,87,30,94),
	HX_("outline",82,17,be,e1),
	HX_("update",09,86,05,87),
	HX_("add",21,f2,49,00),
	HX_("open",ca,03,b4,49),
	HX_("close",b8,17,63,48),
	::String(null()) };

::hx::Class Popup_obj::__mClass;

void Popup_obj::__register()
{
	Popup_obj _hx_dummy;
	Popup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Popup",f2,d2,c0,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Popup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Popup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Popup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Popup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
