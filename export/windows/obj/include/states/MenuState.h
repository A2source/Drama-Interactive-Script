#ifndef INCLUDED_states_MenuState
#define INCLUDED_states_MenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_states_BaseState
#include <states/BaseState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxButtonPlus)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,FileReference)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS1(states,BaseState)
HX_DECLARE_CLASS1(states,MenuState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES MenuState_obj : public  ::states::BaseState_obj
{
	public:
		typedef  ::states::BaseState_obj super;
		typedef MenuState_obj OBJ_;
		MenuState_obj();

	public:
		enum { _hx_ClassId = 0x7fce9990 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.MenuState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.MenuState"); }
		static ::hx::ObjectPtr< MenuState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< MenuState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuState_obj();

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
		::String __ToString() const { return HX_("MenuState",d2,bf,b6,c0); }

		static  ::openfl::net::FileReference pdf;
		static void onSelectPDF( ::openfl::events::Event e);
		static ::Dynamic onSelectPDF_dyn();

		static void onClosePDF( ::openfl::events::Event e);
		static ::Dynamic onClosePDF_dyn();

		static void onErrorPDF( ::openfl::events::IOErrorEvent e);
		static ::Dynamic onErrorPDF_dyn();

		 ::openfl::text::TextField scriptInput;
		 ::flixel::addons::ui::FlxButtonPlus loadButton;
		 ::flixel::addons::ui::FlxButtonPlus openButton;
		void create();

		void update(Float dt);

};

} // end namespace states

#endif /* INCLUDED_states_MenuState */ 
