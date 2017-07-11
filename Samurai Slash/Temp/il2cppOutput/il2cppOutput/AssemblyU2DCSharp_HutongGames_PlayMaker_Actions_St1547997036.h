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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.StringCompare
struct  StringCompare_t1547997036  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StringCompare::stringVariable
	FsmString_t2414474701 * ___stringVariable_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StringCompare::compareTo
	FsmString_t2414474701 * ___compareTo_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.StringCompare::equalEvent
	FsmEvent_t1258573736 * ___equalEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.StringCompare::notEqualEvent
	FsmEvent_t1258573736 * ___notEqualEvent_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.StringCompare::storeResult
	FsmBool_t664485696 * ___storeResult_15;
	// System.Boolean HutongGames.PlayMaker.Actions.StringCompare::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_stringVariable_11() { return static_cast<int32_t>(offsetof(StringCompare_t1547997036, ___stringVariable_11)); }
	inline FsmString_t2414474701 * get_stringVariable_11() const { return ___stringVariable_11; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_11() { return &___stringVariable_11; }
	inline void set_stringVariable_11(FsmString_t2414474701 * value)
	{
		___stringVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_11, value);
	}

	inline static int32_t get_offset_of_compareTo_12() { return static_cast<int32_t>(offsetof(StringCompare_t1547997036, ___compareTo_12)); }
	inline FsmString_t2414474701 * get_compareTo_12() const { return ___compareTo_12; }
	inline FsmString_t2414474701 ** get_address_of_compareTo_12() { return &___compareTo_12; }
	inline void set_compareTo_12(FsmString_t2414474701 * value)
	{
		___compareTo_12 = value;
		Il2CppCodeGenWriteBarrier(&___compareTo_12, value);
	}

	inline static int32_t get_offset_of_equalEvent_13() { return static_cast<int32_t>(offsetof(StringCompare_t1547997036, ___equalEvent_13)); }
	inline FsmEvent_t1258573736 * get_equalEvent_13() const { return ___equalEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_equalEvent_13() { return &___equalEvent_13; }
	inline void set_equalEvent_13(FsmEvent_t1258573736 * value)
	{
		___equalEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___equalEvent_13, value);
	}

	inline static int32_t get_offset_of_notEqualEvent_14() { return static_cast<int32_t>(offsetof(StringCompare_t1547997036, ___notEqualEvent_14)); }
	inline FsmEvent_t1258573736 * get_notEqualEvent_14() const { return ___notEqualEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_notEqualEvent_14() { return &___notEqualEvent_14; }
	inline void set_notEqualEvent_14(FsmEvent_t1258573736 * value)
	{
		___notEqualEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___notEqualEvent_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(StringCompare_t1547997036, ___storeResult_15)); }
	inline FsmBool_t664485696 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmBool_t664485696 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(StringCompare_t1547997036, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
