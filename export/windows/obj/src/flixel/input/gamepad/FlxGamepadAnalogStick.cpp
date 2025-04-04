#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#include <flixel/input/gamepad/FlxAnalogToDigitalMode.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ef7cee7c9b8631a_5_new,"flixel.input.gamepad.FlxGamepadAnalogStick","new",0xfbbee6c0,"flixel.input.gamepad.FlxGamepadAnalogStick.new","flixel/input/gamepad/FlxGamepadAnalogStick.hx",5,0xc7b72a73)
HX_LOCAL_STACK_FRAME(_hx_pos_1ef7cee7c9b8631a_58_toString,"flixel.input.gamepad.FlxGamepadAnalogStick","toString",0x35569e4c,"flixel.input.gamepad.FlxGamepadAnalogStick.toString","flixel/input/gamepad/FlxGamepadAnalogStick.hx",58,0xc7b72a73)
namespace flixel{
namespace input{
namespace gamepad{

void FlxGamepadAnalogStick_obj::__construct(int x,int y, ::Dynamic settings){
            	HX_STACKFRAME(&_hx_pos_1ef7cee7c9b8631a_5_new)
HXLINE(  38)		this->mode = ::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::BOTH_dyn();
HXLINE(  33)		this->digitalThreshold = ((Float)0.5);
HXLINE(  28)		this->rawRight = -1;
HXLINE(  23)		this->rawLeft = -1;
HXLINE(  18)		this->rawDown = -1;
HXLINE(  13)		this->rawUp = -1;
HXLINE(  42)		this->x = x;
HXLINE(  43)		this->y = y;
HXLINE(  45)		if (::hx::IsNull( settings )) {
HXLINE(  46)			return;
            		}
HXLINE(  48)		 ::flixel::input::gamepad::FlxAnalogToDigitalMode _hx_tmp;
HXDLIN(  48)		if (::hx::IsNotNull( settings->__Field(HX_("mode",63,d3,60,48),::hx::paccDynamic) )) {
HXLINE(  48)			_hx_tmp = settings->__Field(HX_("mode",63,d3,60,48),::hx::paccDynamic);
            		}
            		else {
HXLINE(  48)			_hx_tmp = ::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::BOTH_dyn();
            		}
HXDLIN(  48)		this->mode = _hx_tmp;
HXLINE(  49)		int _hx_tmp1;
HXDLIN(  49)		if (::hx::IsNotNull( settings->__Field(HX_("up",5b,66,00,00),::hx::paccDynamic) )) {
HXLINE(  49)			_hx_tmp1 = ( (int)(settings->__Field(HX_("up",5b,66,00,00),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  49)			_hx_tmp1 = -1;
            		}
HXDLIN(  49)		this->rawUp = _hx_tmp1;
HXLINE(  50)		int _hx_tmp2;
HXDLIN(  50)		if (::hx::IsNotNull( settings->__Field(HX_("down",62,f8,6d,42),::hx::paccDynamic) )) {
HXLINE(  50)			_hx_tmp2 = ( (int)(settings->__Field(HX_("down",62,f8,6d,42),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  50)			_hx_tmp2 = -1;
            		}
HXDLIN(  50)		this->rawDown = _hx_tmp2;
HXLINE(  51)		int _hx_tmp3;
HXDLIN(  51)		if (::hx::IsNotNull( settings->__Field(HX_("left",07,08,b0,47),::hx::paccDynamic) )) {
HXLINE(  51)			_hx_tmp3 = ( (int)(settings->__Field(HX_("left",07,08,b0,47),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  51)			_hx_tmp3 = -1;
            		}
HXDLIN(  51)		this->rawLeft = _hx_tmp3;
HXLINE(  52)		int _hx_tmp4;
HXDLIN(  52)		if (::hx::IsNotNull( settings->__Field(HX_("right",dc,0b,64,e9),::hx::paccDynamic) )) {
HXLINE(  52)			_hx_tmp4 = ( (int)(settings->__Field(HX_("right",dc,0b,64,e9),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  52)			_hx_tmp4 = -1;
            		}
HXDLIN(  52)		this->rawRight = _hx_tmp4;
HXLINE(  53)		Float _hx_tmp5;
HXDLIN(  53)		if (::hx::IsNotNull( settings->__Field(HX_("threshold",ab,c3,a3,34),::hx::paccDynamic) )) {
HXLINE(  53)			_hx_tmp5 = ( (Float)(settings->__Field(HX_("threshold",ab,c3,a3,34),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  53)			_hx_tmp5 = ((Float)0.5);
            		}
HXDLIN(  53)		this->digitalThreshold = _hx_tmp5;
            	}

Dynamic FlxGamepadAnalogStick_obj::__CreateEmpty() { return new FlxGamepadAnalogStick_obj; }

void *FlxGamepadAnalogStick_obj::_hx_vtable = 0;

Dynamic FlxGamepadAnalogStick_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadAnalogStick_obj > _hx_result = new FlxGamepadAnalogStick_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxGamepadAnalogStick_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15ebfdfe;
}

::String FlxGamepadAnalogStick_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_1ef7cee7c9b8631a_58_toString)
HXLINE(  59)		 ::Dynamic value = this->x;
HXDLIN(  59)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  59)		_this->label = HX_("x",78,00,00,00);
HXDLIN(  59)		_this->value = value;
HXLINE(  60)		 ::Dynamic value1 = this->y;
HXDLIN(  60)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  60)		_this1->label = HX_("y",79,00,00,00);
HXDLIN(  60)		_this1->value = value1;
HXLINE(  61)		 ::Dynamic value2 = this->rawUp;
HXDLIN(  61)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  61)		_this2->label = HX_("rawUp",63,6a,26,e4);
HXDLIN(  61)		_this2->value = value2;
HXLINE(  62)		 ::Dynamic value3 = this->rawDown;
HXDLIN(  62)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  62)		_this3->label = HX_("rawDown",6a,0e,23,ff);
HXDLIN(  62)		_this3->value = value3;
HXLINE(  63)		 ::Dynamic value4 = this->rawLeft;
HXDLIN(  63)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  63)		_this4->label = HX_("rawLeft",0f,1e,65,04);
HXDLIN(  63)		_this4->value = value4;
HXLINE(  64)		 ::Dynamic value5 = this->rawRight;
HXDLIN(  64)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  64)		_this5->label = HX_("rawRight",d4,3c,22,4b);
HXDLIN(  64)		_this5->value = value5;
HXLINE(  65)		 ::Dynamic value6 = this->digitalThreshold;
HXDLIN(  65)		 ::flixel::util::LabelValuePair _this6 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  65)		_this6->label = HX_("digitalThreshold",b3,20,9a,6e);
HXDLIN(  65)		_this6->value = value6;
HXLINE(  66)		 ::Dynamic value7 = this->mode;
HXDLIN(  66)		 ::flixel::util::LabelValuePair _this7 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  66)		_this7->label = HX_("mode",63,d3,60,48);
HXDLIN(  66)		_this7->value = value7;
HXLINE(  58)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(8)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5)->init(6,_this6)->init(7,_this7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStick_obj,toString,return )


::hx::ObjectPtr< FlxGamepadAnalogStick_obj > FlxGamepadAnalogStick_obj::__new(int x,int y, ::Dynamic settings) {
	::hx::ObjectPtr< FlxGamepadAnalogStick_obj > __this = new FlxGamepadAnalogStick_obj();
	__this->__construct(x,y,settings);
	return __this;
}

::hx::ObjectPtr< FlxGamepadAnalogStick_obj > FlxGamepadAnalogStick_obj::__alloc(::hx::Ctx *_hx_ctx,int x,int y, ::Dynamic settings) {
	FlxGamepadAnalogStick_obj *__this = (FlxGamepadAnalogStick_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadAnalogStick_obj), true, "flixel.input.gamepad.FlxGamepadAnalogStick"));
	*(void **)__this = FlxGamepadAnalogStick_obj::_hx_vtable;
	__this->__construct(x,y,settings);
	return __this;
}

FlxGamepadAnalogStick_obj::FlxGamepadAnalogStick_obj()
{
}

void FlxGamepadAnalogStick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogStick);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(rawUp,"rawUp");
	HX_MARK_MEMBER_NAME(rawDown,"rawDown");
	HX_MARK_MEMBER_NAME(rawLeft,"rawLeft");
	HX_MARK_MEMBER_NAME(rawRight,"rawRight");
	HX_MARK_MEMBER_NAME(digitalThreshold,"digitalThreshold");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogStick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(rawUp,"rawUp");
	HX_VISIT_MEMBER_NAME(rawDown,"rawDown");
	HX_VISIT_MEMBER_NAME(rawLeft,"rawLeft");
	HX_VISIT_MEMBER_NAME(rawRight,"rawRight");
	HX_VISIT_MEMBER_NAME(digitalThreshold,"digitalThreshold");
	HX_VISIT_MEMBER_NAME(mode,"mode");
}

::hx::Val FlxGamepadAnalogStick_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return ::hx::Val( mode ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rawUp") ) { return ::hx::Val( rawUp ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawDown") ) { return ::hx::Val( rawDown ); }
		if (HX_FIELD_EQ(inName,"rawLeft") ) { return ::hx::Val( rawLeft ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rawRight") ) { return ::hx::Val( rawRight ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"digitalThreshold") ) { return ::hx::Val( digitalThreshold ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGamepadAnalogStick_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast<  ::flixel::input::gamepad::FlxAnalogToDigitalMode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rawUp") ) { rawUp=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawDown") ) { rawDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rawLeft") ) { rawLeft=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rawRight") ) { rawRight=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"digitalThreshold") ) { digitalThreshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogStick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("rawUp",63,6a,26,e4));
	outFields->push(HX_("rawDown",6a,0e,23,ff));
	outFields->push(HX_("rawLeft",0f,1e,65,04));
	outFields->push(HX_("rawRight",d4,3c,22,4b));
	outFields->push(HX_("digitalThreshold",b3,20,9a,6e));
	outFields->push(HX_("mode",63,d3,60,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGamepadAnalogStick_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,rawUp),HX_("rawUp",63,6a,26,e4)},
	{::hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,rawDown),HX_("rawDown",6a,0e,23,ff)},
	{::hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,rawLeft),HX_("rawLeft",0f,1e,65,04)},
	{::hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,rawRight),HX_("rawRight",d4,3c,22,4b)},
	{::hx::fsFloat,(int)offsetof(FlxGamepadAnalogStick_obj,digitalThreshold),HX_("digitalThreshold",b3,20,9a,6e)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxAnalogToDigitalMode */ ,(int)offsetof(FlxGamepadAnalogStick_obj,mode),HX_("mode",63,d3,60,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGamepadAnalogStick_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadAnalogStick_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("rawUp",63,6a,26,e4),
	HX_("rawDown",6a,0e,23,ff),
	HX_("rawLeft",0f,1e,65,04),
	HX_("rawRight",d4,3c,22,4b),
	HX_("digitalThreshold",b3,20,9a,6e),
	HX_("mode",63,d3,60,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FlxGamepadAnalogStick_obj::__mClass;

void FlxGamepadAnalogStick_obj::__register()
{
	FlxGamepadAnalogStick_obj _hx_dummy;
	FlxGamepadAnalogStick_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.FlxGamepadAnalogStick",ce,c6,9c,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepadAnalogStick_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadAnalogStick_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadAnalogStick_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadAnalogStick_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
