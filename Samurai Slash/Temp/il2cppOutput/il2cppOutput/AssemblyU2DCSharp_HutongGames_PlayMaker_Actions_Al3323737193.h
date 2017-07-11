#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AllowSceneActivation
struct  AllowSceneActivation_t3323737193  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.AllowSceneActivation::aSynchOperationHashCode
	FsmInt_t1273009179 * ___aSynchOperationHashCode_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.AllowSceneActivation::allowSceneActivation
	FsmBool_t664485696 * ___allowSceneActivation_12;
	// System.Boolean HutongGames.PlayMaker.Actions.AllowSceneActivation::everyframe
	bool ___everyframe_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AllowSceneActivation::progress
	FsmFloat_t937133978 * ___progress_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.AllowSceneActivation::isDone
	FsmBool_t664485696 * ___isDone_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AllowSceneActivation::doneEvent
	FsmEvent_t1258573736 * ___doneEvent_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AllowSceneActivation::failureEvent
	FsmEvent_t1258573736 * ___failureEvent_17;

public:
	inline static int32_t get_offset_of_aSynchOperationHashCode_11() { return static_cast<int32_t>(offsetof(AllowSceneActivation_t3323737193, ___aSynchOperationHashCode_11)); }
	inline FsmInt_t1273009179 * get_aSynchOperationHashCode_11() const { return ___aSynchOperationHashCode_11; }
	inline FsmInt_t1273009179 ** get_address_of_aSynchOperationHashCode_11() { return &___aSynchOperationHashCode_11; }
	inline void set_aSynchOperationHashCode_11(FsmInt_t1273009179 * value)
	{
		___aSynchOperationHashCode_11 = value;
		Il2CppCodeGenWriteBarrier(&___aSynchOperationHashCode_11, value);
	}

	inline static int32_t get_offset_of_allowSceneActivation_12() { return static_cast<int32_t>(offsetof(AllowSceneActivation_t3323737193, ___allowSceneActivation_12)); }
	inline FsmBool_t664485696 * get_allowSceneActivation_12() const { return ___allowSceneActivation_12; }
	inline FsmBool_t664485696 ** get_address_of_allowSceneActivation_12() { return &___allowSceneActivation_12; }
	inline void set_allowSceneActivation_12(FsmBool_t664485696 * value)
	{
		___allowSceneActivation_12 = value;
		Il2CppCodeGenWriteBarrier(&___allowSceneActivation_12, value);
	}

	inline static int32_t get_offset_of_everyframe_13() { return static_cast<int32_t>(offsetof(AllowSceneActivation_t3323737193, ___everyframe_13)); }
	inline bool get_everyframe_13() const { return ___everyframe_13; }
	inline bool* get_address_of_everyframe_13() { return &___everyframe_13; }
	inline void set_everyframe_13(bool value)
	{
		___everyframe_13 = value;
	}

	inline static int32_t get_offset_of_progress_14() { return static_cast<int32_t>(offsetof(AllowSceneActivation_t3323737193, ___progress_14)); }
	inline FsmFloat_t937133978 * get_progress_14() const { return ___progress_14; }
	inline FsmFloat_t937133978 ** get_address_of_progress_14() { return &___progress_14; }
	inline void set_progress_14(FsmFloat_t937133978 * value)
	{
		___progress_14 = value;
		Il2CppCodeGenWriteBarrier(&___progress_14, value);
	}

	inline static int32_t get_offset_of_isDone_15() { return static_cast<int32_t>(offsetof(AllowSceneActivation_t3323737193, ___isDone_15)); }
	inline FsmBool_t664485696 * get_isDone_15() const { return ___isDone_15; }
	inline FsmBool_t664485696 ** get_address_of_isDone_15() { return &___isDone_15; }
	inline void set_isDone_15(FsmBool_t664485696 * value)
	{
		___isDone_15 = value;
		Il2CppCodeGenWriteBarrier(&___isDone_15, value);
	}

	inline static int32_t get_offset_of_doneEvent_16() { return static_cast<int32_t>(offsetof(AllowSceneActivation_t3323737193, ___doneEvent_16)); }
	inline FsmEvent_t1258573736 * get_doneEvent_16() const { return ___doneEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_doneEvent_16() { return &___doneEvent_16; }
	inline void set_doneEvent_16(FsmEvent_t1258573736 * value)
	{
		___doneEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___doneEvent_16, value);
	}

	inline static int32_t get_offset_of_failureEvent_17() { return static_cast<int32_t>(offsetof(AllowSceneActivation_t3323737193, ___failureEvent_17)); }
	inline FsmEvent_t1258573736 * get_failureEvent_17() const { return ___failureEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_failureEvent_17() { return &___failureEvent_17; }
	inline void set_failureEvent_17(FsmEvent_t1258573736 * value)
	{
		___failureEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___failureEvent_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
