#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// HutongGames.PlayMaker.FsmState
struct FsmState_t1643911659;
// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmStateAction
struct  FsmStateAction_t2862378169  : public Il2CppObject
{
public:
	// System.String HutongGames.PlayMaker.FsmStateAction::name
	String_t* ___name_0;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::enabled
	bool ___enabled_1;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::isOpen
	bool ___isOpen_2;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::active
	bool ___active_3;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::finished
	bool ___finished_4;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::autoName
	bool ___autoName_5;
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmStateAction::owner
	GameObject_t1756533147 * ___owner_6;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.FsmStateAction::fsmState
	FsmState_t1643911659 * ___fsmState_7;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmStateAction::fsm
	Fsm_t917886356 * ___fsm_8;
	// PlayMakerFSM HutongGames.PlayMaker.FsmStateAction::fsmComponent
	PlayMakerFSM_t437737208 * ___fsmComponent_9;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::<Entered>k__BackingField
	bool ___U3CEnteredU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_enabled_1() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___enabled_1)); }
	inline bool get_enabled_1() const { return ___enabled_1; }
	inline bool* get_address_of_enabled_1() { return &___enabled_1; }
	inline void set_enabled_1(bool value)
	{
		___enabled_1 = value;
	}

	inline static int32_t get_offset_of_isOpen_2() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___isOpen_2)); }
	inline bool get_isOpen_2() const { return ___isOpen_2; }
	inline bool* get_address_of_isOpen_2() { return &___isOpen_2; }
	inline void set_isOpen_2(bool value)
	{
		___isOpen_2 = value;
	}

	inline static int32_t get_offset_of_active_3() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___active_3)); }
	inline bool get_active_3() const { return ___active_3; }
	inline bool* get_address_of_active_3() { return &___active_3; }
	inline void set_active_3(bool value)
	{
		___active_3 = value;
	}

	inline static int32_t get_offset_of_finished_4() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___finished_4)); }
	inline bool get_finished_4() const { return ___finished_4; }
	inline bool* get_address_of_finished_4() { return &___finished_4; }
	inline void set_finished_4(bool value)
	{
		___finished_4 = value;
	}

	inline static int32_t get_offset_of_autoName_5() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___autoName_5)); }
	inline bool get_autoName_5() const { return ___autoName_5; }
	inline bool* get_address_of_autoName_5() { return &___autoName_5; }
	inline void set_autoName_5(bool value)
	{
		___autoName_5 = value;
	}

	inline static int32_t get_offset_of_owner_6() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___owner_6)); }
	inline GameObject_t1756533147 * get_owner_6() const { return ___owner_6; }
	inline GameObject_t1756533147 ** get_address_of_owner_6() { return &___owner_6; }
	inline void set_owner_6(GameObject_t1756533147 * value)
	{
		___owner_6 = value;
		Il2CppCodeGenWriteBarrier(&___owner_6, value);
	}

	inline static int32_t get_offset_of_fsmState_7() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___fsmState_7)); }
	inline FsmState_t1643911659 * get_fsmState_7() const { return ___fsmState_7; }
	inline FsmState_t1643911659 ** get_address_of_fsmState_7() { return &___fsmState_7; }
	inline void set_fsmState_7(FsmState_t1643911659 * value)
	{
		___fsmState_7 = value;
		Il2CppCodeGenWriteBarrier(&___fsmState_7, value);
	}

	inline static int32_t get_offset_of_fsm_8() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___fsm_8)); }
	inline Fsm_t917886356 * get_fsm_8() const { return ___fsm_8; }
	inline Fsm_t917886356 ** get_address_of_fsm_8() { return &___fsm_8; }
	inline void set_fsm_8(Fsm_t917886356 * value)
	{
		___fsm_8 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_8, value);
	}

	inline static int32_t get_offset_of_fsmComponent_9() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___fsmComponent_9)); }
	inline PlayMakerFSM_t437737208 * get_fsmComponent_9() const { return ___fsmComponent_9; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsmComponent_9() { return &___fsmComponent_9; }
	inline void set_fsmComponent_9(PlayMakerFSM_t437737208 * value)
	{
		___fsmComponent_9 = value;
		Il2CppCodeGenWriteBarrier(&___fsmComponent_9, value);
	}

	inline static int32_t get_offset_of_U3CEnteredU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FsmStateAction_t2862378169, ___U3CEnteredU3Ek__BackingField_10)); }
	inline bool get_U3CEnteredU3Ek__BackingField_10() const { return ___U3CEnteredU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CEnteredU3Ek__BackingField_10() { return &___U3CEnteredU3Ek__BackingField_10; }
	inline void set_U3CEnteredU3Ek__BackingField_10(bool value)
	{
		___U3CEnteredU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
