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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmString[]
struct FsmStringU5BU5D_t2699231328;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FsmStateSwitch
struct  FsmStateSwitch_t557664717  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.FsmStateSwitch::gameObject
	FsmGameObject_t3097142863 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FsmStateSwitch::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.FsmStateSwitch::compareTo
	FsmStringU5BU5D_t2699231328* ___compareTo_13;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.FsmStateSwitch::sendEvent
	FsmEventU5BU5D_t287863993* ___sendEvent_14;
	// System.Boolean HutongGames.PlayMaker.Actions.FsmStateSwitch::everyFrame
	bool ___everyFrame_15;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.FsmStateSwitch::previousGo
	GameObject_t1756533147 * ___previousGo_16;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.FsmStateSwitch::fsm
	PlayMakerFSM_t437737208 * ___fsm_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(FsmStateSwitch_t557664717, ___gameObject_11)); }
	inline FsmGameObject_t3097142863 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmGameObject_t3097142863 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(FsmStateSwitch_t557664717, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_compareTo_13() { return static_cast<int32_t>(offsetof(FsmStateSwitch_t557664717, ___compareTo_13)); }
	inline FsmStringU5BU5D_t2699231328* get_compareTo_13() const { return ___compareTo_13; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_compareTo_13() { return &___compareTo_13; }
	inline void set_compareTo_13(FsmStringU5BU5D_t2699231328* value)
	{
		___compareTo_13 = value;
		Il2CppCodeGenWriteBarrier(&___compareTo_13, value);
	}

	inline static int32_t get_offset_of_sendEvent_14() { return static_cast<int32_t>(offsetof(FsmStateSwitch_t557664717, ___sendEvent_14)); }
	inline FsmEventU5BU5D_t287863993* get_sendEvent_14() const { return ___sendEvent_14; }
	inline FsmEventU5BU5D_t287863993** get_address_of_sendEvent_14() { return &___sendEvent_14; }
	inline void set_sendEvent_14(FsmEventU5BU5D_t287863993* value)
	{
		___sendEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(FsmStateSwitch_t557664717, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_previousGo_16() { return static_cast<int32_t>(offsetof(FsmStateSwitch_t557664717, ___previousGo_16)); }
	inline GameObject_t1756533147 * get_previousGo_16() const { return ___previousGo_16; }
	inline GameObject_t1756533147 ** get_address_of_previousGo_16() { return &___previousGo_16; }
	inline void set_previousGo_16(GameObject_t1756533147 * value)
	{
		___previousGo_16 = value;
		Il2CppCodeGenWriteBarrier(&___previousGo_16, value);
	}

	inline static int32_t get_offset_of_fsm_17() { return static_cast<int32_t>(offsetof(FsmStateSwitch_t557664717, ___fsm_17)); }
	inline PlayMakerFSM_t437737208 * get_fsm_17() const { return ___fsm_17; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsm_17() { return &___fsm_17; }
	inline void set_fsm_17(PlayMakerFSM_t437737208 * value)
	{
		___fsm_17 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
