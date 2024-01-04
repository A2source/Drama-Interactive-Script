#ifndef INCLUDED_format_amf_Tools
#define INCLUDED_format_amf_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,amf,Tools)
HX_DECLARE_CLASS2(format,amf,Value)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace format{
namespace amf{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x2e85861c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.amf.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.amf.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "format.amf.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static  ::format::amf::Value encode( ::Dynamic o);
		static ::Dynamic encode_dyn();

		static  ::Dynamic number( ::format::amf::Value a);
		static ::Dynamic number_dyn();

		static ::String string( ::format::amf::Value a);
		static ::Dynamic string_dyn();

		static  ::haxe::ds::StringMap object( ::format::amf::Value a);
		static ::Dynamic object_dyn();

		static  ::Dynamic abool( ::format::amf::Value a);
		static ::Dynamic abool_dyn();

		static ::Array< ::Dynamic> array( ::format::amf::Value a);
		static ::Dynamic array_dyn();

};

} // end namespace format
} // end namespace amf

#endif /* INCLUDED_format_amf_Tools */ 
