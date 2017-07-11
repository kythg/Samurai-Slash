#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmAnimationCurve
struct FsmAnimationCurve_t326747561;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SampleCurve
struct  SampleCurve_t702362601  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.SampleCurve::curve
	FsmAnimationCurve_t326747561 * ___curve_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SampleCurve::sampleAt
	FsmFloat_t937133978 * ___sampleAt_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SampleCurve::storeValue
	FsmFloat_t937133978 * ___storeValue_13;
	// System.Boolean HutongGames.PlayMaker.Actions.SampleCurve::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_curve_11() { return static_cast<int32_t>(offsetof(SampleCurve_t702362601, ___curve_11)); }
	inline FsmAnimationCurve_t326747561 * get_curve_11() const { return ___curve_11; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curve_11() { return &___curve_11; }
	inline void set_curve_11(FsmAnimationCurve_t326747561 * value)
	{
		___curve_11 = value;
		Il2CppCodeGenWriteBarrier(&___curve_11, value);
	}

	inline static int32_t get_offset_of_sampleAt_12() { return static_cast<int32_t>(offsetof(SampleCurve_t702362601, ___sampleAt_12)); }
	inline FsmFloat_t937133978 * get_sampleAt_12() const { return ___sampleAt_12; }
	inline FsmFloat_t937133978 ** get_address_of_sampleAt_12() { return &___sampleAt_12; }
	inline void set_sampleAt_12(FsmFloat_t937133978 * value)
	{
		___sampleAt_12 = value;
		Il2CppCodeGenWriteBarrier(&___sampleAt_12, value);
	}

	inline static int32_t get_offset_of_storeValue_13() { return static_cast<int32_t>(offsetof(SampleCurve_t702362601, ___storeValue_13)); }
	inline FsmFloat_t937133978 * get_storeValue_13() const { return ___storeValue_13; }
	inline FsmFloat_t937133978 ** get_address_of_storeValue_13() { return &___storeValue_13; }
	inline void set_storeValue_13(FsmFloat_t937133978 * value)
	{
		___storeValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeValue_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(SampleCurve_t702362601, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
