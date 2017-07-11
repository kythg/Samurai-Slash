#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.BoolChanged
struct  BoolChanged_t2205185830  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BoolChanged::boolVariable
	FsmBool_t664485696 * ___boolVariable_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BoolChanged::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BoolChanged::storeResult
	FsmBool_t664485696 * ___storeResult_13;
	// System.Boolean HutongGames.PlayMaker.Actions.BoolChanged::previousValue
	bool ___previousValue_14;

public:
	inline static int32_t get_offset_of_boolVariable_11() { return static_cast<int32_t>(offsetof(BoolChanged_t2205185830, ___boolVariable_11)); }
	inline FsmBool_t664485696 * get_boolVariable_11() const { return ___boolVariable_11; }
	inline FsmBool_t664485696 ** get_address_of_boolVariable_11() { return &___boolVariable_11; }
	inline void set_boolVariable_11(FsmBool_t664485696 * value)
	{
		___boolVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___boolVariable_11, value);
	}

	inline static int32_t get_offset_of_changedEvent_12() { return static_cast<int32_t>(offsetof(BoolChanged_t2205185830, ___changedEvent_12)); }
	inline FsmEvent_t1258573736 * get_changedEvent_12() const { return ___changedEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_12() { return &___changedEvent_12; }
	inline void set_changedEvent_12(FsmEvent_t1258573736 * value)
	{
		___changedEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(BoolChanged_t2205185830, ___storeResult_13)); }
	inline FsmBool_t664485696 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmBool_t664485696 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_previousValue_14() { return static_cast<int32_t>(offsetof(BoolChanged_t2205185830, ___previousValue_14)); }
	inline bool get_previousValue_14() const { return ___previousValue_14; }
	inline bool* get_address_of_previousValue_14() { return &___previousValue_14; }
	inline void set_previousValue_14(bool value)
	{
		___previousValue_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
