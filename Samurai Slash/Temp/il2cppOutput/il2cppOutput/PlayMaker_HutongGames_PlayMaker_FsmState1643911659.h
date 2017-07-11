#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t2862378169;
// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;
// System.String
struct String_t;
// HutongGames.PlayMaker.FsmTransition[]
struct FsmTransitionU5BU5D_t1091630918;
// HutongGames.PlayMaker.FsmStateAction[]
struct FsmStateActionU5BU5D_t1497896004;
// HutongGames.PlayMaker.ActionData
struct ActionData_t1467934444;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmStateAction>
struct List_1_t2231499301;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmState
struct  FsmState_t1643911659  : public Il2CppObject
{
public:
	// System.Boolean HutongGames.PlayMaker.FsmState::active
	bool ___active_0;
	// System.Boolean HutongGames.PlayMaker.FsmState::finished
	bool ___finished_1;
	// HutongGames.PlayMaker.FsmStateAction HutongGames.PlayMaker.FsmState::activeAction
	FsmStateAction_t2862378169 * ___activeAction_2;
	// System.Int32 HutongGames.PlayMaker.FsmState::activeActionIndex
	int32_t ___activeActionIndex_3;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmState::fsm
	Fsm_t917886356 * ___fsm_4;
	// System.String HutongGames.PlayMaker.FsmState::name
	String_t* ___name_5;
	// System.String HutongGames.PlayMaker.FsmState::description
	String_t* ___description_6;
	// System.Byte HutongGames.PlayMaker.FsmState::colorIndex
	uint8_t ___colorIndex_7;
	// UnityEngine.Rect HutongGames.PlayMaker.FsmState::position
	Rect_t3681755626  ___position_8;
	// System.Boolean HutongGames.PlayMaker.FsmState::isBreakpoint
	bool ___isBreakpoint_9;
	// System.Boolean HutongGames.PlayMaker.FsmState::isSequence
	bool ___isSequence_10;
	// System.Boolean HutongGames.PlayMaker.FsmState::hideUnused
	bool ___hideUnused_11;
	// HutongGames.PlayMaker.FsmTransition[] HutongGames.PlayMaker.FsmState::transitions
	FsmTransitionU5BU5D_t1091630918* ___transitions_12;
	// HutongGames.PlayMaker.FsmStateAction[] HutongGames.PlayMaker.FsmState::actions
	FsmStateActionU5BU5D_t1497896004* ___actions_13;
	// HutongGames.PlayMaker.ActionData HutongGames.PlayMaker.FsmState::actionData
	ActionData_t1467934444 * ___actionData_14;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmStateAction> HutongGames.PlayMaker.FsmState::activeActions
	List_1_t2231499301 * ___activeActions_15;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmStateAction> HutongGames.PlayMaker.FsmState::_finishedActions
	List_1_t2231499301 * ____finishedActions_16;
	// System.Single HutongGames.PlayMaker.FsmState::<StateTime>k__BackingField
	float ___U3CStateTimeU3Ek__BackingField_17;
	// System.Single HutongGames.PlayMaker.FsmState::<RealStartTime>k__BackingField
	float ___U3CRealStartTimeU3Ek__BackingField_18;
	// System.Int32 HutongGames.PlayMaker.FsmState::<loopCount>k__BackingField
	int32_t ___U3CloopCountU3Ek__BackingField_19;
	// System.Int32 HutongGames.PlayMaker.FsmState::<maxLoopCount>k__BackingField
	int32_t ___U3CmaxLoopCountU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___active_0)); }
	inline bool get_active_0() const { return ___active_0; }
	inline bool* get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(bool value)
	{
		___active_0 = value;
	}

	inline static int32_t get_offset_of_finished_1() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___finished_1)); }
	inline bool get_finished_1() const { return ___finished_1; }
	inline bool* get_address_of_finished_1() { return &___finished_1; }
	inline void set_finished_1(bool value)
	{
		___finished_1 = value;
	}

	inline static int32_t get_offset_of_activeAction_2() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___activeAction_2)); }
	inline FsmStateAction_t2862378169 * get_activeAction_2() const { return ___activeAction_2; }
	inline FsmStateAction_t2862378169 ** get_address_of_activeAction_2() { return &___activeAction_2; }
	inline void set_activeAction_2(FsmStateAction_t2862378169 * value)
	{
		___activeAction_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeAction_2, value);
	}

	inline static int32_t get_offset_of_activeActionIndex_3() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___activeActionIndex_3)); }
	inline int32_t get_activeActionIndex_3() const { return ___activeActionIndex_3; }
	inline int32_t* get_address_of_activeActionIndex_3() { return &___activeActionIndex_3; }
	inline void set_activeActionIndex_3(int32_t value)
	{
		___activeActionIndex_3 = value;
	}

	inline static int32_t get_offset_of_fsm_4() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___fsm_4)); }
	inline Fsm_t917886356 * get_fsm_4() const { return ___fsm_4; }
	inline Fsm_t917886356 ** get_address_of_fsm_4() { return &___fsm_4; }
	inline void set_fsm_4(Fsm_t917886356 * value)
	{
		___fsm_4 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_4, value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___description_6)); }
	inline String_t* get_description_6() const { return ___description_6; }
	inline String_t** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(String_t* value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier(&___description_6, value);
	}

	inline static int32_t get_offset_of_colorIndex_7() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___colorIndex_7)); }
	inline uint8_t get_colorIndex_7() const { return ___colorIndex_7; }
	inline uint8_t* get_address_of_colorIndex_7() { return &___colorIndex_7; }
	inline void set_colorIndex_7(uint8_t value)
	{
		___colorIndex_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___position_8)); }
	inline Rect_t3681755626  get_position_8() const { return ___position_8; }
	inline Rect_t3681755626 * get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Rect_t3681755626  value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_isBreakpoint_9() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___isBreakpoint_9)); }
	inline bool get_isBreakpoint_9() const { return ___isBreakpoint_9; }
	inline bool* get_address_of_isBreakpoint_9() { return &___isBreakpoint_9; }
	inline void set_isBreakpoint_9(bool value)
	{
		___isBreakpoint_9 = value;
	}

	inline static int32_t get_offset_of_isSequence_10() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___isSequence_10)); }
	inline bool get_isSequence_10() const { return ___isSequence_10; }
	inline bool* get_address_of_isSequence_10() { return &___isSequence_10; }
	inline void set_isSequence_10(bool value)
	{
		___isSequence_10 = value;
	}

	inline static int32_t get_offset_of_hideUnused_11() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___hideUnused_11)); }
	inline bool get_hideUnused_11() const { return ___hideUnused_11; }
	inline bool* get_address_of_hideUnused_11() { return &___hideUnused_11; }
	inline void set_hideUnused_11(bool value)
	{
		___hideUnused_11 = value;
	}

	inline static int32_t get_offset_of_transitions_12() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___transitions_12)); }
	inline FsmTransitionU5BU5D_t1091630918* get_transitions_12() const { return ___transitions_12; }
	inline FsmTransitionU5BU5D_t1091630918** get_address_of_transitions_12() { return &___transitions_12; }
	inline void set_transitions_12(FsmTransitionU5BU5D_t1091630918* value)
	{
		___transitions_12 = value;
		Il2CppCodeGenWriteBarrier(&___transitions_12, value);
	}

	inline static int32_t get_offset_of_actions_13() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___actions_13)); }
	inline FsmStateActionU5BU5D_t1497896004* get_actions_13() const { return ___actions_13; }
	inline FsmStateActionU5BU5D_t1497896004** get_address_of_actions_13() { return &___actions_13; }
	inline void set_actions_13(FsmStateActionU5BU5D_t1497896004* value)
	{
		___actions_13 = value;
		Il2CppCodeGenWriteBarrier(&___actions_13, value);
	}

	inline static int32_t get_offset_of_actionData_14() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___actionData_14)); }
	inline ActionData_t1467934444 * get_actionData_14() const { return ___actionData_14; }
	inline ActionData_t1467934444 ** get_address_of_actionData_14() { return &___actionData_14; }
	inline void set_actionData_14(ActionData_t1467934444 * value)
	{
		___actionData_14 = value;
		Il2CppCodeGenWriteBarrier(&___actionData_14, value);
	}

	inline static int32_t get_offset_of_activeActions_15() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___activeActions_15)); }
	inline List_1_t2231499301 * get_activeActions_15() const { return ___activeActions_15; }
	inline List_1_t2231499301 ** get_address_of_activeActions_15() { return &___activeActions_15; }
	inline void set_activeActions_15(List_1_t2231499301 * value)
	{
		___activeActions_15 = value;
		Il2CppCodeGenWriteBarrier(&___activeActions_15, value);
	}

	inline static int32_t get_offset_of__finishedActions_16() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ____finishedActions_16)); }
	inline List_1_t2231499301 * get__finishedActions_16() const { return ____finishedActions_16; }
	inline List_1_t2231499301 ** get_address_of__finishedActions_16() { return &____finishedActions_16; }
	inline void set__finishedActions_16(List_1_t2231499301 * value)
	{
		____finishedActions_16 = value;
		Il2CppCodeGenWriteBarrier(&____finishedActions_16, value);
	}

	inline static int32_t get_offset_of_U3CStateTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___U3CStateTimeU3Ek__BackingField_17)); }
	inline float get_U3CStateTimeU3Ek__BackingField_17() const { return ___U3CStateTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CStateTimeU3Ek__BackingField_17() { return &___U3CStateTimeU3Ek__BackingField_17; }
	inline void set_U3CStateTimeU3Ek__BackingField_17(float value)
	{
		___U3CStateTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CRealStartTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___U3CRealStartTimeU3Ek__BackingField_18)); }
	inline float get_U3CRealStartTimeU3Ek__BackingField_18() const { return ___U3CRealStartTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CRealStartTimeU3Ek__BackingField_18() { return &___U3CRealStartTimeU3Ek__BackingField_18; }
	inline void set_U3CRealStartTimeU3Ek__BackingField_18(float value)
	{
		___U3CRealStartTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CloopCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___U3CloopCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CloopCountU3Ek__BackingField_19() const { return ___U3CloopCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CloopCountU3Ek__BackingField_19() { return &___U3CloopCountU3Ek__BackingField_19; }
	inline void set_U3CloopCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CloopCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CmaxLoopCountU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(FsmState_t1643911659, ___U3CmaxLoopCountU3Ek__BackingField_20)); }
	inline int32_t get_U3CmaxLoopCountU3Ek__BackingField_20() const { return ___U3CmaxLoopCountU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CmaxLoopCountU3Ek__BackingField_20() { return &___U3CmaxLoopCountU3Ek__BackingField_20; }
	inline void set_U3CmaxLoopCountU3Ek__BackingField_20(int32_t value)
	{
		___U3CmaxLoopCountU3Ek__BackingField_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
