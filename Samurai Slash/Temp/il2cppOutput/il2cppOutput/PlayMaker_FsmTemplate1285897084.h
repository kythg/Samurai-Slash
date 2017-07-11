#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;
// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FsmTemplate
struct  FsmTemplate_t1285897084  : public ScriptableObject_t1975622470
{
public:
	// System.String FsmTemplate::category
	String_t* ___category_2;
	// HutongGames.PlayMaker.Fsm FsmTemplate::fsm
	Fsm_t917886356 * ___fsm_3;

public:
	inline static int32_t get_offset_of_category_2() { return static_cast<int32_t>(offsetof(FsmTemplate_t1285897084, ___category_2)); }
	inline String_t* get_category_2() const { return ___category_2; }
	inline String_t** get_address_of_category_2() { return &___category_2; }
	inline void set_category_2(String_t* value)
	{
		___category_2 = value;
		Il2CppCodeGenWriteBarrier(&___category_2, value);
	}

	inline static int32_t get_offset_of_fsm_3() { return static_cast<int32_t>(offsetof(FsmTemplate_t1285897084, ___fsm_3)); }
	inline Fsm_t917886356 * get_fsm_3() const { return ___fsm_3; }
	inline Fsm_t917886356 ** get_address_of_fsm_3() { return &___fsm_3; }
	inline void set_fsm_3(Fsm_t917886356 * value)
	{
		___fsm_3 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
