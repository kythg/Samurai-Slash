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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// iTweenFSMEvents
struct iTweenFSMEvents_t3874706169;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenFsmAction
struct  iTweenFsmAction_t3900135744  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.iTweenFsmAction::startEvent
	FsmEvent_t1258573736 * ___startEvent_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.iTweenFsmAction::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.iTweenFsmAction::realTime
	FsmBool_t664485696 * ___realTime_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.iTweenFsmAction::stopOnExit
	FsmBool_t664485696 * ___stopOnExit_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.iTweenFsmAction::loopDontFinish
	FsmBool_t664485696 * ___loopDontFinish_15;
	// iTweenFSMEvents HutongGames.PlayMaker.Actions.iTweenFsmAction::itweenEvents
	iTweenFSMEvents_t3874706169 * ___itweenEvents_16;
	// System.String HutongGames.PlayMaker.Actions.iTweenFsmAction::itweenType
	String_t* ___itweenType_17;
	// System.Int32 HutongGames.PlayMaker.Actions.iTweenFsmAction::itweenID
	int32_t ___itweenID_18;

public:
	inline static int32_t get_offset_of_startEvent_11() { return static_cast<int32_t>(offsetof(iTweenFsmAction_t3900135744, ___startEvent_11)); }
	inline FsmEvent_t1258573736 * get_startEvent_11() const { return ___startEvent_11; }
	inline FsmEvent_t1258573736 ** get_address_of_startEvent_11() { return &___startEvent_11; }
	inline void set_startEvent_11(FsmEvent_t1258573736 * value)
	{
		___startEvent_11 = value;
		Il2CppCodeGenWriteBarrier(&___startEvent_11, value);
	}

	inline static int32_t get_offset_of_finishEvent_12() { return static_cast<int32_t>(offsetof(iTweenFsmAction_t3900135744, ___finishEvent_12)); }
	inline FsmEvent_t1258573736 * get_finishEvent_12() const { return ___finishEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_12() { return &___finishEvent_12; }
	inline void set_finishEvent_12(FsmEvent_t1258573736 * value)
	{
		___finishEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_12, value);
	}

	inline static int32_t get_offset_of_realTime_13() { return static_cast<int32_t>(offsetof(iTweenFsmAction_t3900135744, ___realTime_13)); }
	inline FsmBool_t664485696 * get_realTime_13() const { return ___realTime_13; }
	inline FsmBool_t664485696 ** get_address_of_realTime_13() { return &___realTime_13; }
	inline void set_realTime_13(FsmBool_t664485696 * value)
	{
		___realTime_13 = value;
		Il2CppCodeGenWriteBarrier(&___realTime_13, value);
	}

	inline static int32_t get_offset_of_stopOnExit_14() { return static_cast<int32_t>(offsetof(iTweenFsmAction_t3900135744, ___stopOnExit_14)); }
	inline FsmBool_t664485696 * get_stopOnExit_14() const { return ___stopOnExit_14; }
	inline FsmBool_t664485696 ** get_address_of_stopOnExit_14() { return &___stopOnExit_14; }
	inline void set_stopOnExit_14(FsmBool_t664485696 * value)
	{
		___stopOnExit_14 = value;
		Il2CppCodeGenWriteBarrier(&___stopOnExit_14, value);
	}

	inline static int32_t get_offset_of_loopDontFinish_15() { return static_cast<int32_t>(offsetof(iTweenFsmAction_t3900135744, ___loopDontFinish_15)); }
	inline FsmBool_t664485696 * get_loopDontFinish_15() const { return ___loopDontFinish_15; }
	inline FsmBool_t664485696 ** get_address_of_loopDontFinish_15() { return &___loopDontFinish_15; }
	inline void set_loopDontFinish_15(FsmBool_t664485696 * value)
	{
		___loopDontFinish_15 = value;
		Il2CppCodeGenWriteBarrier(&___loopDontFinish_15, value);
	}

	inline static int32_t get_offset_of_itweenEvents_16() { return static_cast<int32_t>(offsetof(iTweenFsmAction_t3900135744, ___itweenEvents_16)); }
	inline iTweenFSMEvents_t3874706169 * get_itweenEvents_16() const { return ___itweenEvents_16; }
	inline iTweenFSMEvents_t3874706169 ** get_address_of_itweenEvents_16() { return &___itweenEvents_16; }
	inline void set_itweenEvents_16(iTweenFSMEvents_t3874706169 * value)
	{
		___itweenEvents_16 = value;
		Il2CppCodeGenWriteBarrier(&___itweenEvents_16, value);
	}

	inline static int32_t get_offset_of_itweenType_17() { return static_cast<int32_t>(offsetof(iTweenFsmAction_t3900135744, ___itweenType_17)); }
	inline String_t* get_itweenType_17() const { return ___itweenType_17; }
	inline String_t** get_address_of_itweenType_17() { return &___itweenType_17; }
	inline void set_itweenType_17(String_t* value)
	{
		___itweenType_17 = value;
		Il2CppCodeGenWriteBarrier(&___itweenType_17, value);
	}

	inline static int32_t get_offset_of_itweenID_18() { return static_cast<int32_t>(offsetof(iTweenFsmAction_t3900135744, ___itweenID_18)); }
	inline int32_t get_itweenID_18() const { return ___itweenID_18; }
	inline int32_t* get_address_of_itweenID_18() { return &___itweenID_18; }
	inline void set_itweenID_18(int32_t value)
	{
		___itweenID_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
