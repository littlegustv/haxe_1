// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginFillView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/BeginFillView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c497896f47a8f539_249__new,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_","_new",0xff2dc446,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",249,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c497896f47a8f539_250_get_color,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_","get_color",0x83ba00b5,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_.get_color","openfl/_internal/renderer/DrawCommandReader.hx",250,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c497896f47a8f539_251_get_alpha,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_","get_alpha",0x5af436b0,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_.get_alpha","openfl/_internal/renderer/DrawCommandReader.hx",251,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void BeginFillView_Impl__obj::__construct() { }

Dynamic BeginFillView_Impl__obj::__CreateEmpty() { return new BeginFillView_Impl__obj; }

void *BeginFillView_Impl__obj::_hx_vtable = 0;

Dynamic BeginFillView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BeginFillView_Impl__obj > _hx_result = new BeginFillView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BeginFillView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16e78797;
}

 ::openfl::_internal::renderer::DrawCommandReader BeginFillView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_c497896f47a8f539_249__new)
HXDLIN( 249)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 249)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,_new,return )

int BeginFillView_Impl__obj::get_color( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_c497896f47a8f539_250_get_color)
HXDLIN( 250)		return this1->buffer->i->__get(this1->iPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,get_color,return )

Float BeginFillView_Impl__obj::get_alpha( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_c497896f47a8f539_251_get_alpha)
HXDLIN( 251)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,get_alpha,return )


BeginFillView_Impl__obj::BeginFillView_Impl__obj()
{
}

bool BeginFillView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BeginFillView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BeginFillView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void BeginFillView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BeginFillView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BeginFillView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BeginFillView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class BeginFillView_Impl__obj::__mClass;

static ::String BeginFillView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	::String(null())
};

void BeginFillView_Impl__obj::__register()
{
	hx::Object *dummy = new BeginFillView_Impl__obj;
	BeginFillView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_","\xa9","\x1b","\xae","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BeginFillView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BeginFillView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BeginFillView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BeginFillView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BeginFillView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BeginFillView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BeginFillView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
