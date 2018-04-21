// Generated by Haxe 3.4.7
#ifndef INCLUDED_starling_display_Disk
#define INCLUDED_starling_display_Disk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_display_Ring
#include <starling/display/Ring.h>
#endif
HX_DECLARE_CLASS2(starling,display,Disk)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(starling,display,Ring)
HX_DECLARE_CLASS2(starling,display,Sprite)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)

namespace starling{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Disk_obj : public  ::starling::display::Ring_obj
{
	public:
		typedef  ::starling::display::Ring_obj super;
		typedef Disk_obj OBJ_;
		Disk_obj();

	public:
		enum { _hx_ClassId = 0x36fbd777 };

		void __construct(Float xoff,Float yoff,Float radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< int >  __o_nsides, ::Dynamic startangle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.display.Disk")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.display.Disk"); }
		static hx::ObjectPtr< Disk_obj > __new(Float xoff,Float yoff,Float radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< int >  __o_nsides, ::Dynamic startangle);
		static hx::ObjectPtr< Disk_obj > __alloc(hx::Ctx *_hx_ctx,Float xoff,Float yoff,Float radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< int >  __o_nsides, ::Dynamic startangle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Disk_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Disk","\x7d","\x93","\x42","\x2d"); }

};

} // end namespace starling
} // end namespace display

#endif /* INCLUDED_starling_display_Disk */ 
