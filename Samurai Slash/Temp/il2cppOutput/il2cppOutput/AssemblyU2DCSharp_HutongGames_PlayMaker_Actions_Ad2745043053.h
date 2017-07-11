#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com540501634.h"
#include "UnityEngine_UnityEngine_ForceMode1856518252.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AddExplosionForce
struct  AddExplosionForce_t2745043053  : public ComponentAction_1_t540501634
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddExplosionForce::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AddExplosionForce::center
	FsmVector3_t3996534004 * ___center_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddExplosionForce::force
	FsmFloat_t937133978 * ___force_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddExplosionForce::radius
	FsmFloat_t937133978 * ___radius_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddExplosionForce::upwardsModifier
	FsmFloat_t937133978 * ___upwardsModifier_17;
	// UnityEngine.ForceMode HutongGames.PlayMaker.Actions.AddExplosionForce::forceMode
	int32_t ___forceMode_18;
	// System.Boolean HutongGames.PlayMaker.Actions.AddExplosionForce::everyFrame
	bool ___everyFrame_19;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(AddExplosionForce_t2745043053, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_center_14() { return static_cast<int32_t>(offsetof(AddExplosionForce_t2745043053, ___center_14)); }
	inline FsmVector3_t3996534004 * get_center_14() const { return ___center_14; }
	inline FsmVector3_t3996534004 ** get_address_of_center_14() { return &___center_14; }
	inline void set_center_14(FsmVector3_t3996534004 * value)
	{
		___center_14 = value;
		Il2CppCodeGenWriteBarrier(&___center_14, value);
	}

	inline static int32_t get_offset_of_force_15() { return static_cast<int32_t>(offsetof(AddExplosionForce_t2745043053, ___force_15)); }
	inline FsmFloat_t937133978 * get_force_15() const { return ___force_15; }
	inline FsmFloat_t937133978 ** get_address_of_force_15() { return &___force_15; }
	inline void set_force_15(FsmFloat_t937133978 * value)
	{
		___force_15 = value;
		Il2CppCodeGenWriteBarrier(&___force_15, value);
	}

	inline static int32_t get_offset_of_radius_16() { return static_cast<int32_t>(offsetof(AddExplosionForce_t2745043053, ___radius_16)); }
	inline FsmFloat_t937133978 * get_radius_16() const { return ___radius_16; }
	inline FsmFloat_t937133978 ** get_address_of_radius_16() { return &___radius_16; }
	inline void set_radius_16(FsmFloat_t937133978 * value)
	{
		___radius_16 = value;
		Il2CppCodeGenWriteBarrier(&___radius_16, value);
	}

	inline static int32_t get_offset_of_upwardsModifier_17() { return static_cast<int32_t>(offsetof(AddExplosionForce_t2745043053, ___upwardsModifier_17)); }
	inline FsmFloat_t937133978 * get_upwardsModifier_17() const { return ___upwardsModifier_17; }
	inline FsmFloat_t937133978 ** get_address_of_upwardsModifier_17() { return &___upwardsModifier_17; }
	inline void set_upwardsModifier_17(FsmFloat_t937133978 * value)
	{
		___upwardsModifier_17 = value;
		Il2CppCodeGenWriteBarrier(&___upwardsModifier_17, value);
	}

	inline static int32_t get_offset_of_forceMode_18() { return static_cast<int32_t>(offsetof(AddExplosionForce_t2745043053, ___forceMode_18)); }
	inline int32_t get_forceMode_18() const { return ___forceMode_18; }
	inline int32_t* get_address_of_forceMode_18() { return &___forceMode_18; }
	inline void set_forceMode_18(int32_t value)
	{
		___forceMode_18 = value;
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(AddExplosionForce_t2745043053, ___everyFrame_19)); }
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
