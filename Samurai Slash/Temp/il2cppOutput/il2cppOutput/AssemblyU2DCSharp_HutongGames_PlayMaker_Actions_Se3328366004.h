#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_AvatarIKGoal3089653344.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAnimatorIKGoal
struct  SetAnimatorIKGoal_t3328366004  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// UnityEngine.AvatarIKGoal HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::iKGoal
	int32_t ___iKGoal_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::goal
	FsmGameObject_t3097142863 * ___goal_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::position
	FsmVector3_t3996534004 * ___position_14;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::rotation
	FsmQuaternion_t878438756 * ___rotation_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::positionWeight
	FsmFloat_t937133978 * ___positionWeight_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::rotationWeight
	FsmFloat_t937133978 * ___rotationWeight_17;
	// System.Boolean HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::everyFrame
	bool ___everyFrame_18;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::_animator
	Animator_t69676727 * ____animator_19;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.SetAnimatorIKGoal::_transform
	Transform_t3275118058 * ____transform_20;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_iKGoal_12() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ___iKGoal_12)); }
	inline int32_t get_iKGoal_12() const { return ___iKGoal_12; }
	inline int32_t* get_address_of_iKGoal_12() { return &___iKGoal_12; }
	inline void set_iKGoal_12(int32_t value)
	{
		___iKGoal_12 = value;
	}

	inline static int32_t get_offset_of_goal_13() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ___goal_13)); }
	inline FsmGameObject_t3097142863 * get_goal_13() const { return ___goal_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_goal_13() { return &___goal_13; }
	inline void set_goal_13(FsmGameObject_t3097142863 * value)
	{
		___goal_13 = value;
		Il2CppCodeGenWriteBarrier(&___goal_13, value);
	}

	inline static int32_t get_offset_of_position_14() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ___position_14)); }
	inline FsmVector3_t3996534004 * get_position_14() const { return ___position_14; }
	inline FsmVector3_t3996534004 ** get_address_of_position_14() { return &___position_14; }
	inline void set_position_14(FsmVector3_t3996534004 * value)
	{
		___position_14 = value;
		Il2CppCodeGenWriteBarrier(&___position_14, value);
	}

	inline static int32_t get_offset_of_rotation_15() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ___rotation_15)); }
	inline FsmQuaternion_t878438756 * get_rotation_15() const { return ___rotation_15; }
	inline FsmQuaternion_t878438756 ** get_address_of_rotation_15() { return &___rotation_15; }
	inline void set_rotation_15(FsmQuaternion_t878438756 * value)
	{
		___rotation_15 = value;
		Il2CppCodeGenWriteBarrier(&___rotation_15, value);
	}

	inline static int32_t get_offset_of_positionWeight_16() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ___positionWeight_16)); }
	inline FsmFloat_t937133978 * get_positionWeight_16() const { return ___positionWeight_16; }
	inline FsmFloat_t937133978 ** get_address_of_positionWeight_16() { return &___positionWeight_16; }
	inline void set_positionWeight_16(FsmFloat_t937133978 * value)
	{
		___positionWeight_16 = value;
		Il2CppCodeGenWriteBarrier(&___positionWeight_16, value);
	}

	inline static int32_t get_offset_of_rotationWeight_17() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ___rotationWeight_17)); }
	inline FsmFloat_t937133978 * get_rotationWeight_17() const { return ___rotationWeight_17; }
	inline FsmFloat_t937133978 ** get_address_of_rotationWeight_17() { return &___rotationWeight_17; }
	inline void set_rotationWeight_17(FsmFloat_t937133978 * value)
	{
		___rotationWeight_17 = value;
		Il2CppCodeGenWriteBarrier(&___rotationWeight_17, value);
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}

	inline static int32_t get_offset_of__animator_19() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ____animator_19)); }
	inline Animator_t69676727 * get__animator_19() const { return ____animator_19; }
	inline Animator_t69676727 ** get_address_of__animator_19() { return &____animator_19; }
	inline void set__animator_19(Animator_t69676727 * value)
	{
		____animator_19 = value;
		Il2CppCodeGenWriteBarrier(&____animator_19, value);
	}

	inline static int32_t get_offset_of__transform_20() { return static_cast<int32_t>(offsetof(SetAnimatorIKGoal_t3328366004, ____transform_20)); }
	inline Transform_t3275118058 * get__transform_20() const { return ____transform_20; }
	inline Transform_t3275118058 ** get_address_of__transform_20() { return &____transform_20; }
	inline void set__transform_20(Transform_t3275118058 * value)
	{
		____transform_20 = value;
		Il2CppCodeGenWriteBarrier(&____transform_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
