#ifndef INCLUDED_format_tools_MD5
#define INCLUDED_format_tools_MD5

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tools,MD5)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES MD5_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MD5_obj OBJ_;
		MD5_obj();

	public:
		enum { _hx_ClassId = 0x51a4ba42 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.tools.MD5")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.tools.MD5"); }
		static ::hx::ObjectPtr< MD5_obj > __new();
		static ::hx::ObjectPtr< MD5_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MD5_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MD5",fe,a8,3a,00); }

		static void __boot();
		static  ::haxe::io::Bytes make( ::haxe::io::Bytes s);
		static ::Dynamic make_dyn();

		static  ::format::tools::MD5 inst;
		int bitOR(int a,int b);
		::Dynamic bitOR_dyn();

		int bitXOR(int a,int b);
		::Dynamic bitXOR_dyn();

		int bitAND(int a,int b);
		::Dynamic bitAND_dyn();

		int addme(int x,int y);
		::Dynamic addme_dyn();

		::Array< int > str2blks( ::haxe::io::Bytes b);
		::Dynamic str2blks_dyn();

		int rol(int num,int cnt);
		::Dynamic rol_dyn();

		int cmn(int q,int a,int b,int x,int s,int t);
		::Dynamic cmn_dyn();

		int ff(int a,int b,int c,int d,int x,int s,int t);
		::Dynamic ff_dyn();

		int gg(int a,int b,int c,int d,int x,int s,int t);
		::Dynamic gg_dyn();

		int hh(int a,int b,int c,int d,int x,int s,int t);
		::Dynamic hh_dyn();

		int ii(int a,int b,int c,int d,int x,int s,int t);
		::Dynamic ii_dyn();

		 ::haxe::io::Bytes encode( ::haxe::io::Bytes b);
		::Dynamic encode_dyn();

};

} // end namespace format
} // end namespace tools

#endif /* INCLUDED_format_tools_MD5 */ 
