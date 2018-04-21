// Generated by Haxe 3.4.7
#ifndef INCLUDED_starling_display_Line
#define INCLUDED_starling_display_Line

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_display_Poly4
#include <starling/display/Poly4.h>
#endif
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,Line)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,display,Poly4)
HX_DECLARE_CLASS2(starling,display,Quad)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)

namespace starling{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Line_obj : public  ::starling::display::Poly4_obj
{
	public:
		typedef  ::starling::display::Poly4_obj super;
		typedef Line_obj OBJ_;
		Line_obj();

	public:
		enum { _hx_ClassId = 0x3c45880e };

		void __construct(Float x1,Float y1,Float x2,Float y2,Float thickness,int color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.display.Line")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.display.Line"); }
		static hx::ObjectPtr< Line_obj > __new(Float x1,Float y1,Float x2,Float y2,Float thickness,int color);
		static hx::ObjectPtr< Line_obj > __alloc(hx::Ctx *_hx_ctx,Float x1,Float y1,Float x2,Float y2,Float thickness,int color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Line_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"); }

		 ::openfl::geom::Point from;
		 ::openfl::geom::Point to;
		 ::openfl::geom::Point l1;
		 ::openfl::geom::Point l2;
		 ::openfl::geom::Point l3;
		 ::openfl::geom::Point l4;
		Float thickness;
		void setPosition(Float x1,Float y1,Float x2,Float y2);
		::Dynamic setPosition_dyn();

};

} // end namespace starling
} // end namespace display

#endif /* INCLUDED_starling_display_Line */ 
