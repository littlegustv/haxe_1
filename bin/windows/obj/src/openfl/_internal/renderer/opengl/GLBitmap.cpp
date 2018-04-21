// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskShader
#include <openfl/_internal/renderer/opengl/GLMaskShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IShaderDrawable
#include <openfl/display/IShaderDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9c60723403252d5b_28_render,"openfl._internal.renderer.opengl.GLBitmap","render",0x8d0c282c,"openfl._internal.renderer.opengl.GLBitmap.render","openfl/_internal/renderer/opengl/GLBitmap.hx",28,0x02850ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_9c60723403252d5b_87_renderMask,"openfl._internal.renderer.opengl.GLBitmap","renderMask",0x93111b38,"openfl._internal.renderer.opengl.GLBitmap.renderMask","openfl/_internal/renderer/opengl/GLBitmap.hx",87,0x02850ac4)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLBitmap_obj::__construct() { }

Dynamic GLBitmap_obj::__CreateEmpty() { return new GLBitmap_obj; }

void *GLBitmap_obj::_hx_vtable = 0;

Dynamic GLBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLBitmap_obj > _hx_result = new GLBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ef700ce;
}

void GLBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_9c60723403252d5b_28_render)
HXLINE(  30)		bool _hx_tmp;
HXDLIN(  30)		if (!(!(bitmap->_hx___renderable))) {
HXLINE(  30)			_hx_tmp = (bitmap->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  30)			_hx_tmp = true;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  30)			return;
            		}
HXLINE(  32)		bool _hx_tmp1;
HXDLIN(  32)		if (hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXLINE(  32)			_hx_tmp1 = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXLINE(  32)			_hx_tmp1 = false;
            		}
HXDLIN(  32)		if (_hx_tmp1) {
HXLINE(  34)			 ::openfl::_internal::renderer::opengl::GLRenderer renderer = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXLINE(  35)			 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXLINE(  37)			renderSession->blendModeManager->setBlendMode(bitmap->_hx___worldBlendMode);
HXLINE(  38)			renderSession->maskManager->pushObject(bitmap,null());
HXLINE(  40)			renderSession->filterManager->pushObject(bitmap);
HXLINE(  42)			 ::openfl::display::Shader shader = renderSession->shaderManager->initShader(bitmap->shader);
HXLINE(  43)			renderSession->shaderManager->setShader(shader);
HXLINE(  45)			shader->get_data()->uImage0->input = bitmap->_hx___bitmapData;
HXLINE(  46)			bool _hx_tmp2;
HXDLIN(  46)			if (renderSession->allowSmoothing) {
HXLINE(  46)				if (!(bitmap->smoothing)) {
HXLINE(  46)					_hx_tmp2 = renderSession->upscaled;
            				}
            				else {
HXLINE(  46)					_hx_tmp2 = true;
            				}
            			}
            			else {
HXLINE(  46)				_hx_tmp2 = false;
            			}
HXDLIN(  46)			shader->get_data()->uImage0->smoothing = _hx_tmp2;
HXLINE(  47)			shader->get_data()->uMatrix->value = renderer->getMatrix(bitmap->_hx___renderTransform);
HXLINE(  49)			bool useColorTransform = !(bitmap->_hx___worldColorTransform->_hx___isDefault());
HXLINE(  50)			if (hx::IsNull(  ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("uColorTransform",de,6e,95,6e),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) )) {
HXLINE(  50)				 ::Dynamic(shader->get_data()->__Field(HX_("uColorTransform",de,6e,95,6e),hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),::cpp::VirtualArray_obj::__new(0),hx::paccDynamic);
            			}
HXLINE(  51)			 ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("uColorTransform",de,6e,95,6e),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic))->__SetItem((int)0,useColorTransform);
HXLINE(  53)			renderSession->shaderManager->updateShader(shader);
HXLINE(  55)			int gl1 = gl->ARRAY_BUFFER;
HXDLIN(  55)			gl->bindBuffer(gl1,bitmap->_hx___bitmapData->getBuffer(gl,bitmap->_hx___worldAlpha,bitmap->_hx___worldColorTransform));
HXLINE(  57)			int _hx_tmp3 = shader->get_data()->aPosition->index;
HXDLIN(  57)			int gl2 = gl->FLOAT;
HXDLIN(  57)			gl->vertexAttribPointer(_hx_tmp3,(int)3,gl2,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
HXLINE(  58)			int _hx_tmp4 = shader->get_data()->aTexCoord->index;
HXDLIN(  58)			int gl3 = gl->FLOAT;
HXDLIN(  58)			gl->vertexAttribPointer(_hx_tmp4,(int)2,gl3,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
HXLINE(  59)			int _hx_tmp5 = shader->get_data()->aAlpha->index;
HXDLIN(  59)			int gl4 = gl->FLOAT;
HXDLIN(  59)			gl->vertexAttribPointer(_hx_tmp5,(int)1,gl4,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)20));
HXLINE(  61)			{
HXLINE(  63)				 ::Dynamic _hx_tmp6 =  ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("aColorMultipliers0",80,f6,6a,dd),hx::paccDynamic))->__Field(HX_("index",12,9b,14,be),hx::paccDynamic));
HXDLIN(  63)				int gl5 = gl->FLOAT;
HXDLIN(  63)				gl->vertexAttribPointer(( (int)(_hx_tmp6) ),(int)4,gl5,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)24));
HXLINE(  64)				 ::Dynamic _hx_tmp7 =  ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("aColorMultipliers1",81,f6,6a,dd),hx::paccDynamic))->__Field(HX_("index",12,9b,14,be),hx::paccDynamic));
HXDLIN(  64)				int gl6 = gl->FLOAT;
HXDLIN(  64)				gl->vertexAttribPointer(( (int)(_hx_tmp7) ),(int)4,gl6,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)40));
HXLINE(  65)				 ::Dynamic _hx_tmp8 =  ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("aColorMultipliers2",82,f6,6a,dd),hx::paccDynamic))->__Field(HX_("index",12,9b,14,be),hx::paccDynamic));
HXDLIN(  65)				int gl7 = gl->FLOAT;
HXDLIN(  65)				gl->vertexAttribPointer(( (int)(_hx_tmp8) ),(int)4,gl7,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)56));
HXLINE(  66)				 ::Dynamic _hx_tmp9 =  ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("aColorMultipliers3",83,f6,6a,dd),hx::paccDynamic))->__Field(HX_("index",12,9b,14,be),hx::paccDynamic));
HXDLIN(  66)				int gl8 = gl->FLOAT;
HXDLIN(  66)				gl->vertexAttribPointer(( (int)(_hx_tmp9) ),(int)4,gl8,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)72));
HXLINE(  67)				 ::Dynamic _hx_tmp10 =  ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("aColorOffsets",5e,dc,bd,36),hx::paccDynamic))->__Field(HX_("index",12,9b,14,be),hx::paccDynamic));
HXDLIN(  67)				int gl9 = gl->FLOAT;
HXDLIN(  67)				gl->vertexAttribPointer(( (int)(_hx_tmp10) ),(int)4,gl9,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)88));
            			}
HXLINE(  71)			gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXLINE(  77)			renderSession->filterManager->popObject(bitmap);
HXLINE(  78)			renderSession->maskManager->popObject(bitmap,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,render,(void))

void GLBitmap_obj::renderMask( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_9c60723403252d5b_87_renderMask)
HXDLIN(  87)		bool _hx_tmp;
HXDLIN(  87)		if (hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXDLIN(  87)			_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXDLIN(  87)			_hx_tmp = false;
            		}
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  89)			 ::openfl::_internal::renderer::opengl::GLRenderer renderer = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXLINE(  90)			 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXLINE(  92)			 ::openfl::_internal::renderer::opengl::GLMaskShader shader = ::openfl::_internal::renderer::opengl::GLMaskManager_obj::maskShader;
HXLINE(  93)			renderSession->shaderManager->setShader(shader);
HXLINE(  95)			shader->get_data()->uImage0->input = bitmap->_hx___bitmapData;
HXLINE(  96)			bool _hx_tmp1;
HXDLIN(  96)			if (renderSession->allowSmoothing) {
HXLINE(  96)				if (!(bitmap->smoothing)) {
HXLINE(  96)					_hx_tmp1 = renderSession->upscaled;
            				}
            				else {
HXLINE(  96)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE(  96)				_hx_tmp1 = false;
            			}
HXDLIN(  96)			shader->get_data()->uImage0->smoothing = _hx_tmp1;
HXLINE(  97)			shader->get_data()->uMatrix->value = renderer->getMatrix(bitmap->_hx___renderTransform);
HXLINE(  99)			renderSession->shaderManager->updateShader(shader);
HXLINE( 101)			int gl1 = gl->ARRAY_BUFFER;
HXDLIN( 101)			gl->bindBuffer(gl1,bitmap->_hx___bitmapData->getBuffer(gl,bitmap->_hx___worldAlpha,bitmap->_hx___worldColorTransform));
HXLINE( 103)			int _hx_tmp2 = shader->get_data()->aPosition->index;
HXDLIN( 103)			int gl2 = gl->FLOAT;
HXDLIN( 103)			gl->vertexAttribPointer(_hx_tmp2,(int)3,gl2,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
HXLINE( 104)			int _hx_tmp3 = shader->get_data()->aTexCoord->index;
HXDLIN( 104)			int gl3 = gl->FLOAT;
HXDLIN( 104)			gl->vertexAttribPointer(_hx_tmp3,(int)2,gl3,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
HXLINE( 106)			gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,renderMask,(void))


GLBitmap_obj::GLBitmap_obj()
{
}

bool GLBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLBitmap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLBitmap_obj_sStaticStorageInfo = 0;
#endif

static void GLBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBitmap_obj::__mClass;

static ::String GLBitmap_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null())
};

void GLBitmap_obj::__register()
{
	hx::Object *dummy = new GLBitmap_obj;
	GLBitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBitmap","\xd8","\x64","\xbd","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLBitmap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
