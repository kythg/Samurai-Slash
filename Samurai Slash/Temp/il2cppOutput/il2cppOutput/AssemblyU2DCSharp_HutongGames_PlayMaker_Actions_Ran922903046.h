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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RandomInt
struct  RandomInt_t922903046  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.RandomInt::min
	FsmInt_t1273009179 * ___min_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.RandomInt::max
	FsmInt_t1273009179 * ___max_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.RandomInt::storeResult
	FsmInt_t1273009179 * ___storeResult_13;
	// System.Boolean HutongGames.PlayMaker.Actions.RandomInt::inclusiveMax
	bool ___inclusiveMax_14;

public:
	inline static int32_t get_offset_of_min_11() { return static_cast<int32_t>(offsetof(RandomInt_t922903046, ___min_11)); }
	inline FsmInt_t1273009179 * get_min_11() const { return ___min_11; }
	inline FsmInt_t1273009179 ** get_address_of_min_11() { return &___min_11; }
	inline void set_min_11(FsmInt_t1273009179 * value)
	{
		___min_11 = value;
		Il2CppCodeGenWriteBarrier(&___min_11, value);
	}

	inline static int32_t get_offset_of_max_12() { return static_cast<int32_t>(offsetof(RandomInt_t922903046, ___max_12)); }
	inline FsmInt_t1273009179 * get_max_12() const { return ___max_12; }
	inline FsmInt_t1273009179 ** get_address_of_max_12() { return &___max_12; }
	inline void set_max_12(FsmInt_t1273009179 * value)
	{
		___max_12 = value;
		Il2CppCodeGenWriteBarrier(&___max_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(RandomInt_t922903046, ___storeResult_13)); }
	inline FsmInt_t1273009179 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmInt_t1273009179 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmInt_t1273009179 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_inclusiveMax_14() { return static_cast<int32_t>(offsetof(RandomInt_t922903046, ___inclusiveMax_14)); }
	inline bool get_inclusiveMax_14() const { return ___inclusiveMax_14; }
	inline bool* get_address_of_inclusiveMax_14() { return &___inclusiveMax_14; }
	inline void set_inclusiveMax_14(bool value)
	{
		___inclusiveMax_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
