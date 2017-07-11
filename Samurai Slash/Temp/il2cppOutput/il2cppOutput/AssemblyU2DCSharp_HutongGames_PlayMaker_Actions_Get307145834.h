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

// HutongGames.PlayMaker.Actions.GetAtan
struct  GetAtan_t307145834  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAtan::Value
	FsmFloat_t937133978 * ___Value_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAtan::angle
	FsmFloat_t937133978 * ___angle_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAtan::RadToDeg
	FsmBool_t664485696 * ___RadToDeg_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetAtan::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_Value_11() { return static_cast<int32_t>(offsetof(GetAtan_t307145834, ___Value_11)); }
	inline FsmFloat_t937133978 * get_Value_11() const { return ___Value_11; }
	inline FsmFloat_t937133978 ** get_address_of_Value_11() { return &___Value_11; }
	inline void set_Value_11(FsmFloat_t937133978 * value)
	{
		___Value_11 = value;
		Il2CppCodeGenWriteBarrier(&___Value_11, value);
	}

	inline static int32_t get_offset_of_angle_12() { return static_cast<int32_t>(offsetof(GetAtan_t307145834, ___angle_12)); }
	inline FsmFloat_t937133978 * get_angle_12() const { return ___angle_12; }
	inline FsmFloat_t937133978 ** get_address_of_angle_12() { return &___angle_12; }
	inline void set_angle_12(FsmFloat_t937133978 * value)
	{
		___angle_12 = value;
		Il2CppCodeGenWriteBarrier(&___angle_12, value);
	}

	inline static int32_t get_offset_of_RadToDeg_13() { return static_cast<int32_t>(offsetof(GetAtan_t307145834, ___RadToDeg_13)); }
	inline FsmBool_t664485696 * get_RadToDeg_13() const { return ___RadToDeg_13; }
	inline FsmBool_t664485696 ** get_address_of_RadToDeg_13() { return &___RadToDeg_13; }
	inline void set_RadToDeg_13(FsmBool_t664485696 * value)
	{
		___RadToDeg_13 = value;
		Il2CppCodeGenWriteBarrier(&___RadToDeg_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GetAtan_t307145834, ___everyFrame_14)); }
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
