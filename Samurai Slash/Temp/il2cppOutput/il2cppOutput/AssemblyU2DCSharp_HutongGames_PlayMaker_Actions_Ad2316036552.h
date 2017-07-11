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
// UnityEngine.Component
struct Component_t3819376471;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AddScript
struct  AddScript_t2316036552  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddScript::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AddScript::script
	FsmString_t2414474701 * ___script_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.AddScript::removeOnExit
	FsmBool_t664485696 * ___removeOnExit_13;
	// UnityEngine.Component HutongGames.PlayMaker.Actions.AddScript::addedComponent
	Component_t3819376471 * ___addedComponent_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(AddScript_t2316036552, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_script_12() { return static_cast<int32_t>(offsetof(AddScript_t2316036552, ___script_12)); }
	inline FsmString_t2414474701 * get_script_12() const { return ___script_12; }
	inline FsmString_t2414474701 ** get_address_of_script_12() { return &___script_12; }
	inline void set_script_12(FsmString_t2414474701 * value)
	{
		___script_12 = value;
		Il2CppCodeGenWriteBarrier(&___script_12, value);
	}

	inline static int32_t get_offset_of_removeOnExit_13() { return static_cast<int32_t>(offsetof(AddScript_t2316036552, ___removeOnExit_13)); }
	inline FsmBool_t664485696 * get_removeOnExit_13() const { return ___removeOnExit_13; }
	inline FsmBool_t664485696 ** get_address_of_removeOnExit_13() { return &___removeOnExit_13; }
	inline void set_removeOnExit_13(FsmBool_t664485696 * value)
	{
		___removeOnExit_13 = value;
		Il2CppCodeGenWriteBarrier(&___removeOnExit_13, value);
	}

	inline static int32_t get_offset_of_addedComponent_14() { return static_cast<int32_t>(offsetof(AddScript_t2316036552, ___addedComponent_14)); }
	inline Component_t3819376471 * get_addedComponent_14() const { return ___addedComponent_14; }
	inline Component_t3819376471 ** get_address_of_addedComponent_14() { return &___addedComponent_14; }
	inline void set_addedComponent_14(Component_t3819376471 * value)
	{
		___addedComponent_14 = value;
		Il2CppCodeGenWriteBarrier(&___addedComponent_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
