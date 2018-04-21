// Generated by Haxe 3.4.7
#ifndef INCLUDED_starling_textures_ConcreteTexture
#define INCLUDED_starling_textures_ConcreteTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_textures_Texture
#include <starling/textures/Texture.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,IShaderDrawable)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,NetStream)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(starling,textures,ConcreteTexture)
HX_DECLARE_CLASS2(starling,textures,Texture)

namespace starling{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES ConcreteTexture_obj : public  ::starling::textures::Texture_obj
{
	public:
		typedef  ::starling::textures::Texture_obj super;
		typedef ConcreteTexture_obj OBJ_;
		ConcreteTexture_obj();

	public:
		enum { _hx_ClassId = 0x2b45ed76 };

		void __construct( ::openfl::display3D::textures::TextureBase base,::String format,int width,int height,bool mipMapping,bool premultipliedAlpha,hx::Null< bool >  __o_optimizedForRenderTexture,hx::Null< Float >  __o_scale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.textures.ConcreteTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.textures.ConcreteTexture"); }
		static hx::ObjectPtr< ConcreteTexture_obj > __new( ::openfl::display3D::textures::TextureBase base,::String format,int width,int height,bool mipMapping,bool premultipliedAlpha,hx::Null< bool >  __o_optimizedForRenderTexture,hx::Null< Float >  __o_scale);
		static hx::ObjectPtr< ConcreteTexture_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::textures::TextureBase base,::String format,int width,int height,bool mipMapping,bool premultipliedAlpha,hx::Null< bool >  __o_optimizedForRenderTexture,hx::Null< Float >  __o_scale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConcreteTexture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ConcreteTexture","\xf6","\xe0","\xa8","\x9f"); }

		 ::openfl::display3D::textures::TextureBase _base;
		::String _format;
		int _width;
		int _height;
		bool _mipMapping;
		bool _premultipliedAlpha;
		bool _optimizedForRenderTexture;
		Float _scale;
		 ::Dynamic _onRestore;
		Dynamic _onRestore_dyn() { return _onRestore;}
		bool _dataUploaded;
		virtual void dispose();

		void uploadBitmap( ::openfl::display::Bitmap bitmap, ::Dynamic async);
		::Dynamic uploadBitmap_dyn();

		virtual void uploadBitmapData( ::openfl::display::BitmapData data, ::Dynamic async);
		::Dynamic uploadBitmapData_dyn();

		virtual void uploadAtfData( ::openfl::utils::ByteArrayData data,hx::Null< int >  offset, ::Dynamic async);
		::Dynamic uploadAtfData_dyn();

		void attachNetStream( ::openfl::net::NetStream netStream, ::Dynamic onComplete);
		::Dynamic attachNetStream_dyn();

		virtual void attachVideo(::String type, ::Dynamic attachment, ::Dynamic onComplete);
		::Dynamic attachVideo_dyn();

		void onContextCreated();
		::Dynamic onContextCreated_dyn();

		virtual  ::openfl::display3D::textures::TextureBase createBase();
		::Dynamic createBase_dyn();

		void recreateBase();
		::Dynamic recreateBase_dyn();

		void clear(hx::Null< int >  color,hx::Null< Float >  alpha);
		::Dynamic clear_dyn();

		void setDataUploaded();
		::Dynamic setDataUploaded_dyn();

		bool get_optimizedForRenderTexture();
		::Dynamic get_optimizedForRenderTexture_dyn();

		virtual bool get_isPotTexture();
		::Dynamic get_isPotTexture_dyn();

		 ::Dynamic get_onRestore();
		::Dynamic get_onRestore_dyn();

		 ::Dynamic set_onRestore( ::Dynamic value);
		::Dynamic set_onRestore_dyn();

		 ::openfl::display3D::textures::TextureBase get_base();

		 ::starling::textures::ConcreteTexture get_root();

		 ::Dynamic get_format();

		virtual Float get_width();

		virtual Float get_height();

		virtual Float get_nativeWidth();

		virtual Float get_nativeHeight();

		Float get_scale();

		bool get_mipMapping();

		bool get_premultipliedAlpha();

};

} // end namespace starling
} // end namespace textures

#endif /* INCLUDED_starling_textures_ConcreteTexture */ 
