#include <hxcpp.h>

#ifndef INCLUDED_format_tools_MD5
#include <format/tools/MD5.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b48735701a1dea8_47_new,"format.tools.MD5","new",0x6147e426,"format.tools.MD5.new","format/tools/MD5.hx",47,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_50_bitOR,"format.tools.MD5","bitOR",0x47f99c76,"format.tools.MD5.bitOR","format/tools/MD5.hx",50,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_56_bitXOR,"format.tools.MD5","bitXOR",0xb2761cc8,"format.tools.MD5.bitXOR","format/tools/MD5.hx",56,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_62_bitAND,"format.tools.MD5","bitAND",0xb264a804,"format.tools.MD5.bitAND","format/tools/MD5.hx",62,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_68_addme,"format.tools.MD5","addme",0xb138ecff,"format.tools.MD5.addme","format/tools/MD5.hx",68,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_74_str2blks,"format.tools.MD5","str2blks",0xc644ef4d,"format.tools.MD5.str2blks","format/tools/MD5.hx",74,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_92_rol,"format.tools.MD5","rol",0x614af5d5,"format.tools.MD5.rol","format/tools/MD5.hx",92,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_96_cmn,"format.tools.MD5","cmn",0x613f924a,"format.tools.MD5.cmn","format/tools/MD5.hx",96,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_100_ff,"format.tools.MD5","ff",0x96d2603a,"format.tools.MD5.ff","format/tools/MD5.hx",100,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_104_gg,"format.tools.MD5","gg",0x96d2611a,"format.tools.MD5.gg","format/tools/MD5.hx",104,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_108_hh,"format.tools.MD5","hh",0x96d261fa,"format.tools.MD5.hh","format/tools/MD5.hx",108,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_112_ii,"format.tools.MD5","ii",0x96d262da,"format.tools.MD5.ii","format/tools/MD5.hx",112,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_115_encode,"format.tools.MD5","encode",0xbb5dfe10,"format.tools.MD5.encode","format/tools/MD5.hx",115,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_35_make,"format.tools.MD5","make",0xbcf37368,"format.tools.MD5.make","format/tools/MD5.hx",35,0x0628564c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b48735701a1dea8_45_boot,"format.tools.MD5","boot",0xb5b8bdac,"format.tools.MD5.boot","format/tools/MD5.hx",45,0x0628564c)
namespace format{
namespace tools{

void MD5_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_47_new)
            	}

Dynamic MD5_obj::__CreateEmpty() { return new MD5_obj; }

void *MD5_obj::_hx_vtable = 0;

Dynamic MD5_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MD5_obj > _hx_result = new MD5_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MD5_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x51a4ba42;
}

int MD5_obj::bitOR(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_50_bitOR)
HXLINE(  51)		int lsb = ((a & 1) | (b & 1));
HXLINE(  52)		int msb31 = (::hx::UShr(a,1) | ::hx::UShr(b,1));
HXLINE(  53)		return ((msb31 << 1) | lsb);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MD5_obj,bitOR,return )

int MD5_obj::bitXOR(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_56_bitXOR)
HXLINE(  57)		int lsb = ((a & 1) ^ (b & 1));
HXLINE(  58)		int msb31 = (::hx::UShr(a,1) ^ ::hx::UShr(b,1));
HXLINE(  59)		return ((msb31 << 1) | lsb);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MD5_obj,bitXOR,return )

int MD5_obj::bitAND(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_62_bitAND)
HXLINE(  63)		int lsb = ((a & 1) & (b & 1));
HXLINE(  64)		int msb31 = (::hx::UShr(a,1) & ::hx::UShr(b,1));
HXLINE(  65)		return ((msb31 << 1) | lsb);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MD5_obj,bitAND,return )

int MD5_obj::addme(int x,int y){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_68_addme)
HXLINE(  69)		int lsw = ((x & 65535) + (y & 65535));
HXLINE(  70)		int msw = (((x >> 16) + (y >> 16)) + (lsw >> 16));
HXLINE(  71)		return ((msw << 16) | (lsw & 65535));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MD5_obj,addme,return )

::Array< int > MD5_obj::str2blks( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_74_str2blks)
HXLINE(  75)		int length = b->length;
HXLINE(  76)		int l = (length << 3);
HXLINE(  77)		int nblk = (((length + 8) >> 6) + 1);
HXLINE(  78)		::Array< int > blks = ::Array_obj< int >::__new();
HXLINE(  79)		{
HXLINE(  79)			int _g = 0;
HXDLIN(  79)			int _g1 = (nblk * 16);
HXDLIN(  79)			while((_g < _g1)){
HXLINE(  79)				_g = (_g + 1);
HXDLIN(  79)				int i = (_g - 1);
HXLINE(  80)				blks[i] = 0;
            			}
            		}
HXLINE(  81)		{
HXLINE(  81)			int _g2 = 0;
HXDLIN(  81)			int _g3 = length;
HXDLIN(  81)			while((_g2 < _g3)){
HXLINE(  81)				_g2 = (_g2 + 1);
HXDLIN(  81)				int i = (_g2 - 1);
HXLINE(  82)				::Array< int > blks1 = blks;
HXDLIN(  82)				int index = (i >> 2);
HXDLIN(  82)				blks1[index] = (blks1->__get(index) | (( (int)(b->b->__get(i)) ) << (((l + i) & 3) << 3)));
            			}
            		}
HXLINE(  83)		::Array< int > blks1 = blks;
HXDLIN(  83)		int index = (length >> 2);
HXDLIN(  83)		blks1[index] = (blks1->__get(index) | (128 << (((l + length) & 3) << 3)));
HXLINE(  84)		blks[((nblk * 16) - 2)] = (l & 255);
HXLINE(  85)		::Array< int > blks2 = blks;
HXDLIN(  85)		int index1 = ((nblk * 16) - 2);
HXDLIN(  85)		blks2[index1] = (blks2->__get(index1) | ((::hx::UShr(l,8) & 255) << 8));
HXLINE(  86)		::Array< int > blks3 = blks;
HXDLIN(  86)		int index2 = ((nblk * 16) - 2);
HXDLIN(  86)		blks3[index2] = (blks3->__get(index2) | ((::hx::UShr(l,16) & 255) << 16));
HXLINE(  87)		::Array< int > blks4 = blks;
HXDLIN(  87)		int index3 = ((nblk * 16) - 2);
HXDLIN(  87)		blks4[index3] = (blks4->__get(index3) | ((::hx::UShr(l,24) & 255) << 24));
HXLINE(  88)		return blks;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MD5_obj,str2blks,return )

int MD5_obj::rol(int num,int cnt){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_92_rol)
HXDLIN(  92)		return ((num << cnt) | ::hx::UShr(num,(32 - cnt)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MD5_obj,rol,return )

int MD5_obj::cmn(int q,int a,int b,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_96_cmn)
HXDLIN(  96)		int _hx_tmp = this->addme(a,q);
HXDLIN(  96)		return this->addme(this->rol(this->addme(_hx_tmp,this->addme(x,t)),s),b);
            	}


HX_DEFINE_DYNAMIC_FUNC6(MD5_obj,cmn,return )

int MD5_obj::ff(int a,int b,int c,int d,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_100_ff)
HXDLIN( 100)		int _hx_tmp = this->bitAND(b,c);
HXDLIN( 100)		return this->cmn(this->bitOR(_hx_tmp,this->bitAND(~(b),d)),a,b,x,s,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(MD5_obj,ff,return )

int MD5_obj::gg(int a,int b,int c,int d,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_104_gg)
HXDLIN( 104)		int _hx_tmp = this->bitAND(b,d);
HXDLIN( 104)		return this->cmn(this->bitOR(_hx_tmp,this->bitAND(c,~(d))),a,b,x,s,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(MD5_obj,gg,return )

int MD5_obj::hh(int a,int b,int c,int d,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_108_hh)
HXDLIN( 108)		return this->cmn(this->bitXOR(this->bitXOR(b,c),d),a,b,x,s,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(MD5_obj,hh,return )

int MD5_obj::ii(int a,int b,int c,int d,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_112_ii)
HXDLIN( 112)		return this->cmn(this->bitXOR(c,this->bitOR(b,~(d))),a,b,x,s,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(MD5_obj,ii,return )

 ::haxe::io::Bytes MD5_obj::encode( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_115_encode)
HXLINE( 117)		::Array< int > x = this->str2blks(b);
HXLINE( 118)		int a = (int)1732584193;
HXLINE( 119)		int b1 = -271733879;
HXLINE( 120)		int c = (int)-1732584194;
HXLINE( 121)		int d = 271733878;
HXLINE( 123)		int step;
HXLINE( 125)		int i = 0;
HXLINE( 126)		int max = x->length;
HXLINE( 127)		while((i < max)){
HXLINE( 128)			int olda = a;
HXLINE( 129)			int oldb = b1;
HXLINE( 130)			int oldc = c;
HXLINE( 131)			int oldd = d;
HXLINE( 133)			step = 0;
HXLINE( 134)			a = this->ff(a,b1,c,d,x->__get(i),7,-680876936);
HXLINE( 135)			d = this->ff(d,a,b1,c,x->__get((i + 1)),12,-389564586);
HXLINE( 136)			c = this->ff(c,d,a,b1,x->__get((i + 2)),17,606105819);
HXLINE( 137)			b1 = this->ff(b1,c,d,a,x->__get((i + 3)),22,(int)-1044525330);
HXLINE( 138)			a = this->ff(a,b1,c,d,x->__get((i + 4)),7,-176418897);
HXLINE( 139)			d = this->ff(d,a,b1,c,x->__get((i + 5)),12,(int)1200080426);
HXLINE( 140)			c = this->ff(c,d,a,b1,x->__get((i + 6)),17,(int)-1473231341);
HXLINE( 141)			b1 = this->ff(b1,c,d,a,x->__get((i + 7)),22,-45705983);
HXLINE( 142)			a = this->ff(a,b1,c,d,x->__get((i + 8)),7,(int)1770035416);
HXLINE( 143)			d = this->ff(d,a,b1,c,x->__get((i + 9)),12,(int)-1958414417);
HXLINE( 144)			c = this->ff(c,d,a,b1,x->__get((i + 10)),17,-42063);
HXLINE( 145)			b1 = this->ff(b1,c,d,a,x->__get((i + 11)),22,(int)-1990404162);
HXLINE( 146)			a = this->ff(a,b1,c,d,x->__get((i + 12)),7,(int)1804603682);
HXLINE( 147)			d = this->ff(d,a,b1,c,x->__get((i + 13)),12,-40341101);
HXLINE( 148)			c = this->ff(c,d,a,b1,x->__get((i + 14)),17,(int)-1502002290);
HXLINE( 149)			b1 = this->ff(b1,c,d,a,x->__get((i + 15)),22,(int)1236535329);
HXLINE( 150)			a = this->gg(a,b1,c,d,x->__get((i + 1)),5,-165796510);
HXLINE( 151)			d = this->gg(d,a,b1,c,x->__get((i + 6)),9,(int)-1069501632);
HXLINE( 152)			c = this->gg(c,d,a,b1,x->__get((i + 11)),14,643717713);
HXLINE( 153)			b1 = this->gg(b1,c,d,a,x->__get(i),20,-373897302);
HXLINE( 154)			a = this->gg(a,b1,c,d,x->__get((i + 5)),5,-701558691);
HXLINE( 155)			d = this->gg(d,a,b1,c,x->__get((i + 10)),9,38016083);
HXLINE( 156)			c = this->gg(c,d,a,b1,x->__get((i + 15)),14,-660478335);
HXLINE( 157)			b1 = this->gg(b1,c,d,a,x->__get((i + 4)),20,-405537848);
HXLINE( 158)			a = this->gg(a,b1,c,d,x->__get((i + 9)),5,568446438);
HXLINE( 159)			d = this->gg(d,a,b1,c,x->__get((i + 14)),9,(int)-1019803690);
HXLINE( 160)			c = this->gg(c,d,a,b1,x->__get((i + 3)),14,-187363961);
HXLINE( 161)			b1 = this->gg(b1,c,d,a,x->__get((i + 8)),20,(int)1163531501);
HXLINE( 162)			a = this->gg(a,b1,c,d,x->__get((i + 13)),5,(int)-1444681467);
HXLINE( 163)			d = this->gg(d,a,b1,c,x->__get((i + 2)),9,-51403784);
HXLINE( 164)			c = this->gg(c,d,a,b1,x->__get((i + 7)),14,(int)1735328473);
HXLINE( 165)			b1 = this->gg(b1,c,d,a,x->__get((i + 12)),20,(int)-1926607734);
HXLINE( 166)			a = this->hh(a,b1,c,d,x->__get((i + 5)),4,-378558);
HXLINE( 167)			d = this->hh(d,a,b1,c,x->__get((i + 8)),11,(int)-2022574463);
HXLINE( 168)			c = this->hh(c,d,a,b1,x->__get((i + 11)),16,(int)1839030562);
HXLINE( 169)			b1 = this->hh(b1,c,d,a,x->__get((i + 14)),23,-35309556);
HXLINE( 170)			a = this->hh(a,b1,c,d,x->__get((i + 1)),4,(int)-1530992060);
HXLINE( 171)			d = this->hh(d,a,b1,c,x->__get((i + 4)),11,(int)1272893353);
HXLINE( 172)			c = this->hh(c,d,a,b1,x->__get((i + 7)),16,-155497632);
HXLINE( 173)			b1 = this->hh(b1,c,d,a,x->__get((i + 10)),23,(int)-1094730640);
HXLINE( 174)			a = this->hh(a,b1,c,d,x->__get((i + 13)),4,681279174);
HXLINE( 175)			d = this->hh(d,a,b1,c,x->__get(i),11,-358537222);
HXLINE( 176)			c = this->hh(c,d,a,b1,x->__get((i + 3)),16,-722521979);
HXLINE( 177)			b1 = this->hh(b1,c,d,a,x->__get((i + 6)),23,76029189);
HXLINE( 178)			a = this->hh(a,b1,c,d,x->__get((i + 9)),4,-640364487);
HXLINE( 179)			d = this->hh(d,a,b1,c,x->__get((i + 12)),11,-421815835);
HXLINE( 180)			c = this->hh(c,d,a,b1,x->__get((i + 15)),16,530742520);
HXLINE( 181)			b1 = this->hh(b1,c,d,a,x->__get((i + 2)),23,-995338651);
HXLINE( 182)			a = this->ii(a,b1,c,d,x->__get(i),6,-198630844);
HXLINE( 183)			d = this->ii(d,a,b1,c,x->__get((i + 7)),10,(int)1126891415);
HXLINE( 184)			c = this->ii(c,d,a,b1,x->__get((i + 14)),15,(int)-1416354905);
HXLINE( 185)			b1 = this->ii(b1,c,d,a,x->__get((i + 5)),21,-57434055);
HXLINE( 186)			a = this->ii(a,b1,c,d,x->__get((i + 12)),6,(int)1700485571);
HXLINE( 187)			d = this->ii(d,a,b1,c,x->__get((i + 3)),10,(int)-1894986606);
HXLINE( 188)			c = this->ii(c,d,a,b1,x->__get((i + 10)),15,-1051523);
HXLINE( 189)			b1 = this->ii(b1,c,d,a,x->__get((i + 1)),21,(int)-2054922799);
HXLINE( 190)			a = this->ii(a,b1,c,d,x->__get((i + 8)),6,(int)1873313359);
HXLINE( 191)			d = this->ii(d,a,b1,c,x->__get((i + 15)),10,-30611744);
HXLINE( 192)			c = this->ii(c,d,a,b1,x->__get((i + 6)),15,(int)-1560198380);
HXLINE( 193)			b1 = this->ii(b1,c,d,a,x->__get((i + 13)),21,(int)1309151649);
HXLINE( 194)			a = this->ii(a,b1,c,d,x->__get((i + 4)),6,-145523070);
HXLINE( 195)			d = this->ii(d,a,b1,c,x->__get((i + 11)),10,(int)-1120210379);
HXLINE( 196)			c = this->ii(c,d,a,b1,x->__get((i + 2)),15,718787259);
HXLINE( 197)			b1 = this->ii(b1,c,d,a,x->__get((i + 9)),21,-343485551);
HXLINE( 199)			a = this->addme(a,olda);
HXLINE( 200)			b1 = this->addme(b1,oldb);
HXLINE( 201)			c = this->addme(c,oldc);
HXLINE( 202)			d = this->addme(d,oldd);
HXLINE( 204)			i = (i + 16);
            		}
HXLINE( 207)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(16);
HXLINE( 208)		out->b[0] = ( (unsigned char)((a & 255)) );
HXLINE( 209)		out->b[1] = ( (unsigned char)(((a >> 8) & 255)) );
HXLINE( 210)		out->b[2] = ( (unsigned char)(((a >> 16) & 255)) );
HXLINE( 211)		out->b[3] = ( (unsigned char)((a >> 24)) );
HXLINE( 212)		out->b[4] = ( (unsigned char)((b1 & 255)) );
HXLINE( 213)		out->b[5] = ( (unsigned char)(((b1 >> 8) & 255)) );
HXLINE( 214)		out->b[6] = ( (unsigned char)(((b1 >> 16) & 255)) );
HXLINE( 215)		out->b[7] = ( (unsigned char)((b1 >> 24)) );
HXLINE( 216)		out->b[8] = ( (unsigned char)((c & 255)) );
HXLINE( 217)		out->b[9] = ( (unsigned char)(((c >> 8) & 255)) );
HXLINE( 218)		out->b[10] = ( (unsigned char)(((c >> 16) & 255)) );
HXLINE( 219)		out->b[11] = ( (unsigned char)((c >> 24)) );
HXLINE( 220)		out->b[12] = ( (unsigned char)((d & 255)) );
HXLINE( 221)		out->b[13] = ( (unsigned char)(((d >> 8) & 255)) );
HXLINE( 222)		out->b[14] = ( (unsigned char)(((d >> 16) & 255)) );
HXLINE( 223)		out->b[15] = ( (unsigned char)((d >> 24)) );
HXLINE( 224)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MD5_obj,encode,return )

 ::haxe::io::Bytes MD5_obj::make( ::haxe::io::Bytes s){
            	HX_STACKFRAME(&_hx_pos_5b48735701a1dea8_35_make)
HXDLIN(  35)		return ::format::tools::MD5_obj::inst->encode(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MD5_obj,make,return )

 ::format::tools::MD5 MD5_obj::inst;


::hx::ObjectPtr< MD5_obj > MD5_obj::__new() {
	::hx::ObjectPtr< MD5_obj > __this = new MD5_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MD5_obj > MD5_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MD5_obj *__this = (MD5_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MD5_obj), false, "format.tools.MD5"));
	*(void **)__this = MD5_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MD5_obj::MD5_obj()
{
}

::hx::Val MD5_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ::hx::Val( ff_dyn() ); }
		if (HX_FIELD_EQ(inName,"gg") ) { return ::hx::Val( gg_dyn() ); }
		if (HX_FIELD_EQ(inName,"hh") ) { return ::hx::Val( hh_dyn() ); }
		if (HX_FIELD_EQ(inName,"ii") ) { return ::hx::Val( ii_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"rol") ) { return ::hx::Val( rol_dyn() ); }
		if (HX_FIELD_EQ(inName,"cmn") ) { return ::hx::Val( cmn_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bitOR") ) { return ::hx::Val( bitOR_dyn() ); }
		if (HX_FIELD_EQ(inName,"addme") ) { return ::hx::Val( addme_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitXOR") ) { return ::hx::Val( bitXOR_dyn() ); }
		if (HX_FIELD_EQ(inName,"bitAND") ) { return ::hx::Val( bitAND_dyn() ); }
		if (HX_FIELD_EQ(inName,"encode") ) { return ::hx::Val( encode_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"str2blks") ) { return ::hx::Val( str2blks_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MD5_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = ( inst ); return true; }
	}
	return false;
}

bool MD5_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=ioValue.Cast<  ::format::tools::MD5 >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MD5_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MD5_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::format::tools::MD5 */ ,(void *) &MD5_obj::inst,HX_("inst",c6,43,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MD5_obj_sMemberFields[] = {
	HX_("bitOR",30,8b,04,b3),
	HX_("bitXOR",ce,10,fc,f0),
	HX_("bitAND",0a,9c,ea,f0),
	HX_("addme",b9,db,43,1c),
	HX_("str2blks",d3,70,34,29),
	HX_("rol",0f,e2,56,00),
	HX_("cmn",84,7e,4b,00),
	HX_("ff",40,59,00,00),
	HX_("gg",20,5a,00,00),
	HX_("hh",00,5b,00,00),
	HX_("ii",e0,5b,00,00),
	HX_("encode",16,f2,e3,f9),
	::String(null()) };

static void MD5_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MD5_obj::inst,"inst");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MD5_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MD5_obj::inst,"inst");
};

#endif

::hx::Class MD5_obj::__mClass;

static ::String MD5_obj_sStaticFields[] = {
	HX_("make",ee,39,56,48),
	HX_("inst",c6,43,bb,45),
	::String(null())
};

void MD5_obj::__register()
{
	MD5_obj _hx_dummy;
	MD5_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.tools.MD5",34,99,75,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MD5_obj::__GetStatic;
	__mClass->mSetStaticField = &MD5_obj::__SetStatic;
	__mClass->mMarkFunc = MD5_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MD5_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MD5_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MD5_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MD5_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MD5_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MD5_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MD5_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_5b48735701a1dea8_45_boot)
HXDLIN(  45)		inst =  ::format::tools::MD5_obj::__alloc( HX_CTX );
            	}
}

} // end namespace format
} // end namespace tools
