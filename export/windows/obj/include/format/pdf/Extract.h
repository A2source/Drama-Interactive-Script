#ifndef INCLUDED_format_pdf_Extract
#define INCLUDED_format_pdf_Extract

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,pdf,Data)
HX_DECLARE_CLASS2(format,pdf,Extract)

namespace format{
namespace pdf{


class HXCPP_CLASS_ATTRIBUTES Extract_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Extract_obj OBJ_;
		Extract_obj();

	public:
		enum { _hx_ClassId = 0x4c76a726 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.pdf.Extract")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.pdf.Extract"); }

		inline static ::hx::ObjectPtr< Extract_obj > __new() {
			::hx::ObjectPtr< Extract_obj > __this = new Extract_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Extract_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Extract_obj *__this = (Extract_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Extract_obj), false, "format.pdf.Extract"));
			*(void **)__this = Extract_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Extract_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Extract",21,dd,3b,46); }

		static  ::Dynamic expect(::String kind, ::format::pdf::Data o);
		static ::Dynamic expect_dyn();

		static int _hx_int( ::format::pdf::Data o);
		static ::Dynamic _hx_int_dyn();

		static ::String string( ::format::pdf::Data o);
		static ::Dynamic string_dyn();

		static  ::Dynamic _hx_bool( ::format::pdf::Data o, ::Dynamic def);
		static ::Dynamic _hx_bool_dyn();

};

} // end namespace format
} // end namespace pdf

#endif /* INCLUDED_format_pdf_Extract */ 
