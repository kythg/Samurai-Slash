﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EnableFog
struct  EnableFog_t18595813  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EnableFog::enableFog
	FsmBool_t664485696 * ___enableFog_11;
	// System.Boolean HutongGames.PlayMaker.Actions.EnableFog::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_enableFog_11() { return static_cast<int32_t>(offsetof(EnableFog_t18595813, ___enableFog_11)); }
	inline FsmBool_t664485696 * get_enableFog_11() const { return ___enableFog_11; }
	inline FsmBool_t664485696 ** get_address_of_enableFog_11() { return &___enableFog_11; }
	inline void set_enableFog_11(FsmBool_t664485696 * value)
	{
		___enableFog_11 = value;
		Il2CppCodeGenWriteBarrier(&___enableFog_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(EnableFog_t18595813, ___everyFrame_12)); }
	inline bool get_everyFrame_12() const { return ___everyFrame_12; }
	inline bool* get_address_of_everyFrame_12() { return &___everyFrame_12; }
	inline void set_everyFrame_12(bool value)
	{
		___everyFrame_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
