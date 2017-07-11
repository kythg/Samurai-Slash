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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SmoothFollowAction
struct  SmoothFollowAction_t1446383579  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SmoothFollowAction::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SmoothFollowAction::targetObject
	FsmGameObject_t3097142863 * ___targetObject_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothFollowAction::distance
	FsmFloat_t937133978 * ___distance_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothFollowAction::height
	FsmFloat_t937133978 * ___height_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothFollowAction::heightDamping
	FsmFloat_t937133978 * ___heightDamping_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothFollowAction::rotationDamping
	FsmFloat_t937133978 * ___rotationDamping_16;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.SmoothFollowAction::cachedObject
	GameObject_t1756533147 * ___cachedObject_17;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.SmoothFollowAction::myTransform
	Transform_t3275118058 * ___myTransform_18;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.SmoothFollowAction::cachedTarget
	GameObject_t1756533147 * ___cachedTarget_19;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.SmoothFollowAction::targetTransform
	Transform_t3275118058 * ___targetTransform_20;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_targetObject_12() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___targetObject_12)); }
	inline FsmGameObject_t3097142863 * get_targetObject_12() const { return ___targetObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_targetObject_12() { return &___targetObject_12; }
	inline void set_targetObject_12(FsmGameObject_t3097142863 * value)
	{
		___targetObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_12, value);
	}

	inline static int32_t get_offset_of_distance_13() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___distance_13)); }
	inline FsmFloat_t937133978 * get_distance_13() const { return ___distance_13; }
	inline FsmFloat_t937133978 ** get_address_of_distance_13() { return &___distance_13; }
	inline void set_distance_13(FsmFloat_t937133978 * value)
	{
		___distance_13 = value;
		Il2CppCodeGenWriteBarrier(&___distance_13, value);
	}

	inline static int32_t get_offset_of_height_14() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___height_14)); }
	inline FsmFloat_t937133978 * get_height_14() const { return ___height_14; }
	inline FsmFloat_t937133978 ** get_address_of_height_14() { return &___height_14; }
	inline void set_height_14(FsmFloat_t937133978 * value)
	{
		___height_14 = value;
		Il2CppCodeGenWriteBarrier(&___height_14, value);
	}

	inline static int32_t get_offset_of_heightDamping_15() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___heightDamping_15)); }
	inline FsmFloat_t937133978 * get_heightDamping_15() const { return ___heightDamping_15; }
	inline FsmFloat_t937133978 ** get_address_of_heightDamping_15() { return &___heightDamping_15; }
	inline void set_heightDamping_15(FsmFloat_t937133978 * value)
	{
		___heightDamping_15 = value;
		Il2CppCodeGenWriteBarrier(&___heightDamping_15, value);
	}

	inline static int32_t get_offset_of_rotationDamping_16() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___rotationDamping_16)); }
	inline FsmFloat_t937133978 * get_rotationDamping_16() const { return ___rotationDamping_16; }
	inline FsmFloat_t937133978 ** get_address_of_rotationDamping_16() { return &___rotationDamping_16; }
	inline void set_rotationDamping_16(FsmFloat_t937133978 * value)
	{
		___rotationDamping_16 = value;
		Il2CppCodeGenWriteBarrier(&___rotationDamping_16, value);
	}

	inline static int32_t get_offset_of_cachedObject_17() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___cachedObject_17)); }
	inline GameObject_t1756533147 * get_cachedObject_17() const { return ___cachedObject_17; }
	inline GameObject_t1756533147 ** get_address_of_cachedObject_17() { return &___cachedObject_17; }
	inline void set_cachedObject_17(GameObject_t1756533147 * value)
	{
		___cachedObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___cachedObject_17, value);
	}

	inline static int32_t get_offset_of_myTransform_18() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___myTransform_18)); }
	inline Transform_t3275118058 * get_myTransform_18() const { return ___myTransform_18; }
	inline Transform_t3275118058 ** get_address_of_myTransform_18() { return &___myTransform_18; }
	inline void set_myTransform_18(Transform_t3275118058 * value)
	{
		___myTransform_18 = value;
		Il2CppCodeGenWriteBarrier(&___myTransform_18, value);
	}

	inline static int32_t get_offset_of_cachedTarget_19() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___cachedTarget_19)); }
	inline GameObject_t1756533147 * get_cachedTarget_19() const { return ___cachedTarget_19; }
	inline GameObject_t1756533147 ** get_address_of_cachedTarget_19() { return &___cachedTarget_19; }
	inline void set_cachedTarget_19(GameObject_t1756533147 * value)
	{
		___cachedTarget_19 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTarget_19, value);
	}

	inline static int32_t get_offset_of_targetTransform_20() { return static_cast<int32_t>(offsetof(SmoothFollowAction_t1446383579, ___targetTransform_20)); }
	inline Transform_t3275118058 * get_targetTransform_20() const { return ___targetTransform_20; }
	inline Transform_t3275118058 ** get_address_of_targetTransform_20() { return &___targetTransform_20; }
	inline void set_targetTransform_20(Transform_t3275118058 * value)
	{
		___targetTransform_20 = value;
		Il2CppCodeGenWriteBarrier(&___targetTransform_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
