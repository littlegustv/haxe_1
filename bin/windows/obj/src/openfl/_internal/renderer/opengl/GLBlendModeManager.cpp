// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ed9b4ad78f3fb71e_21_new,"openfl._internal.renderer.opengl.GLBlendModeManager","new",0xd6095494,"openfl._internal.renderer.opengl.GLBlendModeManager.new","openfl/_internal/renderer/opengl/GLBlendModeManager.hx",21,0xe1d930ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ed9b4ad78f3fb71e_33_setBlendMode,"openfl._internal.renderer.opengl.GLBlendModeManager","setBlendMode",0xf121f99e,"openfl._internal.renderer.opengl.GLBlendModeManager.setBlendMode","openfl/_internal/renderer/opengl/GLBlendModeManager.hx",33,0xe1d930ba)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLBlendModeManager_obj::__construct( ::lime::_backend::native::NativeGLRenderContext gl){
            	HX_STACKFRAME(&_hx_pos_ed9b4ad78f3fb71e_21_new)
HXLINE(  23)		super::__construct();
HXLINE(  25)		this->gl = gl;
HXLINE(  27)		this->setBlendMode((int)10);
HXLINE(  28)		gl->enable(gl->BLEND);
            	}

Dynamic GLBlendModeManager_obj::__CreateEmpty() { return new GLBlendModeManager_obj; }

void *GLBlendModeManager_obj::_hx_vtable = 0;

Dynamic GLBlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLBlendModeManager_obj > _hx_result = new GLBlendModeManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GLBlendModeManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0310e86a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0310e86a;
	} else {
		return inClassId==(int)0x0a65a9fc;
	}
}

void GLBlendModeManager_obj::setBlendMode( ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_ed9b4ad78f3fb71e_33_setBlendMode)
HXLINE(  35)		if (hx::IsEq( this->currentBlendMode,blendMode )) {
HXLINE(  35)			return;
            		}
HXLINE(  37)		this->currentBlendMode = blendMode;
HXLINE(  39)		 ::Dynamic _hx_switch_0 = blendMode;
            		if (  (_hx_switch_0==(int)0) ){
HXLINE(  43)			this->gl->blendEquation(this->gl->FUNC_ADD);
HXLINE(  44)			this->gl->blendFunc(this->gl->ONE,this->gl->ONE);
HXLINE(  41)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)2) ){
HXLINE(  64)			this->gl->blendEquation((int)32775);
HXLINE(  65)			this->gl->blendFunc(this->gl->ONE,this->gl->ONE);
HXLINE(  62)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)8) ){
HXLINE(  69)			this->gl->blendEquation((int)32776);
HXLINE(  70)			this->gl->blendFunc(this->gl->ONE,this->gl->ONE);
HXLINE(  67)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)9) ){
HXLINE(  48)			this->gl->blendEquation(this->gl->FUNC_ADD);
HXLINE(  49)			this->gl->blendFunc(this->gl->DST_COLOR,this->gl->ONE_MINUS_SRC_ALPHA);
HXLINE(  46)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)12) ){
HXLINE(  53)			this->gl->blendEquation(this->gl->FUNC_ADD);
HXLINE(  54)			this->gl->blendFunc(this->gl->ONE,this->gl->ONE_MINUS_SRC_COLOR);
HXLINE(  51)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)14) ){
HXLINE(  58)			this->gl->blendEquation(this->gl->FUNC_REVERSE_SUBTRACT);
HXLINE(  59)			this->gl->blendFunc(this->gl->ONE,this->gl->ONE);
HXLINE(  56)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  75)			this->gl->blendEquation(this->gl->FUNC_ADD);
HXLINE(  76)			this->gl->blendFunc(this->gl->ONE,this->gl->ONE_MINUS_SRC_ALPHA);
            		}
            		_hx_goto_1:;
            	}



hx::ObjectPtr< GLBlendModeManager_obj > GLBlendModeManager_obj::__new( ::lime::_backend::native::NativeGLRenderContext gl) {
	hx::ObjectPtr< GLBlendModeManager_obj > __this = new GLBlendModeManager_obj();
	__this->__construct(gl);
	return __this;
}

hx::ObjectPtr< GLBlendModeManager_obj > GLBlendModeManager_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::_backend::native::NativeGLRenderContext gl) {
	GLBlendModeManager_obj *__this = (GLBlendModeManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLBlendModeManager_obj), true, "openfl._internal.renderer.opengl.GLBlendModeManager"));
	*(void **)__this = GLBlendModeManager_obj::_hx_vtable;
	__this->__construct(gl);
	return __this;
}

GLBlendModeManager_obj::GLBlendModeManager_obj()
{
}

void GLBlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLBlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void GLBlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

hx::Val GLBlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return hx::Val( setBlendMode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return hx::Val( currentBlendMode ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLBlendModeManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLBlendModeManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLBlendModeManager_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLBlendModeManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLBlendModeManager_obj_sStaticStorageInfo = 0;
#endif

static ::String GLBlendModeManager_obj_sMemberFields[] = {
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void GLBlendModeManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLBlendModeManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBlendModeManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBlendModeManager_obj::__mClass;

void GLBlendModeManager_obj::__register()
{
	hx::Object *dummy = new GLBlendModeManager_obj;
	GLBlendModeManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBlendModeManager","\xa2","\xba","\x7e","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLBlendModeManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLBlendModeManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBlendModeManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLBlendModeManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLBlendModeManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLBlendModeManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
