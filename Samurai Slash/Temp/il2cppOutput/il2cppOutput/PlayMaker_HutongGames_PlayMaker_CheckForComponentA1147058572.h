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

// HutongGames.PlayMaker.CheckForComponentAttribute
struct  CheckForComponentAttribute_t1147058572  : public Attribute_t542643598
{
public:
	// System.Type HutongGames.PlayMaker.CheckForComponentAttribute::type0
	Type_t * ___type0_0;
	// System.Type HutongGames.PlayMaker.CheckForComponentAttribute::type1
	Type_t * ___type1_1;
	// System.Type HutongGames.PlayMaker.CheckForComponentAttribute::type2
	Type_t * ___type2_2;

public:
	inline static int32_t get_offset_of_type0_0() { return static_cast<int32_t>(offsetof(CheckForComponentAttribute_t1147058572, ___type0_0)); }
	inline Type_t * get_type0_0() const { return ___type0_0; }
	inline Type_t ** get_address_of_type0_0() { return &___type0_0; }
	inline void set_type0_0(Type_t * value)
	{
		___type0_0 = value;
		Il2CppCodeGenWriteBarrier(&___type0_0, value);
	}

	inline static int32_t get_offset_of_type1_1() { return static_cast<int32_t>(offsetof(CheckForComponentAttribute_t1147058572, ___type1_1)); }
	inline Type_t * get_type1_1() const { return ___type1_1; }
	inline Type_t ** get_address_of_type1_1() { return &___type1_1; }
	inline void set_type1_1(Type_t * value)
	{
		___type1_1 = value;
		Il2CppCodeGenWriteBarrier(&___type1_1, value);
	}

	inline static int32_t get_offset_of_type2_2() { return static_cast<int32_t>(offsetof(CheckForComponentAttribute_t1147058572, ___type2_2)); }
	inline Type_t * get_type2_2() const { return ___type2_2; }
	inline Type_t ** get_address_of_type2_2() { return &___type2_2; }
	inline void set_type2_2(Type_t * value)
	{
		___type2_2 = value;
		Il2CppCodeGenWriteBarrier(&___type2_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
