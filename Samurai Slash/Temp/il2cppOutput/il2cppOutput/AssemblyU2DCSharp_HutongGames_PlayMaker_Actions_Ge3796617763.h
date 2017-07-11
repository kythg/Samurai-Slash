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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetQuaternionMultipliedByVector
struct  GetQuaternionMultipliedByVector_t3796617763  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetQuaternionMultipliedByVector::quaternion
	FsmQuaternion_t878438756 * ___quaternion_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetQuaternionMultipliedByVector::vector3
	FsmVector3_t3996534004 * ___vector3_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetQuaternionMultipliedByVector::result
	FsmVector3_t3996534004 * ___result_15;

public:
	inline static int32_t get_offset_of_quaternion_13() { return static_cast<int32_t>(offsetof(GetQuaternionMultipliedByVector_t3796617763, ___quaternion_13)); }
	inline FsmQuaternion_t878438756 * get_quaternion_13() const { return ___quaternion_13; }
	inline FsmQuaternion_t878438756 ** get_address_of_quaternion_13() { return &___quaternion_13; }
	inline void set_quaternion_13(FsmQuaternion_t878438756 * value)
	{
		___quaternion_13 = value;
		Il2CppCodeGenWriteBarrier(&___quaternion_13, value);
	}

	inline static int32_t get_offset_of_vector3_14() { return static_cast<int32_t>(offsetof(GetQuaternionMultipliedByVector_t3796617763, ___vector3_14)); }
	inline FsmVector3_t3996534004 * get_vector3_14() const { return ___vector3_14; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3_14() { return &___vector3_14; }
	inline void set_vector3_14(FsmVector3_t3996534004 * value)
	{
		___vector3_14 = value;
		Il2CppCodeGenWriteBarrier(&___vector3_14, value);
	}

	inline static int32_t get_offset_of_result_15() { return static_cast<int32_t>(offsetof(GetQuaternionMultipliedByVector_t3796617763, ___result_15)); }
	inline FsmVector3_t3996534004 * get_result_15() const { return ___result_15; }
	inline FsmVector3_t3996534004 ** get_address_of_result_15() { return &___result_15; }
	inline void set_result_15(FsmVector3_t3996534004 * value)
	{
		___result_15 = value;
		Il2CppCodeGenWriteBarrier(&___result_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
