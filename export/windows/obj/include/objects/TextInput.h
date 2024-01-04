#ifndef INCLUDED_objects_TextInput
#define INCLUDED_objects_TextInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(objects,TextInput)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES TextInput_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextInput_obj OBJ_;
		TextInput_obj();

	public:
		enum { _hx_ClassId = 0x43f9f60d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="objects.TextInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"objects.TextInput"); }

		inline static ::hx::ObjectPtr< TextInput_obj > __new() {
			::hx::ObjectPtr< TextInput_obj > __this = new TextInput_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextInput_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextInput_obj *__this = (TextInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextInput_obj), false, "objects.TextInput"));
			*(void **)__this = TextInput_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextInput_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextInput",fd,33,de,f8); }

		static  ::openfl::text::TextField createTextField(::hx::Null< int >  x,::hx::Null< int >  y,::String defaultString,::hx::Null< int >  width,::hx::Null< int >  height,::hx::Null< int >  textCol);
		static ::Dynamic createTextField_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_TextInput */ 
