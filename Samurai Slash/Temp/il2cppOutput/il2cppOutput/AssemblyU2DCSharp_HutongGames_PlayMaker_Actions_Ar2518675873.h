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

// HutongGames.PlayMaker.Actions.ArrayResize
struct  ArrayResize_t2518675873  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayResize::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayResize::newSize
	FsmInt_t1273009179 * ___newSize_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayResize::sizeOutOfRangeEvent
	FsmEvent_t1258573736 * ___sizeOutOfRangeEvent_13;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArrayResize_t2518675873, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_newSize_12() { return static_cast<int32_t>(offsetof(ArrayResize_t2518675873, ___newSize_12)); }
	inline FsmInt_t1273009179 * get_newSize_12() const { return ___newSize_12; }
	inline FsmInt_t1273009179 ** get_address_of_newSize_12() { return &___newSize_12; }
	inline void set_newSize_12(FsmInt_t1273009179 * value)
	{
		___newSize_12 = value;
		Il2CppCodeGenWriteBarrier(&___newSize_12, value);
	}

	inline static int32_t get_offset_of_sizeOutOfRangeEvent_13() { return static_cast<int32_t>(offsetof(ArrayResize_t2518675873, ___sizeOutOfRangeEvent_13)); }
	inline FsmEvent_t1258573736 * get_sizeOutOfRangeEvent_13() const { return ___sizeOutOfRangeEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_sizeOutOfRangeEvent_13() { return &___sizeOutOfRangeEvent_13; }
	inline void set_sizeOutOfRangeEvent_13(FsmEvent_t1258573736 * value)
	{
		___sizeOutOfRangeEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sizeOutOfRangeEvent_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
