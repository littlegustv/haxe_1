// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl_display_Graphics
#define INCLUDED_openfl_display_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Graphics_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();

	public:
		enum { _hx_ClassId = 0x6b098f39 };

		void __construct( ::openfl::display::DisplayObject owner);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Graphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.Graphics"); }
		static hx::ObjectPtr< Graphics_obj > __new( ::openfl::display::DisplayObject owner);
		static hx::ObjectPtr< Graphics_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject owner);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics_obj();

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
		::String __ToString() const { return HX_HCSTRING("Graphics","\xeb","\xb4","\x19","\xec"); }

		static void __boot();
		static  ::Dynamic maxTextureHeight;
		static  ::Dynamic maxTextureWidth;
		 ::openfl::geom::Rectangle _hx___bounds;
		 ::openfl::_internal::renderer::DrawCommandBuffer _hx___commands;
		bool _hx___dirty;
		int _hx___height;
		bool _hx___managed;
		Float _hx___positionX;
		Float _hx___positionY;
		 ::openfl::geom::Matrix _hx___renderTransform;
		Float _hx___strokePadding;
		bool _hx___transformDirty;
		bool _hx___visible;
		 ::openfl::display::DisplayObject _hx___owner;
		int _hx___width;
		 ::openfl::geom::Matrix _hx___worldTransform;
		 ::lime::graphics::cairo::Cairo _hx___cairo;
		 ::openfl::display::BitmapData _hx___bitmap;
		void beginBitmapFill( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		::Dynamic beginBitmapFill_dyn();

		void beginFill(hx::Null< int >  color,hx::Null< Float >  alpha);
		::Dynamic beginFill_dyn();

		void beginGradientFill( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,hx::Null< Float >  focalPointRatio);
		::Dynamic beginGradientFill_dyn();

		void clear();
		::Dynamic clear_dyn();

		void copyFrom( ::openfl::display::Graphics sourceGraphics);
		::Dynamic copyFrom_dyn();

		void cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		::Dynamic cubicCurveTo_dyn();

		void curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		::Dynamic curveTo_dyn();

		void drawCircle(Float x,Float y,Float radius);
		::Dynamic drawCircle_dyn();

		void drawEllipse(Float x,Float y,Float width,Float height);
		::Dynamic drawEllipse_dyn();

		void drawGraphicsData( ::openfl::_Vector::AbstractVector graphicsData);
		::Dynamic drawGraphicsData_dyn();

		void drawPath( ::openfl::_Vector::AbstractVector commands, ::openfl::_Vector::AbstractVector data, ::Dynamic winding);
		::Dynamic drawPath_dyn();

		void drawRect(Float x,Float y,Float width,Float height);
		::Dynamic drawRect_dyn();

		void drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight);
		::Dynamic drawRoundRect_dyn();

		void drawRoundRectComplex(Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius);
		::Dynamic drawRoundRectComplex_dyn();

		void drawTriangles( ::openfl::_Vector::AbstractVector vertices, ::openfl::_Vector::AbstractVector indices, ::openfl::_Vector::AbstractVector uvtData, ::Dynamic culling);
		::Dynamic drawTriangles_dyn();

		void endFill();
		::Dynamic endFill_dyn();

		void lineBitmapStyle( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		::Dynamic lineBitmapStyle_dyn();

		void lineGradientStyle( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,hx::Null< Float >  focalPointRatio);
		::Dynamic lineGradientStyle_dyn();

		void lineStyle( ::Dynamic thickness,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< bool >  pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints,hx::Null< Float >  miterLimit);
		::Dynamic lineStyle_dyn();

		void lineTo(Float x,Float y);
		::Dynamic lineTo_dyn();

		void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		 ::openfl::_Vector::AbstractVector readGraphicsData(hx::Null< bool >  recurse);
		::Dynamic readGraphicsData_dyn();

		Float _hx___calculateBezierCubicPoint(Float t,Float p1,Float p2,Float p3,Float p4);
		::Dynamic _hx___calculateBezierCubicPoint_dyn();

		Float _hx___calculateBezierQuadPoint(Float t,Float p1,Float p2,Float p3);
		::Dynamic _hx___calculateBezierQuadPoint_dyn();

		void _hx___cleanup();
		::Dynamic _hx___cleanup_dyn();

		void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);
		::Dynamic _hx___getBounds_dyn();

		bool _hx___hitTest(Float x,Float y,bool shapeFlag, ::openfl::geom::Matrix matrix);
		::Dynamic _hx___hitTest_dyn();

		void _hx___inflateBounds(Float x,Float y);
		::Dynamic _hx___inflateBounds_dyn();

		void _hx___readGraphicsData( ::openfl::_Vector::AbstractVector graphicsData);
		::Dynamic _hx___readGraphicsData_dyn();

		void _hx___update();
		::Dynamic _hx___update_dyn();

		bool set___dirty(bool value);
		::Dynamic set___dirty_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Graphics */ 
