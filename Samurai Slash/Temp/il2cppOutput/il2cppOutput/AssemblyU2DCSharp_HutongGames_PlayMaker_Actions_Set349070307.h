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

// HutongGames.PlayMaker.Actions.SetAnimatorLookAt
struct  SetAnimatorLookAt_t349070307  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAnimatorLookAt::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SetAnimatorLookAt::target
	FsmGameObject_t3097142863 * ___target_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SetAnimatorLookAt::targetPosition
	FsmVector3_t3996534004 * ___targetPosition_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorLookAt::weight
	FsmFloat_t937133978 * ___weight_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorLookAt::bodyWeight
	FsmFloat_t937133978 * ___bodyWeight_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorLookAt::headWeight
	FsmFloat_t937133978 * ___headWeight_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorLookAt::eyesWeight
	FsmFloat_t937133978 * ___eyesWeight_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorLookAt::clampWeight
	FsmFloat_t937133978 * ___clampWeight_18;
	// System.Boolean HutongGames.PlayMaker.Actions.SetAnimatorLookAt::everyFrame
	bool ___everyFrame_19;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.SetAnimatorLookAt::_animator
	Animator_t69676727 * ____animator_20;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.SetAnimatorLookAt::_transform
	Transform_t3275118058 * ____transform_21;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___target_12)); }
	inline FsmGameObject_t3097142863 * get_target_12() const { return ___target_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(FsmGameObject_t3097142863 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier(&___target_12, value);
	}

	inline static int32_t get_offset_of_targetPosition_13() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___targetPosition_13)); }
	inline FsmVector3_t3996534004 * get_targetPosition_13() const { return ___targetPosition_13; }
	inline FsmVector3_t3996534004 ** get_address_of_targetPosition_13() { return &___targetPosition_13; }
	inline void set_targetPosition_13(FsmVector3_t3996534004 * value)
	{
		___targetPosition_13 = value;
		Il2CppCodeGenWriteBarrier(&___targetPosition_13, value);
	}

	inline static int32_t get_offset_of_weight_14() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___weight_14)); }
	inline FsmFloat_t937133978 * get_weight_14() const { return ___weight_14; }
	inline FsmFloat_t937133978 ** get_address_of_weight_14() { return &___weight_14; }
	inline void set_weight_14(FsmFloat_t937133978 * value)
	{
		___weight_14 = value;
		Il2CppCodeGenWriteBarrier(&___weight_14, value);
	}

	inline static int32_t get_offset_of_bodyWeight_15() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___bodyWeight_15)); }
	inline FsmFloat_t937133978 * get_bodyWeight_15() const { return ___bodyWeight_15; }
	inline FsmFloat_t937133978 ** get_address_of_bodyWeight_15() { return &___bodyWeight_15; }
	inline void set_bodyWeight_15(FsmFloat_t937133978 * value)
	{
		___bodyWeight_15 = value;
		Il2CppCodeGenWriteBarrier(&___bodyWeight_15, value);
	}

	inline static int32_t get_offset_of_headWeight_16() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___headWeight_16)); }
	inline FsmFloat_t937133978 * get_headWeight_16() const { return ___headWeight_16; }
	inline FsmFloat_t937133978 ** get_address_of_headWeight_16() { return &___headWeight_16; }
	inline void set_headWeight_16(FsmFloat_t937133978 * value)
	{
		___headWeight_16 = value;
		Il2CppCodeGenWriteBarrier(&___headWeight_16, value);
	}

	inline static int32_t get_offset_of_eyesWeight_17() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___eyesWeight_17)); }
	inline FsmFloat_t937133978 * get_eyesWeight_17() const { return ___eyesWeight_17; }
	inline FsmFloat_t937133978 ** get_address_of_eyesWeight_17() { return &___eyesWeight_17; }
	inline void set_eyesWeight_17(FsmFloat_t937133978 * value)
	{
		___eyesWeight_17 = value;
		Il2CppCodeGenWriteBarrier(&___eyesWeight_17, value);
	}

	inline static int32_t get_offset_of_clampWeight_18() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___clampWeight_18)); }
	inline FsmFloat_t937133978 * get_clampWeight_18() const { return ___clampWeight_18; }
	inline FsmFloat_t937133978 ** get_address_of_clampWeight_18() { return &___clampWeight_18; }
	inline void set_clampWeight_18(FsmFloat_t937133978 * value)
	{
		___clampWeight_18 = value;
		Il2CppCodeGenWriteBarrier(&___clampWeight_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ___everyFrame_19)); }
	inline bool get_everyFrame_19() const { return ___everyFrame_19; }
	inline bool* get_address_of_everyFrame_19() { return &___everyFrame_19; }
	inline void set_everyFrame_19(bool value)
	{
		___everyFrame_19 = value;
	}

	inline static int32_t get_offset_of__animator_20() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ____animator_20)); }
	inline Animator_t69676727 * get__animator_20() const { return ____animator_20; }
	inline Animator_t69676727 ** get_address_of__animator_20() { return &____animator_20; }
	inline void set__animator_20(Animator_t69676727 * value)
	{
		____animator_20 = value;
		Il2CppCodeGenWriteBarrier(&____animator_20, value);
	}

	inline static int32_t get_offset_of__transform_21() { return static_cast<int32_t>(offsetof(SetAnimatorLookAt_t349070307, ____transform_21)); }
	inline Transform_t3275118058 * get__transform_21() const { return ____transform_21; }
	inline Transform_t3275118058 ** get_address_of__transform_21() { return &____transform_21; }
	inline void set__transform_21(Transform_t3275118058 * value)
	{
		____transform_21 = value;
		Il2CppCodeGenWriteBarrier(&____transform_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
