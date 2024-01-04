#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_format_amf_Value
#include <format/amf/Value.h>
#endif
#ifndef INCLUDED_format_amf_Writer
#include <format/amf/Writer.h>
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
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6add5e986aced0f1_33_new,"format.amf.Writer","new",0x75482690,"format.amf.Writer.new","format/amf/Writer.hx",33,0xc613a61e)
HX_LOCAL_STACK_FRAME(_hx_pos_6add5e986aced0f1_38_write,"format.amf.Writer","write",0xabb3af0f,"format.amf.Writer.write","format/amf/Writer.hx",38,0xc613a61e)
namespace format{
namespace amf{

void Writer_obj::__construct( ::haxe::io::Output o){
            	HX_STACKFRAME(&_hx_pos_6add5e986aced0f1_33_new)
HXLINE(  34)		this->o = o;
HXLINE(  35)		o->set_bigEndian(true);
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fa46392;
}

void Writer_obj::write( ::format::amf::Value v){
            	HX_STACKFRAME(&_hx_pos_6add5e986aced0f1_38_write)
HXLINE(  39)		 ::haxe::io::Output o = this->o;
HXLINE(  40)		switch((int)(v->_hx_getIndex())){
            			case (int)0: {
HXLINE(  41)				Float n = v->_hx_getFloat(0);
HXDLIN(  41)				{
HXLINE(  42)					o->writeByte(0);
HXLINE(  43)					o->writeDouble(n);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  44)				bool b = v->_hx_getBool(0);
HXDLIN(  44)				{
HXLINE(  45)					o->writeByte(1);
HXLINE(  46)					int _hx_tmp;
HXDLIN(  46)					if (b) {
HXLINE(  46)						_hx_tmp = 1;
            					}
            					else {
HXLINE(  46)						_hx_tmp = 0;
            					}
HXDLIN(  46)					o->writeByte(_hx_tmp);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  47)				::String s = v->_hx_getString(0);
HXDLIN(  47)				{
HXLINE(  48)					if ((s.length <= 65535)) {
HXLINE(  49)						o->writeByte(2);
HXLINE(  50)						o->writeUInt16(s.length);
            					}
            					else {
HXLINE(  52)						o->writeByte(12);
HXLINE(  54)						o->writeInt32(s.length);
            					}
HXLINE(  59)					o->writeString(s,null());
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  60)				 ::haxe::ds::StringMap h = v->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN(  60)				 ::Dynamic size = v->_hx_getObject(1);
HXDLIN(  60)				{
HXLINE(  61)					if (::hx::IsNull( size )) {
HXLINE(  62)						o->writeByte(3);
            					}
            					else {
HXLINE(  64)						o->writeByte(8);
HXLINE(  66)						o->writeInt32(( (int)(size) ));
            					}
HXLINE(  71)					{
HXLINE(  71)						 ::Dynamic f = h->keys();
HXDLIN(  71)						while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  71)							::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  72)							o->writeUInt16(f1.length);
HXLINE(  73)							o->writeString(f1,null());
HXLINE(  74)							this->write(h->get(f1));
            						}
            					}
HXLINE(  76)					o->writeByte(0);
HXLINE(  77)					o->writeByte(0);
HXLINE(  78)					o->writeByte(9);
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(  83)				 ::Date d = v->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN(  83)				{
HXLINE(  84)					o->writeByte(11);
HXLINE(  85)					o->writeDouble(d->getTime());
HXLINE(  86)					o->writeUInt16(0);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  82)				o->writeByte(6);
            			}
            			break;
            			case (int)6: {
HXLINE(  80)				o->writeByte(5);
            			}
            			break;
            			case (int)7: {
HXLINE(  87)				::Array< ::Dynamic> a = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  87)				{
HXLINE(  88)					o->writeByte(10);
HXLINE(  90)					o->writeInt32(a->length);
HXLINE(  94)					{
HXLINE(  94)						int _g = 0;
HXDLIN(  94)						while((_g < a->length)){
HXLINE(  94)							 ::format::amf::Value f = a->__get(_g).StaticCast<  ::format::amf::Value >();
HXDLIN(  94)							_g = (_g + 1);
HXLINE(  95)							this->write(f);
            						}
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))


::hx::ObjectPtr< Writer_obj > Writer_obj::__new( ::haxe::io::Output o) {
	::hx::ObjectPtr< Writer_obj > __this = new Writer_obj();
	__this->__construct(o);
	return __this;
}

::hx::ObjectPtr< Writer_obj > Writer_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o) {
	Writer_obj *__this = (Writer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Writer_obj), true, "format.amf.Writer"));
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
	HX_("write",df,6c,59,d0),
	::String(null()) };

::hx::Class Writer_obj::__mClass;

void Writer_obj::__register()
{
	Writer_obj _hx_dummy;
	Writer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.amf.Writer",9e,de,f5,c9);
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
} // end namespace amf
