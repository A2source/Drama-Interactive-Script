#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FlxJsonAsset_Impl_
#include <flixel/system/_FlxAssets/FlxJsonAsset_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FlxXmlAsset_Impl_
#include <flixel/system/_FlxAssets/FlxXmlAsset_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d294561f5bda5770_19_new,"flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",19,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_29_destroy,"flixel.graphics.frames.FlxAtlasFrames","destroy",0xdc98fc62,"flixel.graphics.frames.FlxAtlasFrames.destroy","flixel/graphics/frames/FlxAtlasFrames.hx",29,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_411_addBorder,"flixel.graphics.frames.FlxAtlasFrames","addBorder",0x1a31fb55,"flixel.graphics.frames.FlxAtlasFrames.addBorder","flixel/graphics/frames/FlxAtlasFrames.hx",411,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_435_addAtlas,"flixel.graphics.frames.FlxAtlasFrames","addAtlas",0xf89d1f02,"flixel.graphics.frames.FlxAtlasFrames.addAtlas","flixel/graphics/frames/FlxAtlasFrames.hx",435,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_458_concat,"flixel.graphics.frames.FlxAtlasFrames","concat",0x0fd01eac,"flixel.graphics.frames.FlxAtlasFrames.concat","flixel/graphics/frames/FlxAtlasFrames.hx",458,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_51_fromAseprite,"flixel.graphics.frames.FlxAtlasFrames","fromAseprite",0x606b9867,"flixel.graphics.frames.FlxAtlasFrames.fromAseprite","flixel/graphics/frames/FlxAtlasFrames.hx",51,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_68_fromTexturePackerJson,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",68,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_96_fromTexturePackerJson,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",96,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_111_texturePackerHelper,"flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",111,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_143_fromLibGdx,"flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",143,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_222_getDimensions,"flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",222,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_242_fromSparrow,"flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",242,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_302_fromTexturePackerXml,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",302,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_351_fromSpriteSheetPacker,"flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",351,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_397_findFrame,"flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",397,0x501ecb67)
namespace flixel{
namespace graphics{
namespace frames{

void FlxAtlasFrames_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_19_new)
HXLINE(  21)		this->usedGraphics = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn(),border);
            	}

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return new FlxAtlasFrames_obj; }

void *FlxAtlasFrames_obj::_hx_vtable = 0;

Dynamic FlxAtlasFrames_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAtlasFrames_obj > _hx_result = new FlxAtlasFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxAtlasFrames_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee6bdec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1ee6bdec;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

void FlxAtlasFrames_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_29_destroy)
HXLINE(  30)		while((this->usedGraphics->length > 0)){
HXLINE(  31)			this->usedGraphics->shift().StaticCast<  ::flixel::graphics::FlxGraphic >()->decrementUseCount();
            		}
HXLINE(  33)		this->super::destroy();
            	}


 ::flixel::graphics::frames::FlxFramesCollection FlxAtlasFrames_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_411_addBorder)
HXLINE( 412)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 412)		point->_inPool = false;
HXDLIN( 412)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 412)		point1->_weak = true;
HXDLIN( 412)		 ::flixel::math::FlxBasePoint this1 = point1;
HXDLIN( 412)		 ::flixel::math::FlxBasePoint point2 = this->border;
HXDLIN( 412)		{
HXLINE( 412)			Float y = point2->y;
HXDLIN( 412)			this1->set_x((this1->x + point2->x));
HXDLIN( 412)			this1->set_y((this1->y + y));
            		}
HXDLIN( 412)		if (point2->_weak) {
HXLINE( 412)			point2->put();
            		}
HXDLIN( 412)		 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 412)		{
HXLINE( 412)			Float y1 = border->y;
HXDLIN( 412)			this2->set_x((this2->x + border->x));
HXDLIN( 412)			this2->set_y((this2->y + y1));
            		}
HXDLIN( 412)		if (border->_weak) {
HXLINE( 412)			border->put();
            		}
HXDLIN( 412)		 ::flixel::math::FlxBasePoint resultBorder = this2;
HXLINE( 413)		 ::flixel::graphics::frames::FlxAtlasFrames atlasFrames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(this->parent,resultBorder);
HXLINE( 414)		if (::hx::IsNotNull( atlasFrames )) {
HXLINE( 415)			return atlasFrames;
            		}
HXLINE( 417)		atlasFrames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 419)		{
HXLINE( 419)			int _g = 0;
HXDLIN( 419)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 419)			while((_g < _g1->length)){
HXLINE( 419)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 419)				_g = (_g + 1);
HXLINE( 420)				atlasFrames->pushFrame(frame->setBorderTo(border,null()),null());
            			}
            		}
HXLINE( 422)		return atlasFrames;
            	}


 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::addAtlas( ::flixel::graphics::frames::FlxAtlasFrames collection,::hx::Null< bool >  __o_overwriteHash){
            		bool overwriteHash = __o_overwriteHash.Default(false);
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_435_addAtlas)
HXLINE( 436)		{
HXLINE( 436)			int _g = 0;
HXDLIN( 436)			::Array< ::Dynamic> _g1 = collection->frames;
HXDLIN( 436)			while((_g < _g1->length)){
HXLINE( 436)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 436)				_g = (_g + 1);
HXLINE( 437)				this->pushFrame(frame,overwriteHash);
            			}
            		}
HXLINE( 439)		if (!(this->usedGraphics->contains(collection->parent))) {
HXLINE( 441)			this->usedGraphics->push(collection->parent);
HXLINE( 442)			collection->parent->incrementUseCount();
            		}
HXLINE( 445)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,addAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::concat( ::flixel::graphics::frames::FlxAtlasFrames collection,::hx::Null< bool >  __o_overwriteHash){
            		bool overwriteHash = __o_overwriteHash.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_458_concat)
HXLINE( 459)		 ::flixel::graphics::frames::FlxAtlasFrames newCollection =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,null());
HXLINE( 460)		newCollection->addAtlas(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE( 461)		newCollection->addAtlas(::hx::ObjectPtr<OBJ_>(this),overwriteHash);
HXLINE( 462)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,concat,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromAseprite( ::Dynamic source, ::Dynamic description){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_51_fromAseprite)
HXDLIN(  51)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromTexturePackerJson(source,description,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromAseprite,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( ::Dynamic source, ::Dynamic description,::hx::Null< bool >  __o_useFrameDuration){
            		bool useFrameDuration = __o_useFrameDuration.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_68_fromTexturePackerJson)
HXLINE(  69)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE(  70)		if (::hx::IsNull( graphic )) {
HXLINE(  71)			return null();
            		}
HXLINE(  74)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE(  75)		if (::hx::IsNotNull( frames )) {
HXLINE(  76)			return frames;
            		}
HXLINE(  78)		bool _hx_tmp;
HXDLIN(  78)		if (::hx::IsNotNull( graphic )) {
HXLINE(  78)			_hx_tmp = ::hx::IsNull( description );
            		}
            		else {
HXLINE(  78)			_hx_tmp = true;
            		}
HXDLIN(  78)		if (_hx_tmp) {
HXLINE(  79)			return null();
            		}
HXLINE(  81)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  83)		 ::Dynamic data = ::flixel::_hx_system::_FlxAssets::FlxJsonAsset_Impl__obj::getData(description);
HXLINE(  86)		if (::Std_obj::isOfType( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)),::hx::ArrayBase::__mClass)) {
HXLINE(  88)			::Array< ::Dynamic> frameArray = ( (::Array< ::Dynamic>)(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)) );
HXLINE(  89)			{
HXLINE(  89)				int _g = 0;
HXDLIN(  89)				while((_g < frameArray->length)){
HXLINE(  89)					 ::Dynamic frame = frameArray->__get(_g);
HXDLIN(  89)					_g = (_g + 1);
HXLINE(  90)					::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(( (::String)(frame->__Field(HX_("filename",c7,2e,6a,77),::hx::paccDynamic)) ),frame,frames,useFrameDuration);
            				}
            			}
            		}
            		else {
HXLINE(  95)			 ::Dynamic frameHash =  ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic));
HXLINE(  96)			{
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,this1, ::haxe::iterators::ArrayIterator,keys) HXARGC(0)
            				 ::Dynamic _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_96_fromTexturePackerJson)
HXLINE(  96)					::String key = ( (::String)(keys->array->__get(keys->current++)) );
HXDLIN(  96)					return  ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("key",9f,89,51,00),key)
            						->setFixed(1,HX_("value",71,7f,b8,31),::Reflect_obj::field(this1,key)));
            				}
            				HX_END_LOCAL_FUNC0(return)

HXLINE(  96)				 ::Dynamic this1 = frameHash;
HXDLIN(  96)				 ::haxe::iterators::ArrayIterator keys =  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,::Reflect_obj::fields(this1));
HXDLIN(  96)				 ::Dynamic _g_hasNext = keys->hasNext_dyn();
HXDLIN(  96)				 ::Dynamic _g_next =  ::Dynamic(new _hx_Closure_0(this1,keys));
HXDLIN(  96)				while(( (bool)(_g_hasNext()) )){
HXLINE(  96)					 ::Dynamic _g = _g_next();
HXDLIN(  96)					::String name = ( (::String)(_g->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)) );
HXDLIN(  96)					 ::Dynamic frame = _g->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE(  97)					::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(name,frame,frames,useFrameDuration);
            				}
            			}
            		}
HXLINE( 100)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,fromTexturePackerJson,return )

void FlxAtlasFrames_obj::texturePackerHelper(::String frameName, ::Dynamic frameData, ::flixel::graphics::frames::FlxAtlasFrames frames,::hx::Null< bool >  __o_useFrameDuration){
            		bool useFrameDuration = __o_useFrameDuration.Default(false);
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_111_texturePackerHelper)
HXLINE( 112)		bool rotated = ( (bool)(frameData->__Field(HX_("rotated",a9,49,1d,f1),::hx::paccDynamic)) );
HXLINE( 113)		int angle = 0;
HXLINE( 114)		 ::flixel::math::FlxRect frameRect = null();
HXLINE( 116)		 ::Dynamic frame = frameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic);
HXLINE( 117)		if (rotated) {
HXLINE( 119)			Float X = ( (Float)(frame->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 119)			Float Y = ( (Float)(frame->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 119)			Float Width = ( (Float)(frame->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 119)			Float Height = ( (Float)(frame->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 119)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 119)			_this->x = X;
HXDLIN( 119)			_this->y = Y;
HXDLIN( 119)			_this->width = Width;
HXDLIN( 119)			_this->height = Height;
HXDLIN( 119)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 119)			rect->_inPool = false;
HXDLIN( 119)			frameRect = rect;
HXLINE( 120)			angle = -90;
            		}
            		else {
HXLINE( 124)			Float X = ( (Float)(frame->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 124)			Float Y = ( (Float)(frame->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 124)			Float Width = ( (Float)(frame->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 124)			Float Height = ( (Float)(frame->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 124)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 124)			_this->x = X;
HXDLIN( 124)			_this->y = Y;
HXDLIN( 124)			_this->width = Width;
HXDLIN( 124)			_this->height = Height;
HXDLIN( 124)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 124)			rect->_inPool = false;
HXDLIN( 124)			frameRect = rect;
            		}
HXLINE( 127)		Float x = ( (Float)( ::Dynamic(frameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 127)		Float y = ( (Float)( ::Dynamic(frameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 127)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 127)		point->_inPool = false;
HXDLIN( 127)		 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 128)		Float x1 = ( (Float)( ::Dynamic(frameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 128)		Float y1 = ( (Float)( ::Dynamic(frameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 128)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 128)		point1->_inPool = false;
HXDLIN( 128)		 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 129)		Float duration;
HXDLIN( 129)		bool duration1;
HXDLIN( 129)		if (useFrameDuration) {
HXLINE( 129)			duration1 = ::hx::IsNotNull( frameData->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 129)			duration1 = false;
            		}
HXDLIN( 129)		if (duration1) {
HXLINE( 129)			duration = (( (Float)(frameData->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic)) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 129)			duration = ( (Float)(0) );
            		}
HXLINE( 130)		frames->addAtlasFrame(frameRect,sourceSize,offset,frameName,angle,false,false,duration);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxAtlasFrames_obj,texturePackerHelper,(void))

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( ::Dynamic source,::String description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_143_fromLibGdx)
HXLINE( 144)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 145)		if (::hx::IsNull( graphic )) {
HXLINE( 146)			return null();
            		}
HXLINE( 149)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 150)		if (::hx::IsNotNull( frames )) {
HXLINE( 151)			return frames;
            		}
HXLINE( 153)		bool _hx_tmp;
HXDLIN( 153)		if (::hx::IsNotNull( graphic )) {
HXLINE( 153)			_hx_tmp = ::hx::IsNull( description );
            		}
            		else {
HXLINE( 153)			_hx_tmp = true;
            		}
HXDLIN( 153)		if (_hx_tmp) {
HXLINE( 154)			return null();
            		}
HXLINE( 156)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 158)		if (::openfl::utils::Assets_obj::exists(description,null())) {
HXLINE( 159)			description = ::openfl::utils::Assets_obj::getText(description);
            		}
HXLINE( 161)		::String pack = ::StringTools_obj::trim(description);
HXLINE( 162)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 165)		int repeatLine;
HXDLIN( 165)		if ((lines->__get(3).indexOf(HX_("repeat:",7f,d8,87,a6),null()) > -1)) {
HXLINE( 165)			repeatLine = 3;
            		}
            		else {
HXLINE( 165)			repeatLine = 4;
            		}
HXLINE( 166)		lines->removeRange(0,(repeatLine + 1));
HXLINE( 168)		int numElementsPerImage = 7;
HXLINE( 169)		int numImages = ::Std_obj::_hx_int((( (Float)(lines->length) ) / ( (Float)(numElementsPerImage) )));
HXLINE( 171)		{
HXLINE( 171)			int _g = 0;
HXDLIN( 171)			int _g1 = numImages;
HXDLIN( 171)			while((_g < _g1)){
HXLINE( 171)				_g = (_g + 1);
HXDLIN( 171)				int i = (_g - 1);
HXLINE( 173)				int curIndex = (i * numElementsPerImage);
HXLINE( 175)				curIndex = (curIndex + 1);
HXDLIN( 175)				::String name = lines->__get((curIndex - 1));
HXLINE( 176)				curIndex = (curIndex + 1);
HXDLIN( 176)				bool rotated = (lines->__get((curIndex - 1)).indexOf(HX_("true",4e,a7,03,4d),null()) >= 0);
HXLINE( 177)				int angle;
HXDLIN( 177)				if (rotated) {
HXLINE( 177)					angle = 90;
            				}
            				else {
HXLINE( 177)					angle = 0;
            				}
HXLINE( 179)				curIndex = (curIndex + 1);
HXDLIN( 179)				::String tempString = lines->__get((curIndex - 1));
HXLINE( 180)				 ::Dynamic size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 182)				int imageX = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 183)				int imageY = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 185)				curIndex = (curIndex + 1);
HXDLIN( 185)				tempString = lines->__get((curIndex - 1));
HXLINE( 186)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 188)				int imageWidth = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 189)				int imageHeight = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 191)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 191)				_this->x = ( (Float)(imageX) );
HXDLIN( 191)				_this->y = ( (Float)(imageY) );
HXDLIN( 191)				_this->width = ( (Float)(imageWidth) );
HXDLIN( 191)				_this->height = ( (Float)(imageHeight) );
HXDLIN( 191)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 191)				rect->_inPool = false;
HXDLIN( 191)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 193)				curIndex = (curIndex + 1);
HXDLIN( 193)				tempString = lines->__get((curIndex - 1));
HXLINE( 194)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 196)				Float x = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 196)				Float y = ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 196)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 196)				point->_inPool = false;
HXDLIN( 196)				 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 198)				curIndex = (curIndex + 1);
HXDLIN( 198)				tempString = lines->__get((curIndex - 1));
HXLINE( 199)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 201)				curIndex = (curIndex + 1);
HXDLIN( 201)				tempString = lines->__get((curIndex - 1));
HXLINE( 202)				 ::Dynamic index = ::Std_obj::parseInt(tempString.split(HX_(":",3a,00,00,00))->__get(1));
HXLINE( 204)				if (::hx::IsNotEq( index,-1 )) {
HXLINE( 205)					name = (name + (HX_("_",5f,00,00,00) + index));
            				}
HXLINE( 211)				Float x1 = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 211)				Float y1 = ((sourceSize->y - ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) )) - ( (Float)(imageHeight) ));
HXDLIN( 211)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 211)				point1->_inPool = false;
HXDLIN( 211)				 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 212)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null(),null());
            			}
            		}
HXLINE( 215)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

 ::Dynamic FlxAtlasFrames_obj::getDimensions(::String line){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_222_getDimensions)
HXLINE( 223)		int colonPosition = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 224)		int comaPosition = line.indexOf(HX_(",",2c,00,00,00),null());
HXLINE( 227)		 ::Dynamic _hx_tmp = ::Std_obj::parseInt(line.substring((colonPosition + 1),comaPosition));
HXLINE( 226)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),_hx_tmp)
            			->setFixed(1,HX_("y",79,00,00,00),::Std_obj::parseInt(line.substring((comaPosition + 1),line.length))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAtlasFrames_obj,getDimensions,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( ::Dynamic source, ::Dynamic xml){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_242_fromSparrow)
HXLINE( 243)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 244)		if (::hx::IsNull( graphic )) {
HXLINE( 245)			return null();
            		}
HXLINE( 247)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 248)		if (::hx::IsNotNull( frames )) {
HXLINE( 249)			return frames;
            		}
HXLINE( 251)		bool _hx_tmp;
HXDLIN( 251)		if (::hx::IsNotNull( graphic )) {
HXLINE( 251)			_hx_tmp = ::hx::IsNull( xml );
            		}
            		else {
HXLINE( 251)			_hx_tmp = true;
            		}
HXDLIN( 251)		if (_hx_tmp) {
HXLINE( 252)			return null();
            		}
HXLINE( 254)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 256)		 ::Xml x = ::flixel::_hx_system::_FlxAssets::FlxXmlAsset_Impl__obj::getXml(xml)->firstElement();
HXDLIN( 256)		bool _hx_tmp1;
HXDLIN( 256)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 256)			_hx_tmp1 = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 256)			_hx_tmp1 = false;
            		}
HXDLIN( 256)		if (_hx_tmp1) {
HXLINE( 256)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            		}
HXDLIN( 256)		 ::Xml this1 = x;
HXDLIN( 256)		 ::Xml data = this1;
HXLINE( 258)		{
HXLINE( 258)			int _g = 0;
HXDLIN( 258)			::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(data,HX_("SubTexture",5b,7b,fb,11));
HXDLIN( 258)			while((_g < _g1->length)){
HXLINE( 258)				 ::Xml texture = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 258)				_g = (_g + 1);
HXLINE( 260)				::String name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("name",4b,72,ff,48));
HXLINE( 261)				bool trimmed = ::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac));
HXLINE( 262)				bool rotated;
HXDLIN( 262)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1))) {
HXLINE( 262)					rotated = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 262)					rotated = false;
            				}
HXLINE( 263)				bool flipX;
HXDLIN( 263)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02))) {
HXLINE( 263)					flipX = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 263)					flipX = false;
            				}
HXLINE( 264)				bool flipY;
HXDLIN( 264)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02))) {
HXLINE( 264)					flipY = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 264)					flipY = false;
            				}
HXLINE( 266)				Float X = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("x",78,00,00,00)));
HXDLIN( 266)				Float Y = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("y",79,00,00,00)));
HXDLIN( 266)				Float Width = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("width",06,b6,62,ca)));
HXDLIN( 266)				Float Height = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("height",e7,07,4c,02)));
HXDLIN( 266)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 266)				_this->x = X;
HXDLIN( 266)				_this->y = Y;
HXDLIN( 266)				_this->width = Width;
HXDLIN( 266)				_this->height = Height;
HXDLIN( 266)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 266)				rect->_inPool = false;
HXDLIN( 266)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 269)				 ::openfl::geom::Rectangle size;
HXDLIN( 269)				if (trimmed) {
HXLINE( 271)					 ::Dynamic size1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac)));
HXDLIN( 271)					 ::Dynamic size2 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameY",8c,af,85,ac)));
HXDLIN( 271)					 ::Dynamic size3 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameWidth",99,ea,88,ad)));
HXLINE( 269)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,size1,size2,size3,::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameHeight",f4,d3,93,e0))));
            				}
            				else {
HXLINE( 269)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,rect1->width,rect1->height);
            				}
HXLINE( 279)				int angle;
HXDLIN( 279)				if (rotated) {
HXLINE( 279)					angle = -90;
            				}
            				else {
HXLINE( 279)					angle = 0;
            				}
HXLINE( 281)				Float x = -(size->get_left());
HXDLIN( 281)				Float y = -(size->get_top());
HXDLIN( 281)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 281)				point->_inPool = false;
HXDLIN( 281)				 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 282)				Float x1 = size->width;
HXDLIN( 282)				Float y1 = size->height;
HXDLIN( 282)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 282)				point1->_inPool = false;
HXDLIN( 282)				 ::flixel::math::FlxBasePoint sourceSize = point1;
HXLINE( 284)				bool _hx_tmp;
HXDLIN( 284)				if (rotated) {
HXLINE( 284)					_hx_tmp = !(trimmed);
            				}
            				else {
HXLINE( 284)					_hx_tmp = false;
            				}
HXDLIN( 284)				if (_hx_tmp) {
HXLINE( 285)					Float y = size->width;
HXDLIN( 285)					sourceSize->set_x(size->height);
HXDLIN( 285)					sourceSize->set_y(y);
            				}
HXLINE( 287)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,flipX,flipY,null());
            			}
            		}
HXLINE( 290)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( ::Dynamic source, ::Dynamic xml){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_302_fromTexturePackerXml)
HXLINE( 303)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 304)		if (::hx::IsNull( graphic )) {
HXLINE( 305)			return null();
            		}
HXLINE( 308)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 309)		if (::hx::IsNotNull( frames )) {
HXLINE( 310)			return frames;
            		}
HXLINE( 312)		bool _hx_tmp;
HXDLIN( 312)		if (::hx::IsNotNull( graphic )) {
HXLINE( 312)			_hx_tmp = ::hx::IsNull( xml );
            		}
            		else {
HXLINE( 312)			_hx_tmp = true;
            		}
HXDLIN( 312)		if (_hx_tmp) {
HXLINE( 313)			return null();
            		}
HXLINE( 315)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 317)		 ::Xml data = ::flixel::_hx_system::_FlxAssets::FlxXmlAsset_Impl__obj::getXml(xml);
HXLINE( 319)		{
HXLINE( 319)			 ::Dynamic sprite = data->firstElement()->elements();
HXDLIN( 319)			while(( (bool)(sprite->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 319)				 ::Xml sprite1 = ( ( ::Xml)(sprite->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 321)				bool trimmed;
HXDLIN( 321)				if (!(sprite1->exists(HX_("oX",09,61,00,00)))) {
HXLINE( 321)					trimmed = sprite1->exists(HX_("oY",0a,61,00,00));
            				}
            				else {
HXLINE( 321)					trimmed = true;
            				}
HXLINE( 322)				bool rotated;
HXDLIN( 322)				if (sprite1->exists(HX_("r",72,00,00,00))) {
HXLINE( 322)					rotated = (sprite1->get(HX_("r",72,00,00,00)) == HX_("y",79,00,00,00));
            				}
            				else {
HXLINE( 322)					rotated = false;
            				}
HXLINE( 323)				int angle;
HXDLIN( 323)				if (rotated) {
HXLINE( 323)					angle = -90;
            				}
            				else {
HXLINE( 323)					angle = 0;
            				}
HXLINE( 324)				::String name = sprite1->get(HX_("n",6e,00,00,00));
HXLINE( 325)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(0,0);
HXDLIN( 325)				point->_inPool = false;
HXDLIN( 325)				 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 326)				Float X = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("x",78,00,00,00)))) );
HXDLIN( 326)				Float Y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("y",79,00,00,00)))) );
HXDLIN( 326)				Float Width = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("w",77,00,00,00)))) );
HXDLIN( 326)				Float Height = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("h",68,00,00,00)))) );
HXDLIN( 326)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 326)				_this->x = X;
HXDLIN( 326)				_this->y = Y;
HXDLIN( 326)				_this->width = Width;
HXDLIN( 326)				_this->height = Height;
HXDLIN( 326)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 326)				rect->_inPool = false;
HXDLIN( 326)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 327)				Float x = rect1->width;
HXDLIN( 327)				Float y = rect1->height;
HXDLIN( 327)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 327)				point1->_inPool = false;
HXDLIN( 327)				 ::flixel::math::FlxBasePoint sourceSize = point1;
HXLINE( 329)				if (trimmed) {
HXLINE( 331)					{
HXLINE( 331)						Float x = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oX",09,61,00,00)))) );
HXDLIN( 331)						Float y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oY",0a,61,00,00)))) );
HXDLIN( 331)						offset->set_x(x);
HXDLIN( 331)						offset->set_y(y);
            					}
HXLINE( 332)					{
HXLINE( 332)						Float x1 = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oW",08,61,00,00)))) );
HXDLIN( 332)						Float y1 = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oH",f9,60,00,00)))) );
HXDLIN( 332)						sourceSize->set_x(x1);
HXDLIN( 332)						sourceSize->set_y(y1);
            					}
            				}
HXLINE( 335)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null(),null());
            			}
            		}
HXLINE( 338)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_351_fromSpriteSheetPacker)
HXLINE( 352)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 353)		if (::hx::IsNull( graphic )) {
HXLINE( 354)			return null();
            		}
HXLINE( 357)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 358)		if (::hx::IsNotNull( frames )) {
HXLINE( 359)			return frames;
            		}
HXLINE( 361)		bool _hx_tmp;
HXDLIN( 361)		if (::hx::IsNotNull( graphic )) {
HXLINE( 361)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 361)			_hx_tmp = true;
            		}
HXDLIN( 361)		if (_hx_tmp) {
HXLINE( 362)			return null();
            		}
HXLINE( 364)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 366)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 367)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 369)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 370)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 372)		{
HXLINE( 372)			int _g = 0;
HXDLIN( 372)			int _g1 = lines->length;
HXDLIN( 372)			while((_g < _g1)){
HXLINE( 372)				_g = (_g + 1);
HXDLIN( 372)				int i = (_g - 1);
HXLINE( 374)				::Array< ::String > currImageData = lines->__get(i).split(HX_("=",3d,00,00,00));
HXLINE( 375)				::String name = ::StringTools_obj::trim(currImageData->__get(0));
HXLINE( 376)				::Array< ::String > currImageRegion = ::StringTools_obj::trim(currImageData->__get(1)).split(HX_(" ",20,00,00,00));
HXLINE( 378)				Float X = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(0))) );
HXDLIN( 378)				Float Y = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(1))) );
HXDLIN( 378)				Float Width = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(2))) );
HXDLIN( 378)				Float Height = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(3))) );
HXDLIN( 378)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 378)				_this->x = X;
HXDLIN( 378)				_this->y = Y;
HXDLIN( 378)				_this->width = Width;
HXDLIN( 378)				_this->height = Height;
HXDLIN( 378)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 378)				rect->_inPool = false;
HXDLIN( 378)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 380)				Float x = rect1->width;
HXDLIN( 380)				Float y = rect1->height;
HXDLIN( 380)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 380)				point->_inPool = false;
HXDLIN( 380)				 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 381)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 381)				point1->_inPool = false;
HXDLIN( 381)				 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 383)				frames->addAtlasFrame(rect1,sourceSize,offset,name,0,null(),null(),null());
            			}
            		}
HXLINE( 386)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_397_findFrame)
HXLINE( 398)		if (::hx::IsNull( border )) {
HXLINE( 399)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 399)			point->_inPool = false;
HXDLIN( 399)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 399)			point1->_weak = true;
HXDLIN( 399)			border = point1;
            		}
HXLINE( 401)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn();
HXDLIN( 401)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 401)		if (::hx::IsNull( collections )) {
HXLINE( 401)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 401)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 401)		::Array< ::Dynamic> atlasFrames = collections;
HXLINE( 403)		{
HXLINE( 403)			int _g = 0;
HXDLIN( 403)			while((_g < atlasFrames->length)){
HXLINE( 403)				 ::flixel::graphics::frames::FlxAtlasFrames atlas = atlasFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxAtlasFrames >();
HXDLIN( 403)				_g = (_g + 1);
HXLINE( 404)				 ::flixel::math::FlxBasePoint _this = atlas->border;
HXDLIN( 404)				bool result;
HXDLIN( 404)				if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 404)					result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 404)					result = false;
            				}
HXDLIN( 404)				if (border->_weak) {
HXLINE( 404)					border->put();
            				}
HXDLIN( 404)				if (result) {
HXLINE( 405)					return atlas;
            				}
            			}
            		}
HXLINE( 407)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,findFrame,return )


::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxAtlasFrames_obj > __this = new FlxAtlasFrames_obj();
	__this->__construct(parent,border);
	return __this;
}

::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	FlxAtlasFrames_obj *__this = (FlxAtlasFrames_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAtlasFrames_obj), true, "flixel.graphics.frames.FlxAtlasFrames"));
	*(void **)__this = FlxAtlasFrames_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

void FlxAtlasFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAtlasFrames);
	HX_MARK_MEMBER_NAME(usedGraphics,"usedGraphics");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAtlasFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usedGraphics,"usedGraphics");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxAtlasFrames_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addAtlas") ) { return ::hx::Val( addAtlas_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usedGraphics") ) { return ::hx::Val( usedGraphics ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlasFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { outValue = fromLibGdx_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { outValue = fromSparrow_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromAseprite") ) { outValue = fromAseprite_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { outValue = getDimensions_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { outValue = texturePackerHelper_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { outValue = fromTexturePackerXml_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { outValue = fromTexturePackerJson_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { outValue = fromSpriteSheetPacker_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxAtlasFrames_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"usedGraphics") ) { usedGraphics=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAtlasFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("usedGraphics",28,4c,2f,20));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAtlasFrames_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxAtlasFrames_obj,usedGraphics),HX_("usedGraphics",28,4c,2f,20)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAtlasFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAtlasFrames_obj_sMemberFields[] = {
	HX_("usedGraphics",28,4c,2f,20),
	HX_("destroy",fa,2c,86,24),
	HX_("addBorder",ed,81,3e,1c),
	HX_("addAtlas",6a,73,3a,a0),
	HX_("concat",14,09,d0,c7),
	::String(null()) };

::hx::Class FlxAtlasFrames_obj::__mClass;

static ::String FlxAtlasFrames_obj_sStaticFields[] = {
	HX_("fromAseprite",cf,40,ef,24),
	HX_("fromTexturePackerJson",bf,f0,7e,be),
	HX_("texturePackerHelper",0f,23,bd,b2),
	HX_("fromLibGdx",80,06,df,27),
	HX_("getDimensions",83,1a,12,39),
	HX_("fromSparrow",c2,9f,ec,33),
	HX_("fromTexturePackerXml",20,df,27,fb),
	HX_("fromSpriteSheetPacker",b6,b2,c0,5f),
	HX_("findFrame",34,a9,7a,f5),
	::String(null())
};

void FlxAtlasFrames_obj::__register()
{
	FlxAtlasFrames_obj _hx_dummy;
	FlxAtlasFrames_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxAtlasFrames",d6,87,d5,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlasFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAtlasFrames_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAtlasFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAtlasFrames_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
