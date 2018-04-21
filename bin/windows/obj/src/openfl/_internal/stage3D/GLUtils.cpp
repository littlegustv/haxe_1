// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dd57334273da7235_20_CheckGLError,"openfl._internal.stage3D.GLUtils","CheckGLError",0x9918f1ac,"openfl._internal.stage3D.GLUtils.CheckGLError","openfl/_internal/stage3D/GLUtils.hx",20,0x3e0a00c4)
HX_LOCAL_STACK_FRAME(_hx_pos_dd57334273da7235_15_boot,"openfl._internal.stage3D.GLUtils","boot",0x357a2923,"openfl._internal.stage3D.GLUtils.boot","openfl/_internal/stage3D/GLUtils.hx",15,0x3e0a00c4)
namespace openfl{
namespace _internal{
namespace stage3D{

void GLUtils_obj::__construct() { }

Dynamic GLUtils_obj::__CreateEmpty() { return new GLUtils_obj; }

void *GLUtils_obj::_hx_vtable = 0;

Dynamic GLUtils_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLUtils_obj > _hx_result = new GLUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLUtils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f31f865;
}

bool GLUtils_obj::debug;

void GLUtils_obj::CheckGLError(){
            	HX_GC_STACKFRAME(&_hx_pos_dd57334273da7235_20_CheckGLError)
HXLINE(  21)		if (!(::openfl::_internal::stage3D::GLUtils_obj::debug)) {
HXLINE(  21)			return;
            		}
HXLINE(  23)		int error = ::lime::graphics::opengl::GL_obj::context->getError();
HXLINE(  25)		if ((error != (int)0)) {
HXLINE(  27)			::String errorText;
HXDLIN(  27)			switch((int)(error)){
            				case (int)0: {
HXLINE(  27)					errorText = HX_("GL_NO_ERROR",84,02,df,4a);
            				}
            				break;
            				case (int)1280: {
HXLINE(  27)					errorText = HX_("GL_INVALID_ENUM",43,16,1d,13);
            				}
            				break;
            				case (int)1281: {
HXLINE(  27)					errorText = HX_("GL_INVALID_VALUE",cf,ad,87,67);
            				}
            				break;
            				case (int)1282: {
HXLINE(  27)					errorText = HX_("GL_INVALID_OPERATION",85,01,aa,e2);
            				}
            				break;
            				case (int)1285: {
HXLINE(  27)					errorText = HX_("GL_OUT_OF_MEMORY",3e,b7,f8,98);
            				}
            				break;
            				case (int)1286: {
HXLINE(  27)					errorText = HX_("GL_INVALID_FRAMEBUFFER_OPERATION",53,c5,f1,cb);
            				}
            				break;
            				default:{
HXLINE(  27)					errorText = ::Std_obj::string(error);
            				}
            			}
HXLINE(  44)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((HX_("Error calling openGL api. Error: ",3f,ad,32,17) + errorText) + HX_("\n",0a,00,00,00))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GLUtils_obj,CheckGLError,(void))


GLUtils_obj::GLUtils_obj()
{
}

bool GLUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = ( debug ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CheckGLError") ) { outValue = CheckGLError_dyn(); return true; }
	}
	return false;
}

bool GLUtils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLUtils_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GLUtils_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &GLUtils_obj::debug,HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GLUtils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLUtils_obj::debug,"debug");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLUtils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLUtils_obj::debug,"debug");
};

#endif

hx::Class GLUtils_obj::__mClass;

static ::String GLUtils_obj_sStaticFields[] = {
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("CheckGLError","\xbb","\x73","\x32","\xda"),
	::String(null())
};

void GLUtils_obj::__register()
{
	hx::Object *dummy = new GLUtils_obj;
	GLUtils_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.GLUtils","\x1d","\xe1","\xf9","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &GLUtils_obj::__SetStatic;
	__mClass->mMarkFunc = GLUtils_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLUtils_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLUtils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLUtils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLUtils_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GLUtils_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dd57334273da7235_15_boot)
HXDLIN(  15)		debug = false;
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
