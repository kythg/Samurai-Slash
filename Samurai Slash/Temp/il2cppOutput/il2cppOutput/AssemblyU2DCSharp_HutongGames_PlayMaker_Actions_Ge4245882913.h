#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAxis
struct  GetAxis_t4245882913  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAxis::axisName
	FsmString_t2414474701 * ___axisName_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAxis::multiplier
	FsmFloat_t937133978 * ___multiplier_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAxis::store
	FsmFloat_t937133978 * ___store_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetAxis::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_axisName_11() { return static_cast<int32_t>(offsetof(GetAxis_t4245882913, ___axisName_11)); }
	inline FsmString_t2414474701 * get_axisName_11() const { return ___axisName_11; }
	inline FsmString_t2414474701 ** get_address_of_axisName_11() { return &___axisName_11; }
	inline void set_axisName_11(FsmString_t2414474701 * value)
	{
		___axisName_11 = value;
		Il2CppCodeGenWriteBarrier(&___axisName_11, value);
	}

	inline static int32_t get_offset_of_multiplier_12() { return static_cast<int32_t>(offsetof(GetAxis_t4245882913, ___multiplier_12)); }
	inline FsmFloat_t937133978 * get_multiplier_12() const { return ___multiplier_12; }
	inline FsmFloat_t937133978 ** get_address_of_multiplier_12() { return &___multiplier_12; }
	inline void set_multiplier_12(FsmFloat_t937133978 * value)
	{
		___multiplier_12 = value;
		Il2CppCodeGenWriteBarrier(&___multiplier_12, value);
	}

	inline static int32_t get_offset_of_store_13() { return static_cast<int32_t>(offsetof(GetAxis_t4245882913, ___store_13)); }
	inline FsmFloat_t937133978 * get_store_13() const { return ___store_13; }
	inline FsmFloat_t937133978 ** get_address_of_store_13() { return &___store_13; }
	inline void set_store_13(FsmFloat_t937133978 * value)
	{
		___store_13 = value;
		Il2CppCodeGenWriteBarrier(&___store_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GetAxis_t4245882913, ___everyFrame_14)); }
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
