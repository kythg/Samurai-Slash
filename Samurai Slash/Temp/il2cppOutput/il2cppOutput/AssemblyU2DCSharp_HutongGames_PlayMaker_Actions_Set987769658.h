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
#include "UnityEngine_UnityEngine_JointSuspension2D1941285899.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.WheelJoint2D
struct WheelJoint2D_t570080601;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties
struct  SetWheelJoint2dProperties_t987769658  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::useMotor
	FsmBool_t664485696 * ___useMotor_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::motorSpeed
	FsmFloat_t937133978 * ___motorSpeed_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::maxMotorTorque
	FsmFloat_t937133978 * ___maxMotorTorque_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::angle
	FsmFloat_t937133978 * ___angle_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::dampingRatio
	FsmFloat_t937133978 * ___dampingRatio_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::frequency
	FsmFloat_t937133978 * ___frequency_17;
	// System.Boolean HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::everyFrame
	bool ___everyFrame_18;
	// UnityEngine.WheelJoint2D HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::_wj2d
	WheelJoint2D_t570080601 * ____wj2d_19;
	// UnityEngine.JointMotor2D HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::_motor
	JointMotor2D_t2112906529  ____motor_20;
	// UnityEngine.JointSuspension2D HutongGames.PlayMaker.Actions.SetWheelJoint2dProperties::_suspension
	JointSuspension2D_t1941285899  ____suspension_21;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_useMotor_12() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ___useMotor_12)); }
	inline FsmBool_t664485696 * get_useMotor_12() const { return ___useMotor_12; }
	inline FsmBool_t664485696 ** get_address_of_useMotor_12() { return &___useMotor_12; }
	inline void set_useMotor_12(FsmBool_t664485696 * value)
	{
		___useMotor_12 = value;
		Il2CppCodeGenWriteBarrier(&___useMotor_12, value);
	}

	inline static int32_t get_offset_of_motorSpeed_13() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ___motorSpeed_13)); }
	inline FsmFloat_t937133978 * get_motorSpeed_13() const { return ___motorSpeed_13; }
	inline FsmFloat_t937133978 ** get_address_of_motorSpeed_13() { return &___motorSpeed_13; }
	inline void set_motorSpeed_13(FsmFloat_t937133978 * value)
	{
		___motorSpeed_13 = value;
		Il2CppCodeGenWriteBarrier(&___motorSpeed_13, value);
	}

	inline static int32_t get_offset_of_maxMotorTorque_14() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ___maxMotorTorque_14)); }
	inline FsmFloat_t937133978 * get_maxMotorTorque_14() const { return ___maxMotorTorque_14; }
	inline FsmFloat_t937133978 ** get_address_of_maxMotorTorque_14() { return &___maxMotorTorque_14; }
	inline void set_maxMotorTorque_14(FsmFloat_t937133978 * value)
	{
		___maxMotorTorque_14 = value;
		Il2CppCodeGenWriteBarrier(&___maxMotorTorque_14, value);
	}

	inline static int32_t get_offset_of_angle_15() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ___angle_15)); }
	inline FsmFloat_t937133978 * get_angle_15() const { return ___angle_15; }
	inline FsmFloat_t937133978 ** get_address_of_angle_15() { return &___angle_15; }
	inline void set_angle_15(FsmFloat_t937133978 * value)
	{
		___angle_15 = value;
		Il2CppCodeGenWriteBarrier(&___angle_15, value);
	}

	inline static int32_t get_offset_of_dampingRatio_16() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ___dampingRatio_16)); }
	inline FsmFloat_t937133978 * get_dampingRatio_16() const { return ___dampingRatio_16; }
	inline FsmFloat_t937133978 ** get_address_of_dampingRatio_16() { return &___dampingRatio_16; }
	inline void set_dampingRatio_16(FsmFloat_t937133978 * value)
	{
		___dampingRatio_16 = value;
		Il2CppCodeGenWriteBarrier(&___dampingRatio_16, value);
	}

	inline static int32_t get_offset_of_frequency_17() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ___frequency_17)); }
	inline FsmFloat_t937133978 * get_frequency_17() const { return ___frequency_17; }
	inline FsmFloat_t937133978 ** get_address_of_frequency_17() { return &___frequency_17; }
	inline void set_frequency_17(FsmFloat_t937133978 * value)
	{
		___frequency_17 = value;
		Il2CppCodeGenWriteBarrier(&___frequency_17, value);
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}

	inline static int32_t get_offset_of__wj2d_19() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ____wj2d_19)); }
	inline WheelJoint2D_t570080601 * get__wj2d_19() const { return ____wj2d_19; }
	inline WheelJoint2D_t570080601 ** get_address_of__wj2d_19() { return &____wj2d_19; }
	inline void set__wj2d_19(WheelJoint2D_t570080601 * value)
	{
		____wj2d_19 = value;
		Il2CppCodeGenWriteBarrier(&____wj2d_19, value);
	}

	inline static int32_t get_offset_of__motor_20() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ____motor_20)); }
	inline JointMotor2D_t2112906529  get__motor_20() const { return ____motor_20; }
	inline JointMotor2D_t2112906529 * get_address_of__motor_20() { return &____motor_20; }
	inline void set__motor_20(JointMotor2D_t2112906529  value)
	{
		____motor_20 = value;
	}

	inline static int32_t get_offset_of__suspension_21() { return static_cast<int32_t>(offsetof(SetWheelJoint2dProperties_t987769658, ____suspension_21)); }
	inline JointSuspension2D_t1941285899  get__suspension_21() const { return ____suspension_21; }
	inline JointSuspension2D_t1941285899 * get_address_of__suspension_21() { return &____suspension_21; }
	inline void set__suspension_21(JointSuspension2D_t1941285899  value)
	{
		____suspension_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
