#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_amf3_Value
#include <format/amf3/Value.h>
#endif
#ifndef INCLUDED_format_amf3_Writer
#include <format/amf3/Writer.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc579393d02852f6_34_new,"format.amf3.Writer","new",0xb6858763,"format.amf3.Writer.new","format/amf3/Writer.hx",34,0x2cc3cd0d)
HX_LOCAL_STACK_FRAME(_hx_pos_cc579393d02852f6_40_writeInt,"format.amf3.Writer","writeInt",0xde396b6d,"format.amf3.Writer.writeInt","format/amf3/Writer.hx",40,0x2cc3cd0d)
HX_LOCAL_STACK_FRAME(_hx_pos_cc579393d02852f6_50_writeUInt,"format.amf3.Writer","writeUInt",0x9bd70b3c,"format.amf3.Writer.writeUInt","format/amf3/Writer.hx",50,0x2cc3cd0d)
HX_LOCAL_STACK_FRAME(_hx_pos_cc579393d02852f6_79_writeString,"format.amf3.Writer","writeString",0x803e6d13,"format.amf3.Writer.writeString","format/amf3/Writer.hx",79,0x2cc3cd0d)
HX_LOCAL_STACK_FRAME(_hx_pos_cc579393d02852f6_115_writeObject,"format.amf3.Writer","writeObject",0x844dc301,"format.amf3.Writer.writeObject","format/amf3/Writer.hx",115,0x2cc3cd0d)
HX_LOCAL_STACK_FRAME(_hx_pos_cc579393d02852f6_137_write,"format.amf3.Writer","write",0xbfa92aa2,"format.amf3.Writer.write","format/amf3/Writer.hx",137,0x2cc3cd0d)
namespace format{
namespace amf3{

void Writer_obj::__construct( ::haxe::io::Output o){
            	HX_STACKFRAME(&_hx_pos_cc579393d02852f6_34_new)
HXLINE(  35)		this->o = o;
HXLINE(  36)		o->set_bigEndian(true);
            	}

Dynamic Writer_obj::__CreateEmpty() { return new Writer_obj; }

void *Writer_obj::_hx_vtable = 0;

Dynamic Writer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Writer_obj > _hx_result = new Writer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Writer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d927683;
}

void Writer_obj::writeInt(int i){
            	HX_STACKFRAME(&_hx_pos_cc579393d02852f6_40_writeInt)
HXDLIN(  40)		bool _hx_tmp;
HXDLIN(  40)		if ((i <= 268435455)) {
HXDLIN(  40)			_hx_tmp = (i < -268435456);
            		}
            		else {
HXDLIN(  40)			_hx_tmp = true;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			this->o->writeByte(5);
HXLINE(  42)			this->o->writeDouble(( (Float)(i) ));
            		}
            		else {
HXLINE(  45)			this->o->writeByte(4);
HXLINE(  46)			this->writeUInt(i,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeInt,(void))

void Writer_obj::writeUInt(int u,::hx::Null< bool >  __o_shiftLeft){
            		bool shiftLeft = __o_shiftLeft.Default(false);
            	HX_STACKFRAME(&_hx_pos_cc579393d02852f6_50_writeUInt)
HXLINE(  51)		if (shiftLeft) {
HXLINE(  51)			u = ((u << 1) | 1);
            		}
HXLINE(  52)		if (((::hx::UShr(u,31) & 1) == 1)) {
HXLINE(  52)			u = (u & 536870911);
            		}
HXLINE(  53)		int bits = 22;
HXDLIN(  53)		bool started = false;
HXLINE(  54)		int chunk = ::hx::UShr(u,(bits - 1));
HXLINE(  55)		bool aNeg = (chunk < 0);
HXDLIN(  55)		bool bNeg = (0 < 0);
HXDLIN(  55)		bool _hx_tmp;
HXDLIN(  55)		if ((aNeg != bNeg)) {
HXLINE(  55)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE(  55)			_hx_tmp = (chunk > 0);
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  56)			chunk = ::hx::UShr(chunk,1);
HXLINE(  57)			this->o->writeByte((chunk | 128));
HXLINE(  58)			u = (u - (chunk << bits));
HXLINE(  59)			bits = (bits + 1);
HXLINE(  60)			started = true;
            		}
HXLINE(  62)		bits = (bits - 8);
HXLINE(  63)		chunk = ::hx::UShr(u,bits);
HXLINE(  64)		bool _hx_tmp1;
HXDLIN(  64)		if (!(started)) {
HXLINE(  64)			bool aNeg = (chunk < 0);
HXDLIN(  64)			bool bNeg = (0 < 0);
HXDLIN(  64)			if ((aNeg != bNeg)) {
HXLINE(  64)				_hx_tmp1 = aNeg;
            			}
            			else {
HXLINE(  64)				_hx_tmp1 = (chunk > 0);
            			}
            		}
            		else {
HXLINE(  64)			_hx_tmp1 = true;
            		}
HXDLIN(  64)		if (_hx_tmp1) {
HXLINE(  65)			this->o->writeByte((chunk | 128));
HXLINE(  66)			u = (u - (chunk << bits));
HXLINE(  67)			started = true;
            		}
HXLINE(  69)		bits = (bits - 7);
HXLINE(  70)		chunk = ::hx::UShr(u,bits);
HXLINE(  71)		bool _hx_tmp2;
HXDLIN(  71)		if (!(started)) {
HXLINE(  71)			bool aNeg = (chunk < 0);
HXDLIN(  71)			bool bNeg = (0 < 0);
HXDLIN(  71)			if ((aNeg != bNeg)) {
HXLINE(  71)				_hx_tmp2 = aNeg;
            			}
            			else {
HXLINE(  71)				_hx_tmp2 = (chunk > 0);
            			}
            		}
            		else {
HXLINE(  71)			_hx_tmp2 = true;
            		}
HXDLIN(  71)		if (_hx_tmp2) {
HXLINE(  72)			this->o->writeByte((chunk | 128));
HXLINE(  73)			u = (u - (chunk << bits));
HXLINE(  74)			started = true;
            		}
HXLINE(  76)		this->o->writeByte(u);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeUInt,(void))

void Writer_obj::writeString(::String s){
            	HX_STACKFRAME(&_hx_pos_cc579393d02852f6_79_writeString)
HXLINE(  81)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s,::haxe::io::Encoding_obj::UTF8_dyn());
HXLINE(  82)		this->writeUInt(bytes->length,true);
HXLINE(  83)		this->o->writeBytes(bytes,0,bytes->length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeString,(void))

void Writer_obj::writeObject( ::haxe::ds::StringMap h, ::Dynamic size){
            	HX_STACKFRAME(&_hx_pos_cc579393d02852f6_115_writeObject)
HXLINE( 116)		if (::hx::IsNull( size )) {
HXLINE( 116)			this->o->writeByte(11);
            		}
            		else {
HXLINE( 117)			this->writeUInt(((( (int)(size) ) << 4) | 3),null());
            		}
HXLINE( 118)		this->o->writeByte(1);
HXLINE( 119)		if (::hx::IsNull( size )) {
HXLINE( 120)			{
HXLINE( 120)				 ::Dynamic f = h->keys();
HXDLIN( 120)				while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 120)					::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 121)					this->writeString(f1);
HXLINE( 122)					this->write(h->get(f1));
            				}
            			}
HXLINE( 124)			this->o->writeByte(1);
            		}
            		else {
HXLINE( 127)			::Array< ::String > k = ::Array_obj< ::String >::__new();
HXLINE( 128)			{
HXLINE( 128)				 ::Dynamic f = h->keys();
HXDLIN( 128)				while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 128)					::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 129)					k->push(f1);
HXLINE( 130)					this->writeString(f1);
            				}
            			}
HXLINE( 132)			{
HXLINE( 132)				int _g = 0;
HXDLIN( 132)				int _g1 = k->length;
HXDLIN( 132)				while((_g < _g1)){
HXLINE( 132)					_g = (_g + 1);
HXDLIN( 132)					int i = (_g - 1);
HXLINE( 133)					this->write(h->get(k->__get(i)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeObject,(void))

void Writer_obj::write( ::format::amf3::Value v){
            	HX_STACKFRAME(&_hx_pos_cc579393d02852f6_137_write)
HXLINE( 138)		 ::haxe::io::Output o = this->o;
HXLINE( 139)		switch((int)(v->_hx_getIndex())){
            			case (int)0: {
HXLINE( 141)				o->writeByte(0);
            			}
            			break;
            			case (int)1: {
HXLINE( 143)				o->writeByte(1);
            			}
            			break;
            			case (int)2: {
HXLINE( 144)				bool b = v->_hx_getBool(0);
HXLINE( 145)				int _hx_tmp;
HXDLIN( 145)				if (b) {
HXLINE( 145)					_hx_tmp = 3;
            				}
            				else {
HXLINE( 145)					_hx_tmp = 2;
            				}
HXDLIN( 145)				o->writeByte(_hx_tmp);
            			}
            			break;
            			case (int)3: {
HXLINE( 146)				int i = v->_hx_getInt(0);
HXLINE( 147)				this->writeInt(i);
            			}
            			break;
            			case (int)4: {
HXLINE( 148)				Float n = v->_hx_getFloat(0);
HXDLIN( 148)				{
HXLINE( 149)					o->writeByte(5);
HXLINE( 150)					o->writeDouble(n);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 151)				::String s = v->_hx_getString(0);
HXDLIN( 151)				{
HXLINE( 152)					o->writeByte(6);
HXLINE( 153)					this->writeString(s);
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 154)				 ::Date d = v->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 154)				{
HXLINE( 155)					o->writeByte(8);
HXLINE( 156)					o->writeByte(1);
HXLINE( 157)					o->writeDouble(d->getTime());
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 173)				::String _g = v->_hx_getString(2);
HXDLIN( 173)				{
HXLINE( 173)					 ::haxe::ds::StringMap h = v->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 173)					 ::Dynamic n = v->_hx_getObject(1);
HXDLIN( 173)					{
HXLINE( 174)						o->writeByte(10);
HXLINE( 175)						this->writeObject(h,n);
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 158)				::Array< ::Dynamic> a = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 158)				 ::haxe::ds::StringMap extra = v->_hx_getObject(1).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 158)				{
HXLINE( 159)					o->writeByte(9);
HXLINE( 160)					this->writeUInt(a->length,true);
HXLINE( 161)					if (::hx::IsNotNull( extra )) {
HXLINE( 163)						 ::Dynamic mk = extra->keys();
HXDLIN( 163)						while(( (bool)(mk->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 163)							::String mk1 = ( (::String)(mk->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 165)							o->writeString(mk1,null());
HXLINE( 166)							this->write(extra->get(mk1));
            						}
            					}
HXLINE( 169)					o->writeByte(1);
HXLINE( 170)					{
HXLINE( 170)						int _g = 0;
HXDLIN( 170)						while((_g < a->length)){
HXLINE( 170)							 ::format::amf3::Value f = a->__get(_g).StaticCast<  ::format::amf3::Value >();
HXDLIN( 170)							_g = (_g + 1);
HXLINE( 171)							this->write(f);
            						}
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 176)				 ::Xml x = v->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 176)				{
HXLINE( 177)					o->writeByte(11);
HXLINE( 178)					this->writeString(::haxe::xml::Printer_obj::print(x,null()));
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 179)				 ::haxe::io::Bytes b = v->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN( 179)				{
HXLINE( 180)					o->writeByte(12);
HXLINE( 181)					this->writeUInt(b->length,true);
HXLINE( 182)					o->write(b);
            				}
            			}
            			break;
            			case (int)12: {
HXLINE( 183)				 ::haxe::ds::EnumValueMap m = v->_hx_getObject(0).StaticCast<  ::haxe::ds::EnumValueMap >();
HXDLIN( 183)				{
HXLINE( 184)					o->writeByte(17);
HXLINE( 185)					this->writeUInt(::Lambda_obj::count(m,null()),true);
HXLINE( 186)					o->writeByte(0);
HXLINE( 187)					{
HXLINE( 187)						 ::Dynamic f = m->keys();
HXDLIN( 187)						while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 187)							 ::format::amf3::Value f1 = f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 188)							this->write(f1);
HXLINE( 189)							this->write(m->get(f1).StaticCast<  ::format::amf3::Value >());
            						}
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 192)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported type",25,e2,2a,f9)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))


::hx::ObjectPtr< Writer_obj > Writer_obj::__new( ::haxe::io::Output o) {
	::hx::ObjectPtr< Writer_obj > __this = new Writer_obj();
	__this->__construct(o);
	return __this;
}

::hx::ObjectPtr< Writer_obj > Writer_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o) {
	Writer_obj *__this = (Writer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Writer_obj), true, "format.amf3.Writer"));
	*(void **)__this = Writer_obj::_hx_vtable;
	__this->__construct(o);
	return __this;
}

Writer_obj::Writer_obj()
{
}

void Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Writer);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
}

::hx::Val Writer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"writeInt") ) { return ::hx::Val( writeInt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeUInt") ) { return ::hx::Val( writeUInt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return ::hx::Val( writeObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Writer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("o",6f,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Writer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(Writer_obj,o),HX_("o",6f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Writer_obj_sStaticStorageInfo = 0;
#endif

static ::String Writer_obj_sMemberFields[] = {
	HX_("o",6f,00,00,00),
	HX_("writeInt",50,6d,f0,23),
	HX_("writeUInt",f9,af,41,56),
	HX_("writeString",10,7b,29,a6),
	HX_("writeObject",fe,d0,38,aa),
	HX_("write",df,6c,59,d0),
	::String(null()) };

::hx::Class Writer_obj::__mClass;

void Writer_obj::__register()
{
	Writer_obj _hx_dummy;
	Writer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.amf3.Writer",f1,99,f7,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Writer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Writer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Writer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Writer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace amf3
