// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl_display3D_Uniform
#define INCLUDED_openfl_display3D_Uniform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)
HX_DECLARE_CLASS2(openfl,display3D,Uniform)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES Uniform_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uniform_obj OBJ_;
		Uniform_obj();

	public:
		enum { _hx_ClassId = 0x288bd2fd };

		void __construct( ::lime::_backend::native::NativeGLRenderContext gl);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Uniform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.Uniform"); }
		static hx::ObjectPtr< Uniform_obj > __new( ::lime::_backend::native::NativeGLRenderContext gl);
		static hx::ObjectPtr< Uniform_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::_backend::native::NativeGLRenderContext gl);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Uniform","\x14","\x69","\xb5","\x82"); }

		::String name;
		int location;
		int type;
		int size;
		 ::lime::utils::ArrayBufferView regData;
		int regIndex;
		int regCount;
		bool isDirty;
		 ::lime::_backend::native::NativeGLRenderContext gl;
		 ::lime::utils::BytePointerData regDataPointer;
		void flush();
		::Dynamic flush_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Uniform */ 
