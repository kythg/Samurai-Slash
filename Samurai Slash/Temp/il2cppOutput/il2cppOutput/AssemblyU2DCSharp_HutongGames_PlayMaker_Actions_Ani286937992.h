﻿#pragma once

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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimatorInterruptMatchTarget
struct  AnimatorInterruptMatchTarget_t286937992  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AnimatorInterruptMatchTarget::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.AnimatorInterruptMatchTarget::completeMatch
	FsmBool_t664485696 * ___completeMatch_12;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(AnimatorInterruptMatchTarget_t286937992, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_completeMatch_12() { return static_cast<int32_t>(offsetof(AnimatorInterruptMatchTarget_t286937992, ___completeMatch_12)); }
	inline FsmBool_t664485696 * get_completeMatch_12() const { return ___completeMatch_12; }
	inline FsmBool_t664485696 ** get_address_of_completeMatch_12() { return &___completeMatch_12; }
	inline void set_completeMatch_12(FsmBool_t664485696 * value)
	{
		___completeMatch_12 = value;
		Il2CppCodeGenWriteBarrier(&___completeMatch_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
