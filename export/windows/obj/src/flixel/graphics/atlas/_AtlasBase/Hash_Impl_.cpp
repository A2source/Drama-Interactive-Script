#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas__AtlasBase_Hash_Impl_
#include <flixel/graphics/atlas/_AtlasBase/Hash_Impl_.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1b41301177672a71_76_keyValueIterator,"flixel.graphics.atlas._AtlasBase.Hash_Impl_","keyValueIterator",0x8efad023,"flixel.graphics.atlas._AtlasBase.Hash_Impl_.keyValueIterator","flixel/graphics/atlas/AtlasBase.hx",76,0x520eac77)
HX_LOCAL_STACK_FRAME(_hx_pos_1b41301177672a71_71_keyValueIterator,"flixel.graphics.atlas._AtlasBase.Hash_Impl_","keyValueIterator",0x8efad023,"flixel.graphics.atlas._AtlasBase.Hash_Impl_.keyValueIterator","flixel/graphics/atlas/AtlasBase.hx",71,0x520eac77)
namespace flixel{
namespace graphics{
namespace atlas{
namespace _AtlasBase{

void Hash_Impl__obj::__construct() { }

Dynamic Hash_Impl__obj::__CreateEmpty() { return new Hash_Impl__obj; }

void *Hash_Impl__obj::_hx_vtable = 0;

Dynamic Hash_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Hash_Impl__obj > _hx_result = new Hash_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Hash_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01c0906f;
}

 ::Dynamic Hash_Impl__obj::keyValueIterator( ::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,this1, ::haxe::iterators::ArrayIterator,keys) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1b41301177672a71_76_keyValueIterator)
HXLINE(  77)			::String key = ( (::String)(keys->array->__get(keys->current++)) );
HXLINE(  78)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("key",9f,89,51,00),key)
            				->setFixed(1,HX_("value",71,7f,b8,31),::Reflect_obj::field(this1,key)));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_1b41301177672a71_71_keyValueIterator)
HXLINE(  72)		 ::haxe::iterators::ArrayIterator keys =  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,::Reflect_obj::fields(this1));
HXLINE(  73)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("hasNext",6d,a5,46,18),keys->hasNext_dyn())
            			->setFixed(1,HX_("next",f3,84,02,49), ::Dynamic(new _hx_Closure_0(this1,keys))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Hash_Impl__obj,keyValueIterator,return )


Hash_Impl__obj::Hash_Impl__obj()
{
}

bool Hash_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { outValue = keyValueIterator_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Hash_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Hash_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Hash_Impl__obj::__mClass;

static ::String Hash_Impl__obj_sStaticFields[] = {
	HX_("keyValueIterator",60,cd,ee,4a),
	::String(null())
};

void Hash_Impl__obj::__register()
{
	Hash_Impl__obj _hx_dummy;
	Hash_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.atlas._AtlasBase.Hash_Impl_",0b,5d,16,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Hash_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Hash_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Hash_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Hash_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Hash_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AtlasBase
