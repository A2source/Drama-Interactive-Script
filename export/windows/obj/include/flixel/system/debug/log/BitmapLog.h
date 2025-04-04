#ifndef INCLUDED_flixel_system_debug_log_BitmapLog
#define INCLUDED_flixel_system_debug_log_BitmapLog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,log,BitmapLog)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace log{


class HXCPP_CLASS_ATTRIBUTES BitmapLog_obj : public  ::flixel::_hx_system::debug::Window_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::Window_obj super;
		typedef BitmapLog_obj OBJ_;
		BitmapLog_obj();

	public:
		enum { _hx_ClassId = 0x2f4a4e2d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.log.BitmapLog")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.log.BitmapLog"); }
		static ::hx::ObjectPtr< BitmapLog_obj > __new();
		static ::hx::ObjectPtr< BitmapLog_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapLog_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapLog",b5,3b,ae,68); }

		Float zoom;
		 ::openfl::display::Bitmap _canvasBitmap;
		::Array< ::Dynamic> _entries;
		int _curIndex;
		 ::flixel::math::FlxBasePoint _point;
		 ::flixel::math::FlxBasePoint _lastMousePos;
		 ::flixel::math::FlxBasePoint _curMouseOffset;
		 ::openfl::geom::Matrix _matrix;
		 ::flixel::_hx_system::ui::FlxSystemButton _buttonLeft;
		 ::flixel::_hx_system::ui::FlxSystemButton _buttonText;
		 ::flixel::_hx_system::ui::FlxSystemButton _buttonRight;
		 ::openfl::text::TextField _counterText;
		 ::openfl::text::TextField _dimensionsText;
		 ::openfl::display::Sprite _ui;
		bool _middleMouseDown;
		 ::openfl::display::Bitmap _footer;
		 ::openfl::text::TextField _footerText;
		void createHeaderUI();
		::Dynamic createHeaderUI_dyn();

		void createFooterUI();
		::Dynamic createFooterUI_dyn();

		void destroy();

		void update();

		void updateSize();

		void resize(Float Width,Float Height);

		void resizeTexts();
		::Dynamic resizeTexts_dyn();

		void next();
		::Dynamic next_dyn();

		void previous();
		::Dynamic previous_dyn();

		void resetSettings();
		::Dynamic resetSettings_dyn();

		bool add( ::openfl::display::BitmapData bmp,::String name);
		::Dynamic add_dyn();

		void clearAt(::hx::Null< int >  Index);
		::Dynamic clearAt_dyn();

		void clear();
		::Dynamic clear_dyn();

		bool refreshCanvas( ::Dynamic Index);
		::Dynamic refreshCanvas_dyn();

		void refreshTexts();
		::Dynamic refreshTexts_dyn();

		void drawBoundingBox( ::openfl::display::BitmapData bitmap);
		::Dynamic drawBoundingBox_dyn();

		void onMouseWheel( ::openfl::events::MouseEvent e);
		::Dynamic onMouseWheel_dyn();

		void onMiddleDown( ::openfl::events::MouseEvent e);
		::Dynamic onMiddleDown_dyn();

		void onMiddleUp( ::openfl::events::MouseEvent e);
		::Dynamic onMiddleUp_dyn();

		Float set_zoom(Float Value);
		::Dynamic set_zoom_dyn();

		 ::openfl::display::BitmapData get__canvas();
		::Dynamic get__canvas_dyn();

		 ::Dynamic get__curEntry();
		::Dynamic get__curEntry_dyn();

		 ::openfl::display::BitmapData get__curBitmap();
		::Dynamic get__curBitmap_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log

#endif /* INCLUDED_flixel_system_debug_log_BitmapLog */ 
