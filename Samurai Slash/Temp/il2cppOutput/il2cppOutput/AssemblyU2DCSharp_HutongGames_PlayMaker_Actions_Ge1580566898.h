#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Qu3869353585.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetQuaternionFromRotation
struct  GetQuaternionFromRotation_t1580566898  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetQuaternionFromRotation::fromDirection
	FsmVector3_t3996534004 * ___fromDirection_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetQuaternionFromRotation::toDirection
	FsmVector3_t3996534004 * ___toDirection_14;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetQuaternionFromRotation::result
	FsmQuaternion_t878438756 * ___result_15;

public:
	inline static int32_t get_offset_of_fromDirection_13() { return static_cast<int32_t>(offsetof(GetQuaternionFromRotation_t1580566898, ___fromDirection_13)); }
	inline FsmVector3_t3996534004 * get_fromDirection_13() const { return ___fromDirection_13; }
	inline FsmVector3_t3996534004 ** get_address_of_fromDirection_13() { return &___fromDirection_13; }
	inline void set_fromDirection_13(FsmVector3_t3996534004 * value)
	{
		___fromDirection_13 = value;
		Il2CppCodeGenWriteBarrier(&___fromDirection_13, value);
	}

	inline static int32_t get_offset_of_toDirection_14() { return static_cast<int32_t>(offsetof(GetQuaternionFromRotation_t1580566898, ___toDirection_14)); }
	inline FsmVector3_t3996534004 * get_toDirection_14() const { return ___toDirection_14; }
	inline FsmVector3_t3996534004 ** get_address_of_toDirection_14() { return &___toDirection_14; }
	inline void set_toDirection_14(FsmVector3_t3996534004 * value)
	{
		___toDirection_14 = value;
		Il2CppCodeGenWriteBarrier(&___toDirection_14, value);
	}

	inline static int32_t get_offset_of_result_15() { return static_cast<int32_t>(offsetof(GetQuaternionFromRotation_t1580566898, ___result_15)); }
	inline FsmQuaternion_t878438756 * get_result_15() const { return ___result_15; }
	inline FsmQuaternion_t878438756 ** get_address_of_result_15() { return &___result_15; }
	inline void set_result_15(FsmQuaternion_t878438756 * value)
	{
		___result_15 = value;
		Il2CppCodeGenWriteBarrier(&___result_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
