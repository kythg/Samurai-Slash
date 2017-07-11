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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAnimatorStabilizeFeet
struct  SetAnimatorStabilizeFeet_t3575473090  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAnimatorStabilizeFeet::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetAnimatorStabilizeFeet::stabilizeFeet
	FsmBool_t664485696 * ___stabilizeFeet_12;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.SetAnimatorStabilizeFeet::_animator
	Animator_t69676727 * ____animator_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetAnimatorStabilizeFeet_t3575473090, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_stabilizeFeet_12() { return static_cast<int32_t>(offsetof(SetAnimatorStabilizeFeet_t3575473090, ___stabilizeFeet_12)); }
	inline FsmBool_t664485696 * get_stabilizeFeet_12() const { return ___stabilizeFeet_12; }
	inline FsmBool_t664485696 ** get_address_of_stabilizeFeet_12() { return &___stabilizeFeet_12; }
	inline void set_stabilizeFeet_12(FsmBool_t664485696 * value)
	{
		___stabilizeFeet_12 = value;
		Il2CppCodeGenWriteBarrier(&___stabilizeFeet_12, value);
	}

	inline static int32_t get_offset_of__animator_13() { return static_cast<int32_t>(offsetof(SetAnimatorStabilizeFeet_t3575473090, ____animator_13)); }
	inline Animator_t69676727 * get__animator_13() const { return ____animator_13; }
	inline Animator_t69676727 ** get_address_of__animator_13() { return &____animator_13; }
	inline void set__animator_13(Animator_t69676727 * value)
	{
		____animator_13 = value;
		Il2CppCodeGenWriteBarrier(&____animator_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
