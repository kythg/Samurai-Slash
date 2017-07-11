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

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugInt
struct  DebugInt_t2620776244  : public BaseLogAction_t2924498175
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugInt::logLevel
	int32_t ___logLevel_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.DebugInt::intVariable
	FsmInt_t1273009179 * ___intVariable_13;

public:
	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(DebugInt_t2620776244, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_intVariable_13() { return static_cast<int32_t>(offsetof(DebugInt_t2620776244, ___intVariable_13)); }
	inline FsmInt_t1273009179 * get_intVariable_13() const { return ___intVariable_13; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_13() { return &___intVariable_13; }
	inline void set_intVariable_13(FsmInt_t1273009179 * value)
	{
		___intVariable_13 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
