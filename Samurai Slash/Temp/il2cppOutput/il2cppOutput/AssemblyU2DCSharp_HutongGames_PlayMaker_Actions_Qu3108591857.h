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

// HutongGames.PlayMaker.Actions.QuaternionEuler
struct  QuaternionEuler_t3108591857  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.QuaternionEuler::eulerAngles
	FsmVector3_t3996534004 * ___eulerAngles_13;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionEuler::result
	FsmQuaternion_t878438756 * ___result_14;

public:
	inline static int32_t get_offset_of_eulerAngles_13() { return static_cast<int32_t>(offsetof(QuaternionEuler_t3108591857, ___eulerAngles_13)); }
	inline FsmVector3_t3996534004 * get_eulerAngles_13() const { return ___eulerAngles_13; }
	inline FsmVector3_t3996534004 ** get_address_of_eulerAngles_13() { return &___eulerAngles_13; }
	inline void set_eulerAngles_13(FsmVector3_t3996534004 * value)
	{
		___eulerAngles_13 = value;
		Il2CppCodeGenWriteBarrier(&___eulerAngles_13, value);
	}

	inline static int32_t get_offset_of_result_14() { return static_cast<int32_t>(offsetof(QuaternionEuler_t3108591857, ___result_14)); }
	inline FsmQuaternion_t878438756 * get_result_14() const { return ___result_14; }
	inline FsmQuaternion_t878438756 ** get_address_of_result_14() { return &___result_14; }
	inline void set_result_14(FsmQuaternion_t878438756 * value)
	{
		___result_14 = value;
		Il2CppCodeGenWriteBarrier(&___result_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
