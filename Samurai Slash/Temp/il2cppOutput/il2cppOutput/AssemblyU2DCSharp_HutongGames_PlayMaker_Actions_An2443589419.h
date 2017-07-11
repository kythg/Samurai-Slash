#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_AvatarTarget193923574.h"

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

// HutongGames.PlayMaker.Actions.AnimatorMatchTarget
struct  AnimatorMatchTarget_t2443589419  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AnimatorMatchTarget::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// UnityEngine.AvatarTarget HutongGames.PlayMaker.Actions.AnimatorMatchTarget::bodyPart
	int32_t ___bodyPart_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.AnimatorMatchTarget::target
	FsmGameObject_t3097142863 * ___target_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AnimatorMatchTarget::targetPosition
	FsmVector3_t3996534004 * ___targetPosition_14;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.AnimatorMatchTarget::targetRotation
	FsmQuaternion_t878438756 * ___targetRotation_15;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AnimatorMatchTarget::positionWeight
	FsmVector3_t3996534004 * ___positionWeight_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimatorMatchTarget::rotationWeight
	FsmFloat_t937133978 * ___rotationWeight_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimatorMatchTarget::startNormalizedTime
	FsmFloat_t937133978 * ___startNormalizedTime_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimatorMatchTarget::targetNormalizedTime
	FsmFloat_t937133978 * ___targetNormalizedTime_19;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimatorMatchTarget::everyFrame
	bool ___everyFrame_20;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.AnimatorMatchTarget::_animator
	Animator_t69676727 * ____animator_21;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.AnimatorMatchTarget::_transform
	Transform_t3275118058 * ____transform_22;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_bodyPart_12() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___bodyPart_12)); }
	inline int32_t get_bodyPart_12() const { return ___bodyPart_12; }
	inline int32_t* get_address_of_bodyPart_12() { return &___bodyPart_12; }
	inline void set_bodyPart_12(int32_t value)
	{
		___bodyPart_12 = value;
	}

	inline static int32_t get_offset_of_target_13() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___target_13)); }
	inline FsmGameObject_t3097142863 * get_target_13() const { return ___target_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_target_13() { return &___target_13; }
	inline void set_target_13(FsmGameObject_t3097142863 * value)
	{
		___target_13 = value;
		Il2CppCodeGenWriteBarrier(&___target_13, value);
	}

	inline static int32_t get_offset_of_targetPosition_14() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___targetPosition_14)); }
	inline FsmVector3_t3996534004 * get_targetPosition_14() const { return ___targetPosition_14; }
	inline FsmVector3_t3996534004 ** get_address_of_targetPosition_14() { return &___targetPosition_14; }
	inline void set_targetPosition_14(FsmVector3_t3996534004 * value)
	{
		___targetPosition_14 = value;
		Il2CppCodeGenWriteBarrier(&___targetPosition_14, value);
	}

	inline static int32_t get_offset_of_targetRotation_15() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___targetRotation_15)); }
	inline FsmQuaternion_t878438756 * get_targetRotation_15() const { return ___targetRotation_15; }
	inline FsmQuaternion_t878438756 ** get_address_of_targetRotation_15() { return &___targetRotation_15; }
	inline void set_targetRotation_15(FsmQuaternion_t878438756 * value)
	{
		___targetRotation_15 = value;
		Il2CppCodeGenWriteBarrier(&___targetRotation_15, value);
	}

	inline static int32_t get_offset_of_positionWeight_16() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___positionWeight_16)); }
	inline FsmVector3_t3996534004 * get_positionWeight_16() const { return ___positionWeight_16; }
	inline FsmVector3_t3996534004 ** get_address_of_positionWeight_16() { return &___positionWeight_16; }
	inline void set_positionWeight_16(FsmVector3_t3996534004 * value)
	{
		___positionWeight_16 = value;
		Il2CppCodeGenWriteBarrier(&___positionWeight_16, value);
	}

	inline static int32_t get_offset_of_rotationWeight_17() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___rotationWeight_17)); }
	inline FsmFloat_t937133978 * get_rotationWeight_17() const { return ___rotationWeight_17; }
	inline FsmFloat_t937133978 ** get_address_of_rotationWeight_17() { return &___rotationWeight_17; }
	inline void set_rotationWeight_17(FsmFloat_t937133978 * value)
	{
		___rotationWeight_17 = value;
		Il2CppCodeGenWriteBarrier(&___rotationWeight_17, value);
	}

	inline static int32_t get_offset_of_startNormalizedTime_18() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___startNormalizedTime_18)); }
	inline FsmFloat_t937133978 * get_startNormalizedTime_18() const { return ___startNormalizedTime_18; }
	inline FsmFloat_t937133978 ** get_address_of_startNormalizedTime_18() { return &___startNormalizedTime_18; }
	inline void set_startNormalizedTime_18(FsmFloat_t937133978 * value)
	{
		___startNormalizedTime_18 = value;
		Il2CppCodeGenWriteBarrier(&___startNormalizedTime_18, value);
	}

	inline static int32_t get_offset_of_targetNormalizedTime_19() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___targetNormalizedTime_19)); }
	inline FsmFloat_t937133978 * get_targetNormalizedTime_19() const { return ___targetNormalizedTime_19; }
	inline FsmFloat_t937133978 ** get_address_of_targetNormalizedTime_19() { return &___targetNormalizedTime_19; }
	inline void set_targetNormalizedTime_19(FsmFloat_t937133978 * value)
	{
		___targetNormalizedTime_19 = value;
		Il2CppCodeGenWriteBarrier(&___targetNormalizedTime_19, value);
	}

	inline static int32_t get_offset_of_everyFrame_20() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ___everyFrame_20)); }
	inline bool get_everyFrame_20() const { return ___everyFrame_20; }
	inline bool* get_address_of_everyFrame_20() { return &___everyFrame_20; }
	inline void set_everyFrame_20(bool value)
	{
		___everyFrame_20 = value;
	}

	inline static int32_t get_offset_of__animator_21() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ____animator_21)); }
	inline Animator_t69676727 * get__animator_21() const { return ____animator_21; }
	inline Animator_t69676727 ** get_address_of__animator_21() { return &____animator_21; }
	inline void set__animator_21(Animator_t69676727 * value)
	{
		____animator_21 = value;
		Il2CppCodeGenWriteBarrier(&____animator_21, value);
	}

	inline static int32_t get_offset_of__transform_22() { return static_cast<int32_t>(offsetof(AnimatorMatchTarget_t2443589419, ____transform_22)); }
	inline Transform_t3275118058 * get__transform_22() const { return ____transform_22; }
	inline Transform_t3275118058 ** get_address_of__transform_22() { return &____transform_22; }
	inline void set__transform_22(Transform_t3275118058 * value)
	{
		____transform_22 = value;
		Il2CppCodeGenWriteBarrier(&____transform_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
