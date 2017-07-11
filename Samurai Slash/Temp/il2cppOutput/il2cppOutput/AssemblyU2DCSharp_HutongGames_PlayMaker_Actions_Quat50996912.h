#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Qu3869353585.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.QuaternionAngleAxis
struct  QuaternionAngleAxis_t50996912  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.QuaternionAngleAxis::angle
	FsmFloat_t937133978 * ___angle_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.QuaternionAngleAxis::axis
	FsmVector3_t3996534004 * ___axis_14;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionAngleAxis::result
	FsmQuaternion_t878438756 * ___result_15;

public:
	inline static int32_t get_offset_of_angle_13() { return static_cast<int32_t>(offsetof(QuaternionAngleAxis_t50996912, ___angle_13)); }
	inline FsmFloat_t937133978 * get_angle_13() const { return ___angle_13; }
	inline FsmFloat_t937133978 ** get_address_of_angle_13() { return &___angle_13; }
	inline void set_angle_13(FsmFloat_t937133978 * value)
	{
		___angle_13 = value;
		Il2CppCodeGenWriteBarrier(&___angle_13, value);
	}

	inline static int32_t get_offset_of_axis_14() { return static_cast<int32_t>(offsetof(QuaternionAngleAxis_t50996912, ___axis_14)); }
	inline FsmVector3_t3996534004 * get_axis_14() const { return ___axis_14; }
	inline FsmVector3_t3996534004 ** get_address_of_axis_14() { return &___axis_14; }
	inline void set_axis_14(FsmVector3_t3996534004 * value)
	{
		___axis_14 = value;
		Il2CppCodeGenWriteBarrier(&___axis_14, value);
	}

	inline static int32_t get_offset_of_result_15() { return static_cast<int32_t>(offsetof(QuaternionAngleAxis_t50996912, ___result_15)); }
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
