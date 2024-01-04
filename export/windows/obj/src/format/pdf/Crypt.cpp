#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_format_pdf_Crypt
#include <format/pdf/Crypt.h>
#endif
#ifndef INCLUDED_format_pdf_Data
#include <format/pdf/Data.h>
#endif
#ifndef INCLUDED_format_pdf_Extract
#include <format/pdf/Extract.h>
#endif
#ifndef INCLUDED_format_tools_ArcFour
#include <format/tools/ArcFour.h>
#endif
#ifndef INCLUDED_format_tools_MD5
#include <format/tools/MD5.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_47_new,"format.pdf.Crypt","new",0x04f6e04d,"format.pdf.Crypt.new","format/pdf/Crypt.hx",47,0xaf1a4e45)
HX_LOCAL_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_50_decrypt,"format.pdf.Crypt","decrypt",0xf79dd2ba,"format.pdf.Crypt.decrypt","format/pdf/Crypt.hx",50,0xaf1a4e45)
HX_LOCAL_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_87_decryptObject,"format.pdf.Crypt","decryptObject",0x27338d19,"format.pdf.Crypt.decryptObject","format/pdf/Crypt.hx",87,0xaf1a4e45)
HX_LOCAL_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_116_decryptString,"format.pdf.Crypt","decryptString",0x2324372b,"format.pdf.Crypt.decryptString","format/pdf/Crypt.hx",116,0xaf1a4e45)
HX_LOCAL_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_119_decryptBytes,"format.pdf.Crypt","decryptBytes",0xf02f8351,"format.pdf.Crypt.decryptBytes","format/pdf/Crypt.hx",119,0xaf1a4e45)
HX_LOCAL_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_126_buildFileKey,"format.pdf.Crypt","buildFileKey",0x4294e168,"format.pdf.Crypt.buildFileKey","format/pdf/Crypt.hx",126,0xaf1a4e45)
HX_LOCAL_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_167_buildObjectKey,"format.pdf.Crypt","buildObjectKey",0x1cf44045,"format.pdf.Crypt.buildObjectKey","format/pdf/Crypt.hx",167,0xaf1a4e45)
HX_LOCAL_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_33_initPadBytes,"format.pdf.Crypt","initPadBytes",0xe9d40bbb,"format.pdf.Crypt.initPadBytes","format/pdf/Crypt.hx",33,0xaf1a4e45)
static const int _hx_array_data_acfbb5db_15[] = {
	(int)40,(int)191,(int)78,(int)94,(int)78,(int)117,(int)138,(int)65,(int)100,(int)0,(int)78,(int)86,(int)255,(int)250,(int)1,(int)8,(int)46,(int)46,(int)0,(int)182,(int)208,(int)104,(int)62,(int)128,(int)47,(int)12,(int)169,(int)254,(int)100,(int)83,(int)105,(int)122,
};
HX_LOCAL_STACK_FRAME(_hx_pos_295ac7ed2e99bcba_32_boot,"format.pdf.Crypt","boot",0x4b2663a5,"format.pdf.Crypt.boot","format/pdf/Crypt.hx",32,0xaf1a4e45)
namespace format{
namespace pdf{

void Crypt_obj::__construct(::String pass){
            	HX_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_47_new)
HXDLIN(  47)		::String _hx_tmp;
HXDLIN(  47)		if (::hx::IsNull( pass )) {
HXDLIN(  47)			_hx_tmp = HX_("",00,00,00,00);
            		}
            		else {
HXDLIN(  47)			_hx_tmp = pass;
            		}
HXDLIN(  47)		this->userPassword = _hx_tmp;
            	}

Dynamic Crypt_obj::__CreateEmpty() { return new Crypt_obj; }

void *Crypt_obj::_hx_vtable = 0;

Dynamic Crypt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Crypt_obj > _hx_result = new Crypt_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Crypt_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x40993c77;
}

::Array< ::Dynamic> Crypt_obj::decrypt(::Array< ::Dynamic> data){
            	HX_GC_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_50_decrypt)
HXLINE(  51)		 ::haxe::ds::IntMap objects =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  52)		 ::format::pdf::Data encrypt = null();
HXDLIN(  52)		 ::format::pdf::Data fileId = null();
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			while((_g < data->length)){
HXLINE(  53)				 ::format::pdf::Data d = data->__get(_g).StaticCast<  ::format::pdf::Data >();
HXDLIN(  53)				_g = (_g + 1);
HXLINE(  54)				switch((int)(d->_hx_getIndex())){
            					case (int)8: {
HXLINE(  55)						int _g = d->_hx_getInt(1);
HXDLIN(  55)						{
HXLINE(  55)							int id = d->_hx_getInt(0);
HXDLIN(  55)							 ::format::pdf::Data v = d->_hx_getObject(2).StaticCast<  ::format::pdf::Data >();
HXDLIN(  55)							objects->set(id,v);
            						}
            					}
            					break;
            					case (int)12: {
HXLINE(  56)						 ::format::pdf::Data v = d->_hx_getObject(0).StaticCast<  ::format::pdf::Data >();
HXLINE(  57)						if ((v->_hx_getIndex() == 7)) {
HXLINE(  58)							 ::haxe::ds::StringMap h = v->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN(  58)							{
HXLINE(  59)								encrypt = h->get(HX_("Encrypt",45,a6,ec,7c));
HXLINE(  60)								fileId = h->get(HX_("ID",db,3f,00,00));
            							}
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE(  65)		if (::hx::IsNull( encrypt )) {
HXLINE(  66)			return data;
            		}
HXLINE(  67)		if (::hx::IsNotNull( encrypt )) {
HXLINE(  67)			if ((encrypt->_hx_getIndex() == 10)) {
HXLINE(  68)				int _g = encrypt->_hx_getInt(1);
HXDLIN(  68)				{
HXLINE(  68)					int id = encrypt->_hx_getInt(0);
HXLINE(  69)					encrypt = objects->get(id);
            				}
            			}
            		}
HXLINE(  72)		if (::hx::IsNull( encrypt )) {
HXLINE(  78)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid encrypt ",84,a4,61,06) + ::Std_obj::string(encrypt))));
            		}
            		else {
HXLINE(  72)			if ((encrypt->_hx_getIndex() == 7)) {
HXLINE(  73)				 ::haxe::ds::StringMap h = encrypt->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN(  73)				{
HXLINE(  74)					if (!(__hxcpp_enum_eq(h->get(HX_("Filter",d8,93,c9,b9)),::format::pdf::Data_obj::DName(HX_("Standard",5d,f3,29,c4))))) {
HXLINE(  75)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown encrypt ",91,31,48,de) + ::Std_obj::string(encrypt))));
            					}
HXLINE(  76)					this->fileKey = this->buildFileKey(fileId,h);
            				}
            			}
            			else {
HXLINE(  78)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid encrypt ",84,a4,61,06) + ::Std_obj::string(encrypt))));
            			}
            		}
HXLINE(  80)		::Array< ::Dynamic> d = ::Array_obj< ::Dynamic>::__new();
HXLINE(  81)		{
HXLINE(  81)			int _g1 = 0;
HXDLIN(  81)			while((_g1 < data->length)){
HXLINE(  81)				 ::format::pdf::Data o = data->__get(_g1).StaticCast<  ::format::pdf::Data >();
HXDLIN(  81)				_g1 = (_g1 + 1);
HXLINE(  82)				d->push(this->decryptObject(this->fileKey,o));
            			}
            		}
HXLINE(  83)		return d;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Crypt_obj,decrypt,return )

 ::format::pdf::Data Crypt_obj::decryptObject( ::haxe::io::Bytes key, ::format::pdf::Data o){
            	HX_GC_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_87_decryptObject)
HXDLIN(  87)		switch((int)(o->_hx_getIndex())){
            			case (int)0: {
HXLINE(  89)				return o;
            			}
            			break;
            			case (int)1: {
HXLINE(  88)				bool _g = o->_hx_getBool(0);
HXLINE(  89)				return o;
            			}
            			break;
            			case (int)2: {
HXLINE(  88)				Float _g = o->_hx_getFloat(0);
HXLINE(  89)				return o;
            			}
            			break;
            			case (int)3: {
HXLINE(  90)				::String s = o->_hx_getString(0);
HXLINE(  91)				return ::format::pdf::Data_obj::DString(this->decryptString(s,key));
            			}
            			break;
            			case (int)4: {
HXLINE(  92)				::String s = o->_hx_getString(0);
HXLINE(  93)				return ::format::pdf::Data_obj::DHexString(this->decryptString(s,key));
            			}
            			break;
            			case (int)5: {
HXLINE(  88)				::String _g = o->_hx_getString(0);
HXLINE(  89)				return o;
            			}
            			break;
            			case (int)6: {
HXLINE(  94)				::Array< ::Dynamic> a = o->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  95)				::Array< ::Dynamic> a2 = ::Array_obj< ::Dynamic>::__new();
HXLINE(  96)				{
HXLINE(  96)					int _g = 0;
HXDLIN(  96)					while((_g < a->length)){
HXLINE(  96)						 ::format::pdf::Data o = a->__get(_g).StaticCast<  ::format::pdf::Data >();
HXDLIN(  96)						_g = (_g + 1);
HXLINE(  97)						a2->push(this->decryptObject(key,o));
            					}
            				}
HXLINE(  98)				return ::format::pdf::Data_obj::DArray(a2);
            			}
            			break;
            			case (int)7: {
HXLINE(  99)				 ::haxe::ds::StringMap h = o->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 100)				 ::haxe::ds::StringMap h2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 101)				{
HXLINE( 101)					 ::Dynamic k = h->keys();
HXDLIN( 101)					while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 101)						::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 102)						h2->set(k1,this->decryptObject(key,h->get(k1)));
            					}
            				}
HXLINE( 103)				return ::format::pdf::Data_obj::DDict(h2);
            			}
            			break;
            			case (int)8: {
HXLINE( 104)				int id = o->_hx_getInt(0);
HXDLIN( 104)				int rev = o->_hx_getInt(1);
HXDLIN( 104)				 ::format::pdf::Data v = o->_hx_getObject(2).StaticCast<  ::format::pdf::Data >();
HXLINE( 105)				 ::haxe::io::Bytes objKey = this->buildObjectKey(id,rev);
HXLINE( 106)				return ::format::pdf::Data_obj::DIndirect(id,rev,this->decryptObject(objKey,v));
            			}
            			break;
            			case (int)9: {
HXLINE( 107)				 ::haxe::io::Bytes b = o->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN( 107)				 ::haxe::ds::StringMap h = o->_hx_getObject(1).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 108)				 ::haxe::ds::StringMap h2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 109)				{
HXLINE( 109)					 ::Dynamic k = h->keys();
HXDLIN( 109)					while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 109)						::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 110)						h2->set(k1,this->decryptObject(key,h->get(k1)));
            					}
            				}
HXLINE( 111)				return ::format::pdf::Data_obj::DStream(this->decryptBytes(b,key),h2);
            			}
            			break;
            			case (int)10: {
HXLINE(  88)				int _g = o->_hx_getInt(0);
HXDLIN(  88)				int _g1 = o->_hx_getInt(1);
HXLINE(  89)				return o;
            			}
            			break;
            			case (int)11: {
HXLINE(  88)				::Array< ::Dynamic> _g = o->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  89)				return o;
            			}
            			break;
            			case (int)12: {
HXLINE(  88)				 ::format::pdf::Data _g = o->_hx_getObject(0).StaticCast<  ::format::pdf::Data >();
HXLINE(  89)				return o;
            			}
            			break;
            			case (int)13: {
HXLINE(  88)				int _g = o->_hx_getInt(0);
HXLINE(  89)				return o;
            			}
            			break;
            			case (int)14: {
HXLINE(  88)				::String _g = o->_hx_getString(0);
HXLINE(  89)				return o;
            			}
            			break;
            		}
HXLINE(  87)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Crypt_obj,decryptObject,return )

::String Crypt_obj::decryptString(::String s, ::haxe::io::Bytes k){
            	HX_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_116_decryptString)
HXDLIN( 116)		return this->decryptBytes(::haxe::io::Bytes_obj::ofString(s,null()),k)->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Crypt_obj,decryptString,return )

 ::haxe::io::Bytes Crypt_obj::decryptBytes( ::haxe::io::Bytes b, ::haxe::io::Bytes k){
            	HX_GC_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_119_decryptBytes)
HXLINE( 120)		 ::format::tools::ArcFour a =  ::format::tools::ArcFour_obj::__alloc( HX_CTX ,k);
HXLINE( 121)		 ::haxe::io::Bytes b2 = ::haxe::io::Bytes_obj::alloc(b->length);
HXLINE( 122)		a->run(b,0,b->length,b2,0);
HXLINE( 123)		return b2;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Crypt_obj,decryptBytes,return )

 ::haxe::io::Bytes Crypt_obj::buildFileKey( ::format::pdf::Data fileId, ::haxe::ds::StringMap h){
            	HX_GC_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_126_buildFileKey)
HXLINE( 127)		this->version = ::format::pdf::Extract_obj::_hx_int(h->get(HX_("V",56,00,00,00)));
HXLINE( 128)		this->revision = ::format::pdf::Extract_obj::_hx_int(h->get(HX_("R",52,00,00,00)));
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		if ((this->version == 2)) {
HXLINE( 129)			if ((this->revision != 3)) {
HXLINE( 129)				_hx_tmp = (this->revision != 4);
            			}
            			else {
HXLINE( 129)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 129)			_hx_tmp = true;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 130)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Unknown encrypt version ",99,f8,d5,ec) + this->version) + HX_(".",2e,00,00,00)) + this->revision)));
            		}
HXLINE( 132)		 ::haxe::io::BytesOutput key =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 133)		if ((this->userPassword.length >= 32)) {
HXLINE( 134)			key->writeString(this->userPassword.substr(0,32),null());
            		}
            		else {
HXLINE( 136)			key->writeString(this->userPassword,null());
HXLINE( 137)			key->writeFullBytes(::format::pdf::Crypt_obj::PAD_BYTES,0,(32 - this->userPassword.length));
            		}
HXLINE( 139)		::String ohash = ::format::pdf::Extract_obj::string(h->get(HX_("O",4f,00,00,00)));
HXLINE( 140)		key->writeString(ohash,null());
HXLINE( 141)		int perms = ::format::pdf::Extract_obj::_hx_int(h->get(HX_("P",50,00,00,00)));
HXLINE( 143)		key->writeInt32(perms);
HXLINE( 147)		if ((fileId->_hx_getIndex() == 6)) {
HXLINE( 148)			::Array< ::Dynamic> a = fileId->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 148)			key->writeString(::format::pdf::Extract_obj::string(a->__get(0).StaticCast<  ::format::pdf::Data >()),null());
            		}
            		else {
HXLINE( 149)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid ID ",1c,2e,c7,76) + ::Std_obj::string(fileId))));
            		}
HXLINE( 151)		 ::Dynamic encryptMetada = ::format::pdf::Extract_obj::_hx_bool(h->get(HX_("EncryptMetaData",f4,c2,b8,b2)),true);
HXLINE( 152)		bool _hx_tmp1;
HXDLIN( 152)		if ((this->revision >= 4)) {
HXLINE( 152)			_hx_tmp1 = !(( (bool)(encryptMetada) ));
            		}
            		else {
HXLINE( 152)			_hx_tmp1 = false;
            		}
HXDLIN( 152)		if (_hx_tmp1) {
HXLINE( 153)			key->writeUInt16(65535);
HXLINE( 154)			key->writeUInt16(65535);
            		}
HXLINE( 156)		 ::haxe::io::Bytes key1 = ::format::tools::MD5_obj::make(key->getBytes());
HXLINE( 158)		int klength = ::format::pdf::Extract_obj::_hx_int(h->get(HX_("Length",06,09,9c,d3)));
HXLINE( 159)		if ((::hx::Mod(klength,8) != 0)) {
HXLINE( 159)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid key length ",30,d6,06,74) + klength)));
            		}
HXLINE( 160)		klength = (klength >> 3);
HXLINE( 161)		{
HXLINE( 161)			int _g = 0;
HXDLIN( 161)			while((_g < 50)){
HXLINE( 161)				_g = (_g + 1);
HXDLIN( 161)				int i = (_g - 1);
HXLINE( 162)				key1 = ::format::tools::MD5_obj::make(key1->sub(0,klength));
            			}
            		}
HXLINE( 163)		key1 = key1->sub(0,klength);
HXLINE( 164)		return key1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Crypt_obj,buildFileKey,return )

 ::haxe::io::Bytes Crypt_obj::buildObjectKey(int id,int rev){
            	HX_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_167_buildObjectKey)
HXLINE( 168)		int k = this->fileKey->length;
HXLINE( 169)		 ::haxe::io::Bytes total = ::haxe::io::Bytes_obj::alloc((k + 5));
HXLINE( 170)		total->blit(0,this->fileKey,0,k);
HXLINE( 171)		{
HXLINE( 171)			k = (k + 1);
HXDLIN( 171)			total->b[(k - 1)] = ( (unsigned char)((id & 255)) );
            		}
HXLINE( 172)		{
HXLINE( 172)			k = (k + 1);
HXDLIN( 172)			total->b[(k - 1)] = ( (unsigned char)(((id >> 8) & 255)) );
            		}
HXLINE( 173)		{
HXLINE( 173)			k = (k + 1);
HXDLIN( 173)			total->b[(k - 1)] = ( (unsigned char)(((id >> 16) & 255)) );
            		}
HXLINE( 174)		{
HXLINE( 174)			k = (k + 1);
HXDLIN( 174)			total->b[(k - 1)] = ( (unsigned char)((rev & 255)) );
            		}
HXLINE( 175)		{
HXLINE( 175)			k = (k + 1);
HXDLIN( 175)			total->b[(k - 1)] = ( (unsigned char)(((rev >> 8) & 255)) );
            		}
HXLINE( 176)		int tot = (this->fileKey->length + 5);
HXLINE( 177)		if ((tot > 16)) {
HXLINE( 177)			tot = 16;
            		}
HXLINE( 178)		return ::format::tools::MD5_obj::make(total)->sub(0,tot);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Crypt_obj,buildObjectKey,return )

 ::haxe::io::Bytes Crypt_obj::PAD_BYTES;

 ::haxe::io::Bytes Crypt_obj::initPadBytes(){
            	HX_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_33_initPadBytes)
HXLINE(  34)		::Array< int > data = ::Array_obj< int >::fromData( _hx_array_data_acfbb5db_15,32);
HXLINE(  35)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(data->length);
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			int _g1 = data->length;
HXDLIN(  36)			while((_g < _g1)){
HXLINE(  36)				_g = (_g + 1);
HXDLIN(  36)				int i = (_g - 1);
HXLINE(  37)				b->b[i] = ( (unsigned char)(data->__get(i)) );
            			}
            		}
HXLINE(  38)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Crypt_obj,initPadBytes,return )


::hx::ObjectPtr< Crypt_obj > Crypt_obj::__new(::String pass) {
	::hx::ObjectPtr< Crypt_obj > __this = new Crypt_obj();
	__this->__construct(pass);
	return __this;
}

::hx::ObjectPtr< Crypt_obj > Crypt_obj::__alloc(::hx::Ctx *_hx_ctx,::String pass) {
	Crypt_obj *__this = (Crypt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Crypt_obj), true, "format.pdf.Crypt"));
	*(void **)__this = Crypt_obj::_hx_vtable;
	__this->__construct(pass);
	return __this;
}

Crypt_obj::Crypt_obj()
{
}

void Crypt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Crypt);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(revision,"revision");
	HX_MARK_MEMBER_NAME(fileKey,"fileKey");
	HX_MARK_MEMBER_NAME(userPassword,"userPassword");
	HX_MARK_END_CLASS();
}

void Crypt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(revision,"revision");
	HX_VISIT_MEMBER_NAME(fileKey,"fileKey");
	HX_VISIT_MEMBER_NAME(userPassword,"userPassword");
}

::hx::Val Crypt_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"fileKey") ) { return ::hx::Val( fileKey ); }
		if (HX_FIELD_EQ(inName,"decrypt") ) { return ::hx::Val( decrypt_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"revision") ) { return ::hx::Val( revision ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"userPassword") ) { return ::hx::Val( userPassword ); }
		if (HX_FIELD_EQ(inName,"decryptBytes") ) { return ::hx::Val( decryptBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildFileKey") ) { return ::hx::Val( buildFileKey_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decryptObject") ) { return ::hx::Val( decryptObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"decryptString") ) { return ::hx::Val( decryptString_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buildObjectKey") ) { return ::hx::Val( buildObjectKey_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Crypt_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"PAD_BYTES") ) { outValue = ( PAD_BYTES ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initPadBytes") ) { outValue = initPadBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val Crypt_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileKey") ) { fileKey=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"revision") ) { revision=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"userPassword") ) { userPassword=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Crypt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"PAD_BYTES") ) { PAD_BYTES=ioValue.Cast<  ::haxe::io::Bytes >(); return true; }
	}
	return false;
}

void Crypt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("revision",db,bf,f1,cf));
	outFields->push(HX_("fileKey",83,a8,48,ff));
	outFields->push(HX_("userPassword",86,34,cb,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Crypt_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Crypt_obj,version),HX_("version",18,e7,f1,7c)},
	{::hx::fsInt,(int)offsetof(Crypt_obj,revision),HX_("revision",db,bf,f1,cf)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Crypt_obj,fileKey),HX_("fileKey",83,a8,48,ff)},
	{::hx::fsString,(int)offsetof(Crypt_obj,userPassword),HX_("userPassword",86,34,cb,df)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Crypt_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(void *) &Crypt_obj::PAD_BYTES,HX_("PAD_BYTES",ff,dc,60,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Crypt_obj_sMemberFields[] = {
	HX_("version",18,e7,f1,7c),
	HX_("revision",db,bf,f1,cf),
	HX_("fileKey",83,a8,48,ff),
	HX_("userPassword",86,34,cb,df),
	HX_("decrypt",4d,c8,cf,ec),
	HX_("decryptObject",ec,72,9e,82),
	HX_("decryptString",fe,1c,8f,7e),
	HX_("decryptBytes",de,78,3b,bf),
	HX_("buildFileKey",f5,d6,a0,11),
	HX_("buildObjectKey",12,73,12,bf),
	::String(null()) };

static void Crypt_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Crypt_obj::PAD_BYTES,"PAD_BYTES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Crypt_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Crypt_obj::PAD_BYTES,"PAD_BYTES");
};

#endif

::hx::Class Crypt_obj::__mClass;

static ::String Crypt_obj_sStaticFields[] = {
	HX_("PAD_BYTES",ff,dc,60,b4),
	HX_("initPadBytes",48,01,e0,b8),
	::String(null())
};

void Crypt_obj::__register()
{
	Crypt_obj _hx_dummy;
	Crypt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.pdf.Crypt",db,b5,fb,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Crypt_obj::__GetStatic;
	__mClass->mSetStaticField = &Crypt_obj::__SetStatic;
	__mClass->mMarkFunc = Crypt_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Crypt_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Crypt_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Crypt_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Crypt_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Crypt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Crypt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Crypt_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_295ac7ed2e99bcba_32_boot)
HXDLIN(  32)		PAD_BYTES = ::format::pdf::Crypt_obj::initPadBytes();
            	}
}

} // end namespace format
} // end namespace pdf
