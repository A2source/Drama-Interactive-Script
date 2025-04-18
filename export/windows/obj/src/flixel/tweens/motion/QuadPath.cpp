#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_12_new,"flixel.tweens.motion.QuadPath","new",0x9e663362,"flixel.tweens.motion.QuadPath.new","flixel/tweens/motion/QuadPath.hx",12,0x562bb60d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_41_destroy,"flixel.tweens.motion.QuadPath","destroy",0x05d338fc,"flixel.tweens.motion.QuadPath.destroy","flixel/tweens/motion/QuadPath.hx",41,0x562bb60d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_60_setMotion,"flixel.tweens.motion.QuadPath","setMotion",0xc2ae8bfa,"flixel.tweens.motion.QuadPath.setMotion","flixel/tweens/motion/QuadPath.hx",60,0x562bb60d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_82_addPoint,"flixel.tweens.motion.QuadPath","addPoint",0x820a502d,"flixel.tweens.motion.QuadPath.addPoint","flixel/tweens/motion/QuadPath.hx",82,0x562bb60d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_92_getPoint,"flixel.tweens.motion.QuadPath","getPoint",0x68843998,"flixel.tweens.motion.QuadPath.getPoint","flixel/tweens/motion/QuadPath.hx",92,0x562bb60d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_101_start,"flixel.tweens.motion.QuadPath","start",0x95be1be4,"flixel.tweens.motion.QuadPath.start","flixel/tweens/motion/QuadPath.hx",101,0x562bb60d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_108_update,"flixel.tweens.motion.QuadPath","update",0xf1a57047,"flixel.tweens.motion.QuadPath.update","flixel/tweens/motion/QuadPath.hx",108,0x562bb60d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_165_updatePath,"flixel.tweens.motion.QuadPath","updatePath",0x1fbbb18c,"flixel.tweens.motion.QuadPath.updatePath","flixel/tweens/motion/QuadPath.hx",165,0x562bb60d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e8b5180f8deff5_201_getCurveLength,"flixel.tweens.motion.QuadPath","getCurveLength",0x2a112e3d,"flixel.tweens.motion.QuadPath.getCurveLength","flixel/tweens/motion/QuadPath.hx",201,0x562bb60d)
namespace flixel{
namespace tweens{
namespace motion{

void QuadPath_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_12_new)
HXLINE(  22)		this->_updateCurve = true;
HXLINE(  19)		this->_numSegs = 0;
HXLINE(  18)		this->_index = 0;
HXLINE(  17)		this->_speed = ((Float)0);
HXLINE(  16)		this->_distance = ((Float)0);
HXLINE(  33)		super::__construct(Options,manager);
HXLINE(  35)		this->_points = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		this->_curveT = ::Array_obj< Float >::__new(0);
HXLINE(  37)		this->_curveD = ::Array_obj< Float >::__new(0);
            	}

Dynamic QuadPath_obj::__CreateEmpty() { return new QuadPath_obj; }

void *QuadPath_obj::_hx_vtable = 0;

Dynamic QuadPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QuadPath_obj > _hx_result = new QuadPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool QuadPath_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21dceb90) {
		if (inClassId<=(int)0x104846c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
		} else {
			return inClassId==(int)0x21dceb90;
		}
	} else {
		return inClassId==(int)0x5395a9e6;
	}
}

void QuadPath_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_41_destroy)
HXLINE(  42)		this->super::destroy();
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			::Array< ::Dynamic> _g1 = this->_points;
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				 ::flixel::math::FlxBasePoint point = _g1->__get(_g).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN(  44)				_g = (_g + 1);
HXLINE(  46)				point = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(point)) );
            			}
            		}
HXLINE(  48)		this->_a = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_a)) );
HXLINE(  49)		this->_b = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_b)) );
HXLINE(  50)		this->_c = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_c)) );
            	}


 ::flixel::tweens::motion::QuadPath QuadPath_obj::setMotion(Float DurationOrSpeed,::hx::Null< bool >  __o_UseDuration){
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_60_setMotion)
HXLINE(  61)		this->updatePath();
HXLINE(  63)		if (UseDuration) {
HXLINE(  65)			this->duration = DurationOrSpeed;
HXLINE(  66)			this->_speed = (this->_distance / DurationOrSpeed);
            		}
            		else {
HXLINE(  70)			this->duration = (this->_distance / DurationOrSpeed);
HXLINE(  71)			this->_speed = DurationOrSpeed;
            		}
HXLINE(  74)		this->start();
HXLINE(  75)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(QuadPath_obj,setMotion,return )

 ::flixel::tweens::motion::QuadPath QuadPath_obj::addPoint(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_82_addPoint)
HXLINE(  83)		this->_updateCurve = true;
HXLINE(  84)		::Array< ::Dynamic> _hx_tmp = this->_points;
HXDLIN(  84)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN(  84)		point->_inPool = false;
HXDLIN(  84)		_hx_tmp->push(point);
HXLINE(  85)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(QuadPath_obj,addPoint,return )

 ::flixel::math::FlxBasePoint QuadPath_obj::getPoint(::hx::Null< int >  __o_index){
            		int index = __o_index.Default(0);
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_92_getPoint)
HXLINE(  93)		if ((this->_points->length == 0)) {
HXLINE(  95)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("No points have been added to the path yet.",c7,a0,28,83)));
            		}
HXLINE(  97)		return this->_points->__get(::hx::Mod(index,this->_points->length)).StaticCast<  ::flixel::math::FlxBasePoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuadPath_obj,getPoint,return )

 ::flixel::tweens::FlxTween QuadPath_obj::start(){
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_101_start)
HXLINE( 102)		int _hx_tmp;
HXDLIN( 102)		if (this->backward) {
HXLINE( 102)			_hx_tmp = (this->_numSegs - 1);
            		}
            		else {
HXLINE( 102)			_hx_tmp = 0;
            		}
HXDLIN( 102)		this->_index = _hx_tmp;
HXLINE( 103)		this->super::start();
HXLINE( 104)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void QuadPath_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_108_update)
HXLINE( 109)		this->super::update(elapsed);
HXLINE( 110)		Float td;
HXLINE( 111)		Float tt;
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if (!(this->backward)) {
HXLINE( 113)			_hx_tmp = ::hx::IsNotNull( this->_points );
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 115)			if ((this->_index < (this->_numSegs - 1))) {
HXLINE( 117)				while((this->scale > this->_curveT->__get((this->_index + 1)))){
HXLINE( 119)					this->_index++;
HXLINE( 120)					if ((this->_index == (this->_numSegs - 1))) {
HXLINE( 122)						goto _hx_goto_7;
            					}
            				}
            				_hx_goto_7:;
            			}
HXLINE( 126)			td = this->_curveT->__get(this->_index);
HXLINE( 127)			tt = (this->_curveT->__get((this->_index + 1)) - td);
HXLINE( 128)			td = ((this->scale - td) / tt);
HXLINE( 129)			this->_a = this->_points->__get((this->_index * 2)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 130)			this->_b = this->_points->__get(((this->_index * 2) + 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 131)			this->_c = this->_points->__get(((this->_index * 2) + 2)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 133)			this->x = ((((this->_a->x * (( (Float)(1) ) - td)) * (( (Float)(1) ) - td)) + (((this->_b->x * ( (Float)(2) )) * (( (Float)(1) ) - td)) * td)) + ((this->_c->x * td) * td));
HXLINE( 134)			this->y = ((((this->_a->y * (( (Float)(1) ) - td)) * (( (Float)(1) ) - td)) + (((this->_b->y * ( (Float)(2) )) * (( (Float)(1) ) - td)) * td)) + ((this->_c->y * td) * td));
            		}
            		else {
HXLINE( 136)			if (::hx::IsNotNull( this->_points )) {
HXLINE( 138)				if ((this->_index > 0)) {
HXLINE( 140)					while((this->scale < this->_curveT->__get(this->_index))){
HXLINE( 142)						this->_index--;
HXLINE( 143)						if ((this->_index == 0)) {
HXLINE( 145)							goto _hx_goto_8;
            						}
            					}
            					_hx_goto_8:;
            				}
HXLINE( 150)				td = this->_curveT->__get((this->_index + 1));
HXLINE( 151)				tt = (this->_curveT->__get(this->_index) - td);
HXLINE( 152)				td = ((this->scale - td) / tt);
HXLINE( 153)				this->_a = this->_points->__get(((this->_index * 2) + 2)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 154)				this->_b = this->_points->__get(((this->_index * 2) + 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 155)				this->_c = this->_points->__get((this->_index * 2)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 157)				this->x = ((((this->_a->x * (( (Float)(1) ) - td)) * (( (Float)(1) ) - td)) + (((this->_b->x * ( (Float)(2) )) * (( (Float)(1) ) - td)) * td)) + ((this->_c->x * td) * td));
HXLINE( 158)				this->y = ((((this->_a->y * (( (Float)(1) ) - td)) * (( (Float)(1) ) - td)) + (((this->_b->y * ( (Float)(2) )) * (( (Float)(1) ) - td)) * td)) + ((this->_c->y * td) * td));
            			}
            		}
HXLINE( 160)		this->super::postUpdate();
            	}


void QuadPath_obj::updatePath(){
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_165_updatePath)
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		if ((::hx::Mod((this->_points->length - 1),2) == 0)) {
HXLINE( 166)			_hx_tmp = (this->_points->length < 3);
            		}
            		else {
HXLINE( 166)			_hx_tmp = true;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 168)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("A QuadPath must have at least 3 points to operate and number of points must be a odd.",67,e3,16,ba)));
            		}
HXLINE( 170)		if (!(this->_updateCurve)) {
HXLINE( 172)			return;
            		}
HXLINE( 174)		this->_updateCurve = false;
HXLINE( 177)		int i = 0;
HXLINE( 178)		int j = 0;
HXLINE( 179)		this->_distance = ( (Float)(0) );
HXLINE( 180)		this->_numSegs = ::Std_obj::_hx_int((( (Float)((this->_points->length - 1)) ) / ( (Float)(2) )));
HXLINE( 181)		while((i < this->_numSegs)){
HXLINE( 183)			j = (i * 2);
HXLINE( 184)			this->_curveD[i] = this->getCurveLength(this->_points->__get(j).StaticCast<  ::flixel::math::FlxBasePoint >(),this->_points->__get((j + 1)).StaticCast<  ::flixel::math::FlxBasePoint >(),this->_points->__get((j + 2)).StaticCast<  ::flixel::math::FlxBasePoint >());
HXLINE( 185)			 ::flixel::tweens::motion::QuadPath _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 185)			i = (i + 1);
HXDLIN( 185)			_hx_tmp->_distance = (_hx_tmp->_distance + this->_curveD->__get((i - 1)));
            		}
HXLINE( 189)		i = 0;
HXLINE( 190)		Float d = ( (Float)(0) );
HXLINE( 191)		while((i < this->_numSegs)){
HXLINE( 193)			d = (d + this->_curveD->__get(i));
HXLINE( 194)			i = (i + 1);
HXDLIN( 194)			this->_curveT[(i - 1)] = (d / this->_distance);
            		}
HXLINE( 196)		this->_curveT[(this->_numSegs - 1)] = ( (Float)(1) );
HXLINE( 197)		this->_curveT->unshift(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(QuadPath_obj,updatePath,(void))

Float QuadPath_obj::getCurveLength( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint control, ::flixel::math::FlxBasePoint finish){
            	HX_STACKFRAME(&_hx_pos_c7e8b5180f8deff5_201_getCurveLength)
HXLINE( 202)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 202)		point->_inPool = false;
HXDLIN( 202)		 ::flixel::math::FlxBasePoint p1 = point;
HXLINE( 203)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 203)		point1->_inPool = false;
HXDLIN( 203)		 ::flixel::math::FlxBasePoint p2 = point1;
HXLINE( 205)		p1->set_x(((start->x - (( (Float)(2) ) * control->x)) + finish->x));
HXLINE( 206)		p1->set_y(((start->y - (( (Float)(2) ) * control->y)) + finish->y));
HXLINE( 207)		p2->set_x(((( (Float)(2) ) * control->x) - (( (Float)(2) ) * start->x)));
HXLINE( 208)		p2->set_y(((( (Float)(2) ) * control->y) - (( (Float)(2) ) * start->y)));
HXLINE( 209)		Float a = (( (Float)(4) ) * ((p1->x * p1->x) + (p1->y * p1->y)));
HXDLIN( 209)		Float b = (( (Float)(4) ) * ((p1->x * p2->x) + (p1->y * p2->y)));
HXDLIN( 209)		Float c = ((p2->x * p2->x) + (p2->y * p2->y));
HXDLIN( 209)		Float abc = (( (Float)(2) ) * ::Math_obj::sqrt(((a + b) + c)));
HXDLIN( 209)		Float a2 = ::Math_obj::sqrt(a);
HXDLIN( 209)		Float a32 = ((( (Float)(2) ) * a) * a2);
HXDLIN( 209)		Float c2 = (( (Float)(2) ) * ::Math_obj::sqrt(c));
HXDLIN( 209)		Float ba = (b / a2);
HXLINE( 218)		p1->put();
HXLINE( 219)		p2->put();
HXLINE( 221)		return ((((a32 * abc) + ((a2 * b) * (abc - c2))) + ((((( (Float)(4) ) * c) * a) - (b * b)) * ::Math_obj::log(((((( (Float)(2) ) * a2) + ba) + abc) / (ba + c2))))) / (( (Float)(4) ) * a32));
            	}


HX_DEFINE_DYNAMIC_FUNC3(QuadPath_obj,getCurveLength,return )


::hx::ObjectPtr< QuadPath_obj > QuadPath_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< QuadPath_obj > __this = new QuadPath_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< QuadPath_obj > QuadPath_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	QuadPath_obj *__this = (QuadPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QuadPath_obj), true, "flixel.tweens.motion.QuadPath"));
	*(void **)__this = QuadPath_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

QuadPath_obj::QuadPath_obj()
{
}

void QuadPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadPath);
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_numSegs,"_numSegs");
	HX_MARK_MEMBER_NAME(_updateCurve,"_updateCurve");
	HX_MARK_MEMBER_NAME(_curveT,"_curveT");
	HX_MARK_MEMBER_NAME(_curveD,"_curveD");
	HX_MARK_MEMBER_NAME(_a,"_a");
	HX_MARK_MEMBER_NAME(_b,"_b");
	HX_MARK_MEMBER_NAME(_c,"_c");
	 ::flixel::tweens::motion::Motion_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_numSegs,"_numSegs");
	HX_VISIT_MEMBER_NAME(_updateCurve,"_updateCurve");
	HX_VISIT_MEMBER_NAME(_curveT,"_curveT");
	HX_VISIT_MEMBER_NAME(_curveD,"_curveD");
	HX_VISIT_MEMBER_NAME(_a,"_a");
	HX_VISIT_MEMBER_NAME(_b,"_b");
	HX_VISIT_MEMBER_NAME(_c,"_c");
	 ::flixel::tweens::motion::Motion_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val QuadPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { return ::hx::Val( _a ); }
		if (HX_FIELD_EQ(inName,"_b") ) { return ::hx::Val( _b ); }
		if (HX_FIELD_EQ(inName,"_c") ) { return ::hx::Val( _c ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return ::hx::Val( _speed ); }
		if (HX_FIELD_EQ(inName,"_index") ) { return ::hx::Val( _index ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return ::hx::Val( _points ); }
		if (HX_FIELD_EQ(inName,"_curveT") ) { return ::hx::Val( _curveT ); }
		if (HX_FIELD_EQ(inName,"_curveD") ) { return ::hx::Val( _curveD ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_numSegs") ) { return ::hx::Val( _numSegs ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return ::hx::Val( getPoint_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return ::hx::Val( _distance ); }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return ::hx::Val( setMotion_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updatePath") ) { return ::hx::Val( updatePath_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCurve") ) { return ::hx::Val( _updateCurve ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurveLength") ) { return ::hx::Val( getCurveLength_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val QuadPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { _a=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_b") ) { _b=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_c") ) { _c=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curveT") ) { _curveT=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curveD") ) { _curveD=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_numSegs") ) { _numSegs=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCurve") ) { _updateCurve=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_points",c2,23,a5,65));
	outFields->push(HX_("_distance",94,8a,8f,b3));
	outFields->push(HX_("_speed",c8,de,50,7d));
	outFields->push(HX_("_index",53,e2,fb,b9));
	outFields->push(HX_("_numSegs",25,86,89,d9));
	outFields->push(HX_("_updateCurve",e7,63,fa,99));
	outFields->push(HX_("_curveT",64,de,61,ad));
	outFields->push(HX_("_curveD",54,de,61,ad));
	outFields->push(HX_("_a",22,53,00,00));
	outFields->push(HX_("_b",23,53,00,00));
	outFields->push(HX_("_c",24,53,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo QuadPath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(QuadPath_obj,_points),HX_("_points",c2,23,a5,65)},
	{::hx::fsFloat,(int)offsetof(QuadPath_obj,_distance),HX_("_distance",94,8a,8f,b3)},
	{::hx::fsFloat,(int)offsetof(QuadPath_obj,_speed),HX_("_speed",c8,de,50,7d)},
	{::hx::fsInt,(int)offsetof(QuadPath_obj,_index),HX_("_index",53,e2,fb,b9)},
	{::hx::fsInt,(int)offsetof(QuadPath_obj,_numSegs),HX_("_numSegs",25,86,89,d9)},
	{::hx::fsBool,(int)offsetof(QuadPath_obj,_updateCurve),HX_("_updateCurve",e7,63,fa,99)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(QuadPath_obj,_curveT),HX_("_curveT",64,de,61,ad)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(QuadPath_obj,_curveD),HX_("_curveD",54,de,61,ad)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(QuadPath_obj,_a),HX_("_a",22,53,00,00)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(QuadPath_obj,_b),HX_("_b",23,53,00,00)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(QuadPath_obj,_c),HX_("_c",24,53,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *QuadPath_obj_sStaticStorageInfo = 0;
#endif

static ::String QuadPath_obj_sMemberFields[] = {
	HX_("_points",c2,23,a5,65),
	HX_("_distance",94,8a,8f,b3),
	HX_("_speed",c8,de,50,7d),
	HX_("_index",53,e2,fb,b9),
	HX_("_numSegs",25,86,89,d9),
	HX_("_updateCurve",e7,63,fa,99),
	HX_("_curveT",64,de,61,ad),
	HX_("_curveD",54,de,61,ad),
	HX_("_a",22,53,00,00),
	HX_("_b",23,53,00,00),
	HX_("_c",24,53,00,00),
	HX_("destroy",fa,2c,86,24),
	HX_("setMotion",78,fb,04,2b),
	HX_("addPoint",6f,da,ec,3f),
	HX_("getPoint",da,c3,66,26),
	HX_("start",62,74,0b,84),
	HX_("update",09,86,05,87),
	HX_("updatePath",4e,d0,06,03),
	HX_("getCurveLength",ff,d5,ff,c7),
	::String(null()) };

::hx::Class QuadPath_obj::__mClass;

void QuadPath_obj::__register()
{
	QuadPath_obj _hx_dummy;
	QuadPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.motion.QuadPath",70,9a,74,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QuadPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QuadPath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuadPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuadPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
