#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
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
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_amf3_Amf3Array
#include <format/amf3/Amf3Array.h>
#endif
#ifndef INCLUDED_format_amf3_Tools
#include <format/amf3/Tools.h>
#endif
#ifndef INCLUDED_format_amf3_Value
#include <format/amf3/Value.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_35_encode,"format.amf3.Tools","encode",0x3c31c5c7,"format.amf3.Tools.encode","format/amf3/Tools.hx",35,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_102_decode,"format.amf3.Tools","decode",0xa73b30df,"format.amf3.Tools.decode","format/amf3/Tools.hx",102,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_120_undefined,"format.amf3.Tools","undefined",0xf5e10f7f,"format.amf3.Tools.undefined","format/amf3/Tools.hx",120,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_124_anull,"format.amf3.Tools","anull",0xd64ed0d7,"format.amf3.Tools.anull","format/amf3/Tools.hx",124,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_127_bool,"format.amf3.Tools","bool",0x9b74599b,"format.amf3.Tools.bool","format/amf3/Tools.hx",127,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_135_int,"format.amf3.Tools","int",0x5c8e709e,"format.amf3.Tools.int","format/amf3/Tools.hx",135,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_143_number,"format.amf3.Tools","number",0xe3c85a7a,"format.amf3.Tools.number","format/amf3/Tools.hx",143,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_151_string,"format.amf3.Tools","string",0x537dfc82,"format.amf3.Tools.string","format/amf3/Tools.hx",151,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_159_date,"format.amf3.Tools","date",0x9cbc2b9f,"format.amf3.Tools.date","format/amf3/Tools.hx",159,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_167_array,"format.amf3.Tools","array",0xd8f15b08,"format.amf3.Tools.array","format/amf3/Tools.hx",167,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_182_vector,"format.amf3.Tools","vector",0xd9ab8474,"format.amf3.Tools.vector","format/amf3/Tools.hx",182,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_194_object,"format.amf3.Tools","object",0x578d5270,"format.amf3.Tools.object","format/amf3/Tools.hx",194,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_206_xml,"format.amf3.Tools","xml",0x5c99d186,"format.amf3.Tools.xml","format/amf3/Tools.hx",206,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_214_bytes,"format.amf3.Tools","bytes",0x70f9f5da,"format.amf3.Tools.bytes","format/amf3/Tools.hx",214,0x1fcafea1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ff96da69ea928b6_222_map,"format.amf3.Tools","map",0x5c916e4b,"format.amf3.Tools.map","format/amf3/Tools.hx",222,0x1fcafea1)
namespace format{
namespace amf3{

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
	return inClassId==(int)0x00000001 || inClassId==(int)0x5642dc4b;
}

 ::format::amf3::Value Tools_obj::encode( ::Dynamic o){
            	HX_GC_STACKFRAME(&_hx_pos_3ff96da69ea928b6_35_encode)
HXDLIN(  35)		 ::ValueType _g = ::Type_obj::_hx_typeof(o);
HXDLIN(  35)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  36)				return ::format::amf3::Value_obj::ANull_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE(  38)				return ::format::amf3::Value_obj::AInt(o);
            			}
            			break;
            			case (int)2: {
HXLINE(  39)				return ::format::amf3::Value_obj::ANumber(o);
            			}
            			break;
            			case (int)3: {
HXLINE(  37)				return ::format::amf3::Value_obj::ABool(o);
            			}
            			break;
            			case (int)4: {
HXLINE(  41)				 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  42)				{
HXLINE(  42)					int _g = 0;
HXDLIN(  42)					::Array< ::String > _g1 = ::Reflect_obj::fields(o);
HXDLIN(  42)					while((_g < _g1->length)){
HXLINE(  42)						::String f = _g1->__get(_g);
HXDLIN(  42)						_g = (_g + 1);
HXLINE(  43)						h->set(f,::format::amf3::Tools_obj::encode(::Reflect_obj::field(o,f)));
            					}
            				}
HXLINE(  45)				return ::format::amf3::Value_obj::AObject(h,null(),null());
            			}
            			break;
            			case (int)6: {
HXLINE(  46)				::hx::Class c = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE(  47)				::hx::Class _hx_switch_0 = c;
            				if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  59)					::cpp::VirtualArray o1 = ( (::cpp::VirtualArray)(o) );
HXLINE(  60)					::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE(  61)					{
HXLINE(  61)						int _g = 0;
HXDLIN(  61)						while((_g < o1->get_length())){
HXLINE(  61)							 ::Dynamic v = o1->__get(_g);
HXDLIN(  61)							_g = (_g + 1);
HXLINE(  62)							a->push(::format::amf3::Tools_obj::encode(v));
            						}
            					}
HXLINE(  63)					return ::format::amf3::Value_obj::AArray(a,null());
HXLINE(  58)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::Date >()) ){
HXLINE(  85)					return ::format::amf3::Value_obj::ADate(o);
HXDLIN(  85)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  49)					return ::format::amf3::Value_obj::AString(o);
HXDLIN(  49)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::Xml >()) ){
HXLINE(  51)					return ::format::amf3::Value_obj::AXml(o);
HXDLIN(  51)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::format::amf3::Amf3Array >()) ){
HXLINE(  65)					 ::format::amf3::Amf3Array o1 = ( ( ::format::amf3::Amf3Array)(o) );
HXLINE(  66)					::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE(  67)					 ::haxe::ds::StringMap m =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  68)					{
HXLINE(  68)						int _g = 0;
HXDLIN(  68)						::cpp::VirtualArray _g1 = o1->a;
HXDLIN(  68)						while((_g < _g1->get_length())){
HXLINE(  68)							 ::Dynamic v = _g1->__get(_g);
HXDLIN(  68)							_g = (_g + 1);
HXLINE(  69)							a->push(::format::amf3::Tools_obj::encode(v));
            						}
            					}
HXLINE(  70)					{
HXLINE(  70)						 ::Dynamic k = o1->extra->iterator();
HXDLIN(  70)						while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  70)							::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  71)							{
HXLINE(  71)								 ::format::amf3::Value v = ::format::amf3::Tools_obj::encode(o1->extra->get(k1));
HXDLIN(  71)								m->set(k1,v);
            							}
            						}
            					}
HXLINE(  72)					return ::format::amf3::Value_obj::AArray(a,m);
HXLINE(  64)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::IntMap >()) ||  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::ObjectMap >()) ||  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::StringMap >()) ){
HXLINE(  53)					 ::haxe::ds::StringMap o1 = ( ( ::haxe::ds::StringMap)(o) );
HXLINE(  54)					 ::haxe::ds::EnumValueMap h =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE(  55)					{
HXLINE(  55)						 ::Dynamic f = o1->keys();
HXDLIN(  55)						while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  55)							::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  56)							{
HXLINE(  56)								 ::format::amf3::Value key = ::format::amf3::Tools_obj::encode(f1);
HXDLIN(  56)								h->set(key,::format::amf3::Tools_obj::encode(o1->get(f1)));
            							}
            						}
            					}
HXLINE(  57)					return ::format::amf3::Value_obj::AMap(h);
HXLINE(  52)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::haxe::io::Bytes >()) ){
HXLINE(  83)					return ::format::amf3::Value_obj::ABytes(o);
HXDLIN(  83)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE(  87)					 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  88)					int i = 0;
HXLINE(  89)					::hx::Class _class = ::Type_obj::getClass(o);
HXLINE(  90)					{
HXLINE(  90)						int _g = 0;
HXDLIN(  90)						::Array< ::String > _g1 = ::Type_obj::getInstanceFields(_class);
HXDLIN(  90)						while((_g < _g1->length)){
HXLINE(  90)							::String f = _g1->__get(_g);
HXDLIN(  90)							_g = (_g + 1);
HXLINE(  91)							h->set(f,::format::amf3::Tools_obj::encode(::Reflect_obj::getProperty(o,f)));
HXLINE(  92)							i = (i + 1);
            						}
            					}
HXLINE(  94)					return ::format::amf3::Value_obj::AObject(h,i,::Type_obj::getClassName(_class));
            				}
            				_hx_goto_2:;
            			}
            			break;
            			default:{
HXLINE(  97)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Can't encode ",87,74,15,3f) + ::Std_obj::string(o))));
            			}
            		}
HXLINE(  35)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,encode,return )

 ::Dynamic Tools_obj::decode( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_102_decode)
HXDLIN( 102)		switch((int)(a->_hx_getIndex())){
            			case (int)0: {
HXLINE( 103)				return ::format::amf3::Tools_obj::undefined(a);
            			}
            			break;
            			case (int)1: {
HXLINE( 104)				return ::format::amf3::Tools_obj::anull(a);
            			}
            			break;
            			case (int)2: {
HXLINE( 105)				bool _g = a->_hx_getBool(0);
HXDLIN( 105)				return ::format::amf3::Tools_obj::_hx_bool(a);
            			}
            			break;
            			case (int)3: {
HXLINE( 106)				int _g = a->_hx_getInt(0);
HXDLIN( 106)				return ::format::amf3::Tools_obj::_hx_int(a);
            			}
            			break;
            			case (int)4: {
HXLINE( 107)				Float _g = a->_hx_getFloat(0);
HXDLIN( 107)				return ::format::amf3::Tools_obj::number(a);
            			}
            			break;
            			case (int)5: {
HXLINE( 108)				::String _g = a->_hx_getString(0);
HXDLIN( 108)				return ::format::amf3::Tools_obj::string(a);
            			}
            			break;
            			case (int)6: {
HXLINE( 109)				 ::Date _g = a->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 109)				return ::format::amf3::Tools_obj::date(a);
            			}
            			break;
            			case (int)7: {
HXLINE( 112)				 ::haxe::ds::StringMap _g = a->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 112)				 ::Dynamic _g1 = a->_hx_getObject(1);
HXDLIN( 112)				::String _g2 = a->_hx_getString(2);
HXDLIN( 112)				return ::format::amf3::Tools_obj::object(a);
            			}
            			break;
            			case (int)8: {
HXLINE( 110)				::Array< ::Dynamic> _g = a->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 110)				 ::haxe::ds::StringMap _g1 = a->_hx_getObject(1).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 110)				return ::format::amf3::Tools_obj::array(a);
            			}
            			break;
            			case (int)9: {
HXLINE( 111)				::Array< ::Dynamic> _g = a->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 111)				::String _g1 = a->_hx_getString(1);
HXDLIN( 111)				return ::format::amf3::Tools_obj::vector(a);
            			}
            			break;
            			case (int)10: {
HXLINE( 113)				 ::Xml _g = a->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 113)				return ::format::amf3::Tools_obj::xml(a);
            			}
            			break;
            			case (int)11: {
HXLINE( 114)				 ::haxe::io::Bytes _g = a->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN( 114)				return ::format::amf3::Tools_obj::bytes(a);
            			}
            			break;
            			case (int)12: {
HXLINE( 115)				 ::haxe::ds::EnumValueMap _g = a->_hx_getObject(0).StaticCast<  ::haxe::ds::EnumValueMap >();
HXDLIN( 115)				return ::format::amf3::Tools_obj::map(a);
            			}
            			break;
            		}
HXLINE( 102)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,decode,return )

 ::Dynamic Tools_obj::undefined( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_120_undefined)
HXDLIN( 120)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,undefined,return )

 ::Dynamic Tools_obj::anull( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_124_anull)
HXDLIN( 124)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,anull,return )

 ::Dynamic Tools_obj::_hx_bool( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_127_bool)
HXLINE( 128)		if (::hx::IsNull( a )) {
HXLINE( 128)			return null();
            		}
HXLINE( 129)		if ((a->_hx_getIndex() == 2)) {
HXLINE( 130)			bool b = a->_hx_getBool(0);
HXDLIN( 130)			return b;
            		}
            		else {
HXLINE( 131)			return null();
            		}
HXLINE( 129)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,_hx_bool,return )

 ::Dynamic Tools_obj::_hx_int( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_135_int)
HXLINE( 136)		if (::hx::IsNull( a )) {
HXLINE( 136)			return null();
            		}
HXLINE( 137)		if ((a->_hx_getIndex() == 3)) {
HXLINE( 138)			int n = a->_hx_getInt(0);
HXDLIN( 138)			return n;
            		}
            		else {
HXLINE( 139)			return null();
            		}
HXLINE( 137)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,_hx_int,return )

 ::Dynamic Tools_obj::number( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_143_number)
HXLINE( 144)		if (::hx::IsNull( a )) {
HXLINE( 144)			return null();
            		}
HXLINE( 145)		if ((a->_hx_getIndex() == 4)) {
HXLINE( 146)			Float n = a->_hx_getFloat(0);
HXDLIN( 146)			return n;
            		}
            		else {
HXLINE( 147)			return null();
            		}
HXLINE( 145)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,number,return )

::String Tools_obj::string( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_151_string)
HXLINE( 152)		if (::hx::IsNull( a )) {
HXLINE( 152)			return null();
            		}
HXLINE( 153)		if ((a->_hx_getIndex() == 5)) {
HXLINE( 154)			::String s = a->_hx_getString(0);
HXDLIN( 154)			return s;
            		}
            		else {
HXLINE( 155)			return null();
            		}
HXLINE( 153)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,string,return )

 ::Date Tools_obj::date( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_159_date)
HXLINE( 160)		if (::hx::IsNull( a )) {
HXLINE( 160)			return null();
            		}
HXLINE( 161)		if ((a->_hx_getIndex() == 6)) {
HXLINE( 162)			 ::Date d = a->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 162)			return d;
            		}
            		else {
HXLINE( 163)			return null();
            		}
HXLINE( 161)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,date,return )

 ::format::amf3::Amf3Array Tools_obj::array( ::format::amf3::Value a){
            	HX_GC_STACKFRAME(&_hx_pos_3ff96da69ea928b6_167_array)
HXLINE( 168)		if (::hx::IsNull( a )) {
HXLINE( 168)			return null();
            		}
HXLINE( 169)		if ((a->_hx_getIndex() == 8)) {
HXLINE( 170)			::Array< ::Dynamic> a1 = a->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 170)			 ::haxe::ds::StringMap m = a->_hx_getObject(1).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 171)			::cpp::VirtualArray b = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 172)			{
HXLINE( 172)				int _g = 0;
HXDLIN( 172)				while((_g < a1->length)){
HXLINE( 172)					 ::format::amf3::Value f = a1->__get(_g).StaticCast<  ::format::amf3::Value >();
HXDLIN( 172)					_g = (_g + 1);
HXLINE( 173)					b->push(::format::amf3::Tools_obj::decode(f));
            				}
            			}
HXLINE( 174)			 ::haxe::ds::StringMap c =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 175)			{
HXLINE( 175)				 ::Dynamic mk = m->keys();
HXDLIN( 175)				while(( (bool)(mk->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 175)					::String mk1 = ( (::String)(mk->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 176)					{
HXLINE( 176)						 ::Dynamic v = ::format::amf3::Tools_obj::decode(m->get(mk1));
HXDLIN( 176)						c->set(mk1,v);
            					}
            				}
            			}
HXLINE( 177)			return  ::format::amf3::Amf3Array_obj::__alloc( HX_CTX ,b,c);
            		}
            		else {
HXLINE( 178)			return null();
            		}
HXLINE( 169)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,array,return )

::cpp::VirtualArray Tools_obj::vector( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_182_vector)
HXLINE( 183)		if (::hx::IsNull( a )) {
HXLINE( 183)			return null();
            		}
HXLINE( 184)		if ((a->_hx_getIndex() == 9)) {
HXLINE( 185)			::String _g = a->_hx_getString(1);
HXDLIN( 185)			::Array< ::Dynamic> a1 = a->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 186)			::cpp::VirtualArray this1 = ::cpp::VirtualArray_obj::__new(a1->length);
HXDLIN( 186)			::cpp::VirtualArray v = this1;
HXLINE( 187)			{
HXLINE( 187)				int _g1 = 0;
HXDLIN( 187)				int _g2 = a1->length;
HXDLIN( 187)				while((_g1 < _g2)){
HXLINE( 187)					_g1 = (_g1 + 1);
HXDLIN( 187)					int i = (_g1 - 1);
HXLINE( 188)					{
HXLINE( 188)						 ::Dynamic val = ::format::amf3::Tools_obj::decode(_hx_array_unsafe_get(a1,i));
HXDLIN( 188)						v->__unsafe_set(i,val);
            					}
            				}
            			}
HXLINE( 189)			return v;
            		}
            		else {
HXLINE( 190)			return null();
            		}
HXLINE( 184)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,vector,return )

 ::haxe::ds::StringMap Tools_obj::object( ::format::amf3::Value a){
            	HX_GC_STACKFRAME(&_hx_pos_3ff96da69ea928b6_194_object)
HXLINE( 195)		if (::hx::IsNull( a )) {
HXLINE( 195)			return null();
            		}
HXLINE( 196)		if ((a->_hx_getIndex() == 7)) {
HXLINE( 197)			 ::Dynamic _g = a->_hx_getObject(1);
HXDLIN( 197)			::String _g1 = a->_hx_getString(2);
HXDLIN( 197)			 ::haxe::ds::StringMap o = a->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 198)			 ::haxe::ds::StringMap m =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 199)			{
HXLINE( 199)				 ::Dynamic f = o->keys();
HXDLIN( 199)				while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 199)					::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 200)					m->set(f1,::format::amf3::Tools_obj::decode(o->get(f1)));
            				}
            			}
HXLINE( 201)			return m;
            		}
            		else {
HXLINE( 202)			return null();
            		}
HXLINE( 196)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,object,return )

 ::Xml Tools_obj::xml( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_206_xml)
HXLINE( 207)		if (::hx::IsNull( a )) {
HXLINE( 207)			return null();
            		}
HXLINE( 208)		if ((a->_hx_getIndex() == 10)) {
HXLINE( 209)			 ::Xml x = a->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 209)			return x;
            		}
            		else {
HXLINE( 210)			return null();
            		}
HXLINE( 208)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,xml,return )

 ::haxe::io::Bytes Tools_obj::bytes( ::format::amf3::Value a){
            	HX_STACKFRAME(&_hx_pos_3ff96da69ea928b6_214_bytes)
HXLINE( 215)		if (::hx::IsNull( a )) {
HXLINE( 215)			return null();
            		}
HXLINE( 216)		if ((a->_hx_getIndex() == 11)) {
HXLINE( 217)			 ::haxe::io::Bytes b = a->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN( 217)			return b;
            		}
            		else {
HXLINE( 218)			return null();
            		}
HXLINE( 216)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,bytes,return )

 ::haxe::ds::EnumValueMap Tools_obj::map( ::format::amf3::Value a){
            	HX_GC_STACKFRAME(&_hx_pos_3ff96da69ea928b6_222_map)
HXLINE( 223)		if (::hx::IsNull( a )) {
HXLINE( 223)			return null();
            		}
HXLINE( 224)		if ((a->_hx_getIndex() == 12)) {
HXLINE( 225)			 ::haxe::ds::EnumValueMap m = a->_hx_getObject(0).StaticCast<  ::haxe::ds::EnumValueMap >();
HXLINE( 226)			 ::haxe::ds::EnumValueMap p =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 227)			{
HXLINE( 227)				 ::Dynamic f = m->keys();
HXDLIN( 227)				while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 227)					 ::format::amf3::Value f1 = f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 228)					{
HXLINE( 228)						 ::format::amf3::Value key = ::format::amf3::Tools_obj::decode(f1);
HXDLIN( 228)						p->set(key,::format::amf3::Tools_obj::decode(m->get(f1).StaticCast<  ::format::amf3::Value >()));
            					}
            				}
            			}
HXLINE( 229)			return p;
            		}
            		else {
HXLINE( 230)			return null();
            		}
HXLINE( 224)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,map,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _hx_bool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"date") ) { outValue = date_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"anull") ) { outValue = anull_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bytes") ) { outValue = bytes_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"number") ) { outValue = number_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"vector") ) { outValue = vector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"object") ) { outValue = object_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"undefined") ) { outValue = undefined_dyn(); return true; }
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
	HX_("decode",2e,5d,ed,64),
	HX_("undefined",90,3e,0a,9d),
	HX_("anull",68,e3,ec,22),
	HX_("bool",2a,84,1b,41),
	HX_("int",ef,0c,50,00),
	HX_("number",c9,86,7a,a1),
	HX_("string",d1,28,30,11),
	HX_("date",2e,56,63,42),
	HX_("array",99,6d,8f,25),
	HX_("vector",c3,b0,5d,97),
	HX_("object",bf,7e,3f,15),
	HX_("xml",d7,6d,5b,00),
	HX_("bytes",6b,08,98,bd),
	HX_("map",9c,0a,53,00),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.amf3.Tools",9d,80,2d,f3);
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
} // end namespace amf3
