#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_format_png_Chunk
#include <format/png/Chunk.h>
#endif
#ifndef INCLUDED_format_png_Color
#include <format/png/Color.h>
#endif
#ifndef INCLUDED_format_png_Tools
#include <format/png/Tools.h>
#endif
#ifndef INCLUDED_format_tools_Deflate
#include <format/tools/Deflate.h>
#endif
#ifndef INCLUDED_format_tools_Inflate
#include <format/tools/Inflate.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_35_getHeader,"format.png.Tools","getHeader",0xf1b59214,"format.png.Tools.getHeader","format/png/Tools.hx",35,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_47_getPalette,"format.png.Tools","getPalette",0x96858014,"format.png.Tools.getPalette","format/png/Tools.hx",47,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_56_filter,"format.png.Tools","filter",0xb708d3c7,"format.png.Tools.filter","format/png/Tools.hx",56,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_69_reverseBytes,"format.png.Tools","reverseBytes",0x2d518d38,"format.png.Tools.reverseBytes","format/png/Tools.hx",69,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_650_extract,"format.png.Tools","extract",0xe0548e52,"format.png.Tools.extract","format/png/Tools.hx",650,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_785_buildGrey,"format.png.Tools","buildGrey",0x5d0708fe,"format.png.Tools.buildGrey","format/png/Tools.hx",785,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_804_buildIndexed,"format.png.Tools","buildIndexed",0x4c6c33b2,"format.png.Tools.buildIndexed","format/png/Tools.hx",804,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_823_buildRGB,"format.png.Tools","buildRGB",0x68ea624e,"format.png.Tools.buildRGB","format/png/Tools.hx",823,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_846_build32ARGB,"format.png.Tools","build32ARGB",0x02e864aa,"format.png.Tools.build32ARGB","format/png/Tools.hx",846,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_870_build32BGRA,"format.png.Tools","build32BGRA",0x03894c12,"format.png.Tools.build32BGRA","format/png/Tools.hx",870,0x79d90221)
namespace format{
namespace png{

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
	return inClassId==(int)0x00000001 || inClassId==(int)0x18125ce9;
}

 ::Dynamic Tools_obj::getHeader( ::haxe::ds::List d){
            	HX_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_35_getHeader)
HXLINE(  36)		{
HXLINE(  36)			 ::haxe::ds::_List::ListNode _g_head = d->h;
HXDLIN(  36)			while(::hx::IsNotNull( _g_head )){
HXLINE(  36)				 ::format::png::Chunk val = _g_head->item;
HXDLIN(  36)				_g_head = _g_head->next;
HXDLIN(  36)				 ::format::png::Chunk c = val;
HXLINE(  37)				if ((c->_hx_getIndex() == 1)) {
HXLINE(  38)					 ::Dynamic h = c->_hx_getObject(0);
HXDLIN(  38)					return h;
            				}
            			}
            		}
HXLINE(  41)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Header not found",42,2b,e7,44)));
HXDLIN(  41)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getHeader,return )

 ::haxe::io::Bytes Tools_obj::getPalette( ::haxe::ds::List d){
            	HX_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_47_getPalette)
HXLINE(  48)		{
HXLINE(  48)			 ::haxe::ds::_List::ListNode _g_head = d->h;
HXDLIN(  48)			while(::hx::IsNotNull( _g_head )){
HXLINE(  48)				 ::format::png::Chunk val = _g_head->item;
HXDLIN(  48)				_g_head = _g_head->next;
HXDLIN(  48)				 ::format::png::Chunk c = val;
HXLINE(  49)				if ((c->_hx_getIndex() == 3)) {
HXLINE(  50)					 ::haxe::io::Bytes b = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN(  50)					return b;
            				}
            			}
            		}
HXLINE(  53)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getPalette,return )

int Tools_obj::filter( ::haxe::io::Bytes data,int x,int y,int stride,int prev,int p,::hx::Null< int >  __o_numChannels){
            		int numChannels = __o_numChannels.Default(4);
            	HX_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_56_filter)
HXLINE(  57)		int b;
HXDLIN(  57)		if ((y == 0)) {
HXLINE(  57)			b = 0;
            		}
            		else {
HXLINE(  57)			b = ( (int)(data->b->__get((p - stride))) );
            		}
HXLINE(  58)		int c;
HXDLIN(  58)		bool c1;
HXDLIN(  58)		if ((x != 0)) {
HXLINE(  58)			c1 = (y == 0);
            		}
            		else {
HXLINE(  58)			c1 = true;
            		}
HXDLIN(  58)		if (c1) {
HXLINE(  58)			c = 0;
            		}
            		else {
HXLINE(  58)			c = ( (int)(data->b->__get(((p - stride) - numChannels))) );
            		}
HXLINE(  59)		int k = ((prev + b) - c);
HXLINE(  60)		int pa = (k - prev);
HXDLIN(  60)		if ((pa < 0)) {
HXLINE(  60)			pa = -(pa);
            		}
HXLINE(  61)		int pb = (k - b);
HXDLIN(  61)		if ((pb < 0)) {
HXLINE(  61)			pb = -(pb);
            		}
HXLINE(  62)		int pc = (k - c);
HXDLIN(  62)		if ((pc < 0)) {
HXLINE(  62)			pc = -(pc);
            		}
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		if ((pa <= pb)) {
HXLINE(  63)			_hx_tmp = (pa <= pc);
            		}
            		else {
HXLINE(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  63)			return prev;
            		}
            		else {
HXLINE(  63)			if ((pb <= pc)) {
HXLINE(  63)				return b;
            			}
            			else {
HXLINE(  63)				return c;
            			}
            		}
HXDLIN(  63)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Tools_obj,filter,return )

void Tools_obj::reverseBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_69_reverseBytes)
HXLINE(  89)		int p = 0;
HXLINE(  90)		{
HXLINE(  90)			int _g = 0;
HXDLIN(  90)			int _g1 = (b->length >> 2);
HXDLIN(  90)			while((_g < _g1)){
HXLINE(  90)				_g = (_g + 1);
HXDLIN(  90)				int i = (_g - 1);
HXLINE(  91)				int b1 = ( (int)(b->b->__get(p)) );
HXLINE(  92)				int g = ( (int)(b->b->__get((p + 1))) );
HXLINE(  93)				int r = ( (int)(b->b->__get((p + 2))) );
HXLINE(  94)				int a = ( (int)(b->b->__get((p + 3))) );
HXLINE(  95)				{
HXLINE(  95)					p = (p + 1);
HXDLIN(  95)					b->b[(p - 1)] = ( (unsigned char)(a) );
            				}
HXLINE(  96)				{
HXLINE(  96)					p = (p + 1);
HXDLIN(  96)					b->b[(p - 1)] = ( (unsigned char)(r) );
            				}
HXLINE(  97)				{
HXLINE(  97)					p = (p + 1);
HXDLIN(  97)					b->b[(p - 1)] = ( (unsigned char)(g) );
            				}
HXLINE(  98)				{
HXLINE(  98)					p = (p + 1);
HXDLIN(  98)					b->b[(p - 1)] = ( (unsigned char)(b1) );
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,reverseBytes,(void))

 ::haxe::io::Bytes Tools_obj::extractGrey( ::haxe::ds::List d){
	HX_JUST_GC_STACKFRAME
	 ::Dynamic h = ::format::png::Tools_obj::getHeader(d);
	 ::haxe::io::Bytes grey = ::haxe::io::Bytes_obj::alloc((( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )));
	 ::haxe::io::Bytes data = null();
	 ::haxe::io::BytesBuffer fullData = null();
	{
		 ::haxe::ds::_List::ListNode _g_head = d->h;
		while(::hx::IsNotNull( _g_head )){
			 ::format::png::Chunk val = _g_head->item;
			_g_head = _g_head->next;
			 ::format::png::Chunk c = val;
			if ((c->_hx_getIndex() == 2)) {
				 ::haxe::io::Bytes b = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
				if (::hx::IsNotNull( fullData )) {
					::Array< unsigned char > b1 = fullData->b;
					::Array< unsigned char > b2 = b->b;
					{
						int _g = 0;
						int _g1 = b->length;
						while((_g < _g1)){
							_g = (_g + 1);
							int i = (_g - 1);
							fullData->b->push(b2->__get(i));
						}
					}
				}
				else {
					if (::hx::IsNull( data )) {
						data = b;
					}
					else {
						fullData =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
						{
							::Array< unsigned char > b1 = fullData->b;
							::Array< unsigned char > b2 = data->b;
							{
								int _g = 0;
								int _g1 = data->length;
								while((_g < _g1)){
									_g = (_g + 1);
									int i = (_g - 1);
									fullData->b->push(b2->__get(i));
								}
							}
						}
						{
							::Array< unsigned char > b11 = fullData->b;
							::Array< unsigned char > b21 = b->b;
							{
								int _g2 = 0;
								int _g3 = b->length;
								while((_g2 < _g3)){
									_g2 = (_g2 + 1);
									int i = (_g2 - 1);
									fullData->b->push(b21->__get(i));
								}
							}
						}
						data = null();
					}
				}
			}
		}
	}
	if (::hx::IsNotNull( fullData )) {
		data = fullData->getBytes();
	}
	if (::hx::IsNull( data )) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Data not found",1f,f6,a3,e4)));
	}
	data = ::format::tools::Inflate_obj::run(data);
	int r = 0;
	int w = 0;
	{
		 ::format::png::Color _g = h->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
		if ((_g->_hx_getIndex() == 0)) {
			bool alpha = _g->_hx_getBool(0);
			{
				if (::hx::IsNotEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported color mode",eb,dc,a9,2c)));
				}
				int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
				int stride;
				if (alpha) {
					stride = 2;
				}
				else {
					stride = 1;
				}
				int stride1 = ((stride * width) + 1);
				if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * stride1))) {
					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
				}
				int rinc;
				if (alpha) {
					rinc = 2;
				}
				else {
					rinc = 1;
				}
				{
					int _g1 = 0;
					int _g2 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
					while((_g1 < _g2)){
						_g1 = (_g1 + 1);
						int y = (_g1 - 1);
						r = (r + 1);
						int f = ( (int)(data->b->__get((r - 1))) );
						switch((int)(f)){
							case (int)0: {
								int _g = 0;
								int _g1 = width;
								while((_g < _g1)){
									_g = (_g + 1);
									int x = (_g - 1);
									int v = ( (int)(data->b->__get(r)) );
									r = (r + rinc);
									{
										w = (w + 1);
										grey->b[(w - 1)] = ( (unsigned char)(v) );
									}
								}
							}
							break;
							case (int)1: {
								int cv = 0;
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										cv = (cv + data->b->__get(r));
										r = (r + rinc);
										{
											w = (w + 1);
											grey->b[(w - 1)] = ( (unsigned char)(cv) );
										}
									}
								}
							}
							break;
							case (int)2: {
								int stride;
								if ((y == 0)) {
									stride = 0;
								}
								else {
									stride = width;
								}
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = (data->b->__get(r) + grey->b->__get((w - stride)));
										r = (r + rinc);
										{
											w = (w + 1);
											grey->b[(w - 1)] = ( (unsigned char)(v) );
										}
									}
								}
							}
							break;
							case (int)3: {
								int cv = 0;
								int stride;
								if ((y == 0)) {
									stride = 0;
								}
								else {
									stride = width;
								}
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										cv = ((data->b->__get(r) + ((cv + grey->b->__get((w - stride))) >> 1)) & 255);
										r = (r + rinc);
										{
											w = (w + 1);
											grey->b[(w - 1)] = ( (unsigned char)(cv) );
										}
									}
								}
							}
							break;
							case (int)4: {
								int stride = width;
								int cv = 0;
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int b;
										if ((y == 0)) {
											b = 0;
										}
										else {
											b = ( (int)(grey->b->__get((w - stride))) );
										}
										int c;
										bool c1;
										if ((x != 0)) {
											c1 = (y == 0);
										}
										else {
											c1 = true;
										}
										if (c1) {
											c = 0;
										}
										else {
											c = ( (int)(grey->b->__get(((w - stride) - 1))) );
										}
										int k = ((cv + b) - c);
										int pa = (k - cv);
										if ((pa < 0)) {
											pa = -(pa);
										}
										int pb = (k - b);
										if ((pb < 0)) {
											pb = -(pb);
										}
										int pc = (k - c);
										if ((pc < 0)) {
											pc = -(pc);
										}
										int cv1;
										bool cv2;
										if ((pa <= pb)) {
											cv2 = (pa <= pc);
										}
										else {
											cv2 = false;
										}
										if (cv2) {
											cv1 = cv;
										}
										else {
											if ((pb <= pc)) {
												cv1 = b;
											}
											else {
												cv1 = c;
											}
										}
										cv = ((cv1 + data->b->__get(r)) & 255);
										r = (r + rinc);
										{
											w = (w + 1);
											grey->b[(w - 1)] = ( (unsigned char)(cv) );
										}
									}
								}
							}
							break;
							default:{
								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
							}
						}
					}
				}
			}
		}
		else {
			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported color mode",eb,dc,a9,2c)));
		}
	}
	return grey;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,extractGrey,return )

 ::haxe::io::Bytes Tools_obj::extract32( ::haxe::ds::List d, ::haxe::io::Bytes bytes, ::Dynamic flipY){
	HX_JUST_GC_STACKFRAME
	 ::Dynamic h = ::format::png::Tools_obj::getHeader(d);
	 ::haxe::io::Bytes bgra;
	if (::hx::IsNull( bytes )) {
		bgra = ::haxe::io::Bytes_obj::alloc(((( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )) * 4));
	}
	else {
		bgra = bytes;
	}
	 ::haxe::io::Bytes data = null();
	 ::haxe::io::BytesBuffer fullData = null();
	{
		 ::haxe::ds::_List::ListNode _g_head = d->h;
		while(::hx::IsNotNull( _g_head )){
			 ::format::png::Chunk val = _g_head->item;
			_g_head = _g_head->next;
			 ::format::png::Chunk c = val;
			if ((c->_hx_getIndex() == 2)) {
				 ::haxe::io::Bytes b = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
				if (::hx::IsNotNull( fullData )) {
					::Array< unsigned char > b1 = fullData->b;
					::Array< unsigned char > b2 = b->b;
					{
						int _g = 0;
						int _g1 = b->length;
						while((_g < _g1)){
							_g = (_g + 1);
							int i = (_g - 1);
							fullData->b->push(b2->__get(i));
						}
					}
				}
				else {
					if (::hx::IsNull( data )) {
						data = b;
					}
					else {
						fullData =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
						{
							::Array< unsigned char > b1 = fullData->b;
							::Array< unsigned char > b2 = data->b;
							{
								int _g = 0;
								int _g1 = data->length;
								while((_g < _g1)){
									_g = (_g + 1);
									int i = (_g - 1);
									fullData->b->push(b2->__get(i));
								}
							}
						}
						{
							::Array< unsigned char > b11 = fullData->b;
							::Array< unsigned char > b21 = b->b;
							{
								int _g2 = 0;
								int _g3 = b->length;
								while((_g2 < _g3)){
									_g2 = (_g2 + 1);
									int i = (_g2 - 1);
									fullData->b->push(b21->__get(i));
								}
							}
						}
						data = null();
					}
				}
			}
		}
	}
	if (::hx::IsNotNull( fullData )) {
		data = fullData->getBytes();
	}
	if (::hx::IsNull( data )) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Data not found",1f,f6,a3,e4)));
	}
	data = ::format::tools::Inflate_obj::run(data);
	int r = 0;
	int w = 0;
	int lineDelta = 0;
	if (( (bool)(flipY) )) {
		lineDelta = (-(( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )) * 8);
		w = ((( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) - 1) * (( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * 4));
	}
	int flipY1;
	if (( (bool)(flipY) )) {
		flipY1 = -1;
	}
	else {
		flipY1 = 1;
	}
	{
		 ::format::png::Color _g = h->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
		switch((int)(_g->_hx_getIndex())){
			case (int)0: {
				bool alpha = _g->_hx_getBool(0);
				{
					if (::hx::IsNotEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported color mode",eb,dc,a9,2c)));
					}
					int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
					int stride;
					if (alpha) {
						stride = 2;
					}
					else {
						stride = 1;
					}
					int stride1 = ((stride * width) + 1);
					if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * stride1))) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
					}
					int alphvaIdx = -1;
					if (!(alpha)) {
						 ::haxe::ds::_List::ListNode _g1_head = d->h;
						while(::hx::IsNotNull( _g1_head )){
							 ::format::png::Chunk val = _g1_head->item;
							_g1_head = _g1_head->next;
							 ::format::png::Chunk t = val;
							if ((t->_hx_getIndex() == 4)) {
								if ((t->_hx_getString(0) == HX_("tRNS",23,3d,eb,4c))) {
									 ::haxe::io::Bytes data = t->_hx_getObject(1).StaticCast<  ::haxe::io::Bytes >();
									if ((data->length >= 2)) {
										alphvaIdx = ( (int)(data->b->__get(1)) );
									}
									goto _hx_goto_21;
								}
							}
						}
						_hx_goto_21:;
					}
					{
						int _g1 = 0;
						int _g2 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
						while((_g1 < _g2)){
							_g1 = (_g1 + 1);
							int y = (_g1 - 1);
							r = (r + 1);
							int f = ( (int)(data->b->__get((r - 1))) );
							switch((int)(f)){
								case (int)0: {
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											int v = ( (int)(data->b->__get((r - 1))) );
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												r = (r + 1);
												bgra->b[(w - 1)] = data->b->__get((r - 1));
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											int v = ( (int)(data->b->__get((r - 1))) );
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((v == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								case (int)1: {
									int cv = 0;
									int ca = 0;
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											cv = (cv + data->b->__get((r - 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											r = (r + 1);
											ca = (ca + data->b->__get((r - 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											cv = (cv + data->b->__get((r - 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((cv == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								case (int)2: {
									int stride;
									if ((y == 0)) {
										stride = 0;
									}
									else {
										stride = ((width * 4) * flipY1);
									}
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											int v = (data->b->__get((r - 1)) + bgra->b->__get((w - stride)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											r = (r + 1);
											int va = (data->b->__get((r - 1)) + bgra->b->__get((w - stride)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(va) );
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											int v = (data->b->__get((r - 1)) + bgra->b->__get((w - stride)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((v == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								case (int)3: {
									int cv = 0;
									int ca = 0;
									int stride;
									if ((y == 0)) {
										stride = 0;
									}
									else {
										stride = ((width * 4) * flipY1);
									}
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											cv = ((data->b->__get((r - 1)) + ((cv + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											r = (r + 1);
											ca = ((data->b->__get((r - 1)) + ((ca + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											cv = ((data->b->__get((r - 1)) + ((cv + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((cv == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								case (int)4: {
									int stride = ((width * 4) * flipY1);
									int cv = 0;
									int ca = 0;
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											int b;
											if ((y == 0)) {
												b = 0;
											}
											else {
												b = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c;
											bool c1;
											if ((x != 0)) {
												c1 = (y == 0);
											}
											else {
												c1 = true;
											}
											if (c1) {
												c = 0;
											}
											else {
												c = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k = ((cv + b) - c);
											int pa = (k - cv);
											if ((pa < 0)) {
												pa = -(pa);
											}
											int pb = (k - b);
											if ((pb < 0)) {
												pb = -(pb);
											}
											int pc = (k - c);
											if ((pc < 0)) {
												pc = -(pc);
											}
											int cv1;
											bool cv2;
											if ((pa <= pb)) {
												cv2 = (pa <= pc);
											}
											else {
												cv2 = false;
											}
											if (cv2) {
												cv1 = cv;
											}
											else {
												if ((pb <= pc)) {
													cv1 = b;
												}
												else {
													cv1 = c;
												}
											}
											r = (r + 1);
											cv = ((cv1 + data->b->__get((r - 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											int b1;
											if ((y == 0)) {
												b1 = 0;
											}
											else {
												b1 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c2;
											bool c3;
											if ((x != 0)) {
												c3 = (y == 0);
											}
											else {
												c3 = true;
											}
											if (c3) {
												c2 = 0;
											}
											else {
												c2 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k1 = ((ca + b1) - c2);
											int pa1 = (k1 - ca);
											if ((pa1 < 0)) {
												pa1 = -(pa1);
											}
											int pb1 = (k1 - b1);
											if ((pb1 < 0)) {
												pb1 = -(pb1);
											}
											int pc1 = (k1 - c2);
											if ((pc1 < 0)) {
												pc1 = -(pc1);
											}
											int ca1;
											bool ca2;
											if ((pa1 <= pb1)) {
												ca2 = (pa1 <= pc1);
											}
											else {
												ca2 = false;
											}
											if (ca2) {
												ca1 = ca;
											}
											else {
												if ((pb1 <= pc1)) {
													ca1 = b1;
												}
												else {
													ca1 = c2;
												}
											}
											r = (r + 1);
											ca = ((ca1 + data->b->__get((r - 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											int b;
											if ((y == 0)) {
												b = 0;
											}
											else {
												b = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c;
											bool c1;
											if ((x != 0)) {
												c1 = (y == 0);
											}
											else {
												c1 = true;
											}
											if (c1) {
												c = 0;
											}
											else {
												c = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k = ((cv + b) - c);
											int pa = (k - cv);
											if ((pa < 0)) {
												pa = -(pa);
											}
											int pb = (k - b);
											if ((pb < 0)) {
												pb = -(pb);
											}
											int pc = (k - c);
											if ((pc < 0)) {
												pc = -(pc);
											}
											int cv1;
											bool cv2;
											if ((pa <= pb)) {
												cv2 = (pa <= pc);
											}
											else {
												cv2 = false;
											}
											if (cv2) {
												cv1 = cv;
											}
											else {
												if ((pb <= pc)) {
													cv1 = b;
												}
												else {
													cv1 = c;
												}
											}
											r = (r + 1);
											cv = ((cv1 + data->b->__get((r - 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((cv == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								default:{
									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
								}
							}
							w = (w + lineDelta);
						}
					}
				}
			}
			break;
			case (int)1: {
				bool alpha = _g->_hx_getBool(0);
				{
					if (::hx::IsNotEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported color mode",eb,dc,a9,2c)));
					}
					int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
					int stride;
					if (alpha) {
						stride = 4;
					}
					else {
						stride = 3;
					}
					int stride1 = ((stride * width) + 1);
					if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * stride1))) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
					}
					int alphaRed = -1;
					int alphaGreen = -1;
					int alphaBlue = -1;
					if (!(alpha)) {
						 ::haxe::ds::_List::ListNode _g1_head = d->h;
						while(::hx::IsNotNull( _g1_head )){
							 ::format::png::Chunk val = _g1_head->item;
							_g1_head = _g1_head->next;
							 ::format::png::Chunk t = val;
							if ((t->_hx_getIndex() == 4)) {
								if ((t->_hx_getString(0) == HX_("tRNS",23,3d,eb,4c))) {
									 ::haxe::io::Bytes data = t->_hx_getObject(1).StaticCast<  ::haxe::io::Bytes >();
									if ((data->length >= 6)) {
										alphaRed = ( (int)(data->b->__get(1)) );
										alphaGreen = ( (int)(data->b->__get(3)) );
										alphaBlue = ( (int)(data->b->__get(5)) );
									}
									goto _hx_goto_33;
								}
							}
						}
						_hx_goto_33:;
					}
					int cr = 0;
					int cg = 0;
					int cb = 0;
					int ca = 0;
					{
						int _g1 = 0;
						int _g2 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
						while((_g1 < _g2)){
							_g1 = (_g1 + 1);
							int y = (_g1 - 1);
							r = (r + 1);
							int f = ( (int)(data->b->__get((r - 1))) );
							switch((int)(f)){
								case (int)0: {
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = data->b->__get((r + 2));
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = data->b->__get((r + 1));
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = data->b->__get(r);
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = data->b->__get((r + 3));
											}
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											{
												w = (w + 1);
												cb = ( (int)(data->b->__get((r + 2))) );
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											{
												w = (w + 1);
												cg = ( (int)(data->b->__get((r + 1))) );
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											{
												w = (w + 1);
												cr = ( (int)(data->b->__get(r)) );
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								case (int)1: {
									ca = 0;
									cb = ca;
									cg = cb;
									cr = cg;
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											cb = (cb + data->b->__get((r + 2)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											cg = (cg + data->b->__get((r + 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											cr = (cr + data->b->__get(r));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											ca = (ca + data->b->__get((r + 3)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											cb = (cb + data->b->__get((r + 2)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											cg = (cg + data->b->__get((r + 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											cr = (cr + data->b->__get(r));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								case (int)2: {
									int stride;
									if ((y == 0)) {
										stride = 0;
									}
									else {
										stride = ((width * 4) * flipY1);
									}
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											bgra->b[w] = ( (unsigned char)((data->b->__get((r + 2)) + bgra->b->__get((w - stride)))) );
											w = (w + 1);
											bgra->b[w] = ( (unsigned char)((data->b->__get((r + 1)) + bgra->b->__get((w - stride)))) );
											w = (w + 1);
											bgra->b[w] = ( (unsigned char)((data->b->__get(r) + bgra->b->__get((w - stride)))) );
											w = (w + 1);
											bgra->b[w] = ( (unsigned char)((data->b->__get((r + 3)) + bgra->b->__get((w - stride)))) );
											w = (w + 1);
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											{
												cb = (data->b->__get((r + 2)) + bgra->b->__get((w - stride)));
												bgra->b[w] = ( (unsigned char)(cb) );
											}
											w = (w + 1);
											{
												cg = (data->b->__get((r + 1)) + bgra->b->__get((w - stride)));
												bgra->b[w] = ( (unsigned char)(cg) );
											}
											w = (w + 1);
											{
												cr = (data->b->__get(r) + bgra->b->__get((w - stride)));
												bgra->b[w] = ( (unsigned char)(cr) );
											}
											w = (w + 1);
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								case (int)3: {
									ca = 0;
									cb = ca;
									cg = cb;
									cr = cg;
									int stride;
									if ((y == 0)) {
										stride = 0;
									}
									else {
										stride = ((width * 4) * flipY1);
									}
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											cb = ((data->b->__get((r + 2)) + ((cb + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											cg = ((data->b->__get((r + 1)) + ((cg + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											cr = ((data->b->__get(r) + ((cr + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											ca = ((data->b->__get((r + 3)) + ((ca + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											cb = ((data->b->__get((r + 2)) + ((cb + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											cg = ((data->b->__get((r + 1)) + ((cg + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											cr = ((data->b->__get(r) + ((cr + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								case (int)4: {
									int stride = ((width * 4) * flipY1);
									ca = 0;
									cb = ca;
									cg = cb;
									cr = cg;
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											int b;
											if ((y == 0)) {
												b = 0;
											}
											else {
												b = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c;
											bool c1;
											if ((x != 0)) {
												c1 = (y == 0);
											}
											else {
												c1 = true;
											}
											if (c1) {
												c = 0;
											}
											else {
												c = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k = ((cb + b) - c);
											int pa = (k - cb);
											if ((pa < 0)) {
												pa = -(pa);
											}
											int pb = (k - b);
											if ((pb < 0)) {
												pb = -(pb);
											}
											int pc = (k - c);
											if ((pc < 0)) {
												pc = -(pc);
											}
											int cb1;
											bool cb2;
											if ((pa <= pb)) {
												cb2 = (pa <= pc);
											}
											else {
												cb2 = false;
											}
											if (cb2) {
												cb1 = cb;
											}
											else {
												if ((pb <= pc)) {
													cb1 = b;
												}
												else {
													cb1 = c;
												}
											}
											cb = ((cb1 + data->b->__get((r + 2))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											int b1;
											if ((y == 0)) {
												b1 = 0;
											}
											else {
												b1 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c2;
											bool c3;
											if ((x != 0)) {
												c3 = (y == 0);
											}
											else {
												c3 = true;
											}
											if (c3) {
												c2 = 0;
											}
											else {
												c2 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k1 = ((cg + b1) - c2);
											int pa1 = (k1 - cg);
											if ((pa1 < 0)) {
												pa1 = -(pa1);
											}
											int pb1 = (k1 - b1);
											if ((pb1 < 0)) {
												pb1 = -(pb1);
											}
											int pc1 = (k1 - c2);
											if ((pc1 < 0)) {
												pc1 = -(pc1);
											}
											int cg1;
											bool cg2;
											if ((pa1 <= pb1)) {
												cg2 = (pa1 <= pc1);
											}
											else {
												cg2 = false;
											}
											if (cg2) {
												cg1 = cg;
											}
											else {
												if ((pb1 <= pc1)) {
													cg1 = b1;
												}
												else {
													cg1 = c2;
												}
											}
											cg = ((cg1 + data->b->__get((r + 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											int b2;
											if ((y == 0)) {
												b2 = 0;
											}
											else {
												b2 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c4;
											bool c5;
											if ((x != 0)) {
												c5 = (y == 0);
											}
											else {
												c5 = true;
											}
											if (c5) {
												c4 = 0;
											}
											else {
												c4 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k2 = ((cr + b2) - c4);
											int pa2 = (k2 - cr);
											if ((pa2 < 0)) {
												pa2 = -(pa2);
											}
											int pb2 = (k2 - b2);
											if ((pb2 < 0)) {
												pb2 = -(pb2);
											}
											int pc2 = (k2 - c4);
											if ((pc2 < 0)) {
												pc2 = -(pc2);
											}
											int cr1;
											bool cr2;
											if ((pa2 <= pb2)) {
												cr2 = (pa2 <= pc2);
											}
											else {
												cr2 = false;
											}
											if (cr2) {
												cr1 = cr;
											}
											else {
												if ((pb2 <= pc2)) {
													cr1 = b2;
												}
												else {
													cr1 = c4;
												}
											}
											cr = ((cr1 + data->b->__get(r)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											int b3;
											if ((y == 0)) {
												b3 = 0;
											}
											else {
												b3 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c6;
											bool c7;
											if ((x != 0)) {
												c7 = (y == 0);
											}
											else {
												c7 = true;
											}
											if (c7) {
												c6 = 0;
											}
											else {
												c6 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k3 = ((ca + b3) - c6);
											int pa3 = (k3 - ca);
											if ((pa3 < 0)) {
												pa3 = -(pa3);
											}
											int pb3 = (k3 - b3);
											if ((pb3 < 0)) {
												pb3 = -(pb3);
											}
											int pc3 = (k3 - c6);
											if ((pc3 < 0)) {
												pc3 = -(pc3);
											}
											int ca1;
											bool ca2;
											if ((pa3 <= pb3)) {
												ca2 = (pa3 <= pc3);
											}
											else {
												ca2 = false;
											}
											if (ca2) {
												ca1 = ca;
											}
											else {
												if ((pb3 <= pc3)) {
													ca1 = b3;
												}
												else {
													ca1 = c6;
												}
											}
											ca = ((ca1 + data->b->__get((r + 3))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											int b;
											if ((y == 0)) {
												b = 0;
											}
											else {
												b = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c;
											bool c1;
											if ((x != 0)) {
												c1 = (y == 0);
											}
											else {
												c1 = true;
											}
											if (c1) {
												c = 0;
											}
											else {
												c = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k = ((cb + b) - c);
											int pa = (k - cb);
											if ((pa < 0)) {
												pa = -(pa);
											}
											int pb = (k - b);
											if ((pb < 0)) {
												pb = -(pb);
											}
											int pc = (k - c);
											if ((pc < 0)) {
												pc = -(pc);
											}
											int cb1;
											bool cb2;
											if ((pa <= pb)) {
												cb2 = (pa <= pc);
											}
											else {
												cb2 = false;
											}
											if (cb2) {
												cb1 = cb;
											}
											else {
												if ((pb <= pc)) {
													cb1 = b;
												}
												else {
													cb1 = c;
												}
											}
											cb = ((cb1 + data->b->__get((r + 2))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											int b1;
											if ((y == 0)) {
												b1 = 0;
											}
											else {
												b1 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c2;
											bool c3;
											if ((x != 0)) {
												c3 = (y == 0);
											}
											else {
												c3 = true;
											}
											if (c3) {
												c2 = 0;
											}
											else {
												c2 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k1 = ((cg + b1) - c2);
											int pa1 = (k1 - cg);
											if ((pa1 < 0)) {
												pa1 = -(pa1);
											}
											int pb1 = (k1 - b1);
											if ((pb1 < 0)) {
												pb1 = -(pb1);
											}
											int pc1 = (k1 - c2);
											if ((pc1 < 0)) {
												pc1 = -(pc1);
											}
											int cg1;
											bool cg2;
											if ((pa1 <= pb1)) {
												cg2 = (pa1 <= pc1);
											}
											else {
												cg2 = false;
											}
											if (cg2) {
												cg1 = cg;
											}
											else {
												if ((pb1 <= pc1)) {
													cg1 = b1;
												}
												else {
													cg1 = c2;
												}
											}
											cg = ((cg1 + data->b->__get((r + 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											int b2;
											if ((y == 0)) {
												b2 = 0;
											}
											else {
												b2 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c4;
											bool c5;
											if ((x != 0)) {
												c5 = (y == 0);
											}
											else {
												c5 = true;
											}
											if (c5) {
												c4 = 0;
											}
											else {
												c4 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k2 = ((cr + b2) - c4);
											int pa2 = (k2 - cr);
											if ((pa2 < 0)) {
												pa2 = -(pa2);
											}
											int pb2 = (k2 - b2);
											if ((pb2 < 0)) {
												pb2 = -(pb2);
											}
											int pc2 = (k2 - c4);
											if ((pc2 < 0)) {
												pc2 = -(pc2);
											}
											int cr1;
											bool cr2;
											if ((pa2 <= pb2)) {
												cr2 = (pa2 <= pc2);
											}
											else {
												cr2 = false;
											}
											if (cr2) {
												cr1 = cr;
											}
											else {
												if ((pb2 <= pc2)) {
													cr1 = b2;
												}
												else {
													cr1 = c4;
												}
											}
											cr = ((cr1 + data->b->__get(r)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								default:{
									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
								}
							}
							w = (w + lineDelta);
						}
					}
				}
			}
			break;
			case (int)2: {
				 ::haxe::io::Bytes pal = ::format::png::Tools_obj::getPalette(d);
				if (::hx::IsNull( pal )) {
					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("PNG Palette is missing",0c,e8,57,88)));
				}
				 ::haxe::io::Bytes alpha = null();
				{
					 ::haxe::ds::_List::ListNode _g1_head = d->h;
					while(::hx::IsNotNull( _g1_head )){
						 ::format::png::Chunk val = _g1_head->item;
						_g1_head = _g1_head->next;
						 ::format::png::Chunk t = val;
						if ((t->_hx_getIndex() == 4)) {
							if ((t->_hx_getString(0) == HX_("tRNS",23,3d,eb,4c))) {
								 ::haxe::io::Bytes data = t->_hx_getObject(1).StaticCast<  ::haxe::io::Bytes >();
								alpha = data;
								goto _hx_goto_45;
							}
						}
					}
					_hx_goto_45:;
				}
				bool _hx_tmp;
				if (::hx::IsNotNull( alpha )) {
					_hx_tmp = (alpha->length < (1 << ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) )));
				}
				else {
					_hx_tmp = false;
				}
				if (_hx_tmp) {
					 ::haxe::io::Bytes alpha2 = ::haxe::io::Bytes_obj::alloc((1 << ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) )));
					alpha2->blit(0,alpha,0,alpha->length);
					alpha2->fill(alpha->length,(alpha2->length - alpha->length),255);
					alpha = alpha2;
				}
				int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
				int stride = (::Math_obj::ceil((( (Float)((width * ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) ))) ) / ( (Float)(8) ))) + 1);
				if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * stride))) {
					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
				}
				int rline = (stride - 1);
				{
					int _g = 0;
					int _g1 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
					while((_g < _g1)){
						_g = (_g + 1);
						int y = (_g - 1);
						r = (r + 1);
						int f = ( (int)(data->b->__get((r - 1))) );
						if ((f == 0)) {
							r = (r + rline);
							continue;
						}
						switch((int)(f)){
							case (int)1: {
								int c = 0;
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = ( (int)(data->b->__get(r)) );
										c = (c + v);
										{
											r = (r + 1);
											data->b[(r - 1)] = ( (unsigned char)((c & 255)) );
										}
									}
								}
							}
							break;
							case (int)2: {
								int stride;
								if ((y == 0)) {
									stride = 0;
								}
								else {
									stride = (rline + 1);
								}
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = ( (int)(data->b->__get(r)) );
										data->b[r] = ( (unsigned char)((v + data->b->__get((r - stride)))) );
										r = (r + 1);
									}
								}
							}
							break;
							case (int)3: {
								int c = 0;
								int stride;
								if ((y == 0)) {
									stride = 0;
								}
								else {
									stride = (rline + 1);
								}
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = ( (int)(data->b->__get(r)) );
										c = ((v + ((c + data->b->__get((r - stride))) >> 1)) & 255);
										{
											r = (r + 1);
											data->b[(r - 1)] = ( (unsigned char)(c) );
										}
									}
								}
							}
							break;
							case (int)4: {
								int stride = (rline + 1);
								int c = 0;
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = ( (int)(data->b->__get(r)) );
										int b;
										if ((y == 0)) {
											b = 0;
										}
										else {
											b = ( (int)(data->b->__get((r - stride))) );
										}
										int c1;
										bool c2;
										if ((x != 0)) {
											c2 = (y == 0);
										}
										else {
											c2 = true;
										}
										if (c2) {
											c1 = 0;
										}
										else {
											c1 = ( (int)(data->b->__get(((r - stride) - 1))) );
										}
										int k = ((c + b) - c1);
										int pa = (k - c);
										if ((pa < 0)) {
											pa = -(pa);
										}
										int pb = (k - b);
										if ((pb < 0)) {
											pb = -(pb);
										}
										int pc = (k - c1);
										if ((pc < 0)) {
											pc = -(pc);
										}
										int c3;
										bool c4;
										if ((pa <= pb)) {
											c4 = (pa <= pc);
										}
										else {
											c4 = false;
										}
										if (c4) {
											c3 = c;
										}
										else {
											if ((pb <= pc)) {
												c3 = b;
											}
											else {
												c3 = c1;
											}
										}
										c = ((c3 + v) & 255);
										{
											r = (r + 1);
											data->b[(r - 1)] = ( (unsigned char)(c) );
										}
									}
								}
							}
							break;
							default:{
								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
							}
						}
					}
				}
				int r1 = 0;
				if (::hx::IsEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
					int _g = 0;
					int _g1 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
					while((_g < _g1)){
						_g = (_g + 1);
						int y = (_g - 1);
						r1 = (r1 + 1);
						{
							int _g1 = 0;
							int _g2 = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
							while((_g1 < _g2)){
								_g1 = (_g1 + 1);
								int x = (_g1 - 1);
								r1 = (r1 + 1);
								int c = ( (int)(data->b->__get((r1 - 1))) );
								{
									w = (w + 1);
									bgra->b[(w - 1)] = pal->b->__get(((c * 3) + 2));
								}
								{
									w = (w + 1);
									bgra->b[(w - 1)] = pal->b->__get(((c * 3) + 1));
								}
								{
									w = (w + 1);
									bgra->b[(w - 1)] = pal->b->__get((c * 3));
								}
								{
									w = (w + 1);
									int v;
									if (::hx::IsNotNull( alpha )) {
										v = ( (int)(alpha->b->__get(c)) );
									}
									else {
										v = 255;
									}
									bgra->b[(w - 1)] = ( (unsigned char)(v) );
								}
							}
						}
						w = (w + lineDelta);
					}
				}
				else {
					if (::hx::IsLess( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
						int req = ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) );
						int mask = ((1 << req) - 1);
						{
							int _g = 0;
							int _g1 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
							while((_g < _g1)){
								_g = (_g + 1);
								int y = (_g - 1);
								r1 = (r1 + 1);
								int bits = 0;
								int nbits = 0;
								{
									int _g1 = 0;
									int _g2 = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
									while((_g1 < _g2)){
										_g1 = (_g1 + 1);
										int x = (_g1 - 1);
										if ((nbits < req)) {
											r1 = (r1 + 1);
											bits = ((bits << 8) | ( (int)(data->b->__get((r1 - 1))) ));
											nbits = (nbits + 8);
										}
										int c = (::hx::UShr(bits,(nbits - req)) & mask);
										nbits = (nbits - req);
										{
											w = (w + 1);
											bgra->b[(w - 1)] = pal->b->__get(((c * 3) + 2));
										}
										{
											w = (w + 1);
											bgra->b[(w - 1)] = pal->b->__get(((c * 3) + 1));
										}
										{
											w = (w + 1);
											bgra->b[(w - 1)] = pal->b->__get((c * 3));
										}
										{
											w = (w + 1);
											int v;
											if (::hx::IsNotNull( alpha )) {
												v = ( (int)(alpha->b->__get(c)) );
											}
											else {
												v = 255;
											}
											bgra->b[(w - 1)] = ( (unsigned char)(v) );
										}
									}
								}
								w = (w + lineDelta);
							}
						}
					}
					else {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic) + HX_(" indexed bits per pixel not supported",99,37,8f,c1)))));
					}
				}
			}
			break;
		}
	}
	return bgra;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tools_obj,extract32,return )

 ::haxe::io::Bytes Tools_obj::extract( ::haxe::ds::List d, ::haxe::io::Bytes output,::hx::Null< bool >  __o_expandAlpha){
            		bool expandAlpha = __o_expandAlpha.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_650_extract)
HXLINE( 651)		 ::Dynamic h = ::format::png::Tools_obj::getHeader(d);
HXLINE( 652)		bool hasAlpha = false;
HXLINE( 653)		int channels;
HXDLIN( 653)		 ::format::png::Color _g = h->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
HXDLIN( 653)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 655)				bool alpha = _g->_hx_getBool(0);
HXDLIN( 655)				hasAlpha = alpha;
HXDLIN( 655)				if (alpha) {
HXLINE( 653)					channels = 2;
            				}
            				else {
HXLINE( 653)					channels = 1;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 656)				bool alpha = _g->_hx_getBool(0);
HXDLIN( 656)				hasAlpha = alpha;
HXDLIN( 656)				if (alpha) {
HXLINE( 653)					channels = 4;
            				}
            				else {
HXLINE( 653)					channels = 3;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 654)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            			break;
            		}
HXLINE( 658)		bool _hx_tmp;
HXDLIN( 658)		if (expandAlpha) {
HXLINE( 658)			_hx_tmp = hasAlpha;
            		}
            		else {
HXLINE( 658)			_hx_tmp = false;
            		}
HXDLIN( 658)		if (_hx_tmp) {
HXLINE( 659)			expandAlpha = false;
            		}
HXLINE( 660)		int bpp = (( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) ) >> 3);
HXLINE( 661)		int outChannels;
HXDLIN( 661)		if (expandAlpha) {
HXLINE( 661)			outChannels = (channels + 1);
            		}
            		else {
HXLINE( 661)			outChannels = channels;
            		}
HXLINE( 662)		if (::hx::IsNull( output )) {
HXLINE( 663)			output = ::haxe::io::Bytes_obj::alloc((((outChannels * bpp) * ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )) * ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )));
            		}
HXLINE( 664)		 ::haxe::io::Bytes data = null();
HXLINE( 665)		 ::haxe::io::BytesBuffer fullData = null();
HXLINE( 666)		{
HXLINE( 666)			 ::haxe::ds::_List::ListNode _g3_head = d->h;
HXDLIN( 666)			while(::hx::IsNotNull( _g3_head )){
HXLINE( 666)				 ::format::png::Chunk val = _g3_head->item;
HXDLIN( 666)				_g3_head = _g3_head->next;
HXDLIN( 666)				 ::format::png::Chunk c = val;
HXLINE( 667)				if ((c->_hx_getIndex() == 2)) {
HXLINE( 668)					 ::haxe::io::Bytes b = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXLINE( 669)					if (::hx::IsNotNull( fullData )) {
HXLINE( 670)						::Array< unsigned char > b1 = fullData->b;
HXDLIN( 670)						::Array< unsigned char > b2 = b->b;
HXDLIN( 670)						{
HXLINE( 670)							int _g = 0;
HXDLIN( 670)							int _g1 = b->length;
HXDLIN( 670)							while((_g < _g1)){
HXLINE( 670)								_g = (_g + 1);
HXDLIN( 670)								int i = (_g - 1);
HXDLIN( 670)								fullData->b->push(b2->__get(i));
            							}
            						}
            					}
            					else {
HXLINE( 671)						if (::hx::IsNull( data )) {
HXLINE( 672)							data = b;
            						}
            						else {
HXLINE( 674)							fullData =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 675)							{
HXLINE( 675)								::Array< unsigned char > b1 = fullData->b;
HXDLIN( 675)								::Array< unsigned char > b2 = data->b;
HXDLIN( 675)								{
HXLINE( 675)									int _g = 0;
HXDLIN( 675)									int _g1 = data->length;
HXDLIN( 675)									while((_g < _g1)){
HXLINE( 675)										_g = (_g + 1);
HXDLIN( 675)										int i = (_g - 1);
HXDLIN( 675)										fullData->b->push(b2->__get(i));
            									}
            								}
            							}
HXLINE( 676)							{
HXLINE( 676)								::Array< unsigned char > b11 = fullData->b;
HXDLIN( 676)								::Array< unsigned char > b21 = b->b;
HXDLIN( 676)								{
HXLINE( 676)									int _g2 = 0;
HXDLIN( 676)									int _g3 = b->length;
HXDLIN( 676)									while((_g2 < _g3)){
HXLINE( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										int i = (_g2 - 1);
HXDLIN( 676)										fullData->b->push(b21->__get(i));
            									}
            								}
            							}
HXLINE( 677)							data = null();
            						}
            					}
            				}
            			}
            		}
HXLINE( 681)		if (::hx::IsNotNull( fullData )) {
HXLINE( 682)			data = fullData->getBytes();
            		}
HXLINE( 683)		if (::hx::IsNull( data )) {
HXLINE( 684)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Data not found",1f,f6,a3,e4)));
            		}
HXLINE( 685)		data = ::format::tools::Inflate_obj::run(data);
HXLINE( 686)		int r = 0;
HXDLIN( 686)		int w = 0;
HXLINE( 702)		int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE( 703)		int ncomps = (channels * bpp);
HXLINE( 704)		int upperLine = ((outChannels * bpp) * width);
HXLINE( 705)		int leftPixel = (outChannels * bpp);
HXLINE( 706)		if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * ((ncomps * width) + 1)))) {
HXLINE( 706)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
            		}
HXLINE( 708)		::Array< int > _g1 = ::Array_obj< int >::__new(0);
HXDLIN( 708)		{
HXLINE( 708)			int _g2 = 0;
HXDLIN( 708)			int _g3 = ncomps;
HXDLIN( 708)			while((_g2 < _g3)){
HXLINE( 708)				_g2 = (_g2 + 1);
HXDLIN( 708)				int i = (_g2 - 1);
HXDLIN( 708)				_g1->push(0);
            			}
            		}
HXDLIN( 708)		::Array< int > tmp = _g1;
HXLINE( 709)		{
HXLINE( 709)			int _g4 = 0;
HXDLIN( 709)			int _g5 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXDLIN( 709)			while((_g4 < _g5)){
HXLINE( 709)				_g4 = (_g4 + 1);
HXDLIN( 709)				int y = (_g4 - 1);
HXLINE( 710)				r = (r + 1);
HXDLIN( 710)				int f = ( (int)(data->b->__get((r - 1))) );
HXLINE( 711)				bool _hx_tmp;
HXDLIN( 711)				if ((f != 0)) {
HXLINE( 711)					_hx_tmp = (f != 2);
            				}
            				else {
HXLINE( 711)					_hx_tmp = false;
            				}
HXDLIN( 711)				if (_hx_tmp) {
HXLINE( 712)					int _g = 0;
HXDLIN( 712)					int _g1 = ncomps;
HXDLIN( 712)					while((_g < _g1)){
HXLINE( 712)						_g = (_g + 1);
HXDLIN( 712)						int i = (_g - 1);
HXLINE( 713)						tmp[i] = 0;
            					}
            				}
HXLINE( 715)				switch((int)(f)){
            					case (int)0: {
HXLINE( 717)						int _g = 0;
HXDLIN( 717)						int _g1 = width;
HXDLIN( 717)						while((_g < _g1)){
HXLINE( 717)							_g = (_g + 1);
HXDLIN( 717)							int x = (_g - 1);
HXLINE( 718)							{
HXLINE( 718)								int _g1 = 0;
HXDLIN( 718)								int _g2 = ncomps;
HXDLIN( 718)								while((_g1 < _g2)){
HXLINE( 718)									_g1 = (_g1 + 1);
HXDLIN( 718)									int i = (_g1 - 1);
HXLINE( 719)									{
HXLINE( 719)										r = (r + 1);
HXDLIN( 719)										{
HXLINE( 719)											w = (w + 1);
HXDLIN( 719)											output->b[(w - 1)] = data->b->__get((r - 1));
            										}
            									}
            								}
            							}
HXLINE( 720)							if (expandAlpha) {
HXLINE( 720)								{
HXLINE( 720)									w = (w + 1);
HXDLIN( 720)									output->b[(w - 1)] = ( (unsigned char)(255) );
            								}
HXDLIN( 720)								if ((bpp == 2)) {
HXLINE( 720)									w = (w + 1);
HXDLIN( 720)									output->b[(w - 1)] = ( (unsigned char)(255) );
            								}
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 723)						int _g = 0;
HXDLIN( 723)						int _g1 = width;
HXDLIN( 723)						while((_g < _g1)){
HXLINE( 723)							_g = (_g + 1);
HXDLIN( 723)							int x = (_g - 1);
HXLINE( 724)							{
HXLINE( 724)								int _g1 = 0;
HXDLIN( 724)								int _g2 = ncomps;
HXDLIN( 724)								while((_g1 < _g2)){
HXLINE( 724)									_g1 = (_g1 + 1);
HXDLIN( 724)									int i = (_g1 - 1);
HXLINE( 725)									::Array< int > tmp1 = tmp;
HXDLIN( 725)									int i1 = i;
HXDLIN( 725)									r = (r + 1);
HXDLIN( 725)									tmp1[i1] = (tmp1->__get(i1) + data->b->__get((r - 1)));
HXLINE( 726)									{
HXLINE( 726)										w = (w + 1);
HXDLIN( 726)										output->b[(w - 1)] = ( (unsigned char)(tmp->__get(i)) );
            									}
            								}
            							}
HXLINE( 728)							if (expandAlpha) {
HXLINE( 728)								{
HXLINE( 728)									w = (w + 1);
HXDLIN( 728)									output->b[(w - 1)] = ( (unsigned char)(255) );
            								}
HXDLIN( 728)								if ((bpp == 2)) {
HXLINE( 728)									w = (w + 1);
HXDLIN( 728)									output->b[(w - 1)] = ( (unsigned char)(255) );
            								}
            							}
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 731)						int stride;
HXDLIN( 731)						if ((y == 0)) {
HXLINE( 731)							stride = 0;
            						}
            						else {
HXLINE( 731)							stride = upperLine;
            						}
HXLINE( 732)						{
HXLINE( 732)							int _g = 0;
HXDLIN( 732)							int _g1 = width;
HXDLIN( 732)							while((_g < _g1)){
HXLINE( 732)								_g = (_g + 1);
HXDLIN( 732)								int x = (_g - 1);
HXLINE( 733)								{
HXLINE( 733)									int _g1 = 0;
HXDLIN( 733)									int _g2 = ncomps;
HXDLIN( 733)									while((_g1 < _g2)){
HXLINE( 733)										_g1 = (_g1 + 1);
HXDLIN( 733)										int i = (_g1 - 1);
HXLINE( 734)										r = (r + 1);
HXDLIN( 734)										int v = (data->b->__get((r - 1)) + output->b->__get((w - stride)));
HXLINE( 735)										{
HXLINE( 735)											w = (w + 1);
HXDLIN( 735)											output->b[(w - 1)] = ( (unsigned char)(v) );
            										}
            									}
            								}
HXLINE( 737)								if (expandAlpha) {
HXLINE( 737)									{
HXLINE( 737)										w = (w + 1);
HXDLIN( 737)										output->b[(w - 1)] = ( (unsigned char)(255) );
            									}
HXDLIN( 737)									if ((bpp == 2)) {
HXLINE( 737)										w = (w + 1);
HXDLIN( 737)										output->b[(w - 1)] = ( (unsigned char)(255) );
            									}
            								}
            							}
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 740)						int stride;
HXDLIN( 740)						if ((y == 0)) {
HXLINE( 740)							stride = 0;
            						}
            						else {
HXLINE( 740)							stride = upperLine;
            						}
HXLINE( 741)						{
HXLINE( 741)							int _g = 0;
HXDLIN( 741)							int _g1 = width;
HXDLIN( 741)							while((_g < _g1)){
HXLINE( 741)								_g = (_g + 1);
HXDLIN( 741)								int x = (_g - 1);
HXLINE( 742)								{
HXLINE( 742)									int _g1 = 0;
HXDLIN( 742)									int _g2 = ncomps;
HXDLIN( 742)									while((_g1 < _g2)){
HXLINE( 742)										_g1 = (_g1 + 1);
HXDLIN( 742)										int i = (_g1 - 1);
HXLINE( 743)										r = (r + 1);
HXDLIN( 743)										tmp[i] = ((data->b->__get((r - 1)) + ((tmp->__get(i) + output->b->__get((w - stride))) >> 1)) & 255);
HXLINE( 744)										{
HXLINE( 744)											w = (w + 1);
HXDLIN( 744)											output->b[(w - 1)] = ( (unsigned char)(tmp->__get(i)) );
            										}
            									}
            								}
HXLINE( 746)								if (expandAlpha) {
HXLINE( 746)									{
HXLINE( 746)										w = (w + 1);
HXDLIN( 746)										output->b[(w - 1)] = ( (unsigned char)(255) );
            									}
HXDLIN( 746)									if ((bpp == 2)) {
HXLINE( 746)										w = (w + 1);
HXDLIN( 746)										output->b[(w - 1)] = ( (unsigned char)(255) );
            									}
            								}
            							}
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 758)						int _g = 0;
HXDLIN( 758)						int _g1 = width;
HXDLIN( 758)						while((_g < _g1)){
HXLINE( 758)							_g = (_g + 1);
HXDLIN( 758)							int x = (_g - 1);
HXLINE( 759)							{
HXLINE( 759)								int _g1 = 0;
HXDLIN( 759)								int _g2 = ncomps;
HXDLIN( 759)								while((_g1 < _g2)){
HXLINE( 759)									_g1 = (_g1 + 1);
HXDLIN( 759)									int i = (_g1 - 1);
HXLINE( 760)									int prev = tmp->__get(i);
HXDLIN( 760)									int b;
HXDLIN( 760)									if ((y == 0)) {
HXLINE( 760)										b = 0;
            									}
            									else {
HXLINE( 760)										b = ( (int)(output->b->__get((w - upperLine))) );
            									}
HXDLIN( 760)									int c;
HXDLIN( 760)									bool c1;
HXDLIN( 760)									if ((x != 0)) {
HXLINE( 760)										c1 = (y == 0);
            									}
            									else {
HXLINE( 760)										c1 = true;
            									}
HXDLIN( 760)									if (c1) {
HXLINE( 760)										c = 0;
            									}
            									else {
HXLINE( 760)										c = ( (int)(output->b->__get(((w - upperLine) - leftPixel))) );
            									}
HXDLIN( 760)									int k = ((prev + b) - c);
HXDLIN( 760)									int pa = (k - prev);
HXDLIN( 760)									if ((pa < 0)) {
HXLINE( 753)										pa = -(pa);
            									}
HXLINE( 760)									int pb = (k - b);
HXDLIN( 760)									if ((pb < 0)) {
HXLINE( 754)										pb = -(pb);
            									}
HXLINE( 760)									int pc = (k - c);
HXDLIN( 760)									if ((pc < 0)) {
HXLINE( 755)										pc = -(pc);
            									}
HXLINE( 760)									int _hx_tmp;
HXDLIN( 760)									bool _hx_tmp1;
HXDLIN( 760)									if ((pa <= pb)) {
HXLINE( 760)										_hx_tmp1 = (pa <= pc);
            									}
            									else {
HXLINE( 760)										_hx_tmp1 = false;
            									}
HXDLIN( 760)									if (_hx_tmp1) {
HXLINE( 760)										_hx_tmp = prev;
            									}
            									else {
HXLINE( 760)										if ((pb <= pc)) {
HXLINE( 760)											_hx_tmp = b;
            										}
            										else {
HXLINE( 760)											_hx_tmp = c;
            										}
            									}
HXDLIN( 760)									r = (r + 1);
HXDLIN( 760)									tmp[i] = ((_hx_tmp + data->b->__get((r - 1))) & 255);
HXLINE( 761)									{
HXLINE( 761)										w = (w + 1);
HXDLIN( 761)										output->b[(w - 1)] = ( (unsigned char)(tmp->__get(i)) );
            									}
            								}
            							}
HXLINE( 763)							if (expandAlpha) {
HXLINE( 763)								{
HXLINE( 763)									w = (w + 1);
HXDLIN( 763)									output->b[(w - 1)] = ( (unsigned char)(255) );
            								}
HXDLIN( 763)								if ((bpp == 2)) {
HXLINE( 763)									w = (w + 1);
HXDLIN( 763)									output->b[(w - 1)] = ( (unsigned char)(255) );
            								}
            							}
            						}
            					}
            					break;
            					default:{
HXLINE( 766)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
            					}
            				}
            			}
            		}
HXLINE( 769)		if (::hx::IsEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),16 )) {
HXLINE( 771)			int w = 0;
HXLINE( 772)			{
HXLINE( 772)				int _g = 0;
HXDLIN( 772)				int _g1 = ((( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * width) * outChannels);
HXDLIN( 772)				while((_g < _g1)){
HXLINE( 772)					_g = (_g + 1);
HXDLIN( 772)					int x = (_g - 1);
HXLINE( 773)					int a = ( (int)(output->b->__get(w)) );
HXLINE( 774)					int b = ( (int)(output->b->__get((w + 1))) );
HXLINE( 775)					{
HXLINE( 775)						w = (w + 1);
HXDLIN( 775)						output->b[(w - 1)] = ( (unsigned char)(b) );
            					}
HXLINE( 776)					{
HXLINE( 776)						w = (w + 1);
HXDLIN( 776)						output->b[(w - 1)] = ( (unsigned char)(a) );
            					}
            				}
            			}
            		}
HXLINE( 779)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tools_obj,extract,return )

 ::haxe::ds::List Tools_obj::buildGrey(int width,int height, ::haxe::io::Bytes data, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_785_buildGrey)
HXLINE( 786)		 ::haxe::io::Bytes rgb = ::haxe::io::Bytes_obj::alloc(((width * height) + height));
HXLINE( 788)		int w = 0;
HXDLIN( 788)		int r = 0;
HXLINE( 789)		{
HXLINE( 789)			int _g = 0;
HXDLIN( 789)			int _g1 = height;
HXDLIN( 789)			while((_g < _g1)){
HXLINE( 789)				_g = (_g + 1);
HXDLIN( 789)				int y = (_g - 1);
HXLINE( 790)				{
HXLINE( 790)					w = (w + 1);
HXDLIN( 790)					rgb->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 791)				{
HXLINE( 791)					int _g1 = 0;
HXDLIN( 791)					int _g2 = width;
HXDLIN( 791)					while((_g1 < _g2)){
HXLINE( 791)						_g1 = (_g1 + 1);
HXDLIN( 791)						int x = (_g1 - 1);
HXLINE( 792)						{
HXLINE( 792)							w = (w + 1);
HXDLIN( 792)							r = (r + 1);
HXDLIN( 792)							rgb->b[(w - 1)] = data->b->__get((r - 1));
            						}
            					}
            				}
            			}
            		}
HXLINE( 794)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 795)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColGrey(false)))));
HXLINE( 796)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgb,level)));
HXLINE( 797)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 798)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,buildGrey,return )

 ::haxe::ds::List Tools_obj::buildIndexed(int width,int height, ::haxe::io::Bytes data, ::haxe::io::Bytes palette, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_804_buildIndexed)
HXLINE( 805)		 ::haxe::io::Bytes rgb = ::haxe::io::Bytes_obj::alloc(((width * height) + height));
HXLINE( 806)		int w = 0;
HXDLIN( 806)		int r = 0;
HXLINE( 807)		{
HXLINE( 807)			int _g = 0;
HXDLIN( 807)			int _g1 = height;
HXDLIN( 807)			while((_g < _g1)){
HXLINE( 807)				_g = (_g + 1);
HXDLIN( 807)				int y = (_g - 1);
HXLINE( 808)				{
HXLINE( 808)					w = (w + 1);
HXDLIN( 808)					rgb->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 809)				{
HXLINE( 809)					int _g1 = 0;
HXDLIN( 809)					int _g2 = width;
HXDLIN( 809)					while((_g1 < _g2)){
HXLINE( 809)						_g1 = (_g1 + 1);
HXDLIN( 809)						int x = (_g1 - 1);
HXLINE( 810)						{
HXLINE( 810)							w = (w + 1);
HXDLIN( 810)							r = (r + 1);
HXDLIN( 810)							rgb->b[(w - 1)] = data->b->__get((r - 1));
            						}
            					}
            				}
            			}
            		}
HXLINE( 812)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 813)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColIndexed_dyn()))));
HXLINE( 814)		l->add(::format::png::Chunk_obj::CPalette(palette));
HXLINE( 815)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgb,level)));
HXLINE( 816)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 817)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Tools_obj,buildIndexed,return )

 ::haxe::ds::List Tools_obj::buildRGB(int width,int height, ::haxe::io::Bytes data, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_823_buildRGB)
HXLINE( 824)		 ::haxe::io::Bytes rgb = ::haxe::io::Bytes_obj::alloc((((width * height) * 3) + height));
HXLINE( 826)		int w = 0;
HXDLIN( 826)		int r = 0;
HXLINE( 827)		{
HXLINE( 827)			int _g = 0;
HXDLIN( 827)			int _g1 = height;
HXDLIN( 827)			while((_g < _g1)){
HXLINE( 827)				_g = (_g + 1);
HXDLIN( 827)				int y = (_g - 1);
HXLINE( 828)				{
HXLINE( 828)					w = (w + 1);
HXDLIN( 828)					rgb->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 829)				{
HXLINE( 829)					int _g1 = 0;
HXDLIN( 829)					int _g2 = width;
HXDLIN( 829)					while((_g1 < _g2)){
HXLINE( 829)						_g1 = (_g1 + 1);
HXDLIN( 829)						int x = (_g1 - 1);
HXLINE( 830)						{
HXLINE( 830)							w = (w + 1);
HXDLIN( 830)							rgb->b[(w - 1)] = data->b->__get((r + 2));
            						}
HXLINE( 831)						{
HXLINE( 831)							w = (w + 1);
HXDLIN( 831)							rgb->b[(w - 1)] = data->b->__get((r + 1));
            						}
HXLINE( 832)						{
HXLINE( 832)							w = (w + 1);
HXDLIN( 832)							rgb->b[(w - 1)] = data->b->__get(r);
            						}
HXLINE( 833)						r = (r + 3);
            					}
            				}
            			}
            		}
HXLINE( 836)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 837)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColTrue(false)))));
HXLINE( 838)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgb,level)));
HXLINE( 839)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 840)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,buildRGB,return )

 ::haxe::ds::List Tools_obj::build32ARGB(int width,int height, ::haxe::io::Bytes data, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_846_build32ARGB)
HXLINE( 847)		 ::haxe::io::Bytes rgba = ::haxe::io::Bytes_obj::alloc((((width * height) * 4) + height));
HXLINE( 849)		int w = 0;
HXDLIN( 849)		int r = 0;
HXLINE( 850)		{
HXLINE( 850)			int _g = 0;
HXDLIN( 850)			int _g1 = height;
HXDLIN( 850)			while((_g < _g1)){
HXLINE( 850)				_g = (_g + 1);
HXDLIN( 850)				int y = (_g - 1);
HXLINE( 851)				{
HXLINE( 851)					w = (w + 1);
HXDLIN( 851)					rgba->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 852)				{
HXLINE( 852)					int _g1 = 0;
HXDLIN( 852)					int _g2 = width;
HXDLIN( 852)					while((_g1 < _g2)){
HXLINE( 852)						_g1 = (_g1 + 1);
HXDLIN( 852)						int x = (_g1 - 1);
HXLINE( 853)						{
HXLINE( 853)							w = (w + 1);
HXDLIN( 853)							rgba->b[(w - 1)] = data->b->__get((r + 1));
            						}
HXLINE( 854)						{
HXLINE( 854)							w = (w + 1);
HXDLIN( 854)							rgba->b[(w - 1)] = data->b->__get((r + 2));
            						}
HXLINE( 855)						{
HXLINE( 855)							w = (w + 1);
HXDLIN( 855)							rgba->b[(w - 1)] = data->b->__get((r + 3));
            						}
HXLINE( 856)						{
HXLINE( 856)							w = (w + 1);
HXDLIN( 856)							rgba->b[(w - 1)] = data->b->__get(r);
            						}
HXLINE( 857)						r = (r + 4);
            					}
            				}
            			}
            		}
HXLINE( 860)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 861)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColTrue(true)))));
HXLINE( 862)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgba,level)));
HXLINE( 863)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 864)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,build32ARGB,return )

 ::haxe::ds::List Tools_obj::build32BGRA(int width,int height, ::haxe::io::Bytes data, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_870_build32BGRA)
HXLINE( 871)		 ::haxe::io::Bytes rgba = ::haxe::io::Bytes_obj::alloc((((width * height) * 4) + height));
HXLINE( 873)		int w = 0;
HXDLIN( 873)		int r = 0;
HXLINE( 874)		{
HXLINE( 874)			int _g = 0;
HXDLIN( 874)			int _g1 = height;
HXDLIN( 874)			while((_g < _g1)){
HXLINE( 874)				_g = (_g + 1);
HXDLIN( 874)				int y = (_g - 1);
HXLINE( 875)				{
HXLINE( 875)					w = (w + 1);
HXDLIN( 875)					rgba->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 876)				{
HXLINE( 876)					int _g1 = 0;
HXDLIN( 876)					int _g2 = width;
HXDLIN( 876)					while((_g1 < _g2)){
HXLINE( 876)						_g1 = (_g1 + 1);
HXDLIN( 876)						int x = (_g1 - 1);
HXLINE( 877)						{
HXLINE( 877)							w = (w + 1);
HXDLIN( 877)							rgba->b[(w - 1)] = data->b->__get((r + 2));
            						}
HXLINE( 878)						{
HXLINE( 878)							w = (w + 1);
HXDLIN( 878)							rgba->b[(w - 1)] = data->b->__get((r + 1));
            						}
HXLINE( 879)						{
HXLINE( 879)							w = (w + 1);
HXDLIN( 879)							rgba->b[(w - 1)] = data->b->__get(r);
            						}
HXLINE( 880)						{
HXLINE( 880)							w = (w + 1);
HXDLIN( 880)							rgba->b[(w - 1)] = data->b->__get((r + 3));
            						}
HXLINE( 881)						r = (r + 4);
            					}
            				}
            			}
            		}
HXLINE( 884)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 885)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColTrue(true)))));
HXLINE( 886)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgba,level)));
HXLINE( 887)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 888)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,build32BGRA,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { outValue = filter_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { outValue = extract_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buildRGB") ) { outValue = buildRGB_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeader") ) { outValue = getHeader_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"extract32") ) { outValue = extract32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buildGrey") ) { outValue = buildGrey_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getPalette") ) { outValue = getPalette_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"extractGrey") ) { outValue = extractGrey_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"build32ARGB") ) { outValue = build32ARGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"build32BGRA") ) { outValue = build32BGRA_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reverseBytes") ) { outValue = reverseBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buildIndexed") ) { outValue = buildIndexed_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("getHeader",c3,92,56,79),
	HX_("getPalette",85,18,c5,bb),
	HX_("filter",b8,1f,35,85),
	HX_("reverseBytes",e9,e3,fc,d3),
	HX_("extractGrey",40,e9,39,59),
	HX_("extract32",20,74,f3,90),
	HX_("extract",41,b5,ea,78),
	HX_("buildGrey",ad,09,a8,e4),
	HX_("buildIndexed",63,8a,17,f3),
	HX_("buildRGB",7f,4c,b6,53),
	HX_("build32ARGB",19,2f,4e,75),
	HX_("build32BGRA",81,16,ef,75),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.png.Tools",7f,40,56,da);
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
} // end namespace png
