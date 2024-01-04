#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_objects_Tab
#include <objects/Tab.h>
#endif
#ifndef INCLUDED_states_BaseState
#include <states/BaseState.h>
#endif
#ifndef INCLUDED_states_ScriptState
#include <states/ScriptState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ec869e88af10983_10_new,"objects.Tab","new",0xec9c500d,"objects.Tab.new","objects/Tab.hx",10,0x24e7a6c4)
HX_LOCAL_STACK_FRAME(_hx_pos_6ec869e88af10983_29_update,"objects.Tab","update",0xdc30507c,"objects.Tab.update","objects/Tab.hx",29,0x24e7a6c4)
HX_LOCAL_STACK_FRAME(_hx_pos_6ec869e88af10983_36_update,"objects.Tab","update",0xdc30507c,"objects.Tab.update","objects/Tab.hx",36,0x24e7a6c4)
HX_LOCAL_STACK_FRAME(_hx_pos_6ec869e88af10983_53_openDropdown,"objects.Tab","openDropdown",0x69cfb0ae,"objects.Tab.openDropdown","objects/Tab.hx",53,0x24e7a6c4)
HX_LOCAL_STACK_FRAME(_hx_pos_6ec869e88af10983_59_openDropdown,"objects.Tab","openDropdown",0x69cfb0ae,"objects.Tab.openDropdown","objects/Tab.hx",59,0x24e7a6c4)
HX_LOCAL_STACK_FRAME(_hx_pos_6ec869e88af10983_75_closeDropdown,"objects.Tab","closeDropdown",0x8c0279d6,"objects.Tab.closeDropdown","objects/Tab.hx",75,0x24e7a6c4)
HX_LOCAL_STACK_FRAME(_hx_pos_6ec869e88af10983_69_closeDropdown,"objects.Tab","closeDropdown",0x8c0279d6,"objects.Tab.closeDropdown","objects/Tab.hx",69,0x24e7a6c4)
namespace objects{

void Tab_obj::__construct( ::flixel::addons::ui::FlxButtonPlus _button, ::flixel::group::FlxTypedGroup _dropdown){
            	HX_STACKFRAME(&_hx_pos_6ec869e88af10983_10_new)
HXLINE(  18)		this->canInteract = true;
HXLINE(  16)		this->open = false;
HXLINE(  15)		this->hovering = false;
HXLINE(  22)		super::__construct();
HXLINE(  24)		this->button = _button;
HXLINE(  25)		this->dropdown = _dropdown;
            	}

Dynamic Tab_obj::__CreateEmpty() { return new Tab_obj; }

void *Tab_obj::_hx_vtable = 0;

Dynamic Tab_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tab_obj > _hx_result = new Tab_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Tab_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x153580e1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x153580e1;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void Tab_obj::update(Float dt){
            	HX_GC_STACKFRAME(&_hx_pos_6ec869e88af10983_29_update)
HXDLIN(  29)		 ::objects::Tab _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  30)		if (this->canInteract) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::objects::Tab,_gthis, ::flixel::math::FlxBasePoint,mPos) HXARGC(1)
            			void _hx_run( ::flixel::addons::ui::FlxButtonPlus segment){
            				HX_GC_STACKFRAME(&_hx_pos_6ec869e88af10983_36_update)
HXLINE(  37)				segment->set_x(_gthis->button->x);
HXLINE(  39)				bool segHovering = segment->overlapsPoint(mPos,null(),null());
HXLINE(  40)				bool _hx_tmp;
HXDLIN(  40)				if (!(segHovering)) {
HXLINE(  40)					_hx_tmp = _gthis->hovering;
            				}
            				else {
HXLINE(  40)					_hx_tmp = segHovering;
            				}
HXDLIN(  40)				_gthis->hovering = _hx_tmp;
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  32)			this->hovering = false;
HXLINE(  34)			 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(::flixel::FlxG_obj::mouse->x) ),( (Float)(::flixel::FlxG_obj::mouse->y) ));
HXDLIN(  34)			 ::flixel::math::FlxBasePoint mPos = this1;
HXLINE(  35)			this->dropdown->forEach( ::Dynamic(new _hx_Closure_0(_gthis,mPos)),null());
HXLINE(  43)			if (this->button->overlapsPoint(mPos,null(),null())) {
HXLINE(  44)				this->hovering = true;
            			}
            		}
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if (!(this->hovering)) {
HXLINE(  47)			_hx_tmp = this->open;
            		}
            		else {
HXLINE(  47)			_hx_tmp = false;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			this->closeDropdown();
            		}
            	}


void Tab_obj::openDropdown(){
            	HX_STACKFRAME(&_hx_pos_6ec869e88af10983_53_openDropdown)
HXDLIN(  53)		if (this->canInteract) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::addons::ui::FlxButtonPlus segment){
            				HX_STACKFRAME(&_hx_pos_6ec869e88af10983_59_openDropdown)
HXLINE(  60)				::states::ScriptState_obj::instance->add(segment).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  62)				if (!(segment->exists)) {
HXLINE(  63)					segment->set_exists(true);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  55)			::haxe::Log_obj::trace(HX_("lol (opened dropdown)",92,9d,2a,6e),::hx::SourceInfo(HX_("source/objects/Tab.hx",b8,78,81,ee),55,HX_("objects.Tab",9b,45,be,31),HX_("openDropdown",fb,0d,4d,3b)));
HXLINE(  56)			this->open = true;
HXLINE(  58)			this->dropdown->forEach( ::Dynamic(new _hx_Closure_0()),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tab_obj,openDropdown,(void))

void Tab_obj::closeDropdown(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::addons::ui::FlxButtonPlus segment){
            			HX_STACKFRAME(&_hx_pos_6ec869e88af10983_75_closeDropdown)
HXLINE(  75)			segment->set_exists(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_6ec869e88af10983_69_closeDropdown)
HXLINE(  70)		::haxe::Log_obj::trace(HX_("lol (closed dropdown)",55,e6,81,bb),::hx::SourceInfo(HX_("source/objects/Tab.hx",b8,78,81,ee),70,HX_("objects.Tab",9b,45,be,31),HX_("closeDropdown",e9,bf,36,08)));
HXLINE(  71)		this->open = false;
HXLINE(  73)		this->dropdown->forEach( ::Dynamic(new _hx_Closure_0()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tab_obj,closeDropdown,(void))


::hx::ObjectPtr< Tab_obj > Tab_obj::__new( ::flixel::addons::ui::FlxButtonPlus _button, ::flixel::group::FlxTypedGroup _dropdown) {
	::hx::ObjectPtr< Tab_obj > __this = new Tab_obj();
	__this->__construct(_button,_dropdown);
	return __this;
}

::hx::ObjectPtr< Tab_obj > Tab_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::ui::FlxButtonPlus _button, ::flixel::group::FlxTypedGroup _dropdown) {
	Tab_obj *__this = (Tab_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tab_obj), true, "objects.Tab"));
	*(void **)__this = Tab_obj::_hx_vtable;
	__this->__construct(_button,_dropdown);
	return __this;
}

Tab_obj::Tab_obj()
{
}

void Tab_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tab);
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(dropdown,"dropdown");
	HX_MARK_MEMBER_NAME(hovering,"hovering");
	HX_MARK_MEMBER_NAME(open,"open");
	HX_MARK_MEMBER_NAME(canInteract,"canInteract");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tab_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(dropdown,"dropdown");
	HX_VISIT_MEMBER_NAME(hovering,"hovering");
	HX_VISIT_MEMBER_NAME(open,"open");
	HX_VISIT_MEMBER_NAME(canInteract,"canInteract");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Tab_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return ::hx::Val( open ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dropdown") ) { return ::hx::Val( dropdown ); }
		if (HX_FIELD_EQ(inName,"hovering") ) { return ::hx::Val( hovering ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canInteract") ) { return ::hx::Val( canInteract ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openDropdown") ) { return ::hx::Val( openDropdown_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeDropdown") ) { return ::hx::Val( closeDropdown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tab_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { open=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast<  ::flixel::addons::ui::FlxButtonPlus >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dropdown") ) { dropdown=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hovering") ) { hovering=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canInteract") ) { canInteract=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tab_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("dropdown",11,74,2f,fd));
	outFields->push(HX_("hovering",a6,64,8c,e5));
	outFields->push(HX_("open",ca,03,b4,49));
	outFields->push(HX_("canInteract",e6,4b,14,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tab_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::ui::FlxButtonPlus */ ,(int)offsetof(Tab_obj,button),HX_("button",f2,61,e0,d9)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Tab_obj,dropdown),HX_("dropdown",11,74,2f,fd)},
	{::hx::fsBool,(int)offsetof(Tab_obj,hovering),HX_("hovering",a6,64,8c,e5)},
	{::hx::fsBool,(int)offsetof(Tab_obj,open),HX_("open",ca,03,b4,49)},
	{::hx::fsBool,(int)offsetof(Tab_obj,canInteract),HX_("canInteract",e6,4b,14,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tab_obj_sStaticStorageInfo = 0;
#endif

static ::String Tab_obj_sMemberFields[] = {
	HX_("button",f2,61,e0,d9),
	HX_("dropdown",11,74,2f,fd),
	HX_("hovering",a6,64,8c,e5),
	HX_("open",ca,03,b4,49),
	HX_("canInteract",e6,4b,14,58),
	HX_("update",09,86,05,87),
	HX_("openDropdown",fb,0d,4d,3b),
	HX_("closeDropdown",e9,bf,36,08),
	::String(null()) };

::hx::Class Tab_obj::__mClass;

void Tab_obj::__register()
{
	Tab_obj _hx_dummy;
	Tab_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Tab",9b,45,be,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tab_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tab_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tab_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tab_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
