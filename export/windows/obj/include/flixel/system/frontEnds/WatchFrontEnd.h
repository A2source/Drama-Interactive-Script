#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#define INCLUDED_flixel_system_frontEnds_WatchFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,WatchFrontEnd)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES WatchFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WatchFrontEnd_obj OBJ_;
		WatchFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x40eb558f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.frontEnds.WatchFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.frontEnds.WatchFrontEnd"); }
		static ::hx::ObjectPtr< WatchFrontEnd_obj > __new();
		static ::hx::ObjectPtr< WatchFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WatchFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WatchFrontEnd",01,3c,87,3e); }

		void add( ::Dynamic object,::String field,::String displayName);
		::Dynamic add_dyn();

		void remove( ::Dynamic object,::String field);
		::Dynamic remove_dyn();

		void addQuick(::String displayName, ::Dynamic value);
		::Dynamic addQuick_dyn();

		void removeQuick(::String displayName);
		::Dynamic removeQuick_dyn();

		void addExpression(::String expression,::String displayName);
		::Dynamic addExpression_dyn();

		void removeExpression(::String displayName);
		::Dynamic removeExpression_dyn();

		void addFunction(::String displayName, ::Dynamic func);
		::Dynamic addFunction_dyn();

		void removeFunction(::String displayName);
		::Dynamic removeFunction_dyn();

		void addMouse();
		::Dynamic addMouse_dyn();

		void removeMouse();
		::Dynamic removeMouse_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_WatchFrontEnd */ 
