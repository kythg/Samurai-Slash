#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Qu3869353585.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.QuaternionLowPassFilter
struct  QuaternionLowPassFilter_t2598849269  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionLowPassFilter::quaternionVariable
	FsmQuaternion_t878438756 * ___quaternionVariable_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.QuaternionLowPassFilter::filteringFactor
	FsmFloat_t937133978 * ___filteringFactor_14;
	// UnityEngine.Quaternion HutongGames.PlayMaker.Actions.QuaternionLowPassFilter::filteredQuaternion
	Quaternion_t4030073918  ___filteredQuaternion_15;

public:
	inline static int32_t get_offset_of_quaternionVariable_13() { return static_cast<int32_t>(offsetof(QuaternionLowPassFilter_t2598849269, ___quaternionVariable_13)); }
	inline FsmQuaternion_t878438756 * get_quaternionVariable_13() const { return ___quaternionVariable_13; }
	inline FsmQuaternion_t878438756 ** get_address_of_quaternionVariable_13() { return &___quaternionVariable_13; }
	inline void set_quaternionVariable_13(FsmQuaternion_t878438756 * value)
	{
		___quaternionVariable_13 = value;
		Il2CppCodeGenWriteBarrier(&___quaternionVariable_13, value);
	}

	inline static int32_t get_offset_of_filteringFactor_14() { return static_cast<int32_t>(offsetof(QuaternionLowPassFilter_t2598849269, ___filteringFactor_14)); }
	inline FsmFloat_t937133978 * get_filteringFactor_14() const { return ___filteringFactor_14; }
	inline FsmFloat_t937133978 ** get_address_of_filteringFactor_14() { return &___filteringFactor_14; }
	inline void set_filteringFactor_14(FsmFloat_t937133978 * value)
	{
		___filteringFactor_14 = value;
		Il2CppCodeGenWriteBarrier(&___filteringFactor_14, value);
	}

	inline static int32_t get_offset_of_filteredQuaternion_15() { return static_cast<int32_t>(offsetof(QuaternionLowPassFilter_t2598849269, ___filteredQuaternion_15)); }
	inline Quaternion_t4030073918  get_filteredQuaternion_15() const { return ___filteredQuaternion_15; }
	inline Quaternion_t4030073918 * get_address_of_filteredQuaternion_15() { return &___filteredQuaternion_15; }
	inline void set_filteredQuaternion_15(Quaternion_t4030073918  value)
	{
		___filteredQuaternion_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
