#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EnumCompare
struct  EnumCompare_t3562712762  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.EnumCompare::enumVariable
	FsmEnum_t2808516103 * ___enumVariable_11;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.EnumCompare::compareTo
	FsmEnum_t2808516103 * ___compareTo_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.EnumCompare::equalEvent
	FsmEvent_t1258573736 * ___equalEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.EnumCompare::notEqualEvent
	FsmEvent_t1258573736 * ___notEqualEvent_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EnumCompare::storeResult
	FsmBool_t664485696 * ___storeResult_15;
	// System.Boolean HutongGames.PlayMaker.Actions.EnumCompare::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_enumVariable_11() { return static_cast<int32_t>(offsetof(EnumCompare_t3562712762, ___enumVariable_11)); }
	inline FsmEnum_t2808516103 * get_enumVariable_11() const { return ___enumVariable_11; }
	inline FsmEnum_t2808516103 ** get_address_of_enumVariable_11() { return &___enumVariable_11; }
	inline void set_enumVariable_11(FsmEnum_t2808516103 * value)
	{
		___enumVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___enumVariable_11, value);
	}

	inline static int32_t get_offset_of_compareTo_12() { return static_cast<int32_t>(offsetof(EnumCompare_t3562712762, ___compareTo_12)); }
	inline FsmEnum_t2808516103 * get_compareTo_12() const { return ___compareTo_12; }
	inline FsmEnum_t2808516103 ** get_address_of_compareTo_12() { return &___compareTo_12; }
	inline void set_compareTo_12(FsmEnum_t2808516103 * value)
	{
		___compareTo_12 = value;
		Il2CppCodeGenWriteBarrier(&___compareTo_12, value);
	}

	inline static int32_t get_offset_of_equalEvent_13() { return static_cast<int32_t>(offsetof(EnumCompare_t3562712762, ___equalEvent_13)); }
	inline FsmEvent_t1258573736 * get_equalEvent_13() const { return ___equalEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_equalEvent_13() { return &___equalEvent_13; }
	inline void set_equalEvent_13(FsmEvent_t1258573736 * value)
	{
		___equalEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___equalEvent_13, value);
	}

	inline static int32_t get_offset_of_notEqualEvent_14() { return static_cast<int32_t>(offsetof(EnumCompare_t3562712762, ___notEqualEvent_14)); }
	inline FsmEvent_t1258573736 * get_notEqualEvent_14() const { return ___notEqualEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_notEqualEvent_14() { return &___notEqualEvent_14; }
	inline void set_notEqualEvent_14(FsmEvent_t1258573736 * value)
	{
		___notEqualEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___notEqualEvent_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(EnumCompare_t3562712762, ___storeResult_15)); }
	inline FsmBool_t664485696 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmBool_t664485696 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(EnumCompare_t3562712762, ___everyFrame_16)); }
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
