#include <hxcpp.h>

#ifndef INCLUDED_format_tools_ArcFour
#include <format/tools/ArcFour.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_54a3466445589a29_36_new,"format.tools.ArcFour","new",0xe259fa60,"format.tools.ArcFour.new","format/tools/ArcFour.hx",36,0xe13fae52)
HX_LOCAL_STACK_FRAME(_hx_pos_54a3466445589a29_54_reset,"format.tools.ArcFour","reset",0xf62cf3cf,"format.tools.ArcFour.reset","format/tools/ArcFour.hx",54,0xe13fae52)
HX_LOCAL_STACK_FRAME(_hx_pos_54a3466445589a29_60_run,"format.tools.ArcFour","run",0xe25d114b,"format.tools.ArcFour.run","format/tools/ArcFour.hx",60,0xe13fae52)
namespace format{
namespace tools{

void ArcFour_obj::__construct( ::haxe::io::Bytes key){
            	HX_STACKFRAME(&_hx_pos_54a3466445589a29_36_new)
HXLINE(  37)		 ::haxe::io::Bytes s = ::haxe::io::Bytes_obj::alloc(256);
HXLINE(  38)		{
HXLINE(  38)			int _g = 0;
HXDLIN(  38)			while((_g < 256)){
HXLINE(  38)				_g = (_g + 1);
HXDLIN(  38)				int i = (_g - 1);
HXLINE(  39)				s->b[i] = ( (unsigned char)(i) );
            			}
            		}
HXLINE(  40)		int j = 0;
HXLINE(  41)		int klen = key->length;
HXLINE(  42)		{
HXLINE(  42)			int _g1 = 0;
HXDLIN(  42)			while((_g1 < 256)){
HXLINE(  42)				_g1 = (_g1 + 1);
HXDLIN(  42)				int i = (_g1 - 1);
HXLINE(  43)				j = (((j + s->b->__get(i)) + key->b->__get(::hx::Mod(i,klen))) & 255);
HXLINE(  44)				int tmp = ( (int)(s->b->__get(i)) );
HXLINE(  45)				s->b[i] = s->b->__get(j);
HXLINE(  46)				s->b[j] = ( (unsigned char)(tmp) );
            			}
            		}
HXLINE(  48)		this->sbase = s;
HXLINE(  49)		this->s = this->sbase->sub(0,256);
HXLINE(  50)		this->i = 0;
HXLINE(  51)		this->j = 0;
            	}

Dynamic ArcFour_obj::__CreateEmpty() { return new ArcFour_obj; }

void *ArcFour_obj::_hx_vtable = 0;

Dynamic ArcFour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArcFour_obj > _hx_result = new ArcFour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArcFour_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x119a3e18;
}

void ArcFour_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_54a3466445589a29_54_reset)
HXLINE(  55)		this->i = 0;
HXLINE(  56)		this->j = 0;
HXLINE(  57)		this->s->blit(0,this->sbase,0,256);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArcFour_obj,reset,(void))

void ArcFour_obj::run( ::haxe::io::Bytes input,int ipos,int length, ::haxe::io::Bytes output,int opos){
            	HX_STACKFRAME(&_hx_pos_54a3466445589a29_60_run)
HXLINE(  61)		int i = this->i;
HXLINE(  62)		int j = this->j;
HXLINE(  63)		 ::haxe::io::Bytes s = this->s;
HXLINE(  64)		{
HXLINE(  64)			int _g = 0;
HXDLIN(  64)			int _g1 = length;
HXDLIN(  64)			while((_g < _g1)){
HXLINE(  64)				_g = (_g + 1);
HXDLIN(  64)				int p = (_g - 1);
HXLINE(  65)				i = ((i + 1) & 255);
HXLINE(  66)				int a = ( (int)(s->b->__get(i)) );
HXLINE(  67)				j = ((j + a) & 255);
HXLINE(  68)				int b = ( (int)(s->b->__get(j)) );
HXLINE(  69)				s->b[i] = ( (unsigned char)(b) );
HXLINE(  70)				s->b[j] = ( (unsigned char)(a) );
HXLINE(  71)				output->b[(opos + p)] = ( (unsigned char)((( (int)(input->b->__get((ipos + p))) ) ^ ( (int)(s->b->__get(((a + b) & 255))) ))) );
            			}
            		}
HXLINE(  73)		this->i = i;
HXLINE(  74)		this->j = j;
            	}


HX_DEFINE_DYNAMIC_FUNC5(ArcFour_obj,run,(void))


::hx::ObjectPtr< ArcFour_obj > ArcFour_obj::__new( ::haxe::io::Bytes key) {
	::hx::ObjectPtr< ArcFour_obj > __this = new ArcFour_obj();
	__this->__construct(key);
	return __this;
}

::hx::ObjectPtr< ArcFour_obj > ArcFour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes key) {
	ArcFour_obj *__this = (ArcFour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArcFour_obj), true, "format.tools.ArcFour"));
	*(void **)__this = ArcFour_obj::_hx_vtable;
	__this->__construct(key);
	return __this;
}

ArcFour_obj::ArcFour_obj()
{
}

void ArcFour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArcFour);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(sbase,"sbase");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(j,"j");
	HX_MARK_END_CLASS();
}

void ArcFour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(sbase,"sbase");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(j,"j");
}

::hx::Val ArcFour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		if (HX_FIELD_EQ(inName,"j") ) { return ::hx::Val( j ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sbase") ) { return ::hx::Val( sbase ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArcFour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"j") ) { j=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sbase") ) { sbase=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArcFour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("sbase",04,9e,25,78));
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("j",6a,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArcFour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(ArcFour_obj,s),HX_("s",73,00,00,00)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(ArcFour_obj,sbase),HX_("sbase",04,9e,25,78)},
	{::hx::fsInt,(int)offsetof(ArcFour_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsInt,(int)offsetof(ArcFour_obj,j),HX_("j",6a,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArcFour_obj_sStaticStorageInfo = 0;
#endif

static ::String ArcFour_obj_sMemberFields[] = {
	HX_("s",73,00,00,00),
	HX_("sbase",04,9e,25,78),
	HX_("i",69,00,00,00),
	HX_("j",6a,00,00,00),
	HX_("reset",cf,49,c8,e6),
	HX_("run",4b,e7,56,00),
	::String(null()) };

::hx::Class ArcFour_obj::__mClass;

void ArcFour_obj::__register()
{
	ArcFour_obj _hx_dummy;
	ArcFour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.tools.ArcFour",6e,8a,fd,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArcFour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArcFour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArcFour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArcFour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace tools
