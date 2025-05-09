#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#include <_UnicodeString/UnicodeString_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7d9cf70d988be490_45_new,"flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",45,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_238_destroy,"flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",238,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_248_drawFrame,"flixel.text.FlxText","drawFrame",0xd9b5be4b,"flixel.text.FlxText.drawFrame","flixel/text/FlxText.hx",248,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_262_stampOnAtlas,"flixel.text.FlxText","stampOnAtlas",0x66244e67,"flixel.text.FlxText.stampOnAtlas","flixel/text/FlxText.hx",262,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_301_applyMarkup,"flixel.text.FlxText","applyMarkup",0x660988f8,"flixel.text.FlxText.applyMarkup","flixel/text/FlxText.hx",301,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_415_addFormat,"flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",415,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_410_addFormat,"flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",410,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_427_removeFormat,"flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",427,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_473_clearFormats,"flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",473,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_494_setFormat,"flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",494,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_526_setBorderStyle,"flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",526,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_536_updateHitbox,"flixel.text.FlxText","updateHitbox",0x91c9e8ff,"flixel.text.FlxText.updateHitbox","flixel/text/FlxText.hx",536,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_542_getScreenBounds,"flixel.text.FlxText","getScreenBounds",0xa33cf2f9,"flixel.text.FlxText.getScreenBounds","flixel/text/FlxText.hx",542,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_548_set_fieldWidth,"flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",548,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_572_get_fieldWidth,"flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",572,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_577_get_fieldHeight,"flixel.text.FlxText","get_fieldHeight",0x04ec1e1a,"flixel.text.FlxText.get_fieldHeight","flixel/text/FlxText.hx",577,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_581_set_fieldHeight,"flixel.text.FlxText","set_fieldHeight",0x00b79b26,"flixel.text.FlxText.set_fieldHeight","flixel/text/FlxText.hx",581,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_599_set_autoSize,"flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",599,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_611_get_autoSize,"flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",611,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_615_set_text,"flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",615,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_628_get_size,"flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",628,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_632_set_size,"flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",632,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_639_set_color,"flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",639,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_652_get_font,"flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",652,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_656_set_font,"flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",656,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_680_get_embedded,"flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",680,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_685_get_systemFont,"flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",685,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_689_set_systemFont,"flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",689,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_698_get_bold,"flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",698,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_702_set_bold,"flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",702,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_713_get_italic,"flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",713,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_717_set_italic,"flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",717,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_728_get_wordWrap,"flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",728,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_732_set_wordWrap,"flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",732,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_743_get_alignment,"flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",743,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_747_set_alignment,"flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",747,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_754_set_borderStyle,"flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",754,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_762_set_borderColor,"flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",762,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_770_set_borderSize,"flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",770,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_778_set_borderQuality,"flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",778,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_787_set_graphic,"flixel.text.FlxText","set_graphic",0x740d070d,"flixel.text.FlxText.set_graphic","flixel/text/FlxText.hx",787,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_795_get_width,"flixel.text.FlxText","get_width",0x1933231f,"flixel.text.FlxText.get_width","flixel/text/FlxText.hx",795,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_801_get_height,"flixel.text.FlxText","get_height",0xa9db10ae,"flixel.text.FlxText.get_height","flixel/text/FlxText.hx",801,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_807_updateColorTransform,"flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",807,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_826_regenGraphic,"flixel.text.FlxText","regenGraphic",0xc617a9e9,"flixel.text.FlxText.regenGraphic","flixel/text/FlxText.hx",826,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_902_drawTextFieldTo,"flixel.text.FlxText","drawTextFieldTo",0xda5cac46,"flixel.text.FlxText.drawTextFieldTo","flixel/text/FlxText.hx",902,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_958_draw,"flixel.text.FlxText","draw",0x3a66d282,"flixel.text.FlxText.draw","flixel/text/FlxText.hx",958,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_969_calcFrame,"flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",969,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_981_applyBorderStyle,"flixel.text.FlxText","applyBorderStyle",0x7fb82955,"flixel.text.FlxText.applyBorderStyle","flixel/text/FlxText.hx",981,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1047_applyBorderTransparency,"flixel.text.FlxText","applyBorderTransparency",0x59c1b674,"flixel.text.FlxText.applyBorderTransparency","flixel/text/FlxText.hx",1047,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1063_copyTextWithOffset,"flixel.text.FlxText","copyTextWithOffset",0x8b535ed9,"flixel.text.FlxText.copyTextWithOffset","flixel/text/FlxText.hx",1063,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1070_applyFormats,"flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",1070,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1096_copyTextFormat,"flixel.text.FlxText","copyTextFormat",0xce0953d7,"flixel.text.FlxText.copyTextFormat","flixel/text/FlxText.hx",1096,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1113_dtfCopy,"flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",1113,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1119_updateDefaultFormat,"flixel.text.FlxText","updateDefaultFormat",0x3cb6b251,"flixel.text.FlxText.updateDefaultFormat","flixel/text/FlxText.hx",1119,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1126_set_frames,"flixel.text.FlxText","set_frames",0x579256e1,"flixel.text.FlxText.set_frames","flixel/text/FlxText.hx",1126,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_50_boot,"flixel.text.FlxText","boot",0x39122ab0,"flixel.text.FlxText.boot","flixel/text/FlxText.hx",50,0xdf165a6e)
namespace flixel{
namespace text{

void FlxText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float FieldWidth = __o_FieldWidth.Default(0);
            		int Size = __o_Size.Default(8);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_45_new)
HXLINE( 176)		this->_hasBorderAlpha = false;
HXLINE( 167)		this->_regen = true;
HXLINE( 161)		this->_formatRanges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 151)		this->_autoHeight = true;
HXLINE( 120)		this->borderQuality = ((Float)1);
HXLINE( 113)		this->borderSize = ((Float)1);
HXLINE( 108)		this->borderColor = 0;
HXLINE( 103)		this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
HXLINE(  55)		this->text = HX_("",00,00,00,00);
HXLINE( 198)		super::__construct(X,Y,null());
HXLINE( 200)		bool _hx_tmp;
HXDLIN( 200)		if (::hx::IsNotNull( Text )) {
HXLINE( 200)			_hx_tmp = (Text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 200)			_hx_tmp = true;
            		}
HXDLIN( 200)		if (_hx_tmp) {
HXLINE( 204)			this->set_text(HX_("",00,00,00,00));
HXLINE( 205)			Text = HX_(" ",20,00,00,00);
            		}
            		else {
HXLINE( 209)			this->set_text(Text);
            		}
HXLINE( 212)		this->textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 213)		this->textField->set_selectable(false);
HXLINE( 214)		this->textField->set_multiline(true);
HXLINE( 215)		this->textField->set_wordWrap(true);
HXLINE( 216)		this->_defaultFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),Size,16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 217)		this->set_font(::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT);
HXLINE( 218)		this->_formatAdjusted =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 219)		this->textField->set_defaultTextFormat(this->_defaultFormat);
HXLINE( 220)		this->textField->set_text(Text);
HXLINE( 221)		this->set_fieldWidth(FieldWidth);
HXLINE( 222)		this->textField->set_embedFonts(EmbeddedFont);
HXLINE( 223)		this->textField->set_sharpness(( (Float)(100) ));
HXLINE( 224)		Float _hx_tmp1;
HXDLIN( 224)		if ((Text.length <= 0)) {
HXLINE( 224)			_hx_tmp1 = ( (Float)(1) );
            		}
            		else {
HXLINE( 224)			_hx_tmp1 = ( (Float)(10) );
            		}
HXDLIN( 224)		this->textField->set_height(_hx_tmp1);
HXLINE( 226)		this->set_allowCollisions(0);
HXLINE( 227)		this->set_moves(false);
HXLINE( 229)		this->drawFrame(null());
HXLINE( 231)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(1,1);
HXDLIN( 231)		point->_inPool = false;
HXDLIN( 231)		this->shadowOffset = point;
            	}

Dynamic FlxText_obj::__CreateEmpty() { return new FlxText_obj; }

void *FlxText_obj::_hx_vtable = 0;

Dynamic FlxText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxText_obj > _hx_result = new FlxText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxText_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_238_destroy)
HXLINE( 239)		this->textField = null();
HXLINE( 240)		this->_font = null();
HXLINE( 241)		this->_defaultFormat = null();
HXLINE( 242)		this->_formatAdjusted = null();
HXLINE( 243)		this->shadowOffset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->shadowOffset)) );
HXLINE( 244)		this->super::destroy();
            	}


void FlxText_obj::drawFrame(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_248_drawFrame)
HXLINE( 249)		bool _hx_tmp;
HXDLIN( 249)		if (!(this->_regen)) {
HXLINE( 249)			_hx_tmp = Force;
            		}
            		else {
HXLINE( 249)			_hx_tmp = true;
            		}
HXDLIN( 249)		this->_regen = _hx_tmp;
HXLINE( 250)		this->super::drawFrame(this->_regen);
            	}


bool FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_262_stampOnAtlas)
HXLINE( 263)		this->regenGraphic();
HXLINE( 265)		 ::flixel::graphics::atlas::FlxNode node = atlas->addNode(this->graphic->bitmap,this->graphic->key);
HXLINE( 266)		bool result = ::hx::IsNotNull( node );
HXLINE( 268)		if (::hx::IsNotNull( node )) {
HXLINE( 270)			this->set_frames(node->getImageFrame());
            		}
HXLINE( 273)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,stampOnAtlas,return )

 ::flixel::text::FlxText FlxText_obj::applyMarkup(::String input,::Array< ::Dynamic> rules){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_301_applyMarkup)
HXLINE( 302)		bool _hx_tmp;
HXDLIN( 302)		if (::hx::IsNotNull( rules )) {
HXLINE( 302)			_hx_tmp = (rules->length == 0);
            		}
            		else {
HXLINE( 302)			_hx_tmp = true;
            		}
HXDLIN( 302)		if (_hx_tmp) {
HXLINE( 303)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 305)		this->clearFormats();
HXLINE( 307)		::Array< int > rangeStarts = ::Array_obj< int >::__new(0);
HXLINE( 308)		::Array< int > rangeEnds = ::Array_obj< int >::__new(0);
HXLINE( 309)		::Array< ::Dynamic> rulesToApply = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 311)		int i = 0;
HXLINE( 312)		{
HXLINE( 312)			int _g = 0;
HXDLIN( 312)			while((_g < rules->length)){
HXLINE( 312)				 ::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >();
HXDLIN( 312)				_g = (_g + 1);
HXLINE( 314)				bool _hx_tmp;
HXDLIN( 314)				if (::hx::IsNotNull( rule->marker )) {
HXLINE( 314)					_hx_tmp = ::hx::IsNull( rule->format );
            				}
            				else {
HXLINE( 314)					_hx_tmp = true;
            				}
HXDLIN( 314)				if (_hx_tmp) {
HXLINE( 315)					continue;
            				}
HXLINE( 317)				bool start = false;
HXLINE( 318)				int markerLength = ::_UnicodeString::UnicodeString_Impl__obj::get_length(rule->marker);
HXLINE( 320)				if ((input.indexOf(rule->marker,null()) == -1)) {
HXLINE( 321)					continue;
            				}
HXLINE( 324)				{
HXLINE( 324)					int _g1 = 0;
HXDLIN( 324)					int _g2 = ::_UnicodeString::UnicodeString_Impl__obj::get_length(input);
HXDLIN( 324)					while((_g1 < _g2)){
HXLINE( 324)						_g1 = (_g1 + 1);
HXDLIN( 324)						int charIndex = (_g1 - 1);
HXLINE( 326)						::String a = ::_UnicodeString::UnicodeString_Impl__obj::substr(input,charIndex,markerLength);
HXDLIN( 326)						if ((a != rule->marker)) {
HXLINE( 327)							continue;
            						}
HXLINE( 329)						if (start) {
HXLINE( 331)							start = false;
HXLINE( 332)							rangeEnds->push(charIndex);
            						}
            						else {
HXLINE( 336)							start = true;
HXLINE( 337)							rangeStarts->push(charIndex);
HXLINE( 338)							rulesToApply->push(rule);
            						}
            					}
            				}
HXLINE( 342)				if (start) {
HXLINE( 345)					rangeEnds->push(-1);
            				}
HXLINE( 348)				i = (i + 1);
            			}
            		}
HXLINE( 352)		{
HXLINE( 352)			int _g1 = 0;
HXDLIN( 352)			while((_g1 < rules->length)){
HXLINE( 352)				 ::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g1).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >();
HXDLIN( 352)				_g1 = (_g1 + 1);
HXLINE( 353)				input = ::StringTools_obj::replace(input,rule->marker,HX_("",00,00,00,00));
            			}
            		}
HXLINE( 356)		{
HXLINE( 356)			int _g2 = 0;
HXDLIN( 356)			int _g3 = rangeStarts->length;
HXDLIN( 356)			while((_g2 < _g3)){
HXLINE( 356)				_g2 = (_g2 + 1);
HXDLIN( 356)				int i = (_g2 - 1);
HXLINE( 359)				int delIndex = rangeStarts->__get(i);
HXLINE( 360)				int markerLength = ::_UnicodeString::UnicodeString_Impl__obj::get_length(rulesToApply->__get(i).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >()->marker);
HXLINE( 363)				{
HXLINE( 363)					int _g = 0;
HXDLIN( 363)					int _g1 = rangeStarts->length;
HXDLIN( 363)					while((_g < _g1)){
HXLINE( 363)						_g = (_g + 1);
HXDLIN( 363)						int j = (_g - 1);
HXLINE( 365)						if ((rangeStarts->__get(j) > delIndex)) {
HXLINE( 367)							::Array< int > rangeStarts1 = rangeStarts;
HXDLIN( 367)							int j1 = j;
HXDLIN( 367)							rangeStarts1[j1] = (rangeStarts1->__get(j1) - markerLength);
            						}
HXLINE( 369)						if ((rangeEnds->__get(j) > delIndex)) {
HXLINE( 371)							::Array< int > rangeEnds1 = rangeEnds;
HXDLIN( 371)							int j1 = j;
HXDLIN( 371)							rangeEnds1[j1] = (rangeEnds1->__get(j1) - markerLength);
            						}
            					}
            				}
HXLINE( 376)				delIndex = rangeEnds->__get(i);
HXLINE( 379)				{
HXLINE( 379)					int _g3 = 0;
HXDLIN( 379)					int _g4 = rangeStarts->length;
HXDLIN( 379)					while((_g3 < _g4)){
HXLINE( 379)						_g3 = (_g3 + 1);
HXDLIN( 379)						int j = (_g3 - 1);
HXLINE( 381)						if ((rangeStarts->__get(j) > delIndex)) {
HXLINE( 383)							::Array< int > rangeStarts1 = rangeStarts;
HXDLIN( 383)							int j1 = j;
HXDLIN( 383)							rangeStarts1[j1] = (rangeStarts1->__get(j1) - markerLength);
            						}
HXLINE( 385)						if ((rangeEnds->__get(j) > delIndex)) {
HXLINE( 387)							::Array< int > rangeEnds1 = rangeEnds;
HXDLIN( 387)							int j1 = j;
HXDLIN( 387)							rangeEnds1[j1] = (rangeEnds1->__get(j1) - markerLength);
            						}
            					}
            				}
            			}
            		}
HXLINE( 393)		this->set_text(input);
HXLINE( 396)		{
HXLINE( 396)			int _g4 = 0;
HXDLIN( 396)			int _g5 = rangeStarts->length;
HXDLIN( 396)			while((_g4 < _g5)){
HXLINE( 396)				_g4 = (_g4 + 1);
HXDLIN( 396)				int i = (_g4 - 1);
HXLINE( 397)				this->addFormat(rulesToApply->__get(i).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >()->format,rangeStarts->__get(i),rangeEnds->__get(i));
            			}
            		}
HXLINE( 399)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyMarkup,return )

 ::flixel::text::FlxText FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,::hx::Null< int >  __o_Start,::hx::Null< int >  __o_End){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::flixel::text::_FlxText::FlxTextFormatRange left, ::flixel::text::_FlxText::FlxTextFormatRange right){
            			HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_415_addFormat)
HXLINE( 415)			if (::hx::IsLess( left->range->start,right->range->start )) {
HXLINE( 415)				return -1;
            			}
            			else {
HXLINE( 415)				return 1;
            			}
HXDLIN( 415)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int Start = __o_Start.Default(-1);
            		int End = __o_End.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_410_addFormat)
HXLINE( 411)		::Array< ::Dynamic> _hx_tmp = this->_formatRanges;
HXDLIN( 411)		_hx_tmp->push( ::flixel::text::_FlxText::FlxTextFormatRange_obj::__alloc( HX_CTX ,Format,Start,End));
HXLINE( 413)		this->_formatRanges->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 417)		this->_regen = true;
HXLINE( 419)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,return )

 ::flixel::text::FlxText FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format, ::Dynamic Start, ::Dynamic End){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_427_removeFormat)
HXLINE( 428)		int i = this->_formatRanges->length;
HXLINE( 429)		while(true){
HXLINE( 429)			i = (i - 1);
HXDLIN( 429)			if (!(((i + 1) > 0))) {
HXLINE( 429)				goto _hx_goto_14;
            			}
HXLINE( 431)			 ::flixel::text::_FlxText::FlxTextFormatRange formatRange = this->_formatRanges->__get(i).StaticCast<  ::flixel::text::_FlxText::FlxTextFormatRange >();
HXLINE( 432)			if (::hx::IsInstanceNotEq( formatRange->format,Format )) {
HXLINE( 433)				continue;
            			}
HXLINE( 435)			bool _hx_tmp;
HXDLIN( 435)			if (::hx::IsNotNull( Start )) {
HXLINE( 435)				_hx_tmp = ::hx::IsNotNull( End );
            			}
            			else {
HXLINE( 435)				_hx_tmp = false;
            			}
HXDLIN( 435)			if (_hx_tmp) {
HXLINE( 437)				 ::flixel::util::helpers::FlxRange range = formatRange->range;
HXLINE( 438)				bool _hx_tmp;
HXDLIN( 438)				if (::hx::IsLess( Start,range->end )) {
HXLINE( 438)					_hx_tmp = ::hx::IsLessEq( End,range->start );
            				}
            				else {
HXLINE( 438)					_hx_tmp = true;
            				}
HXDLIN( 438)				if (_hx_tmp) {
HXLINE( 439)					continue;
            				}
HXLINE( 441)				bool _hx_tmp1;
HXDLIN( 441)				if (::hx::IsGreater( Start,range->start )) {
HXLINE( 441)					_hx_tmp1 = ::hx::IsLess( End,range->end );
            				}
            				else {
HXLINE( 441)					_hx_tmp1 = false;
            				}
HXDLIN( 441)				if (_hx_tmp1) {
HXLINE( 443)					this->addFormat(formatRange->format,(End + 1),range->end);
HXLINE( 444)					range->end = Start;
HXLINE( 445)					continue;
            				}
HXLINE( 448)				bool _hx_tmp2;
HXDLIN( 448)				if (::hx::IsLessEq( Start,range->start )) {
HXLINE( 448)					_hx_tmp2 = ::hx::IsLess( End,range->end );
            				}
            				else {
HXLINE( 448)					_hx_tmp2 = false;
            				}
HXDLIN( 448)				if (_hx_tmp2) {
HXLINE( 450)					range->start = End;
HXLINE( 451)					continue;
            				}
HXLINE( 454)				bool _hx_tmp3;
HXDLIN( 454)				if (::hx::IsGreater( Start,range->start )) {
HXLINE( 454)					_hx_tmp3 = ::hx::IsGreaterEq( End,range->end );
            				}
            				else {
HXLINE( 454)					_hx_tmp3 = false;
            				}
HXDLIN( 454)				if (_hx_tmp3) {
HXLINE( 456)					range->end = Start;
HXLINE( 457)					continue;
            				}
            			}
HXLINE( 461)			this->_formatRanges->remove(formatRange);
            		}
            		_hx_goto_14:;
HXLINE( 464)		this->_regen = true;
HXLINE( 466)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,removeFormat,return )

 ::flixel::text::FlxText FlxText_obj::clearFormats(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_473_clearFormats)
HXLINE( 474)		this->_formatRanges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 475)		{
HXLINE( 475)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 475)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 475)			this->_regen = true;
            		}
HXLINE( 477)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,return )

 ::flixel::text::FlxText FlxText_obj::setFormat(::String Font,::hx::Null< int >  __o_Size,::hx::Null< int >  __o_Color,::String Alignment, ::flixel::text::FlxTextBorderStyle BorderStyle,::hx::Null< int >  __o_BorderColor,::hx::Null< bool >  __o_EmbeddedFont){
            		int Size = __o_Size.Default(8);
            		int Color = __o_Color.Default(-1);
            		int BorderColor = __o_BorderColor.Default(0);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_494_setFormat)
HXLINE( 495)		if (::hx::IsNull( BorderStyle )) {
HXLINE( 495)			BorderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
            		}
HXLINE( 497)		if (EmbeddedFont) {
HXLINE( 499)			this->set_font(Font);
            		}
            		else {
HXLINE( 501)			if (::hx::IsNotNull( Font )) {
HXLINE( 503)				this->set_systemFont(Font);
            			}
            		}
HXLINE( 506)		this->set_size(Size);
HXLINE( 507)		this->set_color(Color);
HXLINE( 508)		if (::hx::IsNotNull( Alignment )) {
HXLINE( 509)			this->set_alignment(Alignment);
            		}
HXLINE( 510)		{
HXLINE( 510)			this->set_borderStyle(BorderStyle);
HXDLIN( 510)			this->set_borderColor(BorderColor);
HXDLIN( 510)			this->set_borderSize(( (Float)(1) ));
HXDLIN( 510)			this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 512)		{
HXLINE( 512)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 512)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 512)			this->_regen = true;
            		}
HXLINE( 514)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

 ::flixel::text::FlxText FlxText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality){
            		int Color = __o_Color.Default(0);
            		Float Size = __o_Size.Default(1);
            		Float Quality = __o_Quality.Default(1);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_526_setBorderStyle)
HXLINE( 527)		this->set_borderStyle(Style);
HXLINE( 528)		this->set_borderColor(Color);
HXLINE( 529)		this->set_borderSize(Size);
HXLINE( 530)		this->set_borderQuality(Quality);
HXLINE( 532)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,return )

void FlxText_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_536_updateHitbox)
HXLINE( 537)		this->regenGraphic();
HXLINE( 538)		this->super::updateHitbox();
            	}


 ::flixel::math::FlxRect FlxText_obj::getScreenBounds( ::flixel::math::FlxRect newRect, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_542_getScreenBounds)
HXLINE( 543)		this->regenGraphic();
HXLINE( 544)		return this->super::getScreenBounds(newRect,camera);
            	}


Float FlxText_obj::set_fieldWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_548_set_fieldWidth)
HXLINE( 549)		if (::hx::IsNull( this->textField )) {
HXLINE( 550)			return value;
            		}
HXLINE( 552)		if ((value <= 0)) {
HXLINE( 554)			this->set_wordWrap(false);
HXLINE( 555)			this->set_autoSize(true);
HXLINE( 557)			this->_autoHeight = true;
            		}
            		else {
HXLINE( 561)			this->set_autoSize(false);
HXLINE( 562)			this->set_wordWrap(true);
HXLINE( 563)			this->textField->set_width(value);
            		}
HXLINE( 566)		this->_regen = true;
HXLINE( 567)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_572_get_fieldWidth)
HXDLIN( 572)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 572)			return this->textField->get_width();
            		}
            		else {
HXDLIN( 572)			return ( (Float)(0) );
            		}
HXDLIN( 572)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

Float FlxText_obj::get_fieldHeight(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_577_get_fieldHeight)
HXDLIN( 577)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 577)			return this->textField->get_height();
            		}
            		else {
HXDLIN( 577)			return ( (Float)(0) );
            		}
HXDLIN( 577)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldHeight,return )

Float FlxText_obj::set_fieldHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_581_set_fieldHeight)
HXLINE( 582)		if (::hx::IsNull( this->textField )) {
HXLINE( 583)			return value;
            		}
HXLINE( 585)		if ((value <= 0)) {
HXLINE( 587)			this->_autoHeight = true;
            		}
            		else {
HXLINE( 591)			this->_autoHeight = false;
HXLINE( 592)			this->textField->set_height(value);
            		}
HXLINE( 594)		this->_regen = true;
HXLINE( 595)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldHeight,return )

bool FlxText_obj::set_autoSize(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_599_set_autoSize)
HXLINE( 600)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 602)			 ::Dynamic _hx_tmp;
HXDLIN( 602)			if (value) {
HXLINE( 602)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 602)				_hx_tmp = 2;
            			}
HXDLIN( 602)			this->textField->set_autoSize(_hx_tmp);
HXLINE( 603)			this->_regen = true;
            		}
HXLINE( 606)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_611_get_autoSize)
HXDLIN( 611)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 611)			return ::hx::IsNotEq( this->textField->get_autoSize(),2 );
            		}
            		else {
HXDLIN( 611)			return false;
            		}
HXDLIN( 611)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::set_text(::String Text){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_615_set_text)
HXLINE( 616)		this->text = Text;
HXLINE( 617)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 619)			::String ot = this->textField->get_text();
HXLINE( 620)			this->textField->set_text(Text);
HXLINE( 621)			bool _hx_tmp;
HXDLIN( 621)			if ((this->textField->get_text() == ot)) {
HXLINE( 621)				_hx_tmp = this->_regen;
            			}
            			else {
HXLINE( 621)				_hx_tmp = true;
            			}
HXDLIN( 621)			this->_regen = _hx_tmp;
            		}
HXLINE( 623)		return Text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

int FlxText_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_628_get_size)
HXDLIN( 628)		return ::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

int FlxText_obj::set_size(int Size){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_632_set_size)
HXLINE( 633)		this->_defaultFormat->size = Size;
HXLINE( 634)		{
HXLINE( 634)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 634)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 634)			this->_regen = true;
            		}
HXLINE( 635)		return Size;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

int FlxText_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_639_set_color)
HXLINE( 640)		if (::hx::IsEq( this->_defaultFormat->color,(Color & 16777215) )) {
HXLINE( 642)			return Color;
            		}
HXLINE( 644)		this->_defaultFormat->color = (Color & 16777215);
HXLINE( 645)		this->color = Color;
HXLINE( 646)		{
HXLINE( 646)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 646)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 646)			this->_regen = true;
            		}
HXLINE( 647)		return Color;
            	}


::String FlxText_obj::get_font(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_652_get_font)
HXDLIN( 652)		return this->_font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font(::String Font){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_656_set_font)
HXLINE( 657)		this->textField->set_embedFonts(true);
HXLINE( 659)		if (::hx::IsNotNull( Font )) {
HXLINE( 661)			::String newFontName = Font;
HXLINE( 662)			if (::openfl::utils::Assets_obj::exists(Font,HX_("FONT",cf,25,81,2e))) {
HXLINE( 664)				newFontName = ::openfl::utils::Assets_obj::getFont(Font,null())->name;
            			}
HXLINE( 667)			this->_defaultFormat->font = newFontName;
            		}
            		else {
HXLINE( 671)			this->_defaultFormat->font = ::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT;
            		}
HXLINE( 674)		{
HXLINE( 674)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 674)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 674)			this->_regen = true;
            		}
HXLINE( 675)		return (this->_font = this->_defaultFormat->font);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_680_get_embedded)
HXDLIN( 680)		return this->textField->get_embedFonts();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_685_get_systemFont)
HXDLIN( 685)		return this->_defaultFormat->font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont(::String Font){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_689_set_systemFont)
HXLINE( 690)		this->textField->set_embedFonts(false);
HXLINE( 691)		this->_defaultFormat->font = Font;
HXLINE( 692)		{
HXLINE( 692)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 692)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 692)			this->_regen = true;
            		}
HXLINE( 693)		return Font;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_698_get_bold)
HXDLIN( 698)		return ( (bool)(this->_defaultFormat->bold) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_702_set_bold)
HXLINE( 703)		if (::hx::IsNotEq( this->_defaultFormat->bold,value )) {
HXLINE( 705)			this->_defaultFormat->bold = value;
HXLINE( 706)			{
HXLINE( 706)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 706)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 706)				this->_regen = true;
            			}
            		}
HXLINE( 708)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_713_get_italic)
HXDLIN( 713)		return ( (bool)(this->_defaultFormat->italic) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_717_set_italic)
HXLINE( 718)		if (::hx::IsNotEq( this->_defaultFormat->italic,value )) {
HXLINE( 720)			this->_defaultFormat->italic = value;
HXLINE( 721)			{
HXLINE( 721)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 721)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 721)				this->_regen = true;
            			}
            		}
HXLINE( 723)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_728_get_wordWrap)
HXDLIN( 728)		return this->textField->get_wordWrap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_732_set_wordWrap)
HXLINE( 733)		if ((this->textField->get_wordWrap() != value)) {
HXLINE( 735)			this->textField->set_wordWrap(value);
HXLINE( 736)			this->_regen = true;
            		}
HXLINE( 738)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_743_get_alignment)
HXDLIN( 743)		return ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(this->_defaultFormat->align);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment(::String Alignment){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_747_set_alignment)
HXLINE( 748)		this->_defaultFormat->align = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::toOpenFL(Alignment);
HXLINE( 749)		{
HXLINE( 749)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 749)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 749)			this->_regen = true;
            		}
HXLINE( 750)		return Alignment;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

 ::flixel::text::FlxTextBorderStyle FlxText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_754_set_borderStyle)
HXLINE( 755)		if (::hx::IsPointerNotEq( style,this->borderStyle )) {
HXLINE( 756)			this->_regen = true;
            		}
HXLINE( 758)		return (this->borderStyle = style);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor(int Color){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_762_set_borderColor)
HXLINE( 763)		bool _hx_tmp;
HXDLIN( 763)		if ((this->borderColor != Color)) {
HXLINE( 763)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 763)			_hx_tmp = false;
            		}
HXDLIN( 763)		if (_hx_tmp) {
HXLINE( 764)			this->_regen = true;
            		}
HXLINE( 765)		this->_hasBorderAlpha = ((( (Float)(((Color >> 24) & 255)) ) / ( (Float)(255) )) < 1);
HXLINE( 766)		return (this->borderColor = Color);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize(Float Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_770_set_borderSize)
HXLINE( 771)		bool _hx_tmp;
HXDLIN( 771)		if ((Value != this->borderSize)) {
HXLINE( 771)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 771)			_hx_tmp = false;
            		}
HXDLIN( 771)		if (_hx_tmp) {
HXLINE( 772)			this->_regen = true;
            		}
HXLINE( 774)		return (this->borderSize = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality(Float Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_778_set_borderQuality)
HXLINE( 779)		Float lowerBound;
HXDLIN( 779)		if ((Value < 0)) {
HXLINE( 779)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 779)			lowerBound = Value;
            		}
HXDLIN( 779)		if ((lowerBound > 1)) {
HXLINE( 779)			Value = ( (Float)(1) );
            		}
            		else {
HXLINE( 779)			Value = lowerBound;
            		}
HXLINE( 780)		bool _hx_tmp;
HXDLIN( 780)		if ((Value != this->borderQuality)) {
HXLINE( 780)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 780)			_hx_tmp = false;
            		}
HXDLIN( 780)		if (_hx_tmp) {
HXLINE( 781)			this->_regen = true;
            		}
HXLINE( 783)		return (this->borderQuality = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

 ::flixel::graphics::FlxGraphic FlxText_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_787_set_graphic)
HXLINE( 788)		 ::flixel::graphics::FlxGraphic oldGraphic = this->graphic;
HXLINE( 789)		 ::flixel::graphics::FlxGraphic graph = this->super::set_graphic(Value);
HXLINE( 790)		::flixel::FlxG_obj::bitmap->removeIfNoUse(oldGraphic);
HXLINE( 791)		return graph;
            	}


Float FlxText_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_795_get_width)
HXLINE( 796)		this->regenGraphic();
HXLINE( 797)		return this->super::get_width();
            	}


Float FlxText_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_801_get_height)
HXLINE( 802)		this->regenGraphic();
HXLINE( 803)		return this->super::get_height();
            	}


void FlxText_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_807_updateColorTransform)
HXLINE( 808)		if (::hx::IsNull( this->colorTransform )) {
HXLINE( 809)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 811)		if ((this->alpha != 1)) {
HXLINE( 813)			this->colorTransform->alphaMultiplier = this->alpha;
HXLINE( 814)			this->useColorTransform = true;
            		}
            		else {
HXLINE( 818)			this->colorTransform->alphaMultiplier = ( (Float)(1) );
HXLINE( 819)			this->useColorTransform = false;
            		}
HXLINE( 822)		this->dirty = true;
            	}


void FlxText_obj::regenGraphic(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_826_regenGraphic)
HXLINE( 827)		bool _hx_tmp;
HXDLIN( 827)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 827)			_hx_tmp = !(this->_regen);
            		}
            		else {
HXLINE( 827)			_hx_tmp = true;
            		}
HXDLIN( 827)		if (_hx_tmp) {
HXLINE( 828)			return;
            		}
HXLINE( 830)		int oldWidth = 0;
HXLINE( 831)		int oldHeight = 4;
HXLINE( 833)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 835)			oldWidth = this->graphic->width;
HXLINE( 836)			oldHeight = this->graphic->height;
            		}
HXLINE( 839)		int newWidth = ::Math_obj::ceil(this->textField->get_width());
HXLINE( 840)		Float textfieldHeight;
HXDLIN( 840)		if (this->_autoHeight) {
HXLINE( 840)			textfieldHeight = this->textField->get_textHeight();
            		}
            		else {
HXLINE( 840)			textfieldHeight = this->textField->get_height();
            		}
HXLINE( 841)		int vertGutter;
HXDLIN( 841)		if (this->_autoHeight) {
HXLINE( 841)			vertGutter = 4;
            		}
            		else {
HXLINE( 841)			vertGutter = 0;
            		}
HXLINE( 843)		int newHeight = (::Math_obj::ceil(textfieldHeight) + vertGutter);
HXLINE( 846)		if ((this->textField->get_textHeight() == 0)) {
HXLINE( 848)			newHeight = oldHeight;
            		}
HXLINE( 851)		bool _hx_tmp1;
HXDLIN( 851)		if ((oldWidth == newWidth)) {
HXLINE( 851)			_hx_tmp1 = (oldHeight != newHeight);
            		}
            		else {
HXLINE( 851)			_hx_tmp1 = true;
            		}
HXDLIN( 851)		if (_hx_tmp1) {
HXLINE( 854)			::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_("text",ad,cc,f9,4c));
HXLINE( 855)			this->makeGraphic(newWidth,newHeight,0,false,key);
HXLINE( 857)			if (this->_hasBorderAlpha) {
HXLINE( 858)				this->_borderPixels = this->graphic->bitmap->clone();
            			}
HXLINE( 860)			if (this->_autoHeight) {
HXLINE( 861)				this->textField->set_height(( (Float)(newHeight) ));
            			}
HXLINE( 863)			this->_flashRect->x = ( (Float)(0) );
HXLINE( 864)			this->_flashRect->y = ( (Float)(0) );
HXLINE( 865)			this->_flashRect->width = ( (Float)(newWidth) );
HXLINE( 866)			this->_flashRect->height = ( (Float)(newHeight) );
            		}
            		else {
HXLINE( 870)			this->graphic->bitmap->fillRect(this->_flashRect,0);
HXLINE( 871)			if (this->_hasBorderAlpha) {
HXLINE( 873)				if (::hx::IsNull( this->_borderPixels )) {
HXLINE( 874)					this->_borderPixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->frameWidth,this->frameHeight,true,null());
            				}
            				else {
HXLINE( 876)					this->_borderPixels->fillRect(this->_flashRect,0);
            				}
            			}
            		}
HXLINE( 880)		bool _hx_tmp2;
HXDLIN( 880)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 880)			_hx_tmp2 = ::hx::IsNotNull( this->textField->get_text() );
            		}
            		else {
HXLINE( 880)			_hx_tmp2 = false;
            		}
HXDLIN( 880)		if (_hx_tmp2) {
HXLINE( 883)			this->copyTextFormat(this->_defaultFormat,this->_formatAdjusted,null());
HXLINE( 885)			this->_matrix->identity();
HXLINE( 887)			this->applyBorderStyle();
HXLINE( 888)			if (this->_hasBorderAlpha) {
HXLINE( 888)				if (::hx::IsNull( this->_borderColorTransform )) {
HXLINE( 888)					this->_borderColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            				}
HXDLIN( 888)				this->_borderColorTransform->alphaMultiplier = (( (Float)(((this->borderColor >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 888)				this->_borderPixels->colorTransform(this->_borderPixels->rect,this->_borderColorTransform);
HXDLIN( 888)				this->graphic->bitmap->draw(this->_borderPixels,null(),null(),null(),null(),null());
            			}
HXLINE( 889)			this->applyFormats(this->_formatAdjusted,false);
HXLINE( 891)			this->drawTextFieldTo(this->graphic->bitmap);
            		}
HXLINE( 894)		this->_regen = false;
HXLINE( 895)		this->set_frame(this->frame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphic,(void))

void FlxText_obj::drawTextFieldTo( ::openfl::display::BitmapData graphic){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_902_drawTextFieldTo)
HXLINE( 930)		this->_matrix->translate(( (Float)(-1) ),( (Float)(-1) ));
HXLINE( 931)		graphic->draw(this->textField,this->_matrix,null(),null(),null(),null());
HXLINE( 932)		this->_matrix->translate(( (Float)(1) ),( (Float)(1) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,drawTextFieldTo,(void))

void FlxText_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_958_draw)
HXLINE( 959)		this->regenGraphic();
HXLINE( 960)		this->super::draw();
            	}


void FlxText_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_969_calcFrame)
HXLINE( 970)		if (::hx::IsNull( this->textField )) {
HXLINE( 971)			return;
            		}
HXLINE( 973)		bool _hx_tmp;
HXDLIN( 973)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 973)			_hx_tmp = !(RunOnCpp);
            		}
            		else {
HXLINE( 973)			_hx_tmp = false;
            		}
HXDLIN( 973)		if (_hx_tmp) {
HXLINE( 974)			return;
            		}
HXLINE( 976)		this->regenGraphic();
HXLINE( 977)		this->super::calcFrame(RunOnCpp);
            	}


void FlxText_obj::applyBorderStyle(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_981_applyBorderStyle)
HXLINE( 982)		int iterations = ::Std_obj::_hx_int((this->borderSize * this->borderQuality));
HXLINE( 983)		if ((iterations <= 0)) {
HXLINE( 985)			iterations = 1;
            		}
HXLINE( 987)		Float delta = (this->borderSize / ( (Float)(iterations) ));
HXLINE( 989)		switch((int)(this->borderStyle->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 994)				this->applyFormats(this->_formatAdjusted,true);
HXLINE( 996)				{
HXLINE( 996)					int _g = 0;
HXDLIN( 996)					int _g1 = iterations;
HXDLIN( 996)					while((_g < _g1)){
HXLINE( 996)						_g = (_g + 1);
HXDLIN( 996)						int i = (_g - 1);
HXLINE( 998)						{
HXLINE( 998)							 ::openfl::display::BitmapData graphic;
HXDLIN( 998)							if (this->_hasBorderAlpha) {
HXLINE( 998)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE( 998)								graphic = this->graphic->bitmap;
            							}
HXDLIN( 998)							this->_matrix->translate(delta,delta);
HXDLIN( 998)							this->drawTextFieldTo(graphic);
            						}
            					}
            				}
HXLINE(1001)				this->_matrix->translate((-(this->shadowOffset->x) * this->borderSize),(-(this->shadowOffset->y) * this->borderSize));
            			}
            			break;
            			case (int)2: {
HXLINE(1006)				this->applyFormats(this->_formatAdjusted,true);
HXLINE(1008)				Float curDelta = delta;
HXLINE(1009)				{
HXLINE(1009)					int _g = 0;
HXDLIN(1009)					int _g1 = iterations;
HXDLIN(1009)					while((_g < _g1)){
HXLINE(1009)						_g = (_g + 1);
HXDLIN(1009)						int i = (_g - 1);
HXLINE(1011)						{
HXLINE(1011)							 ::openfl::display::BitmapData graphic;
HXDLIN(1011)							if (this->_hasBorderAlpha) {
HXLINE(1011)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE(1011)								graphic = this->graphic->bitmap;
            							}
HXDLIN(1011)							this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN(1011)							this->drawTextFieldTo(graphic);
            						}
HXLINE(1012)						{
HXLINE(1012)							 ::openfl::display::BitmapData graphic1;
HXDLIN(1012)							if (this->_hasBorderAlpha) {
HXLINE(1012)								graphic1 = this->_borderPixels;
            							}
            							else {
HXLINE(1012)								graphic1 = this->graphic->bitmap;
            							}
HXDLIN(1012)							this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN(1012)							this->drawTextFieldTo(graphic1);
            						}
HXLINE(1013)						{
HXLINE(1013)							 ::openfl::display::BitmapData graphic2;
HXDLIN(1013)							if (this->_hasBorderAlpha) {
HXLINE(1013)								graphic2 = this->_borderPixels;
            							}
            							else {
HXLINE(1013)								graphic2 = this->graphic->bitmap;
            							}
HXDLIN(1013)							this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN(1013)							this->drawTextFieldTo(graphic2);
            						}
HXLINE(1014)						{
HXLINE(1014)							 ::openfl::display::BitmapData graphic3;
HXDLIN(1014)							if (this->_hasBorderAlpha) {
HXLINE(1014)								graphic3 = this->_borderPixels;
            							}
            							else {
HXLINE(1014)								graphic3 = this->graphic->bitmap;
            							}
HXDLIN(1014)							this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN(1014)							this->drawTextFieldTo(graphic3);
            						}
HXLINE(1015)						{
HXLINE(1015)							 ::openfl::display::BitmapData graphic4;
HXDLIN(1015)							if (this->_hasBorderAlpha) {
HXLINE(1015)								graphic4 = this->_borderPixels;
            							}
            							else {
HXLINE(1015)								graphic4 = this->graphic->bitmap;
            							}
HXDLIN(1015)							this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN(1015)							this->drawTextFieldTo(graphic4);
            						}
HXLINE(1016)						{
HXLINE(1016)							 ::openfl::display::BitmapData graphic5;
HXDLIN(1016)							if (this->_hasBorderAlpha) {
HXLINE(1016)								graphic5 = this->_borderPixels;
            							}
            							else {
HXLINE(1016)								graphic5 = this->graphic->bitmap;
            							}
HXDLIN(1016)							this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN(1016)							this->drawTextFieldTo(graphic5);
            						}
HXLINE(1017)						{
HXLINE(1017)							 ::openfl::display::BitmapData graphic6;
HXDLIN(1017)							if (this->_hasBorderAlpha) {
HXLINE(1017)								graphic6 = this->_borderPixels;
            							}
            							else {
HXLINE(1017)								graphic6 = this->graphic->bitmap;
            							}
HXDLIN(1017)							this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN(1017)							this->drawTextFieldTo(graphic6);
            						}
HXLINE(1018)						{
HXLINE(1018)							 ::openfl::display::BitmapData graphic7;
HXDLIN(1018)							if (this->_hasBorderAlpha) {
HXLINE(1018)								graphic7 = this->_borderPixels;
            							}
            							else {
HXLINE(1018)								graphic7 = this->graphic->bitmap;
            							}
HXDLIN(1018)							this->_matrix->translate(( (Float)(0) ),-(curDelta));
HXDLIN(1018)							this->drawTextFieldTo(graphic7);
            						}
HXLINE(1020)						this->_matrix->translate(curDelta,( (Float)(0) ));
HXLINE(1021)						curDelta = (curDelta + delta);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(1028)				this->applyFormats(this->_formatAdjusted,true);
HXLINE(1030)				Float curDelta = delta;
HXLINE(1031)				{
HXLINE(1031)					int _g = 0;
HXDLIN(1031)					int _g1 = iterations;
HXDLIN(1031)					while((_g < _g1)){
HXLINE(1031)						_g = (_g + 1);
HXDLIN(1031)						int i = (_g - 1);
HXLINE(1033)						{
HXLINE(1033)							 ::openfl::display::BitmapData graphic;
HXDLIN(1033)							if (this->_hasBorderAlpha) {
HXLINE(1033)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE(1033)								graphic = this->graphic->bitmap;
            							}
HXDLIN(1033)							this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN(1033)							this->drawTextFieldTo(graphic);
            						}
HXLINE(1034)						{
HXLINE(1034)							 ::openfl::display::BitmapData graphic1;
HXDLIN(1034)							if (this->_hasBorderAlpha) {
HXLINE(1034)								graphic1 = this->_borderPixels;
            							}
            							else {
HXLINE(1034)								graphic1 = this->graphic->bitmap;
            							}
HXDLIN(1034)							this->_matrix->translate((curDelta * ( (Float)(2) )),( (Float)(0) ));
HXDLIN(1034)							this->drawTextFieldTo(graphic1);
            						}
HXLINE(1035)						{
HXLINE(1035)							 ::openfl::display::BitmapData graphic2;
HXDLIN(1035)							if (this->_hasBorderAlpha) {
HXLINE(1035)								graphic2 = this->_borderPixels;
            							}
            							else {
HXLINE(1035)								graphic2 = this->graphic->bitmap;
            							}
HXDLIN(1035)							this->_matrix->translate(( (Float)(0) ),(curDelta * ( (Float)(2) )));
HXDLIN(1035)							this->drawTextFieldTo(graphic2);
            						}
HXLINE(1036)						{
HXLINE(1036)							 ::openfl::display::BitmapData graphic3;
HXDLIN(1036)							if (this->_hasBorderAlpha) {
HXLINE(1036)								graphic3 = this->_borderPixels;
            							}
            							else {
HXLINE(1036)								graphic3 = this->graphic->bitmap;
            							}
HXDLIN(1036)							this->_matrix->translate((-(curDelta) * ( (Float)(2) )),( (Float)(0) ));
HXDLIN(1036)							this->drawTextFieldTo(graphic3);
            						}
HXLINE(1038)						this->_matrix->translate(curDelta,-(curDelta));
HXLINE(1039)						curDelta = (curDelta + delta);
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderStyle,(void))

void FlxText_obj::applyBorderTransparency(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_1047_applyBorderTransparency)
HXLINE(1048)		if (!(this->_hasBorderAlpha)) {
HXLINE(1049)			return;
            		}
HXLINE(1051)		if (::hx::IsNull( this->_borderColorTransform )) {
HXLINE(1052)			this->_borderColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1054)		this->_borderColorTransform->alphaMultiplier = (( (Float)(((this->borderColor >> 24) & 255)) ) / ( (Float)(255) ));
HXLINE(1055)		this->_borderPixels->colorTransform(this->_borderPixels->rect,this->_borderColorTransform);
HXLINE(1056)		this->graphic->bitmap->draw(this->_borderPixels,null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderTransparency,(void))

void FlxText_obj::copyTextWithOffset(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1063_copyTextWithOffset)
HXLINE(1064)		 ::openfl::display::BitmapData graphic;
HXDLIN(1064)		if (this->_hasBorderAlpha) {
HXLINE(1064)			graphic = this->_borderPixels;
            		}
            		else {
HXLINE(1064)			graphic = this->graphic->bitmap;
            		}
HXLINE(1065)		this->_matrix->translate(x,y);
HXLINE(1066)		this->drawTextFieldTo(graphic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,copyTextWithOffset,(void))

void FlxText_obj::applyFormats( ::openfl::text::TextFormat FormatAdjusted,::hx::Null< bool >  __o_UseBorderColor){
            		bool UseBorderColor = __o_UseBorderColor.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1070_applyFormats)
HXLINE(1072)		this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
HXLINE(1073)		 ::Dynamic _hx_tmp;
HXDLIN(1073)		if (UseBorderColor) {
HXLINE(1073)			_hx_tmp = (this->borderColor & 16777215);
            		}
            		else {
HXLINE(1073)			_hx_tmp = this->_defaultFormat->color;
            		}
HXDLIN(1073)		FormatAdjusted->color = _hx_tmp;
HXLINE(1074)		this->textField->setTextFormat(FormatAdjusted,null(),null());
HXLINE(1077)		{
HXLINE(1077)			int _g = 0;
HXDLIN(1077)			::Array< ::Dynamic> _g1 = this->_formatRanges;
HXDLIN(1077)			while((_g < _g1->length)){
HXLINE(1077)				 ::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g1->__get(_g).StaticCast<  ::flixel::text::_FlxText::FlxTextFormatRange >();
HXDLIN(1077)				_g = (_g + 1);
HXLINE(1079)				int _hx_tmp = (this->textField->get_text().length - 1);
HXDLIN(1079)				if (::hx::IsLess( _hx_tmp,formatRange->range->start )) {
HXLINE(1082)					goto _hx_goto_62;
            				}
            				else {
HXLINE(1086)					 ::openfl::text::TextFormat textFormat = formatRange->format->format;
HXLINE(1087)					this->copyTextFormat(textFormat,FormatAdjusted,false);
HXLINE(1088)					 ::Dynamic _hx_tmp;
HXDLIN(1088)					if (UseBorderColor) {
HXLINE(1088)						_hx_tmp = (formatRange->format->borderColor & 16777215);
            					}
            					else {
HXLINE(1088)						_hx_tmp = textFormat->color;
            					}
HXDLIN(1088)					FormatAdjusted->color = _hx_tmp;
            				}
HXLINE(1091)				 ::openfl::text::TextField _hx_tmp1 = this->textField;
HXDLIN(1091)				int formatRange1 = ( (int)(formatRange->range->start) );
HXDLIN(1091)				int formatRange2 = ( (int)(formatRange->range->end) );
HXDLIN(1091)				_hx_tmp1->setTextFormat(FormatAdjusted,formatRange1,::Std_obj::_hx_int(::Math_obj::min(( (Float)(formatRange2) ),( (Float)(this->textField->get_text().length) ))));
            			}
            			_hx_goto_62:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

void FlxText_obj::copyTextFormat( ::openfl::text::TextFormat from, ::openfl::text::TextFormat to,::hx::Null< bool >  __o_withAlign){
            		bool withAlign = __o_withAlign.Default(true);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1096_copyTextFormat)
HXLINE(1097)		to->font = from->font;
HXLINE(1098)		to->bold = from->bold;
HXLINE(1099)		to->italic = from->italic;
HXLINE(1100)		to->size = from->size;
HXLINE(1101)		to->color = from->color;
HXLINE(1102)		to->leading = from->leading;
HXLINE(1103)		if (withAlign) {
HXLINE(1104)			to->align = from->align;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,copyTextFormat,(void))

 ::openfl::text::TextFormat FlxText_obj::dtfCopy(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_1113_dtfCopy)
HXLINE(1114)		 ::openfl::text::TextFormat dtf = this->textField->get_defaultTextFormat();
HXLINE(1115)		return  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,dtf->font,dtf->size,dtf->color,dtf->bold,dtf->italic,dtf->underline,dtf->url,dtf->target,dtf->align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

void FlxText_obj::updateDefaultFormat(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1119_updateDefaultFormat)
HXLINE(1120)		this->textField->set_defaultTextFormat(this->_defaultFormat);
HXLINE(1121)		this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXLINE(1122)		this->_regen = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,updateDefaultFormat,(void))

 ::flixel::graphics::frames::FlxFramesCollection FlxText_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1126_set_frames)
HXLINE(1127)		this->super::set_frames(Frames);
HXLINE(1128)		this->_regen = false;
HXLINE(1129)		return Frames;
            	}


int FlxText_obj::VERTICAL_GUTTER;


::hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxText_obj > __this = new FlxText_obj();
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxText_obj > FlxText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxText_obj *__this = (FlxText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxText_obj), true, "flixel.text.FlxText"));
	*(void **)__this = FlxText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_autoHeight,"_autoHeight");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_MARK_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_MARK_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_autoHeight,"_autoHeight");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_VISIT_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_VISIT_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_font() ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bold() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return ::hx::Val( _font ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_italic() ); }
		if (HX_FIELD_EQ(inName,"_regen") ) { return ::hx::Val( _regen ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return ::hx::Val( dtfCopy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_embedded() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSize() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return ::hx::Val( get_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return ::hx::Val( set_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return ::hx::Val( get_bold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return ::hx::Val( set_bold_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alignment() ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return ::hx::Val( drawFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return ::hx::Val( addFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return ::hx::Val( setFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_systemFont() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return ::hx::Val( borderSize ); }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fieldWidth() ); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return ::hx::Val( get_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return ::hx::Val( set_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return ::hx::Val( borderStyle ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"fieldHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fieldHeight() ); }
		if (HX_FIELD_EQ(inName,"_autoHeight") ) { return ::hx::Val( _autoHeight ); }
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return ::hx::Val( applyMarkup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return ::hx::Val( shadowOffset ); }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return ::hx::Val( stampOnAtlas_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return ::hx::Val( removeFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return ::hx::Val( clearFormats_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return ::hx::Val( set_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return ::hx::Val( get_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return ::hx::Val( get_embedded_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return ::hx::Val( regenGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return ::hx::Val( applyFormats_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return ::hx::Val( borderQuality ); }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { return ::hx::Val( _formatRanges ); }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { return ::hx::Val( _borderPixels ); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return ::hx::Val( get_alignment_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return ::hx::Val( set_alignment_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return ::hx::Val( _defaultFormat ); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return ::hx::Val( setBorderStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return ::hx::Val( set_fieldWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return ::hx::Val( get_fieldWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return ::hx::Val( get_systemFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return ::hx::Val( set_systemFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return ::hx::Val( set_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTextFormat") ) { return ::hx::Val( copyTextFormat_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return ::hx::Val( _formatAdjusted ); }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { return ::hx::Val( _hasBorderAlpha ); }
		if (HX_FIELD_EQ(inName,"getScreenBounds") ) { return ::hx::Val( getScreenBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fieldHeight") ) { return ::hx::Val( get_fieldHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fieldHeight") ) { return ::hx::Val( set_fieldHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return ::hx::Val( set_borderStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTextFieldTo") ) { return ::hx::Val( drawTextFieldTo_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyBorderStyle") ) { return ::hx::Val( applyBorderStyle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return ::hx::Val( set_borderQuality_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyTextWithOffset") ) { return ::hx::Val( copyTextWithOffset_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDefaultFormat") ) { return ::hx::Val( updateDefaultFormat_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { return ::hx::Val( _borderColorTransform ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"applyBorderTransparency") ) { return ::hx::Val( applyBorderTransparency_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_font(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bold(inValue.Cast< bool >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_italic(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSize(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignment(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_systemFont(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderSize(inValue.Cast< Float >()) );borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldWidth(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderStyle(inValue.Cast<  ::flixel::text::FlxTextBorderStyle >()) );borderStyle=inValue.Cast<  ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast< int >()) );borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldHeight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_autoHeight") ) { _autoHeight=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderQuality(inValue.Cast< Float >()) );borderQuality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { _formatRanges=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { _borderPixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { _hasBorderAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { _borderColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("embedded",8a,19,62,de));
	outFields->push(HX_("systemFont",5e,c4,43,f2));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("alignment",e3,e2,3d,ea));
	outFields->push(HX_("borderStyle",a5,70,96,10));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("borderQuality",33,95,25,79));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("fieldWidth",ec,2e,e5,97));
	outFields->push(HX_("fieldHeight",41,58,f3,06));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("_autoHeight",d5,e5,a0,40));
	outFields->push(HX_("shadowOffset",93,fb,0b,dc));
	outFields->push(HX_("_defaultFormat",19,53,59,36));
	outFields->push(HX_("_formatAdjusted",a4,c9,b6,80));
	outFields->push(HX_("_formatRanges",8c,b9,14,d7));
	outFields->push(HX_("_font",ae,79,d1,f6));
	outFields->push(HX_("_regen",fe,75,a6,e2));
	outFields->push(HX_("_borderPixels",18,bc,51,cc));
	outFields->push(HX_("_borderColorTransform",74,07,2f,6f));
	outFields->push(HX_("_hasBorderAlpha",37,fe,f9,e8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxText_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxText_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxTextBorderStyle */ ,(int)offsetof(FlxText_obj,borderStyle),HX_("borderStyle",a5,70,96,10)},
	{::hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_("borderSize",cd,ff,ed,06)},
	{::hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_("borderQuality",33,95,25,79)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(FlxText_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_autoHeight),HX_("_autoHeight",d5,e5,a0,40)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxText_obj,shadowOffset),HX_("shadowOffset",93,fb,0b,dc)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_("_defaultFormat",19,53,59,36)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_("_formatAdjusted",a4,c9,b6,80)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxText_obj,_formatRanges),HX_("_formatRanges",8c,b9,14,d7)},
	{::hx::fsString,(int)offsetof(FlxText_obj,_font),HX_("_font",ae,79,d1,f6)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_regen),HX_("_regen",fe,75,a6,e2)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxText_obj,_borderPixels),HX_("_borderPixels",18,bc,51,cc)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxText_obj,_borderColorTransform),HX_("_borderColorTransform",74,07,2f,6f)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_hasBorderAlpha),HX_("_hasBorderAlpha",37,fe,f9,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxText_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxText_obj::VERTICAL_GUTTER,HX_("VERTICAL_GUTTER",04,b3,89,07)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxText_obj_sMemberFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("borderStyle",a5,70,96,10),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("borderSize",cd,ff,ed,06),
	HX_("borderQuality",33,95,25,79),
	HX_("textField",cd,24,81,99),
	HX_("_autoHeight",d5,e5,a0,40),
	HX_("shadowOffset",93,fb,0b,dc),
	HX_("_defaultFormat",19,53,59,36),
	HX_("_formatAdjusted",a4,c9,b6,80),
	HX_("_formatRanges",8c,b9,14,d7),
	HX_("_font",ae,79,d1,f6),
	HX_("_regen",fe,75,a6,e2),
	HX_("_borderPixels",18,bc,51,cc),
	HX_("_borderColorTransform",74,07,2f,6f),
	HX_("_hasBorderAlpha",37,fe,f9,e8),
	HX_("destroy",fa,2c,86,24),
	HX_("drawFrame",89,ad,8e,ce),
	HX_("stampOnAtlas",e9,f9,45,2b),
	HX_("applyMarkup",b6,43,6b,f6),
	HX_("addFormat",38,c4,b2,b5),
	HX_("removeFormat",9b,2a,bc,6c),
	HX_("clearFormats",4f,73,ad,ba),
	HX_("setFormat",79,04,36,5d),
	HX_("setBorderStyle",23,ac,54,b8),
	HX_("updateHitbox",81,94,eb,56),
	HX_("getScreenBounds",b7,e4,25,66),
	HX_("set_fieldWidth",a9,9f,fa,2d),
	HX_("get_fieldWidth",35,b7,da,0d),
	HX_("get_fieldHeight",d8,0f,d5,c7),
	HX_("set_fieldHeight",e4,8c,a0,c3),
	HX_("set_autoSize",4d,67,8c,f9),
	HX_("get_autoSize",d9,43,93,e4),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	HX_("set_color",c6,b9,56,71),
	HX_("get_font",58,19,7b,c3),
	HX_("set_font",cc,72,d8,71),
	HX_("get_embedded",93,cd,7b,93),
	HX_("get_systemFont",a7,4c,39,68),
	HX_("set_systemFont",1b,35,59,88),
	HX_("get_bold",0e,3d,d6,c0),
	HX_("set_bold",82,96,33,6f),
	HX_("get_italic",b9,9e,eb,f6),
	HX_("set_italic",2d,3d,69,fa),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("get_alignment",ba,b6,a1,ab),
	HX_("set_alignment",c6,98,a7,f0),
	HX_("set_borderStyle",48,a5,43,cd),
	HX_("set_borderColor",7a,71,82,93),
	HX_("set_borderSize",8a,70,03,9d),
	HX_("set_borderQuality",96,78,03,a3),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("regenGraphic",6b,55,39,8b),
	HX_("drawTextFieldTo",04,9e,45,9d),
	HX_("draw",04,2c,70,42),
	HX_("calcFrame",58,93,8c,f9),
	HX_("applyBorderStyle",d7,bd,a2,48),
	HX_("applyBorderTransparency",32,96,af,17),
	HX_("copyTextWithOffset",db,97,6d,53),
	HX_("applyFormats",8e,0d,9c,1e),
	HX_("copyTextFormat",d9,63,8e,5f),
	HX_("dtfCopy",ab,51,45,87),
	HX_("updateDefaultFormat",0f,5b,8e,8b),
	HX_("set_frames",e3,bd,8a,a0),
	::String(null()) };

static void FlxText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#endif

::hx::Class FlxText_obj::__mClass;

static ::String FlxText_obj_sStaticFields[] = {
	HX_("VERTICAL_GUTTER",04,b3,89,07),
	::String(null())
};

void FlxText_obj::__register()
{
	FlxText_obj _hx_dummy;
	FlxText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text.FlxText",b0,4a,1b,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_50_boot)
HXDLIN(  50)		VERTICAL_GUTTER = 4;
            	}
}

} // end namespace flixel
} // end namespace text
