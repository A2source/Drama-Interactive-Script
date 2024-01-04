#ifndef INCLUDED_format_amf3_Reader
#define INCLUDED_format_amf3_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,amf3,Reader)
HX_DECLARE_CLASS2(format,amf3,Value)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace format{
namespace amf3{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x0344c96b };

		void __construct( ::haxe::io::Input i);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.amf3.Reader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.amf3.Reader"); }
		static ::hx::ObjectPtr< Reader_obj > __new( ::haxe::io::Input i);
		static ::hx::ObjectPtr< Reader_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i);
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

		::Array< ::Dynamic> complexObjectsTable;
		::Array< ::Dynamic> objectTraitsTable;
		::Array< ::Dynamic> stringTable;
		 ::haxe::io::Input i;
		 ::format::amf3::Value readObject();
		::Dynamic readObject_dyn();

		 ::format::amf3::Value readMap();
		::Dynamic readMap_dyn();

		 ::format::amf3::Value readArray();
		::Dynamic readArray_dyn();

		 ::format::amf3::Value readIntVector();
		::Dynamic readIntVector_dyn();

		 ::format::amf3::Value readDoubleVector();
		::Dynamic readDoubleVector_dyn();

		 ::format::amf3::Value readObjectVector();
		::Dynamic readObjectVector_dyn();

		 ::format::amf3::Value readBytes();
		::Dynamic readBytes_dyn();

		int readInt(::hx::Null< bool >  signExtend,::hx::Null< int >  preShift);
		::Dynamic readInt_dyn();

		 ::format::amf3::Value readString();
		::Dynamic readString_dyn();

		 ::format::amf3::Value readStringNoHeader(int len);
		::Dynamic readStringNoHeader_dyn();

		 ::format::amf3::Value readDate();
		::Dynamic readDate_dyn();

		 ::format::amf3::Value readXml();
		::Dynamic readXml_dyn();

		 ::format::amf3::Value readWithCode(int id);
		::Dynamic readWithCode_dyn();

		 ::format::amf3::Value read();
		::Dynamic read_dyn();

};

} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_format_amf3_Reader */ 
