// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry
#define INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_035ce49d07eb1206_920_new)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterMapEntry)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterUsage)

namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES RegisterMapEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RegisterMapEntry_obj OBJ_;
		RegisterMapEntry_obj();

	public:
		enum { _hx_ClassId = 0x1c4c8a4c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.RegisterMapEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.stage3D._AGALConverter.RegisterMapEntry"); }

		hx::ObjectPtr< RegisterMapEntry_obj > __new() {
			hx::ObjectPtr< RegisterMapEntry_obj > __this = new RegisterMapEntry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< RegisterMapEntry_obj > __alloc(hx::Ctx *_hx_ctx) {
			RegisterMapEntry_obj *__this = (RegisterMapEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RegisterMapEntry_obj), true, "openfl._internal.stage3D._AGALConverter.RegisterMapEntry"));
			*(void **)__this = RegisterMapEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_035ce49d07eb1206_920_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RegisterMapEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RegisterMapEntry","\xd9","\xc1","\x86","\x00"); }

		::String name;
		int number;
		int type;
		 ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry */ 
