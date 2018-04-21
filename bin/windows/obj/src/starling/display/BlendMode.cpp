// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_
#include <openfl/display3D/_Context3DBlendFactor/Context3DBlendFactor_Impl_.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_starling_core_Starling
#include <starling/core/Starling.h>
#endif
#ifndef INCLUDED_starling_display_BlendMode
#include <starling/display/BlendMode.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f09ab1951591ad3c_61_new,"starling.display.BlendMode","new",0x418be3d4,"starling.display.BlendMode.new","starling/display/BlendMode.hx",61,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_151_activate,"starling.display.BlendMode","activate",0x62b503bf,"starling.display.BlendMode.activate","starling/display/BlendMode.hx",151,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_155_toString,"starling.display.BlendMode","toString",0xb577b8b8,"starling.display.BlendMode.toString","starling/display/BlendMode.hx",155,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_159_get_sourceFactor,"starling.display.BlendMode","get_sourceFactor",0x4e35149f,"starling.display.BlendMode.get_sourceFactor","starling/display/BlendMode.hx",159,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_163_get_destinationFactor,"starling.display.BlendMode","get_destinationFactor",0xac1cf948,"starling.display.BlendMode.get_destinationFactor","starling/display/BlendMode.hx",163,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_167_get_name,"starling.display.BlendMode","get_name",0x45c315e0,"starling.display.BlendMode.get_name","starling/display/BlendMode.hx",167,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_101_get,"starling.display.BlendMode","get",0x4186940a,"starling.display.BlendMode.get","starling/display/BlendMode.hx",101,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_110_getByFactors,"starling.display.BlendMode","getByFactors",0xce2de243,"starling.display.BlendMode.getByFactors","starling/display/BlendMode.hx",110,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_124_register,"starling.display.BlendMode","register",0x4da88e6f,"starling.display.BlendMode.register","starling/display/BlendMode.hx",124,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_132_registerDefaults,"starling.display.BlendMode","registerDefaults",0x1ddea221,"starling.display.BlendMode.registerDefaults","starling/display/BlendMode.hx",132,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_68_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",68,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_71_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",71,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_74_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",74,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_77_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",77,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_80_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",80,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_84_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",84,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_87_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",87,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_91_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",91,0xa6c8561e)
HX_LOCAL_STACK_FRAME(_hx_pos_f09ab1951591ad3c_94_boot,"starling.display.BlendMode","boot",0x10f4763e,"starling.display.BlendMode.boot","starling/display/BlendMode.hx",94,0xa6c8561e)
namespace starling{
namespace display{

void BlendMode_obj::__construct(::String name, ::Dynamic sourceFactor, ::Dynamic destinationFactor){
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_61_new)
HXLINE(  62)		this->_hx___name = name;
HXLINE(  63)		this->_hx___sourceFactor = sourceFactor;
HXLINE(  64)		this->_hx___destinationFactor = destinationFactor;
            	}

Dynamic BlendMode_obj::__CreateEmpty() { return new BlendMode_obj; }

void *BlendMode_obj::_hx_vtable = 0;

Dynamic BlendMode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BlendMode_obj > _hx_result = new BlendMode_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BlendMode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42ccf2c2;
}

void BlendMode_obj::activate(){
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_151_activate)
HXDLIN( 151)		::starling::core::Starling_obj::get_current()->get_context()->setBlendFactors(this->_hx___sourceFactor,this->_hx___destinationFactor);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlendMode_obj,activate,(void))

::String BlendMode_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_155_toString)
HXDLIN( 155)		return this->_hx___name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlendMode_obj,toString,return )

::String BlendMode_obj::get_sourceFactor(){
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_159_get_sourceFactor)
HXDLIN( 159)		return ::openfl::display3D::_Context3DBlendFactor::Context3DBlendFactor_Impl__obj::toString(this->_hx___sourceFactor);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlendMode_obj,get_sourceFactor,return )

::String BlendMode_obj::get_destinationFactor(){
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_163_get_destinationFactor)
HXDLIN( 163)		return ::openfl::display3D::_Context3DBlendFactor::Context3DBlendFactor_Impl__obj::toString(this->_hx___destinationFactor);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlendMode_obj,get_destinationFactor,return )

::String BlendMode_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_167_get_name)
HXDLIN( 167)		return this->_hx___name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlendMode_obj,get_name,return )

 ::haxe::ds::StringMap BlendMode_obj::sBlendModes;

::String BlendMode_obj::AUTO;

::String BlendMode_obj::NONE;

::String BlendMode_obj::NORMAL;

::String BlendMode_obj::ADD;

::String BlendMode_obj::MULTIPLY;

::String BlendMode_obj::SCREEN;

::String BlendMode_obj::ERASE;

::String BlendMode_obj::MASK;

::String BlendMode_obj::BELOW;

 ::starling::display::BlendMode BlendMode_obj::get(::String modeName){
            	HX_GC_STACKFRAME(&_hx_pos_f09ab1951591ad3c_101_get)
HXLINE( 102)		if (hx::IsNull( ::starling::display::BlendMode_obj::sBlendModes )) {
HXLINE( 102)			::starling::display::BlendMode_obj::registerDefaults();
            		}
HXLINE( 103)		if (::starling::display::BlendMode_obj::sBlendModes->exists(modeName)) {
HXLINE( 103)			return ::starling::display::BlendMode_obj::sBlendModes->get(modeName).StaticCast<  ::starling::display::BlendMode >();
            		}
            		else {
HXLINE( 104)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Blend mode not found: ",ed,e1,20,f6) + modeName)));
            		}
HXLINE( 103)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BlendMode_obj,get,return )

 ::starling::display::BlendMode BlendMode_obj::getByFactors( ::Dynamic srcFactor, ::Dynamic dstFactor){
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_110_getByFactors)
HXLINE( 111)		if (hx::IsNull( ::starling::display::BlendMode_obj::sBlendModes )) {
HXLINE( 111)			::starling::display::BlendMode_obj::registerDefaults();
            		}
HXLINE( 113)		{
HXLINE( 113)			 ::Dynamic registeredBlendMode = ::starling::display::BlendMode_obj::sBlendModes->iterator();
HXDLIN( 113)			while(( (bool)(registeredBlendMode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 113)				 ::starling::display::BlendMode registeredBlendMode1 = ( ( ::starling::display::BlendMode)(registeredBlendMode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 115)				bool _hx_tmp;
HXDLIN( 115)				if (hx::IsEq( ::openfl::display3D::_Context3DBlendFactor::Context3DBlendFactor_Impl__obj::fromString(registeredBlendMode1->get_sourceFactor()),srcFactor )) {
HXLINE( 115)					_hx_tmp = hx::IsEq( ::openfl::display3D::_Context3DBlendFactor::Context3DBlendFactor_Impl__obj::fromString(registeredBlendMode1->get_destinationFactor()),dstFactor );
            				}
            				else {
HXLINE( 115)					_hx_tmp = false;
            				}
HXDLIN( 115)				if (_hx_tmp) {
HXLINE( 116)					return registeredBlendMode1;
            				}
            			}
            		}
HXLINE( 119)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BlendMode_obj,getByFactors,return )

 ::starling::display::BlendMode BlendMode_obj::_hx_register(::String name, ::Dynamic srcFactor, ::Dynamic dstFactor){
            	HX_GC_STACKFRAME(&_hx_pos_f09ab1951591ad3c_124_register)
HXLINE( 125)		if (hx::IsNull( ::starling::display::BlendMode_obj::sBlendModes )) {
HXLINE( 125)			::starling::display::BlendMode_obj::registerDefaults();
            		}
HXLINE( 126)		 ::starling::display::BlendMode blendMode =  ::starling::display::BlendMode_obj::__alloc( HX_CTX ,name,srcFactor,dstFactor);
HXLINE( 127)		::starling::display::BlendMode_obj::sBlendModes->set(name,blendMode);
HXLINE( 128)		return blendMode;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BlendMode_obj,_hx_register,return )

void BlendMode_obj::registerDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_f09ab1951591ad3c_132_registerDefaults)
HXLINE( 133)		if (hx::IsNotNull( ::starling::display::BlendMode_obj::sBlendModes )) {
HXLINE( 133)			return;
            		}
HXLINE( 135)		::starling::display::BlendMode_obj::sBlendModes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 136)		::starling::display::BlendMode_obj::_hx_register(HX_("none",b8,12,0a,49),(int)2,(int)9);
HXLINE( 137)		::starling::display::BlendMode_obj::_hx_register(HX_("normal",27,72,69,30),(int)2,(int)5);
HXLINE( 138)		::starling::display::BlendMode_obj::_hx_register(HX_("add",21,f2,49,00),(int)2,(int)2);
HXLINE( 139)		::starling::display::BlendMode_obj::_hx_register(HX_("multiply",24,e2,8c,9a),(int)1,(int)5);
HXLINE( 140)		::starling::display::BlendMode_obj::_hx_register(HX_("screen",6c,3b,5d,47),(int)2,(int)6);
HXLINE( 141)		::starling::display::BlendMode_obj::_hx_register(HX_("erase",e6,e8,1c,73),(int)9,(int)5);
HXLINE( 142)		::starling::display::BlendMode_obj::_hx_register(HX_("mask",ec,40,56,48),(int)9,(int)7);
HXLINE( 143)		::starling::display::BlendMode_obj::_hx_register(HX_("below",b1,ba,59,b0),(int)3,(int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BlendMode_obj,registerDefaults,(void))


hx::ObjectPtr< BlendMode_obj > BlendMode_obj::__new(::String name, ::Dynamic sourceFactor, ::Dynamic destinationFactor) {
	hx::ObjectPtr< BlendMode_obj > __this = new BlendMode_obj();
	__this->__construct(name,sourceFactor,destinationFactor);
	return __this;
}

hx::ObjectPtr< BlendMode_obj > BlendMode_obj::__alloc(hx::Ctx *_hx_ctx,::String name, ::Dynamic sourceFactor, ::Dynamic destinationFactor) {
	BlendMode_obj *__this = (BlendMode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BlendMode_obj), true, "starling.display.BlendMode"));
	*(void **)__this = BlendMode_obj::_hx_vtable;
	__this->__construct(name,sourceFactor,destinationFactor);
	return __this;
}

BlendMode_obj::BlendMode_obj()
{
}

void BlendMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlendMode);
	HX_MARK_MEMBER_NAME(_hx___name,"__name");
	HX_MARK_MEMBER_NAME(_hx___sourceFactor,"__sourceFactor");
	HX_MARK_MEMBER_NAME(_hx___destinationFactor,"__destinationFactor");
	HX_MARK_END_CLASS();
}

void BlendMode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___name,"__name");
	HX_VISIT_MEMBER_NAME(_hx___sourceFactor,"__sourceFactor");
	HX_VISIT_MEMBER_NAME(_hx___destinationFactor,"__destinationFactor");
}

hx::Val BlendMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_name() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__name") ) { return hx::Val( _hx___name ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return hx::Val( activate_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return hx::Val( get_name_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sourceFactor") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_sourceFactor() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sourceFactor") ) { return hx::Val( _hx___sourceFactor ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_sourceFactor") ) { return hx::Val( get_sourceFactor_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"destinationFactor") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_destinationFactor() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__destinationFactor") ) { return hx::Val( _hx___destinationFactor ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_destinationFactor") ) { return hx::Val( get_destinationFactor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BlendMode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sBlendModes") ) { outValue = ( sBlendModes ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getByFactors") ) { outValue = getByFactors_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerDefaults") ) { outValue = registerDefaults_dyn(); return true; }
	}
	return false;
}

hx::Val BlendMode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__name") ) { _hx___name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sourceFactor") ) { _hx___sourceFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__destinationFactor") ) { _hx___destinationFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BlendMode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"sBlendModes") ) { sBlendModes=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void BlendMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"));
	outFields->push(HX_HCSTRING("__sourceFactor","\x2a","\xd7","\xd4","\xfa"));
	outFields->push(HX_HCSTRING("__destinationFactor","\xdd","\x1e","\xb9","\xae"));
	outFields->push(HX_HCSTRING("sourceFactor","\x0a","\x54","\x14","\xda"));
	outFields->push(HX_HCSTRING("destinationFactor","\xfd","\xf5","\xc8","\xfb"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BlendMode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(BlendMode_obj,_hx___name),HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BlendMode_obj,_hx___sourceFactor),HX_HCSTRING("__sourceFactor","\x2a","\xd7","\xd4","\xfa")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BlendMode_obj,_hx___destinationFactor),HX_HCSTRING("__destinationFactor","\xdd","\x1e","\xb9","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo BlendMode_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &BlendMode_obj::sBlendModes,HX_HCSTRING("sBlendModes","\xf2","\x17","\x4b","\x7f")},
	{hx::fsString,(void *) &BlendMode_obj::AUTO,HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")},
	{hx::fsString,(void *) &BlendMode_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsString,(void *) &BlendMode_obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsString,(void *) &BlendMode_obj::ADD,HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00")},
	{hx::fsString,(void *) &BlendMode_obj::MULTIPLY,HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4")},
	{hx::fsString,(void *) &BlendMode_obj::SCREEN,HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9")},
	{hx::fsString,(void *) &BlendMode_obj::ERASE,HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1")},
	{hx::fsString,(void *) &BlendMode_obj::MASK,HX_HCSTRING("MASK","\xec","\x08","\x17","\x33")},
	{hx::fsString,(void *) &BlendMode_obj::BELOW,HX_HCSTRING("BELOW","\x91","\xf2","\x47","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String BlendMode_obj_sMemberFields[] = {
	HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"),
	HX_HCSTRING("__sourceFactor","\x2a","\xd7","\xd4","\xfa"),
	HX_HCSTRING("__destinationFactor","\xdd","\x1e","\xb9","\xae"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_sourceFactor","\x93","\x40","\xb3","\xde"),
	HX_HCSTRING("get_destinationFactor","\xd4","\xf8","\x76","\x7a"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	::String(null()) };

static void BlendMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendMode_obj::sBlendModes,"sBlendModes");
	HX_MARK_MEMBER_NAME(BlendMode_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(BlendMode_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(BlendMode_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(BlendMode_obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(BlendMode_obj::MULTIPLY,"MULTIPLY");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SCREEN,"SCREEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::ERASE,"ERASE");
	HX_MARK_MEMBER_NAME(BlendMode_obj::MASK,"MASK");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BELOW,"BELOW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BlendMode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::sBlendModes,"sBlendModes");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::MULTIPLY,"MULTIPLY");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SCREEN,"SCREEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ERASE,"ERASE");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::MASK,"MASK");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BELOW,"BELOW");
};

#endif

hx::Class BlendMode_obj::__mClass;

static ::String BlendMode_obj_sStaticFields[] = {
	HX_HCSTRING("sBlendModes","\xf2","\x17","\x4b","\x7f"),
	HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00"),
	HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4"),
	HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9"),
	HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1"),
	HX_HCSTRING("MASK","\xec","\x08","\x17","\x33"),
	HX_HCSTRING("BELOW","\x91","\xf2","\x47","\x2e"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("getByFactors","\x37","\x04","\xc2","\x4d"),
	HX_HCSTRING("register","\x63","\xa6","\x9f","\xd0"),
	HX_HCSTRING("registerDefaults","\x15","\xce","\x5c","\xae"),
	::String(null())
};

void BlendMode_obj::__register()
{
	hx::Object *dummy = new BlendMode_obj;
	BlendMode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.display.BlendMode","\xe2","\xa9","\x38","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BlendMode_obj::__GetStatic;
	__mClass->mSetStaticField = &BlendMode_obj::__SetStatic;
	__mClass->mMarkFunc = BlendMode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BlendMode_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BlendMode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlendMode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BlendMode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlendMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlendMode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BlendMode_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_68_boot)
HXDLIN(  68)		AUTO = HX_("auto",6f,df,76,40);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_71_boot)
HXDLIN(  71)		NONE = HX_("none",b8,12,0a,49);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_74_boot)
HXDLIN(  74)		NORMAL = HX_("normal",27,72,69,30);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_77_boot)
HXDLIN(  77)		ADD = HX_("add",21,f2,49,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_80_boot)
HXDLIN(  80)		MULTIPLY = HX_("multiply",24,e2,8c,9a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_84_boot)
HXDLIN(  84)		SCREEN = HX_("screen",6c,3b,5d,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_87_boot)
HXDLIN(  87)		ERASE = HX_("erase",e6,e8,1c,73);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_91_boot)
HXDLIN(  91)		MASK = HX_("mask",ec,40,56,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f09ab1951591ad3c_94_boot)
HXDLIN(  94)		BELOW = HX_("below",b1,ba,59,b0);
            	}
}

} // end namespace starling
} // end namespace display
