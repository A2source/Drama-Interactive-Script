#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_pdf_Data
#include <format/pdf/Data.h>
#endif
#ifndef INCLUDED_format_pdf_Extract
#include <format/pdf/Extract.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_aba2af8f35bfe40d_32_expect,"format.pdf.Extract","expect",0xd8f93159,"format.pdf.Extract.expect","format/pdf/Extract.hx",32,0xff95e992)
HX_LOCAL_STACK_FRAME(_hx_pos_aba2af8f35bfe40d_35_int,"format.pdf.Extract","int",0x9aa7996f,"format.pdf.Extract.int","format/pdf/Extract.hx",35,0xff95e992)
HX_LOCAL_STACK_FRAME(_hx_pos_aba2af8f35bfe40d_47_string,"format.pdf.Extract","string",0x25b36c51,"format.pdf.Extract.string","format/pdf/Extract.hx",47,0xff95e992)
HX_LOCAL_STACK_FRAME(_hx_pos_aba2af8f35bfe40d_55_bool,"format.pdf.Extract","bool",0xb35ee7aa,"format.pdf.Extract.bool","format/pdf/Extract.hx",55,0xff95e992)
namespace format{
namespace pdf{

void Extract_obj::__construct() { }

Dynamic Extract_obj::__CreateEmpty() { return new Extract_obj; }

void *Extract_obj::_hx_vtable = 0;

Dynamic Extract_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Extract_obj > _hx_result = new Extract_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Extract_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c76a726;
}

 ::Dynamic Extract_obj::expect(::String kind, ::format::pdf::Data o){
            	HX_STACKFRAME(&_hx_pos_aba2af8f35bfe40d_32_expect)
HXDLIN(  32)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((kind + HX_(" expected but ",47,70,d9,7a)) + ::Std_obj::string(o)) + HX_(" found",22,8e,02,d0))));
HXDLIN(  32)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Extract_obj,expect,return )

int Extract_obj::_hx_int( ::format::pdf::Data o){
            	HX_STACKFRAME(&_hx_pos_aba2af8f35bfe40d_35_int)
HXLINE(  36)		if (::hx::IsNull( o )) {
HXLINE(  36)			::format::pdf::Extract_obj::expect(HX_("int",ef,0c,50,00),o);
            		}
HXLINE(  37)		if ((o->_hx_getIndex() == 2)) {
HXLINE(  38)			Float n = o->_hx_getFloat(0);
HXLINE(  39)			int i = ::Std_obj::_hx_int(n);
HXLINE(  40)			if ((i != n)) {
HXLINE(  40)				::format::pdf::Extract_obj::expect(HX_("int",ef,0c,50,00),o);
            			}
HXLINE(  41)			return i;
            		}
            		else {
HXLINE(  43)			return ( (int)(::format::pdf::Extract_obj::expect(HX_("int",ef,0c,50,00),o)) );
            		}
HXLINE(  37)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Extract_obj,_hx_int,return )

::String Extract_obj::string( ::format::pdf::Data o){
            	HX_STACKFRAME(&_hx_pos_aba2af8f35bfe40d_47_string)
HXLINE(  48)		if (::hx::IsNull( o )) {
HXLINE(  48)			::format::pdf::Extract_obj::expect(HX_("string",d1,28,30,11),o);
            		}
HXLINE(  49)		switch((int)(o->_hx_getIndex())){
            			case (int)3: {
HXLINE(  50)				::String s = o->_hx_getString(0);
HXDLIN(  50)				return s;
            			}
            			break;
            			case (int)4: {
HXLINE(  50)				::String s = o->_hx_getString(0);
HXDLIN(  50)				return s;
            			}
            			break;
            			default:{
HXLINE(  51)				return ( (::String)(::format::pdf::Extract_obj::expect(HX_("string",d1,28,30,11),o)) );
            			}
            		}
HXLINE(  49)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Extract_obj,string,return )

 ::Dynamic Extract_obj::_hx_bool( ::format::pdf::Data o, ::Dynamic def){
            	HX_STACKFRAME(&_hx_pos_aba2af8f35bfe40d_55_bool)
HXLINE(  56)		if (::hx::IsNull( o )) {
HXLINE(  57)			if (::hx::IsNull( def )) {
HXLINE(  57)				::format::pdf::Extract_obj::expect(HX_("bool",2a,84,1b,41),o);
            			}
HXLINE(  58)			return def;
            		}
HXLINE(  60)		if ((o->_hx_getIndex() == 1)) {
HXLINE(  61)			bool b = o->_hx_getBool(0);
HXDLIN(  61)			return b;
            		}
            		else {
HXLINE(  62)			return ::format::pdf::Extract_obj::expect(HX_("bool",2a,84,1b,41),o);
            		}
HXLINE(  60)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Extract_obj,_hx_bool,return )


Extract_obj::Extract_obj()
{
}

bool Extract_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _hx_bool_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"expect") ) { outValue = expect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Extract_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Extract_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Extract_obj::__mClass;

static ::String Extract_obj_sStaticFields[] = {
	HX_("expect",d9,ed,75,c4),
	HX_("int",ef,0c,50,00),
	HX_("string",d1,28,30,11),
	HX_("bool",2a,84,1b,41),
	::String(null())
};

void Extract_obj::__register()
{
	Extract_obj _hx_dummy;
	Extract_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.pdf.Extract",ee,ac,4b,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Extract_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Extract_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Extract_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Extract_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Extract_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace pdf
