#ifndef INCLUDED_format_pdf_Reader
#define INCLUDED_format_pdf_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,pdf,Data)
HX_DECLARE_CLASS2(format,pdf,Reader)
HX_DECLARE_CLASS3(format,pdf,_Reader,Break)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace format{
namespace pdf{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x0a2536fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.pdf.Reader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.pdf.Reader"); }
		static ::hx::ObjectPtr< Reader_obj > __new();
		static ::hx::ObjectPtr< Reader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Reader",63,19,26,31); }

		 ::Dynamic _hx_char;
		::Array< ::Dynamic> objects;
		void readEOL( ::haxe::io::Input i);
		::Dynamic readEOL_dyn();

		 ::Dynamic invalidChar(int c);
		::Dynamic invalidChar_dyn();

		 ::Dynamic invalidBreak( ::format::pdf::_Reader::Break e);
		::Dynamic invalidBreak_dyn();

		 ::format::pdf::Data readObjectEof( ::haxe::io::Input i);
		::Dynamic readObjectEof_dyn();

		 ::format::pdf::Data readObject( ::haxe::io::Input i);
		::Dynamic readObject_dyn();

		 ::format::pdf::Data readDictionnary( ::haxe::io::Input i);
		::Dynamic readDictionnary_dyn();

		 ::format::pdf::Data readIndirect( ::haxe::io::Input i);
		::Dynamic readIndirect_dyn();

		 ::format::pdf::Data readStream( ::haxe::io::Input i);
		::Dynamic readStream_dyn();

		 ::format::pdf::Data readXRefTable( ::haxe::io::Input i);
		::Dynamic readXRefTable_dyn();

		::Array< ::Dynamic> read( ::haxe::io::Input i);
		::Dynamic read_dyn();

};

} // end namespace format
} // end namespace pdf

#endif /* INCLUDED_format_pdf_Reader */ 
