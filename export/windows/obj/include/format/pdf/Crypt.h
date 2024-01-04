#ifndef INCLUDED_format_pdf_Crypt
#define INCLUDED_format_pdf_Crypt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,pdf,Crypt)
HX_DECLARE_CLASS2(format,pdf,Data)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace pdf{


class HXCPP_CLASS_ATTRIBUTES Crypt_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Crypt_obj OBJ_;
		Crypt_obj();

	public:
		enum { _hx_ClassId = 0x40993c77 };

		void __construct(::String pass);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.pdf.Crypt")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.pdf.Crypt"); }
		static ::hx::ObjectPtr< Crypt_obj > __new(::String pass);
		static ::hx::ObjectPtr< Crypt_obj > __alloc(::hx::Ctx *_hx_ctx,::String pass);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Crypt_obj();

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
		::String __ToString() const { return HX_("Crypt",4e,63,8f,df); }

		static void __boot();
		static  ::haxe::io::Bytes PAD_BYTES;
		static  ::haxe::io::Bytes initPadBytes();
		static ::Dynamic initPadBytes_dyn();

		int version;
		int revision;
		 ::haxe::io::Bytes fileKey;
		::String userPassword;
		::Array< ::Dynamic> decrypt(::Array< ::Dynamic> data);
		::Dynamic decrypt_dyn();

		 ::format::pdf::Data decryptObject( ::haxe::io::Bytes key, ::format::pdf::Data o);
		::Dynamic decryptObject_dyn();

		::String decryptString(::String s, ::haxe::io::Bytes k);
		::Dynamic decryptString_dyn();

		 ::haxe::io::Bytes decryptBytes( ::haxe::io::Bytes b, ::haxe::io::Bytes k);
		::Dynamic decryptBytes_dyn();

		 ::haxe::io::Bytes buildFileKey( ::format::pdf::Data fileId, ::haxe::ds::StringMap h);
		::Dynamic buildFileKey_dyn();

		 ::haxe::io::Bytes buildObjectKey(int id,int rev);
		::Dynamic buildObjectKey_dyn();

};

} // end namespace format
} // end namespace pdf

#endif /* INCLUDED_format_pdf_Crypt */ 
