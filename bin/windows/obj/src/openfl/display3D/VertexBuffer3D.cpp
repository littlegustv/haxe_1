// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLVertexBuffer3D
#include <openfl/_internal/stage3D/opengl/GLVertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8e0849c8e2179fab_35_new,"openfl.display3D.VertexBuffer3D","new",0xf0b52080,"openfl.display3D.VertexBuffer3D.new","openfl/display3D/VertexBuffer3D.hx",35,0xb1ad396e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0849c8e2179fab_48_dispose,"openfl.display3D.VertexBuffer3D","dispose",0x6b6860bf,"openfl.display3D.VertexBuffer3D.dispose","openfl/display3D/VertexBuffer3D.hx",48,0xb1ad396e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0849c8e2179fab_55_uploadFromByteArray,"openfl.display3D.VertexBuffer3D","uploadFromByteArray",0x0096a806,"openfl.display3D.VertexBuffer3D.uploadFromByteArray","openfl/display3D/VertexBuffer3D.hx",55,0xb1ad396e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0849c8e2179fab_62_uploadFromTypedArray,"openfl.display3D.VertexBuffer3D","uploadFromTypedArray",0xeb97089a,"openfl.display3D.VertexBuffer3D.uploadFromTypedArray","openfl/display3D/VertexBuffer3D.hx",62,0xb1ad396e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0849c8e2179fab_69_uploadFromVector,"openfl.display3D.VertexBuffer3D","uploadFromVector",0xcf228b0e,"openfl.display3D.VertexBuffer3D.uploadFromVector","openfl/display3D/VertexBuffer3D.hx",69,0xb1ad396e)
namespace openfl{
namespace display3D{

void VertexBuffer3D_obj::__construct( ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage){
            	HX_STACKFRAME(&_hx_pos_8e0849c8e2179fab_35_new)
HXLINE(  37)		this->_hx___context = context3D;
HXLINE(  38)		this->_hx___numVertices = numVertices;
HXLINE(  39)		this->_hx___vertexSize = dataPerVertex;
HXLINE(  41)		 ::openfl::_internal::renderer::RenderSession _hx_tmp = this->_hx___context->_hx___renderSession;
HXDLIN(  41)		::openfl::_internal::stage3D::opengl::GLVertexBuffer3D_obj::create(hx::ObjectPtr<OBJ_>(this),_hx_tmp,::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::fromString(bufferUsage));
            	}

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return new VertexBuffer3D_obj; }

void *VertexBuffer3D_obj::_hx_vtable = 0;

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VertexBuffer3D_obj > _hx_result = new VertexBuffer3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool VertexBuffer3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e9235a8;
}

void VertexBuffer3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8e0849c8e2179fab_48_dispose)
HXDLIN(  48)		::openfl::_internal::stage3D::opengl::GLVertexBuffer3D_obj::dispose(hx::ObjectPtr<OBJ_>(this),this->_hx___context->_hx___renderSession);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))

void VertexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startVertex,int numVertices){
            	HX_STACKFRAME(&_hx_pos_8e0849c8e2179fab_55_uploadFromByteArray)
HXDLIN(  55)		::openfl::_internal::stage3D::opengl::GLVertexBuffer3D_obj::uploadFromByteArray(hx::ObjectPtr<OBJ_>(this),this->_hx___context->_hx___renderSession,data,byteArrayOffset,startVertex,numVertices);
            	}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

void VertexBuffer3D_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_byteLength){
int byteLength = __o_byteLength.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8e0849c8e2179fab_62_uploadFromTypedArray)
HXDLIN(  62)		::openfl::_internal::stage3D::opengl::GLVertexBuffer3D_obj::uploadFromTypedArray(hx::ObjectPtr<OBJ_>(this),this->_hx___context->_hx___renderSession,data);
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer3D_obj,uploadFromTypedArray,(void))

void VertexBuffer3D_obj::uploadFromVector( ::openfl::_Vector::AbstractVector data,int startVertex,int numVertices){
            	HX_STACKFRAME(&_hx_pos_8e0849c8e2179fab_69_uploadFromVector)
HXDLIN(  69)		::openfl::_internal::stage3D::opengl::GLVertexBuffer3D_obj::uploadFromVector(hx::ObjectPtr<OBJ_>(this),this->_hx___context->_hx___renderSession,data,startVertex,numVertices);
            	}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))


hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new( ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage) {
	hx::ObjectPtr< VertexBuffer3D_obj > __this = new VertexBuffer3D_obj();
	__this->__construct(context3D,numVertices,dataPerVertex,bufferUsage);
	return __this;
}

hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage) {
	VertexBuffer3D_obj *__this = (VertexBuffer3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VertexBuffer3D_obj), true, "openfl.display3D.VertexBuffer3D"));
	*(void **)__this = VertexBuffer3D_obj::_hx_vtable;
	__this->__construct(context3D,numVertices,dataPerVertex,bufferUsage);
	return __this;
}

VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_MEMBER_NAME(_hx___id,"__id");
	HX_MARK_MEMBER_NAME(_hx___memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(_hx___numVertices,"__numVertices");
	HX_MARK_MEMBER_NAME(_hx___stride,"__stride");
	HX_MARK_MEMBER_NAME(_hx___tempFloat32Array,"__tempFloat32Array");
	HX_MARK_MEMBER_NAME(_hx___usage,"__usage");
	HX_MARK_MEMBER_NAME(_hx___vertexSize,"__vertexSize");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
	HX_VISIT_MEMBER_NAME(_hx___id,"__id");
	HX_VISIT_MEMBER_NAME(_hx___memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(_hx___numVertices,"__numVertices");
	HX_VISIT_MEMBER_NAME(_hx___stride,"__stride");
	HX_VISIT_MEMBER_NAME(_hx___tempFloat32Array,"__tempFloat32Array");
	HX_VISIT_MEMBER_NAME(_hx___usage,"__usage");
	HX_VISIT_MEMBER_NAME(_hx___vertexSize,"__vertexSize");
}

hx::Val VertexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return hx::Val( _hx___id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return hx::Val( _hx___data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { return hx::Val( _hx___usage ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__stride") ) { return hx::Val( _hx___stride ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return hx::Val( _hx___context ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexSize") ) { return hx::Val( _hx___vertexSize ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return hx::Val( _hx___memoryUsage ); }
		if (HX_FIELD_EQ(inName,"__numVertices") ) { return hx::Val( _hx___numVertices ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return hx::Val( uploadFromVector_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__tempFloat32Array") ) { return hx::Val( _hx___tempFloat32Array ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VertexBuffer3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { _hx___id=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast<  ::openfl::_Vector::AbstractVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { _hx___usage=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__stride") ) { _hx___stride=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexSize") ) { _hx___vertexSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { _hx___memoryUsage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__numVertices") ) { _hx___numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__tempFloat32Array") ) { _hx___tempFloat32Array=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	outFields->push(HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e"));
	outFields->push(HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9"));
	outFields->push(HX_HCSTRING("__tempFloat32Array","\xb2","\xe6","\xd3","\x6c"));
	outFields->push(HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"));
	outFields->push(HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VertexBuffer3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(VertexBuffer3D_obj,_hx___context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(int)offsetof(VertexBuffer3D_obj,_hx___data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(VertexBuffer3D_obj,_hx___id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___memoryUsage),HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___numVertices),HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___stride),HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(VertexBuffer3D_obj,_hx___tempFloat32Array),HX_HCSTRING("__tempFloat32Array","\xb2","\xe6","\xd3","\x6c")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___usage),HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___vertexSize),HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VertexBuffer3D_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexBuffer3D_obj_sMemberFields[] = {
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"),
	HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e"),
	HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9"),
	HX_HCSTRING("__tempFloat32Array","\xb2","\xe6","\xd3","\x6c"),
	HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"),
	HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void VertexBuffer3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VertexBuffer3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	hx::Object *dummy = new VertexBuffer3D_obj;
	VertexBuffer3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.VertexBuffer3D","\x8e","\x20","\x03","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VertexBuffer3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VertexBuffer3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VertexBuffer3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexBuffer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexBuffer3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
