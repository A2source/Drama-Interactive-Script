#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayKeyValueIterator
#include <haxe/iterators/ArrayKeyValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_22_new,"flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxGroup.hx",22,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_107_destroy,"flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxGroup.hx",107,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_134_update,"flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxGroup.hx",134,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_153_draw,"flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxGroup.hx",153,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_180_add,"flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxGroup.hx",180,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_235_insert,"flixel.group.FlxTypedGroup","insert",0x64e069c1,"flixel.group.FlxTypedGroup.insert","flixel/group/FlxGroup.hx",235,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_297_recycle,"flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxGroup.hx",297,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_349_remove,"flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxGroup.hx",349,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_381_replace,"flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxGroup.hx",381,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_409_sort,"flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxGroup.hx",409,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_419_getFirst,"flixel.group.FlxTypedGroup","getFirst",0x4b746042,"flixel.group.FlxTypedGroup.getFirst","flixel/group/FlxGroup.hx",419,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_423_getFirstHelper,"flixel.group.FlxTypedGroup","getFirstHelper",0x5867ef50,"flixel.group.FlxTypedGroup.getFirstHelper","flixel/group/FlxGroup.hx",423,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_442_getLast,"flixel.group.FlxTypedGroup","getLast",0x75ee4a84,"flixel.group.FlxTypedGroup.getLast","flixel/group/FlxGroup.hx",442,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_463_getFirstIndex,"flixel.group.FlxTypedGroup","getFirstIndex",0xa77f7b70,"flixel.group.FlxTypedGroup.getFirstIndex","flixel/group/FlxGroup.hx",463,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_482_getLastIndex,"flixel.group.FlxTypedGroup","getLastIndex",0xcc6321ee,"flixel.group.FlxTypedGroup.getLastIndex","flixel/group/FlxGroup.hx",482,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_503_any,"flixel.group.FlxTypedGroup","any",0x9768ef64,"flixel.group.FlxTypedGroup.any","flixel/group/FlxGroup.hx",503,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_518_every,"flixel.group.FlxTypedGroup","every",0x49e3ce13,"flixel.group.FlxTypedGroup.every","flixel/group/FlxGroup.hx",518,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_537_getFirstAvailable,"flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxGroup.hx",537,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_561_getFirstNull,"flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxGroup.hx",561,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_572_getFirstExisting,"flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxGroup.hx",572,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_583_getFirstAlive,"flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxGroup.hx",583,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_594_getFirstDead,"flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxGroup.hx",594,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_603_countLiving,"flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxGroup.hx",603,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_626_countDead,"flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxGroup.hx",626,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_652_getRandom,"flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxGroup.hx",652,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_666_clear,"flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxGroup.hx",666,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_687_killMembers,"flixel.group.FlxTypedGroup","killMembers",0xa0bff153,"flixel.group.FlxTypedGroup.killMembers","flixel/group/FlxGroup.hx",687,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_699_kill,"flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxGroup.hx",699,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_711_reviveMembers,"flixel.group.FlxTypedGroup","reviveMembers",0x4857b97c,"flixel.group.FlxTypedGroup.reviveMembers","flixel/group/FlxGroup.hx",711,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_722_revive,"flixel.group.FlxTypedGroup","revive",0xd17a20dd,"flixel.group.FlxTypedGroup.revive","flixel/group/FlxGroup.hx",722,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_733_iterator,"flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxGroup.hx",733,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_741_keyValueIterator,"flixel.group.FlxTypedGroup","keyValueIterator",0x8dc66de8,"flixel.group.FlxTypedGroup.keyValueIterator","flixel/group/FlxGroup.hx",741,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_752_forEach,"flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxGroup.hx",752,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_776_forEachAlive,"flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxGroup.hx",776,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_800_forEachDead,"flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxGroup.hx",800,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_824_forEachExists,"flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxGroup.hx",824,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_849_forEachOfType,"flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxGroup.hx",849,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_868_set_maxSize,"flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxGroup.hx",868,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_897_get_memberAdded,"flixel.group.FlxTypedGroup","get_memberAdded",0xd5201c15,"flixel.group.FlxTypedGroup.get_memberAdded","flixel/group/FlxGroup.hx",897,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_906_get_memberRemoved,"flixel.group.FlxTypedGroup","get_memberRemoved",0xd0fca635,"flixel.group.FlxTypedGroup.get_memberRemoved","flixel/group/FlxGroup.hx",906,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_26_resolveGroup,"flixel.group.FlxTypedGroup","resolveGroup",0x84c4b53b,"flixel.group.FlxTypedGroup.resolveGroup","flixel/group/FlxGroup.hx",26,0x1e89d58e)
namespace flixel{
namespace group{

void FlxTypedGroup_obj::__construct(::hx::Null< int >  __o_MaxSize){
            		int MaxSize = __o_MaxSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_22_new)
HXLINE(  82)		this->_marker = 0;
HXLINE(  55)		this->length = 0;
HXLINE(  89)		super::__construct();
HXLINE(  91)		this->members = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  92)		this->set_maxSize(::Std_obj::_hx_int(::Math_obj::abs(( (Float)(MaxSize) ))));
HXLINE(  93)		this->flixelType = 2;
            	}

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return new FlxTypedGroup_obj; }

void *FlxTypedGroup_obj::_hx_vtable = 0;

Dynamic FlxTypedGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedGroup_obj > _hx_result = new FlxTypedGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTypedGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxTypedGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_107_destroy)
HXLINE( 108)		this->super::destroy();
HXLINE( 110)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberAdded);
HXLINE( 111)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberRemoved);
HXLINE( 113)		if (::hx::IsNotNull( this->members )) {
HXLINE( 115)			int i = 0;
HXLINE( 116)			 ::flixel::FlxBasic basic = null();
HXLINE( 118)			while((i < this->length)){
HXLINE( 120)				i = (i + 1);
HXDLIN( 120)				basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 122)				if (::hx::IsNotNull( basic )) {
HXLINE( 123)					basic->destroy();
            				}
            			}
HXLINE( 126)			this->members = null();
            		}
            	}


void FlxTypedGroup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_134_update)
HXLINE( 135)		int i = 0;
HXLINE( 136)		 ::flixel::FlxBasic basic = null();
HXLINE( 138)		while((i < this->length)){
HXLINE( 140)			i = (i + 1);
HXDLIN( 140)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 142)			bool _hx_tmp;
HXDLIN( 142)			bool _hx_tmp1;
HXDLIN( 142)			if (::hx::IsNotNull( basic )) {
HXLINE( 142)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 142)				_hx_tmp1 = false;
            			}
HXDLIN( 142)			if (_hx_tmp1) {
HXLINE( 142)				_hx_tmp = basic->active;
            			}
            			else {
HXLINE( 142)				_hx_tmp = false;
            			}
HXDLIN( 142)			if (_hx_tmp) {
HXLINE( 144)				basic->update(elapsed);
            			}
            		}
            	}


void FlxTypedGroup_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_153_draw)
HXLINE( 154)		::Array< ::Dynamic> oldDefaultCameras = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE( 155)		if (::hx::IsNotNull( this->get_cameras() )) {
HXLINE( 157)			::flixel::FlxCamera_obj::_defaultCameras = this->get_cameras();
            		}
HXLINE( 160)		{
HXLINE( 160)			int _g = 0;
HXDLIN( 160)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 160)			while((_g < _g1->get_length())){
HXLINE( 160)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 160)				_g = (_g + 1);
HXLINE( 162)				bool _hx_tmp;
HXDLIN( 162)				bool _hx_tmp1;
HXDLIN( 162)				if (::hx::IsNotNull( basic )) {
HXLINE( 162)					_hx_tmp1 = ( ( ::flixel::FlxBasic)(basic) )->exists;
            				}
            				else {
HXLINE( 162)					_hx_tmp1 = false;
            				}
HXDLIN( 162)				if (_hx_tmp1) {
HXLINE( 162)					_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->visible;
            				}
            				else {
HXLINE( 162)					_hx_tmp = false;
            				}
HXDLIN( 162)				if (_hx_tmp) {
HXLINE( 163)					( ( ::flixel::FlxBasic)(basic) )->draw();
            				}
            			}
            		}
HXLINE( 166)		::flixel::FlxCamera_obj::_defaultCameras = oldDefaultCameras;
            	}


 ::Dynamic FlxTypedGroup_obj::add( ::Dynamic basic){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_180_add)
HXLINE( 181)		if (::hx::IsNull( basic )) {
HXLINE( 183)			::flixel::FlxG_obj::log->advanced(HX_("Cannot add a `null` object to a FlxGroup.",f2,f4,c0,70),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 184)			return null();
            		}
HXLINE( 188)		if ((this->members->indexOf(basic,null()) >= 0)) {
HXLINE( 189)			return basic;
            		}
HXLINE( 192)		int index = this->getFirstNull();
HXLINE( 193)		if ((index != -1)) {
HXLINE( 195)			this->members->set(index,basic);
HXLINE( 197)			if ((index >= this->length)) {
HXLINE( 199)				this->length = (index + 1);
            			}
HXLINE( 202)			if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 203)				this->_memberAdded->dispatch(basic);
            			}
HXLINE( 205)			return basic;
            		}
HXLINE( 209)		bool _hx_tmp;
HXDLIN( 209)		if ((this->maxSize > 0)) {
HXLINE( 209)			_hx_tmp = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 209)			_hx_tmp = false;
            		}
HXDLIN( 209)		if (_hx_tmp) {
HXLINE( 210)			return basic;
            		}
HXLINE( 213)		this->members->push(basic);
HXLINE( 214)		this->length++;
HXLINE( 216)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 217)			this->_memberAdded->dispatch(basic);
            		}
HXLINE( 219)		return basic;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

 ::Dynamic FlxTypedGroup_obj::insert(int position, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_235_insert)
HXLINE( 236)		if (::hx::IsNull( object )) {
HXLINE( 238)			::flixel::FlxG_obj::log->advanced(HX_("Cannot insert a `null` object into a FlxGroup.",a5,36,f4,8f),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 239)			return null();
            		}
HXLINE( 243)		if ((this->members->indexOf(object,null()) >= 0)) {
HXLINE( 244)			return object;
            		}
HXLINE( 247)		bool _hx_tmp;
HXDLIN( 247)		if ((position < this->length)) {
HXLINE( 247)			_hx_tmp = ::hx::IsNull( this->members->__get(position) );
            		}
            		else {
HXLINE( 247)			_hx_tmp = false;
            		}
HXDLIN( 247)		if (_hx_tmp) {
HXLINE( 249)			this->members->set(position,object);
HXLINE( 251)			if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 252)				this->_memberAdded->dispatch(object);
            			}
HXLINE( 254)			return object;
            		}
HXLINE( 258)		bool _hx_tmp1;
HXDLIN( 258)		if ((this->maxSize > 0)) {
HXLINE( 258)			_hx_tmp1 = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 258)			_hx_tmp1 = false;
            		}
HXDLIN( 258)		if (_hx_tmp1) {
HXLINE( 259)			return object;
            		}
HXLINE( 262)		this->members->insert(position,object);
HXLINE( 263)		this->length++;
HXLINE( 265)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 266)			this->_memberAdded->dispatch(object);
            		}
HXLINE( 268)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,insert,return )

 ::Dynamic FlxTypedGroup_obj::recycle(::hx::Class objectClass, ::Dynamic objectFactory,::hx::Null< bool >  __o_force,::hx::Null< bool >  __o_revive){
            		bool force = __o_force.Default(false);
            		bool revive = __o_revive.Default(true);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_297_recycle)
HXDLIN( 297)		 ::flixel::group::FlxTypedGroup _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 310)		if ((this->maxSize > 0)) {
HXLINE( 313)			if ((this->length < this->maxSize)) {
HXLINE( 314)				 ::Dynamic _hx_tmp;
HXDLIN( 314)				if (::hx::IsNotNull( objectFactory )) {
HXLINE( 314)					_hx_tmp = _gthis->add(objectFactory());
            				}
            				else {
HXLINE( 314)					if (::hx::IsNotNull( objectClass )) {
HXLINE( 314)						_hx_tmp = _gthis->add(::Type_obj::createInstance(objectClass,::cpp::VirtualArray_obj::__new(0)));
            					}
            					else {
HXLINE( 314)						_hx_tmp = null();
            					}
            				}
HXDLIN( 314)				return _hx_tmp;
            			}
HXLINE( 317)			 ::Dynamic basic = this->members->__get(this->_marker++);
HXLINE( 319)			if ((this->_marker >= this->maxSize)) {
HXLINE( 320)				this->_marker = 0;
            			}
HXLINE( 322)			if (revive) {
HXLINE( 323)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
HXLINE( 325)			return basic;
            		}
HXLINE( 329)		 ::Dynamic basic = this->getFirstAvailable(objectClass,force);
HXLINE( 331)		if (::hx::IsNotNull( basic )) {
HXLINE( 333)			if (revive) {
HXLINE( 334)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
HXLINE( 335)			return basic;
            		}
HXLINE( 338)		 ::Dynamic _hx_tmp;
HXDLIN( 338)		if (::hx::IsNotNull( objectFactory )) {
HXLINE( 338)			_hx_tmp = _gthis->add(objectFactory());
            		}
            		else {
HXLINE( 338)			if (::hx::IsNotNull( objectClass )) {
HXLINE( 338)				_hx_tmp = _gthis->add(::Type_obj::createInstance(objectClass,::cpp::VirtualArray_obj::__new(0)));
            			}
            			else {
HXLINE( 338)				_hx_tmp = null();
            			}
            		}
HXDLIN( 338)		return _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

 ::Dynamic FlxTypedGroup_obj::remove( ::Dynamic basic,::hx::Null< bool >  __o_splice){
            		bool splice = __o_splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_349_remove)
HXLINE( 350)		if (::hx::IsNull( this->members )) {
HXLINE( 351)			return null();
            		}
HXLINE( 353)		int index = this->members->indexOf(basic,null());
HXLINE( 355)		if ((index < 0)) {
HXLINE( 356)			return null();
            		}
HXLINE( 358)		if (splice) {
HXLINE( 360)			this->members->splice(index,1);
HXLINE( 361)			this->length--;
            		}
            		else {
HXLINE( 364)			this->members->set(index,null());
            		}
HXLINE( 366)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 367)			this->_memberRemoved->dispatch(basic);
            		}
HXLINE( 369)		return basic;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

 ::Dynamic FlxTypedGroup_obj::replace( ::Dynamic oldObject, ::Dynamic newObject){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_381_replace)
HXLINE( 382)		int index = this->members->indexOf(oldObject,null());
HXLINE( 384)		if ((index < 0)) {
HXLINE( 385)			return null();
            		}
HXLINE( 387)		this->members->set(index,newObject);
HXLINE( 389)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 390)			this->_memberRemoved->dispatch(oldObject);
            		}
HXLINE( 391)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 392)			this->_memberAdded->dispatch(newObject);
            		}
HXLINE( 394)		return newObject;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

void FlxTypedGroup_obj::sort( ::Dynamic func,::hx::Null< int >  __o_order){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,a1, ::Dynamic,_g) HXARGC(2)
            		int _hx_run( ::Dynamic a2, ::Dynamic a3){
            			HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_409_sort)
HXDLIN( 409)			return ( (int)(_g(a1,a2,a3)) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int order = __o_order.Default(-1);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_409_sort)
HXDLIN( 409)		 ::Dynamic _g = func;
HXDLIN( 409)		int a1 = order;
HXDLIN( 409)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN( 409)		this->members->sort(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

 ::Dynamic FlxTypedGroup_obj::getFirst( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_419_getFirst)
HXDLIN( 419)		 ::Dynamic result = null();
HXDLIN( 419)		{
HXDLIN( 419)			int _g = 0;
HXDLIN( 419)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 419)			while((_g < _g1->get_length())){
HXDLIN( 419)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 419)				_g = (_g + 1);
HXDLIN( 419)				bool _hx_tmp;
HXDLIN( 419)				if (::hx::IsNotNull( basic )) {
HXDLIN( 419)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXDLIN( 419)					_hx_tmp = false;
            				}
HXDLIN( 419)				if (_hx_tmp) {
HXDLIN( 419)					result = basic;
HXDLIN( 419)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXDLIN( 419)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirst,return )

 ::Dynamic FlxTypedGroup_obj::getFirstHelper( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_423_getFirstHelper)
HXLINE( 424)		 ::Dynamic result = null();
HXLINE( 425)		{
HXLINE( 425)			int _g = 0;
HXDLIN( 425)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 425)			while((_g < _g1->get_length())){
HXLINE( 425)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 425)				_g = (_g + 1);
HXLINE( 427)				bool _hx_tmp;
HXDLIN( 427)				if (::hx::IsNotNull( basic )) {
HXLINE( 427)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 427)					_hx_tmp = false;
            				}
HXDLIN( 427)				if (_hx_tmp) {
HXLINE( 429)					result = basic;
HXLINE( 430)					goto _hx_goto_16;
            				}
            			}
            			_hx_goto_16:;
            		}
HXLINE( 433)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirstHelper,return )

 ::Dynamic FlxTypedGroup_obj::getLast( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_442_getLast)
HXLINE( 443)		 ::Dynamic result = null();
HXLINE( 444)		int i = this->members->get_length();
HXLINE( 445)		while(true){
HXLINE( 445)			i = (i - 1);
HXDLIN( 445)			if (!(((i + 1) > 0))) {
HXLINE( 445)				goto _hx_goto_18;
            			}
HXLINE( 447)			 ::Dynamic basic = this->members->__get(i);
HXLINE( 448)			bool _hx_tmp;
HXDLIN( 448)			if (::hx::IsNotNull( basic )) {
HXLINE( 448)				_hx_tmp = ( (bool)(func(basic)) );
            			}
            			else {
HXLINE( 448)				_hx_tmp = false;
            			}
HXDLIN( 448)			if (_hx_tmp) {
HXLINE( 450)				result = basic;
HXLINE( 451)				goto _hx_goto_18;
            			}
            		}
            		_hx_goto_18:;
HXLINE( 454)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getLast,return )

int FlxTypedGroup_obj::getFirstIndex( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_463_getFirstIndex)
HXLINE( 464)		int result = -1;
HXLINE( 465)		{
HXLINE( 465)			int _g_current = 0;
HXDLIN( 465)			::cpp::VirtualArray _g_array = this->members;
HXDLIN( 465)			while((_g_current < _g_array->get_length())){
HXLINE( 465)				 ::Dynamic _g1_value = _g_array->__get(_g_current);
HXDLIN( 465)				_g_current = (_g_current + 1);
HXDLIN( 465)				int _g1_key = (_g_current - 1);
HXDLIN( 465)				int i = _g1_key;
HXDLIN( 465)				 ::Dynamic basic = _g1_value;
HXLINE( 467)				bool _hx_tmp;
HXDLIN( 467)				if (::hx::IsNotNull( basic )) {
HXLINE( 467)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 467)					_hx_tmp = false;
            				}
HXDLIN( 467)				if (_hx_tmp) {
HXLINE( 469)					result = i;
HXLINE( 470)					goto _hx_goto_20;
            				}
            			}
            			_hx_goto_20:;
            		}
HXLINE( 473)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirstIndex,return )

int FlxTypedGroup_obj::getLastIndex( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_482_getLastIndex)
HXLINE( 483)		int result = -1;
HXLINE( 484)		int i = this->members->get_length();
HXLINE( 485)		while(true){
HXLINE( 485)			i = (i - 1);
HXDLIN( 485)			if (!(((i + 1) > 0))) {
HXLINE( 485)				goto _hx_goto_22;
            			}
HXLINE( 487)			 ::Dynamic basic = this->members->__get(i);
HXLINE( 488)			bool _hx_tmp;
HXDLIN( 488)			if (::hx::IsNotNull( basic )) {
HXLINE( 488)				_hx_tmp = ( (bool)(func(basic)) );
            			}
            			else {
HXLINE( 488)				_hx_tmp = false;
            			}
HXDLIN( 488)			if (_hx_tmp) {
HXLINE( 490)				result = i;
HXLINE( 491)				goto _hx_goto_22;
            			}
            		}
            		_hx_goto_22:;
HXLINE( 494)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getLastIndex,return )

bool FlxTypedGroup_obj::any( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_503_any)
HXLINE( 504)		{
HXLINE( 504)			int _g = 0;
HXDLIN( 504)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 504)			while((_g < _g1->get_length())){
HXLINE( 504)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 504)				_g = (_g + 1);
HXLINE( 506)				bool _hx_tmp;
HXDLIN( 506)				if (::hx::IsNotNull( basic )) {
HXLINE( 506)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 506)					_hx_tmp = false;
            				}
HXDLIN( 506)				if (_hx_tmp) {
HXLINE( 507)					return true;
            				}
            			}
            		}
HXLINE( 509)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,any,return )

bool FlxTypedGroup_obj::every( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_518_every)
HXLINE( 519)		{
HXLINE( 519)			int _g = 0;
HXDLIN( 519)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 519)			while((_g < _g1->get_length())){
HXLINE( 519)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 519)				_g = (_g + 1);
HXLINE( 521)				bool _hx_tmp;
HXDLIN( 521)				if (::hx::IsNotNull( basic )) {
HXLINE( 521)					_hx_tmp = !(( (bool)(func(basic)) ));
            				}
            				else {
HXLINE( 521)					_hx_tmp = false;
            				}
HXDLIN( 521)				if (_hx_tmp) {
HXLINE( 522)					return false;
            				}
            			}
            		}
HXLINE( 524)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,every,return )

 ::Dynamic FlxTypedGroup_obj::getFirstAvailable(::hx::Class objectClass,::hx::Null< bool >  __o_force){
            		bool force = __o_force.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_537_getFirstAvailable)
HXLINE( 538)		{
HXLINE( 538)			int _g = 0;
HXDLIN( 538)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 538)			while((_g < _g1->get_length())){
HXLINE( 538)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 538)				_g = (_g + 1);
HXLINE( 540)				bool _hx_tmp;
HXDLIN( 540)				bool _hx_tmp1;
HXDLIN( 540)				if (::hx::IsNotNull( basic )) {
HXLINE( 540)					_hx_tmp1 = !(( ( ::flixel::FlxBasic)(basic) )->exists);
            				}
            				else {
HXLINE( 540)					_hx_tmp1 = false;
            				}
HXDLIN( 540)				if (_hx_tmp1) {
HXLINE( 540)					if (::hx::IsNotNull( objectClass )) {
HXLINE( 540)						_hx_tmp = ::Std_obj::isOfType(basic,objectClass);
            					}
            					else {
HXLINE( 540)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 540)					_hx_tmp = false;
            				}
HXDLIN( 540)				if (_hx_tmp) {
HXLINE( 542)					bool _hx_tmp;
HXDLIN( 542)					if (force) {
HXLINE( 542)						::String _hx_tmp1 = ::Type_obj::getClassName(::Type_obj::getClass(basic));
HXDLIN( 542)						_hx_tmp = (_hx_tmp1 != ::Type_obj::getClassName(objectClass));
            					}
            					else {
HXLINE( 542)						_hx_tmp = false;
            					}
HXDLIN( 542)					if (_hx_tmp) {
HXLINE( 544)						continue;
            					}
HXLINE( 546)					return basic;
            				}
            			}
            		}
HXLINE( 550)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_561_getFirstNull)
HXDLIN( 561)		return this->members->indexOf(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

 ::Dynamic FlxTypedGroup_obj::getFirstExisting(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_572_getFirstExisting)
HXDLIN( 572)		 ::Dynamic result = null();
HXDLIN( 572)		{
HXDLIN( 572)			int _g = 0;
HXDLIN( 572)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 572)			while((_g < _g1->get_length())){
HXDLIN( 572)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 572)				_g = (_g + 1);
HXDLIN( 572)				bool _hx_tmp;
HXDLIN( 572)				if (::hx::IsNotNull( basic )) {
HXDLIN( 572)					_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            				}
            				else {
HXDLIN( 572)					_hx_tmp = false;
            				}
HXDLIN( 572)				if (_hx_tmp) {
HXDLIN( 572)					result = basic;
HXDLIN( 572)					goto _hx_goto_31;
            				}
            			}
            			_hx_goto_31:;
            		}
HXDLIN( 572)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

 ::Dynamic FlxTypedGroup_obj::getFirstAlive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_583_getFirstAlive)
HXDLIN( 583)		 ::Dynamic result = null();
HXDLIN( 583)		{
HXDLIN( 583)			int _g = 0;
HXDLIN( 583)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 583)			while((_g < _g1->get_length())){
HXDLIN( 583)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 583)				_g = (_g + 1);
HXDLIN( 583)				bool _hx_tmp;
HXDLIN( 583)				if (::hx::IsNotNull( basic )) {
HXDLIN( 583)					if (( ( ::flixel::FlxBasic)(basic) )->exists) {
HXDLIN( 583)						_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            					}
            					else {
HXDLIN( 583)						_hx_tmp = false;
            					}
            				}
            				else {
HXDLIN( 583)					_hx_tmp = false;
            				}
HXDLIN( 583)				if (_hx_tmp) {
HXDLIN( 583)					result = basic;
HXDLIN( 583)					goto _hx_goto_33;
            				}
            			}
            			_hx_goto_33:;
            		}
HXDLIN( 583)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

 ::Dynamic FlxTypedGroup_obj::getFirstDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_594_getFirstDead)
HXDLIN( 594)		 ::Dynamic result = null();
HXDLIN( 594)		{
HXDLIN( 594)			int _g = 0;
HXDLIN( 594)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 594)			while((_g < _g1->get_length())){
HXDLIN( 594)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 594)				_g = (_g + 1);
HXDLIN( 594)				bool _hx_tmp;
HXDLIN( 594)				if (::hx::IsNotNull( basic )) {
HXDLIN( 594)					_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->alive);
            				}
            				else {
HXDLIN( 594)					_hx_tmp = false;
            				}
HXDLIN( 594)				if (_hx_tmp) {
HXDLIN( 594)					result = basic;
HXDLIN( 594)					goto _hx_goto_35;
            				}
            			}
            			_hx_goto_35:;
            		}
HXDLIN( 594)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_603_countLiving)
HXLINE( 604)		int count = -1;
HXLINE( 606)		{
HXLINE( 606)			int _g = 0;
HXDLIN( 606)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 606)			while((_g < _g1->get_length())){
HXLINE( 606)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 606)				_g = (_g + 1);
HXLINE( 608)				if (::hx::IsNotNull( basic )) {
HXLINE( 610)					if ((count < 0)) {
HXLINE( 611)						count = 0;
            					}
HXLINE( 612)					bool _hx_tmp;
HXDLIN( 612)					if (( ( ::flixel::FlxBasic)(basic) )->exists) {
HXLINE( 612)						_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            					}
            					else {
HXLINE( 612)						_hx_tmp = false;
            					}
HXDLIN( 612)					if (_hx_tmp) {
HXLINE( 613)						count = (count + 1);
            					}
            				}
            			}
            		}
HXLINE( 617)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_626_countDead)
HXLINE( 627)		int count = -1;
HXLINE( 629)		{
HXLINE( 629)			int _g = 0;
HXDLIN( 629)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 629)			while((_g < _g1->get_length())){
HXLINE( 629)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 629)				_g = (_g + 1);
HXLINE( 631)				if (::hx::IsNotNull( basic )) {
HXLINE( 633)					if ((count < 0)) {
HXLINE( 634)						count = 0;
            					}
HXLINE( 635)					if (!(( ( ::flixel::FlxBasic)(basic) )->alive)) {
HXLINE( 636)						count = (count + 1);
            					}
            				}
            			}
            		}
HXLINE( 640)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

 ::Dynamic FlxTypedGroup_obj::getRandom(::hx::Null< int >  __o_startIndex,::hx::Null< int >  __o_length){
            		int startIndex = __o_startIndex.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_652_getRandom)
HXLINE( 653)		if ((startIndex < 0)) {
HXLINE( 654)			startIndex = 0;
            		}
HXLINE( 655)		if ((length <= 0)) {
HXLINE( 656)			length = this->length;
            		}
HXLINE( 658)		return ::flixel::FlxG_obj::random->getObject_flixel_group_FlxTypedGroup_T(this->members,null(),startIndex,length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

void FlxTypedGroup_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_666_clear)
HXLINE( 667)		this->length = 0;
HXLINE( 669)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 671)			int _g = 0;
HXDLIN( 671)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 671)			while((_g < _g1->get_length())){
HXLINE( 671)				 ::Dynamic member = _g1->__get(_g);
HXDLIN( 671)				_g = (_g + 1);
HXLINE( 673)				if (::hx::IsNotNull( member )) {
HXLINE( 674)					this->_memberRemoved->dispatch(member);
            				}
            			}
            		}
HXLINE( 678)		::flixel::util::FlxArrayUtil_obj::clearArray(this->members,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

void FlxTypedGroup_obj::killMembers(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_687_killMembers)
HXDLIN( 687)		int _g = 0;
HXDLIN( 687)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 687)		while((_g < _g1->get_length())){
HXDLIN( 687)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 687)			_g = (_g + 1);
HXLINE( 689)			bool _hx_tmp;
HXDLIN( 689)			if (::hx::IsNotNull( basic )) {
HXLINE( 689)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 689)				_hx_tmp = false;
            			}
HXDLIN( 689)			if (_hx_tmp) {
HXLINE( 690)				( ( ::flixel::FlxBasic)(basic) )->kill();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,killMembers,(void))

void FlxTypedGroup_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_699_kill)
HXLINE( 700)		this->killMembers();
HXLINE( 702)		this->super::kill();
            	}


void FlxTypedGroup_obj::reviveMembers(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_711_reviveMembers)
HXDLIN( 711)		int _g = 0;
HXDLIN( 711)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 711)		while((_g < _g1->get_length())){
HXDLIN( 711)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 711)			_g = (_g + 1);
HXLINE( 713)			bool _hx_tmp;
HXDLIN( 713)			if (::hx::IsNotNull( basic )) {
HXLINE( 713)				_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->exists);
            			}
            			else {
HXLINE( 713)				_hx_tmp = false;
            			}
HXDLIN( 713)			if (_hx_tmp) {
HXLINE( 714)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,reviveMembers,(void))

void FlxTypedGroup_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_722_revive)
HXLINE( 723)		this->reviveMembers();
HXLINE( 725)		this->super::revive();
            	}


 ::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( ::Dynamic filter){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_733_iterator)
HXDLIN( 733)		return  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->members,filter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

 ::haxe::iterators::ArrayKeyValueIterator FlxTypedGroup_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_741_keyValueIterator)
HXDLIN( 741)		return  ::haxe::iterators::ArrayKeyValueIterator_obj::__alloc( HX_CTX ,this->members);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,keyValueIterator,return )

void FlxTypedGroup_obj::forEach( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_752_forEach)
HXDLIN( 752)		int _g = 0;
HXDLIN( 752)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 752)		while((_g < _g1->get_length())){
HXDLIN( 752)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 752)			_g = (_g + 1);
HXLINE( 754)			if (::hx::IsNotNull( basic )) {
HXLINE( 756)				if (recurse) {
HXLINE( 758)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 759)					if (::hx::IsNotNull( group )) {
HXLINE( 760)						group->forEach(func,recurse);
            					}
            				}
HXLINE( 763)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEach,(void))

void FlxTypedGroup_obj::forEachAlive( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_776_forEachAlive)
HXDLIN( 776)		int _g = 0;
HXDLIN( 776)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 776)		while((_g < _g1->get_length())){
HXDLIN( 776)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 776)			_g = (_g + 1);
HXLINE( 778)			bool _hx_tmp;
HXDLIN( 778)			bool _hx_tmp1;
HXDLIN( 778)			if (::hx::IsNotNull( basic )) {
HXLINE( 778)				_hx_tmp1 = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 778)				_hx_tmp1 = false;
            			}
HXDLIN( 778)			if (_hx_tmp1) {
HXLINE( 778)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            			}
            			else {
HXLINE( 778)				_hx_tmp = false;
            			}
HXDLIN( 778)			if (_hx_tmp) {
HXLINE( 780)				if (recurse) {
HXLINE( 782)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 783)					if (::hx::IsNotNull( group )) {
HXLINE( 784)						group->forEachAlive(func,recurse);
            					}
            				}
HXLINE( 787)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachAlive,(void))

void FlxTypedGroup_obj::forEachDead( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_800_forEachDead)
HXDLIN( 800)		int _g = 0;
HXDLIN( 800)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 800)		while((_g < _g1->get_length())){
HXDLIN( 800)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 800)			_g = (_g + 1);
HXLINE( 802)			bool _hx_tmp;
HXDLIN( 802)			if (::hx::IsNotNull( basic )) {
HXLINE( 802)				_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->alive);
            			}
            			else {
HXLINE( 802)				_hx_tmp = false;
            			}
HXDLIN( 802)			if (_hx_tmp) {
HXLINE( 804)				if (recurse) {
HXLINE( 806)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 807)					if (::hx::IsNotNull( group )) {
HXLINE( 808)						group->forEachDead(func,recurse);
            					}
            				}
HXLINE( 811)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachDead,(void))

void FlxTypedGroup_obj::forEachExists( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_824_forEachExists)
HXDLIN( 824)		int _g = 0;
HXDLIN( 824)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 824)		while((_g < _g1->get_length())){
HXDLIN( 824)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 824)			_g = (_g + 1);
HXLINE( 826)			bool _hx_tmp;
HXDLIN( 826)			if (::hx::IsNotNull( basic )) {
HXLINE( 826)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 826)				_hx_tmp = false;
            			}
HXDLIN( 826)			if (_hx_tmp) {
HXLINE( 828)				if (recurse) {
HXLINE( 830)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 831)					if (::hx::IsNotNull( group )) {
HXLINE( 832)						group->forEachExists(func,recurse);
            					}
            				}
HXLINE( 835)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachExists,(void))

void FlxTypedGroup_obj::forEachOfType(::hx::Class objectClass, ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_849_forEachOfType)
HXDLIN( 849)		int _g = 0;
HXDLIN( 849)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 849)		while((_g < _g1->get_length())){
HXDLIN( 849)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 849)			_g = (_g + 1);
HXLINE( 851)			if (::hx::IsNotNull( basic )) {
HXLINE( 853)				if (recurse) {
HXLINE( 855)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 856)					if (::hx::IsNotNull( group )) {
HXLINE( 857)						group->forEachOfType(objectClass,func,recurse);
            					}
            				}
HXLINE( 860)				if (::Std_obj::isOfType(basic,objectClass)) {
HXLINE( 861)					func(basic);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize(int size){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_868_set_maxSize)
HXLINE( 869)		this->maxSize = ::Std_obj::_hx_int(::Math_obj::abs(( (Float)(size) )));
HXLINE( 871)		if ((this->_marker >= this->maxSize)) {
HXLINE( 872)			this->_marker = 0;
            		}
HXLINE( 874)		bool _hx_tmp;
HXDLIN( 874)		bool _hx_tmp1;
HXDLIN( 874)		if ((this->maxSize != 0)) {
HXLINE( 874)			_hx_tmp1 = ::hx::IsNull( this->members );
            		}
            		else {
HXLINE( 874)			_hx_tmp1 = true;
            		}
HXDLIN( 874)		if (!(_hx_tmp1)) {
HXLINE( 874)			_hx_tmp = (this->maxSize >= this->length);
            		}
            		else {
HXLINE( 874)			_hx_tmp = true;
            		}
HXDLIN( 874)		if (_hx_tmp) {
HXLINE( 875)			return this->maxSize;
            		}
HXLINE( 878)		while((this->length > this->maxSize)){
HXLINE( 880)			 ::Dynamic basic = this->members->splice((this->maxSize - 1),1)->__get(0);
HXLINE( 882)			if (::hx::IsNotNull( basic )) {
HXLINE( 884)				if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 885)					this->_memberRemoved->dispatch(basic);
            				}
HXLINE( 887)				( ( ::flixel::FlxBasic)(basic) )->destroy();
            			}
HXLINE( 889)			this->length--;
            		}
HXLINE( 892)		return this->maxSize;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberAdded(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_897_get_memberAdded)
HXLINE( 898)		if (::hx::IsNull( this->_memberAdded )) {
HXLINE( 899)			this->_memberAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 901)		return this->_memberAdded;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberAdded,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberRemoved(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_906_get_memberRemoved)
HXLINE( 907)		if (::hx::IsNull( this->_memberRemoved )) {
HXLINE( 908)			this->_memberRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 910)		return this->_memberRemoved;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberRemoved,return )

 ::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveGroup( ::flixel::FlxBasic basic){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_26_resolveGroup)
HXLINE(  27)		if (::hx::IsNotNull( basic )) {
HXLINE(  29)			if ((basic->flixelType == 2)) {
HXLINE(  31)				return ( ( ::flixel::group::FlxTypedGroup)(basic) );
            			}
            			else {
HXLINE(  33)				if ((basic->flixelType == 4)) {
HXLINE(  35)					return ( ( ::flixel::group::FlxTypedGroup)(( ( ::flixel::group::FlxTypedSpriteGroup)(basic) )->__Field(HX_("group",3f,b3,f4,99),::hx::paccDynamic)) );
            				}
            			}
            		}
HXLINE(  38)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveGroup,return )


::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(::hx::Null< int >  __o_MaxSize) {
	::hx::ObjectPtr< FlxTypedGroup_obj > __this = new FlxTypedGroup_obj();
	__this->__construct(__o_MaxSize);
	return __this;
}

::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_MaxSize) {
	FlxTypedGroup_obj *__this = (FlxTypedGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedGroup_obj), true, "flixel.group.FlxTypedGroup"));
	*(void **)__this = FlxTypedGroup_obj::_hx_vtable;
	__this->__construct(__o_MaxSize);
	return __this;
}

FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_MARK_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_VISIT_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"any") ) { return ::hx::Val( any_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"every") ) { return ::hx::Val( every_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return ::hx::Val( members ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return ::hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return ::hx::Val( _marker ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLast") ) { return ::hx::Val( getLast_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return ::hx::Val( getFirst_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return ::hx::Val( countDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return ::hx::Val( getRandom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memberAdded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberAdded() ); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return ::hx::Val( countLiving_dyn() ); }
		if (HX_FIELD_EQ(inName,"killMembers") ) { return ::hx::Val( killMembers_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return ::hx::Val( forEachDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return ::hx::Val( set_maxSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { return ::hx::Val( _memberAdded ); }
		if (HX_FIELD_EQ(inName,"getLastIndex") ) { return ::hx::Val( getLastIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return ::hx::Val( getFirstNull_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return ::hx::Val( getFirstDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return ::hx::Val( forEachAlive_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"memberRemoved") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberRemoved() ); }
		if (HX_FIELD_EQ(inName,"getFirstIndex") ) { return ::hx::Val( getFirstIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return ::hx::Val( getFirstAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"reviveMembers") ) { return ::hx::Val( reviveMembers_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return ::hx::Val( forEachExists_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return ::hx::Val( forEachOfType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { return ::hx::Val( _memberRemoved ); }
		if (HX_FIELD_EQ(inName,"getFirstHelper") ) { return ::hx::Val( getFirstHelper_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_memberAdded") ) { return ::hx::Val( get_memberAdded_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return ::hx::Val( getFirstExisting_dyn() ); }
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return ::hx::Val( getFirstAvailable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_memberRemoved") ) { return ::hx::Val( get_memberRemoved_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTypedGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { outValue = resolveGroup_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxTypedGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxSize(inValue.Cast< int >()) );maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { _memberAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { _memberRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("members",d9,2c,70,1a));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("memberAdded",06,9c,46,1e));
	outFields->push(HX_("memberRemoved",66,c4,b7,90));
	outFields->push(HX_("_memberAdded",07,4a,50,84));
	outFields->push(HX_("_memberRemoved",a7,b4,09,cf));
	outFields->push(HX_("_marker",59,87,e7,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxTypedGroup_obj,members),HX_("members",d9,2c,70,1a)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_("maxSize",85,f9,83,cc)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberAdded),HX_("_memberAdded",07,4a,50,84)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberRemoved),HX_("_memberRemoved",a7,b4,09,cf)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_("_marker",59,87,e7,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedGroup_obj_sMemberFields[] = {
	HX_("members",d9,2c,70,1a),
	HX_("maxSize",85,f9,83,cc),
	HX_("length",e6,94,07,9f),
	HX_("_memberAdded",07,4a,50,84),
	HX_("_memberRemoved",a7,b4,09,cf),
	HX_("_marker",59,87,e7,28),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("recycle",13,10,8c,37),
	HX_("remove",44,9c,88,04),
	HX_("replace",34,48,28,ab),
	HX_("sort",5e,27,58,4c),
	HX_("getFirst",ba,87,74,60),
	HX_("getFirstHelper",c8,00,8f,70),
	HX_("getLast",0c,ba,2f,1a),
	HX_("getFirstIndex",f8,40,65,58),
	HX_("getLastIndex",66,65,18,1a),
	HX_("any",ec,fa,49,00),
	HX_("every",9b,cb,c4,75),
	HX_("getFirstAvailable",af,ea,b3,05),
	HX_("getFirstNull",61,b7,33,0f),
	HX_("getFirstExisting",65,a4,6c,ee),
	HX_("getFirstAlive",b3,09,e2,bb),
	HX_("getFirstDead",7e,67,8b,08),
	HX_("countLiving",58,d9,8a,30),
	HX_("countDead",13,d3,86,54),
	HX_("getRandom",39,ab,e5,33),
	HX_("clear",8d,71,5b,48),
	HX_("killMembers",db,c4,63,c2),
	HX_("kill",9e,df,09,47),
	HX_("reviveMembers",04,7f,3d,f9),
	HX_("revive",55,fa,76,0a),
	HX_("iterator",ee,49,9a,93),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("forEach",aa,29,be,c4),
	HX_("forEachAlive",c3,61,b7,99),
	HX_("forEachDead",6e,c1,e4,78),
	HX_("forEachExists",26,57,f8,68),
	HX_("forEachOfType",bb,90,76,fd),
	HX_("set_maxSize",a8,60,eb,5c),
	HX_("get_memberAdded",9d,53,28,df),
	HX_("get_memberRemoved",bd,cf,27,97),
	::String(null()) };

::hx::Class FlxTypedGroup_obj::__mClass;

static ::String FlxTypedGroup_obj_sStaticFields[] = {
	HX_("resolveGroup",b3,f8,79,d2),
	::String(null())
};

void FlxTypedGroup_obj::__register()
{
	FlxTypedGroup_obj _hx_dummy;
	FlxTypedGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedGroup",e6,b8,51,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypedGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group
