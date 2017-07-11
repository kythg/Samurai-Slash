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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetQuaternionMultipliedByQuaternion
struct  GetQuaternionMultipliedByQuaternion_t2590305934  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetQuaternionMultipliedByQuaternion::quaternionA
	FsmQuaternion_t878438756 * ___quaternionA_13;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetQuaternionMultipliedByQuaternion::quaternionB
	FsmQuaternion_t878438756 * ___quaternionB_14;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetQuaternionMultipliedByQuaternion::result
	FsmQuaternion_t878438756 * ___result_15;

public:
	inline static int32_t get_offset_of_quaternionA_13() { return static_cast<int32_t>(offsetof(GetQuaternionMultipliedByQuaternion_t2590305934, ___quaternionA_13)); }
	inline FsmQuaternion_t878438756 * get_quaternionA_13() const { return ___quaternionA_13; }
	inline FsmQuaternion_t878438756 ** get_address_of_quaternionA_13() { return &___quaternionA_13; }
	inline void set_quaternionA_13(FsmQuaternion_t878438756 * value)
	{
		___quaternionA_13 = value;
		Il2CppCodeGenWriteBarrier(&___quaternionA_13, value);
	}

	inline static int32_t get_offset_of_quaternionB_14() { return static_cast<int32_t>(offsetof(GetQuaternionMultipliedByQuaternion_t2590305934, ___quaternionB_14)); }
	inline FsmQuaternion_t878438756 * get_quaternionB_14() const { return ___quaternionB_14; }
	inline FsmQuaternion_t878438756 ** get_address_of_quaternionB_14() { return &___quaternionB_14; }
	inline void set_quaternionB_14(FsmQuaternion_t878438756 * value)
	{
		___quaternionB_14 = value;
		Il2CppCodeGenWriteBarrier(&___quaternionB_14, value);
	}

	inline static int32_t get_offset_of_result_15() { return static_cast<int32_t>(offsetof(GetQuaternionMultipliedByQuaternion_t2590305934, ___result_15)); }
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
