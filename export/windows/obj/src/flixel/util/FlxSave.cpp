#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSave_FlxSharedObject
#include <flixel/util/_FlxSave/FlxSharedObject.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObject
#include <openfl/net/SharedObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a670326751daced_121_new,"flixel.util.FlxSave","new",0x2c4b0107,"flixel.util.FlxSave.new","flixel/util/FlxSave.hx",121,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_140_destroy,"flixel.util.FlxSave","destroy",0x7bc03d21,"flixel.util.FlxSave.destroy","flixel/util/FlxSave.hx",140,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_158_bind,"flixel.util.FlxSave","bind",0x8d6a5736,"flixel.util.FlxSave.bind","flixel/util/FlxSave.hx",158,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_192_mergeDataFrom,"flixel.util.FlxSave","mergeDataFrom",0x268f82f3,"flixel.util.FlxSave.mergeDataFrom","flixel/util/FlxSave.hx",192,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_224_mergeData,"flixel.util.FlxSave","mergeData",0x8fb288e9,"flixel.util.FlxSave.mergeData","flixel/util/FlxSave.hx",224,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_250_close,"flixel.util.FlxSave","close",0xc505001f,"flixel.util.FlxSave.close","flixel/util/FlxSave.hx",250,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_263_flush,"flixel.util.FlxSave","flush",0x7f3d4b2b,"flixel.util.FlxSave.flush","flixel/util/FlxSave.hx",263,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_292_erase,"flixel.util.FlxSave","erase",0xefbed14d,"flixel.util.FlxSave.erase","flixel/util/FlxSave.hx",292,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_307_checkStatus,"flixel.util.FlxSave","checkStatus",0x423069c1,"flixel.util.FlxSave.checkStatus","flixel/util/FlxSave.hx",307,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_322_get_name,"flixel.util.FlxSave","get_name",0xc44e3fcd,"flixel.util.FlxSave.get_name","flixel/util/FlxSave.hx",322,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_332_get_path,"flixel.util.FlxSave","get_path",0xc5a0b327,"flixel.util.FlxSave.get_path","flixel/util/FlxSave.hx",332,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_342_get_isBound,"flixel.util.FlxSave","get_isBound",0x339f63b2,"flixel.util.FlxSave.get_isBound","flixel/util/FlxSave.hx",342,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_351_isEmpty,"flixel.util.FlxSave","isEmpty",0x6399ee6a,"flixel.util.FlxSave.isEmpty","flixel/util/FlxSave.hx",351,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_70_hasInvalidChars,"flixel.util.FlxSave","hasInvalidChars",0xad0a4c07,"flixel.util.FlxSave.hasInvalidChars","flixel/util/FlxSave.hx",70,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_84_validate,"flixel.util.FlxSave","validate",0x0077e28f,"flixel.util.FlxSave.validate","flixel/util/FlxSave.hx",84,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_92_validateAndWarn,"flixel.util.FlxSave","validateAndWarn",0xe06885ee,"flixel.util.FlxSave.validateAndWarn","flixel/util/FlxSave.hx",92,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_59_boot,"flixel.util.FlxSave","boot",0x8d6ee5ab,"flixel.util.FlxSave.boot","flixel/util/FlxSave.hx",59,0xc43cd0a9)
namespace flixel{
namespace util{

void FlxSave_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_121_new)
HXDLIN( 121)		this->status = ::flixel::util::FlxSaveStatus_obj::EMPTY_dyn();
            	}

Dynamic FlxSave_obj::__CreateEmpty() { return new FlxSave_obj; }

void *FlxSave_obj::_hx_vtable = 0;

Dynamic FlxSave_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSave_obj > _hx_result = new FlxSave_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSave_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x051f3151;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::util::FlxSave_obj::destroy,
};

void *FlxSave_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxSave_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_140_destroy)
HXLINE( 141)		this->_sharedObject = null();
HXLINE( 142)		this->status = ::flixel::util::FlxSaveStatus_obj::EMPTY_dyn();
HXLINE( 143)		this->data = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

bool FlxSave_obj::bind(::String name,::String path){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_158_bind)
HXLINE( 159)		this->destroy();
HXLINE( 161)		name = ::flixel::util::FlxSave_obj::validateAndWarn(name,HX_("name",4b,72,ff,48));
HXLINE( 162)		if (::hx::IsNotNull( path )) {
HXLINE( 163)			path = ::flixel::util::FlxSave_obj::validateAndWarn(path,HX_("path",a5,e5,51,4a));
            		}
HXLINE( 165)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 167)			this->_sharedObject = ::flixel::util::_FlxSave::FlxSharedObject_obj::getLocal(name,path);
HXLINE( 168)			this->status = ::flixel::util::FlxSaveStatus_obj::BOUND(name,path);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 170)				 ::haxe::Exception _g1 = ::haxe::Exception_obj::caught(_g);
HXLINE( 165)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE( 170)					 ::openfl::errors::Error e = ( ( ::openfl::errors::Error)(_g1) );
HXLINE( 172)					{
HXLINE( 172)						 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 172)						 ::Dynamic data = ((((((HX_("Error:",92,f7,fc,85) + e->get_message()) + HX_(" name:\"",d3,e5,27,50)) + name) + HX_("\", path:\"",23,f3,3c,fa)) + path) + HX_("\".",cc,1d,00,00));
HXDLIN( 172)						_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            					}
HXLINE( 173)					this->destroy();
HXLINE( 174)					return false;
            				}
            				else {
HXLINE( 165)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 176)		this->data = this->_sharedObject->data;
HXLINE( 177)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,bind,return )

bool FlxSave_obj::mergeDataFrom(::String name,::String path,::hx::Null< bool >  __o_overwrite,::hx::Null< bool >  __o_eraseSave,::hx::Null< int >  __o_minFileSize){
            		bool overwrite = __o_overwrite.Default(false);
            		bool eraseSave = __o_eraseSave.Default(true);
            		int minFileSize = __o_minFileSize.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_2a670326751daced_192_mergeDataFrom)
HXLINE( 193)		if (!(this->checkStatus())) {
HXLINE( 194)			return false;
            		}
HXLINE( 196)		 ::flixel::util::FlxSave oldSave =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 198)		if (oldSave->bind(name,path)) {
HXLINE( 200)			bool success = this->mergeData(oldSave->data,overwrite,minFileSize);
HXLINE( 202)			if (eraseSave) {
HXLINE( 203)				oldSave->erase();
            			}
HXLINE( 204)			oldSave->destroy();
HXLINE( 207)			return success;
            		}
HXLINE( 210)		oldSave->destroy();
HXLINE( 212)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSave_obj,mergeDataFrom,return )

bool FlxSave_obj::mergeData( ::Dynamic sourceData,::hx::Null< bool >  __o_overwrite,::hx::Null< int >  __o_minFileSize){
            		bool overwrite = __o_overwrite.Default(false);
            		int minFileSize = __o_minFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_224_mergeData)
HXLINE( 225)		bool hasAnyField = false;
HXLINE( 226)		{
HXLINE( 226)			int _g = 0;
HXDLIN( 226)			::Array< ::String > _g1 = ::Reflect_obj::fields(sourceData);
HXDLIN( 226)			while((_g < _g1->length)){
HXLINE( 226)				::String field = _g1->__get(_g);
HXDLIN( 226)				_g = (_g + 1);
HXLINE( 228)				hasAnyField = true;
HXLINE( 230)				bool _hx_tmp;
HXDLIN( 230)				if (!(overwrite)) {
HXLINE( 230)					_hx_tmp = !(::Reflect_obj::hasField(this->data,field));
            				}
            				else {
HXLINE( 230)					_hx_tmp = true;
            				}
HXDLIN( 230)				if (_hx_tmp) {
HXLINE( 231)					 ::Dynamic _hx_tmp = this->data;
HXDLIN( 231)					::Reflect_obj::setField(_hx_tmp,field,::Reflect_obj::field(sourceData,field));
            				}
            			}
            		}
HXLINE( 235)		if (hasAnyField) {
HXLINE( 236)			return this->flush(minFileSize);
            		}
HXLINE( 238)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSave_obj,mergeData,return )

bool FlxSave_obj::close(::hx::Null< int >  __o_minFileSize){
            		int minFileSize = __o_minFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_250_close)
HXLINE( 251)		bool success = this->flush(minFileSize);
HXLINE( 252)		this->destroy();
HXLINE( 253)		return success;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,close,return )

bool FlxSave_obj::flush(::hx::Null< int >  __o_minFileSize){
            		int minFileSize = __o_minFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_263_flush)
HXLINE( 264)		if (!(this->checkStatus())) {
HXLINE( 265)			return false;
            		}
HXLINE( 267)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 269)			 ::Dynamic result = this->_sharedObject->flush(minFileSize);
HXLINE( 271)			if (::hx::IsNotEq( result,0 )) {
HXLINE( 272)				this->status = ::flixel::util::FlxSaveStatus_obj::ERROR(HX_("FlxSave is requesting extra storage space.",65,ed,43,59));
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 267)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g),::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE( 276)					this->status = ::flixel::util::FlxSaveStatus_obj::ERROR(HX_("There was an problem flushing the save data.",31,08,61,29));
            				}
            				else {
HXLINE( 267)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 279)		this->checkStatus();
HXLINE( 281)		 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 281)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 281)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 281)			::String _g2 = _g->_hx_getString(1);
HXDLIN( 281)			return true;
            		}
            		else {
HXLINE( 281)			return false;
            		}
HXDLIN( 281)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,flush,return )

bool FlxSave_obj::erase(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_292_erase)
HXLINE( 293)		if (!(this->checkStatus())) {
HXLINE( 294)			return false;
            		}
HXLINE( 296)		this->_sharedObject->clear();
HXLINE( 297)		this->data =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 298)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::checkStatus(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_307_checkStatus)
HXLINE( 308)		{
HXLINE( 308)			 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 308)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 311)					::flixel::FlxG_obj::log->advanced(HX_("You must call FlxSave.bind() before you can read or write data.",15,79,e0,84),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            				break;
            				case (int)2: {
HXLINE( 312)					::String msg = _g->_hx_getString(0);
HXLINE( 313)					::flixel::FlxG_obj::log->advanced(msg,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            				}
            				break;
            				default:{
HXLINE( 315)					return true;
            				}
            			}
            		}
HXLINE( 317)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkStatus,return )

::String FlxSave_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_322_get_name)
HXDLIN( 322)		 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 322)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 325)			::String _g1 = _g->_hx_getString(1);
HXDLIN( 325)			::String n = _g->_hx_getString(0);
HXDLIN( 325)			return n;
            		}
            		else {
HXLINE( 326)			return null();
            		}
HXLINE( 322)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,get_name,return )

::String FlxSave_obj::get_path(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_332_get_path)
HXDLIN( 332)		 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 332)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 335)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 335)			::String p = _g->_hx_getString(1);
HXDLIN( 335)			return p;
            		}
            		else {
HXLINE( 336)			return null();
            		}
HXLINE( 332)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,get_path,return )

bool FlxSave_obj::get_isBound(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_342_get_isBound)
HXDLIN( 342)		 ::flixel::util::FlxSaveStatus _g = this->status;
HXDLIN( 342)		if ((_g->_hx_getIndex() == 1)) {
HXDLIN( 342)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 342)			::String _g2 = _g->_hx_getString(1);
HXDLIN( 342)			return true;
            		}
            		else {
HXDLIN( 342)			return false;
            		}
HXDLIN( 342)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,get_isBound,return )

bool FlxSave_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_351_isEmpty)
HXDLIN( 351)		if (::hx::IsNotNull( this->data )) {
HXDLIN( 351)			return (::Reflect_obj::fields(this->data)->length == 0);
            		}
            		else {
HXDLIN( 351)			return true;
            		}
HXDLIN( 351)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,isEmpty,return )

 ::EReg FlxSave_obj::invalidChars;

bool FlxSave_obj::hasInvalidChars(::String str){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_70_hasInvalidChars)
HXDLIN(  70)		return ::flixel::util::FlxSave_obj::invalidChars->match(str);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,hasInvalidChars,return )

::String FlxSave_obj::validate(::String str){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_84_validate)
HXDLIN(  84)		return ::flixel::util::FlxSave_obj::invalidChars->split(str)->join(HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,validate,return )

::String FlxSave_obj::validateAndWarn(::String str,::String fieldId){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_92_validateAndWarn)
HXLINE(  93)		::String newStr = ::flixel::util::FlxSave_obj::validate(str);
HXLINE(  95)		if ((newStr != str)) {
HXLINE(  96)			::flixel::FlxG_obj::log->advanced(((((((HX_("FlxSave ",91,54,66,34) + fieldId) + HX_(": \"",bc,1e,2c,00)) + str) + HX_("\" contains invalid characters, using \"",fc,4b,51,3a)) + newStr) + HX_("\" instead",84,0a,fc,b7)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
HXLINE(  98)		return newStr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,validateAndWarn,return )


::hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new() {
	::hx::ObjectPtr< FlxSave_obj > __this = new FlxSave_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSave_obj *__this = (FlxSave_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSave_obj), true, "flixel.util.FlxSave"));
	*(void **)__this = FlxSave_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
}

::hx::Val FlxSave_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_path() ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"erase") ) { return ::hx::Val( erase_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isBound") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isBound() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return ::hx::Val( get_path_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mergeData") ) { return ::hx::Val( mergeData_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return ::hx::Val( checkStatus_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isBound") ) { return ::hx::Val( get_isBound_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return ::hx::Val( _sharedObject ); }
		if (HX_FIELD_EQ(inName,"mergeDataFrom") ) { return ::hx::Val( mergeDataFrom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSave_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"invalidChars") ) { outValue = ( invalidChars ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasInvalidChars") ) { outValue = hasInvalidChars_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"validateAndWarn") ) { outValue = validateAndWarn_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxSave_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast<  ::flixel::util::FlxSaveStatus >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast<  ::openfl::net::SharedObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSave_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"invalidChars") ) { invalidChars=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("isBound",f4,53,82,53));
	outFields->push(HX_("_sharedObject",23,ee,9d,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSave_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSave_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::flixel::util::FlxSaveStatus */ ,(int)offsetof(FlxSave_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /*  ::openfl::net::SharedObject */ ,(int)offsetof(FlxSave_obj,_sharedObject),HX_("_sharedObject",23,ee,9d,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxSave_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &FlxSave_obj::invalidChars,HX_("invalidChars",66,12,09,eb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxSave_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("status",32,e7,fb,05),
	HX_("_sharedObject",23,ee,9d,aa),
	HX_("destroy",fa,2c,86,24),
	HX_("bind",bd,f5,16,41),
	HX_("mergeDataFrom",8c,5b,a4,fa),
	HX_("mergeData",02,e1,b6,69),
	HX_("close",b8,17,63,48),
	HX_("flush",c4,62,9b,02),
	HX_("erase",e6,e8,1c,73),
	HX_("checkStatus",1a,ba,0d,e8),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_path",2e,a1,0c,ca),
	HX_("get_isBound",0b,b4,7c,d9),
	HX_("isEmpty",43,de,5f,0c),
	::String(null()) };

static void FlxSave_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSave_obj::invalidChars,"invalidChars");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSave_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSave_obj::invalidChars,"invalidChars");
};

#endif

::hx::Class FlxSave_obj::__mClass;

static ::String FlxSave_obj_sStaticFields[] = {
	HX_("invalidChars",66,12,09,eb),
	HX_("hasInvalidChars",e0,3c,79,52),
	HX_("validate",96,d0,e3,04),
	HX_("validateAndWarn",c7,76,d7,85),
	::String(null())
};

void FlxSave_obj::__register()
{
	FlxSave_obj _hx_dummy;
	FlxSave_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxSave",95,71,4e,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSave_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSave_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSave_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSave_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSave_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSave_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSave_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSave_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSave_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSave_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2a670326751daced_59_boot)
HXDLIN(  59)		invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[ ~%&\\\\;:\"',<>?#]+",62,ea,57,10),HX_("g",67,00,00,00));
            	}
}

} // end namespace flixel
} // end namespace util
