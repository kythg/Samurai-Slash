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

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugLog
struct  DebugLog_t3575156013  : public BaseLogAction_t2924498175
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugLog::logLevel
	int32_t ___logLevel_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.DebugLog::text
	FsmString_t2414474701 * ___text_13;

public:
	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(DebugLog_t3575156013, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_text_13() { return static_cast<int32_t>(offsetof(DebugLog_t3575156013, ___text_13)); }
	inline FsmString_t2414474701 * get_text_13() const { return ___text_13; }
	inline FsmString_t2414474701 ** get_address_of_text_13() { return &___text_13; }
	inline void set_text_13(FsmString_t2414474701 * value)
	{
		___text_13 = value;
		Il2CppCodeGenWriteBarrier(&___text_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
