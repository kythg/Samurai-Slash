﻿#pragma once

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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAnimatorTarget
struct  SetAnimatorTarget_t762350858  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAnimatorTarget::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// UnityEngine.AvatarTarget HutongGames.PlayMaker.Actions.SetAnimatorTarget::avatarTarget
	int32_t ___avatarTarget_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorTarget::targetNormalizedTime
	FsmFloat_t937133978 * ___targetNormalizedTime_13;
	// System.Boolean HutongGames.PlayMaker.Actions.SetAnimatorTarget::everyFrame
	bool ___everyFrame_14;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.SetAnimatorTarget::_animator
	Animator_t69676727 * ____animator_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetAnimatorTarget_t762350858, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_avatarTarget_12() { return static_cast<int32_t>(offsetof(SetAnimatorTarget_t762350858, ___avatarTarget_12)); }
	inline int32_t get_avatarTarget_12() const { return ___avatarTarget_12; }
	inline int32_t* get_address_of_avatarTarget_12() { return &___avatarTarget_12; }
	inline void set_avatarTarget_12(int32_t value)
	{
		___avatarTarget_12 = value;
	}

	inline static int32_t get_offset_of_targetNormalizedTime_13() { return static_cast<int32_t>(offsetof(SetAnimatorTarget_t762350858, ___targetNormalizedTime_13)); }
	inline FsmFloat_t937133978 * get_targetNormalizedTime_13() const { return ___targetNormalizedTime_13; }
	inline FsmFloat_t937133978 ** get_address_of_targetNormalizedTime_13() { return &___targetNormalizedTime_13; }
	inline void set_targetNormalizedTime_13(FsmFloat_t937133978 * value)
	{
		___targetNormalizedTime_13 = value;
		Il2CppCodeGenWriteBarrier(&___targetNormalizedTime_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(SetAnimatorTarget_t762350858, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}

	inline static int32_t get_offset_of__animator_15() { return static_cast<int32_t>(offsetof(SetAnimatorTarget_t762350858, ____animator_15)); }
	inline Animator_t69676727 * get__animator_15() const { return ____animator_15; }
	inline Animator_t69676727 ** get_address_of__animator_15() { return &____animator_15; }
	inline void set__animator_15(Animator_t69676727 * value)
	{
		____animator_15 = value;
		Il2CppCodeGenWriteBarrier(&____animator_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
