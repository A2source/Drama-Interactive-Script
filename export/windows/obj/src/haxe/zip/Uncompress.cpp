#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_FlushMode
#include <haxe/zip/FlushMode.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d2afceb84963dbfa_30_new,"haxe.zip.Uncompress","new",0x34f307c2,"haxe.zip.Uncompress.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",30,0x0a7f5a92)
HX_LOCAL_STACK_FRAME(_hx_pos_d2afceb84963dbfa_34_execute,"haxe.zip.Uncompress","execute",0xb3589a97,"haxe.zip.Uncompress.execute","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",34,0x0a7f5a92)
HX_LOCAL_STACK_FRAME(_hx_pos_d2afceb84963dbfa_38_setFlushMode,"haxe.zip.Uncompress","setFlushMode",0xbecba0a3,"haxe.zip.Uncompress.setFlushMode","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",38,0x0a7f5a92)
HX_LOCAL_STACK_FRAME(_hx_pos_d2afceb84963dbfa_42_close,"haxe.zip.Uncompress","close",0x4cc86b9a,"haxe.zip.Uncompress.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",42,0x0a7f5a92)
HX_LOCAL_STACK_FRAME(_hx_pos_d2afceb84963dbfa_45_run,"haxe.zip.Uncompress","run",0x34f61ead,"haxe.zip.Uncompress.run","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",45,0x0a7f5a92)
namespace haxe{
namespace zip{

void Uncompress_obj::__construct( ::Dynamic windowBits){
            	HX_STACKFRAME(&_hx_pos_d2afceb84963dbfa_30_new)
HXDLIN(  30)		this->s = _hx_inflate_init(windowBits);
            	}

Dynamic Uncompress_obj::__CreateEmpty() { return new Uncompress_obj; }

void *Uncompress_obj::_hx_vtable = 0;

Dynamic Uncompress_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Uncompress_obj > _hx_result = new Uncompress_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Uncompress_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5fe78dd6;
}

 ::Dynamic Uncompress_obj::execute( ::haxe::io::Bytes src,int srcPos, ::haxe::io::Bytes dst,int dstPos){
            	HX_STACKFRAME(&_hx_pos_d2afceb84963dbfa_34_execute)
HXDLIN(  34)		return _hx_inflate_buffer(this->s,src->b,srcPos,dst->b,dstPos);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Uncompress_obj,execute,return )

void Uncompress_obj::setFlushMode( ::haxe::zip::FlushMode f){
            	HX_STACKFRAME(&_hx_pos_d2afceb84963dbfa_38_setFlushMode)
HXDLIN(  38)		 ::Dynamic _hx_tmp = this->s;
HXDLIN(  38)		_hx_zip_set_flush_mode(_hx_tmp,( (::String)(f->__Tag()) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Uncompress_obj,setFlushMode,(void))

void Uncompress_obj::close(){
            	HX_STACKFRAME(&_hx_pos_d2afceb84963dbfa_42_close)
HXDLIN(  42)		_hx_inflate_end(this->s);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Uncompress_obj,close,(void))

 ::haxe::io::Bytes Uncompress_obj::run( ::haxe::io::Bytes src, ::Dynamic bufsize){
            	HX_GC_STACKFRAME(&_hx_pos_d2afceb84963dbfa_45_run)
HXLINE(  46)		 ::haxe::zip::Uncompress u =  ::haxe::zip::Uncompress_obj::__alloc( HX_CTX ,null());
HXLINE(  47)		if (::hx::IsNull( bufsize )) {
HXLINE(  48)			bufsize = 65536;
            		}
HXLINE(  49)		 ::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc(( (int)(bufsize) ));
HXLINE(  50)		 ::haxe::io::BytesBuffer b =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  51)		int pos = 0;
HXLINE(  52)		u->setFlushMode(::haxe::zip::FlushMode_obj::SYNC_dyn());
HXLINE(  53)		while(true){
HXLINE(  54)			 ::Dynamic r = u->execute(src,pos,tmp,0);
HXLINE(  55)			{
HXLINE(  55)				int len = ( (int)(r->__Field(HX_("write",df,6c,59,d0),::hx::paccDynamic)) );
HXDLIN(  55)				bool _hx_tmp;
HXDLIN(  55)				if ((len >= 0)) {
HXLINE(  55)					_hx_tmp = (len > tmp->length);
            				}
            				else {
HXLINE(  55)					_hx_tmp = true;
            				}
HXDLIN(  55)				if (_hx_tmp) {
HXLINE(  55)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            				}
HXDLIN(  55)				::Array< unsigned char > b1 = b->b;
HXDLIN(  55)				::Array< unsigned char > b2 = tmp->b;
HXDLIN(  55)				{
HXLINE(  55)					int _g = 0;
HXDLIN(  55)					int _g1 = len;
HXDLIN(  55)					while((_g < _g1)){
HXLINE(  55)						_g = (_g + 1);
HXDLIN(  55)						int i = (_g - 1);
HXDLIN(  55)						b->b->push(b2->__get(i));
            					}
            				}
            			}
HXLINE(  56)			pos = ( (int)((pos + r->__Field(HX_("read",56,4b,a7,4b),::hx::paccDynamic))) );
HXLINE(  57)			if (( (bool)(r->__Field(HX_("done",82,f0,6d,42),::hx::paccDynamic)) )) {
HXLINE(  58)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE(  60)		u->close();
HXLINE(  61)		return b->getBytes();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Uncompress_obj,run,return )


::hx::ObjectPtr< Uncompress_obj > Uncompress_obj::__new( ::Dynamic windowBits) {
	::hx::ObjectPtr< Uncompress_obj > __this = new Uncompress_obj();
	__this->__construct(windowBits);
	return __this;
}

::hx::ObjectPtr< Uncompress_obj > Uncompress_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic windowBits) {
	Uncompress_obj *__this = (Uncompress_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Uncompress_obj), true, "haxe.zip.Uncompress"));
	*(void **)__this = Uncompress_obj::_hx_vtable;
	__this->__construct(windowBits);
	return __this;
}

Uncompress_obj::Uncompress_obj()
{
}

void Uncompress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uncompress);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void Uncompress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

::hx::Val Uncompress_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFlushMode") ) { return ::hx::Val( setFlushMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Uncompress_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

::hx::Val Uncompress_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uncompress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("s",73,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Uncompress_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Uncompress_obj,s),HX_("s",73,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Uncompress_obj_sStaticStorageInfo = 0;
#endif

static ::String Uncompress_obj_sMemberFields[] = {
	HX_("s",73,00,00,00),
	HX_("execute",35,0a,0d,cc),
	HX_("setFlushMode",45,d4,07,63),
	HX_("close",b8,17,63,48),
	::String(null()) };

::hx::Class Uncompress_obj::__mClass;

static ::String Uncompress_obj_sStaticFields[] = {
	HX_("run",4b,e7,56,00),
	::String(null())
};

void Uncompress_obj::__register()
{
	Uncompress_obj _hx_dummy;
	Uncompress_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.zip.Uncompress",d0,be,27,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Uncompress_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Uncompress_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Uncompress_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Uncompress_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uncompress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uncompress_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
