// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_media_AudioContext
#define INCLUDED_lime_media_AudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,ALAudioContext)
HX_DECLARE_CLASS2(lime,media,ALCAudioContext)
HX_DECLARE_CLASS2(lime,media,AudioContext)
HX_DECLARE_CLASS2(lime,media,FlashAudioContext)
HX_DECLARE_CLASS2(lime,media,HTML5AudioContext)
HX_DECLARE_CLASS2(lime,media,WebAudioContext)
namespace lime{
namespace media{


class AudioContext_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef AudioContext_obj OBJ_;

	public:
		AudioContext_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("lime.media.AudioContext","\x5c","\xaf","\x9d","\x2f"); }
		::String __ToString() const { return HX_HCSTRING("AudioContext.","\x35","\xe6","\x53","\x77") + _hx_tag; }

		static ::lime::media::AudioContext CUSTOM( ::Dynamic data);
		static ::Dynamic CUSTOM_dyn();
		static ::lime::media::AudioContext FLASH( ::lime::media::FlashAudioContext context);
		static ::Dynamic FLASH_dyn();
		static ::lime::media::AudioContext HTML5( ::lime::media::HTML5AudioContext context);
		static ::Dynamic HTML5_dyn();
		static ::lime::media::AudioContext OPENAL( ::lime::media::ALCAudioContext alc, ::lime::media::ALAudioContext al);
		static ::Dynamic OPENAL_dyn();
		static ::lime::media::AudioContext WEB( ::lime::media::WebAudioContext context);
		static ::Dynamic WEB_dyn();
};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_AudioContext */ 
