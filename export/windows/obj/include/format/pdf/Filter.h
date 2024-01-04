#ifndef INCLUDED_format_pdf_Filter
#define INCLUDED_format_pdf_Filter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,pdf,Data)
HX_DECLARE_CLASS2(format,pdf,Filter)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace pdf{


class HXCPP_CLASS_ATTRIBUTES Filter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Filter_obj OBJ_;
		Filter_obj();

	public:
		enum { _hx_ClassId = 0x415dbe8f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.pdf.Filter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.pdf.Filter"); }
		static ::hx::ObjectPtr< Filter_obj > __new();
		static ::hx::ObjectPtr< Filter_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Filter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Filter",d8,93,c9,b9); }

		::Array< ::Dynamic> unfilter(::Array< ::Dynamic> data);
		::Dynamic unfilter_dyn();

		 ::format::pdf::Data unfilterObject( ::format::pdf::Data o);
		::Dynamic unfilterObject_dyn();

		 ::haxe::io::Bytes runFilter( ::haxe::io::Bytes b, ::format::pdf::Data filter, ::haxe::ds::StringMap props);
		::Dynamic runFilter_dyn();

};

} // end namespace format
} // end namespace pdf

#endif /* INCLUDED_format_pdf_Filter */ 
