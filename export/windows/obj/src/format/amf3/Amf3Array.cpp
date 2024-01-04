#include <hxcpp.h>

#ifndef INCLUDED_format_amf3_Amf3Array
#include <format/amf3/Amf3Array.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cdb0ef89a0f6e5bc_35_new,"format.amf3.Amf3Array","new",0xce414754,"format.amf3.Amf3Array.new","format/amf3/Amf3Array.hx",35,0x9ba66afc)
HX_LOCAL_STACK_FRAME(_hx_pos_cdb0ef89a0f6e5bc_29_boot,"format.amf3.Amf3Array","boot",0xa2f622be,"format.amf3.Amf3Array.boot","format/amf3/Amf3Array.hx",29,0x9ba66afc)
namespace format{
namespace amf3{

void Amf3Array_obj::__construct(::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra){
            	HX_STACKFRAME(&_hx_pos_cdb0ef89a0f6e5bc_35_new)
HXLINE(  36)		this->a = initA;
HXLINE(  37)		this->extra = initExtra;
            	}

Dynamic Amf3Array_obj::__CreateEmpty() { return new Amf3Array_obj; }

void *Amf3Array_obj::_hx_vtable = 0;

Dynamic Amf3Array_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Amf3Array_obj > _hx_result = new Amf3Array_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Amf3Array_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cae1810;
}


::hx::ObjectPtr< Amf3Array_obj > Amf3Array_obj::__new(::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra) {
	::hx::ObjectPtr< Amf3Array_obj > __this = new Amf3Array_obj();
	__this->__construct(initA,initExtra);
	return __this;
}

::hx::ObjectPtr< Amf3Array_obj > Amf3Array_obj::__alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra) {
	Amf3Array_obj *__this = (Amf3Array_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Amf3Array_obj), true, "format.amf3.Amf3Array"));
	*(void **)__this = Amf3Array_obj::_hx_vtable;
	__this->__construct(initA,initExtra);
	return __this;
}

Amf3Array_obj::Amf3Array_obj()
{
}

void Amf3Array_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Amf3Array);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(extra,"extra");
	HX_MARK_END_CLASS();
}

void Amf3Array_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(extra,"extra");
}

::hx::Val Amf3Array_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { return ::hx::Val( extra ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Amf3Array_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { extra=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Amf3Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("extra",90,9a,22,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Amf3Array_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Amf3Array_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Amf3Array_obj,extra),HX_("extra",90,9a,22,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Amf3Array_obj_sStaticStorageInfo = 0;
#endif

static ::String Amf3Array_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("extra",90,9a,22,77),
	::String(null()) };

::hx::Class Amf3Array_obj::__mClass;

void Amf3Array_obj::__register()
{
	Amf3Array_obj _hx_dummy;
	Amf3Array_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.amf3.Amf3Array",62,4d,96,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Amf3Array_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Amf3Array_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Amf3Array_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Amf3Array_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Amf3Array_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cdb0ef89a0f6e5bc_29_boot)
HXDLIN(  29)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("extra",90,9a,22,77), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("optional",a0,af,6e,1e),null()))))));
            	}
}

} // end namespace format
} // end namespace amf3
