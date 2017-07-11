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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ActivateGameObject
struct  ActivateGameObject_t2336463844  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.ActivateGameObject::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ActivateGameObject::activate
	FsmBool_t664485696 * ___activate_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ActivateGameObject::recursive
	FsmBool_t664485696 * ___recursive_13;
	// System.Boolean HutongGames.PlayMaker.Actions.ActivateGameObject::resetOnExit
	bool ___resetOnExit_14;
	// System.Boolean HutongGames.PlayMaker.Actions.ActivateGameObject::everyFrame
	bool ___everyFrame_15;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.ActivateGameObject::activatedGameObject
	GameObject_t1756533147 * ___activatedGameObject_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(ActivateGameObject_t2336463844, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_activate_12() { return static_cast<int32_t>(offsetof(ActivateGameObject_t2336463844, ___activate_12)); }
	inline FsmBool_t664485696 * get_activate_12() const { return ___activate_12; }
	inline FsmBool_t664485696 ** get_address_of_activate_12() { return &___activate_12; }
	inline void set_activate_12(FsmBool_t664485696 * value)
	{
		___activate_12 = value;
		Il2CppCodeGenWriteBarrier(&___activate_12, value);
	}

	inline static int32_t get_offset_of_recursive_13() { return static_cast<int32_t>(offsetof(ActivateGameObject_t2336463844, ___recursive_13)); }
	inline FsmBool_t664485696 * get_recursive_13() const { return ___recursive_13; }
	inline FsmBool_t664485696 ** get_address_of_recursive_13() { return &___recursive_13; }
	inline void set_recursive_13(FsmBool_t664485696 * value)
	{
		___recursive_13 = value;
		Il2CppCodeGenWriteBarrier(&___recursive_13, value);
	}

	inline static int32_t get_offset_of_resetOnExit_14() { return static_cast<int32_t>(offsetof(ActivateGameObject_t2336463844, ___resetOnExit_14)); }
	inline bool get_resetOnExit_14() const { return ___resetOnExit_14; }
	inline bool* get_address_of_resetOnExit_14() { return &___resetOnExit_14; }
	inline void set_resetOnExit_14(bool value)
	{
		___resetOnExit_14 = value;
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(ActivateGameObject_t2336463844, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_activatedGameObject_16() { return static_cast<int32_t>(offsetof(ActivateGameObject_t2336463844, ___activatedGameObject_16)); }
	inline GameObject_t1756533147 * get_activatedGameObject_16() const { return ___activatedGameObject_16; }
	inline GameObject_t1756533147 ** get_address_of_activatedGameObject_16() { return &___activatedGameObject_16; }
	inline void set_activatedGameObject_16(GameObject_t1756533147 * value)
	{
		___activatedGameObject_16 = value;
		Il2CppCodeGenWriteBarrier(&___activatedGameObject_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
