#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArraySet
struct  ArraySet_t1522161601  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArraySet::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArraySet::index
	FsmInt_t1273009179 * ___index_12;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.ArraySet::value
	FsmVar_t2872592513 * ___value_13;
	// System.Boolean HutongGames.PlayMaker.Actions.ArraySet::everyFrame
	bool ___everyFrame_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArraySet::indexOutOfRange
	FsmEvent_t1258573736 * ___indexOutOfRange_15;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArraySet_t1522161601, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_index_12() { return static_cast<int32_t>(offsetof(ArraySet_t1522161601, ___index_12)); }
	inline FsmInt_t1273009179 * get_index_12() const { return ___index_12; }
	inline FsmInt_t1273009179 ** get_address_of_index_12() { return &___index_12; }
	inline void set_index_12(FsmInt_t1273009179 * value)
	{
		___index_12 = value;
		Il2CppCodeGenWriteBarrier(&___index_12, value);
	}

	inline static int32_t get_offset_of_value_13() { return static_cast<int32_t>(offsetof(ArraySet_t1522161601, ___value_13)); }
	inline FsmVar_t2872592513 * get_value_13() const { return ___value_13; }
	inline FsmVar_t2872592513 ** get_address_of_value_13() { return &___value_13; }
	inline void set_value_13(FsmVar_t2872592513 * value)
	{
		___value_13 = value;
		Il2CppCodeGenWriteBarrier(&___value_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(ArraySet_t1522161601, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}

	inline static int32_t get_offset_of_indexOutOfRange_15() { return static_cast<int32_t>(offsetof(ArraySet_t1522161601, ___indexOutOfRange_15)); }
	inline FsmEvent_t1258573736 * get_indexOutOfRange_15() const { return ___indexOutOfRange_15; }
	inline FsmEvent_t1258573736 ** get_address_of_indexOutOfRange_15() { return &___indexOutOfRange_15; }
	inline void set_indexOutOfRange_15(FsmEvent_t1258573736 * value)
	{
		___indexOutOfRange_15 = value;
		Il2CppCodeGenWriteBarrier(&___indexOutOfRange_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
