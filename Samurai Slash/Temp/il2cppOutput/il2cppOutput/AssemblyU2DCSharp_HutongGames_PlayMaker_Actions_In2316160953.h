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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.IntChanged
struct  IntChanged_t2316160953  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntChanged::intVariable
	FsmInt_t1273009179 * ___intVariable_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.IntChanged::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.IntChanged::storeResult
	FsmBool_t664485696 * ___storeResult_13;
	// System.Int32 HutongGames.PlayMaker.Actions.IntChanged::previousValue
	int32_t ___previousValue_14;

public:
	inline static int32_t get_offset_of_intVariable_11() { return static_cast<int32_t>(offsetof(IntChanged_t2316160953, ___intVariable_11)); }
	inline FsmInt_t1273009179 * get_intVariable_11() const { return ___intVariable_11; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_11() { return &___intVariable_11; }
	inline void set_intVariable_11(FsmInt_t1273009179 * value)
	{
		___intVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_11, value);
	}

	inline static int32_t get_offset_of_changedEvent_12() { return static_cast<int32_t>(offsetof(IntChanged_t2316160953, ___changedEvent_12)); }
	inline FsmEvent_t1258573736 * get_changedEvent_12() const { return ___changedEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_12() { return &___changedEvent_12; }
	inline void set_changedEvent_12(FsmEvent_t1258573736 * value)
	{
		___changedEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(IntChanged_t2316160953, ___storeResult_13)); }
	inline FsmBool_t664485696 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmBool_t664485696 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_previousValue_14() { return static_cast<int32_t>(offsetof(IntChanged_t2316160953, ___previousValue_14)); }
	inline int32_t get_previousValue_14() const { return ___previousValue_14; }
	inline int32_t* get_address_of_previousValue_14() { return &___previousValue_14; }
	inline void set_previousValue_14(int32_t value)
	{
		___previousValue_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
