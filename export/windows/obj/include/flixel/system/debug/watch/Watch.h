#ifndef INCLUDED_flixel_system_debug_watch_Watch
#define INCLUDED_flixel_system_debug_watch_Watch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,Watch)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,WatchEntry)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,WatchEntryData)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES Watch_obj : public  ::flixel::_hx_system::debug::Window_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::Window_obj super;
		typedef Watch_obj OBJ_;
		Watch_obj();

	public:
		enum { _hx_ClassId = 0x5ad89704 };

		void __construct(::hx::Null< bool >  __o_closable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.Watch")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.watch.Watch"); }
		static ::hx::ObjectPtr< Watch_obj > __new(::hx::Null< bool >  __o_closable);
		static ::hx::ObjectPtr< Watch_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_closable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Watch_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Watch",2f,86,52,58); }

		static void __boot();
		static int LINE_HEIGHT;
		 ::openfl::display::Sprite entriesContainer;
		 ::flixel::math::FlxBasePoint entriesContainerOffset;
		::Array< ::Dynamic> entries;
		void add(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data);
		::Dynamic add_dyn();

		bool isInvalid(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data);
		::Dynamic isInvalid_dyn();

		 ::flixel::_hx_system::debug::watch::WatchEntry getExistingEntry(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data);
		::Dynamic getExistingEntry_dyn();

		void addEntry(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data);
		::Dynamic addEntry_dyn();

		void remove(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data);
		::Dynamic remove_dyn();

		void removeEntry( ::flixel::_hx_system::debug::watch::WatchEntry entry);
		::Dynamic removeEntry_dyn();

		void removeAll();
		::Dynamic removeAll_dyn();

		void update();

		void updateSize();

		void resetEntries();
		::Dynamic resetEntries_dyn();

		Float getMaxNameWidth();
		::Dynamic getMaxNameWidth_dyn();

		Float getMaxMinWidth();
		::Dynamic getMaxMinWidth_dyn();

		Float getMax( ::Dynamic getValue);
		::Dynamic getMax_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_Watch */ 
