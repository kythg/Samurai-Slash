#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_ForceMode1856518252.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Explosion
struct  Explosion_t472586591  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Explosion::center
	FsmVector3_t3996534004 * ___center_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Explosion::force
	FsmFloat_t937133978 * ___force_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Explosion::radius
	FsmFloat_t937133978 * ___radius_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Explosion::upwardsModifier
	FsmFloat_t937133978 * ___upwardsModifier_14;
	// UnityEngine.ForceMode HutongGames.PlayMaker.Actions.Explosion::forceMode
	int32_t ___forceMode_15;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.Explosion::layer
	FsmInt_t1273009179 * ___layer_16;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.Explosion::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.Explosion::invertMask
	FsmBool_t664485696 * ___invertMask_18;
	// System.Boolean HutongGames.PlayMaker.Actions.Explosion::everyFrame
	bool ___everyFrame_19;

public:
	inline static int32_t get_offset_of_center_11() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___center_11)); }
	inline FsmVector3_t3996534004 * get_center_11() const { return ___center_11; }
	inline FsmVector3_t3996534004 ** get_address_of_center_11() { return &___center_11; }
	inline void set_center_11(FsmVector3_t3996534004 * value)
	{
		___center_11 = value;
		Il2CppCodeGenWriteBarrier(&___center_11, value);
	}

	inline static int32_t get_offset_of_force_12() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___force_12)); }
	inline FsmFloat_t937133978 * get_force_12() const { return ___force_12; }
	inline FsmFloat_t937133978 ** get_address_of_force_12() { return &___force_12; }
	inline void set_force_12(FsmFloat_t937133978 * value)
	{
		___force_12 = value;
		Il2CppCodeGenWriteBarrier(&___force_12, value);
	}

	inline static int32_t get_offset_of_radius_13() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___radius_13)); }
	inline FsmFloat_t937133978 * get_radius_13() const { return ___radius_13; }
	inline FsmFloat_t937133978 ** get_address_of_radius_13() { return &___radius_13; }
	inline void set_radius_13(FsmFloat_t937133978 * value)
	{
		___radius_13 = value;
		Il2CppCodeGenWriteBarrier(&___radius_13, value);
	}

	inline static int32_t get_offset_of_upwardsModifier_14() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___upwardsModifier_14)); }
	inline FsmFloat_t937133978 * get_upwardsModifier_14() const { return ___upwardsModifier_14; }
	inline FsmFloat_t937133978 ** get_address_of_upwardsModifier_14() { return &___upwardsModifier_14; }
	inline void set_upwardsModifier_14(FsmFloat_t937133978 * value)
	{
		___upwardsModifier_14 = value;
		Il2CppCodeGenWriteBarrier(&___upwardsModifier_14, value);
	}

	inline static int32_t get_offset_of_forceMode_15() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___forceMode_15)); }
	inline int32_t get_forceMode_15() const { return ___forceMode_15; }
	inline int32_t* get_address_of_forceMode_15() { return &___forceMode_15; }
	inline void set_forceMode_15(int32_t value)
	{
		___forceMode_15 = value;
	}

	inline static int32_t get_offset_of_layer_16() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___layer_16)); }
	inline FsmInt_t1273009179 * get_layer_16() const { return ___layer_16; }
	inline FsmInt_t1273009179 ** get_address_of_layer_16() { return &___layer_16; }
	inline void set_layer_16(FsmInt_t1273009179 * value)
	{
		___layer_16 = value;
		Il2CppCodeGenWriteBarrier(&___layer_16, value);
	}

	inline static int32_t get_offset_of_layerMask_17() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___layerMask_17)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_17() const { return ___layerMask_17; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_17() { return &___layerMask_17; }
	inline void set_layerMask_17(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_17 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_17, value);
	}

	inline static int32_t get_offset_of_invertMask_18() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___invertMask_18)); }
	inline FsmBool_t664485696 * get_invertMask_18() const { return ___invertMask_18; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_18() { return &___invertMask_18; }
	inline void set_invertMask_18(FsmBool_t664485696 * value)
	{
		___invertMask_18 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(Explosion_t472586591, ___everyFrame_19)); }
	inline bool get_everyFrame_19() const { return ___everyFrame_19; }
	inline bool* get_address_of_everyFrame_19() { return &___everyFrame_19; }
	inline void set_everyFrame_19(bool value)
	{
		___everyFrame_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
