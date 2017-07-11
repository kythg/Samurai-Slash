#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Fs3863144983.h"

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

// HutongGames.PlayMaker.Actions.GetAnimatorIsMatchingTarget
struct  GetAnimatorIsMatchingTarget_t752236675  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorIsMatchingTarget::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAnimatorIsMatchingTarget::isMatchingActive
	FsmBool_t664485696 * ___isMatchingActive_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorIsMatchingTarget::matchingActivatedEvent
	FsmEvent_t1258573736 * ___matchingActivatedEvent_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorIsMatchingTarget::matchingDeactivedEvent
	FsmEvent_t1258573736 * ___matchingDeactivedEvent_17;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorIsMatchingTarget::_animator
	Animator_t69676727 * ____animator_18;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorIsMatchingTarget_t752236675, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_isMatchingActive_15() { return static_cast<int32_t>(offsetof(GetAnimatorIsMatchingTarget_t752236675, ___isMatchingActive_15)); }
	inline FsmBool_t664485696 * get_isMatchingActive_15() const { return ___isMatchingActive_15; }
	inline FsmBool_t664485696 ** get_address_of_isMatchingActive_15() { return &___isMatchingActive_15; }
	inline void set_isMatchingActive_15(FsmBool_t664485696 * value)
	{
		___isMatchingActive_15 = value;
		Il2CppCodeGenWriteBarrier(&___isMatchingActive_15, value);
	}

	inline static int32_t get_offset_of_matchingActivatedEvent_16() { return static_cast<int32_t>(offsetof(GetAnimatorIsMatchingTarget_t752236675, ___matchingActivatedEvent_16)); }
	inline FsmEvent_t1258573736 * get_matchingActivatedEvent_16() const { return ___matchingActivatedEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_matchingActivatedEvent_16() { return &___matchingActivatedEvent_16; }
	inline void set_matchingActivatedEvent_16(FsmEvent_t1258573736 * value)
	{
		___matchingActivatedEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___matchingActivatedEvent_16, value);
	}

	inline static int32_t get_offset_of_matchingDeactivedEvent_17() { return static_cast<int32_t>(offsetof(GetAnimatorIsMatchingTarget_t752236675, ___matchingDeactivedEvent_17)); }
	inline FsmEvent_t1258573736 * get_matchingDeactivedEvent_17() const { return ___matchingDeactivedEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_matchingDeactivedEvent_17() { return &___matchingDeactivedEvent_17; }
	inline void set_matchingDeactivedEvent_17(FsmEvent_t1258573736 * value)
	{
		___matchingDeactivedEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___matchingDeactivedEvent_17, value);
	}

	inline static int32_t get_offset_of__animator_18() { return static_cast<int32_t>(offsetof(GetAnimatorIsMatchingTarget_t752236675, ____animator_18)); }
	inline Animator_t69676727 * get__animator_18() const { return ____animator_18; }
	inline Animator_t69676727 ** get_address_of__animator_18() { return &____animator_18; }
	inline void set__animator_18(Animator_t69676727 * value)
	{
		____animator_18 = value;
		Il2CppCodeGenWriteBarrier(&____animator_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
