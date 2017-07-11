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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAnimatorTrigger
struct  SetAnimatorTrigger_t3111496129  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAnimatorTrigger::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetAnimatorTrigger::trigger
	FsmString_t2414474701 * ___trigger_12;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.SetAnimatorTrigger::_animator
	Animator_t69676727 * ____animator_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetAnimatorTrigger_t3111496129, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_trigger_12() { return static_cast<int32_t>(offsetof(SetAnimatorTrigger_t3111496129, ___trigger_12)); }
	inline FsmString_t2414474701 * get_trigger_12() const { return ___trigger_12; }
	inline FsmString_t2414474701 ** get_address_of_trigger_12() { return &___trigger_12; }
	inline void set_trigger_12(FsmString_t2414474701 * value)
	{
		___trigger_12 = value;
		Il2CppCodeGenWriteBarrier(&___trigger_12, value);
	}

	inline static int32_t get_offset_of__animator_13() { return static_cast<int32_t>(offsetof(SetAnimatorTrigger_t3111496129, ____animator_13)); }
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
