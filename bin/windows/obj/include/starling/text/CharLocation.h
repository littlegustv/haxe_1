// Generated by Haxe 3.4.7
#ifndef INCLUDED_starling_text_CharLocation
#define INCLUDED_starling_text_CharLocation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS2(starling,text,BitmapChar)
HX_DECLARE_CLASS2(starling,text,CharLocation)

namespace starling{
namespace text{


class HXCPP_CLASS_ATTRIBUTES CharLocation_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CharLocation_obj OBJ_;
		CharLocation_obj();

	public:
		enum { _hx_ClassId = 0x34f00164 };

		void __construct( ::starling::text::BitmapChar _hx_char);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.text.CharLocation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.text.CharLocation"); }
		static hx::ObjectPtr< CharLocation_obj > __new( ::starling::text::BitmapChar _hx_char);
		static hx::ObjectPtr< CharLocation_obj > __alloc(hx::Ctx *_hx_ctx, ::starling::text::BitmapChar _hx_char);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CharLocation_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CharLocation","\x4b","\x9b","\x25","\x1a"); }

		static void __boot();
		static  ::openfl::_Vector::AbstractVector sInstancePool;
		static ::Array< ::Dynamic> sVectorPool;
		static  ::openfl::_Vector::AbstractVector sInstanceLoan;
		static ::Array< ::Dynamic> sVectorLoan;
		static  ::starling::text::CharLocation instanceFromPool( ::starling::text::BitmapChar _hx_char);
		static ::Dynamic instanceFromPool_dyn();

		static  ::openfl::_Vector::AbstractVector vectorFromPool();
		static ::Dynamic vectorFromPool_dyn();

		static void rechargePool();
		static ::Dynamic rechargePool_dyn();

		 ::starling::text::BitmapChar _hx_char;
		Float scale;
		Float x;
		Float y;
		 ::starling::text::CharLocation reset( ::starling::text::BitmapChar _hx_char);
		::Dynamic reset_dyn();

};

} // end namespace starling
} // end namespace text

#endif /* INCLUDED_starling_text_CharLocation */ 
