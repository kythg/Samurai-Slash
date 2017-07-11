#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.StringChanged
struct  StringChanged_t1473071351  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StringChanged::stringVariable
	FsmString_t2414474701 * ___stringVariable_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.StringChanged::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.StringChanged::storeResult
	FsmBool_t664485696 * ___storeResult_13;
	// System.String HutongGames.PlayMaker.Actions.StringChanged::previousValue
	String_t* ___previousValue_14;

public:
	inline static int32_t get_offset_of_stringVariable_11() { return static_cast<int32_t>(offsetof(StringChanged_t1473071351, ___stringVariable_11)); }
	inline FsmString_t2414474701 * get_stringVariable_11() const { return ___stringVariable_11; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_11() { return &___stringVariable_11; }
	inline void set_stringVariable_11(FsmString_t2414474701 * value)
	{
		___stringVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_11, value);
	}

	inline static int32_t get_offset_of_changedEvent_12() { return static_cast<int32_t>(offsetof(StringChanged_t1473071351, ___changedEvent_12)); }
	inline FsmEvent_t1258573736 * get_changedEvent_12() const { return ___changedEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_12() { return &___changedEvent_12; }
	inline void set_changedEvent_12(FsmEvent_t1258573736 * value)
	{
		___changedEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(StringChanged_t1473071351, ___storeResult_13)); }
	inline FsmBool_t664485696 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmBool_t664485696 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_previousValue_14() { return static_cast<int32_t>(offsetof(StringChanged_t1473071351, ___previousValue_14)); }
	inline String_t* get_previousValue_14() const { return ___previousValue_14; }
	inline String_t** get_address_of_previousValue_14() { return &___previousValue_14; }
	inline void set_previousValue_14(String_t* value)
	{
		___previousValue_14 = value;
		Il2CppCodeGenWriteBarrier(&___previousValue_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
