#ifndef INCLUDED_flixel_graphics_atlas__AtlasBase_Hash_Impl_
#define INCLUDED_flixel_graphics_atlas__AtlasBase_Hash_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,graphics,atlas,_AtlasBase,Hash_Impl_)

namespace flixel{
namespace graphics{
namespace atlas{
namespace _AtlasBase{


class HXCPP_CLASS_ATTRIBUTES Hash_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Hash_Impl__obj OBJ_;
		Hash_Impl__obj();

	public:
		enum { _hx_ClassId = 0x01c0906f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.atlas._AtlasBase.Hash_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.atlas._AtlasBase.Hash_Impl_"); }

		inline static ::hx::ObjectPtr< Hash_Impl__obj > __new() {
			::hx::ObjectPtr< Hash_Impl__obj > __this = new Hash_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Hash_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Hash_Impl__obj *__this = (Hash_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Hash_Impl__obj), false, "flixel.graphics.atlas._AtlasBase.Hash_Impl_"));
			*(void **)__this = Hash_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Hash_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Hash_Impl_",0e,3f,55,e5); }

		static  ::Dynamic keyValueIterator( ::Dynamic this1);
		static ::Dynamic keyValueIterator_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AtlasBase

#endif /* INCLUDED_flixel_graphics_atlas__AtlasBase_Hash_Impl_ */ 
