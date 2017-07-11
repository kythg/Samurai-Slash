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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorLayersAffectMassCenter
struct  GetAnimatorLayersAffectMassCenter_t3821126767  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorLayersAffectMassCenter::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAnimatorLayersAffectMassCenter::affectMassCenter
	FsmBool_t664485696 * ___affectMassCenter_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorLayersAffectMassCenter::affectMassCenterEvent
	FsmEvent_t1258573736 * ___affectMassCenterEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorLayersAffectMassCenter::doNotAffectMassCenterEvent
	FsmEvent_t1258573736 * ___doNotAffectMassCenterEvent_14;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorLayersAffectMassCenter::_animator
	Animator_t69676727 * ____animator_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetAnimatorLayersAffectMassCenter_t3821126767, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_affectMassCenter_12() { return static_cast<int32_t>(offsetof(GetAnimatorLayersAffectMassCenter_t3821126767, ___affectMassCenter_12)); }
	inline FsmBool_t664485696 * get_affectMassCenter_12() const { return ___affectMassCenter_12; }
	inline FsmBool_t664485696 ** get_address_of_affectMassCenter_12() { return &___affectMassCenter_12; }
	inline void set_affectMassCenter_12(FsmBool_t664485696 * value)
	{
		___affectMassCenter_12 = value;
		Il2CppCodeGenWriteBarrier(&___affectMassCenter_12, value);
	}

	inline static int32_t get_offset_of_affectMassCenterEvent_13() { return static_cast<int32_t>(offsetof(GetAnimatorLayersAffectMassCenter_t3821126767, ___affectMassCenterEvent_13)); }
	inline FsmEvent_t1258573736 * get_affectMassCenterEvent_13() const { return ___affectMassCenterEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_affectMassCenterEvent_13() { return &___affectMassCenterEvent_13; }
	inline void set_affectMassCenterEvent_13(FsmEvent_t1258573736 * value)
	{
		___affectMassCenterEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___affectMassCenterEvent_13, value);
	}

	inline static int32_t get_offset_of_doNotAffectMassCenterEvent_14() { return static_cast<int32_t>(offsetof(GetAnimatorLayersAffectMassCenter_t3821126767, ___doNotAffectMassCenterEvent_14)); }
	inline FsmEvent_t1258573736 * get_doNotAffectMassCenterEvent_14() const { return ___doNotAffectMassCenterEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_doNotAffectMassCenterEvent_14() { return &___doNotAffectMassCenterEvent_14; }
	inline void set_doNotAffectMassCenterEvent_14(FsmEvent_t1258573736 * value)
	{
		___doNotAffectMassCenterEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___doNotAffectMassCenterEvent_14, value);
	}

	inline static int32_t get_offset_of__animator_15() { return static_cast<int32_t>(offsetof(GetAnimatorLayersAffectMassCenter_t3821126767, ____animator_15)); }
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
