#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#define INCLUDED_flixel_tile_FlxBaseTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,path,FlxDiagonalPathfinder)
HX_DECLARE_CLASS2(flixel,path,FlxPathSimplifier)
HX_DECLARE_CLASS2(flixel,path,FlxTypedPathfinder)
HX_DECLARE_CLASS2(flixel,path,FlxTypedPathfinderData)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapAutoTiling)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxBaseTilemap_obj : public  ::flixel::FlxObject_obj
{
	public:
		typedef  ::flixel::FlxObject_obj super;
		typedef FlxBaseTilemap_obj OBJ_;
		FlxBaseTilemap_obj();

	public:
		enum { _hx_ClassId = 0x3d6253b5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxBaseTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxBaseTilemap"); }
		static ::hx::ObjectPtr< FlxBaseTilemap_obj > __new();
		static ::hx::ObjectPtr< FlxBaseTilemap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBaseTilemap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBaseTilemap",eb,7c,1d,f6); }

		static void __boot();
		static ::Array< int > offsetAutoTile;
		static  ::flixel::path::FlxDiagonalPathfinder diagonalPathfinder;
		 ::flixel::tile::FlxTilemapAutoTiling _hx_auto;
		int widthInTiles;
		int heightInTiles;
		int totalTiles;
		::Array< int > customTileRemap;
		::Array< int > _randomIndices;
		::Array< ::Dynamic> _randomChoices;
		 ::Dynamic _randomLambda;
		Dynamic _randomLambda_dyn() { return _randomLambda;}
		::cpp::VirtualArray _tileObjects;
		int _startingIndex;
		::Array< int > _data;
		int _drawIndex;
		int _collideIndex;
		virtual void updateTile(int index);
		::Dynamic updateTile_dyn();

		virtual void cacheGraphics(int tileWidth,int tileHeight, ::Dynamic tileGraphic);
		::Dynamic cacheGraphics_dyn();

		virtual void initTileObjects();
		::Dynamic initTileObjects_dyn();

		virtual void updateMap();
		::Dynamic updateMap_dyn();

		virtual void computeDimensions();
		::Dynamic computeDimensions_dyn();

		virtual int getTileIndexByCoords( ::flixel::math::FlxBasePoint coord);
		::Dynamic getTileIndexByCoords_dyn();

		virtual  ::flixel::math::FlxBasePoint getTileCoordsByIndex(int index,::hx::Null< bool >  midpoint);
		::Dynamic getTileCoordsByIndex_dyn();

		virtual bool ray( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result);
		::Dynamic ray_dyn();

		virtual bool rayStep( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result,::hx::Null< Float >  resolution);
		::Dynamic rayStep_dyn();

		 ::flixel::math::FlxBasePoint calcRayEntry( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result);
		::Dynamic calcRayEntry_dyn();

		 ::flixel::math::FlxBasePoint calcRayExit( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result);
		::Dynamic calcRayExit_dyn();

		virtual bool overlapsWithCallback( ::flixel::FlxObject object, ::Dynamic callback,::hx::Null< bool >  flipCallbackParams, ::flixel::math::FlxBasePoint position);
		::Dynamic overlapsWithCallback_dyn();

		virtual void setDirty(::hx::Null< bool >  dirty);
		::Dynamic setDirty_dyn();

		virtual void destroy();

		 ::flixel::tile::FlxBaseTilemap loadMapFromCSV(::String mapData, ::Dynamic tileGraphic,::hx::Null< int >  tileWidth,::hx::Null< int >  tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  startingIndex,::hx::Null< int >  drawIndex,::hx::Null< int >  collideIndex);
		::Dynamic loadMapFromCSV_dyn();

		 ::flixel::tile::FlxBaseTilemap loadMapFromArray(::Array< int > mapData,int widthInTiles,int heightInTiles, ::Dynamic tileGraphic,::hx::Null< int >  tileWidth,::hx::Null< int >  tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  startingIndex,::hx::Null< int >  drawIndex,::hx::Null< int >  collideIndex);
		::Dynamic loadMapFromArray_dyn();

		 ::flixel::tile::FlxBaseTilemap loadMapFrom2DArray(::Array< ::Dynamic> mapData, ::Dynamic tileGraphic,::hx::Null< int >  tileWidth,::hx::Null< int >  tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  startingIndex,::hx::Null< int >  drawIndex,::hx::Null< int >  collideIndex);
		::Dynamic loadMapFrom2DArray_dyn();

		 ::flixel::tile::FlxBaseTilemap loadMapFromGraphic( ::Dynamic mapGraphic,::hx::Null< bool >  invert,::hx::Null< int >  scale,::Array< int > colorMap, ::Dynamic tileGraphic,::hx::Null< int >  tileWidth,::hx::Null< int >  tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  startingIndex,::hx::Null< int >  drawIndex,::hx::Null< int >  collideIndex);
		::Dynamic loadMapFromGraphic_dyn();

		virtual void loadMapHelper( ::Dynamic tileGraphic,::hx::Null< int >  tileWidth,::hx::Null< int >  tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  startingIndex,::hx::Null< int >  drawIndex,::hx::Null< int >  collideIndex);
		::Dynamic loadMapHelper_dyn();

		void postGraphicLoad();
		::Dynamic postGraphicLoad_dyn();

		void applyAutoTile();
		::Dynamic applyAutoTile_dyn();

		void applyCustomRemap();
		::Dynamic applyCustomRemap_dyn();

		void randomizeIndices();
		::Dynamic randomizeIndices_dyn();

		void autoTile(int index);
		::Dynamic autoTile_dyn();

		void autoTileFull(int index);
		::Dynamic autoTileFull_dyn();

		void setCustomTileMappings(::Array< int > mappings,::Array< int > randomIndices,::Array< ::Dynamic> randomChoices, ::Dynamic randomLambda);
		::Dynamic setCustomTileMappings_dyn();

		int getTile(int x,int y);
		::Dynamic getTile_dyn();

		int getTileByIndex(int index);
		::Dynamic getTileByIndex_dyn();

		int getTileCollisions(int index);
		::Dynamic getTileCollisions_dyn();

		::Array< int > getTileInstances(int index);
		::Dynamic getTileInstances_dyn();

		bool setTile(int x,int y,int tile,::hx::Null< bool >  updateGraphics);
		::Dynamic setTile_dyn();

		bool setTileByIndex(int index,int tile,::hx::Null< bool >  updateGraphics);
		::Dynamic setTileByIndex_dyn();

		void setTileProperties(int tile,::hx::Null< int >  allowCollisions, ::Dynamic callback,::hx::Class callbackFilter,::hx::Null< int >  range);
		::Dynamic setTileProperties_dyn();

		::Array< int > getData(::hx::Null< bool >  simple);
		::Dynamic getData_dyn();

		::Array< ::Dynamic> findPath( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::path::FlxPathSimplifier simplify,::hx::Null< int >  diagonalPolicy);
		::Dynamic findPath_dyn();

		::Array< ::Dynamic> findPathCustom( ::flixel::path::FlxTypedPathfinder pathfinder, ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::path::FlxPathSimplifier simplify);
		::Dynamic findPathCustom_dyn();

		::Array< int > computePathDistance(int startIndex,int endIndex,::hx::Null< int >  diagonalPolicy,::hx::Null< bool >  stopOnEnd);
		::Dynamic computePathDistance_dyn();

		 ::flixel::path::FlxTypedPathfinderData computePathData(int startIndex,int endIndex,::hx::Null< int >  diagonalPolicy,::hx::Null< bool >  stopOnEnd);
		::Dynamic computePathData_dyn();

		 ::flixel::path::FlxTypedPathfinder getDiagonalPathfinder(int diagonalPolicy);
		::Dynamic getDiagonalPathfinder_dyn();

		bool overlaps( ::flixel::FlxBasic objectOrGroup,::hx::Null< bool >  inScreenSpace, ::flixel::FlxCamera camera);

		bool tilemapOverlapsCallback( ::flixel::FlxBasic objectOrGroup,::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< bool >  inScreenSpace, ::flixel::FlxCamera camera);
		::Dynamic tilemapOverlapsCallback_dyn();

		bool overlapsAt(Float x,Float y, ::flixel::FlxBasic objectOrGroup,::hx::Null< bool >  inScreenSpace, ::flixel::FlxCamera camera);

		bool tilemapOverlapsAtCallback( ::flixel::FlxBasic objectOrGroup,Float x,Float y,bool inScreenSpace, ::flixel::FlxCamera camera);
		::Dynamic tilemapOverlapsAtCallback_dyn();

		bool overlapsPoint( ::flixel::math::FlxBasePoint worldPoint,::hx::Null< bool >  inScreenSpace, ::flixel::FlxCamera camera);

		bool tileAtPointAllowsCollisions( ::flixel::math::FlxBasePoint point);
		::Dynamic tileAtPointAllowsCollisions_dyn();

		virtual  ::flixel::math::FlxRect getBounds( ::flixel::math::FlxRect bounds);
		::Dynamic getBounds_dyn();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxBaseTilemap */ 
