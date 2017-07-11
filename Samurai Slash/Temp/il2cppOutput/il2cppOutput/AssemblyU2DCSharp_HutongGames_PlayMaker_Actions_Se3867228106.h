#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetFogDensity
struct  SetFogDensity_t3867228106  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetFogDensity::fogDensity
	FsmFloat_t937133978 * ___fogDensity_11;
	// System.Boolean HutongGames.PlayMaker.Actions.SetFogDensity::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_fogDensity_11() { return static_cast<int32_t>(offsetof(SetFogDensity_t3867228106, ___fogDensity_11)); }
	inline FsmFloat_t937133978 * get_fogDensity_11() const { return ___fogDensity_11; }
	inline FsmFloat_t937133978 ** get_address_of_fogDensity_11() { return &___fogDensity_11; }
	inline void set_fogDensity_11(FsmFloat_t937133978 * value)
	{
		___fogDensity_11 = value;
		Il2CppCodeGenWriteBarrier(&___fogDensity_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(SetFogDensity_t3867228106, ___everyFrame_12)); }
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
