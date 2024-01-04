#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_amf3_Reader
#include <format/amf3/Reader.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_50_new,"format.amf3.Reader","new",0xdbe3ddf3,"format.amf3.Reader.new","format/amf3/Reader.hx",50,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_58_readObject,"format.amf3.Reader","readObject",0x2cee7d82,"format.amf3.Reader.readObject","format/amf3/Reader.hx",58,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_146_readMap,"format.amf3.Reader","readMap",0xbfce83f9,"format.amf3.Reader.readMap","format/amf3/Reader.hx",146,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_166_readArray,"format.amf3.Reader","readArray",0x55e1b836,"format.amf3.Reader.readArray","format/amf3/Reader.hx",166,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_193_readIntVector,"format.amf3.Reader","readIntVector",0x8a856c2f,"format.amf3.Reader.readIntVector","format/amf3/Reader.hx",193,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_221_readDoubleVector,"format.amf3.Reader","readDoubleVector",0x8db765b7,"format.amf3.Reader.readDoubleVector","format/amf3/Reader.hx",221,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_249_readObjectVector,"format.amf3.Reader","readObjectVector",0x7842afe5,"format.amf3.Reader.readObjectVector","format/amf3/Reader.hx",249,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_285_readBytes,"format.amf3.Reader","readBytes",0xedea5308,"format.amf3.Reader.readBytes","format/amf3/Reader.hx",285,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_301_readInt,"format.amf3.Reader","readInt",0xbfcb864c,"format.amf3.Reader.readInt","format/amf3/Reader.hx",301,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_328_readString,"format.amf3.Reader","readString",0x28df2794,"format.amf3.Reader.readString","format/amf3/Reader.hx",328,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_342_readStringNoHeader,"format.amf3.Reader","readStringNoHeader",0x01309c62,"format.amf3.Reader.readStringNoHeader","format/amf3/Reader.hx",342,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_388_readDate,"format.amf3.Reader","readDate",0x0ef20e31,"format.amf3.Reader.readDate","format/amf3/Reader.hx",388,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_402_readXml,"format.amf3.Reader","readXml",0xbfd6e734,"format.amf3.Reader.readXml","format/amf3/Reader.hx",402,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_416_readWithCode,"format.amf3.Reader","readWithCode",0xb4ef43d6,"format.amf3.Reader.readWithCode","format/amf3/Reader.hx",416,0x741b787d)
HX_LOCAL_STACK_FRAME(_hx_pos_61a0d9b47b42d05b_459_read,"format.amf3.Reader","read",0x8e231e63,"format.amf3.Reader.read","format/amf3/Reader.hx",459,0x741b787d)
namespace format{
namespace amf3{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_50_new)
HXLINE(  51)		this->complexObjectsTable = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  52)		this->objectTraitsTable = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  53)		this->stringTable = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  54)		this->i = i;
HXLINE(  55)		i->set_bigEndian(true);
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x0344c96b;
}

 ::format::amf3::Value Reader_obj::readObject(){
            	HX_GC_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_58_readObject)
HXLINE(  59)		bool dyn = false;
HXLINE(  60)		bool isExternalizable = false;
HXLINE(  61)		 ::format::amf3::Value className = null();
HXLINE(  62)		::Array< ::String > sealedMemberNames = ::Array_obj< ::String >::__new();
HXLINE(  64)		int n = this->readInt(null(),null());
HXLINE(  66)		if (((n & 1) == 0)) {
HXLINE(  69)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
            		else {
HXLINE(  71)			if (((n & 3) == 1)) {
HXLINE(  74)				n = (n >> 2);
HXLINE(  75)				 ::Dynamic refTraits = this->objectTraitsTable->__get(n);
HXLINE(  76)				dyn = ( (bool)(refTraits->__Field(HX_("isDynamic",b5,1c,14,3a),::hx::paccDynamic)) );
HXLINE(  77)				isExternalizable = ( (bool)(refTraits->__Field(HX_("isExternalizable",20,d8,0d,64),::hx::paccDynamic)) );
HXLINE(  78)				className = refTraits->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic);
HXLINE(  80)				sealedMemberNames = ( (::Array< ::String >)(refTraits->__Field(HX_("sealedMemberNames",d2,88,70,ae),::hx::paccDynamic)) );
            			}
            			else {
HXLINE(  82)				if (((n & 7) == 3)) {
HXLINE(  85)					dyn = (((n >> 3) & 1) == 1);
HXLINE(  86)					n = (n >> 4);
HXLINE(  87)					className = this->readString();
HXLINE(  90)					{
HXLINE(  90)						int _g = 0;
HXDLIN(  90)						int _g1 = n;
HXDLIN(  90)						while((_g < _g1)){
HXLINE(  90)							_g = (_g + 1);
HXDLIN(  90)							int j = (_g - 1);
HXLINE(  91)							sealedMemberNames->push(::format::amf3::Tools_obj::decode(this->readString()));
            						}
            					}
HXLINE(  94)					this->objectTraitsTable->push( ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("sealedMemberNames",d2,88,70,ae),sealedMemberNames)
            						->setFixed(1,HX_("className",a3,92,3d,dc),className)
            						->setFixed(2,HX_("isDynamic",b5,1c,14,3a),dyn)
            						->setFixed(3,HX_("isExternalizable",20,d8,0d,64),isExternalizable)));
            				}
            				else {
HXLINE( 103)					if (((n & 7) == 7)) {
HXLINE( 106)						isExternalizable = true;
HXLINE( 107)						className = this->readString();
HXLINE( 108)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 108)						 ::Dynamic _hx_tmp1 = ::format::amf3::Tools_obj::decode(className);
HXDLIN( 108)						_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("format/amf3/Reader.hx",7d,78,1b,74),108,HX_("format.amf3.Reader",81,68,a3,3c),HX_("readObject",b5,62,bb,0e)));
            					}
            					else {
HXLINE( 112)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid object traits",1d,19,36,88)));
            					}
            				}
            			}
            		}
HXLINE( 115)		 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 117)		::String ret;
HXDLIN( 117)		if (::hx::IsNotNull( className )) {
HXLINE( 117)			ret = ( (::String)(::format::amf3::Tools_obj::decode(className)) );
            		}
            		else {
HXLINE( 117)			ret = null();
            		}
HXDLIN( 117)		 ::format::amf3::Value ret1 = ::format::amf3::Value_obj::AObject(h,null(),ret);
HXLINE( 120)		this->complexObjectsTable->push(ret1);
HXLINE( 122)		if (!(isExternalizable)) {
HXLINE( 125)			{
HXLINE( 125)				int _g = 0;
HXDLIN( 125)				int _g1 = sealedMemberNames->length;
HXDLIN( 125)				while((_g < _g1)){
HXLINE( 125)					_g = (_g + 1);
HXDLIN( 125)					int j = (_g - 1);
HXLINE( 126)					{
HXLINE( 126)						 ::format::amf3::Value value = this->read();
HXDLIN( 126)						h->set(sealedMemberNames->__get(j),value);
            					}
            				}
            			}
HXLINE( 129)			if (dyn) {
HXLINE( 130)				::String s;
HXLINE( 131)				while(true){
HXLINE( 132)					s = ( (::String)(::format::amf3::Tools_obj::decode(this->readString())) );
HXLINE( 133)					if ((s == HX_("",00,00,00,00))) {
HXLINE( 133)						goto _hx_goto_3;
            					}
HXLINE( 134)					h->set(s,this->read());
            				}
            				_hx_goto_3:;
            			}
            		}
            		else {
HXLINE( 140)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Externalizable not supported",f7,85,5c,85)));
            		}
HXLINE( 143)		return ret1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readObject,return )

 ::format::amf3::Value Reader_obj::readMap(){
            	HX_GC_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_146_readMap)
HXLINE( 147)		int n = this->readInt(null(),null());
HXLINE( 148)		if (((n & 1) == 0)) {
HXLINE( 151)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 153)		n = (n >> 1);
HXLINE( 154)		 ::haxe::ds::EnumValueMap h =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 155)		 ::format::amf3::Value ret = ::format::amf3::Value_obj::AMap(h);
HXLINE( 156)		this->complexObjectsTable->push(ret);
HXLINE( 157)		this->i->readByte();
HXLINE( 161)		{
HXLINE( 161)			int _g = 0;
HXDLIN( 161)			int _g1 = n;
HXDLIN( 161)			while((_g < _g1)){
HXLINE( 161)				_g = (_g + 1);
HXDLIN( 161)				int i = (_g - 1);
HXLINE( 162)				{
HXLINE( 162)					 ::format::amf3::Value key = this->read();
HXDLIN( 162)					h->set(key,this->read());
            				}
            			}
            		}
HXLINE( 163)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMap,return )

 ::format::amf3::Value Reader_obj::readArray(){
            	HX_GC_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_166_readArray)
HXLINE( 167)		int n = this->readInt(null(),null());
HXLINE( 168)		if (((n & 1) == 0)) {
HXLINE( 171)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 173)		n = (n >> 1);
HXLINE( 174)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 175)		 ::haxe::ds::StringMap m =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 176)		 ::format::amf3::Value ret = ::format::amf3::Value_obj::AArray(a,m);
HXLINE( 177)		this->complexObjectsTable->push(ret);
HXLINE( 178)		::String assocName = ( (::String)(::format::amf3::Tools_obj::decode(this->readString())) );
HXLINE( 179)		while((assocName.length != 0)){
HXLINE( 182)			{
HXLINE( 182)				 ::format::amf3::Value v = this->read();
HXDLIN( 182)				m->set(assocName,v);
            			}
HXLINE( 185)			assocName = ( (::String)(::format::amf3::Tools_obj::decode(this->readString())) );
            		}
HXLINE( 187)		{
HXLINE( 187)			int _g = 0;
HXDLIN( 187)			int _g1 = n;
HXDLIN( 187)			while((_g < _g1)){
HXLINE( 187)				_g = (_g + 1);
HXDLIN( 187)				int i = (_g - 1);
HXLINE( 188)				a->push(this->read());
            			}
            		}
HXLINE( 189)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readArray,return )

 ::format::amf3::Value Reader_obj::readIntVector(){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_193_readIntVector)
HXLINE( 194)		int header = this->readInt(null(),null());
HXLINE( 195)		if (((header & 1) == 0)) {
HXLINE( 198)			return this->complexObjectsTable->__get((header >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 200)		int len = (header >> 1);
HXLINE( 201)		bool fixed = (this->i->readByte() != 0);
HXLINE( 202)		 ::Dynamic a;
HXLINE( 203)		if (fixed) {
HXLINE( 204)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(len);
HXDLIN( 204)			a = this1;
            		}
            		else {
HXLINE( 206)			a = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 208)		{
HXLINE( 208)			int _g = 0;
HXDLIN( 208)			int _g1 = len;
HXDLIN( 208)			while((_g < _g1)){
HXLINE( 208)				_g = (_g + 1);
HXDLIN( 208)				int r = (_g - 1);
HXLINE( 210)				a->__SetItem(r,::format::amf3::Value_obj::AInt(this->i->readInt32()));
            			}
            		}
HXLINE( 213)		 ::format::amf3::Value ret;
HXDLIN( 213)		if (fixed) {
HXLINE( 213)			ret = ::format::amf3::Value_obj::AVector(a,HX_("Int",cf,c4,37,00));
            		}
            		else {
HXLINE( 213)			ret = ::format::amf3::Value_obj::AArray(a,null());
            		}
HXLINE( 215)		this->complexObjectsTable->push(ret);
HXLINE( 217)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readIntVector,return )

 ::format::amf3::Value Reader_obj::readDoubleVector(){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_221_readDoubleVector)
HXLINE( 222)		int header = this->readInt(null(),null());
HXLINE( 223)		if (((header & 1) == 0)) {
HXLINE( 226)			return this->complexObjectsTable->__get((header >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 228)		int len = (header >> 1);
HXLINE( 229)		bool fixed = (this->i->readByte() != 0);
HXLINE( 230)		 ::Dynamic a;
HXLINE( 231)		if (fixed) {
HXLINE( 232)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(len);
HXDLIN( 232)			a = this1;
            		}
            		else {
HXLINE( 234)			a = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 236)		{
HXLINE( 236)			int _g = 0;
HXDLIN( 236)			int _g1 = len;
HXDLIN( 236)			while((_g < _g1)){
HXLINE( 236)				_g = (_g + 1);
HXDLIN( 236)				int r = (_g - 1);
HXLINE( 238)				a->__SetItem(r,::format::amf3::Value_obj::ANumber(this->i->readDouble()));
            			}
            		}
HXLINE( 241)		 ::format::amf3::Value ret;
HXDLIN( 241)		if (fixed) {
HXLINE( 241)			ret = ::format::amf3::Value_obj::AVector(a,HX_("Number",e9,fa,0e,d6));
            		}
            		else {
HXLINE( 241)			ret = ::format::amf3::Value_obj::AArray(a,null());
            		}
HXLINE( 243)		this->complexObjectsTable->push(ret);
HXLINE( 245)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readDoubleVector,return )

 ::format::amf3::Value Reader_obj::readObjectVector(){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_249_readObjectVector)
HXLINE( 250)		int header = this->readInt(null(),null());
HXLINE( 251)		if (((header & 1) == 0)) {
HXLINE( 254)			return this->complexObjectsTable->__get((header >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 256)		int len = (header >> 1);
HXLINE( 257)		bool fixed = (this->i->readByte() != 0);
HXLINE( 258)		::String objectTypeName = ( (::String)(::format::amf3::Tools_obj::decode(this->readString())) );
HXLINE( 259)		::haxe::Log_obj::trace((HX_("readObjectVector name:",c7,aa,fc,4f) + objectTypeName),::hx::SourceInfo(HX_("format/amf3/Reader.hx",7d,78,1b,74),259,HX_("format.amf3.Reader",81,68,a3,3c),HX_("readObjectVector",58,fd,0f,b7)));
HXLINE( 260)		::hx::Class VC = ::Type_obj::resolveClass(objectTypeName);
HXLINE( 261)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 261)		::String _hx_tmp1 = (HX_("VC:",6d,7c,41,00) + ::Std_obj::string(VC));
HXDLIN( 261)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("format/amf3/Reader.hx",7d,78,1b,74),261,HX_("format.amf3.Reader",81,68,a3,3c),HX_("readObjectVector",58,fd,0f,b7)));
HXLINE( 262)		 ::Dynamic a;
HXLINE( 263)		 ::format::amf3::Value ret;
HXLINE( 264)		if (fixed) {
HXLINE( 266)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(len);
HXDLIN( 266)			a = this1;
HXLINE( 267)			ret = ::format::amf3::Value_obj::AVector(a,objectTypeName);
            		}
            		else {
HXLINE( 271)			a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 272)			ret = ::format::amf3::Value_obj::AArray(a,null());
            		}
HXLINE( 275)		this->complexObjectsTable->push(ret);
HXLINE( 277)		{
HXLINE( 277)			int _g = 0;
HXDLIN( 277)			int _g1 = len;
HXDLIN( 277)			while((_g < _g1)){
HXLINE( 277)				_g = (_g + 1);
HXDLIN( 277)				int r = (_g - 1);
HXLINE( 279)				a->__SetItem(r,this->read());
            			}
            		}
HXLINE( 282)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readObjectVector,return )

 ::format::amf3::Value Reader_obj::readBytes(){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_285_readBytes)
HXLINE( 286)		int n = this->readInt(null(),null());
HXLINE( 287)		if (((n & 1) == 0)) {
HXLINE( 290)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 292)		n = (n >> 1);
HXLINE( 293)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(n);
HXLINE( 294)		{
HXLINE( 294)			int _g = 0;
HXDLIN( 294)			int _g1 = n;
HXDLIN( 294)			while((_g < _g1)){
HXLINE( 294)				_g = (_g + 1);
HXDLIN( 294)				int j = (_g - 1);
HXLINE( 295)				{
HXLINE( 295)					int v = this->i->readByte();
HXDLIN( 295)					b->b[j] = ( (unsigned char)(v) );
            				}
            			}
            		}
HXLINE( 296)		 ::format::amf3::Value ret = ::format::amf3::Value_obj::ABytes(b);
HXLINE( 297)		this->complexObjectsTable->push(ret);
HXLINE( 298)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readBytes,return )

int Reader_obj::readInt(::hx::Null< bool >  __o_signExtend,::hx::Null< int >  __o_preShift){
            		bool signExtend = __o_signExtend.Default(false);
            		int preShift = __o_preShift.Default(0);
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_301_readInt)
HXLINE( 302)		int c = (this->i->readByte() & 255);
HXLINE( 303)		if ((c < 128)) {
HXLINE( 304)			return (c >> preShift);
            		}
HXLINE( 306)		int ret = ((c & 127) << 7);
HXLINE( 307)		c = (this->i->readByte() & 255);
HXLINE( 308)		if ((c < 128)) {
HXLINE( 309)			return ((ret | c) >> preShift);
            		}
HXLINE( 311)		ret = (ret | (c & 127));
HXLINE( 312)		ret = (ret << 7);
HXLINE( 313)		c = (this->i->readByte() & 255);
HXLINE( 314)		if ((c < 128)) {
HXLINE( 315)			return ((ret | c) >> preShift);
            		}
HXLINE( 317)		ret = (ret | (c & 127));
HXLINE( 318)		ret = (ret << 8);
HXLINE( 319)		c = (this->i->readByte() & 255);
HXLINE( 320)		ret = (ret | c);
HXLINE( 322)		bool _hx_tmp;
HXDLIN( 322)		if (signExtend) {
HXLINE( 322)			_hx_tmp = ((ret & 268435456) != 0);
            		}
            		else {
HXLINE( 322)			_hx_tmp = false;
            		}
HXDLIN( 322)		if (_hx_tmp) {
HXLINE( 323)			ret = (ret | -536870912);
            		}
HXLINE( 325)		return (ret >> preShift);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,readInt,return )

 ::format::amf3::Value Reader_obj::readString(){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_328_readString)
HXLINE( 329)		int header = this->readInt(null(),null());
HXLINE( 330)		if (((header & 1) == 0)) {
HXLINE( 333)			int strRefIdx = (header >> 1);
HXLINE( 334)			return this->stringTable->__get(strRefIdx).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 337)		int len = (header >> 1);
HXLINE( 338)		return this->readStringNoHeader(len);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readString,return )

 ::format::amf3::Value Reader_obj::readStringNoHeader(int len){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_342_readStringNoHeader)
HXLINE( 343)		if ((len == 0)) {
HXLINE( 344)			return ::format::amf3::Value_obj::AString(HX_("",00,00,00,00));
            		}
HXLINE( 347)		 ::format::amf3::Value ret = ::format::amf3::Value_obj::AString(this->i->readString(len,::haxe::io::Encoding_obj::UTF8_dyn()));
HXLINE( 383)		this->stringTable->push(ret);
HXLINE( 384)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readStringNoHeader,return )

 ::format::amf3::Value Reader_obj::readDate(){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_388_readDate)
HXLINE( 389)		int n = this->readInt(null(),null());
HXLINE( 390)		if (((n & 1) == 0)) {
HXLINE( 393)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 395)		 ::Date date = ::Date_obj::fromTime(this->i->readDouble());
HXLINE( 396)		 ::format::amf3::Value ret = ::format::amf3::Value_obj::ADate(date);
HXLINE( 397)		this->complexObjectsTable->push(ret);
HXLINE( 398)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readDate,return )

 ::format::amf3::Value Reader_obj::readXml(){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_402_readXml)
HXLINE( 403)		int n = this->readInt(null(),null());
HXLINE( 404)		if (((n & 1) == 0)) {
HXLINE( 407)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::format::amf3::Value >();
            		}
HXLINE( 409)		n = (n >> 1);
HXLINE( 410)		 ::Xml xml = ::Xml_obj::parse(( (::String)(::format::amf3::Tools_obj::decode(this->readStringNoHeader(n))) ));
HXLINE( 411)		 ::format::amf3::Value ret = ::format::amf3::Value_obj::AXml(xml);
HXLINE( 412)		this->complexObjectsTable->push(ret);
HXLINE( 413)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readXml,return )

 ::format::amf3::Value Reader_obj::readWithCode(int id){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_416_readWithCode)
HXLINE( 417)		 ::haxe::io::Input i = this->i;
HXLINE( 418)		switch((int)(id)){
            			case (int)0: {
HXLINE( 420)				return ::format::amf3::Value_obj::AUndefined_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE( 422)				return ::format::amf3::Value_obj::ANull_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 424)				return ::format::amf3::Value_obj::ABool(false);
            			}
            			break;
            			case (int)3: {
HXLINE( 426)				return ::format::amf3::Value_obj::ABool(true);
            			}
            			break;
            			case (int)4: {
HXLINE( 428)				return ::format::amf3::Value_obj::AInt(this->readInt(true,null()));
            			}
            			break;
            			case (int)5: {
HXLINE( 430)				return ::format::amf3::Value_obj::ANumber(i->readDouble());
            			}
            			break;
            			case (int)6: {
HXLINE( 432)				return this->readString();
            			}
            			break;
            			case (int)7: {
HXLINE( 434)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("XMLDocument unsupported",87,e7,77,60)));
            			}
            			break;
            			case (int)8: {
HXLINE( 436)				return this->readDate();
            			}
            			break;
            			case (int)9: {
HXLINE( 438)				return this->readArray();
            			}
            			break;
            			case (int)10: {
HXLINE( 440)				return this->readObject();
            			}
            			break;
            			case (int)11: {
HXLINE( 442)				return this->readXml();
            			}
            			break;
            			case (int)12: {
HXLINE( 444)				return this->readBytes();
            			}
            			break;
            			case (int)13: case (int)14: {
HXLINE( 446)				return this->readIntVector();
            			}
            			break;
            			case (int)15: {
HXLINE( 448)				return this->readDoubleVector();
            			}
            			break;
            			case (int)16: {
HXLINE( 450)				return this->readObjectVector();
            			}
            			break;
            			case (int)17: {
HXLINE( 452)				return this->readMap();
            			}
            			break;
            			default:{
HXLINE( 454)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown AMF ",7c,2d,9c,eb) + id)));
            			}
            		}
HXLINE( 418)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readWithCode,return )

 ::format::amf3::Value Reader_obj::read(){
            	HX_STACKFRAME(&_hx_pos_61a0d9b47b42d05b_459_read)
HXDLIN( 459)		return this->readWithCode(this->i->readByte());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "format.amf3.Reader"));
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
	HX_MARK_MEMBER_NAME(complexObjectsTable,"complexObjectsTable");
	HX_MARK_MEMBER_NAME(objectTraitsTable,"objectTraitsTable");
	HX_MARK_MEMBER_NAME(stringTable,"stringTable");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complexObjectsTable,"complexObjectsTable");
	HX_VISIT_MEMBER_NAME(objectTraitsTable,"objectTraitsTable");
	HX_VISIT_MEMBER_NAME(stringTable,"stringTable");
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
		if (HX_FIELD_EQ(inName,"readMap") ) { return ::hx::Val( readMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"readXml") ) { return ::hx::Val( readXml_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readDate") ) { return ::hx::Val( readDate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readArray") ) { return ::hx::Val( readArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringTable") ) { return ::hx::Val( stringTable ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readWithCode") ) { return ::hx::Val( readWithCode_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readIntVector") ) { return ::hx::Val( readIntVector_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readDoubleVector") ) { return ::hx::Val( readDoubleVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"readObjectVector") ) { return ::hx::Val( readObjectVector_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"objectTraitsTable") ) { return ::hx::Val( objectTraitsTable ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readStringNoHeader") ) { return ::hx::Val( readStringNoHeader_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"complexObjectsTable") ) { return ::hx::Val( complexObjectsTable ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringTable") ) { stringTable=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"objectTraitsTable") ) { objectTraitsTable=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"complexObjectsTable") ) { complexObjectsTable=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("complexObjectsTable",ea,78,ad,35));
	outFields->push(HX_("objectTraitsTable",6a,ac,0b,09));
	outFields->push(HX_("stringTable",7d,69,e6,15));
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Reader_obj,complexObjectsTable),HX_("complexObjectsTable",ea,78,ad,35)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Reader_obj,objectTraitsTable),HX_("objectTraitsTable",6a,ac,0b,09)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Reader_obj,stringTable),HX_("stringTable",7d,69,e6,15)},
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("complexObjectsTable",ea,78,ad,35),
	HX_("objectTraitsTable",6a,ac,0b,09),
	HX_("stringTable",7d,69,e6,15),
	HX_("i",69,00,00,00),
	HX_("readObject",b5,62,bb,0e),
	HX_("readMap",e6,b0,cc,02),
	HX_("readArray",63,ba,76,f6),
	HX_("readIntVector",dc,88,cb,4f),
	HX_("readDoubleVector",2a,b3,84,cc),
	HX_("readObjectVector",58,fd,0f,b7),
	HX_("readBytes",35,55,7f,8e),
	HX_("readInt",39,b3,c9,02),
	HX_("readString",c7,0c,ac,0a),
	HX_("readStringNoHeader",95,6c,02,88),
	HX_("readDate",a4,30,5b,6a),
	HX_("readXml",21,14,d5,02),
	HX_("readWithCode",c9,1b,a6,4f),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.amf3.Reader",81,68,a3,3c);
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
} // end namespace amf3
