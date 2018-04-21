// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4011e13d990b097c_22_new,"openfl._internal.renderer.opengl.GLShaderManager","new",0xf3047071,"openfl._internal.renderer.opengl.GLShaderManager.new","openfl/_internal/renderer/opengl/GLShaderManager.hx",22,0xbe4c2a01)
HX_LOCAL_STACK_FRAME(_hx_pos_4011e13d990b097c_34_initShader,"openfl._internal.renderer.opengl.GLShaderManager","initShader",0x38630e64,"openfl._internal.renderer.opengl.GLShaderManager.initShader","openfl/_internal/renderer/opengl/GLShaderManager.hx",34,0xbe4c2a01)
HX_LOCAL_STACK_FRAME(_hx_pos_4011e13d990b097c_57_setShader,"openfl._internal.renderer.opengl.GLShaderManager","setShader",0xc09db738,"openfl._internal.renderer.opengl.GLShaderManager.setShader","openfl/_internal/renderer/opengl/GLShaderManager.hx",57,0xbe4c2a01)
HX_LOCAL_STACK_FRAME(_hx_pos_4011e13d990b097c_87_updateShader,"openfl._internal.renderer.opengl.GLShaderManager","updateShader",0xa411bbdd,"openfl._internal.renderer.opengl.GLShaderManager.updateShader","openfl/_internal/renderer/opengl/GLShaderManager.hx",87,0xbe4c2a01)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLShaderManager_obj::__construct( ::lime::_backend::native::NativeGLRenderContext gl){
            	HX_GC_STACKFRAME(&_hx_pos_4011e13d990b097c_22_new)
HXLINE(  24)		super::__construct();
HXLINE(  26)		this->gl = gl;
HXLINE(  28)		this->defaultShader =  ::openfl::display::Shader_obj::__alloc( HX_CTX ,null());
HXLINE(  29)		this->initShader(this->defaultShader);
            	}

Dynamic GLShaderManager_obj::__CreateEmpty() { return new GLShaderManager_obj; }

void *GLShaderManager_obj::_hx_vtable = 0;

Dynamic GLShaderManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLShaderManager_obj > _hx_result = new GLShaderManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GLShaderManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c3eb865) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c3eb865;
	} else {
		return inClassId==(int)0x493c4937;
	}
}

 ::openfl::display::Shader GLShaderManager_obj::initShader( ::openfl::display::Shader shader){
            	HX_STACKFRAME(&_hx_pos_4011e13d990b097c_34_initShader)
HXLINE(  36)		if (hx::IsNotNull( shader )) {
HXLINE(  40)			if (hx::IsNull( shader->gl )) {
HXLINE(  42)				shader->gl = this->gl;
HXLINE(  43)				shader->_hx___init();
            			}
HXLINE(  48)			return shader;
            		}
HXLINE(  52)		return this->defaultShader;
            	}


void GLShaderManager_obj::setShader( ::openfl::display::Shader shader){
            	HX_STACKFRAME(&_hx_pos_4011e13d990b097c_57_setShader)
HXLINE(  59)		if (hx::IsEq( this->currentShader,shader )) {
HXLINE(  59)			return;
            		}
HXLINE(  61)		if (hx::IsNotNull( this->currentShader )) {
HXLINE(  63)			this->currentShader->_hx___disable();
            		}
HXLINE(  67)		if (hx::IsNull( shader )) {
HXLINE(  69)			this->currentShader = null();
HXLINE(  70)			this->gl->useProgram(null());
HXLINE(  71)			return;
            		}
            		else {
HXLINE(  75)			this->currentShader = shader;
HXLINE(  76)			this->initShader(shader);
HXLINE(  77)			this->gl->useProgram(shader->glProgram);
HXLINE(  78)			this->currentShader->_hx___enable();
            		}
            	}


void GLShaderManager_obj::updateShader( ::openfl::display::Shader shader){
            	HX_STACKFRAME(&_hx_pos_4011e13d990b097c_87_updateShader)
HXDLIN(  87)		if (hx::IsNotNull( this->currentShader )) {
HXLINE(  89)			this->currentShader->_hx___update();
            		}
            	}



hx::ObjectPtr< GLShaderManager_obj > GLShaderManager_obj::__new( ::lime::_backend::native::NativeGLRenderContext gl) {
	hx::ObjectPtr< GLShaderManager_obj > __this = new GLShaderManager_obj();
	__this->__construct(gl);
	return __this;
}

hx::ObjectPtr< GLShaderManager_obj > GLShaderManager_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::_backend::native::NativeGLRenderContext gl) {
	GLShaderManager_obj *__this = (GLShaderManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLShaderManager_obj), true, "openfl._internal.renderer.opengl.GLShaderManager"));
	*(void **)__this = GLShaderManager_obj::_hx_vtable;
	__this->__construct(gl);
	return __this;
}

GLShaderManager_obj::GLShaderManager_obj()
{
}

void GLShaderManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLShaderManager);
	HX_MARK_MEMBER_NAME(gl,"gl");
	 ::openfl::_internal::renderer::AbstractShaderManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLShaderManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	 ::openfl::_internal::renderer::AbstractShaderManager_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLShaderManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setShader") ) { return hx::Val( setShader_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initShader") ) { return hx::Val( initShader_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateShader") ) { return hx::Val( updateShader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLShaderManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLShaderManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLShaderManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLShaderManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLShaderManager_obj_sStaticStorageInfo = 0;
#endif

static ::String GLShaderManager_obj_sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("initShader","\x55","\x1a","\x66","\x21"),
	HX_HCSTRING("setShader","\x67","\x34","\xc8","\x7c"),
	HX_HCSTRING("updateShader","\x0e","\x66","\xe4","\x1c"),
	::String(null()) };

static void GLShaderManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShaderManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLShaderManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShaderManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShaderManager_obj::__mClass;

void GLShaderManager_obj::__register()
{
	hx::Object *dummy = new GLShaderManager_obj;
	GLShaderManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLShaderManager","\xff","\x63","\x2d","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLShaderManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLShaderManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLShaderManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLShaderManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLShaderManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLShaderManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
