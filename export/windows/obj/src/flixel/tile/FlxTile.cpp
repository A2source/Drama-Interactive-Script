#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTypedTilemap
#include <flixel/tile/FlxTypedTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b6cd3463ece44f41_12_new,"flixel.tile.FlxTile","new",0xe45c12a4,"flixel.tile.FlxTile.new","flixel/tile/FlxTile.hx",12,0x7142a1ac)
HX_LOCAL_STACK_FRAME(_hx_pos_b6cd3463ece44f41_80_destroy,"flixel.tile.FlxTile","destroy",0x4616e13e,"flixel.tile.FlxTile.destroy","flixel/tile/FlxTile.hx",80,0x7142a1ac)
namespace flixel{
namespace tile{

void FlxTile_obj::__construct( ::flixel::tile::FlxTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions){
            	HX_STACKFRAME(&_hx_pos_b6cd3463ece44f41_12_new)
HXLINE(  46)		this->mapIndex = 0;
HXLINE(  19)		this->callbackFunction = null();
HXLINE(  65)		super::__construct(0,0,width,height);
HXLINE(  67)		this->set_immovable(true);
HXLINE(  68)		this->set_moves(false);
HXLINE(  70)		this->tilemap = tilemap;
HXLINE(  71)		this->index = index;
HXLINE(  72)		this->set_visible(visible);
HXLINE(  73)		this->set_allowCollisions(allowCollisions);
            	}

Dynamic FlxTile_obj::__CreateEmpty() { return new FlxTile_obj; }

void *FlxTile_obj::_hx_vtable = 0;

Dynamic FlxTile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTile_obj > _hx_result = new FlxTile_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxTile_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2d663896) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2d663896;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxTile_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b6cd3463ece44f41_80_destroy)
HXLINE(  81)		this->callbackFunction = null();
HXLINE(  82)		this->tilemap = null();
HXLINE(  83)		this->frame = null();
HXLINE(  85)		this->super::destroy();
            	}



::hx::ObjectPtr< FlxTile_obj > FlxTile_obj::__new( ::flixel::tile::FlxTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions) {
	::hx::ObjectPtr< FlxTile_obj > __this = new FlxTile_obj();
	__this->__construct(tilemap,index,width,height,visible,allowCollisions);
	return __this;
}

::hx::ObjectPtr< FlxTile_obj > FlxTile_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::tile::FlxTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions) {
	FlxTile_obj *__this = (FlxTile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTile_obj), true, "flixel.tile.FlxTile"));
	*(void **)__this = FlxTile_obj::_hx_vtable;
	__this->__construct(tilemap,index,width,height,visible,allowCollisions);
	return __this;
}

FlxTile_obj::FlxTile_obj()
{
}

void FlxTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTile);
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(tilemap,"tilemap");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(mapIndex,"mapIndex");
	HX_MARK_MEMBER_NAME(frame,"frame");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(tilemap,"tilemap");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(mapIndex,"mapIndex");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { return ::hx::Val( tilemap ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapIndex") ) { return ::hx::Val( mapIndex ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return ::hx::Val( callbackFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { tilemap=inValue.Cast<  ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapIndex") ) { mapIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("tilemap",2e,f0,8e,45));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("mapIndex",d6,0a,57,35));
	outFields->push(HX_("frame",2d,78,83,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTile_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTile_obj,callbackFunction),HX_("callbackFunction",fd,cd,91,7e)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxTile_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsObject /*  ::flixel::tile::FlxTilemap */ ,(int)offsetof(FlxTile_obj,tilemap),HX_("tilemap",2e,f0,8e,45)},
	{::hx::fsInt,(int)offsetof(FlxTile_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(FlxTile_obj,mapIndex),HX_("mapIndex",d6,0a,57,35)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxTile_obj,frame),HX_("frame",2d,78,83,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTile_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTile_obj_sMemberFields[] = {
	HX_("callbackFunction",fd,cd,91,7e),
	HX_("filter",b8,1f,35,85),
	HX_("tilemap",2e,f0,8e,45),
	HX_("index",12,9b,14,be),
	HX_("mapIndex",d6,0a,57,35),
	HX_("frame",2d,78,83,06),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxTile_obj::__mClass;

void FlxTile_obj::__register()
{
	FlxTile_obj _hx_dummy;
	FlxTile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxTile",b2,30,f5,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
