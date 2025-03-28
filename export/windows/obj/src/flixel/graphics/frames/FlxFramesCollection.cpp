#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_60_new,"flixel.graphics.frames.FlxFramesCollection","new",0x41834b71,"flixel.graphics.frames.FlxFramesCollection.new","flixel/graphics/frames/FlxFramesCollection.hx",60,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_79_getByName,"flixel.graphics.frames.FlxFramesCollection","getByName",0xec0f52c9,"flixel.graphics.frames.FlxFramesCollection.getByName","flixel/graphics/frames/FlxFramesCollection.hx",79,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_90_exists,"flixel.graphics.frames.FlxFramesCollection","exists",0x7e8c236b,"flixel.graphics.frames.FlxFramesCollection.exists","flixel/graphics/frames/FlxFramesCollection.hx",90,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_101_getByIndex,"flixel.graphics.frames.FlxFramesCollection","getByIndex",0xc8e928d4,"flixel.graphics.frames.FlxFramesCollection.getByIndex","flixel/graphics/frames/FlxFramesCollection.hx",101,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_111_getIndexByName,"flixel.graphics.frames.FlxFramesCollection","getIndexByName",0x9190d40d,"flixel.graphics.frames.FlxFramesCollection.getIndexByName","flixel/graphics/frames/FlxFramesCollection.hx",111,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_129_getFrameIndex,"flixel.graphics.frames.FlxFramesCollection","getFrameIndex",0x9be9862c,"flixel.graphics.frames.FlxFramesCollection.getFrameIndex","flixel/graphics/frames/FlxFramesCollection.hx",129,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_133_destroy,"flixel.graphics.frames.FlxFramesCollection","destroy",0x3c5f048b,"flixel.graphics.frames.FlxFramesCollection.destroy","flixel/graphics/frames/FlxFramesCollection.hx",133,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_149_addEmptyFrame,"flixel.graphics.frames.FlxFramesCollection","addEmptyFrame",0x8f5bf232,"flixel.graphics.frames.FlxFramesCollection.addEmptyFrame","flixel/graphics/frames/FlxFramesCollection.hx",149,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_165_addSpriteSheetFrame,"flixel.graphics.frames.FlxFramesCollection","addSpriteSheetFrame",0x98036ac5,"flixel.graphics.frames.FlxFramesCollection.addSpriteSheetFrame","flixel/graphics/frames/FlxFramesCollection.hx",165,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_190_addAtlasFrame,"flixel.graphics.frames.FlxFramesCollection","addAtlasFrame",0xf1c62eb4,"flixel.graphics.frames.FlxFramesCollection.addAtlasFrame","flixel/graphics/frames/FlxFramesCollection.hx",190,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_213_getAllByPrefix,"flixel.graphics.frames.FlxFramesCollection","getAllByPrefix",0x99ac5ca3,"flixel.graphics.frames.FlxFramesCollection.getAllByPrefix","flixel/graphics/frames/FlxFramesCollection.hx",213,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_230_forEachByPrefix,"flixel.graphics.frames.FlxFramesCollection","forEachByPrefix",0xa4950f24,"flixel.graphics.frames.FlxFramesCollection.forEachByPrefix","flixel/graphics/frames/FlxFramesCollection.hx",230,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_258_setFrameOffset,"flixel.graphics.frames.FlxFramesCollection","setFrameOffset",0xbcd84bad,"flixel.graphics.frames.FlxFramesCollection.setFrameOffset","flixel/graphics/frames/FlxFramesCollection.hx",258,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_277_addFrameOffset,"flixel.graphics.frames.FlxFramesCollection","addFrameOffset",0xaaf1178e,"flixel.graphics.frames.FlxFramesCollection.addFrameOffset","flixel/graphics/frames/FlxFramesCollection.hx",277,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_296_setFramesOffsetByPrefix,"flixel.graphics.frames.FlxFramesCollection","setFramesOffsetByPrefix",0x71d30615,"flixel.graphics.frames.FlxFramesCollection.setFramesOffsetByPrefix","flixel/graphics/frames/FlxFramesCollection.hx",296,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_312_addFramesOffsetByPrefix,"flixel.graphics.frames.FlxFramesCollection","addFramesOffsetByPrefix",0x0f3c3614,"flixel.graphics.frames.FlxFramesCollection.addFramesOffsetByPrefix","flixel/graphics/frames/FlxFramesCollection.hx",312,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_327_setFrameDuration,"flixel.graphics.frames.FlxFramesCollection","setFrameDuration",0x4fcf7dee,"flixel.graphics.frames.FlxFramesCollection.setFrameDuration","flixel/graphics/frames/FlxFramesCollection.hx",327,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_341_checkFrame,"flixel.graphics.frames.FlxFramesCollection","checkFrame",0xf252f354,"flixel.graphics.frames.FlxFramesCollection.checkFrame","flixel/graphics/frames/FlxFramesCollection.hx",341,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_364_pushFrame,"flixel.graphics.frames.FlxFramesCollection","pushFrame",0xac097dc4,"flixel.graphics.frames.FlxFramesCollection.pushFrame","flixel/graphics/frames/FlxFramesCollection.hx",364,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_386_addBorder,"flixel.graphics.frames.FlxFramesCollection","addBorder",0x7da91fbe,"flixel.graphics.frames.FlxFramesCollection.addBorder","flixel/graphics/frames/FlxFramesCollection.hx",386,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_392_toString,"flixel.graphics.frames.FlxFramesCollection","toString",0xfe5297fb,"flixel.graphics.frames.FlxFramesCollection.toString","flixel/graphics/frames/FlxFramesCollection.hx",392,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_397_get_numFrames,"flixel.graphics.frames.FlxFramesCollection","get_numFrames",0xbd2728b4,"flixel.graphics.frames.FlxFramesCollection.get_numFrames","flixel/graphics/frames/FlxFramesCollection.hx",397,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_402_get_framesHash,"flixel.graphics.frames.FlxFramesCollection","get_framesHash",0x03770b6c,"flixel.graphics.frames.FlxFramesCollection.get_framesHash","flixel/graphics/frames/FlxFramesCollection.hx",402,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_407_set_framesHash,"flixel.graphics.frames.FlxFramesCollection","set_framesHash",0x2396f3e0,"flixel.graphics.frames.FlxFramesCollection.set_framesHash","flixel/graphics/frames/FlxFramesCollection.hx",407,0xe09dd200)
namespace flixel{
namespace graphics{
namespace frames{

void FlxFramesCollection_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_60_new)
HXLINE(  61)		this->parent = parent;
HXLINE(  62)		this->type = type;
HXLINE(  63)		 ::flixel::math::FlxBasePoint _hx_tmp;
HXDLIN(  63)		if (::hx::IsNull( border )) {
HXLINE(  63)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  63)			point->_inPool = false;
HXDLIN(  63)			_hx_tmp = point;
            		}
            		else {
HXLINE(  63)			_hx_tmp = border;
            		}
HXDLIN(  63)		this->border = _hx_tmp;
HXLINE(  64)		this->frames = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  65)		this->framesByName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  67)		if (::hx::IsNotNull( parent )) {
HXLINE(  68)			parent->addFrameCollection(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic FlxFramesCollection_obj::__CreateEmpty() { return new FlxFramesCollection_obj; }

void *FlxFramesCollection_obj::_hx_vtable = 0;

Dynamic FlxFramesCollection_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFramesCollection_obj > _hx_result = new FlxFramesCollection_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxFramesCollection_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7907b929;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_frames_FlxFramesCollection__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::frames::FlxFramesCollection_obj::destroy,
};

void *FlxFramesCollection_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_frames_FlxFramesCollection__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByName(::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_79_getByName)
HXDLIN(  79)		return ( ( ::flixel::graphics::frames::FlxFrame)(this->framesByName->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByName,return )

bool FlxFramesCollection_obj::exists(::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_90_exists)
HXDLIN(  90)		return this->framesByName->exists(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,exists,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByIndex(int index){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_101_getByIndex)
HXDLIN( 101)		return this->frames->__get(index).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByIndex,return )

int FlxFramesCollection_obj::getIndexByName(::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_111_getIndexByName)
HXLINE( 112)		{
HXLINE( 112)			int _g = 0;
HXDLIN( 112)			int _g1 = this->frames->length;
HXDLIN( 112)			while((_g < _g1)){
HXLINE( 112)				_g = (_g + 1);
HXDLIN( 112)				int i = (_g - 1);
HXLINE( 114)				if ((this->frames->__get(i).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name == name)) {
HXLINE( 115)					return i;
            				}
            			}
            		}
HXLINE( 118)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getIndexByName,return )

int FlxFramesCollection_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_129_getFrameIndex)
HXDLIN( 129)		return this->frames->indexOf(frame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getFrameIndex,return )

void FlxFramesCollection_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_133_destroy)
HXLINE( 134)		this->frames = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->frames);
HXLINE( 135)		this->border = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->border)) );
HXLINE( 136)		this->framesByName = null();
HXLINE( 137)		this->parent = null();
HXLINE( 138)		this->type = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,destroy,(void))

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addEmptyFrame( ::flixel::math::FlxRect size){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_149_addEmptyFrame)
HXLINE( 150)		 ::flixel::graphics::frames::FlxFrame frame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,null(),null(),null(),null());
HXLINE( 151)		frame->type = 2;
HXLINE( 152)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 152)		_this->x = ( (Float)(0) );
HXDLIN( 152)		_this->y = ( (Float)(0) );
HXDLIN( 152)		_this->width = ( (Float)(0) );
HXDLIN( 152)		_this->height = ( (Float)(0) );
HXDLIN( 152)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 152)		rect->_inPool = false;
HXDLIN( 152)		frame->set_frame(rect);
HXLINE( 153)		{
HXLINE( 153)			 ::flixel::math::FlxBasePoint this1 = frame->sourceSize;
HXDLIN( 153)			Float y = size->height;
HXDLIN( 153)			this1->set_x(size->width);
HXDLIN( 153)			this1->set_y(y);
            		}
HXLINE( 154)		this->frames->push(frame);
HXLINE( 155)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addEmptyFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addSpriteSheetFrame( ::flixel::math::FlxRect region){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_165_addSpriteSheetFrame)
HXLINE( 166)		 ::flixel::graphics::frames::FlxFrame frame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,null(),null(),null(),null());
HXLINE( 167)		frame->set_frame(this->checkFrame(region,null()));
HXLINE( 168)		{
HXLINE( 168)			 ::flixel::math::FlxBasePoint this1 = frame->sourceSize;
HXDLIN( 168)			Float y = region->height;
HXDLIN( 168)			this1->set_x(region->width);
HXDLIN( 168)			this1->set_y(y);
            		}
HXLINE( 169)		{
HXLINE( 169)			 ::flixel::math::FlxBasePoint this2 = frame->offset;
HXDLIN( 169)			this2->set_x(( (Float)(0) ));
HXDLIN( 169)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 170)		return this->pushFrame(frame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addSpriteSheetFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addAtlasFrame( ::flixel::math::FlxRect frame, ::flixel::math::FlxBasePoint sourceSize, ::flixel::math::FlxBasePoint offset,::String name,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration){
            		int angle = __o_angle.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		Float duration = __o_duration.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_190_addAtlasFrame)
HXLINE( 191)		bool _hx_tmp;
HXDLIN( 191)		if (::hx::IsNotNull( name )) {
HXLINE( 191)			_hx_tmp = this->framesByName->exists(name);
            		}
            		else {
HXLINE( 191)			_hx_tmp = false;
            		}
HXDLIN( 191)		if (_hx_tmp) {
HXLINE( 192)			return ( ( ::flixel::graphics::frames::FlxFrame)(this->framesByName->get(name)) );
            		}
HXLINE( 194)		 ::flixel::graphics::frames::FlxFrame texFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,angle,flipX,flipY,duration);
HXLINE( 195)		texFrame->name = name;
HXLINE( 196)		{
HXLINE( 196)			 ::flixel::math::FlxBasePoint this1 = texFrame->sourceSize;
HXDLIN( 196)			Float y = sourceSize->y;
HXDLIN( 196)			this1->set_x(sourceSize->x);
HXDLIN( 196)			this1->set_y(y);
            		}
HXLINE( 197)		{
HXLINE( 197)			 ::flixel::math::FlxBasePoint this2 = texFrame->offset;
HXDLIN( 197)			Float y1 = offset->y;
HXDLIN( 197)			this2->set_x(offset->x);
HXDLIN( 197)			this2->set_y(y1);
            		}
HXLINE( 198)		texFrame->set_frame(this->checkFrame(frame,name));
HXLINE( 200)		sourceSize = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(sourceSize)) );
HXLINE( 201)		offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(offset)) );
HXLINE( 203)		return this->pushFrame(texFrame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxFramesCollection_obj,addAtlasFrame,return )

::Array< ::Dynamic> FlxFramesCollection_obj::getAllByPrefix(::String prefix){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_213_getAllByPrefix)
HXLINE( 214)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new();
HXLINE( 215)		{
HXLINE( 215)			::String warningMsg = null();
HXDLIN( 215)			bool warn = false;
HXDLIN( 215)			{
HXLINE( 215)				::Dynamic map = this->framesByName;
HXDLIN( 215)				::Dynamic _g_map = map;
HXDLIN( 215)				 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 215)				while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 215)					::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 215)					 ::flixel::graphics::frames::FlxFrame _g1_value = ( ( ::flixel::graphics::frames::FlxFrame)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 215)					::String _g1_key = key;
HXDLIN( 215)					::String name = _g1_key;
HXDLIN( 215)					 ::flixel::graphics::frames::FlxFrame frame = _g1_value;
HXDLIN( 215)					if ((name.indexOf(prefix,null()) == 0)) {
HXLINE( 236)						warn = false;
HXLINE( 215)						list->push(frame);
            					}
            				}
            			}
HXDLIN( 215)			if (warn) {
HXLINE( 215)				 ::Dynamic _hx_tmp;
HXDLIN( 215)				if (::hx::IsNotNull( warningMsg )) {
HXLINE( 215)					_hx_tmp = warningMsg;
            				}
            				else {
HXLINE( 215)					_hx_tmp = ((HX_("no frames found with the prefix \"",24,d9,96,27) + prefix) + HX_("\"",22,00,00,00));
            				}
HXDLIN( 215)				::flixel::FlxG_obj::log->advanced(_hx_tmp,::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            		}
HXLINE( 216)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getAllByPrefix,return )

void FlxFramesCollection_obj::forEachByPrefix(::String prefix, ::Dynamic func,::hx::Null< bool >  __o_warnIfEmpty,::String warningMsg){
            		bool warnIfEmpty = __o_warnIfEmpty.Default(true);
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_230_forEachByPrefix)
HXLINE( 231)		bool warn = warnIfEmpty;
HXLINE( 232)		{
HXLINE( 232)			::Dynamic map = this->framesByName;
HXDLIN( 232)			::Dynamic _g_map = map;
HXDLIN( 232)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 232)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 232)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 232)				 ::flixel::graphics::frames::FlxFrame _g1_value = ( ( ::flixel::graphics::frames::FlxFrame)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 232)				::String _g1_key = key;
HXDLIN( 232)				::String name = _g1_key;
HXDLIN( 232)				 ::flixel::graphics::frames::FlxFrame frame = _g1_value;
HXLINE( 234)				if ((name.indexOf(prefix,null()) == 0)) {
HXLINE( 236)					warn = false;
HXLINE( 237)					func(frame);
            				}
            			}
            		}
HXLINE( 241)		if (warn) {
HXLINE( 242)			 ::Dynamic _hx_tmp;
HXDLIN( 242)			if (::hx::IsNotNull( warningMsg )) {
HXLINE( 242)				_hx_tmp = warningMsg;
            			}
            			else {
HXLINE( 242)				_hx_tmp = ((HX_("no frames found with the prefix \"",24,d9,96,27) + prefix) + HX_("\"",22,00,00,00));
            			}
HXDLIN( 242)			::flixel::FlxG_obj::log->advanced(_hx_tmp,::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFramesCollection_obj,forEachByPrefix,(void))

void FlxFramesCollection_obj::setFrameOffset(::String name,Float offsetX,Float offsetY){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_258_setFrameOffset)
HXDLIN( 258)		if (this->framesByName->exists(name)) {
HXLINE( 259)			 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::graphics::frames::FlxFrame)(this->framesByName->get(name)) )->offset;
HXDLIN( 259)			this1->set_x(offsetX);
HXDLIN( 259)			this1->set_y(offsetY);
            		}
            		else {
HXLINE( 261)			::flixel::FlxG_obj::log->advanced((HX_("No frame called ",11,02,4c,19) + name),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFramesCollection_obj,setFrameOffset,(void))

void FlxFramesCollection_obj::addFrameOffset(::String name,Float offsetX,Float offsetY){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_277_addFrameOffset)
HXDLIN( 277)		if (this->framesByName->exists(name)) {
HXLINE( 278)			 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::graphics::frames::FlxFrame)(this->framesByName->get(name)) )->offset;
HXDLIN( 278)			this1->set_x((this1->x + offsetX));
HXDLIN( 278)			this1->set_y((this1->y + offsetY));
            		}
            		else {
HXLINE( 280)			::flixel::FlxG_obj::log->advanced((HX_("No frame called ",11,02,4c,19) + name),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFramesCollection_obj,addFrameOffset,(void))

void FlxFramesCollection_obj::setFramesOffsetByPrefix(::String prefix,Float offsetX,Float offsetY,::hx::Null< bool >  __o_warnIfEmpty){
            		bool warnIfEmpty = __o_warnIfEmpty.Default(true);
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_296_setFramesOffsetByPrefix)
HXDLIN( 296)		::String warningMsg = null();
HXDLIN( 296)		bool warn = warnIfEmpty;
HXDLIN( 296)		{
HXDLIN( 296)			::Dynamic map = this->framesByName;
HXDLIN( 296)			::Dynamic _g_map = map;
HXDLIN( 296)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 296)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 296)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 296)				 ::flixel::graphics::frames::FlxFrame _g1_value = ( ( ::flixel::graphics::frames::FlxFrame)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 296)				::String _g1_key = key;
HXDLIN( 296)				::String name = _g1_key;
HXDLIN( 296)				 ::flixel::graphics::frames::FlxFrame frame = _g1_value;
HXDLIN( 296)				if ((name.indexOf(prefix,null()) == 0)) {
HXLINE( 236)					warn = false;
HXLINE( 296)					{
HXDLIN( 296)						 ::flixel::math::FlxBasePoint this1 = frame->offset;
HXDLIN( 296)						this1->set_x(offsetX);
HXDLIN( 296)						this1->set_y(offsetY);
            					}
            				}
            			}
            		}
HXDLIN( 296)		if (warn) {
HXDLIN( 296)			 ::Dynamic _hx_tmp;
HXDLIN( 296)			if (::hx::IsNotNull( warningMsg )) {
HXDLIN( 296)				_hx_tmp = warningMsg;
            			}
            			else {
HXDLIN( 296)				_hx_tmp = ((HX_("no frames found with the prefix \"",24,d9,96,27) + prefix) + HX_("\"",22,00,00,00));
            			}
HXDLIN( 296)			::flixel::FlxG_obj::log->advanced(_hx_tmp,::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFramesCollection_obj,setFramesOffsetByPrefix,(void))

void FlxFramesCollection_obj::addFramesOffsetByPrefix(::String prefix,Float offsetX,Float offsetY,::hx::Null< bool >  __o_warnIfEmpty){
            		bool warnIfEmpty = __o_warnIfEmpty.Default(true);
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_312_addFramesOffsetByPrefix)
HXDLIN( 312)		::String warningMsg = null();
HXDLIN( 312)		bool warn = warnIfEmpty;
HXDLIN( 312)		{
HXDLIN( 312)			::Dynamic map = this->framesByName;
HXDLIN( 312)			::Dynamic _g_map = map;
HXDLIN( 312)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 312)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 312)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 312)				 ::flixel::graphics::frames::FlxFrame _g1_value = ( ( ::flixel::graphics::frames::FlxFrame)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 312)				::String _g1_key = key;
HXDLIN( 312)				::String name = _g1_key;
HXDLIN( 312)				 ::flixel::graphics::frames::FlxFrame frame = _g1_value;
HXDLIN( 312)				if ((name.indexOf(prefix,null()) == 0)) {
HXLINE( 236)					warn = false;
HXLINE( 312)					{
HXDLIN( 312)						 ::flixel::math::FlxBasePoint this1 = frame->offset;
HXDLIN( 312)						this1->set_x((this1->x + offsetX));
HXDLIN( 312)						this1->set_y((this1->y + offsetY));
            					}
            				}
            			}
            		}
HXDLIN( 312)		if (warn) {
HXDLIN( 312)			 ::Dynamic _hx_tmp;
HXDLIN( 312)			if (::hx::IsNotNull( warningMsg )) {
HXDLIN( 312)				_hx_tmp = warningMsg;
            			}
            			else {
HXDLIN( 312)				_hx_tmp = ((HX_("no frames found with the prefix \"",24,d9,96,27) + prefix) + HX_("\"",22,00,00,00));
            			}
HXDLIN( 312)			::flixel::FlxG_obj::log->advanced(_hx_tmp,::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFramesCollection_obj,addFramesOffsetByPrefix,(void))

void FlxFramesCollection_obj::setFrameDuration(::String name,Float duration){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_327_setFrameDuration)
HXDLIN( 327)		if (this->framesByName->exists(name)) {
HXLINE( 328)			( ( ::flixel::graphics::frames::FlxFrame)(this->framesByName->get(name)) )->duration = duration;
            		}
            		else {
HXLINE( 330)			::flixel::FlxG_obj::log->advanced((HX_("No frame called ",11,02,4c,19) + name),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFramesCollection_obj,setFrameDuration,(void))

 ::flixel::math::FlxRect FlxFramesCollection_obj::checkFrame( ::flixel::math::FlxRect frame,::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_341_checkFrame)
HXLINE( 342)		Float Value = frame->x;
HXDLIN( 342)		 ::Dynamic Max = this->parent->width;
HXDLIN( 342)		Float lowerBound;
HXDLIN( 342)		if ((Value < 0)) {
HXLINE( 342)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 342)			lowerBound = Value;
            		}
HXDLIN( 342)		Float x;
HXDLIN( 342)		bool x1;
HXDLIN( 342)		if (::hx::IsNotNull( Max )) {
HXLINE( 342)			x1 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 342)			x1 = false;
            		}
HXDLIN( 342)		if (x1) {
HXLINE( 342)			x = ( (Float)(Max) );
            		}
            		else {
HXLINE( 342)			x = lowerBound;
            		}
HXLINE( 343)		Float Value1 = frame->y;
HXDLIN( 343)		 ::Dynamic Max1 = this->parent->height;
HXDLIN( 343)		Float lowerBound1;
HXDLIN( 343)		if ((Value1 < 0)) {
HXLINE( 343)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 343)			lowerBound1 = Value1;
            		}
HXDLIN( 343)		Float y;
HXDLIN( 343)		bool y1;
HXDLIN( 343)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 343)			y1 = ::hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 343)			y1 = false;
            		}
HXDLIN( 343)		if (y1) {
HXLINE( 343)			y = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 343)			y = lowerBound1;
            		}
HXLINE( 345)		Float Value2 = (frame->x + frame->width);
HXDLIN( 345)		 ::Dynamic Max2 = this->parent->width;
HXDLIN( 345)		Float lowerBound2;
HXDLIN( 345)		if ((Value2 < 0)) {
HXLINE( 345)			lowerBound2 = ( (Float)(0) );
            		}
            		else {
HXLINE( 345)			lowerBound2 = Value2;
            		}
HXDLIN( 345)		Float r;
HXDLIN( 345)		bool r1;
HXDLIN( 345)		if (::hx::IsNotNull( Max2 )) {
HXLINE( 345)			r1 = ::hx::IsGreater( lowerBound2,Max2 );
            		}
            		else {
HXLINE( 345)			r1 = false;
            		}
HXDLIN( 345)		if (r1) {
HXLINE( 345)			r = ( (Float)(Max2) );
            		}
            		else {
HXLINE( 345)			r = lowerBound2;
            		}
HXLINE( 346)		Float Value3 = (frame->y + frame->height);
HXDLIN( 346)		 ::Dynamic Max3 = this->parent->height;
HXDLIN( 346)		Float lowerBound3;
HXDLIN( 346)		if ((Value3 < 0)) {
HXLINE( 346)			lowerBound3 = ( (Float)(0) );
            		}
            		else {
HXLINE( 346)			lowerBound3 = Value3;
            		}
HXDLIN( 346)		Float b;
HXDLIN( 346)		bool b1;
HXDLIN( 346)		if (::hx::IsNotNull( Max3 )) {
HXLINE( 346)			b1 = ::hx::IsGreater( lowerBound3,Max3 );
            		}
            		else {
HXLINE( 346)			b1 = false;
            		}
HXDLIN( 346)		if (b1) {
HXLINE( 346)			b = ( (Float)(Max3) );
            		}
            		else {
HXLINE( 346)			b = lowerBound3;
            		}
HXLINE( 348)		{
HXLINE( 348)			frame->x = x;
HXDLIN( 348)			frame->y = y;
HXDLIN( 348)			frame->width = (r - x);
HXDLIN( 348)			frame->height = (b - y);
            		}
HXLINE( 350)		bool _hx_tmp;
HXDLIN( 350)		if (!((frame->width <= 0))) {
HXLINE( 350)			_hx_tmp = (frame->height <= 0);
            		}
            		else {
HXLINE( 350)			_hx_tmp = true;
            		}
HXDLIN( 350)		if (_hx_tmp) {
HXLINE( 351)			::flixel::FlxG_obj::log->advanced(((HX_("The frame ",42,8b,9d,3a) + name) + HX_(" has incorrect data and results in an image with the size of (0, 0)",63,cf,34,3e)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
HXLINE( 353)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFramesCollection_obj,checkFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::pushFrame( ::flixel::graphics::frames::FlxFrame frameObj,::hx::Null< bool >  __o_overwriteHash){
            		bool overwriteHash = __o_overwriteHash.Default(false);
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_364_pushFrame)
HXLINE( 365)		::String name = frameObj->name;
HXLINE( 366)		bool _hx_tmp;
HXDLIN( 366)		bool _hx_tmp1;
HXDLIN( 366)		if (::hx::IsNotNull( name )) {
HXLINE( 366)			_hx_tmp1 = this->framesByName->exists(name);
            		}
            		else {
HXLINE( 366)			_hx_tmp1 = false;
            		}
HXDLIN( 366)		if (_hx_tmp1) {
HXLINE( 366)			_hx_tmp = !(overwriteHash);
            		}
            		else {
HXLINE( 366)			_hx_tmp = false;
            		}
HXDLIN( 366)		if (_hx_tmp) {
HXLINE( 367)			return ( ( ::flixel::graphics::frames::FlxFrame)(this->framesByName->get(name)) );
            		}
HXLINE( 369)		this->frames->push(frameObj);
HXLINE( 370)		frameObj->cacheFrameMatrix();
HXLINE( 372)		if (::hx::IsNotNull( name )) {
HXLINE( 373)			this->framesByName->set(name,frameObj);
            		}
HXLINE( 375)		return frameObj;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFramesCollection_obj,pushFrame,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxFramesCollection_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_386_addBorder)
HXDLIN( 386)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("To be overriden in subclasses",8b,78,89,60)));
HXDLIN( 386)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addBorder,return )

::String FlxFramesCollection_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_392_toString)
HXDLIN( 392)		 ::Dynamic value = this->frames;
HXDLIN( 392)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 392)		_this->label = HX_("frames",a6,af,85,ac);
HXDLIN( 392)		_this->value = value;
HXDLIN( 392)		 ::Dynamic value1 = this->type;
HXDLIN( 392)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 392)		_this1->label = HX_("type",ba,f2,08,4d);
HXDLIN( 392)		_this1->value = value1;
HXDLIN( 392)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,toString,return )

int FlxFramesCollection_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_397_get_numFrames)
HXDLIN( 397)		return this->frames->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,get_numFrames,return )

 ::haxe::ds::StringMap FlxFramesCollection_obj::get_framesHash(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_402_get_framesHash)
HXDLIN( 402)		return this->framesByName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,get_framesHash,return )

 ::haxe::ds::StringMap FlxFramesCollection_obj::set_framesHash( ::haxe::ds::StringMap value){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_407_set_framesHash)
HXDLIN( 407)		return (this->framesByName = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,set_framesHash,return )


::hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxFramesCollection_obj > __this = new FlxFramesCollection_obj();
	__this->__construct(parent,type,border);
	return __this;
}

::hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border) {
	FlxFramesCollection_obj *__this = (FlxFramesCollection_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFramesCollection_obj), true, "flixel.graphics.frames.FlxFramesCollection"));
	*(void **)__this = FlxFramesCollection_obj::_hx_vtable;
	__this->__construct(parent,type,border);
	return __this;
}

FlxFramesCollection_obj::FlxFramesCollection_obj()
{
}

void FlxFramesCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFramesCollection);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesByName,"framesByName");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_END_CLASS();
}

void FlxFramesCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesByName,"framesByName");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(border,"border");
}

::hx::Val FlxFramesCollection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return ::hx::Val( getByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"pushFrame") ) { return ::hx::Val( pushFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_framesHash() ); }
		if (HX_FIELD_EQ(inName,"getByIndex") ) { return ::hx::Val( getByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFrame") ) { return ::hx::Val( checkFrame_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesByName") ) { return ::hx::Val( framesByName ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return ::hx::Val( getFrameIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"addEmptyFrame") ) { return ::hx::Val( addEmptyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAtlasFrame") ) { return ::hx::Val( addAtlasFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIndexByName") ) { return ::hx::Val( getIndexByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAllByPrefix") ) { return ::hx::Val( getAllByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrameOffset") ) { return ::hx::Val( setFrameOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFrameOffset") ) { return ::hx::Val( addFrameOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_framesHash") ) { return ::hx::Val( get_framesHash_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_framesHash") ) { return ::hx::Val( set_framesHash_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"forEachByPrefix") ) { return ::hx::Val( forEachByPrefix_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setFrameDuration") ) { return ::hx::Val( setFrameDuration_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return ::hx::Val( addSpriteSheetFrame_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setFramesOffsetByPrefix") ) { return ::hx::Val( setFramesOffsetByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFramesOffsetByPrefix") ) { return ::hx::Val( addFramesOffsetByPrefix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxFramesCollection_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::flixel::graphics::frames::FlxFrameCollectionType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_framesHash(inValue.Cast<  ::haxe::ds::StringMap >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesByName") ) { framesByName=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFramesCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("framesHash",94,d6,ee,b6));
	outFields->push(HX_("framesByName",08,90,40,c4));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("border",ec,4c,1a,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFramesCollection_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxFramesCollection_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxFramesCollection_obj,framesByName),HX_("framesByName",08,90,40,c4)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxFramesCollection_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrameCollectionType */ ,(int)offsetof(FlxFramesCollection_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxFramesCollection_obj,border),HX_("border",ec,4c,1a,64)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxFramesCollection_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFramesCollection_obj_sMemberFields[] = {
	HX_("frames",a6,af,85,ac),
	HX_("framesByName",08,90,40,c4),
	HX_("parent",2a,05,7e,ed),
	HX_("type",ba,f2,08,4d),
	HX_("border",ec,4c,1a,64),
	HX_("getByName",f8,b4,a4,8a),
	HX_("exists",dc,1d,e0,bf),
	HX_("getByIndex",c5,af,09,ed),
	HX_("getIndexByName",7e,27,fe,ba),
	HX_("getFrameIndex",db,2b,ad,fd),
	HX_("destroy",fa,2c,86,24),
	HX_("addEmptyFrame",e1,97,1f,f1),
	HX_("addSpriteSheetFrame",b4,fd,bc,f0),
	HX_("addAtlasFrame",63,d4,89,53),
	HX_("getAllByPrefix",14,b0,19,c3),
	HX_("forEachByPrefix",93,be,d0,ba),
	HX_("setFrameOffset",1e,9f,45,e6),
	HX_("addFrameOffset",ff,6a,5e,d4),
	HX_("setFramesOffsetByPrefix",84,3c,82,38),
	HX_("addFramesOffsetByPrefix",83,6c,eb,d5),
	HX_("setFrameDuration",9f,4f,cd,ad),
	HX_("checkFrame",45,7a,73,16),
	HX_("pushFrame",f3,df,9e,4a),
	HX_("addBorder",ed,81,3e,1c),
	HX_("toString",ac,d0,6e,38),
	HX_("get_numFrames",63,ce,ea,1e),
	HX_("get_framesHash",dd,5e,e4,2c),
	HX_("set_framesHash",51,47,04,4d),
	::String(null()) };

::hx::Class FlxFramesCollection_obj::__mClass;

void FlxFramesCollection_obj::__register()
{
	FlxFramesCollection_obj _hx_dummy;
	FlxFramesCollection_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxFramesCollection",ff,be,62,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFramesCollection_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFramesCollection_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFramesCollection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFramesCollection_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
