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
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimatorPlay
struct  AnimatorPlay_t1179221053  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AnimatorPlay::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AnimatorPlay::stateName
	FsmString_t2414474701 * ___stateName_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.AnimatorPlay::layer
	FsmInt_t1273009179 * ___layer_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimatorPlay::normalizedTime
	FsmFloat_t937133978 * ___normalizedTime_14;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimatorPlay::everyFrame
	bool ___everyFrame_15;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.AnimatorPlay::_animator
	Animator_t69676727 * ____animator_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(AnimatorPlay_t1179221053, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_stateName_12() { return static_cast<int32_t>(offsetof(AnimatorPlay_t1179221053, ___stateName_12)); }
	inline FsmString_t2414474701 * get_stateName_12() const { return ___stateName_12; }
	inline FsmString_t2414474701 ** get_address_of_stateName_12() { return &___stateName_12; }
	inline void set_stateName_12(FsmString_t2414474701 * value)
	{
		___stateName_12 = value;
		Il2CppCodeGenWriteBarrier(&___stateName_12, value);
	}

	inline static int32_t get_offset_of_layer_13() { return static_cast<int32_t>(offsetof(AnimatorPlay_t1179221053, ___layer_13)); }
	inline FsmInt_t1273009179 * get_layer_13() const { return ___layer_13; }
	inline FsmInt_t1273009179 ** get_address_of_layer_13() { return &___layer_13; }
	inline void set_layer_13(FsmInt_t1273009179 * value)
	{
		___layer_13 = value;
		Il2CppCodeGenWriteBarrier(&___layer_13, value);
	}

	inline static int32_t get_offset_of_normalizedTime_14() { return static_cast<int32_t>(offsetof(AnimatorPlay_t1179221053, ___normalizedTime_14)); }
	inline FsmFloat_t937133978 * get_normalizedTime_14() const { return ___normalizedTime_14; }
	inline FsmFloat_t937133978 ** get_address_of_normalizedTime_14() { return &___normalizedTime_14; }
	inline void set_normalizedTime_14(FsmFloat_t937133978 * value)
	{
		___normalizedTime_14 = value;
		Il2CppCodeGenWriteBarrier(&___normalizedTime_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(AnimatorPlay_t1179221053, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of__animator_16() { return static_cast<int32_t>(offsetof(AnimatorPlay_t1179221053, ____animator_16)); }
	inline Animator_t69676727 * get__animator_16() const { return ____animator_16; }
	inline Animator_t69676727 ** get_address_of__animator_16() { return &____animator_16; }
	inline void set__animator_16(Animator_t69676727 * value)
	{
		____animator_16 = value;
		Il2CppCodeGenWriteBarrier(&____animator_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
