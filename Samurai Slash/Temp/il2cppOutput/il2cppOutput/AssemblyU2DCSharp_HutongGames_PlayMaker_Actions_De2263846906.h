﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ba2924498175.h"
#include "PlayMaker_HutongGames_PlayMaker_LogLevel3809977218.h"

// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugObject
struct  DebugObject_t2263846906  : public BaseLogAction_t2924498175
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugObject::logLevel
	int32_t ___logLevel_12;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.DebugObject::fsmObject
	FsmObject_t2785794313 * ___fsmObject_13;

public:
	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(DebugObject_t2263846906, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_fsmObject_13() { return static_cast<int32_t>(offsetof(DebugObject_t2263846906, ___fsmObject_13)); }
	inline FsmObject_t2785794313 * get_fsmObject_13() const { return ___fsmObject_13; }
	inline FsmObject_t2785794313 ** get_address_of_fsmObject_13() { return &___fsmObject_13; }
	inline void set_fsmObject_13(FsmObject_t2785794313 * value)
	{
		___fsmObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___fsmObject_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
