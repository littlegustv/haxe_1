// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_starling_errors_AbstractClassError
#include <starling/errors/AbstractClassError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b1781445bc5d551_22_new,"starling.errors.AbstractClassError","new",0xbeb43041,"starling.errors.AbstractClassError.new","starling/errors/AbstractClassError.hx",22,0x1b0dec2f)
namespace starling{
namespace errors{

void AbstractClassError_obj::__construct(::String __o_message,hx::Null< int >  __o_id){
::String message = __o_message.Default(HX_HCSTRING("Cannot instantiate abstract class","\x0d","\x2b","\x9f","\x68"));
int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_7b1781445bc5d551_22_new)
HXDLIN(  22)		super::__construct(message,id);
            	}

Dynamic AbstractClassError_obj::__CreateEmpty() { return new AbstractClassError_obj; }

void *AbstractClassError_obj::_hx_vtable = 0;

Dynamic AbstractClassError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AbstractClassError_obj > _hx_result = new AbstractClassError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AbstractClassError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1fc85c4d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1fc85c4d;
	} else {
		return inClassId==(int)0x3498f985;
	}
}


hx::ObjectPtr< AbstractClassError_obj > AbstractClassError_obj::__new(::String __o_message,hx::Null< int >  __o_id) {
	hx::ObjectPtr< AbstractClassError_obj > __this = new AbstractClassError_obj();
	__this->__construct(__o_message,__o_id);
	return __this;
}

hx::ObjectPtr< AbstractClassError_obj > AbstractClassError_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message,hx::Null< int >  __o_id) {
	AbstractClassError_obj *__this = (AbstractClassError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AbstractClassError_obj), true, "starling.errors.AbstractClassError"));
	*(void **)__this = AbstractClassError_obj::_hx_vtable;
	__this->__construct(__o_message,__o_id);
	return __this;
}

AbstractClassError_obj::AbstractClassError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AbstractClassError_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AbstractClassError_obj_sStaticStorageInfo = 0;
#endif

static void AbstractClassError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractClassError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AbstractClassError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractClassError_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractClassError_obj::__mClass;

void AbstractClassError_obj::__register()
{
	hx::Object *dummy = new AbstractClassError_obj;
	AbstractClassError_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.errors.AbstractClassError","\xcf","\xfb","\x6c","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AbstractClassError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AbstractClassError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AbstractClassError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractClassError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractClassError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace starling
} // end namespace errors
