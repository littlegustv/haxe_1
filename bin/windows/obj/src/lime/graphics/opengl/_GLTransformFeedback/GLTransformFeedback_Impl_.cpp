// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLTransformFeedback_GLTransformFeedback_Impl_
#include <lime/graphics/opengl/_GLTransformFeedback/GLTransformFeedback_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_37b54af8ff8dc0de_14_fromInt,"lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_","fromInt",0xec7828f7,"lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_.fromInt","lime/graphics/opengl/GLTransformFeedback.hx",14,0xac3a3468)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLTransformFeedback{

void GLTransformFeedback_Impl__obj::__construct() { }

Dynamic GLTransformFeedback_Impl__obj::__CreateEmpty() { return new GLTransformFeedback_Impl__obj; }

void *GLTransformFeedback_Impl__obj::_hx_vtable = 0;

Dynamic GLTransformFeedback_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLTransformFeedback_Impl__obj > _hx_result = new GLTransformFeedback_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLTransformFeedback_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4bae1988;
}

 ::lime::graphics::opengl::GLObject GLTransformFeedback_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_37b54af8ff8dc0de_14_fromInt)
HXDLIN(  14)		return ::lime::graphics::opengl::GLObject_obj::fromInt((int)11,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTransformFeedback_Impl__obj,fromInt,return )


GLTransformFeedback_Impl__obj::GLTransformFeedback_Impl__obj()
{
}

bool GLTransformFeedback_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLTransformFeedback_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLTransformFeedback_Impl__obj_sStaticStorageInfo = 0;
#endif

static void GLTransformFeedback_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLTransformFeedback_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLTransformFeedback_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTransformFeedback_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLTransformFeedback_Impl__obj::__mClass;

static ::String GLTransformFeedback_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	::String(null())
};

void GLTransformFeedback_Impl__obj::__register()
{
	hx::Object *dummy = new GLTransformFeedback_Impl__obj;
	GLTransformFeedback_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_","\xc0","\x09","\xad","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLTransformFeedback_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLTransformFeedback_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLTransformFeedback_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLTransformFeedback_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLTransformFeedback_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLTransformFeedback_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLTransformFeedback_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLTransformFeedback
