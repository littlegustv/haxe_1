// Generated by Haxe 3.4.7
#ifndef INCLUDED_starling_rendering_Effect
#define INCLUDED_starling_rendering_Effect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(starling,rendering,Effect)
HX_DECLARE_CLASS2(starling,rendering,IndexData)
HX_DECLARE_CLASS2(starling,rendering,Program)
HX_DECLARE_CLASS2(starling,rendering,VertexData)
HX_DECLARE_CLASS2(starling,rendering,VertexDataFormat)

namespace starling{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES Effect_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Effect_obj OBJ_;
		Effect_obj();

	public:
		enum { _hx_ClassId = 0x2a6d1e35 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.rendering.Effect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.rendering.Effect"); }
		static hx::ObjectPtr< Effect_obj > __new();
		static hx::ObjectPtr< Effect_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Effect_obj();

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
		::String __ToString() const { return HX_HCSTRING("Effect","\xb1","\xce","\x37","\x95"); }

		static void __boot();
		static  ::starling::rendering::VertexDataFormat VERTEX_FORMAT;
		static  ::haxe::ds::StringMap sProgramNameCache;
		 ::openfl::display3D::VertexBuffer3D _vertexBuffer;
		int _vertexBufferSize;
		 ::openfl::display3D::IndexBuffer3D _indexBuffer;
		int _indexBufferSize;
		bool _indexBufferUsesQuadLayout;
		 ::openfl::geom::Matrix3D _mvpMatrix3D;
		 ::Dynamic _onRestore;
		Dynamic _onRestore_dyn() { return _onRestore;}
		::String _programBaseName;
		void dispose();
		::Dynamic dispose_dyn();

		void onContextCreated( ::openfl::events::Event event);
		::Dynamic onContextCreated_dyn();

		void purgeBuffers(hx::Null< bool >  vertexBuffer,hx::Null< bool >  indexBuffer);
		::Dynamic purgeBuffers_dyn();

		void uploadIndexData( ::starling::rendering::IndexData indexData,::String bufferUsage);
		::Dynamic uploadIndexData_dyn();

		void uploadVertexData( ::starling::rendering::VertexData vertexData,::String bufferUsage);
		::Dynamic uploadVertexData_dyn();

		void render(hx::Null< int >  firstIndex,hx::Null< int >  numTriangles);
		::Dynamic render_dyn();

		virtual void beforeDraw( ::openfl::display3D::Context3D context);
		::Dynamic beforeDraw_dyn();

		virtual void afterDraw( ::openfl::display3D::Context3D context);
		::Dynamic afterDraw_dyn();

		virtual  ::starling::rendering::Program createProgram();
		::Dynamic createProgram_dyn();

		virtual int get_programVariantName();
		::Dynamic get_programVariantName_dyn();

		::String get_programBaseName();
		::Dynamic get_programBaseName_dyn();

		::String set_programBaseName(::String value);
		::Dynamic set_programBaseName_dyn();

		::String get_programName();
		::Dynamic get_programName_dyn();

		 ::starling::rendering::Program get_program();
		::Dynamic get_program_dyn();

		 ::Dynamic get_onRestore();
		::Dynamic get_onRestore_dyn();

		 ::Dynamic set_onRestore( ::Dynamic value);
		::Dynamic set_onRestore_dyn();

		virtual  ::starling::rendering::VertexDataFormat get_vertexFormat();
		::Dynamic get_vertexFormat_dyn();

		 ::openfl::geom::Matrix3D get_mvpMatrix3D();
		::Dynamic get_mvpMatrix3D_dyn();

		 ::openfl::geom::Matrix3D set_mvpMatrix3D( ::openfl::geom::Matrix3D value);
		::Dynamic set_mvpMatrix3D_dyn();

		 ::openfl::display3D::IndexBuffer3D get_indexBuffer();
		::Dynamic get_indexBuffer_dyn();

		int get_indexBufferSize();
		::Dynamic get_indexBufferSize_dyn();

		 ::openfl::display3D::VertexBuffer3D get_vertexBuffer();
		::Dynamic get_vertexBuffer_dyn();

		int get_vertexBufferSize();
		::Dynamic get_vertexBufferSize_dyn();

};

} // end namespace starling
} // end namespace rendering

#endif /* INCLUDED_starling_rendering_Effect */ 
