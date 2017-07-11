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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAnimatorFeetPivotActive
struct  SetAnimatorFeetPivotActive_t3188379659  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAnimatorFeetPivotActive::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimatorFeetPivotActive::feetPivotActive
	FsmFloat_t937133978 * ___feetPivotActive_12;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.SetAnimatorFeetPivotActive::_animator
	Animator_t69676727 * ____animator_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetAnimatorFeetPivotActive_t3188379659, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_feetPivotActive_12() { return static_cast<int32_t>(offsetof(SetAnimatorFeetPivotActive_t3188379659, ___feetPivotActive_12)); }
	inline FsmFloat_t937133978 * get_feetPivotActive_12() const { return ___feetPivotActive_12; }
	inline FsmFloat_t937133978 ** get_address_of_feetPivotActive_12() { return &___feetPivotActive_12; }
	inline void set_feetPivotActive_12(FsmFloat_t937133978 * value)
	{
		___feetPivotActive_12 = value;
		Il2CppCodeGenWriteBarrier(&___feetPivotActive_12, value);
	}

	inline static int32_t get_offset_of__animator_13() { return static_cast<int32_t>(offsetof(SetAnimatorFeetPivotActive_t3188379659, ____animator_13)); }
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
