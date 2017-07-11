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

// HutongGames.PlayMaker.Actions.GetCosine
struct  GetCosine_t958852915  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetCosine::angle
	FsmFloat_t937133978 * ___angle_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetCosine::DegToRad
	FsmBool_t664485696 * ___DegToRad_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetCosine::result
	FsmFloat_t937133978 * ___result_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetCosine::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_angle_11() { return static_cast<int32_t>(offsetof(GetCosine_t958852915, ___angle_11)); }
	inline FsmFloat_t937133978 * get_angle_11() const { return ___angle_11; }
	inline FsmFloat_t937133978 ** get_address_of_angle_11() { return &___angle_11; }
	inline void set_angle_11(FsmFloat_t937133978 * value)
	{
		___angle_11 = value;
		Il2CppCodeGenWriteBarrier(&___angle_11, value);
	}

	inline static int32_t get_offset_of_DegToRad_12() { return static_cast<int32_t>(offsetof(GetCosine_t958852915, ___DegToRad_12)); }
	inline FsmBool_t664485696 * get_DegToRad_12() const { return ___DegToRad_12; }
	inline FsmBool_t664485696 ** get_address_of_DegToRad_12() { return &___DegToRad_12; }
	inline void set_DegToRad_12(FsmBool_t664485696 * value)
	{
		___DegToRad_12 = value;
		Il2CppCodeGenWriteBarrier(&___DegToRad_12, value);
	}

	inline static int32_t get_offset_of_result_13() { return static_cast<int32_t>(offsetof(GetCosine_t958852915, ___result_13)); }
	inline FsmFloat_t937133978 * get_result_13() const { return ___result_13; }
	inline FsmFloat_t937133978 ** get_address_of_result_13() { return &___result_13; }
	inline void set_result_13(FsmFloat_t937133978 * value)
	{
		___result_13 = value;
		Il2CppCodeGenWriteBarrier(&___result_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GetCosine_t958852915, ___everyFrame_14)); }
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
