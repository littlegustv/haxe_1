// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#include <openfl/_internal/renderer/cairo/CairoBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c141c49e61a6a76a_27_new,"openfl._internal.renderer.cairo.CairoRenderer","new",0x7d599cdc,"openfl._internal.renderer.cairo.CairoRenderer.new","openfl/_internal/renderer/cairo/CairoRenderer.hx",27,0x849037d4)
HX_LOCAL_STACK_FRAME(_hx_pos_c141c49e61a6a76a_47_clear,"openfl._internal.renderer.cairo.CairoRenderer","clear",0x6bca5509,"openfl._internal.renderer.cairo.CairoRenderer.clear","openfl/_internal/renderer/cairo/CairoRenderer.hx",47,0x849037d4)
HX_LOCAL_STACK_FRAME(_hx_pos_c141c49e61a6a76a_63_render,"openfl._internal.renderer.cairo.CairoRenderer","render",0xe2c1945a,"openfl._internal.renderer.cairo.CairoRenderer.render","openfl/_internal/renderer/cairo/CairoRenderer.hx",63,0x849037d4)
HX_LOCAL_STACK_FRAME(_hx_pos_c141c49e61a6a76a_74_renderStage3D,"openfl._internal.renderer.cairo.CairoRenderer","renderStage3D",0xa83075b5,"openfl._internal.renderer.cairo.CairoRenderer.renderStage3D","openfl/_internal/renderer/cairo/CairoRenderer.hx",74,0x849037d4)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoRenderer_obj::__construct( ::openfl::display::Stage stage, ::lime::graphics::cairo::Cairo cairo){
            	HX_GC_STACKFRAME(&_hx_pos_c141c49e61a6a76a_27_new)
HXLINE(  29)		super::__construct(stage);
HXLINE(  32)		this->cairo = cairo;
HXLINE(  34)		this->renderSession =  ::openfl::_internal::renderer::RenderSession_obj::__alloc( HX_CTX );
HXLINE(  35)		this->renderSession->clearRenderDirty = true;
HXLINE(  36)		this->renderSession->cairo = cairo;
HXLINE(  38)		this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
HXLINE(  39)		this->renderSession->renderType = ::lime::graphics::RendererType_obj::CAIRO_dyn();
HXLINE(  40)		this->renderSession->maskManager =  ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__alloc( HX_CTX ,this->renderSession);
HXLINE(  41)		this->renderSession->blendModeManager =  ::openfl::_internal::renderer::cairo::CairoBlendModeManager_obj::__alloc( HX_CTX ,this->renderSession);
            	}

Dynamic CairoRenderer_obj::__CreateEmpty() { return new CairoRenderer_obj; }

void *CairoRenderer_obj::_hx_vtable = 0;

Dynamic CairoRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoRenderer_obj > _hx_result = new CairoRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CairoRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a6c56d2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3a6c56d2;
	} else {
		return inClassId==(int)0x58060c34;
	}
}

void CairoRenderer_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_c141c49e61a6a76a_47_clear)
HXLINE(  49)		if (hx::IsNull( this->cairo )) {
HXLINE(  49)			return;
            		}
HXLINE(  51)		this->cairo->identityMatrix();
HXLINE(  53)		if (this->stage->_hx___clearBeforeRender) {
HXLINE(  55)			 ::lime::graphics::cairo::Cairo _hx_tmp = this->cairo;
HXDLIN(  55)			Float _hx_tmp1 = this->stage->_hx___colorSplit->__get((int)0);
HXDLIN(  55)			Float _hx_tmp2 = this->stage->_hx___colorSplit->__get((int)1);
HXDLIN(  55)			_hx_tmp->setSourceRGB(_hx_tmp1,_hx_tmp2,this->stage->_hx___colorSplit->__get((int)2));
HXLINE(  56)			this->cairo->paint();
            		}
            	}


void CairoRenderer_obj::render(){
            	HX_STACKFRAME(&_hx_pos_c141c49e61a6a76a_63_render)
HXLINE(  65)		if (hx::IsNull( this->cairo )) {
HXLINE(  65)			return;
            		}
HXLINE(  67)		this->renderSession->allowSmoothing = hx::IsNotEq( this->stage->quality,(int)2 );
HXLINE(  69)		this->stage->_hx___renderCairo(this->renderSession);
            	}


void CairoRenderer_obj::renderStage3D(){
            	HX_STACKFRAME(&_hx_pos_c141c49e61a6a76a_74_renderStage3D)
HXLINE(  76)		if (hx::IsNull( this->cairo )) {
HXLINE(  76)			return;
            		}
HXLINE(  78)		{
HXLINE(  78)			int _g = (int)0;
HXDLIN(  78)			 ::openfl::_Vector::AbstractVector _g1 = this->stage->stage3Ds;
HXDLIN(  78)			while((_g < ::openfl::_Vector::IVector_obj::get_length(_g1->data))){
HXLINE(  78)				 ::openfl::display::Stage3D stage3D = ( ( ::openfl::display::Stage3D)(::openfl::_Vector::IVector_obj::get(_g1->data,_g)) );
HXDLIN(  78)				_g = (_g + (int)1);
HXLINE(  80)				stage3D->_hx___renderCairo(this->stage,this->renderSession);
            			}
            		}
            	}



hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__new( ::openfl::display::Stage stage, ::lime::graphics::cairo::Cairo cairo) {
	hx::ObjectPtr< CairoRenderer_obj > __this = new CairoRenderer_obj();
	__this->__construct(stage,cairo);
	return __this;
}

hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage stage, ::lime::graphics::cairo::Cairo cairo) {
	CairoRenderer_obj *__this = (CairoRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CairoRenderer_obj), true, "openfl._internal.renderer.cairo.CairoRenderer"));
	*(void **)__this = CairoRenderer_obj::_hx_vtable;
	__this->__construct(stage,cairo);
	return __this;
}

CairoRenderer_obj::CairoRenderer_obj()
{
}

void CairoRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoRenderer);
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CairoRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CairoRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return hx::Val( cairo ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderStage3D") ) { return hx::Val( renderStage3D_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CairoRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CairoRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(CairoRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CairoRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CairoRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderStage3D","\x39","\xb6","\xb7","\x29"),
	::String(null()) };

static void CairoRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoRenderer_obj::__mClass;

void CairoRenderer_obj::__register()
{
	hx::Object *dummy = new CairoRenderer_obj;
	CairoRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoRenderer","\xea","\x3e","\x63","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CairoRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
