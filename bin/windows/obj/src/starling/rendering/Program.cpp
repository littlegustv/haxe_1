// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_
#include <openfl/display3D/_Context3DProgramType/Context3DProgramType_Impl_.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_utils_AGALMiniAssembler
#include <openfl/utils/AGALMiniAssembler.h>
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
#ifndef INCLUDED_starling_core_Starling
#include <starling/core/Starling.h>
#endif
#ifndef INCLUDED_starling_errors_MissingContextError
#include <starling/errors/MissingContextError.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_starling_rendering_Program
#include <starling/rendering/Program.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2c5faa67aef8b3dd_45_new,"starling.rendering.Program","new",0xc64de50e,"starling.rendering.Program.new","starling/rendering/Program.hx",45,0x9c77c7e4)
HX_LOCAL_STACK_FRAME(_hx_pos_2c5faa67aef8b3dd_56_dispose,"starling.rendering.Program","dispose",0x3999844d,"starling.rendering.Program.dispose","starling/rendering/Program.hx",56,0x9c77c7e4)
HX_LOCAL_STACK_FRAME(_hx_pos_2c5faa67aef8b3dd_73_activate,"starling.rendering.Program","activate",0xeac25045,"starling.rendering.Program.activate","starling/rendering/Program.hx",73,0x9c77c7e4)
HX_LOCAL_STACK_FRAME(_hx_pos_2c5faa67aef8b3dd_91_onContextCreated,"starling.rendering.Program","onContextCreated",0x231797ca,"starling.rendering.Program.onContextCreated","starling/rendering/Program.hx",91,0x9c77c7e4)
HX_LOCAL_STACK_FRAME(_hx_pos_2c5faa67aef8b3dd_96_disposeProgram,"starling.rendering.Program","disposeProgram",0x13d5c1b7,"starling.rendering.Program.disposeProgram","starling/rendering/Program.hx",96,0x9c77c7e4)
HX_LOCAL_STACK_FRAME(_hx_pos_2c5faa67aef8b3dd_65_fromSource,"starling.rendering.Program","fromSource",0x93efb2f7,"starling.rendering.Program.fromSource","starling/rendering/Program.hx",65,0x9c77c7e4)
HX_LOCAL_STACK_FRAME(_hx_pos_2c5faa67aef8b3dd_41_boot,"starling.rendering.Program","boot",0xb5f387c4,"starling.rendering.Program.boot","starling/rendering/Program.hx",41,0x9c77c7e4)
namespace starling{
namespace rendering{

void Program_obj::__construct( ::openfl::utils::ByteArrayData vertexShader, ::openfl::utils::ByteArrayData fragmentShader){
            	HX_STACKFRAME(&_hx_pos_2c5faa67aef8b3dd_45_new)
HXLINE(  46)		this->_vertexShader = vertexShader;
HXLINE(  47)		this->_fragmentShader = fragmentShader;
HXLINE(  50)		::starling::core::Starling_obj::get_current()->get_stage3D()->addEventListener(HX_("context3DCreate",7c,bf,59,7b),this->onContextCreated_dyn(),false,(int)30,true);
            	}

Dynamic Program_obj::__CreateEmpty() { return new Program_obj; }

void *Program_obj::_hx_vtable = 0;

Dynamic Program_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Program_obj > _hx_result = new Program_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Program_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a15c4c4;
}

void Program_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_2c5faa67aef8b3dd_56_dispose)
HXLINE(  57)		::starling::core::Starling_obj::get_current()->get_stage3D()->removeEventListener(HX_("context3DCreate",7c,bf,59,7b),this->onContextCreated_dyn(),null());
HXLINE(  58)		this->disposeProgram();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program_obj,dispose,(void))

void Program_obj::activate( ::openfl::display3D::Context3D context){
            	HX_GC_STACKFRAME(&_hx_pos_2c5faa67aef8b3dd_73_activate)
HXLINE(  74)		if (hx::IsNull( context )) {
HXLINE(  76)			context = ::starling::core::Starling_obj::get_current()->get_context();
HXLINE(  77)			if (hx::IsNull( context )) {
HXLINE(  77)				HX_STACK_DO_THROW( ::starling::errors::MissingContextError_obj::__alloc( HX_CTX ,null(),null()));
            			}
            		}
HXLINE(  80)		if (hx::IsNull( this->_program3D )) {
HXLINE(  82)			this->_program3D = context->createProgram();
HXLINE(  83)			this->_program3D->upload(this->_vertexShader,this->_fragmentShader);
            		}
HXLINE(  86)		context->setProgram(this->_program3D);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,activate,(void))

void Program_obj::onContextCreated( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_2c5faa67aef8b3dd_91_onContextCreated)
HXDLIN(  91)		this->disposeProgram();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,onContextCreated,(void))

void Program_obj::disposeProgram(){
            	HX_STACKFRAME(&_hx_pos_2c5faa67aef8b3dd_96_disposeProgram)
HXDLIN(  96)		if (hx::IsNotNull( this->_program3D )) {
HXLINE(  98)			this->_program3D->dispose();
HXLINE(  99)			this->_program3D = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program_obj,disposeProgram,(void))

 ::openfl::utils::AGALMiniAssembler Program_obj::sAssembler;

 ::starling::rendering::Program Program_obj::fromSource(::String vertexShader,::String fragmentShader,hx::Null< int >  __o_agalVersion){
int agalVersion = __o_agalVersion.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_2c5faa67aef8b3dd_65_fromSource)
HXLINE(  66)		 ::openfl::utils::AGALMiniAssembler _hx_tmp = ::starling::rendering::Program_obj::sAssembler;
HXDLIN(  66)		 ::openfl::utils::ByteArrayData _hx_tmp1 = _hx_tmp->assemble(::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString((int)1),vertexShader,agalVersion,null());
HXLINE(  67)		 ::openfl::utils::AGALMiniAssembler _hx_tmp2 = ::starling::rendering::Program_obj::sAssembler;
HXLINE(  65)		return  ::starling::rendering::Program_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp2->assemble(::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString((int)0),fragmentShader,agalVersion,null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Program_obj,fromSource,return )


hx::ObjectPtr< Program_obj > Program_obj::__new( ::openfl::utils::ByteArrayData vertexShader, ::openfl::utils::ByteArrayData fragmentShader) {
	hx::ObjectPtr< Program_obj > __this = new Program_obj();
	__this->__construct(vertexShader,fragmentShader);
	return __this;
}

hx::ObjectPtr< Program_obj > Program_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData vertexShader, ::openfl::utils::ByteArrayData fragmentShader) {
	Program_obj *__this = (Program_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Program_obj), true, "starling.rendering.Program"));
	*(void **)__this = Program_obj::_hx_vtable;
	__this->__construct(vertexShader,fragmentShader);
	return __this;
}

Program_obj::Program_obj()
{
}

void Program_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program);
	HX_MARK_MEMBER_NAME(_vertexShader,"_vertexShader");
	HX_MARK_MEMBER_NAME(_fragmentShader,"_fragmentShader");
	HX_MARK_MEMBER_NAME(_program3D,"_program3D");
	HX_MARK_END_CLASS();
}

void Program_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_vertexShader,"_vertexShader");
	HX_VISIT_MEMBER_NAME(_fragmentShader,"_fragmentShader");
	HX_VISIT_MEMBER_NAME(_program3D,"_program3D");
}

hx::Val Program_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return hx::Val( activate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_program3D") ) { return hx::Val( _program3D ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexShader") ) { return hx::Val( _vertexShader ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"disposeProgram") ) { return hx::Val( disposeProgram_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fragmentShader") ) { return hx::Val( _fragmentShader ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onContextCreated") ) { return hx::Val( onContextCreated_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Program_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sAssembler") ) { outValue = ( sAssembler ); return true; }
		if (HX_FIELD_EQ(inName,"fromSource") ) { outValue = fromSource_dyn(); return true; }
	}
	return false;
}

hx::Val Program_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_program3D") ) { _program3D=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexShader") ) { _vertexShader=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fragmentShader") ) { _fragmentShader=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Program_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sAssembler") ) { sAssembler=ioValue.Cast<  ::openfl::utils::AGALMiniAssembler >(); return true; }
	}
	return false;
}

void Program_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_vertexShader","\x88","\x44","\xa4","\x9f"));
	outFields->push(HX_HCSTRING("_fragmentShader","\xb4","\x97","\x3c","\x83"));
	outFields->push(HX_HCSTRING("_program3D","\xf6","\x9b","\x66","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Program_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(Program_obj,_vertexShader),HX_HCSTRING("_vertexShader","\x88","\x44","\xa4","\x9f")},
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(Program_obj,_fragmentShader),HX_HCSTRING("_fragmentShader","\xb4","\x97","\x3c","\x83")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Program_obj,_program3D),HX_HCSTRING("_program3D","\xf6","\x9b","\x66","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Program_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::AGALMiniAssembler*/ ,(void *) &Program_obj::sAssembler,HX_HCSTRING("sAssembler","\x2d","\x00","\x5f","\xb6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Program_obj_sMemberFields[] = {
	HX_HCSTRING("_vertexShader","\x88","\x44","\xa4","\x9f"),
	HX_HCSTRING("_fragmentShader","\xb4","\x97","\x3c","\x83"),
	HX_HCSTRING("_program3D","\xf6","\x9b","\x66","\x38"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("onContextCreated","\x38","\x81","\xff","\xc0"),
	HX_HCSTRING("disposeProgram","\xa5","\xd3","\xe2","\x06"),
	::String(null()) };

static void Program_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Program_obj::sAssembler,"sAssembler");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Program_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Program_obj::sAssembler,"sAssembler");
};

#endif

hx::Class Program_obj::__mClass;

static ::String Program_obj_sStaticFields[] = {
	HX_HCSTRING("sAssembler","\x2d","\x00","\x5f","\xb6"),
	HX_HCSTRING("fromSource","\xe5","\xb5","\x75","\x75"),
	::String(null())
};

void Program_obj::__register()
{
	hx::Object *dummy = new Program_obj;
	Program_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.rendering.Program","\x1c","\x06","\x5f","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Program_obj::__GetStatic;
	__mClass->mSetStaticField = &Program_obj::__SetStatic;
	__mClass->mMarkFunc = Program_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Program_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Program_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Program_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Program_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Program_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Program_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Program_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2c5faa67aef8b3dd_41_boot)
HXDLIN(  41)		sAssembler =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,null());
            	}
}

} // end namespace starling
} // end namespace rendering
