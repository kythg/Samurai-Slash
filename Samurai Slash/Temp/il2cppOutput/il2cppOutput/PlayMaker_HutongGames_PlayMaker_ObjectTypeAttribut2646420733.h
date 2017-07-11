#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.ObjectTypeAttribute
struct  ObjectTypeAttribute_t2646420733  : public Attribute_t542643598
{
public:
	// System.Type HutongGames.PlayMaker.ObjectTypeAttribute::objectType
	Type_t * ___objectType_0;

public:
	inline static int32_t get_offset_of_objectType_0() { return static_cast<int32_t>(offsetof(ObjectTypeAttribute_t2646420733, ___objectType_0)); }
	inline Type_t * get_objectType_0() const { return ___objectType_0; }
	inline Type_t ** get_address_of_objectType_0() { return &___objectType_0; }
	inline void set_objectType_0(Type_t * value)
	{
		___objectType_0 = value;
		Il2CppCodeGenWriteBarrier(&___objectType_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
