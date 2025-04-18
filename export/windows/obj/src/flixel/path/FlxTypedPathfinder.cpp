#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPathSimplifier
#include <flixel/path/FlxPathSimplifier.h>
#endif
#ifndef INCLUDED_flixel_path_FlxTypedPathfinder
#include <flixel/path/FlxTypedPathfinder.h>
#endif
#ifndef INCLUDED_flixel_path_FlxTypedPathfinderData
#include <flixel/path/FlxTypedPathfinderData.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_eed5c81c71278288_46_new,"flixel.path.FlxTypedPathfinder","new",0x47f7a82c,"flixel.path.FlxTypedPathfinder.new","flixel/path/FlxPathfinder.hx",46,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_61_findPath,"flixel.path.FlxTypedPathfinder","findPath",0x11c45732,"flixel.path.FlxTypedPathfinder.findPath","flixel/path/FlxPathfinder.hx",61,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_96_findPathIndices,"flixel.path.FlxTypedPathfinder","findPathIndices",0x70044215,"flixel.path.FlxTypedPathfinder.findPathIndices","flixel/path/FlxPathfinder.hx",96,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_109_findPathIndicesHelper,"flixel.path.FlxTypedPathfinder","findPathIndicesHelper",0x75c77163,"flixel.path.FlxTypedPathfinder.findPathIndicesHelper","flixel/path/FlxPathfinder.hx",109,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_122_getPathPointsFromIndices,"flixel.path.FlxTypedPathfinder","getPathPointsFromIndices",0x5a4fee53,"flixel.path.FlxTypedPathfinder.getPathPointsFromIndices","flixel/path/FlxPathfinder.hx",122,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_132_simplifyPath,"flixel.path.FlxTypedPathfinder","simplifyPath",0x582ff002,"flixel.path.FlxTypedPathfinder.simplifyPath","flixel/path/FlxPathfinder.hx",132,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_152_simplifyLine,"flixel.path.FlxTypedPathfinder","simplifyLine",0x55912251,"flixel.path.FlxTypedPathfinder.simplifyLine","flixel/path/FlxPathfinder.hx",152,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_176_simplifyRay,"flixel.path.FlxTypedPathfinder","simplifyRay",0x2523062d,"flixel.path.FlxTypedPathfinder.simplifyRay","flixel/path/FlxPathfinder.hx",176,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_205_simplifyRayBox,"flixel.path.FlxTypedPathfinder","simplifyRayBox",0x87f5c9de,"flixel.path.FlxTypedPathfinder.simplifyRayBox","flixel/path/FlxPathfinder.hx",205,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_246_simplifyRayStep,"flixel.path.FlxTypedPathfinder","simplifyRayStep",0x7a5b3419,"flixel.path.FlxTypedPathfinder.simplifyRayStep","flixel/path/FlxPathfinder.hx",246,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_279_computePathData,"flixel.path.FlxTypedPathfinder","computePathData",0xbe71cad2,"flixel.path.FlxTypedPathfinder.computePathData","flixel/path/FlxPathfinder.hx",279,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_290_compute,"flixel.path.FlxTypedPathfinder","compute",0x7511f543,"flixel.path.FlxTypedPathfinder.compute","flixel/path/FlxPathfinder.hx",290,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_356_getNeighbors,"flixel.path.FlxTypedPathfinder","getNeighbors",0x95d14a7f,"flixel.path.FlxTypedPathfinder.getNeighbors","flixel/path/FlxPathfinder.hx",356,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_370_getDistance,"flixel.path.FlxTypedPathfinder","getDistance",0x8c1fd9b7,"flixel.path.FlxTypedPathfinder.getDistance","flixel/path/FlxPathfinder.hx",370,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_383_isComplete,"flixel.path.FlxTypedPathfinder","isComplete",0x2f3f0c77,"flixel.path.FlxTypedPathfinder.isComplete","flixel/path/FlxPathfinder.hx",383,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_394_isTileSolved,"flixel.path.FlxTypedPathfinder","isTileSolved",0x54f89d11,"flixel.path.FlxTypedPathfinder.isTileSolved","flixel/path/FlxPathfinder.hx",394,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_eed5c81c71278288_405_hasValidInitialData,"flixel.path.FlxTypedPathfinder","hasValidInitialData",0xc21bd078,"flixel.path.FlxTypedPathfinder.hasValidInitialData","flixel/path/FlxPathfinder.hx",405,0x74454158)
namespace flixel{
namespace path{

void FlxTypedPathfinder_obj::__construct( ::Dynamic factory){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_46_new)
HXDLIN(  46)		this->createData = factory;
            	}

Dynamic FlxTypedPathfinder_obj::__CreateEmpty() { return new FlxTypedPathfinder_obj; }

void *FlxTypedPathfinder_obj::_hx_vtable = 0;

Dynamic FlxTypedPathfinder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedPathfinder_obj > _hx_result = new FlxTypedPathfinder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTypedPathfinder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f6c6248;
}

::Array< ::Dynamic> FlxTypedPathfinder_obj::findPath( ::Dynamic map, ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::path::FlxPathSimplifier __o_simplify){
            		 ::flixel::path::FlxPathSimplifier simplify = __o_simplify;
            		if (::hx::IsNull(__o_simplify)) simplify = ::flixel::path::FlxPathSimplifier_obj::LINE_dyn();
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_61_findPath)
HXLINE(  63)		int startIndex = ( ( ::flixel::tile::FlxBaseTilemap)(map) )->getTileIndexByCoords(start);
HXLINE(  64)		int endIndex = ( ( ::flixel::tile::FlxBaseTilemap)(map) )->getTileIndexByCoords(end);
HXLINE(  66)		 ::Dynamic data = this->createData(map,startIndex,endIndex);
HXLINE(  67)		::Array< int > indices = this->findPathIndicesHelper(data);
HXLINE(  68)		if (::hx::IsNull( indices )) {
HXLINE(  69)			return null();
            		}
HXLINE(  71)		::Array< ::Dynamic> path = this->getPathPointsFromIndices(data,indices);
HXLINE(  74)		{
HXLINE(  74)			 ::flixel::math::FlxBasePoint this1 = path->__get(0).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN(  74)			{
HXLINE(  74)				Float y = start->y;
HXDLIN(  74)				this1->set_x(start->x);
HXDLIN(  74)				this1->set_y(y);
            			}
HXDLIN(  74)			if (start->_weak) {
HXLINE(  74)				start->put();
            			}
            		}
HXLINE(  75)		{
HXLINE(  75)			 ::flixel::math::FlxBasePoint this2 = path->__get((path->length - 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN(  75)			{
HXLINE(  75)				Float y1 = end->y;
HXDLIN(  75)				this2->set_x(end->x);
HXDLIN(  75)				this2->set_y(y1);
            			}
HXDLIN(  75)			if (end->_weak) {
HXLINE(  75)				end->put();
            			}
            		}
HXLINE(  78)		path = this->simplifyPath(data,path,simplify);
HXLINE(  80)		( ( ::flixel::path::FlxTypedPathfinderData)(data) )->destroy();
HXLINE(  82)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedPathfinder_obj,findPath,return )

::Array< int > FlxTypedPathfinder_obj::findPathIndices( ::Dynamic map,int startIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_96_findPathIndices)
HXLINE(  97)		 ::Dynamic data = this->createData(map,startIndex,endIndex);
HXLINE(  98)		::Array< int > indices = this->findPathIndicesHelper(data);
HXLINE(  99)		( ( ::flixel::path::FlxTypedPathfinderData)(data) )->destroy();
HXLINE( 100)		return indices;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedPathfinder_obj,findPathIndices,return )

::Array< int > FlxTypedPathfinder_obj::findPathIndicesHelper( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_109_findPathIndicesHelper)
HXLINE( 111)		this->compute(data,null());
HXLINE( 112)		if (!(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->foundEnd)) {
HXLINE( 113)			return null();
            		}
HXLINE( 116)		return ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->getPathIndicesTo(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedPathfinder_obj,findPathIndicesHelper,return )

::Array< ::Dynamic> FlxTypedPathfinder_obj::getPathPointsFromIndices( ::Dynamic data,::Array< int > indices){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,bool,midpoint, ::Dynamic,_g) HXARGC(1)
            		 ::flixel::math::FlxBasePoint _hx_run(int index){
            			HX_STACKFRAME(&_hx_pos_eed5c81c71278288_122_getPathPointsFromIndices)
HXDLIN( 122)			return ( ( ::flixel::math::FlxBasePoint)(_g(index,midpoint)) );
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_122_getPathPointsFromIndices)
HXDLIN( 122)		 ::Dynamic _g = ( ( ::flixel::tile::FlxBaseTilemap)(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map) )->getTileCoordsByIndex_dyn();
HXDLIN( 122)		bool midpoint = true;
HXDLIN( 122)		 ::Dynamic f =  ::Dynamic(new _hx_Closure_0(midpoint,_g));
HXDLIN( 122)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(indices->length);
HXDLIN( 122)		{
HXDLIN( 122)			int _g1 = 0;
HXDLIN( 122)			int _g2 = indices->length;
HXDLIN( 122)			while((_g1 < _g2)){
HXDLIN( 122)				_g1 = (_g1 + 1);
HXDLIN( 122)				int i = (_g1 - 1);
HXDLIN( 122)				{
HXDLIN( 122)					 ::flixel::math::FlxBasePoint inValue = ( ( ::flixel::math::FlxBasePoint)(f(_hx_array_unsafe_get(indices,i))) );
HXDLIN( 122)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN( 122)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedPathfinder_obj,getPathPointsFromIndices,return )

::Array< ::Dynamic> FlxTypedPathfinder_obj::simplifyPath( ::Dynamic data,::Array< ::Dynamic> points, ::flixel::path::FlxPathSimplifier simplify){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_132_simplifyPath)
HXLINE( 133)		switch((int)(simplify->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 136)				this->simplifyLine(data,points);
            			}
            			break;
            			case (int)2: {
HXLINE( 137)				this->simplifyRay(data,points);
            			}
            			break;
            			case (int)3: {
HXLINE( 138)				Float resolution = simplify->_hx_getFloat(0);
HXDLIN( 138)				this->simplifyRayStep(data,points,resolution);
            			}
            			break;
            			case (int)4: {
HXLINE( 139)				Float width = simplify->_hx_getFloat(0);
HXDLIN( 139)				Float height = simplify->_hx_getFloat(1);
HXDLIN( 139)				this->simplifyRayBox(data,points,width,height);
            			}
            			break;
            			case (int)5: {
HXLINE( 140)				 ::Dynamic method = simplify->_hx_getObject(0);
HXDLIN( 140)				points = ( (::Array< ::Dynamic>)(method(( ( ::flixel::path::FlxTypedPathfinderData)(data) ),points)) );
            			}
            			break;
            		}
HXLINE( 142)		return points;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedPathfinder_obj,simplifyPath,return )

void FlxTypedPathfinder_obj::simplifyLine( ::Dynamic data,::Array< ::Dynamic> points){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_152_simplifyLine)
HXLINE( 154)		int i = (points->length - 1);
HXLINE( 155)		while(true){
HXLINE( 155)			i = (i - 1);
HXDLIN( 155)			if (!(((i + 1) > 1))) {
HXLINE( 155)				goto _hx_goto_8;
            			}
HXLINE( 157)			 ::flixel::math::FlxBasePoint node = points->__get(i).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 158)			 ::flixel::math::FlxBasePoint next = points->__get((i + 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 159)			 ::flixel::math::FlxBasePoint last = points->__get((i - 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 160)			Float deltaLast = ((node->x - last->x) / (node->y - last->y));
HXLINE( 161)			Float deltaNext = ((node->x - next->x) / (node->y - next->y));
HXLINE( 163)			bool _hx_tmp;
HXDLIN( 163)			bool _hx_tmp1;
HXDLIN( 163)			if ((last->x != next->x)) {
HXLINE( 163)				_hx_tmp1 = (last->y == next->y);
            			}
            			else {
HXLINE( 163)				_hx_tmp1 = true;
            			}
HXDLIN( 163)			if (!(_hx_tmp1)) {
HXLINE( 163)				_hx_tmp = (deltaLast == deltaNext);
            			}
            			else {
HXLINE( 163)				_hx_tmp = true;
            			}
HXDLIN( 163)			if (_hx_tmp) {
HXLINE( 164)				points->remove(node);
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedPathfinder_obj,simplifyLine,(void))

void FlxTypedPathfinder_obj::simplifyRay( ::Dynamic data,::Array< ::Dynamic> points){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_176_simplifyRay)
HXLINE( 178)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 178)		point->_inPool = false;
HXDLIN( 178)		 ::flixel::math::FlxBasePoint tempPoint = point;
HXLINE( 180)		int i = 1;
HXLINE( 181)		while((i < (points->length - 1))){
HXLINE( 184)			if (( ( ::flixel::tile::FlxBaseTilemap)(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map) )->ray(points->__get((i - 1)).StaticCast<  ::flixel::math::FlxBasePoint >(),points->__get((i + 1)).StaticCast<  ::flixel::math::FlxBasePoint >(),tempPoint)) {
HXLINE( 187)				points->remove(points->__get(i).StaticCast<  ::flixel::math::FlxBasePoint >());
            			}
            			else {
HXLINE( 190)				i = (i + 1);
            			}
            		}
HXLINE( 194)		tempPoint->put();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedPathfinder_obj,simplifyRay,(void))

void FlxTypedPathfinder_obj::simplifyRayBox( ::Dynamic data,::Array< ::Dynamic> points,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_205_simplifyRayBox)
HXLINE( 207)		width = (width - ( (Float)(1) ));
HXLINE( 208)		height = (height - ( (Float)(1) ));
HXLINE( 211)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 211)		point->_inPool = false;
HXDLIN( 211)		 ::flixel::math::FlxBasePoint p1 = point;
HXLINE( 212)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 212)		point1->_inPool = false;
HXDLIN( 212)		 ::flixel::math::FlxBasePoint p2 = point1;
HXLINE( 214)		int i = 1;
HXLINE( 215)		while((i < (points->length - 1))){
HXLINE( 217)			{
HXLINE( 217)				 ::flixel::math::FlxBasePoint p = points->__get((i - 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN( 217)				{
HXLINE( 217)					Float y = p->y;
HXDLIN( 217)					p1->set_x(p->x);
HXDLIN( 217)					p1->set_y(y);
            				}
HXDLIN( 217)				if (p->_weak) {
HXLINE( 217)					p->put();
            				}
HXDLIN( 217)				 ::flixel::math::FlxBasePoint this1 = p1;
HXDLIN( 217)				this1->set_x((this1->x - (width / ( (Float)(2) ))));
HXDLIN( 217)				this1->set_y((this1->y - (height / ( (Float)(2) ))));
            			}
HXLINE( 218)			{
HXLINE( 218)				 ::flixel::math::FlxBasePoint p3 = points->__get((i + 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN( 218)				{
HXLINE( 218)					Float y1 = p3->y;
HXDLIN( 218)					p2->set_x(p3->x);
HXDLIN( 218)					p2->set_y(y1);
            				}
HXDLIN( 218)				if (p3->_weak) {
HXLINE( 218)					p3->put();
            				}
HXDLIN( 218)				 ::flixel::math::FlxBasePoint this2 = p2;
HXDLIN( 218)				this2->set_x((this2->x - (width / ( (Float)(2) ))));
HXDLIN( 218)				this2->set_y((this2->y - (height / ( (Float)(2) ))));
            			}
HXLINE( 220)			bool _hx_tmp;
HXDLIN( 220)			bool _hx_tmp1;
HXDLIN( 220)			bool _hx_tmp2;
HXDLIN( 220)			if (( ( ::flixel::tile::FlxBaseTilemap)(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map) )->ray(p1,p2,null())) {
HXLINE( 221)				 ::Dynamic data1 = ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map;
HXDLIN( 221)				p1->set_x((p1->x + width));
HXDLIN( 221)				p1->set_y(p1->y);
HXDLIN( 221)				p2->set_x((p2->x + width));
HXDLIN( 221)				p2->set_y(p2->y);
HXLINE( 220)				_hx_tmp2 = ( ( ::flixel::tile::FlxBaseTilemap)(data1) )->ray(p1,p2,null());
            			}
            			else {
HXLINE( 220)				_hx_tmp2 = false;
            			}
HXDLIN( 220)			if (_hx_tmp2) {
HXLINE( 222)				 ::Dynamic data1 = ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map;
HXDLIN( 222)				p1->set_x(p1->x);
HXDLIN( 222)				p1->set_y((p1->y + height));
HXDLIN( 222)				p2->set_x(p2->x);
HXDLIN( 222)				p2->set_y((p2->y + height));
HXLINE( 220)				_hx_tmp1 = ( ( ::flixel::tile::FlxBaseTilemap)(data1) )->ray(p1,p2,null());
            			}
            			else {
HXLINE( 220)				_hx_tmp1 = false;
            			}
HXDLIN( 220)			if (_hx_tmp1) {
HXLINE( 223)				 ::Dynamic data1 = ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map;
HXDLIN( 223)				p1->set_x((p1->x + -(width)));
HXDLIN( 223)				p1->set_y(p1->y);
HXDLIN( 223)				p2->set_x((p2->x + -(width)));
HXDLIN( 223)				p2->set_y(p2->y);
HXLINE( 220)				_hx_tmp = ( ( ::flixel::tile::FlxBaseTilemap)(data1) )->ray(p1,p2,null());
            			}
            			else {
HXLINE( 220)				_hx_tmp = false;
            			}
HXDLIN( 220)			if (_hx_tmp) {
HXLINE( 226)				points->remove(points->__get(i).StaticCast<  ::flixel::math::FlxBasePoint >());
            			}
            			else {
HXLINE( 229)				i = (i + 1);
            			}
            		}
HXLINE( 233)		p1->put();
HXLINE( 234)		p2->put();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedPathfinder_obj,simplifyRayBox,(void))

void FlxTypedPathfinder_obj::simplifyRayStep( ::Dynamic data,::Array< ::Dynamic> points,Float resolution){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_246_simplifyRayStep)
HXLINE( 248)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 248)		point->_inPool = false;
HXDLIN( 248)		 ::flixel::math::FlxBasePoint tempPoint = point;
HXLINE( 250)		int i = 1;
HXLINE( 251)		while((i < (points->length - 1))){
HXLINE( 254)			if (( ( ::flixel::tile::FlxBaseTilemap)(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map) )->rayStep(points->__get((i - 1)).StaticCast<  ::flixel::math::FlxBasePoint >(),points->__get((i + 1)).StaticCast<  ::flixel::math::FlxBasePoint >(),tempPoint,resolution)) {
HXLINE( 257)				points->remove(points->__get(i).StaticCast<  ::flixel::math::FlxBasePoint >());
            			}
            			else {
HXLINE( 260)				i = (i + 1);
            			}
            		}
HXLINE( 264)		tempPoint->put();
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedPathfinder_obj,simplifyRayStep,(void))

 ::Dynamic FlxTypedPathfinder_obj::computePathData( ::Dynamic map,int startIndex,int endIndex,::hx::Null< bool >  __o_stopOnEnd){
            		bool stopOnEnd = __o_stopOnEnd.Default(true);
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_279_computePathData)
HXDLIN( 279)		return this->compute(this->createData(map,startIndex,endIndex),stopOnEnd);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedPathfinder_obj,computePathData,return )

 ::Dynamic FlxTypedPathfinder_obj::compute( ::Dynamic data,::hx::Null< bool >  __o_stopOnEnd){
            		bool stopOnEnd = __o_stopOnEnd.Default(true);
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_290_compute)
HXLINE( 291)		if (!(this->hasValidInitialData(data))) {
HXLINE( 292)			return null();
            		}
HXLINE( 294)		::Array< int > current = ::Array_obj< int >::__new(1)->init(0,( ( ::flixel::path::FlxTypedPathfinderData)(data) )->startIndex);
HXLINE( 295)		while((current->length > 0)){
HXLINE( 297)			::Array< int > neighbors = ::Array_obj< int >::__new();
HXLINE( 300)			{
HXLINE( 300)				int _g = 0;
HXDLIN( 300)				while((_g < current->length)){
HXLINE( 300)					int currentIndex = current->__get(_g);
HXDLIN( 300)					_g = (_g + 1);
HXLINE( 303)					::Array< int > cellNeighbors = this->getNeighbors(data,currentIndex);
HXLINE( 306)					int distanceSoFar = ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->distances->__get(currentIndex);
HXLINE( 307)					{
HXLINE( 307)						int _g1 = 0;
HXDLIN( 307)						while((_g1 < cellNeighbors->length)){
HXLINE( 307)							int neighbor = cellNeighbors->__get(_g1);
HXDLIN( 307)							_g1 = (_g1 + 1);
HXLINE( 309)							int oldDistance = ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->distances->__get(neighbor);
HXLINE( 310)							bool _hx_tmp;
HXDLIN( 310)							if ((oldDistance != -1)) {
HXLINE( 310)								_hx_tmp = (distanceSoFar >= oldDistance);
            							}
            							else {
HXLINE( 310)								_hx_tmp = false;
            							}
HXDLIN( 310)							if (_hx_tmp) {
HXLINE( 313)								continue;
            							}
HXLINE( 317)							int distance = (distanceSoFar + this->getDistance(data,currentIndex,neighbor));
HXLINE( 318)							bool _hx_tmp1;
HXDLIN( 318)							if ((oldDistance != -1)) {
HXLINE( 318)								_hx_tmp1 = (distance < oldDistance);
            							}
            							else {
HXLINE( 318)								_hx_tmp1 = true;
            							}
HXDLIN( 318)							if (_hx_tmp1) {
HXLINE( 320)								( ( ::flixel::path::FlxTypedPathfinderData)(data) )->distances[neighbor] = distance;
HXLINE( 322)								( ( ::flixel::path::FlxTypedPathfinderData)(data) )->moves[neighbor] = currentIndex;
HXLINE( 323)								neighbors->push(neighbor);
            							}
            						}
            					}
            				}
            			}
HXLINE( 329)			{
HXLINE( 329)				int _g1 = 0;
HXDLIN( 329)				while((_g1 < neighbors->length)){
HXLINE( 329)					int neighbor = neighbors->__get(_g1);
HXDLIN( 329)					_g1 = (_g1 + 1);
HXLINE( 331)					if (this->isTileSolved(data,neighbor)) {
HXLINE( 332)						( ( ::flixel::path::FlxTypedPathfinderData)(data) )->excluded->push(neighbor);
            					}
            				}
            			}
HXLINE( 336)			( ( ::flixel::path::FlxTypedPathfinderData)(data) )->foundEnd = this->isComplete(data);
HXLINE( 337)			bool _hx_tmp;
HXDLIN( 337)			if (stopOnEnd) {
HXLINE( 337)				_hx_tmp = ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->foundEnd;
            			}
            			else {
HXLINE( 337)				_hx_tmp = false;
            			}
HXDLIN( 337)			if (_hx_tmp) {
HXLINE( 338)				goto _hx_goto_17;
            			}
HXLINE( 341)			current = neighbors;
            		}
            		_hx_goto_17:;
HXLINE( 344)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedPathfinder_obj,compute,return )

::Array< int > FlxTypedPathfinder_obj::getNeighbors( ::Dynamic data,int from){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_356_getNeighbors)
HXDLIN( 356)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FlxTilemapPathPolicy.getNeighbors should not be called, It must be overriden in derived classes",33,f6,83,a6)));
HXDLIN( 356)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedPathfinder_obj,getNeighbors,return )

int FlxTypedPathfinder_obj::getDistance( ::Dynamic data,int from,int to){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_370_getDistance)
HXDLIN( 370)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FlxTilemapPathPolicy.getDistance should not be called, It must be overriden in derived classes",bd,c0,de,31)));
HXDLIN( 370)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedPathfinder_obj,getDistance,return )

bool FlxTypedPathfinder_obj::isComplete( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_383_isComplete)
HXDLIN( 383)		return (( ( ::flixel::path::FlxTypedPathfinderData)(data) )->moves->__get(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->endIndex) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedPathfinder_obj,isComplete,return )

bool FlxTypedPathfinder_obj::isTileSolved( ::Dynamic data,int tile){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_394_isTileSolved)
HXDLIN( 394)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedPathfinder_obj,isTileSolved,return )

bool FlxTypedPathfinder_obj::hasValidInitialData( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_eed5c81c71278288_405_hasValidInitialData)
HXDLIN( 405)		bool _hx_tmp;
HXDLIN( 405)		if (( ( ::flixel::path::FlxTypedPathfinderData)(data) )->hasValidStartEnd()) {
HXLINE( 406)			( ( ::flixel::path::FlxTypedPathfinderData)(data) )->numChecks++;
HXDLIN( 406)			 ::Dynamic data1 = ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map;
HXLINE( 405)			_hx_tmp = (( ( ::flixel::tile::FlxBaseTilemap)(data1) )->getTileCollisions(( ( ::flixel::tile::FlxBaseTilemap)(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map) )->getTileByIndex(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->startIndex)) == 0);
            		}
            		else {
HXDLIN( 405)			_hx_tmp = false;
            		}
HXDLIN( 405)		if (_hx_tmp) {
HXLINE( 407)			( ( ::flixel::path::FlxTypedPathfinderData)(data) )->numChecks++;
HXDLIN( 407)			 ::Dynamic data1 = ( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map;
HXDLIN( 407)			return (( ( ::flixel::tile::FlxBaseTilemap)(data1) )->getTileCollisions(( ( ::flixel::tile::FlxBaseTilemap)(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->map) )->getTileByIndex(( ( ::flixel::path::FlxTypedPathfinderData)(data) )->endIndex)) == 0);
            		}
            		else {
HXDLIN( 405)			return false;
            		}
HXDLIN( 405)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedPathfinder_obj,hasValidInitialData,return )


::hx::ObjectPtr< FlxTypedPathfinder_obj > FlxTypedPathfinder_obj::__new( ::Dynamic factory) {
	::hx::ObjectPtr< FlxTypedPathfinder_obj > __this = new FlxTypedPathfinder_obj();
	__this->__construct(factory);
	return __this;
}

::hx::ObjectPtr< FlxTypedPathfinder_obj > FlxTypedPathfinder_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic factory) {
	FlxTypedPathfinder_obj *__this = (FlxTypedPathfinder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedPathfinder_obj), true, "flixel.path.FlxTypedPathfinder"));
	*(void **)__this = FlxTypedPathfinder_obj::_hx_vtable;
	__this->__construct(factory);
	return __this;
}

FlxTypedPathfinder_obj::FlxTypedPathfinder_obj()
{
}

void FlxTypedPathfinder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedPathfinder);
	HX_MARK_MEMBER_NAME(createData,"createData");
	HX_MARK_END_CLASS();
}

void FlxTypedPathfinder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(createData,"createData");
}

::hx::Val FlxTypedPathfinder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compute") ) { return ::hx::Val( compute_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findPath") ) { return ::hx::Val( findPath_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createData") ) { return ::hx::Val( createData ); }
		if (HX_FIELD_EQ(inName,"isComplete") ) { return ::hx::Val( isComplete_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"simplifyRay") ) { return ::hx::Val( simplifyRay_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDistance") ) { return ::hx::Val( getDistance_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return ::hx::Val( simplifyPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"simplifyLine") ) { return ::hx::Val( simplifyLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNeighbors") ) { return ::hx::Val( getNeighbors_dyn() ); }
		if (HX_FIELD_EQ(inName,"isTileSolved") ) { return ::hx::Val( isTileSolved_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"simplifyRayBox") ) { return ::hx::Val( simplifyRayBox_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findPathIndices") ) { return ::hx::Val( findPathIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"simplifyRayStep") ) { return ::hx::Val( simplifyRayStep_dyn() ); }
		if (HX_FIELD_EQ(inName,"computePathData") ) { return ::hx::Val( computePathData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hasValidInitialData") ) { return ::hx::Val( hasValidInitialData_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"findPathIndicesHelper") ) { return ::hx::Val( findPathIndicesHelper_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getPathPointsFromIndices") ) { return ::hx::Val( getPathPointsFromIndices_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTypedPathfinder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"createData") ) { createData=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedPathfinder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTypedPathfinder_obj,createData),HX_("createData",46,17,f1,54)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedPathfinder_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedPathfinder_obj_sMemberFields[] = {
	HX_("createData",46,17,f1,54),
	HX_("findPath",7e,f2,e5,9c),
	HX_("findPathIndices",49,e8,15,81),
	HX_("findPathIndicesHelper",97,b6,f5,86),
	HX_("getPathPointsFromIndices",9f,e1,f9,77),
	HX_("simplifyPath",4e,21,2f,66),
	HX_("simplifyLine",9d,53,90,63),
	HX_("simplifyRay",61,82,f0,2a),
	HX_("simplifyRayBox",2a,e6,1c,79),
	HX_("simplifyRayStep",4d,da,6c,8b),
	HX_("computePathData",06,71,83,cf),
	HX_("compute",77,47,78,83),
	HX_("getNeighbors",cb,7b,d0,a3),
	HX_("getDistance",eb,55,ed,91),
	HX_("isComplete",c3,12,77,fa),
	HX_("isTileSolved",5d,ce,f7,62),
	HX_("hasValidInitialData",ac,a0,ce,a4),
	::String(null()) };

::hx::Class FlxTypedPathfinder_obj::__mClass;

void FlxTypedPathfinder_obj::__register()
{
	FlxTypedPathfinder_obj _hx_dummy;
	FlxTypedPathfinder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.path.FlxTypedPathfinder",3a,62,a5,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedPathfinder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedPathfinder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedPathfinder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedPathfinder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace path
