#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Fs3863144983.h"
#include "UnityEngine_UnityEngine_AvatarIKGoal3089653344.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
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

// HutongGames.PlayMaker.Actions.GetAnimatorIKGoal
struct  GetAnimatorIKGoal_t3393281736  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::iKGoal
	FsmEnum_t2808516103 * ___iKGoal_15;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::goal
	FsmGameObject_t3097142863 * ___goal_16;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::position
	FsmVector3_t3996534004 * ___position_17;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::rotation
	FsmQuaternion_t878438756 * ___rotation_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::positionWeight
	FsmFloat_t937133978 * ___positionWeight_19;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::rotationWeight
	FsmFloat_t937133978 * ___rotationWeight_20;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::_animator
	Animator_t69676727 * ____animator_21;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::_transform
	Transform_t3275118058 * ____transform_22;
	// UnityEngine.AvatarIKGoal HutongGames.PlayMaker.Actions.GetAnimatorIKGoal::_iKGoal
	int32_t ____iKGoal_23;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_iKGoal_15() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ___iKGoal_15)); }
	inline FsmEnum_t2808516103 * get_iKGoal_15() const { return ___iKGoal_15; }
	inline FsmEnum_t2808516103 ** get_address_of_iKGoal_15() { return &___iKGoal_15; }
	inline void set_iKGoal_15(FsmEnum_t2808516103 * value)
	{
		___iKGoal_15 = value;
		Il2CppCodeGenWriteBarrier(&___iKGoal_15, value);
	}

	inline static int32_t get_offset_of_goal_16() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ___goal_16)); }
	inline FsmGameObject_t3097142863 * get_goal_16() const { return ___goal_16; }
	inline FsmGameObject_t3097142863 ** get_address_of_goal_16() { return &___goal_16; }
	inline void set_goal_16(FsmGameObject_t3097142863 * value)
	{
		___goal_16 = value;
		Il2CppCodeGenWriteBarrier(&___goal_16, value);
	}

	inline static int32_t get_offset_of_position_17() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ___position_17)); }
	inline FsmVector3_t3996534004 * get_position_17() const { return ___position_17; }
	inline FsmVector3_t3996534004 ** get_address_of_position_17() { return &___position_17; }
	inline void set_position_17(FsmVector3_t3996534004 * value)
	{
		___position_17 = value;
		Il2CppCodeGenWriteBarrier(&___position_17, value);
	}

	inline static int32_t get_offset_of_rotation_18() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ___rotation_18)); }
	inline FsmQuaternion_t878438756 * get_rotation_18() const { return ___rotation_18; }
	inline FsmQuaternion_t878438756 ** get_address_of_rotation_18() { return &___rotation_18; }
	inline void set_rotation_18(FsmQuaternion_t878438756 * value)
	{
		___rotation_18 = value;
		Il2CppCodeGenWriteBarrier(&___rotation_18, value);
	}

	inline static int32_t get_offset_of_positionWeight_19() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ___positionWeight_19)); }
	inline FsmFloat_t937133978 * get_positionWeight_19() const { return ___positionWeight_19; }
	inline FsmFloat_t937133978 ** get_address_of_positionWeight_19() { return &___positionWeight_19; }
	inline void set_positionWeight_19(FsmFloat_t937133978 * value)
	{
		___positionWeight_19 = value;
		Il2CppCodeGenWriteBarrier(&___positionWeight_19, value);
	}

	inline static int32_t get_offset_of_rotationWeight_20() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ___rotationWeight_20)); }
	inline FsmFloat_t937133978 * get_rotationWeight_20() const { return ___rotationWeight_20; }
	inline FsmFloat_t937133978 ** get_address_of_rotationWeight_20() { return &___rotationWeight_20; }
	inline void set_rotationWeight_20(FsmFloat_t937133978 * value)
	{
		___rotationWeight_20 = value;
		Il2CppCodeGenWriteBarrier(&___rotationWeight_20, value);
	}

	inline static int32_t get_offset_of__animator_21() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ____animator_21)); }
	inline Animator_t69676727 * get__animator_21() const { return ____animator_21; }
	inline Animator_t69676727 ** get_address_of__animator_21() { return &____animator_21; }
	inline void set__animator_21(Animator_t69676727 * value)
	{
		____animator_21 = value;
		Il2CppCodeGenWriteBarrier(&____animator_21, value);
	}

	inline static int32_t get_offset_of__transform_22() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ____transform_22)); }
	inline Transform_t3275118058 * get__transform_22() const { return ____transform_22; }
	inline Transform_t3275118058 ** get_address_of__transform_22() { return &____transform_22; }
	inline void set__transform_22(Transform_t3275118058 * value)
	{
		____transform_22 = value;
		Il2CppCodeGenWriteBarrier(&____transform_22, value);
	}

	inline static int32_t get_offset_of__iKGoal_23() { return static_cast<int32_t>(offsetof(GetAnimatorIKGoal_t3393281736, ____iKGoal_23)); }
	inline int32_t get__iKGoal_23() const { return ____iKGoal_23; }
	inline int32_t* get_address_of__iKGoal_23() { return &____iKGoal_23; }
	inline void set__iKGoal_23(int32_t value)
	{
		____iKGoal_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
