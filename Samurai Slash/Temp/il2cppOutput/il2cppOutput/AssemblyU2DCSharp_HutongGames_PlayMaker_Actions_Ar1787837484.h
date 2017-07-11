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
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayContains
struct  ArrayContains_t1787837484  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayContains::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.ArrayContains::value
	FsmVar_t2872592513 * ___value_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayContains::index
	FsmInt_t1273009179 * ___index_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ArrayContains::isContained
	FsmBool_t664485696 * ___isContained_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayContains::isContainedEvent
	FsmEvent_t1258573736 * ___isContainedEvent_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayContains::isNotContainedEvent
	FsmEvent_t1258573736 * ___isNotContainedEvent_16;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArrayContains_t1787837484, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_value_12() { return static_cast<int32_t>(offsetof(ArrayContains_t1787837484, ___value_12)); }
	inline FsmVar_t2872592513 * get_value_12() const { return ___value_12; }
	inline FsmVar_t2872592513 ** get_address_of_value_12() { return &___value_12; }
	inline void set_value_12(FsmVar_t2872592513 * value)
	{
		___value_12 = value;
		Il2CppCodeGenWriteBarrier(&___value_12, value);
	}

	inline static int32_t get_offset_of_index_13() { return static_cast<int32_t>(offsetof(ArrayContains_t1787837484, ___index_13)); }
	inline FsmInt_t1273009179 * get_index_13() const { return ___index_13; }
	inline FsmInt_t1273009179 ** get_address_of_index_13() { return &___index_13; }
	inline void set_index_13(FsmInt_t1273009179 * value)
	{
		___index_13 = value;
		Il2CppCodeGenWriteBarrier(&___index_13, value);
	}

	inline static int32_t get_offset_of_isContained_14() { return static_cast<int32_t>(offsetof(ArrayContains_t1787837484, ___isContained_14)); }
	inline FsmBool_t664485696 * get_isContained_14() const { return ___isContained_14; }
	inline FsmBool_t664485696 ** get_address_of_isContained_14() { return &___isContained_14; }
	inline void set_isContained_14(FsmBool_t664485696 * value)
	{
		___isContained_14 = value;
		Il2CppCodeGenWriteBarrier(&___isContained_14, value);
	}

	inline static int32_t get_offset_of_isContainedEvent_15() { return static_cast<int32_t>(offsetof(ArrayContains_t1787837484, ___isContainedEvent_15)); }
	inline FsmEvent_t1258573736 * get_isContainedEvent_15() const { return ___isContainedEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_isContainedEvent_15() { return &___isContainedEvent_15; }
	inline void set_isContainedEvent_15(FsmEvent_t1258573736 * value)
	{
		___isContainedEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___isContainedEvent_15, value);
	}

	inline static int32_t get_offset_of_isNotContainedEvent_16() { return static_cast<int32_t>(offsetof(ArrayContains_t1787837484, ___isNotContainedEvent_16)); }
	inline FsmEvent_t1258573736 * get_isNotContainedEvent_16() const { return ___isNotContainedEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_isNotContainedEvent_16() { return &___isNotContainedEvent_16; }
	inline void set_isNotContainedEvent_16(FsmEvent_t1258573736 * value)
	{
		___isNotContainedEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___isNotContainedEvent_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
