#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_15_new,"flixel.system.debug.watch.Watch","new",0xfeaf943a,"flixel.system.debug.watch.Watch.new","flixel/system/debug/watch/Watch.hx",15,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_37_add,"flixel.system.debug.watch.Watch","add",0xfea5b5fb,"flixel.system.debug.watch.Watch.add","flixel/system/debug/watch/Watch.hx",37,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_58_isInvalid,"flixel.system.debug.watch.Watch","isInvalid",0x369d7b87,"flixel.system.debug.watch.Watch.isInvalid","flixel/system/debug/watch/Watch.hx",58,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_71_getExistingEntry,"flixel.system.debug.watch.Watch","getExistingEntry",0xcc1e3f57,"flixel.system.debug.watch.Watch.getExistingEntry","flixel/system/debug/watch/Watch.hx",71,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_86_addEntry,"flixel.system.debug.watch.Watch","addEntry",0xc2d1a477,"flixel.system.debug.watch.Watch.addEntry","flixel/system/debug/watch/Watch.hx",86,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_94_remove,"flixel.system.debug.watch.Watch","remove",0xa5c13caa,"flixel.system.debug.watch.Watch.remove","flixel/system/debug/watch/Watch.hx",94,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_101_removeEntry,"flixel.system.debug.watch.Watch","removeEntry",0x44a48368,"flixel.system.debug.watch.Watch.removeEntry","flixel/system/debug/watch/Watch.hx",101,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_109_removeAll,"flixel.system.debug.watch.Watch","removeAll",0xc23c3a97,"flixel.system.debug.watch.Watch.removeAll","flixel/system/debug/watch/Watch.hx",109,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_122_update,"flixel.system.debug.watch.Watch","update",0x283e266f,"flixel.system.debug.watch.Watch.update","flixel/system/debug/watch/Watch.hx",122,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_127_updateSize,"flixel.system.debug.watch.Watch","updateSize",0x79f056d0,"flixel.system.debug.watch.Watch.updateSize","flixel/system/debug/watch/Watch.hx",127,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_135_resetEntries,"flixel.system.debug.watch.Watch","resetEntries",0x423b6427,"flixel.system.debug.watch.Watch.resetEntries","flixel/system/debug/watch/Watch.hx",135,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_145_getMaxNameWidth,"flixel.system.debug.watch.Watch","getMaxNameWidth",0x1ee45d07,"flixel.system.debug.watch.Watch.getMaxNameWidth","flixel/system/debug/watch/Watch.hx",145,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_150_getMaxMinWidth,"flixel.system.debug.watch.Watch","getMaxMinWidth",0x4606f748,"flixel.system.debug.watch.Watch.getMaxMinWidth","flixel/system/debug/watch/Watch.hx",150,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_154_getMax,"flixel.system.debug.watch.Watch","getMax",0x445ae414,"flixel.system.debug.watch.Watch.getMax","flixel/system/debug/watch/Watch.hx",154,0x446c9b58)
HX_LOCAL_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_18_boot,"flixel.system.debug.watch.Watch","boot",0xd30b1f18,"flixel.system.debug.watch.Watch.boot","flixel/system/debug/watch/Watch.hx",18,0x446c9b58)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void Watch_obj::__construct(::hx::Null< bool >  __o_closable){
            		bool closable = __o_closable.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_15_new)
HXLINE(  22)		this->entries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  21)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(2,15);
HXDLIN(  21)		point->_inPool = false;
HXDLIN(  21)		this->entriesContainerOffset = point;
HXLINE(  26)		super::__construct(HX_("Watch",2f,86,52,58), ::flixel::_hx_system::debug::GraphicWatch_obj::__alloc( HX_CTX ,0,0,null(),null()),0,0,true,null(),closable,null());
HXLINE(  28)		this->entriesContainer =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  29)		this->entriesContainer->set_x(this->entriesContainerOffset->x);
HXLINE(  30)		this->entriesContainer->set_y(this->entriesContainerOffset->y);
HXLINE(  31)		this->addChild(this->entriesContainer);
HXLINE(  33)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->removeAll_dyn());
            	}

Dynamic Watch_obj::__CreateEmpty() { return new Watch_obj; }

void *Watch_obj::_hx_vtable = 0;

Dynamic Watch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Watch_obj > _hx_result = new Watch_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Watch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39123ef8) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x39123ef8;
		}
	} else {
		if (inClassId<=(int)0x5ad89704) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x5ad89704;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Watch_obj::add(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_37_add)
HXLINE(  38)		if (this->isInvalid(displayName,data)) {
HXLINE(  39)			return;
            		}
HXLINE(  41)		 ::flixel::_hx_system::debug::watch::WatchEntry existing = this->getExistingEntry(displayName,data);
HXLINE(  42)		if (::hx::IsNotNull( existing )) {
HXLINE(  44)			switch((int)(data->_hx_getIndex())){
            				case (int)1: {
HXLINE(  46)					::String _g = data->_hx_getString(0);
HXLINE(  47)					existing->data = data;
            				}
            				break;
            				case (int)3: {
HXLINE(  46)					 ::Dynamic _g = data->_hx_getObject(0);
HXLINE(  47)					existing->data = data;
            				}
            				break;
            				default:{
            				}
            			}
HXLINE(  50)			return;
            		}
HXLINE(  53)		this->addEntry(displayName,data);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,add,(void))

bool Watch_obj::isInvalid(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_58_isInvalid)
HXDLIN(  58)		switch((int)(data->_hx_getIndex())){
            			case (int)0: {
HXLINE(  60)				 ::Dynamic object = data->_hx_getObject(0);
HXDLIN(  60)				::String field = data->_hx_getString(1);
HXDLIN(  60)				if (::hx::IsNotNull( object )) {
HXLINE(  60)					return ::hx::IsNull( field );
            				}
            				else {
HXLINE(  60)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  61)				::String value = data->_hx_getString(0);
HXLINE(  62)				if (::hx::IsNotNull( displayName )) {
HXLINE(  62)					return (displayName.length == 0);
            				}
            				else {
HXLINE(  62)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  63)				 ::hscript::Expr _g = data->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  63)				::String expression = data->_hx_getString(0);
HXLINE(  64)				if (::hx::IsNotNull( expression )) {
HXLINE(  64)					return (expression.length == 0);
            				}
            				else {
HXLINE(  64)					return true;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  65)				 ::Dynamic func = data->_hx_getObject(0);
HXLINE(  66)				return ::hx::IsNull( func );
            			}
            			break;
            		}
HXLINE(  58)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,isInvalid,return )

 ::flixel::_hx_system::debug::watch::WatchEntry Watch_obj::getExistingEntry(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_71_getExistingEntry)
HXLINE(  72)		{
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			::Array< ::Dynamic> _g1 = this->entries;
HXDLIN(  72)			while((_g < _g1->length)){
HXLINE(  72)				 ::flixel::_hx_system::debug::watch::WatchEntry entry = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXDLIN(  72)				_g = (_g + 1);
HXLINE(  74)				bool _hx_tmp;
HXDLIN(  74)				if (::hx::IsNotNull( data )) {
HXLINE(  74)					switch((int)(data->_hx_getIndex())){
            						case (int)1: {
HXLINE(  74)							::String _g = data->_hx_getString(0);
HXDLIN(  74)							_hx_tmp = true;
            						}
            						break;
            						case (int)3: {
HXLINE(  74)							 ::Dynamic _g = data->_hx_getObject(0);
HXDLIN(  74)							_hx_tmp = true;
            						}
            						break;
            						default:{
HXLINE(  74)							_hx_tmp = false;
            						}
            					}
            				}
            				else {
HXLINE(  74)					_hx_tmp = true;
            				}
HXDLIN(  74)				if (_hx_tmp) {
HXLINE(  76)					if ((entry->displayName == displayName)) {
HXLINE(  77)						return entry;
            					}
            				}
            				else {
HXLINE(  79)					if (__hxcpp_enum_eq(entry->data,data)) {
HXLINE(  80)						return entry;
            					}
            				}
            			}
            		}
HXLINE(  82)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,getExistingEntry,return )

void Watch_obj::addEntry(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_GC_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_86_addEntry)
HXLINE(  87)		 ::flixel::_hx_system::debug::watch::WatchEntry entry =  ::flixel::_hx_system::debug::watch::WatchEntry_obj::__alloc( HX_CTX ,displayName,data,this->removeEntry_dyn());
HXLINE(  88)		this->entries->push(entry);
HXLINE(  89)		this->entriesContainer->addChild(entry);
HXLINE(  90)		this->resetEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,addEntry,(void))

void Watch_obj::remove(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_94_remove)
HXLINE(  95)		 ::flixel::_hx_system::debug::watch::WatchEntry existing = this->getExistingEntry(displayName,data);
HXLINE(  96)		if (::hx::IsNotNull( existing )) {
HXLINE(  97)			this->removeEntry(existing);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,remove,(void))

void Watch_obj::removeEntry( ::flixel::_hx_system::debug::watch::WatchEntry entry){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_101_removeEntry)
HXLINE( 102)		{
HXLINE( 102)			::Array< ::Dynamic> array = this->entries;
HXDLIN( 102)			int index = array->indexOf(entry,null());
HXDLIN( 102)			if ((index != -1)) {
HXLINE( 102)				array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXDLIN( 102)				array->pop().StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
            			}
            		}
HXLINE( 103)		this->entriesContainer->removeChild(entry);
HXLINE( 104)		entry->destroy();
HXLINE( 105)		this->resetEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Watch_obj,removeEntry,(void))

void Watch_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_109_removeAll)
HXLINE( 110)		{
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			int _g1 = this->entries->length;
HXDLIN( 110)			while((_g < _g1)){
HXLINE( 110)				_g = (_g + 1);
HXDLIN( 110)				int i = (_g - 1);
HXLINE( 112)				 ::flixel::_hx_system::debug::watch::WatchEntry entry = this->entries->__get(i).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXLINE( 113)				this->entriesContainer->removeChild(entry);
HXLINE( 114)				entry->destroy();
            			}
            		}
HXLINE( 116)		this->entries->removeRange(0,this->entries->length);
HXLINE( 117)		this->resetEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

void Watch_obj::update(){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_122_update)
HXDLIN( 122)		int _g = 0;
HXDLIN( 122)		::Array< ::Dynamic> _g1 = this->entries;
HXDLIN( 122)		while((_g < _g1->length)){
HXDLIN( 122)			 ::flixel::_hx_system::debug::watch::WatchEntry entry = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXDLIN( 122)			_g = (_g + 1);
HXLINE( 123)			entry->updateValue();
            		}
            	}


void Watch_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_127_updateSize)
HXLINE( 128)		 ::openfl::geom::Point _hx_tmp = this->minSize;
HXDLIN( 128)		Float _hx_tmp1 = this->getMaxMinWidth();
HXDLIN( 128)		Float _hx_tmp2 = (_hx_tmp1 + this->entriesContainerOffset->x);
HXDLIN( 128)		Float _hx_tmp3 = this->entriesContainer->get_height();
HXDLIN( 128)		_hx_tmp->setTo(_hx_tmp2,(_hx_tmp3 + this->entriesContainerOffset->y));
HXLINE( 129)		this->super::updateSize();
HXLINE( 130)		this->resetEntries();
            	}


void Watch_obj::resetEntries(){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_135_resetEntries)
HXDLIN( 135)		int _g = 0;
HXDLIN( 135)		int _g1 = this->entries->length;
HXDLIN( 135)		while((_g < _g1)){
HXDLIN( 135)			_g = (_g + 1);
HXDLIN( 135)			int i = (_g - 1);
HXLINE( 137)			 ::flixel::_hx_system::debug::watch::WatchEntry entry = this->entries->__get(i).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXLINE( 138)			entry->set_y(( (Float)((i * 15)) ));
HXLINE( 139)			Float _hx_tmp = this->getMaxNameWidth();
HXDLIN( 139)			entry->updateSize(_hx_tmp,( (Float)(this->_width) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,resetEntries,(void))

Float Watch_obj::getMaxNameWidth(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		Float _hx_run( ::flixel::_hx_system::debug::watch::WatchEntry entry){
            			HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_145_getMaxNameWidth)
HXDLIN( 145)			return entry->getNameWidth();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_145_getMaxNameWidth)
HXDLIN( 145)		return this->getMax( ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,getMaxNameWidth,return )

Float Watch_obj::getMaxMinWidth(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		Float _hx_run( ::flixel::_hx_system::debug::watch::WatchEntry entry){
            			HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_150_getMaxMinWidth)
HXDLIN( 150)			return entry->getMinWidth();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_150_getMaxMinWidth)
HXDLIN( 150)		return this->getMax( ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,getMaxMinWidth,return )

Float Watch_obj::getMax( ::Dynamic getValue){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_154_getMax)
HXLINE( 155)		Float max = ((Float)0.0);
HXLINE( 156)		{
HXLINE( 156)			int _g = 0;
HXDLIN( 156)			::Array< ::Dynamic> _g1 = this->entries;
HXDLIN( 156)			while((_g < _g1->length)){
HXLINE( 156)				 ::flixel::_hx_system::debug::watch::WatchEntry entry = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::watch::WatchEntry >();
HXDLIN( 156)				_g = (_g + 1);
HXLINE( 158)				Float value = ( (Float)(getValue(entry)) );
HXLINE( 159)				if ((value > max)) {
HXLINE( 160)					max = value;
            				}
            			}
            		}
HXLINE( 162)		return max;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Watch_obj,getMax,return )

int Watch_obj::LINE_HEIGHT;


::hx::ObjectPtr< Watch_obj > Watch_obj::__new(::hx::Null< bool >  __o_closable) {
	::hx::ObjectPtr< Watch_obj > __this = new Watch_obj();
	__this->__construct(__o_closable);
	return __this;
}

::hx::ObjectPtr< Watch_obj > Watch_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_closable) {
	Watch_obj *__this = (Watch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Watch_obj), true, "flixel.system.debug.watch.Watch"));
	*(void **)__this = Watch_obj::_hx_vtable;
	__this->__construct(__o_closable);
	return __this;
}

Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(entriesContainer,"entriesContainer");
	HX_MARK_MEMBER_NAME(entriesContainerOffset,"entriesContainerOffset");
	HX_MARK_MEMBER_NAME(entries,"entries");
	 ::flixel::_hx_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entriesContainer,"entriesContainer");
	HX_VISIT_MEMBER_NAME(entriesContainerOffset,"entriesContainerOffset");
	HX_VISIT_MEMBER_NAME(entries,"entries");
	 ::flixel::_hx_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Watch_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMax") ) { return ::hx::Val( getMax_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { return ::hx::Val( entries ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEntry") ) { return ::hx::Val( addEntry_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return ::hx::Val( isInvalid_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeEntry") ) { return ::hx::Val( removeEntry_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetEntries") ) { return ::hx::Val( resetEntries_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMaxMinWidth") ) { return ::hx::Val( getMaxMinWidth_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMaxNameWidth") ) { return ::hx::Val( getMaxNameWidth_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"entriesContainer") ) { return ::hx::Val( entriesContainer ); }
		if (HX_FIELD_EQ(inName,"getExistingEntry") ) { return ::hx::Val( getExistingEntry_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entriesContainerOffset") ) { return ::hx::Val( entriesContainerOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Watch_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { entries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"entriesContainer") ) { entriesContainer=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entriesContainerOffset") ) { entriesContainerOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("entriesContainer",d1,fd,5e,72));
	outFields->push(HX_("entriesContainerOffset",44,bc,14,cb));
	outFields->push(HX_("entries",50,2d,5f,79));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Watch_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(Watch_obj,entriesContainer),HX_("entriesContainer",d1,fd,5e,72)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Watch_obj,entriesContainerOffset),HX_("entriesContainerOffset",44,bc,14,cb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Watch_obj,entries),HX_("entries",50,2d,5f,79)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Watch_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Watch_obj::LINE_HEIGHT,HX_("LINE_HEIGHT",12,8c,b0,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Watch_obj_sMemberFields[] = {
	HX_("entriesContainer",d1,fd,5e,72),
	HX_("entriesContainerOffset",44,bc,14,cb),
	HX_("entries",50,2d,5f,79),
	HX_("add",21,f2,49,00),
	HX_("isInvalid",2d,58,46,3f),
	HX_("getExistingEntry",71,e3,3e,19),
	HX_("addEntry",91,9e,e3,e9),
	HX_("remove",44,9c,88,04),
	HX_("removeEntry",8e,55,ba,6e),
	HX_("removeAll",3d,17,e5,ca),
	HX_("update",09,86,05,87),
	HX_("updateSize",6a,8b,08,05),
	HX_("resetEntries",41,73,3d,eb),
	HX_("getMaxNameWidth",2d,3a,85,7e),
	HX_("getMaxMinWidth",e2,80,fe,be),
	HX_("getMax",ae,43,22,a3),
	::String(null()) };

static void Watch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Watch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#endif

::hx::Class Watch_obj::__mClass;

static ::String Watch_obj_sStaticFields[] = {
	HX_("LINE_HEIGHT",12,8c,b0,ea),
	::String(null())
};

void Watch_obj::__register()
{
	Watch_obj _hx_dummy;
	Watch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.watch.Watch",48,af,96,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Watch_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Watch_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Watch_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Watch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Watch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Watch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Watch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Watch_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_18_boot)
HXDLIN(  18)		LINE_HEIGHT = 15;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
