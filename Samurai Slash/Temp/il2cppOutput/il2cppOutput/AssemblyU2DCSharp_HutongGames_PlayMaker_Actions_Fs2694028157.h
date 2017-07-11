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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FsmStateTest
struct  FsmStateTest_t2694028157  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.FsmStateTest::gameObject
	FsmGameObject_t3097142863 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FsmStateTest::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FsmStateTest::stateName
	FsmString_t2414474701 * ___stateName_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FsmStateTest::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FsmStateTest::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.FsmStateTest::storeResult
	FsmBool_t664485696 * ___storeResult_16;
	// System.Boolean HutongGames.PlayMaker.Actions.FsmStateTest::everyFrame
	bool ___everyFrame_17;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.FsmStateTest::previousGo
	GameObject_t1756533147 * ___previousGo_18;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.FsmStateTest::fsm
	PlayMakerFSM_t437737208 * ___fsm_19;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___gameObject_11)); }
	inline FsmGameObject_t3097142863 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmGameObject_t3097142863 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_stateName_13() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___stateName_13)); }
	inline FsmString_t2414474701 * get_stateName_13() const { return ___stateName_13; }
	inline FsmString_t2414474701 ** get_address_of_stateName_13() { return &___stateName_13; }
	inline void set_stateName_13(FsmString_t2414474701 * value)
	{
		___stateName_13 = value;
		Il2CppCodeGenWriteBarrier(&___stateName_13, value);
	}

	inline static int32_t get_offset_of_trueEvent_14() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___trueEvent_14)); }
	inline FsmEvent_t1258573736 * get_trueEvent_14() const { return ___trueEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_14() { return &___trueEvent_14; }
	inline void set_trueEvent_14(FsmEvent_t1258573736 * value)
	{
		___trueEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_14, value);
	}

	inline static int32_t get_offset_of_falseEvent_15() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___falseEvent_15)); }
	inline FsmEvent_t1258573736 * get_falseEvent_15() const { return ___falseEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_15() { return &___falseEvent_15; }
	inline void set_falseEvent_15(FsmEvent_t1258573736 * value)
	{
		___falseEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_15, value);
	}

	inline static int32_t get_offset_of_storeResult_16() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___storeResult_16)); }
	inline FsmBool_t664485696 * get_storeResult_16() const { return ___storeResult_16; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_16() { return &___storeResult_16; }
	inline void set_storeResult_16(FsmBool_t664485696 * value)
	{
		___storeResult_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_16, value);
	}

	inline static int32_t get_offset_of_everyFrame_17() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___everyFrame_17)); }
	inline bool get_everyFrame_17() const { return ___everyFrame_17; }
	inline bool* get_address_of_everyFrame_17() { return &___everyFrame_17; }
	inline void set_everyFrame_17(bool value)
	{
		___everyFrame_17 = value;
	}

	inline static int32_t get_offset_of_previousGo_18() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___previousGo_18)); }
	inline GameObject_t1756533147 * get_previousGo_18() const { return ___previousGo_18; }
	inline GameObject_t1756533147 ** get_address_of_previousGo_18() { return &___previousGo_18; }
	inline void set_previousGo_18(GameObject_t1756533147 * value)
	{
		___previousGo_18 = value;
		Il2CppCodeGenWriteBarrier(&___previousGo_18, value);
	}

	inline static int32_t get_offset_of_fsm_19() { return static_cast<int32_t>(offsetof(FsmStateTest_t2694028157, ___fsm_19)); }
	inline PlayMakerFSM_t437737208 * get_fsm_19() const { return ___fsm_19; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsm_19() { return &___fsm_19; }
	inline void set_fsm_19(PlayMakerFSM_t437737208 * value)
	{
		___fsm_19 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
