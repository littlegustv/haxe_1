// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_graphics_Renderer
#define INCLUDED_lime_graphics_Renderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeRenderer)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_graphics_RenderContext_Void)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,graphics,RendererType)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES Renderer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Renderer_obj OBJ_;
		Renderer_obj();

	public:
		enum { _hx_ClassId = 0x149a6767 };

		void __construct( ::lime::ui::Window window);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.Renderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.graphics.Renderer"); }
		static hx::ObjectPtr< Renderer_obj > __new( ::lime::ui::Window window);
		static hx::ObjectPtr< Renderer_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::ui::Window window);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Renderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Renderer","\x63","\x81","\x8d","\x8c"); }

		 ::lime::graphics::RenderContext context;
		 ::lime::app::_Event_Void_Void onContextLost;
		 ::lime::app::_Event_lime_graphics_RenderContext_Void onContextRestored;
		 ::lime::app::_Event_Void_Void onRender;
		 ::lime::graphics::RendererType type;
		 ::lime::ui::Window window;
		 ::lime::_backend::native::NativeRenderer backend;
		void create();
		::Dynamic create_dyn();

		void flip();
		::Dynamic flip_dyn();

		 ::lime::graphics::Image readPixels( ::lime::math::Rectangle rect);
		::Dynamic readPixels_dyn();

		void render();
		::Dynamic render_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_Renderer */ 
