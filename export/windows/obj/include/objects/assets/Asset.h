#ifndef INCLUDED_objects_assets_Asset
#define INCLUDED_objects_assets_Asset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(objects,assets,Asset)

namespace objects{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES Asset_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Asset_obj OBJ_;
		Asset_obj();

	public:
		enum { _hx_ClassId = 0x35f7ca99 };

		void __construct(int _x,int _y,int w,int h,int col);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.assets.Asset")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.assets.Asset"); }
		static ::hx::ObjectPtr< Asset_obj > __new(int _x,int _y,int w,int h,int col);
		static ::hx::ObjectPtr< Asset_obj > __alloc(::hx::Ctx *_hx_ctx,int _x,int _y,int w,int h,int col);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Asset_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Asset",d0,d9,66,b9); }

		virtual void update(Float dt);

};

} // end namespace objects
} // end namespace assets

#endif /* INCLUDED_objects_assets_Asset */ 
