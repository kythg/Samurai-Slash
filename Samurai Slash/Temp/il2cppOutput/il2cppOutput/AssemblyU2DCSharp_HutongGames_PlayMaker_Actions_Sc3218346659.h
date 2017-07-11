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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ScaleTime
struct  ScaleTime_t3218346659  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScaleTime::timeScale
	FsmFloat_t937133978 * ___timeScale_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ScaleTime::adjustFixedDeltaTime
	FsmBool_t664485696 * ___adjustFixedDeltaTime_12;
	// System.Boolean HutongGames.PlayMaker.Actions.ScaleTime::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_timeScale_11() { return static_cast<int32_t>(offsetof(ScaleTime_t3218346659, ___timeScale_11)); }
	inline FsmFloat_t937133978 * get_timeScale_11() const { return ___timeScale_11; }
	inline FsmFloat_t937133978 ** get_address_of_timeScale_11() { return &___timeScale_11; }
	inline void set_timeScale_11(FsmFloat_t937133978 * value)
	{
		___timeScale_11 = value;
		Il2CppCodeGenWriteBarrier(&___timeScale_11, value);
	}

	inline static int32_t get_offset_of_adjustFixedDeltaTime_12() { return static_cast<int32_t>(offsetof(ScaleTime_t3218346659, ___adjustFixedDeltaTime_12)); }
	inline FsmBool_t664485696 * get_adjustFixedDeltaTime_12() const { return ___adjustFixedDeltaTime_12; }
	inline FsmBool_t664485696 ** get_address_of_adjustFixedDeltaTime_12() { return &___adjustFixedDeltaTime_12; }
	inline void set_adjustFixedDeltaTime_12(FsmBool_t664485696 * value)
	{
		___adjustFixedDeltaTime_12 = value;
		Il2CppCodeGenWriteBarrier(&___adjustFixedDeltaTime_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(ScaleTime_t3218346659, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
