// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLiteLibrary
#include <openfl/_internal/swf/SWFLiteLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_ShapeCommand
#include <openfl/_internal/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_BitmapSymbol
#include <openfl/_internal/symbols/BitmapSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_ShapeSymbol
#include <openfl/_internal/symbols/ShapeSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IShaderDrawable
#include <openfl/display/IShaderDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_934fde68ec639995_26_new,"openfl._internal.symbols.ShapeSymbol","new",0xf9be9628,"openfl._internal.symbols.ShapeSymbol.new","openfl/_internal/symbols/ShapeSymbol.hx",26,0x811972cb)
HX_LOCAL_STACK_FRAME(_hx_pos_934fde68ec639995_31___createObject,"openfl._internal.symbols.ShapeSymbol","__createObject",0x10144133,"openfl._internal.symbols.ShapeSymbol.__createObject","openfl/_internal/symbols/ShapeSymbol.hx",31,0x811972cb)
namespace openfl{
namespace _internal{
namespace symbols{

void ShapeSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_934fde68ec639995_26_new)
HXDLIN(  26)		super::__construct();
            	}

Dynamic ShapeSymbol_obj::__CreateEmpty() { return new ShapeSymbol_obj; }

void *ShapeSymbol_obj::_hx_vtable = 0;

Dynamic ShapeSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShapeSymbol_obj > _hx_result = new ShapeSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShapeSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13ceedc2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x13ceedc2;
	} else {
		return inClassId==(int)0x5bdcc22b;
	}
}

 ::openfl::display::DisplayObject ShapeSymbol_obj::_hx___createObject( ::openfl::_internal::swf::SWFLite swf){
            	HX_GC_STACKFRAME(&_hx_pos_934fde68ec639995_31___createObject)
HXLINE(  33)		 ::openfl::display::Shape shape =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  34)		 ::openfl::display::Graphics graphics = shape->get_graphics();
HXLINE(  36)		if (hx::IsNotNull( this->rendered )) {
HXLINE(  38)			graphics->copyFrom(this->rendered->get_graphics());
HXLINE(  39)			return shape;
            		}
HXLINE(  43)		{
HXLINE(  43)			int _g = (int)0;
HXDLIN(  43)			::Array< ::Dynamic> _g1 = this->commands;
HXDLIN(  43)			while((_g < _g1->length)){
HXLINE(  43)				 ::openfl::_internal::swf::ShapeCommand command = _g1->__get(_g).StaticCast<  ::openfl::_internal::swf::ShapeCommand >();
HXDLIN(  43)				_g = (_g + (int)1);
HXLINE(  45)				switch((int)(_hx_getEnumValueIndex(command))){
            					case (int)0: {
HXLINE(  51)						bool smooth = command->_hx_getBool(3);
HXDLIN(  51)						bool repeat = command->_hx_getBool(2);
HXDLIN(  51)						 ::openfl::geom::Matrix matrix = command->_hx_getObject(1).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN(  51)						int bitmapID = command->_hx_getInt(0);
HXDLIN(  51)						{
HXLINE(  53)							 ::openfl::_internal::symbols::BitmapSymbol bitmapSymbol = ( ( ::openfl::_internal::symbols::BitmapSymbol)(::haxe::IMap_obj::get(swf->symbols,bitmapID)) );
HXLINE(  54)							 ::lime::graphics::Image bitmap = swf->library->getImage(bitmapSymbol->path);
HXLINE(  56)							if (hx::IsNotNull( bitmap )) {
HXLINE(  58)								graphics->beginBitmapFill(::openfl::display::BitmapData_obj::fromImage(bitmap,null()),matrix,repeat,smooth);
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  47)						Float alpha = command->_hx_getFloat(1);
HXDLIN(  47)						int color = command->_hx_getInt(0);
HXLINE(  49)						graphics->beginFill(color,alpha);
            					}
            					break;
            					case (int)2: {
HXLINE(  62)						Float focalPointRatio = command->_hx_getFloat(7);
HXDLIN(  62)						 ::Dynamic interpolationMethod = command->_hx_getObject(6);
HXDLIN(  62)						 ::Dynamic spreadMethod = command->_hx_getObject(5);
HXDLIN(  62)						 ::openfl::geom::Matrix matrix1 = command->_hx_getObject(4).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN(  62)						::Array< int > ratios = command->_hx_getObject(3).StaticCast< ::Array< int > >();
HXDLIN(  62)						::Array< Float > alphas = command->_hx_getObject(2).StaticCast< ::Array< Float > >();
HXDLIN(  62)						::Array< int > colors = command->_hx_getObject(1).StaticCast< ::Array< int > >();
HXDLIN(  62)						 ::Dynamic fillType = command->_hx_getObject(0);
HXLINE(  64)						graphics->beginGradientFill(fillType,colors,alphas,ratios,matrix1,spreadMethod,interpolationMethod,focalPointRatio);
            					}
            					break;
            					case (int)3: {
HXLINE(  66)						Float anchorY = command->_hx_getFloat(3);
HXDLIN(  66)						Float anchorX = command->_hx_getFloat(2);
HXDLIN(  66)						Float controlY = command->_hx_getFloat(1);
HXDLIN(  66)						Float controlX = command->_hx_getFloat(0);
HXLINE(  68)						graphics->curveTo(controlX,controlY,anchorX,anchorY);
            					}
            					break;
            					case (int)4: {
HXLINE(  72)						graphics->endFill();
            					}
            					break;
            					case (int)5: {
HXLINE(  74)						 ::Dynamic miterLimit = command->_hx_getObject(7);
HXDLIN(  74)						 ::Dynamic joints = command->_hx_getObject(6);
HXDLIN(  74)						 ::Dynamic caps = command->_hx_getObject(5);
HXDLIN(  74)						 ::Dynamic scaleMode = command->_hx_getObject(4);
HXDLIN(  74)						 ::Dynamic pixelHinting = command->_hx_getObject(3);
HXDLIN(  74)						 ::Dynamic alpha1 = command->_hx_getObject(2);
HXDLIN(  74)						 ::Dynamic color1 = command->_hx_getObject(1);
HXDLIN(  74)						 ::Dynamic thickness = command->_hx_getObject(0);
HXLINE(  76)						if (hx::IsNotNull( thickness )) {
HXLINE(  78)							graphics->lineStyle(thickness,color1,alpha1,pixelHinting,scaleMode,caps,joints,miterLimit);
            						}
            						else {
HXLINE(  82)							graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            						}
            					}
            					break;
            					case (int)6: {
HXLINE(  86)						Float y = command->_hx_getFloat(1);
HXDLIN(  86)						Float x = command->_hx_getFloat(0);
HXLINE(  88)						graphics->lineTo(x,y);
            					}
            					break;
            					case (int)7: {
HXLINE(  90)						Float y1 = command->_hx_getFloat(1);
HXDLIN(  90)						Float x1 = command->_hx_getFloat(0);
HXLINE(  92)						graphics->moveTo(x1,y1);
            					}
            					break;
            				}
            			}
            		}
HXLINE(  98)		this->commands = null();
HXLINE(  99)		this->rendered =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE( 100)		 ::openfl::display::Graphics _hx_tmp = this->rendered->get_graphics();
HXDLIN( 100)		_hx_tmp->copyFrom(shape->get_graphics());
HXLINE( 102)		return shape;
            	}



hx::ObjectPtr< ShapeSymbol_obj > ShapeSymbol_obj::__new() {
	hx::ObjectPtr< ShapeSymbol_obj > __this = new ShapeSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ShapeSymbol_obj > ShapeSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	ShapeSymbol_obj *__this = (ShapeSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ShapeSymbol_obj), true, "openfl._internal.symbols.ShapeSymbol"));
	*(void **)__this = ShapeSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShapeSymbol_obj::ShapeSymbol_obj()
{
}

void ShapeSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeSymbol);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShapeSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ShapeSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return hx::Val( commands ); }
		if (HX_FIELD_EQ(inName,"rendered") ) { return hx::Val( rendered ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ShapeSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ShapeSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ShapeSymbol_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(ShapeSymbol_obj,rendered),HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShapeSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String ShapeSymbol_obj_sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void ShapeSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShapeSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class ShapeSymbol_obj::__mClass;

void ShapeSymbol_obj::__register()
{
	hx::Object *dummy = new ShapeSymbol_obj;
	ShapeSymbol_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.ShapeSymbol","\x36","\xa2","\x66","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShapeSymbol_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShapeSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShapeSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShapeSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShapeSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShapeSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
