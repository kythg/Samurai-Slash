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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FindClosest
struct  FindClosest_t692058282  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.FindClosest::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FindClosest::withTag
	FsmString_t2414474701 * ___withTag_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.FindClosest::ignoreOwner
	FsmBool_t664485696 * ___ignoreOwner_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.FindClosest::mustBeVisible
	FsmBool_t664485696 * ___mustBeVisible_14;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.FindClosest::storeObject
	FsmGameObject_t3097142863 * ___storeObject_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FindClosest::storeDistance
	FsmFloat_t937133978 * ___storeDistance_16;
	// System.Boolean HutongGames.PlayMaker.Actions.FindClosest::everyFrame
	bool ___everyFrame_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(FindClosest_t692058282, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_withTag_12() { return static_cast<int32_t>(offsetof(FindClosest_t692058282, ___withTag_12)); }
	inline FsmString_t2414474701 * get_withTag_12() const { return ___withTag_12; }
	inline FsmString_t2414474701 ** get_address_of_withTag_12() { return &___withTag_12; }
	inline void set_withTag_12(FsmString_t2414474701 * value)
	{
		___withTag_12 = value;
		Il2CppCodeGenWriteBarrier(&___withTag_12, value);
	}

	inline static int32_t get_offset_of_ignoreOwner_13() { return static_cast<int32_t>(offsetof(FindClosest_t692058282, ___ignoreOwner_13)); }
	inline FsmBool_t664485696 * get_ignoreOwner_13() const { return ___ignoreOwner_13; }
	inline FsmBool_t664485696 ** get_address_of_ignoreOwner_13() { return &___ignoreOwner_13; }
	inline void set_ignoreOwner_13(FsmBool_t664485696 * value)
	{
		___ignoreOwner_13 = value;
		Il2CppCodeGenWriteBarrier(&___ignoreOwner_13, value);
	}

	inline static int32_t get_offset_of_mustBeVisible_14() { return static_cast<int32_t>(offsetof(FindClosest_t692058282, ___mustBeVisible_14)); }
	inline FsmBool_t664485696 * get_mustBeVisible_14() const { return ___mustBeVisible_14; }
	inline FsmBool_t664485696 ** get_address_of_mustBeVisible_14() { return &___mustBeVisible_14; }
	inline void set_mustBeVisible_14(FsmBool_t664485696 * value)
	{
		___mustBeVisible_14 = value;
		Il2CppCodeGenWriteBarrier(&___mustBeVisible_14, value);
	}

	inline static int32_t get_offset_of_storeObject_15() { return static_cast<int32_t>(offsetof(FindClosest_t692058282, ___storeObject_15)); }
	inline FsmGameObject_t3097142863 * get_storeObject_15() const { return ___storeObject_15; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeObject_15() { return &___storeObject_15; }
	inline void set_storeObject_15(FsmGameObject_t3097142863 * value)
	{
		___storeObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeObject_15, value);
	}

	inline static int32_t get_offset_of_storeDistance_16() { return static_cast<int32_t>(offsetof(FindClosest_t692058282, ___storeDistance_16)); }
	inline FsmFloat_t937133978 * get_storeDistance_16() const { return ___storeDistance_16; }
	inline FsmFloat_t937133978 ** get_address_of_storeDistance_16() { return &___storeDistance_16; }
	inline void set_storeDistance_16(FsmFloat_t937133978 * value)
	{
		___storeDistance_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeDistance_16, value);
	}

	inline static int32_t get_offset_of_everyFrame_17() { return static_cast<int32_t>(offsetof(FindClosest_t692058282, ___everyFrame_17)); }
	inline bool get_everyFrame_17() const { return ___everyFrame_17; }
	inline bool* get_address_of_everyFrame_17() { return &___everyFrame_17; }
	inline void set_everyFrame_17(bool value)
	{
		___everyFrame_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
