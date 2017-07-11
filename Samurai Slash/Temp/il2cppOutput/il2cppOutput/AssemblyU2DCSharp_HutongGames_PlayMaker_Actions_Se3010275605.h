#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAnimatorBody
struct  SetAnimatorBody_t3010275605  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAnimatorBody::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SetAnimatorBody::target
	FsmGameObject_t3097142863 * ___target_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SetAnimatorBody::position
	FsmVector3_t3996534004 * ___position_13;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.SetAnimatorBody::rotation
	FsmQuaternion_t878438756 * ___rotation_14;
	// System.Boolean HutongGames.PlayMaker.Actions.SetAnimatorBody::everyFrame
	bool ___everyFrame_15;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.SetAnimatorBody::_animator
	Animator_t69676727 * ____animator_16;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.SetAnimatorBody::_transform
	Transform_t3275118058 * ____transform_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetAnimatorBody_t3010275605, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(SetAnimatorBody_t3010275605, ___target_12)); }
	inline FsmGameObject_t3097142863 * get_target_12() const { return ___target_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(FsmGameObject_t3097142863 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier(&___target_12, value);
	}

	inline static int32_t get_offset_of_position_13() { return static_cast<int32_t>(offsetof(SetAnimatorBody_t3010275605, ___position_13)); }
	inline FsmVector3_t3996534004 * get_position_13() const { return ___position_13; }
	inline FsmVector3_t3996534004 ** get_address_of_position_13() { return &___position_13; }
	inline void set_position_13(FsmVector3_t3996534004 * value)
	{
		___position_13 = value;
		Il2CppCodeGenWriteBarrier(&___position_13, value);
	}

	inline static int32_t get_offset_of_rotation_14() { return static_cast<int32_t>(offsetof(SetAnimatorBody_t3010275605, ___rotation_14)); }
	inline FsmQuaternion_t878438756 * get_rotation_14() const { return ___rotation_14; }
	inline FsmQuaternion_t878438756 ** get_address_of_rotation_14() { return &___rotation_14; }
	inline void set_rotation_14(FsmQuaternion_t878438756 * value)
	{
		___rotation_14 = value;
		Il2CppCodeGenWriteBarrier(&___rotation_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(SetAnimatorBody_t3010275605, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of__animator_16() { return static_cast<int32_t>(offsetof(SetAnimatorBody_t3010275605, ____animator_16)); }
	inline Animator_t69676727 * get__animator_16() const { return ____animator_16; }
	inline Animator_t69676727 ** get_address_of__animator_16() { return &____animator_16; }
	inline void set__animator_16(Animator_t69676727 * value)
	{
		____animator_16 = value;
		Il2CppCodeGenWriteBarrier(&____animator_16, value);
	}

	inline static int32_t get_offset_of__transform_17() { return static_cast<int32_t>(offsetof(SetAnimatorBody_t3010275605, ____transform_17)); }
	inline Transform_t3275118058 * get__transform_17() const { return ____transform_17; }
	inline Transform_t3275118058 ** get_address_of__transform_17() { return &____transform_17; }
	inline void set__transform_17(Transform_t3275118058 * value)
	{
		____transform_17 = value;
		Il2CppCodeGenWriteBarrier(&____transform_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
