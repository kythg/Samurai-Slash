#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_NamedVariable3026441313.h"

// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1021602117;
// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmObject
struct  FsmObject_t2785794313  : public NamedVariable_t3026441313
{
public:
	// System.String HutongGames.PlayMaker.FsmObject::typeName
	String_t* ___typeName_5;
	// UnityEngine.Object HutongGames.PlayMaker.FsmObject::value
	Object_t1021602117 * ___value_6;
	// System.Type HutongGames.PlayMaker.FsmObject::objectType
	Type_t * ___objectType_7;

public:
	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(FsmObject_t2785794313, ___typeName_5)); }
	inline String_t* get_typeName_5() const { return ___typeName_5; }
	inline String_t** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(String_t* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier(&___typeName_5, value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(FsmObject_t2785794313, ___value_6)); }
	inline Object_t1021602117 * get_value_6() const { return ___value_6; }
	inline Object_t1021602117 ** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(Object_t1021602117 * value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier(&___value_6, value);
	}

	inline static int32_t get_offset_of_objectType_7() { return static_cast<int32_t>(offsetof(FsmObject_t2785794313, ___objectType_7)); }
	inline Type_t * get_objectType_7() const { return ___objectType_7; }
	inline Type_t ** get_address_of_objectType_7() { return &___objectType_7; }
	inline void set_objectType_7(Type_t * value)
	{
		___objectType_7 = value;
		Il2CppCodeGenWriteBarrier(&___objectType_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
