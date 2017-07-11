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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.IntCompare
struct  IntCompare_t3551046966  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntCompare::integer1
	FsmInt_t1273009179 * ___integer1_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntCompare::integer2
	FsmInt_t1273009179 * ___integer2_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.IntCompare::equal
	FsmEvent_t1258573736 * ___equal_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.IntCompare::lessThan
	FsmEvent_t1258573736 * ___lessThan_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.IntCompare::greaterThan
	FsmEvent_t1258573736 * ___greaterThan_15;
	// System.Boolean HutongGames.PlayMaker.Actions.IntCompare::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_integer1_11() { return static_cast<int32_t>(offsetof(IntCompare_t3551046966, ___integer1_11)); }
	inline FsmInt_t1273009179 * get_integer1_11() const { return ___integer1_11; }
	inline FsmInt_t1273009179 ** get_address_of_integer1_11() { return &___integer1_11; }
	inline void set_integer1_11(FsmInt_t1273009179 * value)
	{
		___integer1_11 = value;
		Il2CppCodeGenWriteBarrier(&___integer1_11, value);
	}

	inline static int32_t get_offset_of_integer2_12() { return static_cast<int32_t>(offsetof(IntCompare_t3551046966, ___integer2_12)); }
	inline FsmInt_t1273009179 * get_integer2_12() const { return ___integer2_12; }
	inline FsmInt_t1273009179 ** get_address_of_integer2_12() { return &___integer2_12; }
	inline void set_integer2_12(FsmInt_t1273009179 * value)
	{
		___integer2_12 = value;
		Il2CppCodeGenWriteBarrier(&___integer2_12, value);
	}

	inline static int32_t get_offset_of_equal_13() { return static_cast<int32_t>(offsetof(IntCompare_t3551046966, ___equal_13)); }
	inline FsmEvent_t1258573736 * get_equal_13() const { return ___equal_13; }
	inline FsmEvent_t1258573736 ** get_address_of_equal_13() { return &___equal_13; }
	inline void set_equal_13(FsmEvent_t1258573736 * value)
	{
		___equal_13 = value;
		Il2CppCodeGenWriteBarrier(&___equal_13, value);
	}

	inline static int32_t get_offset_of_lessThan_14() { return static_cast<int32_t>(offsetof(IntCompare_t3551046966, ___lessThan_14)); }
	inline FsmEvent_t1258573736 * get_lessThan_14() const { return ___lessThan_14; }
	inline FsmEvent_t1258573736 ** get_address_of_lessThan_14() { return &___lessThan_14; }
	inline void set_lessThan_14(FsmEvent_t1258573736 * value)
	{
		___lessThan_14 = value;
		Il2CppCodeGenWriteBarrier(&___lessThan_14, value);
	}

	inline static int32_t get_offset_of_greaterThan_15() { return static_cast<int32_t>(offsetof(IntCompare_t3551046966, ___greaterThan_15)); }
	inline FsmEvent_t1258573736 * get_greaterThan_15() const { return ___greaterThan_15; }
	inline FsmEvent_t1258573736 ** get_address_of_greaterThan_15() { return &___greaterThan_15; }
	inline void set_greaterThan_15(FsmEvent_t1258573736 * value)
	{
		___greaterThan_15 = value;
		Il2CppCodeGenWriteBarrier(&___greaterThan_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(IntCompare_t3551046966, ___everyFrame_16)); }
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
