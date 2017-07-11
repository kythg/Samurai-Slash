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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.Component
struct Component_t3819376471;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.HasComponent
struct  HasComponent_t3941069513  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.HasComponent::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.HasComponent::component
	FsmString_t2414474701 * ___component_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.HasComponent::removeOnExit
	FsmBool_t664485696 * ___removeOnExit_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.HasComponent::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.HasComponent::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.HasComponent::store
	FsmBool_t664485696 * ___store_16;
	// System.Boolean HutongGames.PlayMaker.Actions.HasComponent::everyFrame
	bool ___everyFrame_17;
	// UnityEngine.Component HutongGames.PlayMaker.Actions.HasComponent::aComponent
	Component_t3819376471 * ___aComponent_18;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(HasComponent_t3941069513, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_component_12() { return static_cast<int32_t>(offsetof(HasComponent_t3941069513, ___component_12)); }
	inline FsmString_t2414474701 * get_component_12() const { return ___component_12; }
	inline FsmString_t2414474701 ** get_address_of_component_12() { return &___component_12; }
	inline void set_component_12(FsmString_t2414474701 * value)
	{
		___component_12 = value;
		Il2CppCodeGenWriteBarrier(&___component_12, value);
	}

	inline static int32_t get_offset_of_removeOnExit_13() { return static_cast<int32_t>(offsetof(HasComponent_t3941069513, ___removeOnExit_13)); }
	inline FsmBool_t664485696 * get_removeOnExit_13() const { return ___removeOnExit_13; }
	inline FsmBool_t664485696 ** get_address_of_removeOnExit_13() { return &___removeOnExit_13; }
	inline void set_removeOnExit_13(FsmBool_t664485696 * value)
	{
		___removeOnExit_13 = value;
		Il2CppCodeGenWriteBarrier(&___removeOnExit_13, value);
	}

	inline static int32_t get_offset_of_trueEvent_14() { return static_cast<int32_t>(offsetof(HasComponent_t3941069513, ___trueEvent_14)); }
	inline FsmEvent_t1258573736 * get_trueEvent_14() const { return ___trueEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_14() { return &___trueEvent_14; }
	inline void set_trueEvent_14(FsmEvent_t1258573736 * value)
	{
		___trueEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_14, value);
	}

	inline static int32_t get_offset_of_falseEvent_15() { return static_cast<int32_t>(offsetof(HasComponent_t3941069513, ___falseEvent_15)); }
	inline FsmEvent_t1258573736 * get_falseEvent_15() const { return ___falseEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_15() { return &___falseEvent_15; }
	inline void set_falseEvent_15(FsmEvent_t1258573736 * value)
	{
		___falseEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_15, value);
	}

	inline static int32_t get_offset_of_store_16() { return static_cast<int32_t>(offsetof(HasComponent_t3941069513, ___store_16)); }
	inline FsmBool_t664485696 * get_store_16() const { return ___store_16; }
	inline FsmBool_t664485696 ** get_address_of_store_16() { return &___store_16; }
	inline void set_store_16(FsmBool_t664485696 * value)
	{
		___store_16 = value;
		Il2CppCodeGenWriteBarrier(&___store_16, value);
	}

	inline static int32_t get_offset_of_everyFrame_17() { return static_cast<int32_t>(offsetof(HasComponent_t3941069513, ___everyFrame_17)); }
	inline bool get_everyFrame_17() const { return ___everyFrame_17; }
	inline bool* get_address_of_everyFrame_17() { return &___everyFrame_17; }
	inline void set_everyFrame_17(bool value)
	{
		___everyFrame_17 = value;
	}

	inline static int32_t get_offset_of_aComponent_18() { return static_cast<int32_t>(offsetof(HasComponent_t3941069513, ___aComponent_18)); }
	inline Component_t3819376471 * get_aComponent_18() const { return ___aComponent_18; }
	inline Component_t3819376471 ** get_address_of_aComponent_18() { return &___aComponent_18; }
	inline void set_aComponent_18(Component_t3819376471 * value)
	{
		___aComponent_18 = value;
		Il2CppCodeGenWriteBarrier(&___aComponent_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
