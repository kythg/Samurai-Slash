﻿#pragma once

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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayShuffle
struct  ArrayShuffle_t2054726132  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayShuffle::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayShuffle::startIndex
	FsmInt_t1273009179 * ___startIndex_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayShuffle::shufflingRange
	FsmInt_t1273009179 * ___shufflingRange_13;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArrayShuffle_t2054726132, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_startIndex_12() { return static_cast<int32_t>(offsetof(ArrayShuffle_t2054726132, ___startIndex_12)); }
	inline FsmInt_t1273009179 * get_startIndex_12() const { return ___startIndex_12; }
	inline FsmInt_t1273009179 ** get_address_of_startIndex_12() { return &___startIndex_12; }
	inline void set_startIndex_12(FsmInt_t1273009179 * value)
	{
		___startIndex_12 = value;
		Il2CppCodeGenWriteBarrier(&___startIndex_12, value);
	}

	inline static int32_t get_offset_of_shufflingRange_13() { return static_cast<int32_t>(offsetof(ArrayShuffle_t2054726132, ___shufflingRange_13)); }
	inline FsmInt_t1273009179 * get_shufflingRange_13() const { return ___shufflingRange_13; }
	inline FsmInt_t1273009179 ** get_address_of_shufflingRange_13() { return &___shufflingRange_13; }
	inline void set_shufflingRange_13(FsmInt_t1273009179 * value)
	{
		___shufflingRange_13 = value;
		Il2CppCodeGenWriteBarrier(&___shufflingRange_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
