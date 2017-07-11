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
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.ActionTarget
struct  ActionTarget_t967701655  : public Attribute_t542643598
{
public:
	// System.Type HutongGames.PlayMaker.ActionTarget::objectType
	Type_t * ___objectType_0;
	// System.String HutongGames.PlayMaker.ActionTarget::fieldName
	String_t* ___fieldName_1;
	// System.Boolean HutongGames.PlayMaker.ActionTarget::allowPrefabs
	bool ___allowPrefabs_2;

public:
	inline static int32_t get_offset_of_objectType_0() { return static_cast<int32_t>(offsetof(ActionTarget_t967701655, ___objectType_0)); }
	inline Type_t * get_objectType_0() const { return ___objectType_0; }
	inline Type_t ** get_address_of_objectType_0() { return &___objectType_0; }
	inline void set_objectType_0(Type_t * value)
	{
		___objectType_0 = value;
		Il2CppCodeGenWriteBarrier(&___objectType_0, value);
	}

	inline static int32_t get_offset_of_fieldName_1() { return static_cast<int32_t>(offsetof(ActionTarget_t967701655, ___fieldName_1)); }
	inline String_t* get_fieldName_1() const { return ___fieldName_1; }
	inline String_t** get_address_of_fieldName_1() { return &___fieldName_1; }
	inline void set_fieldName_1(String_t* value)
	{
		___fieldName_1 = value;
		Il2CppCodeGenWriteBarrier(&___fieldName_1, value);
	}

	inline static int32_t get_offset_of_allowPrefabs_2() { return static_cast<int32_t>(offsetof(ActionTarget_t967701655, ___allowPrefabs_2)); }
	inline bool get_allowPrefabs_2() const { return ___allowPrefabs_2; }
	inline bool* get_address_of_allowPrefabs_2() { return &___allowPrefabs_2; }
	inline void set_allowPrefabs_2(bool value)
	{
		___allowPrefabs_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
