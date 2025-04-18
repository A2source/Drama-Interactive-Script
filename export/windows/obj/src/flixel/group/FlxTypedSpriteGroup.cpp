#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_30_new,"flixel.group.FlxTypedSpriteGroup","new",0x9fa77753,"flixel.group.FlxTypedSpriteGroup.new","flixel/group/FlxSpriteGroup.hx",30,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_620_transformChildren_flixel_math_FlxRect,"flixel.group.FlxTypedSpriteGroup","transformChildren_flixel_math_FlxRect",0x5a9c13e1,"flixel.group.FlxTypedSpriteGroup.transformChildren_flixel_math_FlxRect","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_620_transformChildren_openfl_display_BlendMode,"flixel.group.FlxTypedSpriteGroup","transformChildren_openfl_display_BlendMode",0x546b9da9,"flixel.group.FlxTypedSpriteGroup.transformChildren_openfl_display_BlendMode","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_620_transformChildren_Int,"flixel.group.FlxTypedSpriteGroup","transformChildren_Int",0x8f3579ce,"flixel.group.FlxTypedSpriteGroup.transformChildren_Int","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_620_transformChildren_Array_flixel_FlxCamera,"flixel.group.FlxTypedSpriteGroup","transformChildren_Array_flixel_FlxCamera",0x8df728db,"flixel.group.FlxTypedSpriteGroup.transformChildren_Array_flixel_FlxCamera","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_620_transformChildren_flixel_FlxCamera,"flixel.group.FlxTypedSpriteGroup","transformChildren_flixel_FlxCamera",0x864ae155,"flixel.group.FlxTypedSpriteGroup.transformChildren_flixel_FlxCamera","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_639_multiTransformChildren_Float,"flixel.group.FlxTypedSpriteGroup","multiTransformChildren_Float",0x31c44efc,"flixel.group.FlxTypedSpriteGroup.multiTransformChildren_Float","flixel/group/FlxSpriteGroup.hx",639,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_620_transformChildren_flixel_math_FlxPoint,"flixel.group.FlxTypedSpriteGroup","transformChildren_flixel_math_FlxPoint",0xcdc8d2f3,"flixel.group.FlxTypedSpriteGroup.transformChildren_flixel_math_FlxPoint","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_620_transformChildren_Bool,"flixel.group.FlxTypedSpriteGroup","transformChildren_Bool",0xbaf55a6b,"flixel.group.FlxTypedSpriteGroup.transformChildren_Bool","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_620_transformChildren_Float,"flixel.group.FlxTypedSpriteGroup","transformChildren_Float",0x2758683b,"flixel.group.FlxTypedSpriteGroup.transformChildren_Float","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_89_initVars,"flixel.group.FlxTypedSpriteGroup","initVars",0xad6ba309,"flixel.group.FlxTypedSpriteGroup.initVars","flixel/group/FlxSpriteGroup.hx",89,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_114_destroy,"flixel.group.FlxTypedSpriteGroup","destroy",0xd803c96d,"flixel.group.FlxTypedSpriteGroup.destroy","flixel/group/FlxSpriteGroup.hx",114,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_133_clone,"flixel.group.FlxTypedSpriteGroup","clone",0x21249d10,"flixel.group.FlxTypedSpriteGroup.clone","flixel/group/FlxSpriteGroup.hx",133,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_152_isOnScreen,"flixel.group.FlxTypedSpriteGroup","isOnScreen",0xe3a8b162,"flixel.group.FlxTypedSpriteGroup.isOnScreen","flixel/group/FlxSpriteGroup.hx",152,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_171_overlapsPoint,"flixel.group.FlxTypedSpriteGroup","overlapsPoint",0xe77cba57,"flixel.group.FlxTypedSpriteGroup.overlapsPoint","flixel/group/FlxSpriteGroup.hx",171,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_194_pixelsOverlapPoint,"flixel.group.FlxTypedSpriteGroup","pixelsOverlapPoint",0xc3b2a483,"flixel.group.FlxTypedSpriteGroup.pixelsOverlapPoint","flixel/group/FlxSpriteGroup.hx",194,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_208_update,"flixel.group.FlxTypedSpriteGroup","update",0x579c78f6,"flixel.group.FlxTypedSpriteGroup.update","flixel/group/FlxSpriteGroup.hx",208,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_216_draw,"flixel.group.FlxTypedSpriteGroup","draw",0x0c4e99b1,"flixel.group.FlxTypedSpriteGroup.draw","flixel/group/FlxSpriteGroup.hx",216,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_235_replaceColor,"flixel.group.FlxTypedSpriteGroup","replaceColor",0x6ca2bf3c,"flixel.group.FlxTypedSpriteGroup.replaceColor","flixel/group/FlxSpriteGroup.hx",235,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_265_add,"flixel.group.FlxTypedSpriteGroup","add",0x9f9d9914,"flixel.group.FlxTypedSpriteGroup.add","flixel/group/FlxSpriteGroup.hx",265,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_280_insert,"flixel.group.FlxTypedSpriteGroup","insert",0x6e743626,"flixel.group.FlxTypedSpriteGroup.insert","flixel/group/FlxSpriteGroup.hx",280,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_292_preAdd,"flixel.group.FlxTypedSpriteGroup","preAdd",0x7f31b4ab,"flixel.group.FlxTypedSpriteGroup.preAdd","flixel/group/FlxSpriteGroup.hx",292,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_331_recycle,"flixel.group.FlxTypedSpriteGroup","recycle",0xeb09ac86,"flixel.group.FlxTypedSpriteGroup.recycle","flixel/group/FlxSpriteGroup.hx",331,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_342_remove,"flixel.group.FlxTypedSpriteGroup","remove",0xd51f8f31,"flixel.group.FlxTypedSpriteGroup.remove","flixel/group/FlxSpriteGroup.hx",342,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_360_replace,"flixel.group.FlxTypedSpriteGroup","replace",0x5ea5e4a7,"flixel.group.FlxTypedSpriteGroup.replace","flixel/group/FlxSpriteGroup.hx",360,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_375_sort,"flixel.group.FlxTypedSpriteGroup","sort",0x1636950b,"flixel.group.FlxTypedSpriteGroup.sort","flixel/group/FlxSpriteGroup.hx",375,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_389_getFirstAvailable,"flixel.group.FlxTypedSpriteGroup","getFirstAvailable",0x44b6b4e2,"flixel.group.FlxTypedSpriteGroup.getFirstAvailable","flixel/group/FlxSpriteGroup.hx",389,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_400_getFirstNull,"flixel.group.FlxTypedSpriteGroup","getFirstNull",0x3deb1a0e,"flixel.group.FlxTypedSpriteGroup.getFirstNull","flixel/group/FlxSpriteGroup.hx",400,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_411_getFirstExisting,"flixel.group.FlxTypedSpriteGroup","getFirstExisting",0x25cf6192,"flixel.group.FlxTypedSpriteGroup.getFirstExisting","flixel/group/FlxSpriteGroup.hx",411,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_422_getFirstAlive,"flixel.group.FlxTypedSpriteGroup","getFirstAlive",0x6da0fe66,"flixel.group.FlxTypedSpriteGroup.getFirstAlive","flixel/group/FlxSpriteGroup.hx",422,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_433_getFirstDead,"flixel.group.FlxTypedSpriteGroup","getFirstDead",0x3742ca2b,"flixel.group.FlxTypedSpriteGroup.getFirstDead","flixel/group/FlxSpriteGroup.hx",433,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_443_countLiving,"flixel.group.FlxTypedSpriteGroup","countLiving",0xa01b2b4b,"flixel.group.FlxTypedSpriteGroup.countLiving","flixel/group/FlxSpriteGroup.hx",443,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_453_countDead,"flixel.group.FlxTypedSpriteGroup","countDead",0x17fab246,"flixel.group.FlxTypedSpriteGroup.countDead","flixel/group/FlxSpriteGroup.hx",453,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_466_getRandom,"flixel.group.FlxTypedSpriteGroup","getRandom",0xf7598a6c,"flixel.group.FlxTypedSpriteGroup.getRandom","flixel/group/FlxSpriteGroup.hx",466,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_476_iterator,"flixel.group.FlxTypedSpriteGroup","iterator",0xee05921b,"flixel.group.FlxTypedSpriteGroup.iterator","flixel/group/FlxSpriteGroup.hx",476,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_487_forEach,"flixel.group.FlxTypedSpriteGroup","forEach",0x783bc61d,"flixel.group.FlxTypedSpriteGroup.forEach","flixel/group/FlxSpriteGroup.hx",487,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_498_forEachAlive,"flixel.group.FlxTypedSpriteGroup","forEachAlive",0xc86ec470,"flixel.group.FlxTypedSpriteGroup.forEachAlive","flixel/group/FlxSpriteGroup.hx",498,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_509_forEachDead,"flixel.group.FlxTypedSpriteGroup","forEachDead",0xe8751361,"flixel.group.FlxTypedSpriteGroup.forEachDead","flixel/group/FlxSpriteGroup.hx",509,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_520_forEachExists,"flixel.group.FlxTypedSpriteGroup","forEachExists",0x1ab74bd9,"flixel.group.FlxTypedSpriteGroup.forEachExists","flixel/group/FlxSpriteGroup.hx",520,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_532_forEachOfType,"flixel.group.FlxTypedSpriteGroup","forEachOfType",0xaf35856e,"flixel.group.FlxTypedSpriteGroup.forEachOfType","flixel/group/FlxSpriteGroup.hx",532,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_541_clear,"flixel.group.FlxTypedSpriteGroup","clear",0x211cfb40,"flixel.group.FlxTypedSpriteGroup.clear","flixel/group/FlxSpriteGroup.hx",541,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_549_kill,"flixel.group.FlxTypedSpriteGroup","kill",0x10e84d4b,"flixel.group.FlxTypedSpriteGroup.kill","flixel/group/FlxSpriteGroup.hx",549,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_560_revive,"flixel.group.FlxTypedSpriteGroup","revive",0xdb0ded42,"flixel.group.FlxTypedSpriteGroup.revive","flixel/group/FlxSpriteGroup.hx",560,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_568_reset,"flixel.group.FlxTypedSpriteGroup","reset",0xbf89d382,"flixel.group.FlxTypedSpriteGroup.reset","flixel/group/FlxSpriteGroup.hx",568,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_598_setPosition,"flixel.group.FlxTypedSpriteGroup","setPosition",0x6aebbc5e,"flixel.group.FlxTypedSpriteGroup.setPosition","flixel/group/FlxSpriteGroup.hx",598,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_664_set_camera,"flixel.group.FlxTypedSpriteGroup","set_camera",0xed80c24f,"flixel.group.FlxTypedSpriteGroup.set_camera","flixel/group/FlxSpriteGroup.hx",664,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_671_set_cameras,"flixel.group.FlxTypedSpriteGroup","set_cameras",0xe3294344,"flixel.group.FlxTypedSpriteGroup.set_cameras","flixel/group/FlxSpriteGroup.hx",671,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_678_set_exists,"flixel.group.FlxTypedSpriteGroup","set_exists",0xf5d49986,"flixel.group.FlxTypedSpriteGroup.set_exists","flixel/group/FlxSpriteGroup.hx",678,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_685_set_visible,"flixel.group.FlxTypedSpriteGroup","set_visible",0xa31c3188,"flixel.group.FlxTypedSpriteGroup.set_visible","flixel/group/FlxSpriteGroup.hx",685,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_692_set_active,"flixel.group.FlxTypedSpriteGroup","set_active",0x4c3abd70,"flixel.group.FlxTypedSpriteGroup.set_active","flixel/group/FlxSpriteGroup.hx",692,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_699_set_alive,"flixel.group.FlxTypedSpriteGroup","set_alive",0x0bff8b63,"flixel.group.FlxTypedSpriteGroup.set_alive","flixel/group/FlxSpriteGroup.hx",699,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_706_set_x,"flixel.group.FlxTypedSpriteGroup","set_x",0x52f1250e,"flixel.group.FlxTypedSpriteGroup.set_x","flixel/group/FlxSpriteGroup.hx",706,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_713_set_y,"flixel.group.FlxTypedSpriteGroup","set_y",0x52f1250f,"flixel.group.FlxTypedSpriteGroup.set_y","flixel/group/FlxSpriteGroup.hx",713,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_720_set_angle,"flixel.group.FlxTypedSpriteGroup","set_angle",0x0d506b69,"flixel.group.FlxTypedSpriteGroup.set_angle","flixel/group/FlxSpriteGroup.hx",720,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_727_set_alpha,"flixel.group.FlxTypedSpriteGroup","set_alpha",0x0c04cef4,"flixel.group.FlxTypedSpriteGroup.set_alpha","flixel/group/FlxSpriteGroup.hx",727,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_742_set_facing,"flixel.group.FlxTypedSpriteGroup","set_facing",0x19f9bac4,"flixel.group.FlxTypedSpriteGroup.set_facing","flixel/group/FlxSpriteGroup.hx",742,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_749_set_flipX,"flixel.group.FlxTypedSpriteGroup","set_flipX",0xed006ca1,"flixel.group.FlxTypedSpriteGroup.set_flipX","flixel/group/FlxSpriteGroup.hx",749,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_756_set_flipY,"flixel.group.FlxTypedSpriteGroup","set_flipY",0xed006ca2,"flixel.group.FlxTypedSpriteGroup.set_flipY","flixel/group/FlxSpriteGroup.hx",756,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_763_set_moves,"flixel.group.FlxTypedSpriteGroup","set_moves",0xf6d3f3d8,"flixel.group.FlxTypedSpriteGroup.set_moves","flixel/group/FlxSpriteGroup.hx",763,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_770_set_immovable,"flixel.group.FlxTypedSpriteGroup","set_immovable",0xdf98d1a0,"flixel.group.FlxTypedSpriteGroup.set_immovable","flixel/group/FlxSpriteGroup.hx",770,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_777_set_solid,"flixel.group.FlxTypedSpriteGroup","set_solid",0x6b33dbc1,"flixel.group.FlxTypedSpriteGroup.set_solid","flixel/group/FlxSpriteGroup.hx",777,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_784_set_color,"flixel.group.FlxTypedSpriteGroup","set_color",0x34ca98f9,"flixel.group.FlxTypedSpriteGroup.set_color","flixel/group/FlxSpriteGroup.hx",784,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_791_set_blend,"flixel.group.FlxTypedSpriteGroup","set_blend",0x9f630fe7,"flixel.group.FlxTypedSpriteGroup.set_blend","flixel/group/FlxSpriteGroup.hx",791,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_798_set_clipRect,"flixel.group.FlxTypedSpriteGroup","set_clipRect",0x5134ca3e,"flixel.group.FlxTypedSpriteGroup.set_clipRect","flixel/group/FlxSpriteGroup.hx",798,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_805_set_pixelPerfectRender,"flixel.group.FlxTypedSpriteGroup","set_pixelPerfectRender",0x5163ac87,"flixel.group.FlxTypedSpriteGroup.set_pixelPerfectRender","flixel/group/FlxSpriteGroup.hx",805,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_816_set_width,"flixel.group.FlxTypedSpriteGroup","set_width",0xb4d0dd9c,"flixel.group.FlxTypedSpriteGroup.set_width","flixel/group/FlxSpriteGroup.hx",816,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_820_get_width,"flixel.group.FlxTypedSpriteGroup","get_width",0xd17ff190,"flixel.group.FlxTypedSpriteGroup.get_width","flixel/group/FlxSpriteGroup.hx",820,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_835_findMinX,"flixel.group.FlxTypedSpriteGroup","findMinX",0xf55ba38c,"flixel.group.FlxTypedSpriteGroup.findMinX","flixel/group/FlxSpriteGroup.hx",835,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_839_findMinXHelper,"flixel.group.FlxTypedSpriteGroup","findMinXHelper",0x0cd7c61a,"flixel.group.FlxTypedSpriteGroup.findMinXHelper","flixel/group/FlxSpriteGroup.hx",839,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_866_findMaxX,"flixel.group.FlxTypedSpriteGroup","findMaxX",0xf5559a3a,"flixel.group.FlxTypedSpriteGroup.findMaxX","flixel/group/FlxSpriteGroup.hx",866,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_870_findMaxXHelper,"flixel.group.FlxTypedSpriteGroup","findMaxXHelper",0xb144f348,"flixel.group.FlxTypedSpriteGroup.findMaxXHelper","flixel/group/FlxSpriteGroup.hx",870,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_894_set_height,"flixel.group.FlxTypedSpriteGroup","set_height",0x38408391,"flixel.group.FlxTypedSpriteGroup.set_height","flixel/group/FlxSpriteGroup.hx",894,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_898_get_height,"flixel.group.FlxTypedSpriteGroup","get_height",0x34c2e51d,"flixel.group.FlxTypedSpriteGroup.get_height","flixel/group/FlxSpriteGroup.hx",898,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_913_findMinY,"flixel.group.FlxTypedSpriteGroup","findMinY",0xf55ba38d,"flixel.group.FlxTypedSpriteGroup.findMinY","flixel/group/FlxSpriteGroup.hx",913,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_917_findMinYHelper,"flixel.group.FlxTypedSpriteGroup","findMinYHelper",0x366d3cdb,"flixel.group.FlxTypedSpriteGroup.findMinYHelper","flixel/group/FlxSpriteGroup.hx",917,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_944_findMaxY,"flixel.group.FlxTypedSpriteGroup","findMaxY",0xf5559a3b,"flixel.group.FlxTypedSpriteGroup.findMaxY","flixel/group/FlxSpriteGroup.hx",944,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_948_findMaxYHelper,"flixel.group.FlxTypedSpriteGroup","findMaxYHelper",0xdada6a09,"flixel.group.FlxTypedSpriteGroup.findMaxYHelper","flixel/group/FlxSpriteGroup.hx",948,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_971_get_length,"flixel.group.FlxTypedSpriteGroup","get_length",0xd17e721c,"flixel.group.FlxTypedSpriteGroup.get_length","flixel/group/FlxSpriteGroup.hx",971,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_976_get_maxSize,"flixel.group.FlxTypedSpriteGroup","get_maxSize",0xc20eab8f,"flixel.group.FlxTypedSpriteGroup.get_maxSize","flixel/group/FlxSpriteGroup.hx",976,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_981_set_maxSize,"flixel.group.FlxTypedSpriteGroup","set_maxSize",0xcc7bb29b,"flixel.group.FlxTypedSpriteGroup.set_maxSize","flixel/group/FlxSpriteGroup.hx",981,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_986_get_members,"flixel.group.FlxTypedSpriteGroup","get_members",0x0ffadee3,"flixel.group.FlxTypedSpriteGroup.get_members","flixel/group/FlxSpriteGroup.hx",986,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_992_xTransform,"flixel.group.FlxTypedSpriteGroup","xTransform",0x4c3dab41,"flixel.group.FlxTypedSpriteGroup.xTransform","flixel/group/FlxSpriteGroup.hx",992,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_995_yTransform,"flixel.group.FlxTypedSpriteGroup","yTransform",0x0c882320,"flixel.group.FlxTypedSpriteGroup.yTransform","flixel/group/FlxSpriteGroup.hx",995,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_998_angleTransform,"flixel.group.FlxTypedSpriteGroup","angleTransform",0x285b5f06,"flixel.group.FlxTypedSpriteGroup.angleTransform","flixel/group/FlxSpriteGroup.hx",998,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1002_alphaTransform,"flixel.group.FlxTypedSpriteGroup","alphaTransform",0xe7f1b21b,"flixel.group.FlxTypedSpriteGroup.alphaTransform","flixel/group/FlxSpriteGroup.hx",1002,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1009_directAlphaTransform,"flixel.group.FlxTypedSpriteGroup","directAlphaTransform",0x680196e4,"flixel.group.FlxTypedSpriteGroup.directAlphaTransform","flixel/group/FlxSpriteGroup.hx",1009,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1012_facingTransform,"flixel.group.FlxTypedSpriteGroup","facingTransform",0x8cbce265,"flixel.group.FlxTypedSpriteGroup.facingTransform","flixel/group/FlxSpriteGroup.hx",1012,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1015_flipXTransform,"flixel.group.FlxTypedSpriteGroup","flipXTransform",0x2d6d76ce,"flixel.group.FlxTypedSpriteGroup.flipXTransform","flixel/group/FlxSpriteGroup.hx",1015,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1018_flipYTransform,"flixel.group.FlxTypedSpriteGroup","flipYTransform",0xedb7eead,"flixel.group.FlxTypedSpriteGroup.flipYTransform","flixel/group/FlxSpriteGroup.hx",1018,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1021_movesTransform,"flixel.group.FlxTypedSpriteGroup","movesTransform",0x6670d0b7,"flixel.group.FlxTypedSpriteGroup.movesTransform","flixel/group/FlxSpriteGroup.hx",1021,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1024_pixelPerfectTransform,"flixel.group.FlxTypedSpriteGroup","pixelPerfectTransform",0x21312cf8,"flixel.group.FlxTypedSpriteGroup.pixelPerfectTransform","flixel/group/FlxSpriteGroup.hx",1024,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1027_gColorTransform,"flixel.group.FlxTypedSpriteGroup","gColorTransform",0x1fbe79c3,"flixel.group.FlxTypedSpriteGroup.gColorTransform","flixel/group/FlxSpriteGroup.hx",1027,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1030_blendTransform,"flixel.group.FlxTypedSpriteGroup","blendTransform",0x1d7b3ac8,"flixel.group.FlxTypedSpriteGroup.blendTransform","flixel/group/FlxSpriteGroup.hx",1030,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1033_immovableTransform,"flixel.group.FlxTypedSpriteGroup","immovableTransform",0x108fd76f,"flixel.group.FlxTypedSpriteGroup.immovableTransform","flixel/group/FlxSpriteGroup.hx",1033,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1036_visibleTransform,"flixel.group.FlxTypedSpriteGroup","visibleTransform",0x807eb3c7,"flixel.group.FlxTypedSpriteGroup.visibleTransform","flixel/group/FlxSpriteGroup.hx",1036,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1039_activeTransform,"flixel.group.FlxTypedSpriteGroup","activeTransform",0x51542a39,"flixel.group.FlxTypedSpriteGroup.activeTransform","flixel/group/FlxSpriteGroup.hx",1039,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1042_solidTransform,"flixel.group.FlxTypedSpriteGroup","solidTransform",0x242323ae,"flixel.group.FlxTypedSpriteGroup.solidTransform","flixel/group/FlxSpriteGroup.hx",1042,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1045_aliveTransform,"flixel.group.FlxTypedSpriteGroup","aliveTransform",0x29096fcc,"flixel.group.FlxTypedSpriteGroup.aliveTransform","flixel/group/FlxSpriteGroup.hx",1045,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1048_existsTransform,"flixel.group.FlxTypedSpriteGroup","existsTransform",0xb2051b63,"flixel.group.FlxTypedSpriteGroup.existsTransform","flixel/group/FlxSpriteGroup.hx",1048,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1051_cameraTransform,"flixel.group.FlxTypedSpriteGroup","cameraTransform",0x020c117a,"flixel.group.FlxTypedSpriteGroup.cameraTransform","flixel/group/FlxSpriteGroup.hx",1051,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1054_camerasTransform,"flixel.group.FlxTypedSpriteGroup","camerasTransform",0x7f778a8b,"flixel.group.FlxTypedSpriteGroup.camerasTransform","flixel/group/FlxSpriteGroup.hx",1054,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1057_offsetTransform,"flixel.group.FlxTypedSpriteGroup","offsetTransform",0x35aa32cc,"flixel.group.FlxTypedSpriteGroup.offsetTransform","flixel/group/FlxSpriteGroup.hx",1057,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1060_originTransform,"flixel.group.FlxTypedSpriteGroup","originTransform",0x93cd4e19,"flixel.group.FlxTypedSpriteGroup.originTransform","flixel/group/FlxSpriteGroup.hx",1060,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1063_scaleTransform,"flixel.group.FlxTypedSpriteGroup","scaleTransform",0x4ec9456f,"flixel.group.FlxTypedSpriteGroup.scaleTransform","flixel/group/FlxSpriteGroup.hx",1063,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1066_scrollFactorTransform,"flixel.group.FlxTypedSpriteGroup","scrollFactorTransform",0x4d8808c3,"flixel.group.FlxTypedSpriteGroup.scrollFactorTransform","flixel/group/FlxSpriteGroup.hx",1066,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1070_clipRectTransform,"flixel.group.FlxTypedSpriteGroup","clipRectTransform",0x59fda4eb,"flixel.group.FlxTypedSpriteGroup.clipRectTransform","flixel/group/FlxSpriteGroup.hx",1070,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1078_offsetCallback,"flixel.group.FlxTypedSpriteGroup","offsetCallback",0xeadd6065,"flixel.group.FlxTypedSpriteGroup.offsetCallback","flixel/group/FlxSpriteGroup.hx",1078,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1081_originCallback,"flixel.group.FlxTypedSpriteGroup","originCallback",0xfa35edb8,"flixel.group.FlxTypedSpriteGroup.originCallback","flixel/group/FlxSpriteGroup.hx",1081,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1084_scaleCallback,"flixel.group.FlxTypedSpriteGroup","scaleCallback",0xf9e6b322,"flixel.group.FlxTypedSpriteGroup.scaleCallback","flixel/group/FlxSpriteGroup.hx",1084,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1087_scrollFactorCallback,"flixel.group.FlxTypedSpriteGroup","scrollFactorCallback",0x26aab64e,"flixel.group.FlxTypedSpriteGroup.scrollFactorCallback","flixel/group/FlxSpriteGroup.hx",1087,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1099_loadGraphicFromSprite,"flixel.group.FlxTypedSpriteGroup","loadGraphicFromSprite",0x6f12dc84,"flixel.group.FlxTypedSpriteGroup.loadGraphicFromSprite","flixel/group/FlxSpriteGroup.hx",1099,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1111_loadGraphic,"flixel.group.FlxTypedSpriteGroup","loadGraphic",0xb4356b15,"flixel.group.FlxTypedSpriteGroup.loadGraphic","flixel/group/FlxSpriteGroup.hx",1111,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1122_loadRotatedGraphic,"flixel.group.FlxTypedSpriteGroup","loadRotatedGraphic",0x45e23732,"flixel.group.FlxTypedSpriteGroup.loadRotatedGraphic","flixel/group/FlxSpriteGroup.hx",1122,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1134_makeGraphic,"flixel.group.FlxTypedSpriteGroup","makeGraphic",0x27a1d44d,"flixel.group.FlxTypedSpriteGroup.makeGraphic","flixel/group/FlxSpriteGroup.hx",1134,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1141_set_pixels,"flixel.group.FlxTypedSpriteGroup","set_pixels",0xc29e6ad7,"flixel.group.FlxTypedSpriteGroup.set_pixels","flixel/group/FlxSpriteGroup.hx",1141,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1146_set_frame,"flixel.group.FlxTypedSpriteGroup","set_frame",0xf0f19fc3,"flixel.group.FlxTypedSpriteGroup.set_frame","flixel/group/FlxSpriteGroup.hx",1146,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1151_get_pixels,"flixel.group.FlxTypedSpriteGroup","get_pixels",0xbf20cc63,"flixel.group.FlxTypedSpriteGroup.get_pixels","flixel/group/FlxSpriteGroup.hx",1151,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1160_calcFrame,"flixel.group.FlxTypedSpriteGroup","calcFrame",0xbd00728b,"flixel.group.FlxTypedSpriteGroup.calcFrame","flixel/group/FlxSpriteGroup.hx",1160,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1167_resetHelpers,"flixel.group.FlxTypedSpriteGroup","resetHelpers",0x60f4ebe3,"flixel.group.FlxTypedSpriteGroup.resetHelpers","flixel/group/FlxSpriteGroup.hx",1167,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1172_stamp,"flixel.group.FlxTypedSpriteGroup","stamp",0x5cccf9b6,"flixel.group.FlxTypedSpriteGroup.stamp","flixel/group/FlxSpriteGroup.hx",1172,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1176_set_frames,"flixel.group.FlxTypedSpriteGroup","set_frames",0xe27a2b50,"flixel.group.FlxTypedSpriteGroup.set_frames","flixel/group/FlxSpriteGroup.hx",1176,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1182_updateColorTransform,"flixel.group.FlxTypedSpriteGroup","updateColorTransform",0x64df671f,"flixel.group.FlxTypedSpriteGroup.updateColorTransform","flixel/group/FlxSpriteGroup.hx",1182,0xeb1fa7f3)
namespace flixel{
namespace group{

void FlxTypedSpriteGroup_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int MaxSize = __o_MaxSize.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_30_new)
HXLINE(  63)		this->_skipTransformChildren = false;
HXLINE(  53)		this->directAlpha = false;
HXLINE(  78)		super::__construct(X,Y,null());
HXLINE(  79)		this->group =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,MaxSize);
HXLINE(  80)		this->_sprites = this->group->members;
            	}

Dynamic FlxTypedSpriteGroup_obj::__CreateEmpty() { return new FlxTypedSpriteGroup_obj; }

void *FlxTypedSpriteGroup_obj::_hx_vtable = 0;

Dynamic FlxTypedSpriteGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedSpriteGroup_obj > _hx_result = new FlxTypedSpriteGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxTypedSpriteGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTypedSpriteGroup_obj::transformChildren_flixel_math_FlxRect( ::Dynamic Function, ::flixel::math::FlxRect Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_620_transformChildren_flixel_math_FlxRect)
HXLINE( 621)		bool _hx_tmp;
HXDLIN( 621)		if (!(this->_skipTransformChildren)) {
HXLINE( 621)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 621)			_hx_tmp = true;
            		}
HXDLIN( 621)		if (_hx_tmp) {
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 624)			while((_g < _g1->length)){
HXLINE( 624)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 626)				if (::hx::IsNotNull( sprite )) {
HXLINE( 627)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flixel_math_FlxRect,(void))

void FlxTypedSpriteGroup_obj::transformChildren_openfl_display_BlendMode( ::Dynamic Function, ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_620_transformChildren_openfl_display_BlendMode)
HXLINE( 621)		bool _hx_tmp;
HXDLIN( 621)		if (!(this->_skipTransformChildren)) {
HXLINE( 621)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 621)			_hx_tmp = true;
            		}
HXDLIN( 621)		if (_hx_tmp) {
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 624)			while((_g < _g1->length)){
HXLINE( 624)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 626)				if (::hx::IsNotNull( sprite )) {
HXLINE( 627)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_openfl_display_BlendMode,(void))

void FlxTypedSpriteGroup_obj::transformChildren_Int( ::Dynamic Function,int Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_620_transformChildren_Int)
HXLINE( 621)		bool _hx_tmp;
HXDLIN( 621)		if (!(this->_skipTransformChildren)) {
HXLINE( 621)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 621)			_hx_tmp = true;
            		}
HXDLIN( 621)		if (_hx_tmp) {
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 624)			while((_g < _g1->length)){
HXLINE( 624)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 626)				if (::hx::IsNotNull( sprite )) {
HXLINE( 627)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Int,(void))

void FlxTypedSpriteGroup_obj::transformChildren_Array_flixel_FlxCamera( ::Dynamic Function,::Array< ::Dynamic> Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_620_transformChildren_Array_flixel_FlxCamera)
HXLINE( 621)		bool _hx_tmp;
HXDLIN( 621)		if (!(this->_skipTransformChildren)) {
HXLINE( 621)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 621)			_hx_tmp = true;
            		}
HXDLIN( 621)		if (_hx_tmp) {
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 624)			while((_g < _g1->length)){
HXLINE( 624)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 626)				if (::hx::IsNotNull( sprite )) {
HXLINE( 627)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Array_flixel_FlxCamera,(void))

void FlxTypedSpriteGroup_obj::transformChildren_flixel_FlxCamera( ::Dynamic Function, ::flixel::FlxCamera Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_620_transformChildren_flixel_FlxCamera)
HXLINE( 621)		bool _hx_tmp;
HXDLIN( 621)		if (!(this->_skipTransformChildren)) {
HXLINE( 621)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 621)			_hx_tmp = true;
            		}
HXDLIN( 621)		if (_hx_tmp) {
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 624)			while((_g < _g1->length)){
HXLINE( 624)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 626)				if (::hx::IsNotNull( sprite )) {
HXLINE( 627)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flixel_FlxCamera,(void))

void FlxTypedSpriteGroup_obj::multiTransformChildren_Float(::Array< ::Dynamic> FunctionArray,::Array< Float > ValueArray){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_639_multiTransformChildren_Float)
HXLINE( 640)		bool _hx_tmp;
HXDLIN( 640)		if (!(this->_skipTransformChildren)) {
HXLINE( 640)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 640)			_hx_tmp = true;
            		}
HXDLIN( 640)		if (_hx_tmp) {
HXLINE( 641)			return;
            		}
HXLINE( 643)		int numProps = FunctionArray->length;
HXLINE( 644)		if ((numProps > ValueArray->length)) {
HXLINE( 645)			return;
            		}
HXLINE( 647)		 ::Dynamic lambda;
HXLINE( 648)		{
HXLINE( 648)			int _g = 0;
HXDLIN( 648)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 648)			while((_g < _g1->length)){
HXLINE( 648)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 648)				_g = (_g + 1);
HXLINE( 650)				bool _hx_tmp;
HXDLIN( 650)				if (::hx::IsNotNull( sprite )) {
HXLINE( 650)					_hx_tmp = sprite->exists;
            				}
            				else {
HXLINE( 650)					_hx_tmp = false;
            				}
HXDLIN( 650)				if (_hx_tmp) {
HXLINE( 652)					int _g = 0;
HXDLIN( 652)					int _g1 = numProps;
HXDLIN( 652)					while((_g < _g1)){
HXLINE( 652)						_g = (_g + 1);
HXDLIN( 652)						int i = (_g - 1);
HXLINE( 654)						lambda = FunctionArray->__get(i);
HXLINE( 655)						lambda(sprite,ValueArray->__get(i));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,multiTransformChildren_Float,(void))

void FlxTypedSpriteGroup_obj::transformChildren_flixel_math_FlxPoint( ::Dynamic Function, ::flixel::math::FlxBasePoint Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_620_transformChildren_flixel_math_FlxPoint)
HXLINE( 621)		bool _hx_tmp;
HXDLIN( 621)		if (!(this->_skipTransformChildren)) {
HXLINE( 621)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 621)			_hx_tmp = true;
            		}
HXDLIN( 621)		if (_hx_tmp) {
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 624)			while((_g < _g1->length)){
HXLINE( 624)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 626)				if (::hx::IsNotNull( sprite )) {
HXLINE( 627)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flixel_math_FlxPoint,(void))

void FlxTypedSpriteGroup_obj::transformChildren_Bool( ::Dynamic Function,bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_620_transformChildren_Bool)
HXLINE( 621)		bool _hx_tmp;
HXDLIN( 621)		if (!(this->_skipTransformChildren)) {
HXLINE( 621)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 621)			_hx_tmp = true;
            		}
HXDLIN( 621)		if (_hx_tmp) {
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 624)			while((_g < _g1->length)){
HXLINE( 624)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 626)				if (::hx::IsNotNull( sprite )) {
HXLINE( 627)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Bool,(void))

void FlxTypedSpriteGroup_obj::transformChildren_Float( ::Dynamic Function,Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_620_transformChildren_Float)
HXLINE( 621)		bool _hx_tmp;
HXDLIN( 621)		if (!(this->_skipTransformChildren)) {
HXLINE( 621)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 621)			_hx_tmp = true;
            		}
HXDLIN( 621)		if (_hx_tmp) {
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 624)			while((_g < _g1->length)){
HXLINE( 624)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 626)				if (::hx::IsNotNull( sprite )) {
HXLINE( 627)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Float,(void))

void FlxTypedSpriteGroup_obj::initVars(){
            	HX_GC_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_89_initVars)
HXLINE(  90)		this->flixelType = 4;
HXLINE(  92)		this->offset =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->offsetCallback_dyn(),null(),null());
HXLINE(  93)		this->origin =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->originCallback_dyn(),null(),null());
HXLINE(  94)		this->scale =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->scaleCallback_dyn(),null(),null());
HXLINE(  95)		this->scrollFactor =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->scrollFactorCallback_dyn(),null(),null());
HXLINE(  97)		{
HXLINE(  97)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  97)			this1->set_x(( (Float)(1) ));
HXDLIN(  97)			this1->set_y(( (Float)(1) ));
            		}
HXLINE(  98)		{
HXLINE(  98)			 ::flixel::math::FlxBasePoint this2 = this->scrollFactor;
HXDLIN(  98)			this2->set_x(( (Float)(1) ));
HXDLIN(  98)			this2->set_y(( (Float)(1) ));
            		}
HXLINE( 100)		{
HXLINE( 100)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 100)			point->_inPool = false;
HXDLIN( 100)			this->velocity = point;
HXDLIN( 100)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 100)			point1->_inPool = false;
HXDLIN( 100)			this->acceleration = point1;
HXDLIN( 100)			 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 100)			point2->_inPool = false;
HXDLIN( 100)			this->drag = point2;
HXDLIN( 100)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(10000,10000);
HXDLIN( 100)			point3->_inPool = false;
HXDLIN( 100)			this->maxVelocity = point3;
            		}
            	}


void FlxTypedSpriteGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_114_destroy)
HXLINE( 116)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->offset)) );
HXLINE( 117)		this->origin = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->origin)) );
HXLINE( 118)		this->scale = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->scale)) );
HXLINE( 119)		this->scrollFactor = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->scrollFactor)) );
HXLINE( 121)		this->group = ( ( ::flixel::group::FlxTypedGroup)(::flixel::util::FlxDestroyUtil_obj::destroy(this->group)) );
HXLINE( 122)		this->_sprites = null();
HXLINE( 124)		this->super::destroy();
            	}


 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_133_clone)
HXLINE( 134)		 ::flixel::group::FlxTypedSpriteGroup newGroup =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,this->x,this->y,this->group->maxSize);
HXLINE( 135)		{
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			::cpp::VirtualArray _g1 = this->group->members;
HXDLIN( 135)			while((_g < _g1->get_length())){
HXLINE( 135)				 ::Dynamic sprite = _g1->__get(_g);
HXDLIN( 135)				_g = (_g + 1);
HXLINE( 137)				if (::hx::IsNotNull( sprite )) {
HXLINE( 139)					newGroup->add(( ( ::flixel::FlxSprite)(sprite) )->clone());
            				}
            			}
            		}
HXLINE( 142)		return newGroup;
            	}


bool FlxTypedSpriteGroup_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_152_isOnScreen)
HXLINE( 153)		{
HXLINE( 153)			int _g = 0;
HXDLIN( 153)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 153)			while((_g < _g1->length)){
HXLINE( 153)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 153)				_g = (_g + 1);
HXLINE( 155)				bool _hx_tmp;
HXDLIN( 155)				bool _hx_tmp1;
HXDLIN( 155)				bool _hx_tmp2;
HXDLIN( 155)				if (::hx::IsNotNull( sprite )) {
HXLINE( 155)					_hx_tmp2 = sprite->exists;
            				}
            				else {
HXLINE( 155)					_hx_tmp2 = false;
            				}
HXDLIN( 155)				if (_hx_tmp2) {
HXLINE( 155)					_hx_tmp1 = sprite->visible;
            				}
            				else {
HXLINE( 155)					_hx_tmp1 = false;
            				}
HXDLIN( 155)				if (_hx_tmp1) {
HXLINE( 155)					_hx_tmp = sprite->isOnScreen(Camera);
            				}
            				else {
HXLINE( 155)					_hx_tmp = false;
            				}
HXDLIN( 155)				if (_hx_tmp) {
HXLINE( 156)					return true;
            				}
            			}
            		}
HXLINE( 159)		return false;
            	}


bool FlxTypedSpriteGroup_obj::overlapsPoint( ::flixel::math::FlxBasePoint point,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_171_overlapsPoint)
HXLINE( 172)		bool result = false;
HXLINE( 173)		{
HXLINE( 173)			int _g = 0;
HXDLIN( 173)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 173)			while((_g < _g1->length)){
HXLINE( 173)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 173)				_g = (_g + 1);
HXLINE( 175)				bool _hx_tmp;
HXDLIN( 175)				bool _hx_tmp1;
HXDLIN( 175)				if (::hx::IsNotNull( sprite )) {
HXLINE( 175)					_hx_tmp1 = sprite->exists;
            				}
            				else {
HXLINE( 175)					_hx_tmp1 = false;
            				}
HXDLIN( 175)				if (_hx_tmp1) {
HXLINE( 175)					_hx_tmp = sprite->visible;
            				}
            				else {
HXLINE( 175)					_hx_tmp = false;
            				}
HXDLIN( 175)				if (_hx_tmp) {
HXLINE( 177)					if (!(result)) {
HXLINE( 177)						result = sprite->overlapsPoint(point,InScreenSpace,Camera);
            					}
            					else {
HXLINE( 177)						result = true;
            					}
            				}
            			}
            		}
HXLINE( 181)		return result;
            	}


bool FlxTypedSpriteGroup_obj::pixelsOverlapPoint( ::flixel::math::FlxBasePoint point,::hx::Null< int >  __o_Mask, ::flixel::FlxCamera Camera){
            		int Mask = __o_Mask.Default(255);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_194_pixelsOverlapPoint)
HXLINE( 195)		bool result = false;
HXLINE( 196)		{
HXLINE( 196)			int _g = 0;
HXDLIN( 196)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 196)			while((_g < _g1->length)){
HXLINE( 196)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 196)				_g = (_g + 1);
HXLINE( 198)				bool _hx_tmp;
HXDLIN( 198)				bool _hx_tmp1;
HXDLIN( 198)				if (::hx::IsNotNull( sprite )) {
HXLINE( 198)					_hx_tmp1 = sprite->exists;
            				}
            				else {
HXLINE( 198)					_hx_tmp1 = false;
            				}
HXDLIN( 198)				if (_hx_tmp1) {
HXLINE( 198)					_hx_tmp = sprite->visible;
            				}
            				else {
HXLINE( 198)					_hx_tmp = false;
            				}
HXDLIN( 198)				if (_hx_tmp) {
HXLINE( 200)					if (!(result)) {
HXLINE( 200)						result = sprite->pixelsOverlapPoint(point,Mask,Camera);
            					}
            					else {
HXLINE( 200)						result = true;
            					}
            				}
            			}
            		}
HXLINE( 204)		return result;
            	}


void FlxTypedSpriteGroup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_208_update)
HXLINE( 209)		this->group->update(elapsed);
HXLINE( 211)		if (this->moves) {
HXLINE( 212)			this->updateMotion(elapsed);
            		}
            	}


void FlxTypedSpriteGroup_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_216_draw)
HXLINE( 217)		this->group->draw();
HXLINE( 220)		if (::flixel::FlxG_obj::debugger->drawDebug) {
HXLINE( 221)			this->drawDebug();
            		}
            	}


::Array< ::Dynamic> FlxTypedSpriteGroup_obj::replaceColor(int _tmp_Color,int _tmp_NewColor,::hx::Null< bool >  __o_FetchPositions){
            		bool FetchPositions = __o_FetchPositions.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_235_replaceColor)
HXLINE( 236)		int Color = _tmp_Color;
HXDLIN( 236)		int NewColor = _tmp_NewColor;
HXDLIN( 236)		::Array< ::Dynamic> positions = null();
HXLINE( 237)		if (FetchPositions) {
HXLINE( 239)			positions = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 242)		::Array< ::Dynamic> spritePositions;
HXLINE( 243)		{
HXLINE( 243)			int _g = 0;
HXDLIN( 243)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 243)			while((_g < _g1->length)){
HXLINE( 243)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 243)				_g = (_g + 1);
HXLINE( 245)				if (::hx::IsNotNull( sprite )) {
HXLINE( 247)					spritePositions = sprite->replaceColor(Color,NewColor,FetchPositions);
HXLINE( 248)					if (FetchPositions) {
HXLINE( 250)						positions = positions->concat(spritePositions);
            					}
            				}
            			}
            		}
HXLINE( 255)		return positions;
            	}


 ::Dynamic FlxTypedSpriteGroup_obj::add( ::Dynamic Sprite){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_265_add)
HXLINE( 266)		this->preAdd(Sprite);
HXLINE( 267)		return this->group->add(Sprite);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,add,return )

 ::Dynamic FlxTypedSpriteGroup_obj::insert(int Position, ::Dynamic Sprite){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_280_insert)
HXLINE( 281)		this->preAdd(Sprite);
HXLINE( 282)		return this->group->insert(Position,Sprite);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,insert,return )

void FlxTypedSpriteGroup_obj::preAdd( ::Dynamic Sprite){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_292_preAdd)
HXLINE( 293)		 ::flixel::FlxSprite sprite = ( ( ::flixel::FlxSprite)(Sprite) );
HXLINE( 294)		sprite->set_x((sprite->x + this->x));
HXLINE( 295)		sprite->set_y((sprite->y + this->y));
HXLINE( 296)		sprite->set_alpha((sprite->alpha * this->alpha));
HXLINE( 297)		{
HXLINE( 297)			 ::flixel::math::FlxBasePoint this1 = sprite->scrollFactor;
HXDLIN( 297)			 ::flixel::math::FlxBasePoint p = this->scrollFactor;
HXDLIN( 297)			{
HXLINE( 297)				Float y = p->y;
HXDLIN( 297)				this1->set_x(p->x);
HXDLIN( 297)				this1->set_y(y);
            			}
HXDLIN( 297)			if (p->_weak) {
HXLINE( 297)				p->put();
            			}
            		}
HXLINE( 298)		sprite->set_cameras(this->_cameras);
HXLINE( 300)		if (::hx::IsNotNull( this->clipRect )) {
HXLINE( 301)			 ::flixel::math::FlxRect ClipRect = this->clipRect;
HXDLIN( 301)			if (::hx::IsNull( ClipRect )) {
HXLINE( 301)				sprite->set_clipRect(null());
            			}
            			else {
HXLINE( 301)				Float X = ((ClipRect->x - sprite->x) + this->x);
HXDLIN( 301)				Float Y = ((ClipRect->y - sprite->y) + this->y);
HXDLIN( 301)				Float Width = ClipRect->width;
HXDLIN( 301)				Float Height = ClipRect->height;
HXDLIN( 301)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 301)				_this->x = X;
HXDLIN( 301)				_this->y = Y;
HXDLIN( 301)				_this->width = Width;
HXDLIN( 301)				_this->height = Height;
HXDLIN( 301)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 301)				rect->_inPool = false;
HXDLIN( 301)				sprite->set_clipRect(rect);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,preAdd,(void))

 ::Dynamic FlxTypedSpriteGroup_obj::recycle(::hx::Class ObjectClass, ::Dynamic ObjectFactory,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Revive){
            		bool Force = __o_Force.Default(false);
            		bool Revive = __o_Revive.Default(true);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_331_recycle)
HXDLIN( 331)		return this->group->recycle(ObjectClass,ObjectFactory,Force,Revive);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedSpriteGroup_obj,recycle,return )

 ::Dynamic FlxTypedSpriteGroup_obj::remove( ::Dynamic Sprite,::hx::Null< bool >  __o_Splice){
            		bool Splice = __o_Splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_342_remove)
HXLINE( 343)		 ::flixel::FlxSprite sprite = ( ( ::flixel::FlxSprite)(Sprite) );
HXLINE( 344)		sprite->set_x((sprite->x - this->x));
HXLINE( 345)		sprite->set_y((sprite->y - this->y));
HXLINE( 347)		sprite->set_cameras(null());
HXLINE( 348)		return this->group->remove(Sprite,Splice);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,remove,return )

 ::Dynamic FlxTypedSpriteGroup_obj::replace( ::Dynamic OldObject, ::Dynamic NewObject){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_360_replace)
HXDLIN( 360)		return this->group->replace(OldObject,NewObject);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,replace,return )

void FlxTypedSpriteGroup_obj::sort( ::Dynamic Function,::hx::Null< int >  __o_Order){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,a1, ::Dynamic,_g) HXARGC(2)
            		int _hx_run( ::Dynamic a2, ::Dynamic a3){
            			HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_375_sort)
HXDLIN( 375)			return ( (int)(_g(a1,a2,a3)) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int Order = __o_Order.Default(-1);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_375_sort)
HXDLIN( 375)		 ::Dynamic _g = Function;
HXDLIN( 375)		int a1 = Order;
HXDLIN( 375)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN( 375)		this->group->members->sort(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,sort,(void))

 ::Dynamic FlxTypedSpriteGroup_obj::getFirstAvailable(::hx::Class ObjectClass,::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_389_getFirstAvailable)
HXDLIN( 389)		return this->group->getFirstAvailable(ObjectClass,Force);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,getFirstAvailable,return )

int FlxTypedSpriteGroup_obj::getFirstNull(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_400_getFirstNull)
HXDLIN( 400)		return this->group->getFirstNull();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstNull,return )

 ::Dynamic FlxTypedSpriteGroup_obj::getFirstExisting(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_411_getFirstExisting)
HXDLIN( 411)		return this->group->getFirstExisting();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstExisting,return )

 ::Dynamic FlxTypedSpriteGroup_obj::getFirstAlive(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_422_getFirstAlive)
HXDLIN( 422)		return this->group->getFirstAlive();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstAlive,return )

 ::Dynamic FlxTypedSpriteGroup_obj::getFirstDead(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_433_getFirstDead)
HXDLIN( 433)		return this->group->getFirstDead();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstDead,return )

int FlxTypedSpriteGroup_obj::countLiving(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_443_countLiving)
HXDLIN( 443)		return this->group->countLiving();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,countLiving,return )

int FlxTypedSpriteGroup_obj::countDead(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_453_countDead)
HXDLIN( 453)		return this->group->countDead();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,countDead,return )

 ::Dynamic FlxTypedSpriteGroup_obj::getRandom(::hx::Null< int >  __o_StartIndex,::hx::Null< int >  __o_Length){
            		int StartIndex = __o_StartIndex.Default(0);
            		int Length = __o_Length.Default(0);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_466_getRandom)
HXDLIN( 466)		return this->group->getRandom(StartIndex,Length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,getRandom,return )

 ::flixel::group::FlxTypedGroupIterator FlxTypedSpriteGroup_obj::iterator( ::Dynamic filter){
            	HX_GC_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_476_iterator)
HXDLIN( 476)		return  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->group->members,filter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,iterator,return )

void FlxTypedSpriteGroup_obj::forEach( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_487_forEach)
HXDLIN( 487)		this->group->forEach(Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEach,(void))

void FlxTypedSpriteGroup_obj::forEachAlive( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_498_forEachAlive)
HXDLIN( 498)		this->group->forEachAlive(Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachAlive,(void))

void FlxTypedSpriteGroup_obj::forEachDead( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_509_forEachDead)
HXDLIN( 509)		this->group->forEachDead(Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachDead,(void))

void FlxTypedSpriteGroup_obj::forEachExists( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_520_forEachExists)
HXDLIN( 520)		this->group->forEachExists(Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachExists,(void))

void FlxTypedSpriteGroup_obj::forEachOfType(::hx::Class ObjectClass, ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_532_forEachOfType)
HXDLIN( 532)		this->group->forEachOfType(ObjectClass,Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedSpriteGroup_obj,forEachOfType,(void))

void FlxTypedSpriteGroup_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_541_clear)
HXDLIN( 541)		this->group->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,clear,(void))

void FlxTypedSpriteGroup_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_549_kill)
HXLINE( 550)		this->_skipTransformChildren = true;
HXLINE( 551)		this->super::kill();
HXLINE( 552)		this->_skipTransformChildren = false;
HXLINE( 553)		this->group->kill();
            	}


void FlxTypedSpriteGroup_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_560_revive)
HXLINE( 561)		this->_skipTransformChildren = true;
HXLINE( 562)		this->super::revive();
HXLINE( 563)		this->_skipTransformChildren = false;
HXLINE( 564)		this->group->revive();
            	}


void FlxTypedSpriteGroup_obj::reset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_568_reset)
HXLINE( 569)		{
HXLINE( 569)			int _g = 0;
HXDLIN( 569)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 569)			while((_g < _g1->length)){
HXLINE( 569)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 569)				_g = (_g + 1);
HXLINE( 571)				if (::hx::IsNotNull( sprite )) {
HXLINE( 572)					sprite->reset(((sprite->x + X) - this->x),((sprite->y + Y) - this->y));
            				}
            			}
            		}
HXLINE( 576)		this->_skipTransformChildren = true;
HXLINE( 579)		this->touching = 0;
HXLINE( 580)		this->wasTouching = 0;
HXLINE( 581)		this->set_x(X);
HXLINE( 582)		this->set_y(Y);
HXLINE( 584)		{
HXLINE( 584)			 ::flixel::math::FlxBasePoint this1 = this->velocity;
HXDLIN( 584)			this1->set_x(( (Float)(0) ));
HXDLIN( 584)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 585)		this->super::revive();
HXLINE( 587)		this->_skipTransformChildren = false;
            	}


void FlxTypedSpriteGroup_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_598_setPosition)
HXLINE( 600)		Float dx = (X - this->x);
HXLINE( 601)		Float dy = (Y - this->y);
HXLINE( 602)		this->multiTransformChildren_Float(::Array_obj< ::Dynamic>::__new(2)->init(0,this->xTransform_dyn())->init(1,this->yTransform_dyn()),::Array_obj< Float >::__new(2)->init(0,dx)->init(1,dy));
HXLINE( 605)		this->_skipTransformChildren = true;
HXLINE( 606)		this->set_x(X);
HXLINE( 607)		this->set_y(Y);
HXLINE( 608)		this->_skipTransformChildren = false;
            	}


 ::flixel::FlxCamera FlxTypedSpriteGroup_obj::set_camera( ::flixel::FlxCamera Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_664_set_camera)
HXLINE( 665)		if (::hx::IsInstanceNotEq( this->get_camera(),Value )) {
HXLINE( 666)			this->transformChildren_flixel_FlxCamera(this->cameraTransform_dyn(),Value);
            		}
HXLINE( 667)		return this->super::set_camera(Value);
            	}


::Array< ::Dynamic> FlxTypedSpriteGroup_obj::set_cameras(::Array< ::Dynamic> Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_671_set_cameras)
HXLINE( 672)		if (::hx::IsPointerNotEq( this->get_cameras(),Value )) {
HXLINE( 673)			this->transformChildren_Array_flixel_FlxCamera(this->camerasTransform_dyn(),Value);
            		}
HXLINE( 674)		return this->super::set_cameras(Value);
            	}


bool FlxTypedSpriteGroup_obj::set_exists(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_678_set_exists)
HXLINE( 679)		if ((this->exists != Value)) {
HXLINE( 680)			this->transformChildren_Bool(this->existsTransform_dyn(),Value);
            		}
HXLINE( 681)		return this->super::set_exists(Value);
            	}


bool FlxTypedSpriteGroup_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_685_set_visible)
HXLINE( 686)		bool _hx_tmp;
HXDLIN( 686)		if (this->exists) {
HXLINE( 686)			_hx_tmp = (this->visible != Value);
            		}
            		else {
HXLINE( 686)			_hx_tmp = false;
            		}
HXDLIN( 686)		if (_hx_tmp) {
HXLINE( 687)			this->transformChildren_Bool(this->visibleTransform_dyn(),Value);
            		}
HXLINE( 688)		return this->super::set_visible(Value);
            	}


bool FlxTypedSpriteGroup_obj::set_active(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_692_set_active)
HXLINE( 693)		bool _hx_tmp;
HXDLIN( 693)		if (this->exists) {
HXLINE( 693)			_hx_tmp = (this->active != Value);
            		}
            		else {
HXLINE( 693)			_hx_tmp = false;
            		}
HXDLIN( 693)		if (_hx_tmp) {
HXLINE( 694)			this->transformChildren_Bool(this->activeTransform_dyn(),Value);
            		}
HXLINE( 695)		return this->super::set_active(Value);
            	}


bool FlxTypedSpriteGroup_obj::set_alive(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_699_set_alive)
HXLINE( 700)		if ((this->alive != Value)) {
HXLINE( 701)			this->transformChildren_Bool(this->aliveTransform_dyn(),Value);
            		}
HXLINE( 702)		return this->super::set_alive(Value);
            	}


Float FlxTypedSpriteGroup_obj::set_x(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_706_set_x)
HXLINE( 707)		bool _hx_tmp;
HXDLIN( 707)		if (this->exists) {
HXLINE( 707)			_hx_tmp = (this->x != Value);
            		}
            		else {
HXLINE( 707)			_hx_tmp = false;
            		}
HXDLIN( 707)		if (_hx_tmp) {
HXLINE( 708)			this->transformChildren_Float(this->xTransform_dyn(),(Value - this->x));
            		}
HXLINE( 709)		return (this->x = Value);
            	}


Float FlxTypedSpriteGroup_obj::set_y(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_713_set_y)
HXLINE( 714)		bool _hx_tmp;
HXDLIN( 714)		if (this->exists) {
HXLINE( 714)			_hx_tmp = (this->y != Value);
            		}
            		else {
HXLINE( 714)			_hx_tmp = false;
            		}
HXDLIN( 714)		if (_hx_tmp) {
HXLINE( 715)			this->transformChildren_Float(this->yTransform_dyn(),(Value - this->y));
            		}
HXLINE( 716)		return (this->y = Value);
            	}


Float FlxTypedSpriteGroup_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_720_set_angle)
HXLINE( 721)		bool _hx_tmp;
HXDLIN( 721)		if (this->exists) {
HXLINE( 721)			_hx_tmp = (this->angle != Value);
            		}
            		else {
HXLINE( 721)			_hx_tmp = false;
            		}
HXDLIN( 721)		if (_hx_tmp) {
HXLINE( 722)			this->transformChildren_Float(this->angleTransform_dyn(),(Value - this->angle));
            		}
HXLINE( 723)		return (this->angle = Value);
            	}


Float FlxTypedSpriteGroup_obj::set_alpha(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_727_set_alpha)
HXLINE( 728)		Float lowerBound;
HXDLIN( 728)		if ((Value < 0)) {
HXLINE( 728)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 728)			lowerBound = Value;
            		}
HXDLIN( 728)		if ((lowerBound > 1)) {
HXLINE( 728)			Value = ( (Float)(1) );
            		}
            		else {
HXLINE( 728)			Value = lowerBound;
            		}
HXLINE( 730)		bool _hx_tmp;
HXDLIN( 730)		if (this->exists) {
HXLINE( 730)			_hx_tmp = (this->alpha != Value);
            		}
            		else {
HXLINE( 730)			_hx_tmp = false;
            		}
HXDLIN( 730)		if (_hx_tmp) {
HXLINE( 732)			Float factor;
HXDLIN( 732)			if ((this->alpha > 0)) {
HXLINE( 732)				factor = (Value / this->alpha);
            			}
            			else {
HXLINE( 732)				factor = ( (Float)(0) );
            			}
HXLINE( 733)			bool _hx_tmp;
HXDLIN( 733)			if (!(this->directAlpha)) {
HXLINE( 733)				_hx_tmp = (this->alpha != 0);
            			}
            			else {
HXLINE( 733)				_hx_tmp = false;
            			}
HXDLIN( 733)			if (_hx_tmp) {
HXLINE( 734)				this->transformChildren_Float(this->alphaTransform_dyn(),factor);
            			}
            			else {
HXLINE( 736)				this->transformChildren_Float(this->directAlphaTransform_dyn(),Value);
            			}
            		}
HXLINE( 738)		return (this->alpha = Value);
            	}


int FlxTypedSpriteGroup_obj::set_facing(int _tmp_Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_742_set_facing)
HXLINE( 743)		int Value = _tmp_Value;
HXDLIN( 743)		bool _hx_tmp;
HXDLIN( 743)		if (this->exists) {
HXLINE( 743)			_hx_tmp = (this->facing != Value);
            		}
            		else {
HXLINE( 743)			_hx_tmp = false;
            		}
HXDLIN( 743)		if (_hx_tmp) {
HXLINE( 744)			this->transformChildren_Int(this->facingTransform_dyn(),Value);
            		}
HXLINE( 745)		return (this->facing = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_flipX(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_749_set_flipX)
HXLINE( 750)		bool _hx_tmp;
HXDLIN( 750)		if (this->exists) {
HXLINE( 750)			_hx_tmp = (this->flipX != Value);
            		}
            		else {
HXLINE( 750)			_hx_tmp = false;
            		}
HXDLIN( 750)		if (_hx_tmp) {
HXLINE( 751)			this->transformChildren_Bool(this->flipXTransform_dyn(),Value);
            		}
HXLINE( 752)		return (this->flipX = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_flipY(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_756_set_flipY)
HXLINE( 757)		bool _hx_tmp;
HXDLIN( 757)		if (this->exists) {
HXLINE( 757)			_hx_tmp = (this->flipY != Value);
            		}
            		else {
HXLINE( 757)			_hx_tmp = false;
            		}
HXDLIN( 757)		if (_hx_tmp) {
HXLINE( 758)			this->transformChildren_Bool(this->flipYTransform_dyn(),Value);
            		}
HXLINE( 759)		return (this->flipY = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_moves(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_763_set_moves)
HXLINE( 764)		bool _hx_tmp;
HXDLIN( 764)		if (this->exists) {
HXLINE( 764)			_hx_tmp = (this->moves != Value);
            		}
            		else {
HXLINE( 764)			_hx_tmp = false;
            		}
HXDLIN( 764)		if (_hx_tmp) {
HXLINE( 765)			this->transformChildren_Bool(this->movesTransform_dyn(),Value);
            		}
HXLINE( 766)		return (this->moves = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_immovable(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_770_set_immovable)
HXLINE( 771)		bool _hx_tmp;
HXDLIN( 771)		if (this->exists) {
HXLINE( 771)			_hx_tmp = (this->immovable != Value);
            		}
            		else {
HXLINE( 771)			_hx_tmp = false;
            		}
HXDLIN( 771)		if (_hx_tmp) {
HXLINE( 772)			this->transformChildren_Bool(this->immovableTransform_dyn(),Value);
            		}
HXLINE( 773)		return (this->immovable = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_solid(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_777_set_solid)
HXLINE( 778)		bool _hx_tmp;
HXDLIN( 778)		if (this->exists) {
HXLINE( 778)			_hx_tmp = (((this->allowCollisions & 4369) > 0) != Value);
            		}
            		else {
HXLINE( 778)			_hx_tmp = false;
            		}
HXDLIN( 778)		if (_hx_tmp) {
HXLINE( 779)			this->transformChildren_Bool(this->solidTransform_dyn(),Value);
            		}
HXLINE( 780)		return this->super::set_solid(Value);
            	}


int FlxTypedSpriteGroup_obj::set_color(int _tmp_Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_784_set_color)
HXLINE( 785)		int Value = _tmp_Value;
HXDLIN( 785)		bool _hx_tmp;
HXDLIN( 785)		if (this->exists) {
HXLINE( 785)			_hx_tmp = (this->color != Value);
            		}
            		else {
HXLINE( 785)			_hx_tmp = false;
            		}
HXDLIN( 785)		if (_hx_tmp) {
HXLINE( 786)			this->transformChildren_Int(this->gColorTransform_dyn(),Value);
            		}
HXLINE( 787)		return (this->color = Value);
            	}


 ::Dynamic FlxTypedSpriteGroup_obj::set_blend( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_791_set_blend)
HXLINE( 792)		bool _hx_tmp;
HXDLIN( 792)		if (this->exists) {
HXLINE( 792)			_hx_tmp = ::hx::IsNotEq( this->blend,Value );
            		}
            		else {
HXLINE( 792)			_hx_tmp = false;
            		}
HXDLIN( 792)		if (_hx_tmp) {
HXLINE( 793)			this->transformChildren_openfl_display_BlendMode(this->blendTransform_dyn(),Value);
            		}
HXLINE( 794)		return (this->blend = Value);
            	}


 ::flixel::math::FlxRect FlxTypedSpriteGroup_obj::set_clipRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_798_set_clipRect)
HXLINE( 799)		if (this->exists) {
HXLINE( 800)			this->transformChildren_flixel_math_FlxRect(this->clipRectTransform_dyn(),rect);
            		}
HXLINE( 801)		return this->super::set_clipRect(rect);
            	}


bool FlxTypedSpriteGroup_obj::set_pixelPerfectRender(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_805_set_pixelPerfectRender)
HXLINE( 806)		bool _hx_tmp;
HXDLIN( 806)		if (this->exists) {
HXLINE( 806)			_hx_tmp = ::hx::IsNotEq( this->pixelPerfectRender,Value );
            		}
            		else {
HXLINE( 806)			_hx_tmp = false;
            		}
HXDLIN( 806)		if (_hx_tmp) {
HXLINE( 807)			this->transformChildren_Bool(this->pixelPerfectTransform_dyn(),Value);
            		}
HXLINE( 808)		return this->super::set_pixelPerfectRender(Value);
            	}


Float FlxTypedSpriteGroup_obj::set_width(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_816_set_width)
HXDLIN( 816)		return Value;
            	}


Float FlxTypedSpriteGroup_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_820_get_width)
HXLINE( 821)		if ((this->group->length == 0)) {
HXLINE( 822)			return ( (Float)(0) );
            		}
HXLINE( 824)		Float _hx_tmp = this->findMaxXHelper();
HXDLIN( 824)		return (_hx_tmp - this->findMinXHelper());
            	}


Float FlxTypedSpriteGroup_obj::findMinX(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_835_findMinX)
HXDLIN( 835)		if ((this->group->length == 0)) {
HXDLIN( 835)			return this->x;
            		}
            		else {
HXDLIN( 835)			return this->findMinXHelper();
            		}
HXDLIN( 835)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMinX,return )

Float FlxTypedSpriteGroup_obj::findMinXHelper(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_839_findMinXHelper)
HXLINE( 840)		Float value = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 841)		{
HXLINE( 841)			int _g = 0;
HXDLIN( 841)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 841)			while((_g < _g1->length)){
HXLINE( 841)				 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 841)				_g = (_g + 1);
HXLINE( 843)				if (::hx::IsNull( member )) {
HXLINE( 844)					continue;
            				}
HXLINE( 846)				Float minX;
HXLINE( 847)				if ((member->flixelType == 4)) {
HXLINE( 848)					minX = ( ( ::flixel::group::FlxTypedSpriteGroup)(member) )->findMinX();
            				}
            				else {
HXLINE( 850)					minX = member->x;
            				}
HXLINE( 852)				if ((minX < value)) {
HXLINE( 853)					value = minX;
            				}
            			}
            		}
HXLINE( 855)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMinXHelper,return )

Float FlxTypedSpriteGroup_obj::findMaxX(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_866_findMaxX)
HXDLIN( 866)		if ((this->group->length == 0)) {
HXDLIN( 866)			return this->x;
            		}
            		else {
HXDLIN( 866)			return this->findMaxXHelper();
            		}
HXDLIN( 866)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMaxX,return )

Float FlxTypedSpriteGroup_obj::findMaxXHelper(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_870_findMaxXHelper)
HXLINE( 871)		Float value = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 872)		{
HXLINE( 872)			int _g = 0;
HXDLIN( 872)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 872)			while((_g < _g1->length)){
HXLINE( 872)				 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 872)				_g = (_g + 1);
HXLINE( 874)				if (::hx::IsNull( member )) {
HXLINE( 875)					continue;
            				}
HXLINE( 877)				Float maxX;
HXLINE( 878)				if ((member->flixelType == 4)) {
HXLINE( 879)					maxX = ( ( ::flixel::group::FlxTypedSpriteGroup)(member) )->findMaxX();
            				}
            				else {
HXLINE( 881)					Float member1 = member->x;
HXDLIN( 881)					maxX = (member1 + member->get_width());
            				}
HXLINE( 883)				if ((maxX > value)) {
HXLINE( 884)					value = maxX;
            				}
            			}
            		}
HXLINE( 886)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMaxXHelper,return )

Float FlxTypedSpriteGroup_obj::set_height(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_894_set_height)
HXDLIN( 894)		return Value;
            	}


Float FlxTypedSpriteGroup_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_898_get_height)
HXLINE( 899)		if ((this->group->length == 0)) {
HXLINE( 900)			return ( (Float)(0) );
            		}
HXLINE( 902)		Float _hx_tmp = this->findMaxYHelper();
HXDLIN( 902)		return (_hx_tmp - this->findMinYHelper());
            	}


Float FlxTypedSpriteGroup_obj::findMinY(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_913_findMinY)
HXDLIN( 913)		if ((this->group->length == 0)) {
HXDLIN( 913)			return this->y;
            		}
            		else {
HXDLIN( 913)			return this->findMinYHelper();
            		}
HXDLIN( 913)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMinY,return )

Float FlxTypedSpriteGroup_obj::findMinYHelper(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_917_findMinYHelper)
HXLINE( 918)		Float value = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 919)		{
HXLINE( 919)			int _g = 0;
HXDLIN( 919)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 919)			while((_g < _g1->length)){
HXLINE( 919)				 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 919)				_g = (_g + 1);
HXLINE( 921)				if (::hx::IsNull( member )) {
HXLINE( 922)					continue;
            				}
HXLINE( 924)				Float minY;
HXLINE( 925)				if ((member->flixelType == 4)) {
HXLINE( 926)					minY = ( ( ::flixel::group::FlxTypedSpriteGroup)(member) )->findMinY();
            				}
            				else {
HXLINE( 928)					minY = member->y;
            				}
HXLINE( 930)				if ((minY < value)) {
HXLINE( 931)					value = minY;
            				}
            			}
            		}
HXLINE( 933)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMinYHelper,return )

Float FlxTypedSpriteGroup_obj::findMaxY(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_944_findMaxY)
HXDLIN( 944)		if ((this->group->length == 0)) {
HXDLIN( 944)			return this->y;
            		}
            		else {
HXDLIN( 944)			return this->findMaxYHelper();
            		}
HXDLIN( 944)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMaxY,return )

Float FlxTypedSpriteGroup_obj::findMaxYHelper(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_948_findMaxYHelper)
HXLINE( 949)		Float value = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 950)		{
HXLINE( 950)			int _g = 0;
HXDLIN( 950)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 950)			while((_g < _g1->length)){
HXLINE( 950)				 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 950)				_g = (_g + 1);
HXLINE( 952)				if (::hx::IsNull( member )) {
HXLINE( 953)					continue;
            				}
HXLINE( 955)				Float maxY;
HXLINE( 956)				if ((member->flixelType == 4)) {
HXLINE( 957)					maxY = ( ( ::flixel::group::FlxTypedSpriteGroup)(member) )->findMaxY();
            				}
            				else {
HXLINE( 959)					Float member1 = member->y;
HXDLIN( 959)					maxY = (member1 + member->get_height());
            				}
HXLINE( 961)				if ((maxY > value)) {
HXLINE( 962)					value = maxY;
            				}
            			}
            		}
HXLINE( 964)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMaxYHelper,return )

int FlxTypedSpriteGroup_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_971_get_length)
HXDLIN( 971)		return this->group->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_length,return )

int FlxTypedSpriteGroup_obj::get_maxSize(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_976_get_maxSize)
HXDLIN( 976)		return this->group->maxSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_maxSize,return )

int FlxTypedSpriteGroup_obj::set_maxSize(int Size){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_981_set_maxSize)
HXDLIN( 981)		return this->group->set_maxSize(Size);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,set_maxSize,return )

::cpp::VirtualArray FlxTypedSpriteGroup_obj::get_members(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_986_get_members)
HXDLIN( 986)		return this->group->members;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_members,return )

void FlxTypedSpriteGroup_obj::xTransform( ::flixel::FlxSprite Sprite,Float X){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_992_xTransform)
HXDLIN( 992)		Sprite->set_x((Sprite->x + X));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,xTransform,(void))

void FlxTypedSpriteGroup_obj::yTransform( ::flixel::FlxSprite Sprite,Float Y){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_995_yTransform)
HXDLIN( 995)		Sprite->set_y((Sprite->y + Y));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,yTransform,(void))

void FlxTypedSpriteGroup_obj::angleTransform( ::flixel::FlxSprite Sprite,Float Angle){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_998_angleTransform)
HXDLIN( 998)		Sprite->set_angle((Sprite->angle + Angle));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,angleTransform,(void))

void FlxTypedSpriteGroup_obj::alphaTransform( ::flixel::FlxSprite Sprite,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1002_alphaTransform)
HXDLIN(1002)		bool _hx_tmp;
HXDLIN(1002)		if ((Sprite->alpha == 0)) {
HXDLIN(1002)			_hx_tmp = (Alpha == 0);
            		}
            		else {
HXDLIN(1002)			_hx_tmp = true;
            		}
HXDLIN(1002)		if (_hx_tmp) {
HXLINE(1003)			Sprite->set_alpha((Sprite->alpha * Alpha));
            		}
            		else {
HXLINE(1005)			Sprite->set_alpha((( (Float)(1) ) / Alpha));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,alphaTransform,(void))

void FlxTypedSpriteGroup_obj::directAlphaTransform( ::flixel::FlxSprite Sprite,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1009_directAlphaTransform)
HXDLIN(1009)		Sprite->set_alpha(Alpha);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,directAlphaTransform,(void))

void FlxTypedSpriteGroup_obj::facingTransform( ::flixel::FlxSprite Sprite,int Facing){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1012_facingTransform)
HXDLIN(1012)		Sprite->set_facing(Facing);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,facingTransform,(void))

void FlxTypedSpriteGroup_obj::flipXTransform( ::flixel::FlxSprite Sprite,bool FlipX){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1015_flipXTransform)
HXDLIN(1015)		Sprite->set_flipX(FlipX);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,flipXTransform,(void))

void FlxTypedSpriteGroup_obj::flipYTransform( ::flixel::FlxSprite Sprite,bool FlipY){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1018_flipYTransform)
HXDLIN(1018)		Sprite->set_flipY(FlipY);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,flipYTransform,(void))

void FlxTypedSpriteGroup_obj::movesTransform( ::flixel::FlxSprite Sprite,bool Moves){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1021_movesTransform)
HXDLIN(1021)		Sprite->set_moves(Moves);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,movesTransform,(void))

void FlxTypedSpriteGroup_obj::pixelPerfectTransform( ::flixel::FlxSprite Sprite,bool PixelPerfect){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1024_pixelPerfectTransform)
HXDLIN(1024)		Sprite->set_pixelPerfectRender(PixelPerfect);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,pixelPerfectTransform,(void))

void FlxTypedSpriteGroup_obj::gColorTransform( ::flixel::FlxSprite Sprite,int Color){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1027_gColorTransform)
HXDLIN(1027)		Sprite->set_color(Color);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,gColorTransform,(void))

void FlxTypedSpriteGroup_obj::blendTransform( ::flixel::FlxSprite Sprite, ::Dynamic Blend){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1030_blendTransform)
HXDLIN(1030)		Sprite->set_blend(Blend);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,blendTransform,(void))

void FlxTypedSpriteGroup_obj::immovableTransform( ::flixel::FlxSprite Sprite,bool Immovable){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1033_immovableTransform)
HXDLIN(1033)		Sprite->set_immovable(Immovable);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,immovableTransform,(void))

void FlxTypedSpriteGroup_obj::visibleTransform( ::flixel::FlxSprite Sprite,bool Visible){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1036_visibleTransform)
HXDLIN(1036)		Sprite->set_visible(Visible);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,visibleTransform,(void))

void FlxTypedSpriteGroup_obj::activeTransform( ::flixel::FlxSprite Sprite,bool Active){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1039_activeTransform)
HXDLIN(1039)		Sprite->set_active(Active);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,activeTransform,(void))

void FlxTypedSpriteGroup_obj::solidTransform( ::flixel::FlxSprite Sprite,bool Solid){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1042_solidTransform)
HXDLIN(1042)		Sprite->set_solid(Solid);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,solidTransform,(void))

void FlxTypedSpriteGroup_obj::aliveTransform( ::flixel::FlxSprite Sprite,bool Alive){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1045_aliveTransform)
HXDLIN(1045)		Sprite->set_alive(Alive);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,aliveTransform,(void))

void FlxTypedSpriteGroup_obj::existsTransform( ::flixel::FlxSprite Sprite,bool Exists){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1048_existsTransform)
HXDLIN(1048)		Sprite->set_exists(Exists);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,existsTransform,(void))

void FlxTypedSpriteGroup_obj::cameraTransform( ::flixel::FlxSprite Sprite, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1051_cameraTransform)
HXDLIN(1051)		Sprite->set_camera(Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,cameraTransform,(void))

void FlxTypedSpriteGroup_obj::camerasTransform( ::flixel::FlxSprite Sprite,::Array< ::Dynamic> Cameras){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1054_camerasTransform)
HXDLIN(1054)		Sprite->set_cameras(Cameras);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,camerasTransform,(void))

void FlxTypedSpriteGroup_obj::offsetTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Offset){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1057_offsetTransform)
HXDLIN(1057)		 ::flixel::math::FlxBasePoint this1 = Sprite->offset;
HXDLIN(1057)		{
HXDLIN(1057)			Float y = Offset->y;
HXDLIN(1057)			this1->set_x(Offset->x);
HXDLIN(1057)			this1->set_y(y);
            		}
HXDLIN(1057)		if (Offset->_weak) {
HXDLIN(1057)			Offset->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,offsetTransform,(void))

void FlxTypedSpriteGroup_obj::originTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Origin){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1060_originTransform)
HXDLIN(1060)		 ::flixel::math::FlxBasePoint this1 = Sprite->origin;
HXDLIN(1060)		{
HXDLIN(1060)			Float y = Origin->y;
HXDLIN(1060)			this1->set_x(Origin->x);
HXDLIN(1060)			this1->set_y(y);
            		}
HXDLIN(1060)		if (Origin->_weak) {
HXDLIN(1060)			Origin->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,originTransform,(void))

void FlxTypedSpriteGroup_obj::scaleTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Scale){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1063_scaleTransform)
HXDLIN(1063)		 ::flixel::math::FlxBasePoint this1 = Sprite->scale;
HXDLIN(1063)		{
HXDLIN(1063)			Float y = Scale->y;
HXDLIN(1063)			this1->set_x(Scale->x);
HXDLIN(1063)			this1->set_y(y);
            		}
HXDLIN(1063)		if (Scale->_weak) {
HXDLIN(1063)			Scale->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,scaleTransform,(void))

void FlxTypedSpriteGroup_obj::scrollFactorTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint ScrollFactor){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1066_scrollFactorTransform)
HXDLIN(1066)		 ::flixel::math::FlxBasePoint this1 = Sprite->scrollFactor;
HXDLIN(1066)		{
HXDLIN(1066)			Float y = ScrollFactor->y;
HXDLIN(1066)			this1->set_x(ScrollFactor->x);
HXDLIN(1066)			this1->set_y(y);
            		}
HXDLIN(1066)		if (ScrollFactor->_weak) {
HXDLIN(1066)			ScrollFactor->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,scrollFactorTransform,(void))

void FlxTypedSpriteGroup_obj::clipRectTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxRect ClipRect){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1070_clipRectTransform)
HXDLIN(1070)		if (::hx::IsNull( ClipRect )) {
HXLINE(1071)			Sprite->set_clipRect(null());
            		}
            		else {
HXLINE(1073)			Float X = ((ClipRect->x - Sprite->x) + this->x);
HXDLIN(1073)			Float Y = ((ClipRect->y - Sprite->y) + this->y);
HXDLIN(1073)			Float Width = ClipRect->width;
HXDLIN(1073)			Float Height = ClipRect->height;
HXDLIN(1073)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1073)			_this->x = X;
HXDLIN(1073)			_this->y = Y;
HXDLIN(1073)			_this->width = Width;
HXDLIN(1073)			_this->height = Height;
HXDLIN(1073)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1073)			rect->_inPool = false;
HXDLIN(1073)			Sprite->set_clipRect(rect);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,clipRectTransform,(void))

void FlxTypedSpriteGroup_obj::offsetCallback( ::flixel::math::FlxBasePoint Offset){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1078_offsetCallback)
HXDLIN(1078)		this->transformChildren_flixel_math_FlxPoint(this->offsetTransform_dyn(),Offset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,offsetCallback,(void))

void FlxTypedSpriteGroup_obj::originCallback( ::flixel::math::FlxBasePoint Origin){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1081_originCallback)
HXDLIN(1081)		this->transformChildren_flixel_math_FlxPoint(this->originTransform_dyn(),Origin);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,originCallback,(void))

void FlxTypedSpriteGroup_obj::scaleCallback( ::flixel::math::FlxBasePoint Scale){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1084_scaleCallback)
HXDLIN(1084)		this->transformChildren_flixel_math_FlxPoint(this->scaleTransform_dyn(),Scale);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,scaleCallback,(void))

void FlxTypedSpriteGroup_obj::scrollFactorCallback( ::flixel::math::FlxBasePoint ScrollFactor){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1087_scrollFactorCallback)
HXDLIN(1087)		this->transformChildren_flixel_math_FlxPoint(this->scrollFactorTransform_dyn(),ScrollFactor);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,scrollFactorCallback,(void))

 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1099_loadGraphicFromSprite)
HXDLIN(1099)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This function is not supported in FlxSpriteGroup",d4,53,54,91)));
HXDLIN(1099)		return null();
            	}


 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  __o_Animated,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Animated = __o_Animated.Default(false);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1111_loadGraphic)
HXDLIN(1111)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadRotatedGraphic( ::Dynamic Graphic,::hx::Null< int >  __o_Rotations,::hx::Null< int >  __o_Frame,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer,::String Key){
            		int Rotations = __o_Rotations.Default(16);
            		int Frame = __o_Frame.Default(-1);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1122_loadRotatedGraphic)
HXDLIN(1122)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This function is not supported in FlxSpriteGroup",d4,53,54,91)));
HXDLIN(1122)		return null();
            	}


 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::makeGraphic(int Width,int Height,::hx::Null< int >  __o__tmp_Color,::hx::Null< bool >  __o_Unique,::String Key){
            		int _tmp_Color = __o__tmp_Color.Default(-1);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1134_makeGraphic)
HXDLIN(1134)		int Color = _tmp_Color;
HXDLIN(1134)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This function is not supported in FlxSpriteGroup",d4,53,54,91)));
HXDLIN(1134)		return null();
            	}


 ::openfl::display::BitmapData FlxTypedSpriteGroup_obj::set_pixels( ::openfl::display::BitmapData Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1141_set_pixels)
HXDLIN(1141)		return Value;
            	}


 ::flixel::graphics::frames::FlxFrame FlxTypedSpriteGroup_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1146_set_frame)
HXDLIN(1146)		return Value;
            	}


 ::openfl::display::BitmapData FlxTypedSpriteGroup_obj::get_pixels(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1151_get_pixels)
HXDLIN(1151)		return null();
            	}


void FlxTypedSpriteGroup_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1160_calcFrame)
            	}


void FlxTypedSpriteGroup_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1167_resetHelpers)
            	}


void FlxTypedSpriteGroup_obj::stamp( ::flixel::FlxSprite Brush,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y){
            		int X = __o_X.Default(0);
            		int Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1172_stamp)
            	}


 ::flixel::graphics::frames::FlxFramesCollection FlxTypedSpriteGroup_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1176_set_frames)
HXDLIN(1176)		return Frames;
            	}


void FlxTypedSpriteGroup_obj::updateColorTransform(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1182_updateColorTransform)
            	}



::hx::ObjectPtr< FlxTypedSpriteGroup_obj > FlxTypedSpriteGroup_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize) {
	::hx::ObjectPtr< FlxTypedSpriteGroup_obj > __this = new FlxTypedSpriteGroup_obj();
	__this->__construct(__o_X,__o_Y,__o_MaxSize);
	return __this;
}

::hx::ObjectPtr< FlxTypedSpriteGroup_obj > FlxTypedSpriteGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize) {
	FlxTypedSpriteGroup_obj *__this = (FlxTypedSpriteGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedSpriteGroup_obj), true, "flixel.group.FlxTypedSpriteGroup"));
	*(void **)__this = FlxTypedSpriteGroup_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_MaxSize);
	return __this;
}

FlxTypedSpriteGroup_obj::FlxTypedSpriteGroup_obj()
{
}

void FlxTypedSpriteGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedSpriteGroup);
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(directAlpha,"directAlpha");
	HX_MARK_MEMBER_NAME(_skipTransformChildren,"_skipTransformChildren");
	HX_MARK_MEMBER_NAME(_sprites,"_sprites");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(directAlpha,"directAlpha");
	HX_VISIT_MEMBER_NAME(_skipTransformChildren,"_skipTransformChildren");
	HX_VISIT_MEMBER_NAME(_sprites,"_sprites");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedSpriteGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return ::hx::Val( group ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return ::hx::Val( stamp_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"preAdd") ) { return ::hx::Val( preAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_members() ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxSize() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprites") ) { return ::hx::Val( _sprites ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMinX") ) { return ::hx::Val( findMinX_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMaxX") ) { return ::hx::Val( findMaxX_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMinY") ) { return ::hx::Val( findMinY_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMaxY") ) { return ::hx::Val( findMaxY_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return ::hx::Val( countDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return ::hx::Val( getRandom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alive") ) { return ::hx::Val( set_alive_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return ::hx::Val( set_flipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return ::hx::Val( set_flipY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return ::hx::Val( set_moves_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return ::hx::Val( set_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return ::hx::Val( set_blend_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return ::hx::Val( set_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_exists") ) { return ::hx::Val( set_exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return ::hx::Val( set_active_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return ::hx::Val( set_facing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"xTransform") ) { return ::hx::Val( xTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"yTransform") ) { return ::hx::Val( yTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return ::hx::Val( set_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return ::hx::Val( get_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directAlpha") ) { return ::hx::Val( directAlpha ); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return ::hx::Val( countLiving_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return ::hx::Val( forEachDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return ::hx::Val( set_cameras_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxSize") ) { return ::hx::Val( get_maxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return ::hx::Val( set_maxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_members") ) { return ::hx::Val( get_members_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return ::hx::Val( loadGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return ::hx::Val( makeGraphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return ::hx::Val( replaceColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return ::hx::Val( getFirstNull_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return ::hx::Val( getFirstDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return ::hx::Val( forEachAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clipRect") ) { return ::hx::Val( set_clipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return ::hx::Val( resetHelpers_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return ::hx::Val( getFirstAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return ::hx::Val( forEachExists_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return ::hx::Val( forEachOfType_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleCallback") ) { return ::hx::Val( scaleCallback_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findMinXHelper") ) { return ::hx::Val( findMinXHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMaxXHelper") ) { return ::hx::Val( findMaxXHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMinYHelper") ) { return ::hx::Val( findMinYHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMaxYHelper") ) { return ::hx::Val( findMaxYHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"angleTransform") ) { return ::hx::Val( angleTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"alphaTransform") ) { return ::hx::Val( alphaTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"flipXTransform") ) { return ::hx::Val( flipXTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"flipYTransform") ) { return ::hx::Val( flipYTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"movesTransform") ) { return ::hx::Val( movesTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"blendTransform") ) { return ::hx::Val( blendTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"solidTransform") ) { return ::hx::Val( solidTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"aliveTransform") ) { return ::hx::Val( aliveTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleTransform") ) { return ::hx::Val( scaleTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"offsetCallback") ) { return ::hx::Val( offsetCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"originCallback") ) { return ::hx::Val( originCallback_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"facingTransform") ) { return ::hx::Val( facingTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"gColorTransform") ) { return ::hx::Val( gColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"activeTransform") ) { return ::hx::Val( activeTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"existsTransform") ) { return ::hx::Val( existsTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraTransform") ) { return ::hx::Val( cameraTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"offsetTransform") ) { return ::hx::Val( offsetTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"originTransform") ) { return ::hx::Val( originTransform_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return ::hx::Val( getFirstExisting_dyn() ); }
		if (HX_FIELD_EQ(inName,"visibleTransform") ) { return ::hx::Val( visibleTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"camerasTransform") ) { return ::hx::Val( camerasTransform_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return ::hx::Val( getFirstAvailable_dyn() ); }
		if (HX_FIELD_EQ(inName,"clipRectTransform") ) { return ::hx::Val( clipRectTransform_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return ::hx::Val( pixelsOverlapPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"immovableTransform") ) { return ::hx::Val( immovableTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return ::hx::Val( loadRotatedGraphic_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"directAlphaTransform") ) { return ::hx::Val( directAlphaTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollFactorCallback") ) { return ::hx::Val( scrollFactorCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transformChildren_Int") ) { return ::hx::Val( transformChildren_Int_dyn() ); }
		if (HX_FIELD_EQ(inName,"pixelPerfectTransform") ) { return ::hx::Val( pixelPerfectTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollFactorTransform") ) { return ::hx::Val( scrollFactorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return ::hx::Val( loadGraphicFromSprite_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"transformChildren_Bool") ) { return ::hx::Val( transformChildren_Bool_dyn() ); }
		if (HX_FIELD_EQ(inName,"_skipTransformChildren") ) { return ::hx::Val( _skipTransformChildren ); }
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return ::hx::Val( set_pixelPerfectRender_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformChildren_Float") ) { return ::hx::Val( transformChildren_Float_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"multiTransformChildren_Float") ) { return ::hx::Val( multiTransformChildren_Float_dyn() ); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"transformChildren_flixel_FlxCamera") ) { return ::hx::Val( transformChildren_flixel_FlxCamera_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"transformChildren_flixel_math_FlxRect") ) { return ::hx::Val( transformChildren_flixel_math_FlxRect_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"transformChildren_flixel_math_FlxPoint") ) { return ::hx::Val( transformChildren_flixel_math_FlxPoint_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"transformChildren_Array_flixel_FlxCamera") ) { return ::hx::Val( transformChildren_Array_flixel_FlxCamera_dyn() ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"transformChildren_openfl_display_BlendMode") ) { return ::hx::Val( transformChildren_openfl_display_BlendMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTypedSpriteGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxSize(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprites") ) { _sprites=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directAlpha") ) { directAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_skipTransformChildren") ) { _skipTransformChildren=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedSpriteGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("group",3f,b3,f4,99));
	outFields->push(HX_("members",d9,2c,70,1a));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("directAlpha",75,b7,cb,e0));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	outFields->push(HX_("_skipTransformChildren",8d,52,b5,7c));
	outFields->push(HX_("_sprites",4f,02,43,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedSpriteGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(FlxTypedSpriteGroup_obj,group),HX_("group",3f,b3,f4,99)},
	{::hx::fsBool,(int)offsetof(FlxTypedSpriteGroup_obj,directAlpha),HX_("directAlpha",75,b7,cb,e0)},
	{::hx::fsBool,(int)offsetof(FlxTypedSpriteGroup_obj,_skipTransformChildren),HX_("_skipTransformChildren",8d,52,b5,7c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTypedSpriteGroup_obj,_sprites),HX_("_sprites",4f,02,43,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedSpriteGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedSpriteGroup_obj_sMemberFields[] = {
	HX_("transformChildren_flixel_math_FlxRect",2e,de,92,aa),
	HX_("transformChildren_openfl_display_BlendMode",3c,5c,13,49),
	HX_("transformChildren_Int",1b,1a,96,58),
	HX_("transformChildren_Array_flixel_FlxCamera",ae,0c,c0,d3),
	HX_("transformChildren_flixel_FlxCamera",e8,54,28,43),
	HX_("multiTransformChildren_Float",4f,02,e4,0f),
	HX_("transformChildren_flixel_math_FlxPoint",06,0c,c3,75),
	HX_("transformChildren_Bool",7e,fd,20,26),
	HX_("transformChildren_Float",c8,75,5b,82),
	HX_("group",3f,b3,f4,99),
	HX_("directAlpha",75,b7,cb,e0),
	HX_("_skipTransformChildren",8d,52,b5,7c),
	HX_("_sprites",4f,02,43,99),
	HX_("initVars",dc,5a,00,53),
	HX_("destroy",fa,2c,86,24),
	HX_("clone",5d,13,63,48),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("pixelsOverlapPoint",16,82,44,e0),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("replaceColor",8f,5c,eb,3d),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("preAdd",be,c1,9a,ae),
	HX_("recycle",13,10,8c,37),
	HX_("remove",44,9c,88,04),
	HX_("replace",34,48,28,ab),
	HX_("sort",5e,27,58,4c),
	HX_("getFirstAvailable",af,ea,b3,05),
	HX_("getFirstNull",61,b7,33,0f),
	HX_("getFirstExisting",65,a4,6c,ee),
	HX_("getFirstAlive",b3,09,e2,bb),
	HX_("getFirstDead",7e,67,8b,08),
	HX_("countLiving",58,d9,8a,30),
	HX_("countDead",13,d3,86,54),
	HX_("getRandom",39,ab,e5,33),
	HX_("iterator",ee,49,9a,93),
	HX_("forEach",aa,29,be,c4),
	HX_("forEachAlive",c3,61,b7,99),
	HX_("forEachDead",6e,c1,e4,78),
	HX_("forEachExists",26,57,f8,68),
	HX_("forEachOfType",bb,90,76,fd),
	HX_("clear",8d,71,5b,48),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	HX_("reset",cf,49,c8,e6),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("set_camera",e2,54,91,ab),
	HX_("set_cameras",51,f1,98,73),
	HX_("set_exists",19,2c,e5,b3),
	HX_("set_visible",95,df,8b,33),
	HX_("set_active",03,50,4b,0a),
	HX_("set_alive",30,ac,8b,48),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_facing",57,4d,0a,d8),
	HX_("set_flipX",6e,8d,8c,29),
	HX_("set_flipY",6f,8d,8c,29),
	HX_("set_moves",a5,14,60,33),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("set_solid",8e,fc,bf,a7),
	HX_("set_color",c6,b9,56,71),
	HX_("set_blend",b4,30,ef,db),
	HX_("set_clipRect",91,67,7d,22),
	HX_("set_pixelPerfectRender",9a,4f,8f,bc),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_width",5d,12,0c,0e),
	HX_("findMinX",5f,5b,f0,9a),
	HX_("findMinXHelper",2d,9e,80,37),
	HX_("findMaxX",0d,52,ea,9a),
	HX_("findMaxXHelper",5b,cb,ed,db),
	HX_("set_height",24,16,51,f6),
	HX_("get_height",b0,77,d3,f2),
	HX_("findMinY",60,5b,f0,9a),
	HX_("findMinYHelper",ee,14,16,61),
	HX_("findMaxY",0e,52,ea,9a),
	HX_("findMaxYHelper",1c,42,83,05),
	HX_("get_length",af,04,8f,8f),
	HX_("get_maxSize",9c,59,7e,52),
	HX_("set_maxSize",a8,60,eb,5c),
	HX_("get_members",f0,8c,6a,a0),
	HX_("xTransform",d4,3d,4e,0a),
	HX_("yTransform",b3,b5,98,ca),
	HX_("angleTransform",19,37,04,53),
	HX_("alphaTransform",2e,8a,9a,12),
	HX_("directAlphaTransform",37,3f,f4,32),
	HX_("facingTransform",f2,1a,d1,b5),
	HX_("flipXTransform",e1,4e,16,58),
	HX_("flipYTransform",c0,c6,60,18),
	HX_("movesTransform",ca,a8,19,91),
	HX_("pixelPerfectTransform",45,cd,91,ea),
	HX_("gColorTransform",50,b2,d2,48),
	HX_("blendTransform",db,12,24,48),
	HX_("immovableTransform",02,b5,21,2d),
	HX_("visibleTransform",9a,f6,1b,49),
	HX_("activeTransform",c6,62,68,7a),
	HX_("solidTransform",c1,fb,cb,4e),
	HX_("aliveTransform",df,47,b2,53),
	HX_("existsTransform",f0,53,19,db),
	HX_("cameraTransform",07,4a,20,2b),
	HX_("camerasTransform",5e,cd,14,48),
	HX_("offsetTransform",59,6b,be,5e),
	HX_("originTransform",a6,86,e1,bc),
	HX_("scaleTransform",82,1d,72,79),
	HX_("scrollFactorTransform",10,a9,e8,16),
	HX_("clipRectTransform",b8,da,fa,1a),
	HX_("offsetCallback",78,38,86,15),
	HX_("originCallback",cb,c5,de,24),
	HX_("scaleCallback",6f,be,27,48),
	HX_("scrollFactorCallback",a1,5e,9d,f1),
	HX_("loadGraphicFromSprite",d1,7c,73,38),
	HX_("loadGraphic",22,19,a5,44),
	HX_("loadRotatedGraphic",c5,14,74,62),
	HX_("makeGraphic",5a,82,11,b8),
	HX_("set_pixels",6a,fd,ae,80),
	HX_("set_frame",90,c0,7d,2d),
	HX_("get_pixels",f6,5e,31,7d),
	HX_("calcFrame",58,93,8c,f9),
	HX_("resetHelpers",36,89,3d,32),
	HX_("stamp",03,70,0b,84),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("updateColorTransform",72,0f,d2,2f),
	::String(null()) };

::hx::Class FlxTypedSpriteGroup_obj::__mClass;

void FlxTypedSpriteGroup_obj::__register()
{
	FlxTypedSpriteGroup_obj _hx_dummy;
	FlxTypedSpriteGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedSpriteGroup",e1,d1,86,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedSpriteGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedSpriteGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedSpriteGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedSpriteGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group
