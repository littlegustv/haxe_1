// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Animate
#include <Animate.h>
#endif
#ifndef INCLUDED_Behavior
#include <Behavior.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_Velocity
#include <Velocity.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0c6127a219b5d0f_53_new,"Entity","new",0x9c9485b5,"Entity.new","Main.hx",53,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_b0c6127a219b5d0f_66_update,"Entity","update",0xee9313d4,"Entity.update","Main.hx",66,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_b0c6127a219b5d0f_76_draw,"Entity","draw",0x5ece210f,"Entity.draw","Main.hx",76,0x087e5c05)

void Entity_obj::__construct(Float x,Float y,::String sprite){
            	HX_GC_STACKFRAME(&_hx_pos_b0c6127a219b5d0f_53_new)
HXLINE(  58)		this->behaviors = ::Array_obj< ::Dynamic>::__new();
HXLINE(  60)		this->x = x;
HXLINE(  61)		this->y = y;
HXLINE(  62)		this->alive = true;
HXLINE(  63)		::Array< ::Dynamic> _hx_tmp = this->behaviors;
HXDLIN(  63)		_hx_tmp->push( ::Animate_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),sprite,((Float)0.1)));
HXLINE(  64)		::Array< ::Dynamic> _hx_tmp1 = this->behaviors;
HXDLIN(  64)		_hx_tmp1->push( ::Velocity_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),(int)20,(int)10));
            	}

Dynamic Entity_obj::__CreateEmpty() { return new Entity_obj; }

void *Entity_obj::_hx_vtable = 0;

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Entity_obj > _hx_result = new Entity_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Entity_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39b08743;
}

void Entity_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_b0c6127a219b5d0f_66_update)
HXLINE(  67)		if ((this->y > (int)100)) {
HXLINE(  68)			this->alive = false;
            		}
HXLINE(  70)		{
HXLINE(  70)			int _g = (int)0;
HXDLIN(  70)			::Array< ::Dynamic> _g1 = this->behaviors;
HXDLIN(  70)			while((_g < _g1->length)){
HXLINE(  70)				 ::Behavior behavior = _g1->__get(_g).StaticCast<  ::Behavior >();
HXDLIN(  70)				_g = (_g + (int)1);
HXLINE(  71)				behavior->update(dt);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,update,(void))

void Entity_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_b0c6127a219b5d0f_76_draw)
HXDLIN(  76)		int _g = (int)0;
HXDLIN(  76)		::Array< ::Dynamic> _g1 = this->behaviors;
HXDLIN(  76)		while((_g < _g1->length)){
HXDLIN(  76)			 ::Behavior behavior = _g1->__get(_g).StaticCast<  ::Behavior >();
HXDLIN(  76)			_g = (_g + (int)1);
HXLINE(  77)			behavior->draw();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,draw,(void))


hx::ObjectPtr< Entity_obj > Entity_obj::__new(Float x,Float y,::String sprite) {
	hx::ObjectPtr< Entity_obj > __this = new Entity_obj();
	__this->__construct(x,y,sprite);
	return __this;
}

hx::ObjectPtr< Entity_obj > Entity_obj::__alloc(hx::Ctx *_hx_ctx,Float x,Float y,::String sprite) {
	Entity_obj *__this = (Entity_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Entity_obj), true, "Entity"));
	*(void **)__this = Entity_obj::_hx_vtable;
	__this->__construct(x,y,sprite);
	return __this;
}

Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(alive,"alive");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(alive,"alive");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
}

hx::Val Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { return hx::Val( alive ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"behaviors") ) { return hx::Val( behaviors ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Entity_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { alive=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("behaviors","\xa1","\xef","\xab","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Entity_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Entity_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Entity_obj,alive),HX_HCSTRING("alive","\xcd","\x63","\x91","\x21")},
	{hx::fsString,(int)offsetof(Entity_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Entity_obj,behaviors),HX_HCSTRING("behaviors","\xa1","\xef","\xab","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Entity_obj_sStaticStorageInfo = 0;
#endif

static ::String Entity_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("behaviors","\xa1","\xef","\xab","\x35"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void Entity_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Entity_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Object *dummy = new Entity_obj;
	Entity_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Entity","\x43","\x87","\xb0","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Entity_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Entity_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Entity_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Entity_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Entity_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

