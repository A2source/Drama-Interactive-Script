#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_assets_Asset
#include <objects/assets/Asset.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a8e7534be237295_9_new,"objects.assets.Asset","new",0x25e87bf1,"objects.assets.Asset.new","objects/assets/Asset.hx",9,0xb2689ebf)
HX_LOCAL_STACK_FRAME(_hx_pos_7a8e7534be237295_18_update,"objects.assets.Asset","update",0x7d45ab18,"objects.assets.Asset.update","objects/assets/Asset.hx",18,0xb2689ebf)
namespace objects{
namespace assets{

void Asset_obj::__construct(int _x,int _y,int w,int h,int col){
            	HX_STACKFRAME(&_hx_pos_7a8e7534be237295_9_new)
HXLINE(  10)		super::__construct(_x,_y,null());
HXLINE(  12)		this->set_width(( (Float)(w) ));
HXLINE(  13)		this->set_height(( (Float)(h) ));
HXLINE(  14)		this->set_color(col);
            	}

Dynamic Asset_obj::__CreateEmpty() { return new Asset_obj; }

void *Asset_obj::_hx_vtable = 0;

Dynamic Asset_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Asset_obj > _hx_result = new Asset_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Asset_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x35f7ca99) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x35f7ca99;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Asset_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_7a8e7534be237295_18_update)
HXLINE(  19)		this->super::update(dt);
HXLINE(  21)		int _hx_tmp = ::Std_obj::_hx_int(this->get_width());
HXDLIN(  21)		int _hx_tmp1 = ::Std_obj::_hx_int(this->get_height());
HXDLIN(  21)		this->makeGraphic(_hx_tmp,_hx_tmp1,this->color,null(),null());
            	}



::hx::ObjectPtr< Asset_obj > Asset_obj::__new(int _x,int _y,int w,int h,int col) {
	::hx::ObjectPtr< Asset_obj > __this = new Asset_obj();
	__this->__construct(_x,_y,w,h,col);
	return __this;
}

::hx::ObjectPtr< Asset_obj > Asset_obj::__alloc(::hx::Ctx *_hx_ctx,int _x,int _y,int w,int h,int col) {
	Asset_obj *__this = (Asset_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Asset_obj), true, "objects.assets.Asset"));
	*(void **)__this = Asset_obj::_hx_vtable;
	__this->__construct(_x,_y,w,h,col);
	return __this;
}

Asset_obj::Asset_obj()
{
}

::hx::Val Asset_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Asset_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Asset_obj_sStaticStorageInfo = 0;
#endif

static ::String Asset_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Asset_obj::__mClass;

void Asset_obj::__register()
{
	Asset_obj _hx_dummy;
	Asset_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.assets.Asset",7f,af,45,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Asset_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Asset_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Asset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Asset_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
} // end namespace assets
