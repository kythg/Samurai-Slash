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
// UnityEngine.Component
struct Component_t3819376471;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DestroyComponent
struct  DestroyComponent_t1081744515  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.DestroyComponent::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.DestroyComponent::component
	FsmString_t2414474701 * ___component_12;
	// UnityEngine.Component HutongGames.PlayMaker.Actions.DestroyComponent::aComponent
	Component_t3819376471 * ___aComponent_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(DestroyComponent_t1081744515, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_component_12() { return static_cast<int32_t>(offsetof(DestroyComponent_t1081744515, ___component_12)); }
	inline FsmString_t2414474701 * get_component_12() const { return ___component_12; }
	inline FsmString_t2414474701 ** get_address_of_component_12() { return &___component_12; }
	inline void set_component_12(FsmString_t2414474701 * value)
	{
		___component_12 = value;
		Il2CppCodeGenWriteBarrier(&___component_12, value);
	}

	inline static int32_t get_offset_of_aComponent_13() { return static_cast<int32_t>(offsetof(DestroyComponent_t1081744515, ___aComponent_13)); }
	inline Component_t3819376471 * get_aComponent_13() const { return ___aComponent_13; }
	inline Component_t3819376471 ** get_address_of_aComponent_13() { return &___aComponent_13; }
	inline void set_aComponent_13(Component_t3819376471 * value)
	{
		___aComponent_13 = value;
		Il2CppCodeGenWriteBarrier(&___aComponent_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
