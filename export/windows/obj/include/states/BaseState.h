#ifndef INCLUDED_states_BaseState
#define INCLUDED_states_BaseState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,BaseState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES BaseState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef BaseState_obj OBJ_;
		BaseState_obj();

	public:
		enum { _hx_ClassId = 0x15cc349e };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.BaseState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.BaseState"); }
		static ::hx::ObjectPtr< BaseState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< BaseState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseState",20,00,c3,35); }

		virtual void create();

		virtual void update(Float dt);

};

} // end namespace states

#endif /* INCLUDED_states_BaseState */ 
