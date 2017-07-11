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

// HutongGames.PlayMaker.Actions.BaseFsmVariableIndexAction
struct  BaseFsmVariableIndexAction_t3235583395  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BaseFsmVariableIndexAction::indexOutOfRange
	FsmEvent_t1258573736 * ___indexOutOfRange_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BaseFsmVariableIndexAction::fsmNotFound
	FsmEvent_t1258573736 * ___fsmNotFound_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BaseFsmVariableIndexAction::variableNotFound
	FsmEvent_t1258573736 * ___variableNotFound_13;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.BaseFsmVariableIndexAction::cachedGameObject
	GameObject_t1756533147 * ___cachedGameObject_14;
	// System.String HutongGames.PlayMaker.Actions.BaseFsmVariableIndexAction::cachedFsmName
	String_t* ___cachedFsmName_15;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.BaseFsmVariableIndexAction::fsm
	PlayMakerFSM_t437737208 * ___fsm_16;

public:
	inline static int32_t get_offset_of_indexOutOfRange_11() { return static_cast<int32_t>(offsetof(BaseFsmVariableIndexAction_t3235583395, ___indexOutOfRange_11)); }
	inline FsmEvent_t1258573736 * get_indexOutOfRange_11() const { return ___indexOutOfRange_11; }
	inline FsmEvent_t1258573736 ** get_address_of_indexOutOfRange_11() { return &___indexOutOfRange_11; }
	inline void set_indexOutOfRange_11(FsmEvent_t1258573736 * value)
	{
		___indexOutOfRange_11 = value;
		Il2CppCodeGenWriteBarrier(&___indexOutOfRange_11, value);
	}

	inline static int32_t get_offset_of_fsmNotFound_12() { return static_cast<int32_t>(offsetof(BaseFsmVariableIndexAction_t3235583395, ___fsmNotFound_12)); }
	inline FsmEvent_t1258573736 * get_fsmNotFound_12() const { return ___fsmNotFound_12; }
	inline FsmEvent_t1258573736 ** get_address_of_fsmNotFound_12() { return &___fsmNotFound_12; }
	inline void set_fsmNotFound_12(FsmEvent_t1258573736 * value)
	{
		___fsmNotFound_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmNotFound_12, value);
	}

	inline static int32_t get_offset_of_variableNotFound_13() { return static_cast<int32_t>(offsetof(BaseFsmVariableIndexAction_t3235583395, ___variableNotFound_13)); }
	inline FsmEvent_t1258573736 * get_variableNotFound_13() const { return ___variableNotFound_13; }
	inline FsmEvent_t1258573736 ** get_address_of_variableNotFound_13() { return &___variableNotFound_13; }
	inline void set_variableNotFound_13(FsmEvent_t1258573736 * value)
	{
		___variableNotFound_13 = value;
		Il2CppCodeGenWriteBarrier(&___variableNotFound_13, value);
	}

	inline static int32_t get_offset_of_cachedGameObject_14() { return static_cast<int32_t>(offsetof(BaseFsmVariableIndexAction_t3235583395, ___cachedGameObject_14)); }
	inline GameObject_t1756533147 * get_cachedGameObject_14() const { return ___cachedGameObject_14; }
	inline GameObject_t1756533147 ** get_address_of_cachedGameObject_14() { return &___cachedGameObject_14; }
	inline void set_cachedGameObject_14(GameObject_t1756533147 * value)
	{
		___cachedGameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___cachedGameObject_14, value);
	}

	inline static int32_t get_offset_of_cachedFsmName_15() { return static_cast<int32_t>(offsetof(BaseFsmVariableIndexAction_t3235583395, ___cachedFsmName_15)); }
	inline String_t* get_cachedFsmName_15() const { return ___cachedFsmName_15; }
	inline String_t** get_address_of_cachedFsmName_15() { return &___cachedFsmName_15; }
	inline void set_cachedFsmName_15(String_t* value)
	{
		___cachedFsmName_15 = value;
		Il2CppCodeGenWriteBarrier(&___cachedFsmName_15, value);
	}

	inline static int32_t get_offset_of_fsm_16() { return static_cast<int32_t>(offsetof(BaseFsmVariableIndexAction_t3235583395, ___fsm_16)); }
	inline PlayMakerFSM_t437737208 * get_fsm_16() const { return ___fsm_16; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsm_16() { return &___fsm_16; }
	inline void set_fsm_16(PlayMakerFSM_t437737208 * value)
	{
		___fsm_16 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
