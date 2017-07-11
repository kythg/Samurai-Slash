#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ba2924498175.h"
#include "PlayMaker_HutongGames_PlayMaker_LogLevel3809977218.h"

// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugFsmVariable
struct  DebugFsmVariable_t1864498445  : public BaseLogAction_t2924498175
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugFsmVariable::logLevel
	int32_t ___logLevel_12;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.DebugFsmVariable::variable
	FsmVar_t2872592513 * ___variable_13;

public:
	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(DebugFsmVariable_t1864498445, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_variable_13() { return static_cast<int32_t>(offsetof(DebugFsmVariable_t1864498445, ___variable_13)); }
	inline FsmVar_t2872592513 * get_variable_13() const { return ___variable_13; }
	inline FsmVar_t2872592513 ** get_address_of_variable_13() { return &___variable_13; }
	inline void set_variable_13(FsmVar_t2872592513 * value)
	{
		___variable_13 = value;
		Il2CppCodeGenWriteBarrier(&___variable_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
