#ifndef INCLUDED_flixel_tile_FlxTile
#define INCLUDED_flixel_tile_FlxTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTile)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTypedTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTile_obj : public  ::flixel::FlxObject_obj
{
	public:
		typedef  ::flixel::FlxObject_obj super;
		typedef FlxTile_obj OBJ_;
		FlxTile_obj();

	public:
		enum { _hx_ClassId = 0x2d663896 };

		void __construct( ::flixel::tile::FlxTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxTile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxTile"); }
		static ::hx::ObjectPtr< FlxTile_obj > __new( ::flixel::tile::FlxTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions);
		static ::hx::ObjectPtr< FlxTile_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::tile::FlxTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTile",a0,04,55,dd); }

		 ::Dynamic callbackFunction;
		Dynamic callbackFunction_dyn() { return callbackFunction;}
		::hx::Class filter;
		 ::flixel::tile::FlxTilemap tilemap;
		int index;
		int mapIndex;
		 ::flixel::graphics::frames::FlxFrame frame;
		void destroy();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTile */ 
