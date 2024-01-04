#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_format_amf_Tools
#include <format/amf/Tools.h>
#endif
#ifndef INCLUDED_format_amf_Value
#include <format/amf/Value.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_2f75918d4b559c7e_33_encode,"format.amf.Tools","encode",0x283c4a34,"format.amf.Tools.encode","format/amf/Tools.hx",33,0x5e78b2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_2f75918d4b559c7e_67_number,"format.amf.Tools","number",0xcfd2dee7,"format.amf.Tools.number","format/amf/Tools.hx",67,0x5e78b2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_2f75918d4b559c7e_75_string,"format.amf.Tools","string",0x3f8880ef,"format.amf.Tools.string","format/amf/Tools.hx",75,0x5e78b2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_2f75918d4b559c7e_83_object,"format.amf.Tools","object",0x4397d6dd,"format.amf.Tools.object","format/amf/Tools.hx",83,0x5e78b2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_2f75918d4b559c7e_91_abool,"format.amf.Tools","abool",0xf9e45ead,"format.amf.Tools.abool","format/amf/Tools.hx",91,0x5e78b2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_2f75918d4b559c7e_99_array,"format.amf.Tools","array",0x047a033b,"format.amf.Tools.array","format/amf/Tools.hx",99,0x5e78b2b0)
namespace format{
namespace amf{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e85861c;
}

 ::format::amf::Value Tools_obj::encode( ::Dynamic o){
            	HX_GC_STACKFRAME(&_hx_pos_2f75918d4b559c7e_33_encode)
HXDLIN(  33)		 ::ValueType _g = ::Type_obj::_hx_typeof(o);
HXDLIN(  33)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  34)				return ::format::amf::Value_obj::ANull_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE(  35)				return ::format::amf::Value_obj::ANumber(o);
            			}
            			break;
            			case (int)2: {
HXLINE(  36)				return ::format::amf::Value_obj::ANumber(o);
            			}
            			break;
            			case (int)3: {
HXLINE(  37)				return ::format::amf::Value_obj::ABool(o);
            			}
            			break;
            			case (int)4: {
HXLINE(  39)				 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  40)				{
HXLINE(  40)					int _g = 0;
HXDLIN(  40)					::Array< ::String > _g1 = ::Reflect_obj::fields(o);
HXDLIN(  40)					while((_g < _g1->length)){
HXLINE(  40)						::String f = _g1->__get(_g);
HXDLIN(  40)						_g = (_g + 1);
HXLINE(  41)						h->set(f,::format::amf::Tools_obj::encode(::Reflect_obj::field(o,f)));
            					}
            				}
HXLINE(  42)				return ::format::amf::Value_obj::AObject(h,null());
            			}
            			break;
            			case (int)6: {
HXLINE(  43)				::hx::Class c = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE(  44)				::hx::Class _hx_switch_0 = c;
            				if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  54)					::cpp::VirtualArray o1 = ( (::cpp::VirtualArray)(o) );
HXLINE(  55)					::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE(  56)					{
HXLINE(  56)						int _g = 0;
HXDLIN(  56)						while((_g < o1->get_length())){
HXLINE(  56)							 ::Dynamic v = o1->__get(_g);
HXDLIN(  56)							_g = (_g + 1);
HXLINE(  57)							a->push(::format::amf::Tools_obj::encode(v));
            						}
            					}
HXLINE(  58)					return ::format::amf::Value_obj::AArray(a);
HXLINE(  53)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  46)					return ::format::amf::Value_obj::AString(o);
HXDLIN(  46)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::StringMap >()) ){
HXLINE(  48)					 ::haxe::ds::StringMap o1 = ( ( ::haxe::ds::StringMap)(o) );
HXLINE(  49)					 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  50)					{
HXLINE(  50)						 ::Dynamic f = o1->keys();
HXDLIN(  50)						while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  50)							::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  51)							h->set(f1,::format::amf::Tools_obj::encode(o1->get(f1)));
            						}
            					}
HXLINE(  52)					return ::format::amf::Value_obj::AObject(h,null());
HXLINE(  47)					goto _hx_goto_1;
            				}
            				/* default */{
HXLINE(  60)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Can't encode instance of ",25,18,82,b6) + ::Type_obj::getClassName(c))));
            				}
            				_hx_goto_1:;
            			}
            			break;
            			default:{
HXLINE(  63)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Can't encode ",87,74,15,3f) + ::Std_obj::string(o))));
            			}
            		}
HXLINE(  33)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,encode,return )

 ::Dynamic Tools_obj::number( ::format::amf::Value a){
            	HX_STACKFRAME(&_hx_pos_2f75918d4b559c7e_67_number)
HXLINE(  68)		if (::hx::IsNull( a )) {
HXLINE(  68)			return null();
            		}
HXLINE(  69)		if ((a->_hx_getIndex() == 0)) {
HXLINE(  70)			Float n = a->_hx_getFloat(0);
HXDLIN(  70)			return n;
            		}
            		else {
HXLINE(  71)			return null();
            		}
HXLINE(  69)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,number,return )

::String Tools_obj::string( ::format::amf::Value a){
            	HX_STACKFRAME(&_hx_pos_2f75918d4b559c7e_75_string)
HXLINE(  76)		if (::hx::IsNull( a )) {
HXLINE(  76)			return null();
            		}
HXLINE(  77)		if ((a->_hx_getIndex() == 2)) {
HXLINE(  78)			::String s = a->_hx_getString(0);
HXDLIN(  78)			return s;
            		}
            		else {
HXLINE(  79)			return null();
            		}
HXLINE(  77)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,string,return )

 ::haxe::ds::StringMap Tools_obj::object( ::format::amf::Value a){
            	HX_STACKFRAME(&_hx_pos_2f75918d4b559c7e_83_object)
HXLINE(  84)		if (::hx::IsNull( a )) {
HXLINE(  84)			return null();
            		}
HXLINE(  85)		if ((a->_hx_getIndex() == 3)) {
HXLINE(  86)			 ::Dynamic _g = a->_hx_getObject(1);
HXDLIN(  86)			 ::haxe::ds::StringMap o = a->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN(  86)			return o;
            		}
            		else {
HXLINE(  87)			return null();
            		}
HXLINE(  85)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,object,return )

 ::Dynamic Tools_obj::abool( ::format::amf::Value a){
            	HX_STACKFRAME(&_hx_pos_2f75918d4b559c7e_91_abool)
HXLINE(  92)		if (::hx::IsNull( a )) {
HXLINE(  92)			return null();
            		}
HXLINE(  93)		if ((a->_hx_getIndex() == 1)) {
HXLINE(  94)			bool b = a->_hx_getBool(0);
HXDLIN(  94)			return b;
            		}
            		else {
HXLINE(  95)			return null();
            		}
HXLINE(  93)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,abool,return )

::Array< ::Dynamic> Tools_obj::array( ::format::amf::Value a){
            	HX_STACKFRAME(&_hx_pos_2f75918d4b559c7e_99_array)
HXLINE( 100)		if (::hx::IsNull( a )) {
HXLINE( 100)			return null();
            		}
HXLINE( 101)		if ((a->_hx_getIndex() == 7)) {
HXLINE( 102)			::Array< ::Dynamic> a1 = a->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 102)			return a1;
            		}
            		else {
HXLINE( 103)			return null();
            		}
HXLINE( 101)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,array,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"abool") ) { outValue = abool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"number") ) { outValue = number_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"object") ) { outValue = object_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("encode",16,f2,e3,f9),
	HX_("number",c9,86,7a,a1),
	HX_("string",d1,28,30,11),
	HX_("object",bf,7e,3f,15),
	HX_("abool",0b,c9,f9,1a),
	HX_("array",99,6d,8f,25),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.amf.Tools",90,30,69,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace amf
