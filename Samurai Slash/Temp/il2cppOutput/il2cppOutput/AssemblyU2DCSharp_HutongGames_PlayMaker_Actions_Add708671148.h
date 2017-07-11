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
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.Component
struct Component_t3819376471;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AddComponent
struct  AddComponent_t708671148  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddComponent::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AddComponent::component
	FsmString_t2414474701 * ___component_12;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.AddComponent::storeComponent
	FsmObject_t2785794313 * ___storeComponent_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.AddComponent::removeOnExit
	FsmBool_t664485696 * ___removeOnExit_14;
	// UnityEngine.Component HutongGames.PlayMaker.Actions.AddComponent::addedComponent
	Component_t3819376471 * ___addedComponent_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(AddComponent_t708671148, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_component_12() { return static_cast<int32_t>(offsetof(AddComponent_t708671148, ___component_12)); }
	inline FsmString_t2414474701 * get_component_12() const { return ___component_12; }
	inline FsmString_t2414474701 ** get_address_of_component_12() { return &___component_12; }
	inline void set_component_12(FsmString_t2414474701 * value)
	{
		___component_12 = value;
		Il2CppCodeGenWriteBarrier(&___component_12, value);
	}

	inline static int32_t get_offset_of_storeComponent_13() { return static_cast<int32_t>(offsetof(AddComponent_t708671148, ___storeComponent_13)); }
	inline FsmObject_t2785794313 * get_storeComponent_13() const { return ___storeComponent_13; }
	inline FsmObject_t2785794313 ** get_address_of_storeComponent_13() { return &___storeComponent_13; }
	inline void set_storeComponent_13(FsmObject_t2785794313 * value)
	{
		___storeComponent_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeComponent_13, value);
	}

	inline static int32_t get_offset_of_removeOnExit_14() { return static_cast<int32_t>(offsetof(AddComponent_t708671148, ___removeOnExit_14)); }
	inline FsmBool_t664485696 * get_removeOnExit_14() const { return ___removeOnExit_14; }
	inline FsmBool_t664485696 ** get_address_of_removeOnExit_14() { return &___removeOnExit_14; }
	inline void set_removeOnExit_14(FsmBool_t664485696 * value)
	{
		___removeOnExit_14 = value;
		Il2CppCodeGenWriteBarrier(&___removeOnExit_14, value);
	}

	inline static int32_t get_offset_of_addedComponent_15() { return static_cast<int32_t>(offsetof(AddComponent_t708671148, ___addedComponent_15)); }
	inline Component_t3819376471 * get_addedComponent_15() const { return ___addedComponent_15; }
	inline Component_t3819376471 ** get_address_of_addedComponent_15() { return &___addedComponent_15; }
	inline void set_addedComponent_15(Component_t3819376471 * value)
	{
		___addedComponent_15 = value;
		Il2CppCodeGenWriteBarrier(&___addedComponent_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
