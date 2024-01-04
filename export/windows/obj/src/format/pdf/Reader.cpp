#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_format_pdf_Data
#include <format/pdf/Data.h>
#endif
#ifndef INCLUDED_format_pdf_Extract
#include <format/pdf/Extract.h>
#endif
#ifndef INCLUDED_format_pdf_Reader
#include <format/pdf/Reader.h>
#endif
#ifndef INCLUDED_format_pdf__Reader_Break
#include <format/pdf/_Reader/Break.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3839500d72196a9c_44_new,"format.pdf.Reader","new",0x8f09f628,"format.pdf.Reader.new","format/pdf/Reader.hx",44,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_47_readEOL,"format.pdf.Reader","readEOL",0x201738d4,"format.pdf.Reader.readEOL","format/pdf/Reader.hx",47,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_58_invalidChar,"format.pdf.Reader","invalidChar",0x8f4bdb35,"format.pdf.Reader.invalidChar","format/pdf/Reader.hx",58,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_62_invalidBreak,"format.pdf.Reader","invalidBreak",0x464c7b80,"format.pdf.Reader.invalidBreak","format/pdf/Reader.hx",62,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_65_readObjectEof,"format.pdf.Reader","readObjectEof",0xf86068cf,"format.pdf.Reader.readObjectEof","format/pdf/Reader.hx",65,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_82_readObject,"format.pdf.Reader","readObject",0x5cad05ed,"format.pdf.Reader.readObject","format/pdf/Reader.hx",82,0xd3f7d186)
static const ::String _hx_array_data_22820236_16[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_22820236_17[] = {
	HX_("\r",0d,00,00,00),
};
static const ::String _hx_array_data_22820236_18[] = {
	HX_("\t",09,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_160_readObject,"format.pdf.Reader","readObject",0x5cad05ed,"format.pdf.Reader.readObject","format/pdf/Reader.hx",160,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_275_readDictionnary,"format.pdf.Reader","readDictionnary",0x02361bde,"format.pdf.Reader.readDictionnary","format/pdf/Reader.hx",275,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_301_readIndirect,"format.pdf.Reader","readIndirect",0x33944f7c,"format.pdf.Reader.readIndirect","format/pdf/Reader.hx",301,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_319_readStream,"format.pdf.Reader","readStream",0x589a9bae,"format.pdf.Reader.readStream","format/pdf/Reader.hx",319,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_375_readXRefTable,"format.pdf.Reader","readXRefTable",0xb6aa3fe5,"format.pdf.Reader.readXRefTable","format/pdf/Reader.hx",375,0xd3f7d186)
HX_LOCAL_STACK_FRAME(_hx_pos_3839500d72196a9c_404_read,"format.pdf.Reader","read",0x9c52348e,"format.pdf.Reader.read","format/pdf/Reader.hx",404,0xd3f7d186)
namespace format{
namespace pdf{

void Reader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3839500d72196a9c_44_new)
            	}

Dynamic Reader_obj::__CreateEmpty() { return new Reader_obj; }

void *Reader_obj::_hx_vtable = 0;

Dynamic Reader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reader_obj > _hx_result = new Reader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a2536fe;
}

void Reader_obj::readEOL( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_3839500d72196a9c_47_readEOL)
HXLINE(  48)		int c = i->readByte();
HXLINE(  49)		if ((c == 13)) {
HXLINE(  50)			c = i->readByte();
            		}
HXLINE(  51)		if ((c != 10)) {
HXLINE(  52)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid eol ",07,07,24,8a) + c)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readEOL,(void))

 ::Dynamic Reader_obj::invalidChar(int c){
            	HX_STACKFRAME(&_hx_pos_3839500d72196a9c_58_invalidChar)
HXDLIN(  58)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid char ",81,66,ec,29) + c)));
HXDLIN(  58)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,invalidChar,return )

 ::Dynamic Reader_obj::invalidBreak( ::format::pdf::_Reader::Break e){
            	HX_STACKFRAME(&_hx_pos_3839500d72196a9c_62_invalidBreak)
HXDLIN(  62)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid break ",aa,f0,2b,e3) + ::Std_obj::string(e))));
HXDLIN(  62)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,invalidBreak,return )

 ::format::pdf::Data Reader_obj::readObjectEof( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_3839500d72196a9c_65_readObjectEof)
HXLINE(  66)		if (::hx::IsNull( this->_hx_char )) {
HXLINE(  67)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  68)				this->_hx_char = i->readByte();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  69)					{
HXLINE(  69)						null();
            					}
HXLINE(  67)					if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE(  70)						return null();
            					}
            					else {
HXLINE(  67)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE(  73)		{
HXLINE(  73)			 ::Dynamic _g = this->_hx_char;
HXDLIN(  73)			if (::hx::IsNotNull( _g )) {
HXLINE(  73)				 ::Dynamic _hx_switch_0 = _g;
            				if (  (_hx_switch_0==0) ||  (_hx_switch_0==9) ||  (_hx_switch_0==10) ||  (_hx_switch_0==12) ||  (_hx_switch_0==13) ||  (_hx_switch_0==32) ){
HXLINE(  75)					this->_hx_char = null();
HXLINE(  76)					return this->readObjectEof(i);
HXLINE(  74)					goto _hx_goto_4;
            				}
            				/* default */{
            				}
            				_hx_goto_4:;
            			}
            		}
HXLINE(  79)		return this->readObject(i);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readObjectEof,return )

 ::format::pdf::Data Reader_obj::readObject( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_3839500d72196a9c_82_readObject)
HXLINE(  83)		int c;
HXLINE(  84)		if (::hx::IsNull( this->_hx_char )) {
HXLINE(  85)			c = i->readByte();
            		}
            		else {
HXLINE(  87)			c = ( (int)(this->_hx_char) );
HXLINE(  88)			this->_hx_char = null();
            		}
HXLINE(  90)		switch((int)(c)){
            			case (int)0: case (int)9: case (int)10: case (int)12: case (int)13: case (int)32: {
HXLINE( 112)				return this->readObject(i);
            			}
            			break;
            			case (int)37: {
HXLINE(  92)				return ::format::pdf::Data_obj::DComment(i->readLine());
            			}
            			break;
            			case (int)40: {
HXLINE( 196)				int count = 1;
HXLINE( 197)				 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 198)				bool esc = false;
HXLINE( 199)				while(true){
HXLINE( 200)					c = i->readByte();
HXLINE( 201)					if (esc) {
HXLINE( 202)						esc = false;
HXLINE( 203)						switch((int)(c)){
            							case (int)10: case (int)13: {
            							}
            							break;
            							case (int)40: case (int)41: case (int)92: {
HXLINE( 215)								if ((c >= 127)) {
HXLINE( 215)									::String x = ::String::fromCharCode(c);
HXDLIN( 215)									if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 215)										buf->flush();
            									}
HXDLIN( 215)									if (::hx::IsNull( buf->b )) {
HXLINE( 215)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 215)										::Array< ::String > buf1 = buf->b;
HXDLIN( 215)										buf1->push(::Std_obj::string(x));
            									}
            								}
            								else {
HXLINE( 215)									if (::hx::IsNull( buf->charBuf )) {
HXLINE( 215)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 215)									buf->charBuf->push(c);
            								}
            							}
            							break;
            							case (int)98: {
HXLINE( 211)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 211)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 211)								buf->charBuf->push(8);
            							}
            							break;
            							case (int)102: {
HXLINE( 213)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 213)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 213)								buf->charBuf->push(12);
            							}
            							break;
            							case (int)110: {
HXLINE( 205)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 205)									buf->flush();
            								}
HXDLIN( 205)								if (::hx::IsNull( buf->b )) {
HXLINE( 205)									buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_22820236_16,1);
            								}
            								else {
HXLINE( 205)									buf->b->push(HX_("\n",0a,00,00,00));
            								}
            							}
            							break;
            							case (int)114: {
HXLINE( 207)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 207)									buf->flush();
            								}
HXDLIN( 207)								if (::hx::IsNull( buf->b )) {
HXLINE( 207)									buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_22820236_17,1);
            								}
            								else {
HXLINE( 207)									buf->b->push(HX_("\r",0d,00,00,00));
            								}
            							}
            							break;
            							case (int)116: {
HXLINE( 209)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 209)									buf->flush();
            								}
HXDLIN( 209)								if (::hx::IsNull( buf->b )) {
HXLINE( 209)									buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_22820236_18,1);
            								}
            								else {
HXLINE( 209)									buf->b->push(HX_("\t",09,00,00,00));
            								}
            							}
            							break;
            							default:{
HXLINE( 219)								if ((c >= 127)) {
HXLINE( 219)									::String x = ::String::fromCharCode(c);
HXDLIN( 219)									if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 219)										buf->flush();
            									}
HXDLIN( 219)									if (::hx::IsNull( buf->b )) {
HXLINE( 219)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 219)										::Array< ::String > buf1 = buf->b;
HXDLIN( 219)										buf1->push(::Std_obj::string(x));
            									}
            								}
            								else {
HXLINE( 219)									if (::hx::IsNull( buf->charBuf )) {
HXLINE( 219)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 219)									buf->charBuf->push(c);
            								}
            							}
            						}
            					}
            					else {
HXLINE( 222)						switch((int)(c)){
            							case (int)40: {
HXLINE( 224)								count = (count + 1);
HXLINE( 225)								if ((c >= 127)) {
HXLINE( 225)									::String x = ::String::fromCharCode(c);
HXDLIN( 225)									if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 225)										buf->flush();
            									}
HXDLIN( 225)									if (::hx::IsNull( buf->b )) {
HXLINE( 225)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 225)										::Array< ::String > buf1 = buf->b;
HXDLIN( 225)										buf1->push(::Std_obj::string(x));
            									}
            								}
            								else {
HXLINE( 225)									if (::hx::IsNull( buf->charBuf )) {
HXLINE( 225)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 225)									buf->charBuf->push(c);
            								}
            							}
            							break;
            							case (int)41: {
HXLINE( 227)								count = (count - 1);
HXLINE( 228)								if ((count == 0)) {
HXLINE( 228)									goto _hx_goto_6;
            								}
HXLINE( 229)								if ((c >= 127)) {
HXLINE( 229)									::String x = ::String::fromCharCode(c);
HXDLIN( 229)									if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 229)										buf->flush();
            									}
HXDLIN( 229)									if (::hx::IsNull( buf->b )) {
HXLINE( 229)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 229)										::Array< ::String > buf1 = buf->b;
HXDLIN( 229)										buf1->push(::Std_obj::string(x));
            									}
            								}
            								else {
HXLINE( 229)									if (::hx::IsNull( buf->charBuf )) {
HXLINE( 229)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 229)									buf->charBuf->push(c);
            								}
            							}
            							break;
            							case (int)92: {
HXLINE( 231)								esc = true;
            							}
            							break;
            							default:{
HXLINE( 233)								if ((c >= 127)) {
HXLINE( 233)									::String x = ::String::fromCharCode(c);
HXDLIN( 233)									if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 233)										buf->flush();
            									}
HXDLIN( 233)									if (::hx::IsNull( buf->b )) {
HXLINE( 233)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 233)										::Array< ::String > buf1 = buf->b;
HXDLIN( 233)										buf1->push(::Std_obj::string(x));
            									}
            								}
            								else {
HXLINE( 233)									if (::hx::IsNull( buf->charBuf )) {
HXLINE( 233)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 233)									buf->charBuf->push(c);
            								}
            							}
            						}
            					}
            				}
            				_hx_goto_6:;
HXLINE( 236)				return ::format::pdf::Data_obj::DString(buf->toString());
            			}
            			break;
            			case (int)47: {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				::String _hx_run( ::EReg r){
            					HX_GC_STACKFRAME(&_hx_pos_3839500d72196a9c_160_readObject)
HXLINE( 160)					return ::String::fromCharCode(( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + r->matched(1)))) ));
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 144)				 ::StringBuf s =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 145)				while(true){
HXLINE( 146)					c = i->readByte();
HXLINE( 147)					switch((int)(c)){
            						case (int)0: case (int)9: case (int)10: case (int)12: case (int)13: case (int)32: {
HXLINE( 149)							goto _hx_goto_7;
            						}
            						break;
            						case (int)37: case (int)40: case (int)41: case (int)47: case (int)60: case (int)62: case (int)91: case (int)93: case (int)123: case (int)125: {
HXLINE( 151)							this->_hx_char = c;
HXLINE( 152)							goto _hx_goto_7;
            						}
            						break;
            						default:{
HXLINE( 154)							if ((c >= 127)) {
HXLINE( 154)								::String x = ::String::fromCharCode(c);
HXDLIN( 154)								if (::hx::IsNotNull( s->charBuf )) {
HXLINE( 154)									s->flush();
            								}
HXDLIN( 154)								if (::hx::IsNull( s->b )) {
HXLINE( 154)									s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 154)									::Array< ::String > s1 = s->b;
HXDLIN( 154)									s1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 154)								if (::hx::IsNull( s->charBuf )) {
HXLINE( 154)									s->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 154)								s->charBuf->push(c);
            							}
            						}
            					}
            				}
            				_hx_goto_7:;
HXLINE( 157)				::String s1 = s->toString();
HXLINE( 160)				s1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("#([0-9A-Fa-f][0-9a-fA-F])",24,48,2c,8e),HX_("g",67,00,00,00))->map(s1, ::Dynamic(new _hx_Closure_0()));
HXLINE( 164)				return ::format::pdf::Data_obj::DName(s1);
            			}
            			break;
            			case (int)43: case (int)45: case (int)46: case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(  94)				 ::StringBuf s =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  95)				if ((c != 43)) {
HXLINE(  95)					if ((c >= 127)) {
HXLINE(  95)						::String x = ::String::fromCharCode(c);
HXDLIN(  95)						if (::hx::IsNotNull( s->charBuf )) {
HXLINE(  95)							s->flush();
            						}
HXDLIN(  95)						if (::hx::IsNull( s->b )) {
HXLINE(  95)							s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE(  95)							::Array< ::String > s1 = s->b;
HXDLIN(  95)							s1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE(  95)						if (::hx::IsNull( s->charBuf )) {
HXLINE(  95)							s->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(  95)						s->charBuf->push(c);
            					}
            				}
HXLINE(  96)				while(true){
HXLINE(  97)					c = i->readByte();
HXLINE(  98)					switch((int)(c)){
            						case (int)0: case (int)9: case (int)10: case (int)12: case (int)13: case (int)32: {
HXLINE( 102)							goto _hx_goto_8;
            						}
            						break;
            						case (int)37: case (int)40: case (int)41: case (int)47: case (int)60: case (int)62: case (int)91: case (int)93: case (int)123: case (int)125: {
HXLINE( 104)							this->_hx_char = c;
HXLINE( 105)							goto _hx_goto_8;
            						}
            						break;
            						case (int)46: case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 100)							if ((c >= 127)) {
HXLINE( 100)								::String x = ::String::fromCharCode(c);
HXDLIN( 100)								if (::hx::IsNotNull( s->charBuf )) {
HXLINE( 100)									s->flush();
            								}
HXDLIN( 100)								if (::hx::IsNull( s->b )) {
HXLINE( 100)									s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 100)									::Array< ::String > s1 = s->b;
HXDLIN( 100)									s1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 100)								if (::hx::IsNull( s->charBuf )) {
HXLINE( 100)									s->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 100)								s->charBuf->push(c);
            							}
            						}
            						break;
            						default:{
HXLINE( 107)							this->invalidChar(c);
            						}
            					}
            				}
            				_hx_goto_8:;
HXLINE( 110)				return ::format::pdf::Data_obj::DNumber(::Std_obj::parseFloat(s->toString()));
            			}
            			break;
            			case (int)60: {
HXLINE( 114)				c = i->readByte();
HXLINE( 115)				if ((c == 60)) {
HXLINE( 116)					return this->readDictionnary(i);
            				}
HXLINE( 117)				int code = -1;
HXLINE( 118)				 ::StringBuf s =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 119)				while(true){
HXLINE( 120)					switch((int)(c)){
            						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 122)							c = (c - 48);
            						}
            						break;
            						case (int)62: {
HXLINE( 128)							goto _hx_goto_9;
            						}
            						break;
            						case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE( 124)							c = (c - 55);
            						}
            						break;
            						case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE( 126)							c = (c - 87);
            						}
            						break;
            						default:{
HXLINE( 130)							this->invalidChar(c);
            						}
            					}
HXLINE( 132)					if ((code == -1)) {
HXLINE( 133)						code = c;
            					}
            					else {
HXLINE( 135)						{
HXLINE( 135)							int c1 = ((code << 4) | c);
HXDLIN( 135)							if ((c1 >= 127)) {
HXLINE( 135)								::String x = ::String::fromCharCode(c1);
HXDLIN( 135)								if (::hx::IsNotNull( s->charBuf )) {
HXLINE( 135)									s->flush();
            								}
HXDLIN( 135)								if (::hx::IsNull( s->b )) {
HXLINE( 135)									s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 135)									::Array< ::String > s1 = s->b;
HXDLIN( 135)									s1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 135)								if (::hx::IsNull( s->charBuf )) {
HXLINE( 135)									s->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 135)								s->charBuf->push(c1);
            							}
            						}
HXLINE( 136)						code = -1;
            					}
HXLINE( 138)					c = i->readByte();
            				}
            				_hx_goto_9:;
HXLINE( 140)				if ((code != -1)) {
HXLINE( 141)					int c = (code << 4);
HXDLIN( 141)					if ((c >= 127)) {
HXLINE( 141)						::String x = ::String::fromCharCode(c);
HXDLIN( 141)						if (::hx::IsNotNull( s->charBuf )) {
HXLINE( 141)							s->flush();
            						}
HXDLIN( 141)						if (::hx::IsNull( s->b )) {
HXLINE( 141)							s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 141)							::Array< ::String > s1 = s->b;
HXDLIN( 141)							s1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE( 141)						if (::hx::IsNull( s->charBuf )) {
HXLINE( 141)							s->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 141)						s->charBuf->push(c);
            					}
            				}
HXLINE( 142)				return ::format::pdf::Data_obj::DHexString(s->toString());
            			}
            			break;
            			case (int)62: {
HXLINE( 166)				c = i->readByte();
HXLINE( 167)				if ((c == 62)) {
HXLINE( 168)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::format::pdf::_Reader::Break_obj::BDictEnd_dyn()));
            				}
HXLINE( 169)				this->invalidChar(c);
            			}
            			break;
            			case (int)82: {
HXLINE( 238)				int rev = ::format::pdf::Extract_obj::_hx_int(this->objects->pop().StaticCast<  ::format::pdf::Data >());
HXLINE( 239)				int id = ::format::pdf::Extract_obj::_hx_int(this->objects->pop().StaticCast<  ::format::pdf::Data >());
HXLINE( 240)				return ::format::pdf::Data_obj::DRef(id,rev);
            			}
            			break;
            			case (int)91: {
HXLINE( 171)				::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 172)				::Array< ::Dynamic> old = this->objects;
HXLINE( 173)				this->objects = a;
HXLINE( 174)				while(true){
HXLINE( 175)					if (::hx::IsNull( this->_hx_char )) {
HXLINE( 176)						this->_hx_char = i->readByte();
            					}
HXLINE( 179)					while(true){
HXLINE( 180)						{
HXLINE( 180)							 ::Dynamic _g = this->_hx_char;
HXDLIN( 180)							if (::hx::IsNull( _g )) {
HXLINE( 182)								goto _hx_goto_11;
            							}
            							else {
HXLINE( 180)								 ::Dynamic _hx_switch_0 = _g;
            								if (  (_hx_switch_0==0) ||  (_hx_switch_0==9) ||  (_hx_switch_0==10) ||  (_hx_switch_0==12) ||  (_hx_switch_0==13) ||  (_hx_switch_0==32) ){
HXLINE( 181)									goto _hx_goto_12;
            								}
            								/* default */{
HXLINE( 182)									goto _hx_goto_11;
            								}
            								_hx_goto_12:;
            							}
            						}
HXLINE( 184)						this->_hx_char = i->readByte();
            					}
            					_hx_goto_11:;
HXLINE( 187)					if (::hx::IsEq( this->_hx_char,93 )) {
HXLINE( 188)						this->_hx_char = null();
HXLINE( 189)						goto _hx_goto_10;
            					}
HXLINE( 191)					::Array< ::Dynamic> _hx_tmp = this->objects;
HXDLIN( 191)					_hx_tmp->push(this->readObject(i));
            				}
            				_hx_goto_10:;
HXLINE( 193)				this->objects = old;
HXLINE( 194)				return ::format::pdf::Data_obj::DArray(a);
            			}
            			break;
            			case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: case (int)103: case (int)104: case (int)105: case (int)106: case (int)107: case (int)108: case (int)109: case (int)110: case (int)111: case (int)112: case (int)113: case (int)114: case (int)115: case (int)116: case (int)117: case (int)118: case (int)119: case (int)120: case (int)121: case (int)122: {
HXLINE( 242)				 ::StringBuf s =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 243)				if ((c >= 127)) {
HXLINE( 243)					::String x = ::String::fromCharCode(c);
HXDLIN( 243)					if (::hx::IsNotNull( s->charBuf )) {
HXLINE( 243)						s->flush();
            					}
HXDLIN( 243)					if (::hx::IsNull( s->b )) {
HXLINE( 243)						s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 243)						::Array< ::String > s1 = s->b;
HXDLIN( 243)						s1->push(::Std_obj::string(x));
            					}
            				}
            				else {
HXLINE( 243)					if (::hx::IsNull( s->charBuf )) {
HXLINE( 243)						s->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN( 243)					s->charBuf->push(c);
            				}
HXLINE( 244)				while(true){
HXLINE( 245)					c = i->readByte();
HXLINE( 246)					switch((int)(c)){
            						case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: case (int)103: case (int)104: case (int)105: case (int)106: case (int)107: case (int)108: case (int)109: case (int)110: case (int)111: case (int)112: case (int)113: case (int)114: case (int)115: case (int)116: case (int)117: case (int)118: case (int)119: case (int)120: case (int)121: case (int)122: {
HXLINE( 248)							if ((c >= 127)) {
HXLINE( 248)								::String x = ::String::fromCharCode(c);
HXDLIN( 248)								if (::hx::IsNotNull( s->charBuf )) {
HXLINE( 248)									s->flush();
            								}
HXDLIN( 248)								if (::hx::IsNull( s->b )) {
HXLINE( 248)									s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 248)									::Array< ::String > s1 = s->b;
HXDLIN( 248)									s1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 248)								if (::hx::IsNull( s->charBuf )) {
HXLINE( 248)									s->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 248)								s->charBuf->push(c);
            							}
            						}
            						break;
            						default:{
HXLINE( 250)							this->_hx_char = c;
HXLINE( 251)							goto _hx_goto_13;
            						}
            					}
            				}
            				_hx_goto_13:;
HXLINE( 254)				::String id = s->toString();
HXLINE( 255)				::String _hx_switch_1 = id;
            				if (  (_hx_switch_1==HX_("endobj",fc,26,8d,fa)) ){
HXLINE( 260)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::format::pdf::_Reader::Break_obj::BEndObj_dyn()));
HXDLIN( 260)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_1==HX_("false",a3,35,4f,fb)) ){
HXLINE( 257)					return ::format::pdf::Data_obj::DBool(false);
HXDLIN( 257)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_1==HX_("null",87,9e,0e,49)) ){
HXLINE( 256)					return ::format::pdf::Data_obj::DNull_dyn();
HXDLIN( 256)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_1==HX_("obj",f7,8f,54,00)) ){
HXLINE( 259)					return this->readIndirect(i);
HXDLIN( 259)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_1==HX_("startxref",3d,c1,c2,1d)) ){
HXLINE( 264)					return ::format::pdf::Data_obj::DStartXRef(::format::pdf::Extract_obj::_hx_int(this->readObject(i)));
HXDLIN( 264)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_1==HX_("stream",80,14,2d,11)) ){
HXLINE( 261)					return this->readStream(i);
HXDLIN( 261)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_1==HX_("trailer",b3,e9,00,8c)) ){
HXLINE( 263)					return ::format::pdf::Data_obj::DTrailer(this->readObject(i));
HXDLIN( 263)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_1==HX_("true",4e,a7,03,4d)) ){
HXLINE( 258)					return ::format::pdf::Data_obj::DBool(true);
HXDLIN( 258)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_1==HX_("xref",db,73,a8,4f)) ){
HXLINE( 262)					return this->readXRefTable(i);
HXDLIN( 262)					goto _hx_goto_14;
            				}
            				/* default */{
HXLINE( 265)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown id ",2f,20,3e,30) + id)));
            				}
            				_hx_goto_14:;
            			}
            			break;
            			default:{
HXLINE( 269)				this->invalidChar(c);
            			}
            		}
HXLINE( 271)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Assert",e6,ba,97,80)));
HXDLIN( 271)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readObject,return )

 ::format::pdf::Data Reader_obj::readDictionnary( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_3839500d72196a9c_275_readDictionnary)
HXLINE( 276)		::Array< ::Dynamic> old = this->objects;
HXLINE( 277)		this->objects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 278)		while(true){
HXLINE( 279)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 280)				::Array< ::Dynamic> _hx_tmp = this->objects;
HXDLIN( 280)				_hx_tmp->push(this->readObject(i));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 281)					{
HXLINE( 281)						null();
            					}
HXDLIN( 281)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 279)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::format::pdf::_Reader::Break >())) {
HXLINE( 281)						 ::format::pdf::_Reader::Break e = _g1;
HXLINE( 282)						if (::hx::IsPointerEq( e,::format::pdf::_Reader::Break_obj::BDictEnd_dyn() )) {
HXLINE( 282)							goto _hx_goto_20;
            						}
            						else {
HXLINE( 282)							this->invalidBreak(e);
            						}
            					}
            					else {
HXLINE( 279)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_20:;
HXLINE( 285)		::Array< ::Dynamic> values = this->objects;
HXLINE( 286)		this->objects = old;
HXLINE( 287)		 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 288)		while((values->length > 0)){
HXLINE( 289)			 ::format::pdf::Data obj = values->shift().StaticCast<  ::format::pdf::Data >();
HXLINE( 290)			if (::hx::IsNull( obj )) {
HXLINE( 295)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid object key ",d9,3b,86,e7) + ::Std_obj::string(obj))));
            			}
            			else {
HXLINE( 290)				if ((obj->_hx_getIndex() == 5)) {
HXLINE( 291)					::String key = obj->_hx_getString(0);
HXDLIN( 291)					{
HXLINE( 292)						obj = values->shift().StaticCast<  ::format::pdf::Data >();
HXLINE( 293)						if (::hx::IsNull( obj )) {
HXLINE( 293)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing value for key ",41,64,c1,e4) + key)));
            						}
HXLINE( 294)						h->set(key,obj);
            					}
            				}
            				else {
HXLINE( 295)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid object key ",d9,3b,86,e7) + ::Std_obj::string(obj))));
            				}
            			}
            		}
HXLINE( 298)		return ::format::pdf::Data_obj::DDict(h);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readDictionnary,return )

 ::format::pdf::Data Reader_obj::readIndirect( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_3839500d72196a9c_301_readIndirect)
HXLINE( 302)		int rev = ::format::pdf::Extract_obj::_hx_int(this->objects->pop().StaticCast<  ::format::pdf::Data >());
HXLINE( 303)		int id = ::format::pdf::Extract_obj::_hx_int(this->objects->pop().StaticCast<  ::format::pdf::Data >());
HXLINE( 304)		::Array< ::Dynamic> old = this->objects;
HXLINE( 305)		this->objects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 306)		while(true){
HXLINE( 307)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 308)				::Array< ::Dynamic> _hx_tmp = this->objects;
HXDLIN( 308)				_hx_tmp->push(this->readObject(i));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 309)					{
HXLINE( 309)						null();
            					}
HXDLIN( 309)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 307)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::format::pdf::_Reader::Break >())) {
HXLINE( 309)						 ::format::pdf::_Reader::Break e = _g1;
HXLINE( 310)						if (::hx::IsPointerEq( e,::format::pdf::_Reader::Break_obj::BEndObj_dyn() )) {
HXLINE( 310)							goto _hx_goto_23;
            						}
            						else {
HXLINE( 310)							this->invalidBreak(e);
            						}
            					}
            					else {
HXLINE( 307)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_23:;
HXLINE( 313)		if ((this->objects->length != 1)) {
HXLINE( 313)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Multiple values in object",cc,8b,a8,e8)));
            		}
HXLINE( 314)		 ::format::pdf::Data value = this->objects->__get(0).StaticCast<  ::format::pdf::Data >();
HXLINE( 315)		this->objects = old;
HXLINE( 316)		return ::format::pdf::Data_obj::DIndirect(id,rev,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readIndirect,return )

 ::format::pdf::Data Reader_obj::readStream( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_3839500d72196a9c_319_readStream)
HXLINE( 320)		if ((this->objects->length == 0)) {
HXLINE( 321)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid stream",a9,02,a5,de)));
            		}
HXLINE( 322)		if (::hx::IsEq( this->_hx_char,10 )) {
HXLINE( 322)			this->_hx_char = null();
            		}
            		else {
HXLINE( 322)			this->readEOL(i);
            		}
HXLINE( 323)		int size;
HXDLIN( 323)		 ::haxe::ds::StringMap props;
HXLINE( 324)		 ::format::pdf::Data dict = this->objects->pop().StaticCast<  ::format::pdf::Data >();
HXLINE( 325)		if (::hx::IsNull( dict )) {
HXLINE( 337)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid stream dict ",33,61,2e,2c) + ::Std_obj::string(dict))));
            		}
            		else {
HXLINE( 325)			if ((dict->_hx_getIndex() == 7)) {
HXLINE( 326)				 ::haxe::ds::StringMap h = dict->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 326)				{
HXLINE( 327)					props = h;
HXLINE( 328)					 ::format::pdf::Data len = h->get(HX_("Length",06,09,9c,d3));
HXLINE( 329)					if (::hx::IsNull( len )) {
HXLINE( 330)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid stream dict ",33,61,2e,2c) + ::Std_obj::string(dict))));
            					}
HXLINE( 331)					if (::hx::IsNull( len )) {
HXLINE( 334)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid stream length ",03,4c,be,5d) + ::Std_obj::string(len))));
            					}
            					else {
HXLINE( 331)						switch((int)(len->_hx_getIndex())){
            							case (int)2: {
HXLINE( 332)								Float n = len->_hx_getFloat(0);
HXDLIN( 332)								size = ::Std_obj::_hx_int(n);
            							}
            							break;
            							case (int)10: {
HXLINE( 333)								int id = len->_hx_getInt(0);
HXDLIN( 333)								int rev = len->_hx_getInt(1);
HXDLIN( 333)								size = -1;
            							}
            							break;
            							default:{
HXLINE( 334)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid stream length ",03,4c,be,5d) + ::Std_obj::string(len))));
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 337)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid stream dict ",33,61,2e,2c) + ::Std_obj::string(dict))));
            			}
            		}
HXLINE( 339)		if ((size != -1)) {
HXLINE( 340)			 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(size);
HXLINE( 341)			i->readFullBytes(b,0,size);
HXLINE( 342)			this->readEOL(i);
HXLINE( 343)			if ((i->readString(9,null()) != HX_("endstream",9b,ee,7a,1c))) {
HXLINE( 344)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid stream end",e4,e2,79,c6)));
            			}
HXLINE( 345)			return ::format::pdf::Data_obj::DStream(b,props);
            		}
            		else {
HXLINE( 348)			 ::haxe::io::BytesBuffer data =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 349)			 ::haxe::io::Bytes ref = ::haxe::io::Bytes_obj::ofString(HX_("endstream",9b,ee,7a,1c),null());
HXLINE( 350)			int refLength = ref->length;
HXLINE( 351)			int refMatch = 0;
HXLINE( 352)			int toMatch = ( (int)(ref->b->__get(refMatch)) );
HXLINE( 354)			while((refMatch < refLength)){
HXLINE( 355)				int b = i->readByte();
HXLINE( 356)				if ((b == toMatch)) {
HXLINE( 357)					refMatch = (refMatch + 1);
HXLINE( 358)					toMatch = ( (int)(ref->b->__get(refMatch)) );
            				}
            				else {
HXLINE( 360)					if ((refMatch != 0)) {
HXLINE( 361)						{
HXLINE( 361)							int _g = 0;
HXDLIN( 361)							int _g1 = refMatch;
HXDLIN( 361)							while((_g < _g1)){
HXLINE( 361)								_g = (_g + 1);
HXDLIN( 361)								int i = (_g - 1);
HXLINE( 362)								data->b->push(ref->b->__get(i));
            							}
            						}
HXLINE( 364)						refMatch = 0;
HXLINE( 365)						toMatch = ( (int)(ref->b->__get(refMatch)) );
            					}
HXLINE( 367)					data->b->push(b);
            				}
            			}
HXLINE( 370)			 ::haxe::io::Bytes b = data->getBytes();
HXLINE( 371)			return ::format::pdf::Data_obj::DStream(b,props);
            		}
HXLINE( 339)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readStream,return )

 ::format::pdf::Data Reader_obj::readXRefTable( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_3839500d72196a9c_375_readXRefTable)
HXLINE( 376)		::Array< ::Dynamic> tables = ::Array_obj< ::Dynamic>::__new();
HXLINE( 377)		while(true){
HXLINE( 378)			int start;
HXLINE( 379)			{
HXLINE( 379)				 ::format::pdf::Data _g = this->readObject(i);
HXDLIN( 379)				switch((int)(_g->_hx_getIndex())){
            					case (int)2: {
HXLINE( 380)						Float n = _g->_hx_getFloat(0);
HXLINE( 381)						start = ::Std_obj::_hx_int(n);
            					}
            					break;
            					case (int)12: {
HXLINE( 383)						 ::format::pdf::Data t = _g->_hx_getObject(0).StaticCast<  ::format::pdf::Data >();
HXLINE( 384)						this->objects->push(::format::pdf::Data_obj::DXRefTable(tables));
HXLINE( 385)						return ::format::pdf::Data_obj::DTrailer(t);
            					}
            					break;
            					default:{
HXLINE( 386)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid CR table",46,b6,51,2e)));
            					}
            				}
            			}
HXLINE( 388)			int count = ::format::pdf::Extract_obj::_hx_int(this->readObject(i));
HXLINE( 389)			::Array< ::Dynamic> entries = ::Array_obj< ::Dynamic>::__new();
HXLINE( 390)			 ::EReg r =  ::EReg_obj::__alloc( HX_CTX ,HX_("^([0-9]{10}) ([0-9]{5}) ([fn]) ?$",a4,61,63,05),HX_("",00,00,00,00));
HXLINE( 391)			while((count > 0)){
HXLINE( 392)				::String s = i->readLine();
HXLINE( 393)				if ((s == HX_("",00,00,00,00))) {
HXLINE( 393)					continue;
            				}
HXLINE( 394)				if (!(r->match(s))) {
HXLINE( 395)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Invalid CR entry '",31,11,ff,d2) + s) + HX_("'",27,00,00,00))));
            				}
HXLINE( 396)				count = (count - 1);
HXLINE( 397)				 ::Dynamic _hx_tmp = ::Std_obj::parseInt(r->matched(1));
HXDLIN( 397)				 ::Dynamic _hx_tmp1 = ::Std_obj::parseInt(r->matched(2));
HXDLIN( 397)				entries->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("gen",90,80,4e,00),_hx_tmp1)
            					->setFixed(1,HX_("used",3d,92,ad,4d),(r->matched(3) == HX_("f",66,00,00,00)))
            					->setFixed(2,HX_("offset",93,97,3f,60),_hx_tmp)));
            			}
HXLINE( 399)			tables->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("start",62,74,0b,84),start)
            				->setFixed(1,HX_("entries",50,2d,5f,79),entries)));
            		}
HXLINE( 377)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readXRefTable,return )

::Array< ::Dynamic> Reader_obj::read( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_3839500d72196a9c_404_read)
HXLINE( 405)		this->objects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 406)		while(true){
HXLINE( 407)			 ::format::pdf::Data o = this->readObjectEof(i);
HXLINE( 408)			if (::hx::IsNull( o )) {
HXLINE( 409)				goto _hx_goto_31;
            			}
HXLINE( 410)			this->objects->push(o);
            		}
            		_hx_goto_31:;
HXLINE( 412)		::Array< ::Dynamic> tmp = this->objects;
HXLINE( 413)		this->objects = null();
HXLINE( 414)		return tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,read,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new() {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "format.pdf.Reader"));
	*(void **)__this = Reader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(objects,"objects");
}

::hx::Val Reader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return ::hx::Val( objects ); }
		if (HX_FIELD_EQ(inName,"readEOL") ) { return ::hx::Val( readEOL_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"readStream") ) { return ::hx::Val( readStream_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return ::hx::Val( invalidChar_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"invalidBreak") ) { return ::hx::Val( invalidBreak_dyn() ); }
		if (HX_FIELD_EQ(inName,"readIndirect") ) { return ::hx::Val( readIndirect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readObjectEof") ) { return ::hx::Val( readObjectEof_dyn() ); }
		if (HX_FIELD_EQ(inName,"readXRefTable") ) { return ::hx::Val( readXRefTable_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readDictionnary") ) { return ::hx::Val( readDictionnary_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("objects",d4,68,4f,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Reader_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Reader_obj,objects),HX_("objects",d4,68,4f,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("char",d6,5e,bf,41),
	HX_("objects",d4,68,4f,82),
	HX_("readEOL",0c,8f,c6,02),
	HX_("invalidChar",6d,ad,ce,a9),
	HX_("invalidBreak",48,9a,41,5e),
	HX_("readObjectEof",07,39,e6,d6),
	HX_("readObject",b5,62,bb,0e),
	HX_("readDictionnary",16,6a,fa,e9),
	HX_("readIndirect",44,6e,89,4b),
	HX_("readStream",76,f8,a8,0a),
	HX_("readXRefTable",1d,10,30,95),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.pdf.Reader",36,02,82,22);
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
} // end namespace pdf
