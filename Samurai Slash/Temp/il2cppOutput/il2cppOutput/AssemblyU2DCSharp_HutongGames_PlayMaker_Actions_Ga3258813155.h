#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GameObjectChanged
struct  GameObjectChanged_t3258813155  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GameObjectChanged::gameObjectVariable
	FsmGameObject_t3097142863 * ___gameObjectVariable_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectChanged::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GameObjectChanged::storeResult
	FsmBool_t664485696 * ___storeResult_13;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.GameObjectChanged::previousValue
	GameObject_t1756533147 * ___previousValue_14;

public:
	inline static int32_t get_offset_of_gameObjectVariable_11() { return static_cast<int32_t>(offsetof(GameObjectChanged_t3258813155, ___gameObjectVariable_11)); }
	inline FsmGameObject_t3097142863 * get_gameObjectVariable_11() const { return ___gameObjectVariable_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObjectVariable_11() { return &___gameObjectVariable_11; }
	inline void set_gameObjectVariable_11(FsmGameObject_t3097142863 * value)
	{
		___gameObjectVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectVariable_11, value);
	}

	inline static int32_t get_offset_of_changedEvent_12() { return static_cast<int32_t>(offsetof(GameObjectChanged_t3258813155, ___changedEvent_12)); }
	inline FsmEvent_t1258573736 * get_changedEvent_12() const { return ___changedEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_12() { return &___changedEvent_12; }
	inline void set_changedEvent_12(FsmEvent_t1258573736 * value)
	{
		___changedEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(GameObjectChanged_t3258813155, ___storeResult_13)); }
	inline FsmBool_t664485696 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmBool_t664485696 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_previousValue_14() { return static_cast<int32_t>(offsetof(GameObjectChanged_t3258813155, ___previousValue_14)); }
	inline GameObject_t1756533147 * get_previousValue_14() const { return ___previousValue_14; }
	inline GameObject_t1756533147 ** get_address_of_previousValue_14() { return &___previousValue_14; }
	inline void set_previousValue_14(GameObject_t1756533147 * value)
	{
		___previousValue_14 = value;
		Il2CppCodeGenWriteBarrier(&___previousValue_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
