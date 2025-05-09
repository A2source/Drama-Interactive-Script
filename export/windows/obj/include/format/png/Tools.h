#ifndef INCLUDED_format_png_Tools
#define INCLUDED_format_png_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,png,Tools)
HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace png{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x18125ce9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.png.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.png.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "format.png.Tools"));
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

		static  ::Dynamic getHeader( ::haxe::ds::List d);
		static ::Dynamic getHeader_dyn();

		static  ::haxe::io::Bytes getPalette( ::haxe::ds::List d);
		static ::Dynamic getPalette_dyn();

		static int filter( ::haxe::io::Bytes data,int x,int y,int stride,int prev,int p,::hx::Null< int >  numChannels);
		static ::Dynamic filter_dyn();

		static void reverseBytes( ::haxe::io::Bytes b);
		static ::Dynamic reverseBytes_dyn();

		static  ::haxe::io::Bytes extractGrey( ::haxe::ds::List d);
		static ::Dynamic extractGrey_dyn();

		static  ::haxe::io::Bytes extract32( ::haxe::ds::List d, ::haxe::io::Bytes bytes, ::Dynamic flipY);
		static ::Dynamic extract32_dyn();

		static  ::haxe::io::Bytes extract( ::haxe::ds::List d, ::haxe::io::Bytes output,::hx::Null< bool >  expandAlpha);
		static ::Dynamic extract_dyn();

		static  ::haxe::ds::List buildGrey(int width,int height, ::haxe::io::Bytes data, ::Dynamic level);
		static ::Dynamic buildGrey_dyn();

		static  ::haxe::ds::List buildIndexed(int width,int height, ::haxe::io::Bytes data, ::haxe::io::Bytes palette, ::Dynamic level);
		static ::Dynamic buildIndexed_dyn();

		static  ::haxe::ds::List buildRGB(int width,int height, ::haxe::io::Bytes data, ::Dynamic level);
		static ::Dynamic buildRGB_dyn();

		static  ::haxe::ds::List build32ARGB(int width,int height, ::haxe::io::Bytes data, ::Dynamic level);
		static ::Dynamic build32ARGB_dyn();

		static  ::haxe::ds::List build32BGRA(int width,int height, ::haxe::io::Bytes data, ::Dynamic level);
		static ::Dynamic build32BGRA_dyn();

};

} // end namespace format
} // end namespace png

#endif /* INCLUDED_format_png_Tools */ 
