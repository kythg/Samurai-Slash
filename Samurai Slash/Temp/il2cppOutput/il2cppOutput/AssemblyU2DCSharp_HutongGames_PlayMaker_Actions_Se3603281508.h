#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_JointMotor2D2112906529.h"
#include "UnityEngine_UnityEngine_JointAngleLimits2D2286990451.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.HingeJoint2D
struct HingeJoint2D_t1937532749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties
struct  SetHingeJoint2dProperties_t3603281508  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::useLimits
	FsmBool_t664485696 * ___useLimits_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::min
	FsmFloat_t937133978 * ___min_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::max
	FsmFloat_t937133978 * ___max_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::useMotor
	FsmBool_t664485696 * ___useMotor_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::motorSpeed
	FsmFloat_t937133978 * ___motorSpeed_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::maxMotorTorque
	FsmFloat_t937133978 * ___maxMotorTorque_17;
	// System.Boolean HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::everyFrame
	bool ___everyFrame_18;
	// UnityEngine.HingeJoint2D HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::_joint
	HingeJoint2D_t1937532749 * ____joint_19;
	// UnityEngine.JointMotor2D HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::_motor
	JointMotor2D_t2112906529  ____motor_20;
	// UnityEngine.JointAngleLimits2D HutongGames.PlayMaker.Actions.SetHingeJoint2dProperties::_limits
	JointAngleLimits2D_t2286990451  ____limits_21;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_useLimits_12() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ___useLimits_12)); }
	inline FsmBool_t664485696 * get_useLimits_12() const { return ___useLimits_12; }
	inline FsmBool_t664485696 ** get_address_of_useLimits_12() { return &___useLimits_12; }
	inline void set_useLimits_12(FsmBool_t664485696 * value)
	{
		___useLimits_12 = value;
		Il2CppCodeGenWriteBarrier(&___useLimits_12, value);
	}

	inline static int32_t get_offset_of_min_13() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ___min_13)); }
	inline FsmFloat_t937133978 * get_min_13() const { return ___min_13; }
	inline FsmFloat_t937133978 ** get_address_of_min_13() { return &___min_13; }
	inline void set_min_13(FsmFloat_t937133978 * value)
	{
		___min_13 = value;
		Il2CppCodeGenWriteBarrier(&___min_13, value);
	}

	inline static int32_t get_offset_of_max_14() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ___max_14)); }
	inline FsmFloat_t937133978 * get_max_14() const { return ___max_14; }
	inline FsmFloat_t937133978 ** get_address_of_max_14() { return &___max_14; }
	inline void set_max_14(FsmFloat_t937133978 * value)
	{
		___max_14 = value;
		Il2CppCodeGenWriteBarrier(&___max_14, value);
	}

	inline static int32_t get_offset_of_useMotor_15() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ___useMotor_15)); }
	inline FsmBool_t664485696 * get_useMotor_15() const { return ___useMotor_15; }
	inline FsmBool_t664485696 ** get_address_of_useMotor_15() { return &___useMotor_15; }
	inline void set_useMotor_15(FsmBool_t664485696 * value)
	{
		___useMotor_15 = value;
		Il2CppCodeGenWriteBarrier(&___useMotor_15, value);
	}

	inline static int32_t get_offset_of_motorSpeed_16() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ___motorSpeed_16)); }
	inline FsmFloat_t937133978 * get_motorSpeed_16() const { return ___motorSpeed_16; }
	inline FsmFloat_t937133978 ** get_address_of_motorSpeed_16() { return &___motorSpeed_16; }
	inline void set_motorSpeed_16(FsmFloat_t937133978 * value)
	{
		___motorSpeed_16 = value;
		Il2CppCodeGenWriteBarrier(&___motorSpeed_16, value);
	}

	inline static int32_t get_offset_of_maxMotorTorque_17() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ___maxMotorTorque_17)); }
	inline FsmFloat_t937133978 * get_maxMotorTorque_17() const { return ___maxMotorTorque_17; }
	inline FsmFloat_t937133978 ** get_address_of_maxMotorTorque_17() { return &___maxMotorTorque_17; }
	inline void set_maxMotorTorque_17(FsmFloat_t937133978 * value)
	{
		___maxMotorTorque_17 = value;
		Il2CppCodeGenWriteBarrier(&___maxMotorTorque_17, value);
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}

	inline static int32_t get_offset_of__joint_19() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ____joint_19)); }
	inline HingeJoint2D_t1937532749 * get__joint_19() const { return ____joint_19; }
	inline HingeJoint2D_t1937532749 ** get_address_of__joint_19() { return &____joint_19; }
	inline void set__joint_19(HingeJoint2D_t1937532749 * value)
	{
		____joint_19 = value;
		Il2CppCodeGenWriteBarrier(&____joint_19, value);
	}

	inline static int32_t get_offset_of__motor_20() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ____motor_20)); }
	inline JointMotor2D_t2112906529  get__motor_20() const { return ____motor_20; }
	inline JointMotor2D_t2112906529 * get_address_of__motor_20() { return &____motor_20; }
	inline void set__motor_20(JointMotor2D_t2112906529  value)
	{
		____motor_20 = value;
	}

	inline static int32_t get_offset_of__limits_21() { return static_cast<int32_t>(offsetof(SetHingeJoint2dProperties_t3603281508, ____limits_21)); }
	inline JointAngleLimits2D_t2286990451  get__limits_21() const { return ____limits_21; }
	inline JointAngleLimits2D_t2286990451 * get_address_of__limits_21() { return &____limits_21; }
	inline void set__limits_21(JointAngleLimits2D_t2286990451  value)
	{
		____limits_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
