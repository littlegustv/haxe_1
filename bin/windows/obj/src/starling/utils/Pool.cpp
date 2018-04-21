// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
#ifndef INCLUDED_starling_utils_Pool
#include <starling/utils/Pool.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ff1461100cd9d30_39_new,"starling.utils.Pool","new",0x99b96ab1,"starling.utils.Pool.new","starling/utils/Pool.hx",39,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_44_getPoint,"starling.utils.Pool","getPoint",0xb75b23e9,"starling.utils.Pool.getPoint","starling/utils/Pool.hx",44,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_57_putPoint,"starling.utils.Pool","putPoint",0x53789310,"starling.utils.Pool.putPoint","starling/utils/Pool.hx",57,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_63_getPoint3D,"starling.utils.Pool","getPoint3D",0x9f5adcda,"starling.utils.Pool.getPoint3D","starling/utils/Pool.hx",63,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_76_putPoint3D,"starling.utils.Pool","putPoint3D",0x910fa3c1,"starling.utils.Pool.putPoint3D","starling/utils/Pool.hx",76,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_83_getMatrix,"starling.utils.Pool","getMatrix",0x7cfe6c88,"starling.utils.Pool.getMatrix","starling/utils/Pool.hx",83,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_96_putMatrix,"starling.utils.Pool","putMatrix",0x7aa23f81,"starling.utils.Pool.putMatrix","starling/utils/Pool.hx",96,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_106_getMatrix3D,"starling.utils.Pool","getMatrix3D",0x8ad8cb39,"starling.utils.Pool.getMatrix3D","starling/utils/Pool.hx",106,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_119_putMatrix3D,"starling.utils.Pool","putMatrix3D",0x17520e72,"starling.utils.Pool.putMatrix3D","starling/utils/Pool.hx",119,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_126_getRectangle,"starling.utils.Pool","getRectangle",0x5e7a8448,"starling.utils.Pool.getRectangle","starling/utils/Pool.hx",126,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_139_putRectangle,"starling.utils.Pool","putRectangle",0xbc1c12ef,"starling.utils.Pool.putRectangle","starling/utils/Pool.hx",139,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_32_boot,"starling.utils.Pool","boot",0xe09cf0c1,"starling.utils.Pool.boot","starling/utils/Pool.hx",32,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_33_boot,"starling.utils.Pool","boot",0xe09cf0c1,"starling.utils.Pool.boot","starling/utils/Pool.hx",33,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_34_boot,"starling.utils.Pool","boot",0xe09cf0c1,"starling.utils.Pool.boot","starling/utils/Pool.hx",34,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_35_boot,"starling.utils.Pool","boot",0xe09cf0c1,"starling.utils.Pool.boot","starling/utils/Pool.hx",35,0x7519fb5d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff1461100cd9d30_36_boot,"starling.utils.Pool","boot",0xe09cf0c1,"starling.utils.Pool.boot","starling/utils/Pool.hx",36,0x7519fb5d)
namespace starling{
namespace utils{

void Pool_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_39_new)
            	}

Dynamic Pool_obj::__CreateEmpty() { return new Pool_obj; }

void *Pool_obj::_hx_vtable = 0;

Dynamic Pool_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Pool_obj > _hx_result = new Pool_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Pool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50a8da5d;
}

 ::openfl::_Vector::AbstractVector Pool_obj::sPoints;

 ::openfl::_Vector::AbstractVector Pool_obj::sPoints3D;

 ::openfl::_Vector::AbstractVector Pool_obj::sMatrices;

 ::openfl::_Vector::AbstractVector Pool_obj::sMatrices3D;

 ::openfl::_Vector::AbstractVector Pool_obj::sRectangles;

 ::openfl::geom::Point Pool_obj::getPoint(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_44_getPoint)
HXDLIN(  44)		if ((::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sPoints->data) == (int)0)) {
HXDLIN(  44)			return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,x,y);
            		}
            		else {
HXLINE(  47)			 ::openfl::geom::Point point = ( ( ::openfl::geom::Point)(::openfl::_Vector::IVector_obj::pop(::starling::utils::Pool_obj::sPoints->data)) );
HXLINE(  48)			point->x = x;
HXDLIN(  48)			point->y = y;
HXLINE(  49)			return point;
            		}
HXLINE(  44)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Pool_obj,getPoint,return )

void Pool_obj::putPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_57_putPoint)
HXDLIN(  57)		if (hx::IsNotNull( point )) {
HXDLIN(  57)			 ::openfl::_Vector::AbstractVector this1 = ::starling::utils::Pool_obj::sPoints;
HXDLIN(  57)			int index = ::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sPoints->data);
HXDLIN(  57)			::openfl::_Vector::IVector_obj::set(this1->data,index,point);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pool_obj,putPoint,(void))

 ::openfl::geom::Vector3D Pool_obj::getPoint3D(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_63_getPoint3D)
HXDLIN(  63)		if ((::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sPoints3D->data) == (int)0)) {
HXDLIN(  63)			return  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,x,y,z,null());
            		}
            		else {
HXLINE(  66)			 ::openfl::geom::Vector3D point = ( ( ::openfl::geom::Vector3D)(::openfl::_Vector::IVector_obj::pop(::starling::utils::Pool_obj::sPoints3D->data)) );
HXLINE(  67)			point->x = x;
HXDLIN(  67)			point->y = y;
HXDLIN(  67)			point->z = z;
HXLINE(  68)			return point;
            		}
HXLINE(  63)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Pool_obj,getPoint3D,return )

void Pool_obj::putPoint3D( ::openfl::geom::Vector3D point){
            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_76_putPoint3D)
HXDLIN(  76)		if (hx::IsNotNull( point )) {
HXDLIN(  76)			 ::openfl::_Vector::AbstractVector this1 = ::starling::utils::Pool_obj::sPoints3D;
HXDLIN(  76)			int index = ::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sPoints3D->data);
HXDLIN(  76)			::openfl::_Vector::IVector_obj::set(this1->data,index,point);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pool_obj,putPoint3D,(void))

 ::openfl::geom::Matrix Pool_obj::getMatrix(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_83_getMatrix)
HXDLIN(  83)		if ((::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sMatrices->data) == (int)0)) {
HXDLIN(  83)			return  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,a,b,c,d,tx,ty);
            		}
            		else {
HXLINE(  86)			 ::openfl::geom::Matrix matrix = ( ( ::openfl::geom::Matrix)(::openfl::_Vector::IVector_obj::pop(::starling::utils::Pool_obj::sMatrices->data)) );
HXLINE(  87)			matrix->setTo(a,b,c,d,tx,ty);
HXLINE(  88)			return matrix;
            		}
HXLINE(  83)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Pool_obj,getMatrix,return )

void Pool_obj::putMatrix( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_96_putMatrix)
HXDLIN(  96)		if (hx::IsNotNull( matrix )) {
HXDLIN(  96)			 ::openfl::_Vector::AbstractVector this1 = ::starling::utils::Pool_obj::sMatrices;
HXDLIN(  96)			int index = ::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sMatrices->data);
HXDLIN(  96)			::openfl::_Vector::IVector_obj::set(this1->data,index,matrix);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pool_obj,putMatrix,(void))

 ::openfl::geom::Matrix3D Pool_obj::getMatrix3D(hx::Null< bool >  __o_identity){
bool identity = __o_identity.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_106_getMatrix3D)
HXDLIN( 106)		if ((::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sMatrices3D->data) == (int)0)) {
HXDLIN( 106)			return  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            		}
            		else {
HXLINE( 109)			 ::openfl::geom::Matrix3D matrix = ( ( ::openfl::geom::Matrix3D)(::openfl::_Vector::IVector_obj::pop(::starling::utils::Pool_obj::sMatrices3D->data)) );
HXLINE( 110)			if (identity) {
HXLINE( 110)				matrix->identity();
            			}
HXLINE( 111)			return matrix;
            		}
HXLINE( 106)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pool_obj,getMatrix3D,return )

void Pool_obj::putMatrix3D( ::openfl::geom::Matrix3D matrix){
            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_119_putMatrix3D)
HXDLIN( 119)		if (hx::IsNotNull( matrix )) {
HXDLIN( 119)			 ::openfl::_Vector::AbstractVector this1 = ::starling::utils::Pool_obj::sMatrices3D;
HXDLIN( 119)			int index = ::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sMatrices3D->data);
HXDLIN( 119)			::openfl::_Vector::IVector_obj::set(this1->data,index,matrix);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pool_obj,putMatrix3D,(void))

 ::openfl::geom::Rectangle Pool_obj::getRectangle(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_126_getRectangle)
HXDLIN( 126)		if ((::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sRectangles->data) == (int)0)) {
HXDLIN( 126)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,width,height);
            		}
            		else {
HXLINE( 129)			 ::openfl::geom::Rectangle rectangle = ( ( ::openfl::geom::Rectangle)(::openfl::_Vector::IVector_obj::pop(::starling::utils::Pool_obj::sRectangles->data)) );
HXLINE( 130)			rectangle->setTo(x,y,width,height);
HXLINE( 131)			return rectangle;
            		}
HXLINE( 126)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Pool_obj,getRectangle,return )

void Pool_obj::putRectangle( ::openfl::geom::Rectangle rectangle){
            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_139_putRectangle)
HXDLIN( 139)		if (hx::IsNotNull( rectangle )) {
HXDLIN( 139)			 ::openfl::_Vector::AbstractVector this1 = ::starling::utils::Pool_obj::sRectangles;
HXDLIN( 139)			int index = ::openfl::_Vector::IVector_obj::get_length(::starling::utils::Pool_obj::sRectangles->data);
HXDLIN( 139)			::openfl::_Vector::IVector_obj::set(this1->data,index,rectangle);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pool_obj,putRectangle,(void))


Pool_obj::Pool_obj()
{
}

bool Pool_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sPoints") ) { outValue = ( sPoints ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPoint") ) { outValue = getPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"putPoint") ) { outValue = putPoint_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sPoints3D") ) { outValue = ( sPoints3D ); return true; }
		if (HX_FIELD_EQ(inName,"sMatrices") ) { outValue = ( sMatrices ); return true; }
		if (HX_FIELD_EQ(inName,"getMatrix") ) { outValue = getMatrix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"putMatrix") ) { outValue = putMatrix_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getPoint3D") ) { outValue = getPoint3D_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"putPoint3D") ) { outValue = putPoint3D_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sMatrices3D") ) { outValue = ( sMatrices3D ); return true; }
		if (HX_FIELD_EQ(inName,"sRectangles") ) { outValue = ( sRectangles ); return true; }
		if (HX_FIELD_EQ(inName,"getMatrix3D") ) { outValue = getMatrix3D_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"putMatrix3D") ) { outValue = putMatrix3D_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getRectangle") ) { outValue = getRectangle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"putRectangle") ) { outValue = putRectangle_dyn(); return true; }
	}
	return false;
}

bool Pool_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sPoints") ) { sPoints=ioValue.Cast<  ::openfl::_Vector::AbstractVector >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sPoints3D") ) { sPoints3D=ioValue.Cast<  ::openfl::_Vector::AbstractVector >(); return true; }
		if (HX_FIELD_EQ(inName,"sMatrices") ) { sMatrices=ioValue.Cast<  ::openfl::_Vector::AbstractVector >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sMatrices3D") ) { sMatrices3D=ioValue.Cast<  ::openfl::_Vector::AbstractVector >(); return true; }
		if (HX_FIELD_EQ(inName,"sRectangles") ) { sRectangles=ioValue.Cast<  ::openfl::_Vector::AbstractVector >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Pool_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Pool_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(void *) &Pool_obj::sPoints,HX_HCSTRING("sPoints","\xf6","\xde","\xe6","\xd9")},
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(void *) &Pool_obj::sPoints3D,HX_HCSTRING("sPoints3D","\x27","\x35","\x95","\x48")},
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(void *) &Pool_obj::sMatrices,HX_HCSTRING("sMatrices","\x2d","\x59","\x07","\x03")},
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(void *) &Pool_obj::sMatrices3D,HX_HCSTRING("sMatrices3D","\x1e","\xeb","\x71","\x56")},
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(void *) &Pool_obj::sRectangles,HX_HCSTRING("sRectangles","\xb7","\x07","\x58","\x0e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Pool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pool_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Pool_obj::sPoints,"sPoints");
	HX_MARK_MEMBER_NAME(Pool_obj::sPoints3D,"sPoints3D");
	HX_MARK_MEMBER_NAME(Pool_obj::sMatrices,"sMatrices");
	HX_MARK_MEMBER_NAME(Pool_obj::sMatrices3D,"sMatrices3D");
	HX_MARK_MEMBER_NAME(Pool_obj::sRectangles,"sRectangles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Pool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pool_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Pool_obj::sPoints,"sPoints");
	HX_VISIT_MEMBER_NAME(Pool_obj::sPoints3D,"sPoints3D");
	HX_VISIT_MEMBER_NAME(Pool_obj::sMatrices,"sMatrices");
	HX_VISIT_MEMBER_NAME(Pool_obj::sMatrices3D,"sMatrices3D");
	HX_VISIT_MEMBER_NAME(Pool_obj::sRectangles,"sRectangles");
};

#endif

hx::Class Pool_obj::__mClass;

static ::String Pool_obj_sStaticFields[] = {
	HX_HCSTRING("sPoints","\xf6","\xde","\xe6","\xd9"),
	HX_HCSTRING("sPoints3D","\x27","\x35","\x95","\x48"),
	HX_HCSTRING("sMatrices","\x2d","\x59","\x07","\x03"),
	HX_HCSTRING("sMatrices3D","\x1e","\xeb","\x71","\x56"),
	HX_HCSTRING("sRectangles","\xb7","\x07","\x58","\x0e"),
	HX_HCSTRING("getPoint","\xda","\xc3","\x66","\x26"),
	HX_HCSTRING("putPoint","\x01","\x33","\x84","\xc2"),
	HX_HCSTRING("getPoint3D","\x0b","\x1b","\x83","\xa0"),
	HX_HCSTRING("putPoint3D","\xf2","\xe1","\x37","\x92"),
	HX_HCSTRING("getMatrix","\x77","\xbf","\x1e","\x38"),
	HX_HCSTRING("putMatrix","\x70","\x92","\xc2","\x35"),
	HX_HCSTRING("getMatrix3D","\xe8","\xf7","\xe6","\x8c"),
	HX_HCSTRING("putMatrix3D","\x21","\x3b","\x60","\x19"),
	HX_HCSTRING("getRectangle","\xb9","\x70","\xd3","\x28"),
	HX_HCSTRING("putRectangle","\x60","\xff","\x74","\x86"),
	::String(null())
};

void Pool_obj::__register()
{
	hx::Object *dummy = new Pool_obj;
	Pool_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.utils.Pool","\x3f","\x3e","\xc8","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Pool_obj::__GetStatic;
	__mClass->mSetStaticField = &Pool_obj::__SetStatic;
	__mClass->mMarkFunc = Pool_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Pool_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Pool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Pool_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pool_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Pool_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_32_boot)
HXDLIN(  32)			int length = null();
HXDLIN(  32)			bool fixed = null();
HXDLIN(  32)			return  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_32_boot)
HXDLIN(  32)		sPoints =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_33_boot)
HXDLIN(  33)			int length = null();
HXDLIN(  33)			bool fixed = null();
HXDLIN(  33)			return  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_33_boot)
HXDLIN(  33)		sPoints3D =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_34_boot)
HXDLIN(  34)			int length = null();
HXDLIN(  34)			bool fixed = null();
HXDLIN(  34)			return  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_34_boot)
HXDLIN(  34)		sMatrices =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_35_boot)
HXDLIN(  35)			int length = null();
HXDLIN(  35)			bool fixed = null();
HXDLIN(  35)			return  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_35_boot)
HXDLIN(  35)		sMatrices3D =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1ff1461100cd9d30_36_boot)
HXDLIN(  36)			int length = null();
HXDLIN(  36)			bool fixed = null();
HXDLIN(  36)			return  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_36_boot)
HXDLIN(  36)		sRectangles =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace starling
} // end namespace utils
