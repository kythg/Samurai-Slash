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

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugFloat
struct  DebugFloat_t2231934453  : public BaseLogAction_t2924498175
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugFloat::logLevel
	int32_t ___logLevel_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DebugFloat::floatVariable
	FsmFloat_t937133978 * ___floatVariable_13;

public:
	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(DebugFloat_t2231934453, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_floatVariable_13() { return static_cast<int32_t>(offsetof(DebugFloat_t2231934453, ___floatVariable_13)); }
	inline FsmFloat_t937133978 * get_floatVariable_13() const { return ___floatVariable_13; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_13() { return &___floatVariable_13; }
	inline void set_floatVariable_13(FsmFloat_t937133978 * value)
	{
		___floatVariable_13 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
