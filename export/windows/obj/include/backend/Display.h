#ifndef INCLUDED_backend_Display
#define INCLUDED_backend_Display

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,Display)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES Display_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Display_obj OBJ_;
		Display_obj();

	public:
		enum { _hx_ClassId = 0x7fd22d4a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.Display")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.Display"); }

		inline static ::hx::ObjectPtr< Display_obj > __new() {
			::hx::ObjectPtr< Display_obj > __this = new Display_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Display_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Display_obj *__this = (Display_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Display_obj), false, "backend.Display"));
			*(void **)__this = Display_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Display_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Display",22,52,9b,88); }

		static  ::openfl::text::TextFormat textFormat(int col);
		static ::Dynamic textFormat_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_Display */ 
