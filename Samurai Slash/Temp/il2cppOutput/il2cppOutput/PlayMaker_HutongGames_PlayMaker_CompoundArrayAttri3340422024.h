#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.CompoundArrayAttribute
struct  CompoundArrayAttribute_t3340422024  : public Attribute_t542643598
{
public:
	// System.String HutongGames.PlayMaker.CompoundArrayAttribute::name
	String_t* ___name_0;
	// System.String HutongGames.PlayMaker.CompoundArrayAttribute::firstArrayName
	String_t* ___firstArrayName_1;
	// System.String HutongGames.PlayMaker.CompoundArrayAttribute::secondArrayName
	String_t* ___secondArrayName_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CompoundArrayAttribute_t3340422024, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_firstArrayName_1() { return static_cast<int32_t>(offsetof(CompoundArrayAttribute_t3340422024, ___firstArrayName_1)); }
	inline String_t* get_firstArrayName_1() const { return ___firstArrayName_1; }
	inline String_t** get_address_of_firstArrayName_1() { return &___firstArrayName_1; }
	inline void set_firstArrayName_1(String_t* value)
	{
		___firstArrayName_1 = value;
		Il2CppCodeGenWriteBarrier(&___firstArrayName_1, value);
	}

	inline static int32_t get_offset_of_secondArrayName_2() { return static_cast<int32_t>(offsetof(CompoundArrayAttribute_t3340422024, ___secondArrayName_2)); }
	inline String_t* get_secondArrayName_2() const { return ___secondArrayName_2; }
	inline String_t** get_address_of_secondArrayName_2() { return &___secondArrayName_2; }
	inline void set_secondArrayName_2(String_t* value)
	{
		___secondArrayName_2 = value;
		Il2CppCodeGenWriteBarrier(&___secondArrayName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
