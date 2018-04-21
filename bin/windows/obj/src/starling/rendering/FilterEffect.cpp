// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_starling_rendering_Effect
#include <starling/rendering/Effect.h>
#endif
#ifndef INCLUDED_starling_rendering_FilterEffect
#include <starling/rendering/FilterEffect.h>
#endif
#ifndef INCLUDED_starling_rendering_Program
#include <starling/rendering/Program.h>
#endif
#ifndef INCLUDED_starling_rendering_VertexDataFormat
#include <starling/rendering/VertexDataFormat.h>
#endif
#ifndef INCLUDED_starling_textures_ConcreteTexture
#include <starling/textures/ConcreteTexture.h>
#endif
#ifndef INCLUDED_starling_textures_Texture
#include <starling/textures/Texture.h>
#endif
#ifndef INCLUDED_starling_utils_RenderUtil
#include <starling/utils/RenderUtil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5017151bf41bfade_62_new,"starling.rendering.FilterEffect","new",0x44f02343,"starling.rendering.FilterEffect.new","starling/rendering/FilterEffect.hx",62,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_75_get_programVariantName,"starling.rendering.FilterEffect","get_programVariantName",0xfed57992,"starling.rendering.FilterEffect.get_programVariantName","starling/rendering/FilterEffect.hx",75,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_81_createProgram,"starling.rendering.FilterEffect","createProgram",0xff6c0f8b,"starling.rendering.FilterEffect.createProgram","starling/rendering/FilterEffect.hx",81,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_105_beforeDraw,"starling.rendering.FilterEffect","beforeDraw",0x384677a0,"starling.rendering.FilterEffect.beforeDraw","starling/rendering/FilterEffect.hx",105,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_120_afterDraw,"starling.rendering.FilterEffect","afterDraw",0x237d1b63,"starling.rendering.FilterEffect.afterDraw","starling/rendering/FilterEffect.hx",120,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_145_get_vertexFormat,"starling.rendering.FilterEffect","get_vertexFormat",0xd08bc981,"starling.rendering.FilterEffect.get_vertexFormat","starling/rendering/FilterEffect.hx",145,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_149_get_texture,"starling.rendering.FilterEffect","get_texture",0xc52996d5,"starling.rendering.FilterEffect.get_texture","starling/rendering/FilterEffect.hx",149,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_150_set_texture,"starling.rendering.FilterEffect","set_texture",0xcf969de1,"starling.rendering.FilterEffect.set_texture","starling/rendering/FilterEffect.hx",150,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_154_get_textureSmoothing,"starling.rendering.FilterEffect","get_textureSmoothing",0xa59e1bdf,"starling.rendering.FilterEffect.get_textureSmoothing","starling/rendering/FilterEffect.hx",154,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_155_set_textureSmoothing,"starling.rendering.FilterEffect","set_textureSmoothing",0x7255d353,"starling.rendering.FilterEffect.set_textureSmoothing","starling/rendering/FilterEffect.hx",155,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_160_get_textureRepeat,"starling.rendering.FilterEffect","get_textureRepeat",0xf1eaf010,"starling.rendering.FilterEffect.get_textureRepeat","starling/rendering/FilterEffect.hx",160,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_161_set_textureRepeat,"starling.rendering.FilterEffect","set_textureRepeat",0x1558c81c,"starling.rendering.FilterEffect.set_textureRepeat","starling/rendering/FilterEffect.hx",161,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_139_tex,"starling.rendering.FilterEffect","tex",0x44f4b0ca,"starling.rendering.FilterEffect.tex","starling/rendering/FilterEffect.hx",139,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_35_boot,"starling.rendering.FilterEffect","boot",0x0547b7ef,"starling.rendering.FilterEffect.boot","starling/rendering/FilterEffect.hx",35,0x065fc48b)
HX_LOCAL_STACK_FRAME(_hx_pos_5017151bf41bfade_41_boot,"starling.rendering.FilterEffect","boot",0x0547b7ef,"starling.rendering.FilterEffect.boot","starling/rendering/FilterEffect.hx",41,0x065fc48b)
namespace starling{
namespace rendering{

void FilterEffect_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_62_new)
HXLINE(  63)		super::__construct();
HXLINE(  64)		this->_textureSmoothing = HX_("bilinear",ec,b6,3d,e0);
            	}

Dynamic FilterEffect_obj::__CreateEmpty() { return new FilterEffect_obj; }

void *FilterEffect_obj::_hx_vtable = 0;

Dynamic FilterEffect_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FilterEffect_obj > _hx_result = new FilterEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FilterEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15407461) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x15407461;
	} else {
		return inClassId==(int)0x2a6d1e35;
	}
}

int FilterEffect_obj::get_programVariantName(){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_75_get_programVariantName)
HXDLIN(  75)		return ::starling::utils::RenderUtil_obj::getTextureVariantBits(this->_texture);
            	}


 ::starling::rendering::Program FilterEffect_obj::createProgram(){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_81_createProgram)
HXDLIN(  81)		if (hx::IsNotNull( this->_texture )) {
HXLINE(  83)			::String vertexShader = ::starling::rendering::FilterEffect_obj::STD_VERTEX_SHADER;
HXLINE(  84)			::String fragmentShader = ::starling::rendering::FilterEffect_obj::tex(HX_("oc",14,61,00,00),HX_("v0",fa,66,00,00),(int)0,this->_texture,null());
HXLINE(  85)			return ::starling::rendering::Program_obj::fromSource(vertexShader,fragmentShader,null());
            		}
            		else {
HXLINE(  89)			return this->super::createProgram();
            		}
HXLINE(  81)		return null();
            	}


void FilterEffect_obj::beforeDraw( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_105_beforeDraw)
HXLINE( 106)		this->super::beforeDraw(context);
HXLINE( 108)		if (hx::IsNotNull( this->_texture )) {
HXLINE( 110)			bool repeat;
HXDLIN( 110)			if (this->_textureRepeat) {
HXLINE( 110)				repeat = this->_texture->get_root()->get_isPotTexture();
            			}
            			else {
HXLINE( 110)				repeat = false;
            			}
HXLINE( 111)			bool _hx_tmp = this->_texture->get_mipMapping();
HXDLIN( 111)			::starling::utils::RenderUtil_obj::setSamplerStateAt((int)0,_hx_tmp,this->_textureSmoothing,repeat);
HXLINE( 112)			context->setTextureAt((int)0,this->_texture->get_base());
HXLINE( 113)			 ::starling::rendering::VertexDataFormat _hx_tmp1 = this->get_vertexFormat();
HXDLIN( 113)			_hx_tmp1->setVertexBufferAt((int)1,this->get_vertexBuffer(),HX_("texCoords",65,5d,73,a1));
            		}
            	}


void FilterEffect_obj::afterDraw( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_120_afterDraw)
HXLINE( 121)		if (hx::IsNotNull( this->_texture )) {
HXLINE( 123)			context->setTextureAt((int)0,null());
HXLINE( 124)			context->setVertexBufferAt((int)1,null(),null(),null());
            		}
HXLINE( 127)		this->super::afterDraw(context);
            	}


 ::starling::rendering::VertexDataFormat FilterEffect_obj::get_vertexFormat(){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_145_get_vertexFormat)
HXDLIN( 145)		return ::starling::rendering::FilterEffect_obj::VERTEX_FORMAT;
            	}


 ::starling::textures::Texture FilterEffect_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_149_get_texture)
HXDLIN( 149)		return this->_texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FilterEffect_obj,get_texture,return )

 ::starling::textures::Texture FilterEffect_obj::set_texture( ::starling::textures::Texture value){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_150_set_texture)
HXDLIN( 150)		return (this->_texture = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FilterEffect_obj,set_texture,return )

::String FilterEffect_obj::get_textureSmoothing(){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_154_get_textureSmoothing)
HXDLIN( 154)		return this->_textureSmoothing;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FilterEffect_obj,get_textureSmoothing,return )

::String FilterEffect_obj::set_textureSmoothing(::String value){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_155_set_textureSmoothing)
HXDLIN( 155)		return (this->_textureSmoothing = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FilterEffect_obj,set_textureSmoothing,return )

bool FilterEffect_obj::get_textureRepeat(){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_160_get_textureRepeat)
HXDLIN( 160)		return this->_textureRepeat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FilterEffect_obj,get_textureRepeat,return )

bool FilterEffect_obj::set_textureRepeat(bool value){
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_161_set_textureRepeat)
HXDLIN( 161)		return (this->_textureRepeat = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FilterEffect_obj,set_textureRepeat,return )

 ::starling::rendering::VertexDataFormat FilterEffect_obj::VERTEX_FORMAT;

::String FilterEffect_obj::STD_VERTEX_SHADER;

::String FilterEffect_obj::tex(::String resultReg,::String uvReg,int sampler, ::starling::textures::Texture texture,hx::Null< bool >  __o_convertToPmaIfRequired){
bool convertToPmaIfRequired = __o_convertToPmaIfRequired.Default(true);
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_139_tex)
HXDLIN( 139)		return ::starling::utils::RenderUtil_obj::createAGALTexOperation(resultReg,uvReg,sampler,texture,convertToPmaIfRequired,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FilterEffect_obj,tex,return )


hx::ObjectPtr< FilterEffect_obj > FilterEffect_obj::__new() {
	hx::ObjectPtr< FilterEffect_obj > __this = new FilterEffect_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FilterEffect_obj > FilterEffect_obj::__alloc(hx::Ctx *_hx_ctx) {
	FilterEffect_obj *__this = (FilterEffect_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FilterEffect_obj), true, "starling.rendering.FilterEffect"));
	*(void **)__this = FilterEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FilterEffect_obj::FilterEffect_obj()
{
}

void FilterEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterEffect);
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_textureSmoothing,"_textureSmoothing");
	HX_MARK_MEMBER_NAME(_textureRepeat,"_textureRepeat");
	 ::starling::rendering::Effect_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FilterEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_textureSmoothing,"_textureSmoothing");
	HX_VISIT_MEMBER_NAME(_textureRepeat,"_textureRepeat");
	 ::starling::rendering::Effect_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FilterEffect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_texture() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { return hx::Val( _texture ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"afterDraw") ) { return hx::Val( afterDraw_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beforeDraw") ) { return hx::Val( beforeDraw_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_texture") ) { return hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return hx::Val( set_texture_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createProgram") ) { return hx::Val( createProgram_dyn() ); }
		if (HX_FIELD_EQ(inName,"textureRepeat") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_textureRepeat() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureRepeat") ) { return hx::Val( _textureRepeat ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_vertexFormat") ) { return hx::Val( get_vertexFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"textureSmoothing") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_textureSmoothing() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_textureSmoothing") ) { return hx::Val( _textureSmoothing ); }
		if (HX_FIELD_EQ(inName,"get_textureRepeat") ) { return hx::Val( get_textureRepeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureRepeat") ) { return hx::Val( set_textureRepeat_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_textureSmoothing") ) { return hx::Val( get_textureSmoothing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureSmoothing") ) { return hx::Val( set_textureSmoothing_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_programVariantName") ) { return hx::Val( get_programVariantName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FilterEffect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tex") ) { outValue = tex_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"VERTEX_FORMAT") ) { outValue = ( VERTEX_FORMAT ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"STD_VERTEX_SHADER") ) { outValue = ( STD_VERTEX_SHADER ); return true; }
	}
	return false;
}

hx::Val FilterEffect_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_texture(inValue.Cast<  ::starling::textures::Texture >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::starling::textures::Texture >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureRepeat") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_textureRepeat(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureRepeat") ) { _textureRepeat=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textureSmoothing") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_textureSmoothing(inValue.Cast< ::String >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_textureSmoothing") ) { _textureSmoothing=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FilterEffect_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"VERTEX_FORMAT") ) { VERTEX_FORMAT=ioValue.Cast<  ::starling::rendering::VertexDataFormat >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"STD_VERTEX_SHADER") ) { STD_VERTEX_SHADER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void FilterEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_texture","\x5c","\x22","\x99","\xd8"));
	outFields->push(HX_HCSTRING("_textureSmoothing","\x78","\x67","\xaa","\x02"));
	outFields->push(HX_HCSTRING("_textureRepeat","\xd7","\x5a","\xe6","\xd7"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("textureSmoothing","\x19","\x79","\x2f","\x6a"));
	outFields->push(HX_HCSTRING("textureRepeat","\x96","\x6a","\x94","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FilterEffect_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::starling::textures::Texture*/ ,(int)offsetof(FilterEffect_obj,_texture),HX_HCSTRING("_texture","\x5c","\x22","\x99","\xd8")},
	{hx::fsString,(int)offsetof(FilterEffect_obj,_textureSmoothing),HX_HCSTRING("_textureSmoothing","\x78","\x67","\xaa","\x02")},
	{hx::fsBool,(int)offsetof(FilterEffect_obj,_textureRepeat),HX_HCSTRING("_textureRepeat","\xd7","\x5a","\xe6","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FilterEffect_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::starling::rendering::VertexDataFormat*/ ,(void *) &FilterEffect_obj::VERTEX_FORMAT,HX_HCSTRING("VERTEX_FORMAT","\xf2","\x39","\xe1","\x29")},
	{hx::fsString,(void *) &FilterEffect_obj::STD_VERTEX_SHADER,HX_HCSTRING("STD_VERTEX_SHADER","\xe4","\x5d","\x76","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FilterEffect_obj_sMemberFields[] = {
	HX_HCSTRING("_texture","\x5c","\x22","\x99","\xd8"),
	HX_HCSTRING("_textureSmoothing","\x78","\x67","\xaa","\x02"),
	HX_HCSTRING("_textureRepeat","\xd7","\x5a","\xe6","\xd7"),
	HX_HCSTRING("get_programVariantName","\x95","\x92","\xf8","\x69"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("beforeDraw","\x23","\x58","\x19","\x91"),
	HX_HCSTRING("afterDraw","\x40","\xfc","\x4e","\xc2"),
	HX_HCSTRING("get_vertexFormat","\x44","\x6e","\x42","\xa2"),
	HX_HCSTRING("get_texture","\xf2","\x28","\xdb","\x24"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("get_textureSmoothing","\x22","\xde","\x99","\x88"),
	HX_HCSTRING("set_textureSmoothing","\x96","\x95","\x51","\x55"),
	HX_HCSTRING("get_textureRepeat","\xed","\x75","\x04","\xa0"),
	HX_HCSTRING("set_textureRepeat","\xf9","\x4d","\x72","\xc3"),
	::String(null()) };

static void FilterEffect_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterEffect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FilterEffect_obj::VERTEX_FORMAT,"VERTEX_FORMAT");
	HX_MARK_MEMBER_NAME(FilterEffect_obj::STD_VERTEX_SHADER,"STD_VERTEX_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FilterEffect_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterEffect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FilterEffect_obj::VERTEX_FORMAT,"VERTEX_FORMAT");
	HX_VISIT_MEMBER_NAME(FilterEffect_obj::STD_VERTEX_SHADER,"STD_VERTEX_SHADER");
};

#endif

hx::Class FilterEffect_obj::__mClass;

static ::String FilterEffect_obj_sStaticFields[] = {
	HX_HCSTRING("VERTEX_FORMAT","\xf2","\x39","\xe1","\x29"),
	HX_HCSTRING("STD_VERTEX_SHADER","\xe4","\x5d","\x76","\xeb"),
	HX_HCSTRING("tex","\xe7","\x5d","\x58","\x00"),
	::String(null())
};

void FilterEffect_obj::__register()
{
	hx::Object *dummy = new FilterEffect_obj;
	FilterEffect_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.rendering.FilterEffect","\xd1","\xc5","\x2e","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FilterEffect_obj::__GetStatic;
	__mClass->mSetStaticField = &FilterEffect_obj::__SetStatic;
	__mClass->mMarkFunc = FilterEffect_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FilterEffect_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FilterEffect_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FilterEffect_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FilterEffect_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FilterEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FilterEffect_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FilterEffect_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_35_boot)
HXDLIN(  35)		VERTEX_FORMAT = ::starling::rendering::Effect_obj::VERTEX_FORMAT->extend(HX_("texCoords:float2",0b,54,7c,54));
            	}
{
            	HX_STACKFRAME(&_hx_pos_5017151bf41bfade_41_boot)
HXDLIN(  41)		STD_VERTEX_SHADER = (HX_("m44 op, va0, vc0 \n",bc,7d,9c,46) + HX_("mov v0, va1",2c,96,ba,67));
            	}
}

} // end namespace starling
} // end namespace rendering
