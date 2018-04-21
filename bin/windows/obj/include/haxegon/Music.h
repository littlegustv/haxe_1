// Generated by Haxe 3.4.7
#ifndef INCLUDED_haxegon_Music
#define INCLUDED_haxegon_Music

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Music)

namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES Music_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Music_obj OBJ_;
		Music_obj();

	public:
		enum { _hx_ClassId = 0x08876849 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxegon.Music")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxegon.Music"); }

		hx::ObjectPtr< Music_obj > __new() {
			hx::ObjectPtr< Music_obj > __this = new Music_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Music_obj > __alloc(hx::Ctx *_hx_ctx) {
			Music_obj *__this = (Music_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Music_obj), false, "haxegon.Music"));
			*(void **)__this = Music_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Music_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Music","\x85","\x40","\x88","\xa3"); }

		static void __boot();
		static void play(::String soundname,hx::Null< Float >  fadeintime,hx::Null< bool >  loop,hx::Null< Float >  volume,hx::Null< Float >  panning);
		static ::Dynamic play_dyn();

		static void stop(hx::Null< Float >  fadeout);
		static ::Dynamic stop_dyn();

		static Float currentposition;
		static Float get_currentposition();
		static ::Dynamic get_currentposition_dyn();

		static Float set_currentposition(Float newposition);
		static ::Dynamic set_currentposition_dyn();

		static Float crossfade;
		static ::String _currentsong;
		static ::String get_currentsong();
		static ::Dynamic get_currentsong_dyn();

		static ::String set_currentsong(::String newsong);
		static ::Dynamic set_currentsong_dyn();

};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Music */ 
