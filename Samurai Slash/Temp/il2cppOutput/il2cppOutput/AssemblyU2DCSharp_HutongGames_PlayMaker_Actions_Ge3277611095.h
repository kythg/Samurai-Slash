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
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetTagCount
struct  GetTagCount_t3277611095  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetTagCount::tag
	FsmString_t2414474701 * ___tag_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetTagCount::storeResult
	FsmInt_t1273009179 * ___storeResult_12;

public:
	inline static int32_t get_offset_of_tag_11() { return static_cast<int32_t>(offsetof(GetTagCount_t3277611095, ___tag_11)); }
	inline FsmString_t2414474701 * get_tag_11() const { return ___tag_11; }
	inline FsmString_t2414474701 ** get_address_of_tag_11() { return &___tag_11; }
	inline void set_tag_11(FsmString_t2414474701 * value)
	{
		___tag_11 = value;
		Il2CppCodeGenWriteBarrier(&___tag_11, value);
	}

	inline static int32_t get_offset_of_storeResult_12() { return static_cast<int32_t>(offsetof(GetTagCount_t3277611095, ___storeResult_12)); }
	inline FsmInt_t1273009179 * get_storeResult_12() const { return ___storeResult_12; }
	inline FsmInt_t1273009179 ** get_address_of_storeResult_12() { return &___storeResult_12; }
	inline void set_storeResult_12(FsmInt_t1273009179 * value)
	{
		___storeResult_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
