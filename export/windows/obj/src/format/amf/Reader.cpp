#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_format_amf_Reader
#include <format/amf/Reader.h>
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
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cafa0caed1d7527_34_new,"format.amf.Reader","new",0x9aa67d20,"format.amf.Reader.new","format/amf/Reader.hx",34,0x0d6b518e)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafa0caed1d7527_39_readObject,"format.amf.Reader","readObject",0x0d2bcdf5,"format.amf.Reader.readObject","format/amf/Reader.hx",39,0x0d6b518e)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafa0caed1d7527_53_readArray,"format.amf.Reader","readArray",0xb62b7723,"format.amf.Reader.readArray","format/amf/Reader.hx",53,0x0d6b518e)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafa0caed1d7527_62_readInt,"format.amf.Reader","readInt",0xa6d1bff9,"format.amf.Reader.readInt","format/amf/Reader.hx",62,0x0d6b518e)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafa0caed1d7527_68_readWithCode,"format.amf.Reader","readWithCode",0x1b77d709,"format.amf.Reader.readWithCode","format/amf/Reader.hx",68,0x0d6b518e)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafa0caed1d7527_107_read,"format.amf.Reader","read",0xb9abc696,"format.amf.Reader.read","format/amf/Reader.hx",107,0x0d6b518e)
namespace format{
namespace amf{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_3cafa0caed1d7527_34_new)
HXLINE(  35)		this->i = i;
HXLINE(  36)		i->set_bigEndian(true);
            	}

Dynamic Reader_obj::__CreateEmpty() { return new Reader_obj; }

void *Reader_obj::_hx_vtable = 0;

Dynamic Reader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reader_obj > _hx_result = new Reader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3fbb2506;
}

 ::haxe::ds::StringMap Reader_obj::readObject(){
            	HX_GC_STACKFRAME(&_hx_pos_3cafa0caed1d7527_39_readObject)
HXLINE(  40)		 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  41)		while(true){
HXLINE(  42)			int c1 = this->i->readByte();
HXLINE(  43)			int c2 = this->i->readByte();
HXLINE(  44)			::String name = this->i->readString(((c1 << 8) | c2),null());
HXLINE(  45)			int k = this->i->readByte();
HXLINE(  46)			if ((k == 9)) {
HXLINE(  47)				goto _hx_goto_1;
            			}
HXLINE(  48)			h->set(name,this->readWithCode(k));
            		}
            		_hx_goto_1:;
HXLINE(  50)		return h;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readObject,return )

::Array< ::Dynamic> Reader_obj::readArray(int n){
            	HX_STACKFRAME(&_hx_pos_3cafa0caed1d7527_53_readArray)
HXLINE(  54)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			int _g1 = n;
HXDLIN(  55)			while((_g < _g1)){
HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				int i = (_g - 1);
HXLINE(  56)				a->push(this->read());
            			}
            		}
HXLINE(  57)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readArray,return )

int Reader_obj::readInt(){
            	HX_STACKFRAME(&_hx_pos_3cafa0caed1d7527_62_readInt)
HXDLIN(  62)		return this->i->readInt32();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readInt,return )

 ::format::amf::Value Reader_obj::readWithCode(int id){
            	HX_STACKFRAME(&_hx_pos_3cafa0caed1d7527_68_readWithCode)
HXLINE(  69)		 ::haxe::io::Input i = this->i;
HXLINE(  70)		switch((int)(id)){
            			case (int)0: {
HXLINE(  72)				return ::format::amf::Value_obj::ANumber(i->readDouble());
            			}
            			break;
            			case (int)1: {
HXLINE(  75)				bool _hx_tmp;
HXDLIN(  75)				switch((int)(i->readByte())){
            					case (int)0: {
HXLINE(  75)						_hx_tmp = false;
            					}
            					break;
            					case (int)1: {
HXLINE(  75)						_hx_tmp = true;
            					}
            					break;
            					default:{
HXLINE(  78)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid AMF",11,24,c1,76)));
            					}
            				}
HXLINE(  74)				return ::format::amf::Value_obj::ABool(_hx_tmp);
            			}
            			break;
            			case (int)2: {
HXLINE(  82)				return ::format::amf::Value_obj::AString(i->readString(i->readUInt16(),null()));
            			}
            			break;
            			case (int)5: {
HXLINE(  88)				return ::format::amf::Value_obj::ANull_dyn();
            			}
            			break;
            			case (int)6: {
HXLINE(  90)				return ::format::amf::Value_obj::AUndefined_dyn();
            			}
            			break;
            			case (int)7: {
HXLINE(  92)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not supported : Reference",66,a2,cf,e7)));
            			}
            			break;
            			case (int)3: case (int)8: {
HXLINE(  84)				bool ismixed = (id == 8);
HXLINE(  85)				 ::Dynamic size;
HXDLIN(  85)				if (ismixed) {
HXLINE(  85)					size = this->i->readInt32();
            				}
            				else {
HXLINE(  85)					size = null();
            				}
HXLINE(  86)				return ::format::amf::Value_obj::AObject(this->readObject(),size);
            			}
            			break;
            			case (int)10: {
HXLINE(  94)				return ::format::amf::Value_obj::AArray(this->readArray(this->i->readInt32()));
            			}
            			break;
            			case (int)11: {
HXLINE(  96)				Float time_ms = i->readDouble();
HXLINE(  97)				int tz_min = i->readUInt16();
HXLINE(  98)				return ::format::amf::Value_obj::ADate(::Date_obj::fromTime((time_ms + (( (Float)((tz_min * 60)) ) * ((Float)1000.0)))));
            			}
            			break;
            			case (int)12: {
HXLINE( 100)				return ::format::amf::Value_obj::AString(i->readString(this->i->readInt32(),null()));
            			}
            			break;
            			default:{
HXLINE( 102)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown AMF ",7c,2d,9c,eb) + id)));
            			}
            		}
HXLINE(  70)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readWithCode,return )

 ::format::amf::Value Reader_obj::read(){
            	HX_STACKFRAME(&_hx_pos_3cafa0caed1d7527_107_read)
HXDLIN( 107)		return this->readWithCode(this->i->readByte());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "format.amf.Reader"));
	*(void **)__this = Reader_obj::_hx_vtable;
	__this->__construct(i);
	return __this;
}

Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
}

::hx::Val Reader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readArray") ) { return ::hx::Val( readArray_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readWithCode") ) { return ::hx::Val( readWithCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("readObject",b5,62,bb,0e),
	HX_("readArray",63,ba,76,f6),
	HX_("readInt",39,b3,c9,02),
	HX_("readWithCode",c9,1b,a6,4f),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.amf.Reader",2e,ad,a1,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Reader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Reader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace amf
