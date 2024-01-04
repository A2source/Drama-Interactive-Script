#ifndef INCLUDED_states_ScriptState
#define INCLUDED_states_ScriptState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_states_BaseState
#include <states/BaseState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(objects,Ribbon)
HX_DECLARE_CLASS1(objects,Script)
HX_DECLARE_CLASS1(objects,Tab)
HX_DECLARE_CLASS1(states,BaseState)
HX_DECLARE_CLASS1(states,ScriptState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES ScriptState_obj : public  ::states::BaseState_obj
{
	public:
		typedef  ::states::BaseState_obj super;
		typedef ScriptState_obj OBJ_;
		ScriptState_obj();

	public:
		enum { _hx_ClassId = 0x103b37e4 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.ScriptState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.ScriptState"); }
		static ::hx::ObjectPtr< ScriptState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< ScriptState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScriptState_obj();

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
		::String __ToString() const { return HX_("ScriptState",e6,67,1d,34); }

		static void __boot();
		static ::String scriptName;
		static  ::states::ScriptState instance;
		 ::objects::Script script;
		Float scrollSpeed;
		 ::flixel::util::FlxTimer scrollTimer;
		 ::objects::Ribbon ribbon;
		::Array< ::Dynamic> ribbonHoverTimers;
		::String state;
		::String assetToAdd;
		 ::Dynamic curAddingAsset;
		 ::flixel::util::FlxTimer placeTimer;
		 ::objects::Tab optionsTab;
		 ::objects::Tab assetsTab;
		 ::objects::Tab scriptTab;
		 ::flixel::math::FlxBasePoint savedMousePos;
		void create();

		void update(Float dt);

		void updateAddingLabel(Float dt);
		::Dynamic updateAddingLabel_dyn();

		void updateReading(Float dt);
		::Dynamic updateReading_dyn();

		void showRibbon();
		::Dynamic showRibbon_dyn();

		void hideRibbon();
		::Dynamic hideRibbon_dyn();

		void setDebugData();
		::Dynamic setDebugData_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_ScriptState */ 
