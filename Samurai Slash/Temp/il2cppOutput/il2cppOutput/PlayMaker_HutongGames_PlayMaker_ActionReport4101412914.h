#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<HutongGames.PlayMaker.ActionReport>
struct List_1_t3470534046;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;
// HutongGames.PlayMaker.FsmState
struct FsmState_t1643911659;
// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t2862378169;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.ActionReport
struct  ActionReport_t4101412914  : public Il2CppObject
{
public:
	// PlayMakerFSM HutongGames.PlayMaker.ActionReport::fsm
	PlayMakerFSM_t437737208 * ___fsm_3;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.ActionReport::state
	FsmState_t1643911659 * ___state_4;
	// HutongGames.PlayMaker.FsmStateAction HutongGames.PlayMaker.ActionReport::action
	FsmStateAction_t2862378169 * ___action_5;
	// System.Int32 HutongGames.PlayMaker.ActionReport::actionIndex
	int32_t ___actionIndex_6;
	// System.String HutongGames.PlayMaker.ActionReport::logText
	String_t* ___logText_7;
	// System.Boolean HutongGames.PlayMaker.ActionReport::isError
	bool ___isError_8;
	// System.String HutongGames.PlayMaker.ActionReport::parameter
	String_t* ___parameter_9;

public:
	inline static int32_t get_offset_of_fsm_3() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914, ___fsm_3)); }
	inline PlayMakerFSM_t437737208 * get_fsm_3() const { return ___fsm_3; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsm_3() { return &___fsm_3; }
	inline void set_fsm_3(PlayMakerFSM_t437737208 * value)
	{
		___fsm_3 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914, ___state_4)); }
	inline FsmState_t1643911659 * get_state_4() const { return ___state_4; }
	inline FsmState_t1643911659 ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(FsmState_t1643911659 * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914, ___action_5)); }
	inline FsmStateAction_t2862378169 * get_action_5() const { return ___action_5; }
	inline FsmStateAction_t2862378169 ** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(FsmStateAction_t2862378169 * value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier(&___action_5, value);
	}

	inline static int32_t get_offset_of_actionIndex_6() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914, ___actionIndex_6)); }
	inline int32_t get_actionIndex_6() const { return ___actionIndex_6; }
	inline int32_t* get_address_of_actionIndex_6() { return &___actionIndex_6; }
	inline void set_actionIndex_6(int32_t value)
	{
		___actionIndex_6 = value;
	}

	inline static int32_t get_offset_of_logText_7() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914, ___logText_7)); }
	inline String_t* get_logText_7() const { return ___logText_7; }
	inline String_t** get_address_of_logText_7() { return &___logText_7; }
	inline void set_logText_7(String_t* value)
	{
		___logText_7 = value;
		Il2CppCodeGenWriteBarrier(&___logText_7, value);
	}

	inline static int32_t get_offset_of_isError_8() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914, ___isError_8)); }
	inline bool get_isError_8() const { return ___isError_8; }
	inline bool* get_address_of_isError_8() { return &___isError_8; }
	inline void set_isError_8(bool value)
	{
		___isError_8 = value;
	}

	inline static int32_t get_offset_of_parameter_9() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914, ___parameter_9)); }
	inline String_t* get_parameter_9() const { return ___parameter_9; }
	inline String_t** get_address_of_parameter_9() { return &___parameter_9; }
	inline void set_parameter_9(String_t* value)
	{
		___parameter_9 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_9, value);
	}
};

struct ActionReport_t4101412914_StaticFields
{
public:
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.ActionReport> HutongGames.PlayMaker.ActionReport::ActionReportList
	List_1_t3470534046 * ___ActionReportList_0;
	// System.Int32 HutongGames.PlayMaker.ActionReport::InfoCount
	int32_t ___InfoCount_1;
	// System.Int32 HutongGames.PlayMaker.ActionReport::ErrorCount
	int32_t ___ErrorCount_2;

public:
	inline static int32_t get_offset_of_ActionReportList_0() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914_StaticFields, ___ActionReportList_0)); }
	inline List_1_t3470534046 * get_ActionReportList_0() const { return ___ActionReportList_0; }
	inline List_1_t3470534046 ** get_address_of_ActionReportList_0() { return &___ActionReportList_0; }
	inline void set_ActionReportList_0(List_1_t3470534046 * value)
	{
		___ActionReportList_0 = value;
		Il2CppCodeGenWriteBarrier(&___ActionReportList_0, value);
	}

	inline static int32_t get_offset_of_InfoCount_1() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914_StaticFields, ___InfoCount_1)); }
	inline int32_t get_InfoCount_1() const { return ___InfoCount_1; }
	inline int32_t* get_address_of_InfoCount_1() { return &___InfoCount_1; }
	inline void set_InfoCount_1(int32_t value)
	{
		___InfoCount_1 = value;
	}

	inline static int32_t get_offset_of_ErrorCount_2() { return static_cast<int32_t>(offsetof(ActionReport_t4101412914_StaticFields, ___ErrorCount_2)); }
	inline int32_t get_ErrorCount_2() const { return ___ErrorCount_2; }
	inline int32_t* get_address_of_ErrorCount_2() { return &___ErrorCount_2; }
	inline void set_ErrorCount_2(int32_t value)
	{
		___ErrorCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
