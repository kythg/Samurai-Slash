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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.Behaviour
struct Behaviour_t955675639;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EnableBehaviour
struct  EnableBehaviour_t1925264334  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.EnableBehaviour::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.EnableBehaviour::behaviour
	FsmString_t2414474701 * ___behaviour_12;
	// UnityEngine.Component HutongGames.PlayMaker.Actions.EnableBehaviour::component
	Component_t3819376471 * ___component_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EnableBehaviour::enable
	FsmBool_t664485696 * ___enable_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EnableBehaviour::resetOnExit
	FsmBool_t664485696 * ___resetOnExit_15;
	// UnityEngine.Behaviour HutongGames.PlayMaker.Actions.EnableBehaviour::componentTarget
	Behaviour_t955675639 * ___componentTarget_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(EnableBehaviour_t1925264334, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_behaviour_12() { return static_cast<int32_t>(offsetof(EnableBehaviour_t1925264334, ___behaviour_12)); }
	inline FsmString_t2414474701 * get_behaviour_12() const { return ___behaviour_12; }
	inline FsmString_t2414474701 ** get_address_of_behaviour_12() { return &___behaviour_12; }
	inline void set_behaviour_12(FsmString_t2414474701 * value)
	{
		___behaviour_12 = value;
		Il2CppCodeGenWriteBarrier(&___behaviour_12, value);
	}

	inline static int32_t get_offset_of_component_13() { return static_cast<int32_t>(offsetof(EnableBehaviour_t1925264334, ___component_13)); }
	inline Component_t3819376471 * get_component_13() const { return ___component_13; }
	inline Component_t3819376471 ** get_address_of_component_13() { return &___component_13; }
	inline void set_component_13(Component_t3819376471 * value)
	{
		___component_13 = value;
		Il2CppCodeGenWriteBarrier(&___component_13, value);
	}

	inline static int32_t get_offset_of_enable_14() { return static_cast<int32_t>(offsetof(EnableBehaviour_t1925264334, ___enable_14)); }
	inline FsmBool_t664485696 * get_enable_14() const { return ___enable_14; }
	inline FsmBool_t664485696 ** get_address_of_enable_14() { return &___enable_14; }
	inline void set_enable_14(FsmBool_t664485696 * value)
	{
		___enable_14 = value;
		Il2CppCodeGenWriteBarrier(&___enable_14, value);
	}

	inline static int32_t get_offset_of_resetOnExit_15() { return static_cast<int32_t>(offsetof(EnableBehaviour_t1925264334, ___resetOnExit_15)); }
	inline FsmBool_t664485696 * get_resetOnExit_15() const { return ___resetOnExit_15; }
	inline FsmBool_t664485696 ** get_address_of_resetOnExit_15() { return &___resetOnExit_15; }
	inline void set_resetOnExit_15(FsmBool_t664485696 * value)
	{
		___resetOnExit_15 = value;
		Il2CppCodeGenWriteBarrier(&___resetOnExit_15, value);
	}

	inline static int32_t get_offset_of_componentTarget_16() { return static_cast<int32_t>(offsetof(EnableBehaviour_t1925264334, ___componentTarget_16)); }
	inline Behaviour_t955675639 * get_componentTarget_16() const { return ___componentTarget_16; }
	inline Behaviour_t955675639 ** get_address_of_componentTarget_16() { return &___componentTarget_16; }
	inline void set_componentTarget_16(Behaviour_t955675639 * value)
	{
		___componentTarget_16 = value;
		Il2CppCodeGenWriteBarrier(&___componentTarget_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
