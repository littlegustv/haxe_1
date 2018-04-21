// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxegon_HaxegonSound
#include <haxegon/HaxegonSound.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68cb5c964dba0e4e_142_new,"haxegon.HaxegonSound","new",0x0f41bfaf,"haxegon.HaxegonSound.new","haxegon/Sound.hx",142,0xc71b57be)
namespace haxegon{

void HaxegonSound_obj::__construct( ::openfl::media::Sound _s,Float _vol){
            	HX_STACKFRAME(&_hx_pos_68cb5c964dba0e4e_142_new)
HXLINE( 143)		this->asset = _s;
HXLINE( 144)		this->adjustedvolume = _vol;
            	}

Dynamic HaxegonSound_obj::__CreateEmpty() { return new HaxegonSound_obj; }

void *HaxegonSound_obj::_hx_vtable = 0;

Dynamic HaxegonSound_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HaxegonSound_obj > _hx_result = new HaxegonSound_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HaxegonSound_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ce8378f;
}


hx::ObjectPtr< HaxegonSound_obj > HaxegonSound_obj::__new( ::openfl::media::Sound _s,Float _vol) {
	hx::ObjectPtr< HaxegonSound_obj > __this = new HaxegonSound_obj();
	__this->__construct(_s,_vol);
	return __this;
}

hx::ObjectPtr< HaxegonSound_obj > HaxegonSound_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::media::Sound _s,Float _vol) {
	HaxegonSound_obj *__this = (HaxegonSound_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HaxegonSound_obj), true, "haxegon.HaxegonSound"));
	*(void **)__this = HaxegonSound_obj::_hx_vtable;
	__this->__construct(_s,_vol);
	return __this;
}

HaxegonSound_obj::HaxegonSound_obj()
{
}

void HaxegonSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HaxegonSound);
	HX_MARK_MEMBER_NAME(adjustedvolume,"adjustedvolume");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_END_CLASS();
}

void HaxegonSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(adjustedvolume,"adjustedvolume");
	HX_VISIT_MEMBER_NAME(asset,"asset");
}

hx::Val HaxegonSound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return hx::Val( asset ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"adjustedvolume") ) { return hx::Val( adjustedvolume ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HaxegonSound_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"adjustedvolume") ) { adjustedvolume=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxegonSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("adjustedvolume","\x08","\x07","\x3c","\x47"));
	outFields->push(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HaxegonSound_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(HaxegonSound_obj,adjustedvolume),HX_HCSTRING("adjustedvolume","\x08","\x07","\x3c","\x47")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(int)offsetof(HaxegonSound_obj,asset),HX_HCSTRING("asset","\xf0","\x69","\x39","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HaxegonSound_obj_sStaticStorageInfo = 0;
#endif

static ::String HaxegonSound_obj_sMemberFields[] = {
	HX_HCSTRING("adjustedvolume","\x08","\x07","\x3c","\x47"),
	HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"),
	::String(null()) };

static void HaxegonSound_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxegonSound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HaxegonSound_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxegonSound_obj::__mClass,"__mClass");
};

#endif

hx::Class HaxegonSound_obj::__mClass;

void HaxegonSound_obj::__register()
{
	hx::Object *dummy = new HaxegonSound_obj;
	HaxegonSound_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.HaxegonSound","\x3d","\xbc","\x06","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HaxegonSound_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HaxegonSound_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HaxegonSound_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HaxegonSound_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HaxegonSound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HaxegonSound_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxegon
