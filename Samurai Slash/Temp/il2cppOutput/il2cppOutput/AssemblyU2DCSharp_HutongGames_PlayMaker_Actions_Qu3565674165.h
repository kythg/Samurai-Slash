#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Qu3869353585.h"

// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.QuaternionRotateTowards
struct  QuaternionRotateTowards_t3565674165  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionRotateTowards::fromQuaternion
	FsmQuaternion_t878438756 * ___fromQuaternion_13;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionRotateTowards::toQuaternion
	FsmQuaternion_t878438756 * ___toQuaternion_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.QuaternionRotateTowards::maxDegreesDelta
	FsmFloat_t937133978 * ___maxDegreesDelta_15;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionRotateTowards::storeResult
	FsmQuaternion_t878438756 * ___storeResult_16;

public:
	inline static int32_t get_offset_of_fromQuaternion_13() { return static_cast<int32_t>(offsetof(QuaternionRotateTowards_t3565674165, ___fromQuaternion_13)); }
	inline FsmQuaternion_t878438756 * get_fromQuaternion_13() const { return ___fromQuaternion_13; }
	inline FsmQuaternion_t878438756 ** get_address_of_fromQuaternion_13() { return &___fromQuaternion_13; }
	inline void set_fromQuaternion_13(FsmQuaternion_t878438756 * value)
	{
		___fromQuaternion_13 = value;
		Il2CppCodeGenWriteBarrier(&___fromQuaternion_13, value);
	}

	inline static int32_t get_offset_of_toQuaternion_14() { return static_cast<int32_t>(offsetof(QuaternionRotateTowards_t3565674165, ___toQuaternion_14)); }
	inline FsmQuaternion_t878438756 * get_toQuaternion_14() const { return ___toQuaternion_14; }
	inline FsmQuaternion_t878438756 ** get_address_of_toQuaternion_14() { return &___toQuaternion_14; }
	inline void set_toQuaternion_14(FsmQuaternion_t878438756 * value)
	{
		___toQuaternion_14 = value;
		Il2CppCodeGenWriteBarrier(&___toQuaternion_14, value);
	}

	inline static int32_t get_offset_of_maxDegreesDelta_15() { return static_cast<int32_t>(offsetof(QuaternionRotateTowards_t3565674165, ___maxDegreesDelta_15)); }
	inline FsmFloat_t937133978 * get_maxDegreesDelta_15() const { return ___maxDegreesDelta_15; }
	inline FsmFloat_t937133978 ** get_address_of_maxDegreesDelta_15() { return &___maxDegreesDelta_15; }
	inline void set_maxDegreesDelta_15(FsmFloat_t937133978 * value)
	{
		___maxDegreesDelta_15 = value;
		Il2CppCodeGenWriteBarrier(&___maxDegreesDelta_15, value);
	}

	inline static int32_t get_offset_of_storeResult_16() { return static_cast<int32_t>(offsetof(QuaternionRotateTowards_t3565674165, ___storeResult_16)); }
	inline FsmQuaternion_t878438756 * get_storeResult_16() const { return ___storeResult_16; }
	inline FsmQuaternion_t878438756 ** get_address_of_storeResult_16() { return &___storeResult_16; }
	inline void set_storeResult_16(FsmQuaternion_t878438756 * value)
	{
		___storeResult_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
