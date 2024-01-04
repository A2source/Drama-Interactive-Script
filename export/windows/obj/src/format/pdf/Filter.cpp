#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_pdf_Data
#include <format/pdf/Data.h>
#endif
#ifndef INCLUDED_format_pdf_Filter
#include <format/pdf/Filter.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21cb2775f6646ad6_32_new,"format.pdf.Filter","new",0xe5d44f1d,"format.pdf.Filter.new","format/pdf/Filter.hx",32,0x04928e31)
HX_LOCAL_STACK_FRAME(_hx_pos_21cb2775f6646ad6_35_unfilter,"format.pdf.Filter","unfilter",0x3ae642f4,"format.pdf.Filter.unfilter","format/pdf/Filter.hx",35,0x04928e31)
HX_LOCAL_STACK_FRAME(_hx_pos_21cb2775f6646ad6_43_unfilterObject,"format.pdf.Filter","unfilterObject",0xe04ce4d3,"format.pdf.Filter.unfilterObject","format/pdf/Filter.hx",43,0x04928e31)
HX_LOCAL_STACK_FRAME(_hx_pos_21cb2775f6646ad6_72_runFilter,"format.pdf.Filter","runFilter",0xf4dd2fe0,"format.pdf.Filter.runFilter","format/pdf/Filter.hx",72,0x04928e31)
namespace format{
namespace pdf{

void Filter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_21cb2775f6646ad6_32_new)
            	}

Dynamic Filter_obj::__CreateEmpty() { return new Filter_obj; }

void *Filter_obj::_hx_vtable = 0;

Dynamic Filter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Filter_obj > _hx_result = new Filter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Filter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x415dbe8f;
}

::Array< ::Dynamic> Filter_obj::unfilter(::Array< ::Dynamic> data){
            	HX_STACKFRAME(&_hx_pos_21cb2775f6646ad6_35_unfilter)
HXLINE(  36)		::Array< ::Dynamic> d = ::Array_obj< ::Dynamic>::__new();
HXLINE(  37)		{
HXLINE(  37)			int _g = 0;
HXDLIN(  37)			while((_g < data->length)){
HXLINE(  37)				 ::format::pdf::Data o = data->__get(_g).StaticCast<  ::format::pdf::Data >();
HXDLIN(  37)				_g = (_g + 1);
HXLINE(  38)				d->push(this->unfilterObject(o));
            			}
            		}
HXLINE(  39)		return d;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,unfilter,return )

 ::format::pdf::Data Filter_obj::unfilterObject( ::format::pdf::Data o){
            	HX_GC_STACKFRAME(&_hx_pos_21cb2775f6646ad6_43_unfilterObject)
HXDLIN(  43)		switch((int)(o->_hx_getIndex())){
            			case (int)0: {
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)1: {
HXLINE(  44)				bool _g = o->_hx_getBool(0);
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)2: {
HXLINE(  44)				Float _g = o->_hx_getFloat(0);
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)3: {
HXLINE(  44)				::String _g = o->_hx_getString(0);
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)4: {
HXLINE(  44)				::String _g = o->_hx_getString(0);
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)5: {
HXLINE(  44)				::String _g = o->_hx_getString(0);
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)6: {
HXLINE(  46)				::Array< ::Dynamic> a = o->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  47)				::Array< ::Dynamic> a2 = ::Array_obj< ::Dynamic>::__new();
HXLINE(  48)				{
HXLINE(  48)					int _g = 0;
HXDLIN(  48)					while((_g < a->length)){
HXLINE(  48)						 ::format::pdf::Data o = a->__get(_g).StaticCast<  ::format::pdf::Data >();
HXDLIN(  48)						_g = (_g + 1);
HXLINE(  49)						a2->push(this->unfilterObject(o));
            					}
            				}
HXLINE(  50)				return ::format::pdf::Data_obj::DArray(a2);
            			}
            			break;
            			case (int)7: {
HXLINE(  51)				 ::haxe::ds::StringMap h = o->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXLINE(  52)				 ::haxe::ds::StringMap h2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  53)				{
HXLINE(  53)					 ::Dynamic k = h->keys();
HXDLIN(  53)					while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  53)						::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  54)						h2->set(k1,this->unfilterObject(h->get(k1)));
            					}
            				}
HXLINE(  55)				return ::format::pdf::Data_obj::DDict(h2);
            			}
            			break;
            			case (int)8: {
HXLINE(  56)				int id = o->_hx_getInt(0);
HXDLIN(  56)				int rev = o->_hx_getInt(1);
HXDLIN(  56)				 ::format::pdf::Data v = o->_hx_getObject(2).StaticCast<  ::format::pdf::Data >();
HXLINE(  57)				return ::format::pdf::Data_obj::DIndirect(id,rev,this->unfilterObject(v));
            			}
            			break;
            			case (int)9: {
HXLINE(  60)				 ::haxe::io::Bytes b = o->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN(  60)				 ::haxe::ds::StringMap props = o->_hx_getObject(1).StaticCast<  ::haxe::ds::StringMap >();
HXLINE(  61)				 ::format::pdf::Data filter = props->get(HX_("Filter",d8,93,c9,b9));
HXLINE(  62)				if (::hx::IsNull( filter )) {
HXLINE(  63)					return o;
            				}
HXLINE(  64)				 ::haxe::ds::StringMap nprops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  65)				{
HXLINE(  65)					 ::Dynamic k = props->keys();
HXDLIN(  65)					while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  65)						::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  66)						nprops->set(k1,props->get(k1));
            					}
            				}
HXLINE(  67)				b = this->runFilter(b,filter,nprops);
HXLINE(  68)				return ::format::pdf::Data_obj::DStream(b,nprops);
            			}
            			break;
            			case (int)10: {
HXLINE(  44)				int _g = o->_hx_getInt(0);
HXDLIN(  44)				int _g1 = o->_hx_getInt(1);
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)11: {
HXLINE(  44)				::Array< ::Dynamic> _g = o->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)12: {
HXLINE(  58)				 ::format::pdf::Data o1 = o->_hx_getObject(0).StaticCast<  ::format::pdf::Data >();
HXLINE(  59)				return ::format::pdf::Data_obj::DTrailer(this->unfilterObject(o1));
            			}
            			break;
            			case (int)13: {
HXLINE(  44)				int _g = o->_hx_getInt(0);
HXLINE(  45)				return o;
            			}
            			break;
            			case (int)14: {
HXLINE(  44)				::String _g = o->_hx_getString(0);
HXLINE(  45)				return o;
            			}
            			break;
            		}
HXLINE(  43)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,unfilterObject,return )

 ::haxe::io::Bytes Filter_obj::runFilter( ::haxe::io::Bytes b, ::format::pdf::Data filter, ::haxe::ds::StringMap props){
            	HX_STACKFRAME(&_hx_pos_21cb2775f6646ad6_72_runFilter)
HXLINE(  73)		switch((int)(filter->_hx_getIndex())){
            			case (int)5: {
HXLINE(  77)				::String n = filter->_hx_getString(0);
HXLINE(  78)				if ((n == HX_("FlateDecode",ba,10,0a,36))) {
HXLINE(  79)					props->remove(HX_("Filter",d8,93,c9,b9));
HXLINE(  84)					return ::haxe::zip::Uncompress_obj::run(b,null());
            				}
            			}
            			break;
            			case (int)6: {
HXLINE(  74)				::Array< ::Dynamic> a = filter->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  75)				{
HXLINE(  75)					int _g = 0;
HXDLIN(  75)					while((_g < a->length)){
HXLINE(  75)						 ::format::pdf::Data o = a->__get(_g).StaticCast<  ::format::pdf::Data >();
HXDLIN(  75)						_g = (_g + 1);
HXLINE(  76)						b = this->runFilter(b,o,props);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE(  91)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + ::Std_obj::string(filter))));
            			}
            		}
HXLINE(  93)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Filter_obj,runFilter,return )


::hx::ObjectPtr< Filter_obj > Filter_obj::__new() {
	::hx::ObjectPtr< Filter_obj > __this = new Filter_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Filter_obj > Filter_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Filter_obj *__this = (Filter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Filter_obj), false, "format.pdf.Filter"));
	*(void **)__this = Filter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Filter_obj::Filter_obj()
{
}

::hx::Val Filter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"unfilter") ) { return ::hx::Val( unfilter_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"runFilter") ) { return ::hx::Val( runFilter_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unfilterObject") ) { return ::hx::Val( unfilterObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Filter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Filter_obj_sStaticStorageInfo = 0;
#endif

static ::String Filter_obj_sMemberFields[] = {
	HX_("unfilter",d1,4e,7c,87),
	HX_("unfilterObject",70,b4,84,13),
	HX_("runFilter",63,85,91,ab),
	::String(null()) };

::hx::Class Filter_obj::__mClass;

void Filter_obj::__register()
{
	Filter_obj _hx_dummy;
	Filter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.pdf.Filter",ab,7c,25,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Filter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Filter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Filter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Filter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace pdf
