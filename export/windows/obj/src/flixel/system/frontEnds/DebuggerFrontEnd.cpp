#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f944dca4f3bb528_19_new,"flixel.system.frontEnds.DebuggerFrontEnd","new",0x8bc76b9f,"flixel.system.frontEnds.DebuggerFrontEnd.new","flixel/system/frontEnds/DebuggerFrontEnd.hx",19,0x2ebb4b30)
static const int _hx_array_data_ec6bb02d_1[] = {
	(int)113,(int)192,(int)220,
};
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_60_setLayout,"flixel.system.frontEnds.DebuggerFrontEnd","setLayout",0x96c2386b,"flixel.system.frontEnds.DebuggerFrontEnd.setLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",60,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_70_resetLayout,"flixel.system.frontEnds.DebuggerFrontEnd","resetLayout",0xc33ca418,"flixel.system.frontEnds.DebuggerFrontEnd.resetLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",70,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_88_addButton,"flixel.system.frontEnds.DebuggerFrontEnd","addButton",0x7066ab72,"flixel.system.frontEnds.DebuggerFrontEnd.addButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",88,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_102_track,"flixel.system.frontEnds.DebuggerFrontEnd","track",0x1a1fb78a,"flixel.system.frontEnds.DebuggerFrontEnd.track","flixel/system/frontEnds/DebuggerFrontEnd.hx",102,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_127_addTrackerProfile,"flixel.system.frontEnds.DebuggerFrontEnd","addTrackerProfile",0xb36941d1,"flixel.system.frontEnds.DebuggerFrontEnd.addTrackerProfile","flixel/system/frontEnds/DebuggerFrontEnd.hx",127,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_140_removeButton,"flixel.system.frontEnds.DebuggerFrontEnd","removeButton",0xa0228237,"flixel.system.frontEnds.DebuggerFrontEnd.removeButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",140,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_148_set_drawDebug,"flixel.system.frontEnds.DebuggerFrontEnd","set_drawDebug",0x8073fd91,"flixel.system.frontEnds.DebuggerFrontEnd.set_drawDebug","flixel/system/frontEnds/DebuggerFrontEnd.hx",148,0x2ebb4b30)
HX_LOCAL_STACK_FRAME(_hx_pos_6f944dca4f3bb528_161_set_visible,"flixel.system.frontEnds.DebuggerFrontEnd","set_visible",0xfdfb51d4,"flixel.system.frontEnds.DebuggerFrontEnd.set_visible","flixel/system/frontEnds/DebuggerFrontEnd.hx",161,0x2ebb4b30)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void DebuggerFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6f944dca4f3bb528_19_new)
HXLINE(  50)		this->visible = false;
HXLINE(  48)		this->visibilityChanged =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  42)		this->drawDebugChanged =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  37)		this->drawDebug = false;
HXLINE(  31)		this->toggleKeys = ::Array_obj< int >::fromData( _hx_array_data_ec6bb02d_1,3);
HXLINE(  24)		this->precision = 3;
            	}

Dynamic DebuggerFrontEnd_obj::__CreateEmpty() { return new DebuggerFrontEnd_obj; }

void *DebuggerFrontEnd_obj::_hx_vtable = 0;

Dynamic DebuggerFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DebuggerFrontEnd_obj > _hx_result = new DebuggerFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DebuggerFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76a44a29;
}

void DebuggerFrontEnd_obj::setLayout( ::flixel::_hx_system::debug::FlxDebuggerLayout Layout){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_60_setLayout)
HXDLIN(  60)		 ::flixel::_hx_system::debug::FlxDebugger _this = ::flixel::FlxG_obj::game->debugger;
HXDLIN(  60)		_this->_layout = Layout;
HXDLIN(  60)		_this->resetLayout();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,setLayout,(void))

void DebuggerFrontEnd_obj::resetLayout(){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_70_resetLayout)
HXDLIN(  70)		::flixel::FlxG_obj::game->debugger->resetLayout();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerFrontEnd_obj,resetLayout,(void))

 ::flixel::_hx_system::ui::FlxSystemButton DebuggerFrontEnd_obj::addButton( ::flixel::util::FlxHorizontalAlign Alignment, ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode,::hx::Null< bool >  __o_UpdateLayout){
            		bool ToggleMode = __o_ToggleMode.Default(false);
            		bool UpdateLayout = __o_UpdateLayout.Default(true);
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_88_addButton)
HXDLIN(  88)		return ::flixel::FlxG_obj::game->debugger->addButton(Alignment,Icon,UpHandler,ToggleMode,UpdateLayout);
            	}


HX_DEFINE_DYNAMIC_FUNC5(DebuggerFrontEnd_obj,addButton,return )

 ::flixel::_hx_system::debug::Window DebuggerFrontEnd_obj::track( ::Dynamic ObjectOrClass,::String WindowTitle){
            	HX_GC_STACKFRAME(&_hx_pos_6f944dca4f3bb528_102_track)
HXLINE( 104)		if (::flixel::_hx_system::debug::watch::Tracker_obj::objectsBeingTracked->contains(ObjectOrClass)) {
HXLINE( 105)			return null();
            		}
HXLINE( 107)		 ::flixel::_hx_system::debug::watch::TrackerProfile profile = ::flixel::_hx_system::debug::watch::Tracker_obj::findProfile(ObjectOrClass);
HXLINE( 108)		if (::hx::IsNull( profile )) {
HXLINE( 110)			{
HXLINE( 110)				 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 110)				 ::Dynamic data = ((HX_("Could not find a tracking profile for object of class '",1a,ec,71,30) + ::flixel::util::FlxStringUtil_obj::getClassName(ObjectOrClass,true)) + HX_("'.",27,22,00,00));
HXDLIN( 110)				_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            			}
HXLINE( 111)			return null();
            		}
            		else {
HXLINE( 114)			 ::flixel::_hx_system::debug::FlxDebugger _this = ::flixel::FlxG_obj::game->debugger;
HXDLIN( 114)			 ::flixel::_hx_system::debug::Window window =  ::flixel::_hx_system::debug::watch::Tracker_obj::__alloc( HX_CTX ,profile,ObjectOrClass,WindowTitle);
HXDLIN( 114)			_this->_windows->push(window);
HXDLIN( 114)			_this->addChild(window);
HXDLIN( 114)			if (::hx::IsNotNull( _this->_screenBounds )) {
HXLINE( 114)				_this->updateBounds();
HXDLIN( 114)				window->bound();
            			}
HXDLIN( 114)			return window;
            		}
HXLINE( 108)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,track,return )

void DebuggerFrontEnd_obj::addTrackerProfile( ::flixel::_hx_system::debug::watch::TrackerProfile Profile){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_127_addTrackerProfile)
HXDLIN( 127)		if (::hx::IsNotNull( Profile )) {
HXDLIN( 127)			::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 127)			::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,addTrackerProfile,(void))

void DebuggerFrontEnd_obj::removeButton( ::flixel::_hx_system::ui::FlxSystemButton Button,::hx::Null< bool >  __o_UpdateLayout){
            		bool UpdateLayout = __o_UpdateLayout.Default(true);
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_140_removeButton)
HXDLIN( 140)		::flixel::FlxG_obj::game->debugger->removeButton(Button,UpdateLayout);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,removeButton,(void))

bool DebuggerFrontEnd_obj::set_drawDebug(bool Value){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_148_set_drawDebug)
HXLINE( 149)		if ((this->drawDebug == Value)) {
HXLINE( 150)			return this->drawDebug;
            		}
HXLINE( 152)		this->drawDebug = Value;
HXLINE( 154)		this->drawDebugChanged->dispatch();
HXLINE( 156)		return this->drawDebug;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_drawDebug,return )

bool DebuggerFrontEnd_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_6f944dca4f3bb528_161_set_visible)
HXLINE( 162)		if ((this->visible == Value)) {
HXLINE( 163)			return this->visible;
            		}
HXLINE( 165)		this->visible = Value;
HXLINE( 168)		::flixel::FlxG_obj::game->debugger->set_visible(Value);
HXLINE( 169)		::flixel::FlxG_obj::game->debugger->set_tabChildren(Value);
HXLINE( 173)		if (!(Value)) {
HXLINE( 175)			::openfl::Lib_obj::get_current()->stage->set_focus(null());
HXLINE( 177)			::flixel::FlxG_obj::game->onFocus(null());
HXLINE( 180)			::flixel::FlxG_obj::mouse->enabled = true;
            		}
            		else {
HXLINE( 188)			::flixel::FlxG_obj::mouse->enabled = !(::flixel::FlxG_obj::game->debugger->interaction->isInUse());
            		}
HXLINE( 192)		this->visibilityChanged->dispatch();
HXLINE( 195)		return this->visible;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_visible,return )


::hx::ObjectPtr< DebuggerFrontEnd_obj > DebuggerFrontEnd_obj::__new() {
	::hx::ObjectPtr< DebuggerFrontEnd_obj > __this = new DebuggerFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DebuggerFrontEnd_obj > DebuggerFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DebuggerFrontEnd_obj *__this = (DebuggerFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DebuggerFrontEnd_obj), true, "flixel.system.frontEnds.DebuggerFrontEnd"));
	*(void **)__this = DebuggerFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DebuggerFrontEnd_obj::DebuggerFrontEnd_obj()
{
}

void DebuggerFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebuggerFrontEnd);
	HX_MARK_MEMBER_NAME(precision,"precision");
	HX_MARK_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_MARK_MEMBER_NAME(drawDebug,"drawDebug");
	HX_MARK_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_MARK_MEMBER_NAME(visibilityChanged,"visibilityChanged");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void DebuggerFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(precision,"precision");
	HX_VISIT_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_VISIT_MEMBER_NAME(drawDebug,"drawDebug");
	HX_VISIT_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_VISIT_MEMBER_NAME(visibilityChanged,"visibilityChanged");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

::hx::Val DebuggerFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"track") ) { return ::hx::Val( track_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return ::hx::Val( visible ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { return ::hx::Val( precision ); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return ::hx::Val( drawDebug ); }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return ::hx::Val( setLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return ::hx::Val( addButton_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { return ::hx::Val( toggleKeys ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return ::hx::Val( resetLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return ::hx::Val( removeButton_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_drawDebug") ) { return ::hx::Val( set_drawDebug_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { return ::hx::Val( drawDebugChanged ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visibilityChanged") ) { return ::hx::Val( visibilityChanged ); }
		if (HX_FIELD_EQ(inName,"addTrackerProfile") ) { return ::hx::Val( addTrackerProfile_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DebuggerFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) );visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { precision=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_drawDebug(inValue.Cast< bool >()) );drawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { toggleKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { drawDebugChanged=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visibilityChanged") ) { visibilityChanged=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebuggerFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("precision",3e,d5,c7,80));
	outFields->push(HX_("toggleKeys",a8,27,bd,de));
	outFields->push(HX_("drawDebug",af,87,2a,9f));
	outFields->push(HX_("drawDebugChanged",05,35,de,47));
	outFields->push(HX_("visibilityChanged",42,69,31,f5));
	outFields->push(HX_("visible",72,78,24,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DebuggerFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DebuggerFrontEnd_obj,precision),HX_("precision",3e,d5,c7,80)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(DebuggerFrontEnd_obj,toggleKeys),HX_("toggleKeys",a8,27,bd,de)},
	{::hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,drawDebug),HX_("drawDebug",af,87,2a,9f)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(DebuggerFrontEnd_obj,drawDebugChanged),HX_("drawDebugChanged",05,35,de,47)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(DebuggerFrontEnd_obj,visibilityChanged),HX_("visibilityChanged",42,69,31,f5)},
	{::hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,visible),HX_("visible",72,78,24,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DebuggerFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String DebuggerFrontEnd_obj_sMemberFields[] = {
	HX_("precision",3e,d5,c7,80),
	HX_("toggleKeys",a8,27,bd,de),
	HX_("drawDebug",af,87,2a,9f),
	HX_("drawDebugChanged",05,35,de,47),
	HX_("visibilityChanged",42,69,31,f5),
	HX_("visible",72,78,24,a3),
	HX_("setLayout",ec,23,60,b8),
	HX_("resetLayout",d9,31,cd,f8),
	HX_("addButton",f3,96,04,92),
	HX_("track",8b,8e,1f,16),
	HX_("addTrackerProfile",52,16,10,21),
	HX_("removeButton",56,fd,0d,49),
	HX_("set_drawDebug",92,3d,94,a5),
	HX_("set_visible",95,df,8b,33),
	::String(null()) };

::hx::Class DebuggerFrontEnd_obj::__mClass;

void DebuggerFrontEnd_obj::__register()
{
	DebuggerFrontEnd_obj _hx_dummy;
	DebuggerFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.DebuggerFrontEnd",2d,b0,6b,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DebuggerFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DebuggerFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DebuggerFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DebuggerFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
