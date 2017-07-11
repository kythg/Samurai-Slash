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

// HutongGames.PlayMaker.Actions.QuaternionLookRotation
struct  QuaternionLookRotation_t1032259027  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.QuaternionLookRotation::direction
	FsmVector3_t3996534004 * ___direction_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.QuaternionLookRotation::upVector
	FsmVector3_t3996534004 * ___upVector_14;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionLookRotation::result
	FsmQuaternion_t878438756 * ___result_15;

public:
	inline static int32_t get_offset_of_direction_13() { return static_cast<int32_t>(offsetof(QuaternionLookRotation_t1032259027, ___direction_13)); }
	inline FsmVector3_t3996534004 * get_direction_13() const { return ___direction_13; }
	inline FsmVector3_t3996534004 ** get_address_of_direction_13() { return &___direction_13; }
	inline void set_direction_13(FsmVector3_t3996534004 * value)
	{
		___direction_13 = value;
		Il2CppCodeGenWriteBarrier(&___direction_13, value);
	}

	inline static int32_t get_offset_of_upVector_14() { return static_cast<int32_t>(offsetof(QuaternionLookRotation_t1032259027, ___upVector_14)); }
	inline FsmVector3_t3996534004 * get_upVector_14() const { return ___upVector_14; }
	inline FsmVector3_t3996534004 ** get_address_of_upVector_14() { return &___upVector_14; }
	inline void set_upVector_14(FsmVector3_t3996534004 * value)
	{
		___upVector_14 = value;
		Il2CppCodeGenWriteBarrier(&___upVector_14, value);
	}

	inline static int32_t get_offset_of_result_15() { return static_cast<int32_t>(offsetof(QuaternionLookRotation_t1032259027, ___result_15)); }
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
