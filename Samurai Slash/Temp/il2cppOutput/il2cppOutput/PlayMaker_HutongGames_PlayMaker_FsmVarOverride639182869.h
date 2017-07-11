#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// HutongGames.PlayMaker.NamedVariable
struct NamedVariable_t3026441313;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmVarOverride
struct  FsmVarOverride_t639182869  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVarOverride::variable
	NamedVariable_t3026441313 * ___variable_0;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.FsmVarOverride::fsmVar
	FsmVar_t2872592513 * ___fsmVar_1;
	// System.Boolean HutongGames.PlayMaker.FsmVarOverride::isEdited
	bool ___isEdited_2;

public:
	inline static int32_t get_offset_of_variable_0() { return static_cast<int32_t>(offsetof(FsmVarOverride_t639182869, ___variable_0)); }
	inline NamedVariable_t3026441313 * get_variable_0() const { return ___variable_0; }
	inline NamedVariable_t3026441313 ** get_address_of_variable_0() { return &___variable_0; }
	inline void set_variable_0(NamedVariable_t3026441313 * value)
	{
		___variable_0 = value;
		Il2CppCodeGenWriteBarrier(&___variable_0, value);
	}

	inline static int32_t get_offset_of_fsmVar_1() { return static_cast<int32_t>(offsetof(FsmVarOverride_t639182869, ___fsmVar_1)); }
	inline FsmVar_t2872592513 * get_fsmVar_1() const { return ___fsmVar_1; }
	inline FsmVar_t2872592513 ** get_address_of_fsmVar_1() { return &___fsmVar_1; }
	inline void set_fsmVar_1(FsmVar_t2872592513 * value)
	{
		___fsmVar_1 = value;
		Il2CppCodeGenWriteBarrier(&___fsmVar_1, value);
	}

	inline static int32_t get_offset_of_isEdited_2() { return static_cast<int32_t>(offsetof(FsmVarOverride_t639182869, ___isEdited_2)); }
	inline bool get_isEdited_2() const { return ___isEdited_2; }
	inline bool* get_address_of_isEdited_2() { return &___isEdited_2; }
	inline void set_isEdited_2(bool value)
	{
		___isEdited_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
