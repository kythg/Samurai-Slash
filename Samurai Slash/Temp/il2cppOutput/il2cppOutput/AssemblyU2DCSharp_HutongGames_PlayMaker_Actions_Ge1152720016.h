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

// HutongGames.PlayMaker.Actions.GetAtan2
struct  GetAtan2_t1152720016  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAtan2::xValue
	FsmFloat_t937133978 * ___xValue_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAtan2::yValue
	FsmFloat_t937133978 * ___yValue_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAtan2::angle
	FsmFloat_t937133978 * ___angle_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAtan2::RadToDeg
	FsmBool_t664485696 * ___RadToDeg_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GetAtan2::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_xValue_11() { return static_cast<int32_t>(offsetof(GetAtan2_t1152720016, ___xValue_11)); }
	inline FsmFloat_t937133978 * get_xValue_11() const { return ___xValue_11; }
	inline FsmFloat_t937133978 ** get_address_of_xValue_11() { return &___xValue_11; }
	inline void set_xValue_11(FsmFloat_t937133978 * value)
	{
		___xValue_11 = value;
		Il2CppCodeGenWriteBarrier(&___xValue_11, value);
	}

	inline static int32_t get_offset_of_yValue_12() { return static_cast<int32_t>(offsetof(GetAtan2_t1152720016, ___yValue_12)); }
	inline FsmFloat_t937133978 * get_yValue_12() const { return ___yValue_12; }
	inline FsmFloat_t937133978 ** get_address_of_yValue_12() { return &___yValue_12; }
	inline void set_yValue_12(FsmFloat_t937133978 * value)
	{
		___yValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___yValue_12, value);
	}

	inline static int32_t get_offset_of_angle_13() { return static_cast<int32_t>(offsetof(GetAtan2_t1152720016, ___angle_13)); }
	inline FsmFloat_t937133978 * get_angle_13() const { return ___angle_13; }
	inline FsmFloat_t937133978 ** get_address_of_angle_13() { return &___angle_13; }
	inline void set_angle_13(FsmFloat_t937133978 * value)
	{
		___angle_13 = value;
		Il2CppCodeGenWriteBarrier(&___angle_13, value);
	}

	inline static int32_t get_offset_of_RadToDeg_14() { return static_cast<int32_t>(offsetof(GetAtan2_t1152720016, ___RadToDeg_14)); }
	inline FsmBool_t664485696 * get_RadToDeg_14() const { return ___RadToDeg_14; }
	inline FsmBool_t664485696 ** get_address_of_RadToDeg_14() { return &___RadToDeg_14; }
	inline void set_RadToDeg_14(FsmBool_t664485696 * value)
	{
		___RadToDeg_14 = value;
		Il2CppCodeGenWriteBarrier(&___RadToDeg_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GetAtan2_t1152720016, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
