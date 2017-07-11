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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayDeleteAt
struct  ArrayDeleteAt_t3892309371  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayDeleteAt::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayDeleteAt::index
	FsmInt_t1273009179 * ___index_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayDeleteAt::indexOutOfRangeEvent
	FsmEvent_t1258573736 * ___indexOutOfRangeEvent_13;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArrayDeleteAt_t3892309371, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_index_12() { return static_cast<int32_t>(offsetof(ArrayDeleteAt_t3892309371, ___index_12)); }
	inline FsmInt_t1273009179 * get_index_12() const { return ___index_12; }
	inline FsmInt_t1273009179 ** get_address_of_index_12() { return &___index_12; }
	inline void set_index_12(FsmInt_t1273009179 * value)
	{
		___index_12 = value;
		Il2CppCodeGenWriteBarrier(&___index_12, value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeEvent_13() { return static_cast<int32_t>(offsetof(ArrayDeleteAt_t3892309371, ___indexOutOfRangeEvent_13)); }
	inline FsmEvent_t1258573736 * get_indexOutOfRangeEvent_13() const { return ___indexOutOfRangeEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_indexOutOfRangeEvent_13() { return &___indexOutOfRangeEvent_13; }
	inline void set_indexOutOfRangeEvent_13(FsmEvent_t1258573736 * value)
	{
		___indexOutOfRangeEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___indexOutOfRangeEvent_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
