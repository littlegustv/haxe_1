// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_starling_display_DisplayObject
#include <starling/display/DisplayObject.h>
#endif
#ifndef INCLUDED_starling_display_Mesh
#include <starling/display/Mesh.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_starling_filters_FilterQuad
#include <starling/filters/FilterQuad.h>
#endif
#ifndef INCLUDED_starling_rendering_IndexData
#include <starling/rendering/IndexData.h>
#endif
#ifndef INCLUDED_starling_rendering_VertexData
#include <starling/rendering/VertexData.h>
#endif
#ifndef INCLUDED_starling_styles_MeshStyle
#include <starling/styles/MeshStyle.h>
#endif
#ifndef INCLUDED_starling_textures_Texture
#include <starling/textures/Texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45870d626e4fa929_629_new,"starling.filters.FilterQuad","new",0x1a47cd6a,"starling.filters.FilterQuad.new","starling/filters/FragmentFilter.hx",629,0xbd90ee1b)
HX_LOCAL_STACK_FRAME(_hx_pos_45870d626e4fa929_643_dispose,"starling.filters.FilterQuad","dispose",0x6d84caa9,"starling.filters.FilterQuad.dispose","starling/filters/FragmentFilter.hx",643,0xbd90ee1b)
HX_LOCAL_STACK_FRAME(_hx_pos_45870d626e4fa929_650_disposeTexture,"starling.filters.FilterQuad","disposeTexture",0x0787bd32,"starling.filters.FilterQuad.disposeTexture","starling/filters/FragmentFilter.hx",650,0xbd90ee1b)
HX_LOCAL_STACK_FRAME(_hx_pos_45870d626e4fa929_659_moveVertices,"starling.filters.FilterQuad","moveVertices",0xa95869e0,"starling.filters.FilterQuad.moveVertices","starling/filters/FragmentFilter.hx",659,0xbd90ee1b)
HX_LOCAL_STACK_FRAME(_hx_pos_45870d626e4fa929_669_setBounds,"starling.filters.FilterQuad","setBounds",0xae2b5c41,"starling.filters.FilterQuad.setBounds","starling/filters/FragmentFilter.hx",669,0xbd90ee1b)
HX_LOCAL_STACK_FRAME(_hx_pos_45870d626e4fa929_680_set_texture,"starling.filters.FilterQuad","set_texture",0xc66f4708,"starling.filters.FilterQuad.set_texture","starling/filters/FragmentFilter.hx",680,0xbd90ee1b)
HX_LOCAL_STACK_FRAME(_hx_pos_45870d626e4fa929_626_boot,"starling.filters.FilterQuad","boot",0xdca4efe8,"starling.filters.FilterQuad.boot","starling/filters/FragmentFilter.hx",626,0xbd90ee1b)
namespace starling{
namespace filters{

void FilterQuad_obj::__construct(::String smoothing){
            	HX_GC_STACKFRAME(&_hx_pos_45870d626e4fa929_629_new)
HXLINE( 630)		 ::starling::rendering::VertexData vertexData =  ::starling::rendering::VertexData_obj::__alloc( HX_CTX ,null(),(int)4);
HXLINE( 631)		vertexData->set_numVertices((int)4);
HXLINE( 633)		 ::starling::rendering::IndexData indexData =  ::starling::rendering::IndexData_obj::__alloc( HX_CTX ,(int)6);
HXLINE( 634)		indexData->addQuad((int)0,(int)1,(int)2,(int)3);
HXLINE( 636)		super::__construct(vertexData,indexData,null());
HXLINE( 638)		this->set_textureSmoothing(smoothing);
HXLINE( 639)		this->set_pixelSnapping(false);
            	}

Dynamic FilterQuad_obj::__CreateEmpty() { return new FilterQuad_obj; }

void *FilterQuad_obj::_hx_vtable = 0;

Dynamic FilterQuad_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FilterQuad_obj > _hx_result = new FilterQuad_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FilterQuad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3cebba07) {
		if (inClassId<=(int)0x25137bc0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25137bc0;
		} else {
			return inClassId==(int)0x3cebba07;
		}
	} else {
		return inClassId==(int)0x6cd18932 || inClassId==(int)0x6dea180f;
	}
}

void FilterQuad_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_45870d626e4fa929_643_dispose)
HXLINE( 644)		this->disposeTexture();
HXLINE( 645)		this->super::dispose();
            	}


void FilterQuad_obj::disposeTexture(){
            	HX_STACKFRAME(&_hx_pos_45870d626e4fa929_650_disposeTexture)
HXDLIN( 650)		if (hx::IsNotNull( this->get_texture() )) {
HXLINE( 652)			this->get_texture()->dispose();
HXLINE( 653)			this->set_texture(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FilterQuad_obj,disposeTexture,(void))

void FilterQuad_obj::moveVertices( ::starling::display::DisplayObject sourceSpace, ::starling::display::DisplayObject targetSpace){
            	HX_GC_STACKFRAME(&_hx_pos_45870d626e4fa929_659_moveVertices)
HXDLIN( 659)		if (targetSpace->get_is3D()) {
HXLINE( 660)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("cannot move vertices into 3D space",c2,1d,8b,90),null()));
            		}
            		else {
HXLINE( 661)			if (hx::IsNotEq( sourceSpace,targetSpace )) {
HXLINE( 663)				targetSpace->getTransformationMatrix(sourceSpace,::starling::filters::FilterQuad_obj::sMatrix)->invert();
HXLINE( 664)				this->get_vertexData()->transformPoints(HX_("position",a9,a0,fa,ca),::starling::filters::FilterQuad_obj::sMatrix,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FilterQuad_obj,moveVertices,(void))

void FilterQuad_obj::setBounds( ::openfl::geom::Rectangle bounds){
            	HX_STACKFRAME(&_hx_pos_45870d626e4fa929_669_setBounds)
HXLINE( 670)		 ::starling::rendering::VertexData vertexData = this->get_vertexData();
HXLINE( 671)		::String attrName = HX_("position",a9,a0,fa,ca);
HXLINE( 673)		vertexData->setPoint((int)0,attrName,bounds->x,bounds->y);
HXLINE( 674)		Float _hx_tmp = bounds->get_right();
HXDLIN( 674)		vertexData->setPoint((int)1,attrName,_hx_tmp,bounds->y);
HXLINE( 675)		Float bounds1 = bounds->x;
HXDLIN( 675)		vertexData->setPoint((int)2,attrName,bounds1,bounds->get_bottom());
HXLINE( 676)		Float _hx_tmp1 = bounds->get_right();
HXDLIN( 676)		vertexData->setPoint((int)3,attrName,_hx_tmp1,bounds->get_bottom());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FilterQuad_obj,setBounds,(void))

 ::starling::textures::Texture FilterQuad_obj::set_texture( ::starling::textures::Texture value){
            	HX_STACKFRAME(&_hx_pos_45870d626e4fa929_680_set_texture)
HXLINE( 681)		this->super::set_texture(value);
HXLINE( 682)		if (hx::IsNotNull( value )) {
HXLINE( 682)			value->setupTextureCoordinates(this->get_vertexData(),null(),null());
            		}
HXLINE( 683)		return value;
            	}


 ::openfl::geom::Matrix FilterQuad_obj::sMatrix;


hx::ObjectPtr< FilterQuad_obj > FilterQuad_obj::__new(::String smoothing) {
	hx::ObjectPtr< FilterQuad_obj > __this = new FilterQuad_obj();
	__this->__construct(smoothing);
	return __this;
}

hx::ObjectPtr< FilterQuad_obj > FilterQuad_obj::__alloc(hx::Ctx *_hx_ctx,::String smoothing) {
	FilterQuad_obj *__this = (FilterQuad_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FilterQuad_obj), true, "starling.filters.FilterQuad"));
	*(void **)__this = FilterQuad_obj::_hx_vtable;
	__this->__construct(smoothing);
	return __this;
}

FilterQuad_obj::FilterQuad_obj()
{
}

hx::Val FilterQuad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setBounds") ) { return hx::Val( setBounds_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveVertices") ) { return hx::Val( moveVertices_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"disposeTexture") ) { return hx::Val( disposeTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FilterQuad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { outValue = ( sMatrix ); return true; }
	}
	return false;
}

bool FilterQuad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { sMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FilterQuad_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FilterQuad_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &FilterQuad_obj::sMatrix,HX_HCSTRING("sMatrix","\x14","\x03","\x81","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FilterQuad_obj_sMemberFields[] = {
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("disposeTexture","\xfc","\x51","\xca","\xb1"),
	HX_HCSTRING("moveVertices","\x2a","\x58","\x4b","\xfe"),
	HX_HCSTRING("setBounds","\xb7","\xfb","\xc4","\xc5"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	::String(null()) };

static void FilterQuad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterQuad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FilterQuad_obj::sMatrix,"sMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FilterQuad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterQuad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FilterQuad_obj::sMatrix,"sMatrix");
};

#endif

hx::Class FilterQuad_obj::__mClass;

static ::String FilterQuad_obj_sStaticFields[] = {
	HX_HCSTRING("sMatrix","\x14","\x03","\x81","\x9e"),
	::String(null())
};

void FilterQuad_obj::__register()
{
	hx::Object *dummy = new FilterQuad_obj;
	FilterQuad_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.filters.FilterQuad","\x78","\x90","\xee","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FilterQuad_obj::__GetStatic;
	__mClass->mSetStaticField = &FilterQuad_obj::__SetStatic;
	__mClass->mMarkFunc = FilterQuad_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FilterQuad_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FilterQuad_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FilterQuad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FilterQuad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FilterQuad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FilterQuad_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FilterQuad_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_45870d626e4fa929_626_boot)
HXDLIN( 626)		sMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace starling
} // end namespace filters
