#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.BaseFsmVariableAction
struct  BaseFsmVariableAction_t1849884759  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BaseFsmVariableAction::fsmNotFound
	FsmEvent_t1258573736 * ___fsmNotFound_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BaseFsmVariableAction::variableNotFound
	FsmEvent_t1258573736 * ___variableNotFound_12;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.BaseFsmVariableAction::cachedGameObject
	GameObject_t1756533147 * ___cachedGameObject_13;
	// System.String HutongGames.PlayMaker.Actions.BaseFsmVariableAction::cachedFsmName
	String_t* ___cachedFsmName_14;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.BaseFsmVariableAction::fsm
	PlayMakerFSM_t437737208 * ___fsm_15;

public:
	inline static int32_t get_offset_of_fsmNotFound_11() { return static_cast<int32_t>(offsetof(BaseFsmVariableAction_t1849884759, ___fsmNotFound_11)); }
	inline FsmEvent_t1258573736 * get_fsmNotFound_11() const { return ___fsmNotFound_11; }
	inline FsmEvent_t1258573736 ** get_address_of_fsmNotFound_11() { return &___fsmNotFound_11; }
	inline void set_fsmNotFound_11(FsmEvent_t1258573736 * value)
	{
		___fsmNotFound_11 = value;
		Il2CppCodeGenWriteBarrier(&___fsmNotFound_11, value);
	}

	inline static int32_t get_offset_of_variableNotFound_12() { return static_cast<int32_t>(offsetof(BaseFsmVariableAction_t1849884759, ___variableNotFound_12)); }
	inline FsmEvent_t1258573736 * get_variableNotFound_12() const { return ___variableNotFound_12; }
	inline FsmEvent_t1258573736 ** get_address_of_variableNotFound_12() { return &___variableNotFound_12; }
	inline void set_variableNotFound_12(FsmEvent_t1258573736 * value)
	{
		___variableNotFound_12 = value;
		Il2CppCodeGenWriteBarrier(&___variableNotFound_12, value);
	}

	inline static int32_t get_offset_of_cachedGameObject_13() { return static_cast<int32_t>(offsetof(BaseFsmVariableAction_t1849884759, ___cachedGameObject_13)); }
	inline GameObject_t1756533147 * get_cachedGameObject_13() const { return ___cachedGameObject_13; }
	inline GameObject_t1756533147 ** get_address_of_cachedGameObject_13() { return &___cachedGameObject_13; }
	inline void set_cachedGameObject_13(GameObject_t1756533147 * value)
	{
		___cachedGameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___cachedGameObject_13, value);
	}

	inline static int32_t get_offset_of_cachedFsmName_14() { return static_cast<int32_t>(offsetof(BaseFsmVariableAction_t1849884759, ___cachedFsmName_14)); }
	inline String_t* get_cachedFsmName_14() const { return ___cachedFsmName_14; }
	inline String_t** get_address_of_cachedFsmName_14() { return &___cachedFsmName_14; }
	inline void set_cachedFsmName_14(String_t* value)
	{
		___cachedFsmName_14 = value;
		Il2CppCodeGenWriteBarrier(&___cachedFsmName_14, value);
	}

	inline static int32_t get_offset_of_fsm_15() { return static_cast<int32_t>(offsetof(BaseFsmVariableAction_t1849884759, ___fsm_15)); }
	inline PlayMakerFSM_t437737208 * get_fsm_15() const { return ___fsm_15; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsm_15() { return &___fsm_15; }
	inline void set_fsm_15(PlayMakerFSM_t437737208 * value)
	{
		___fsm_15 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
