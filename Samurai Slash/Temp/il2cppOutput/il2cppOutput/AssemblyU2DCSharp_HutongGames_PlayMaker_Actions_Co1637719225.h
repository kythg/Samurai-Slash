#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ConvertBoolToInt
struct  ConvertBoolToInt_t1637719225  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ConvertBoolToInt::boolVariable
	FsmBool_t664485696 * ___boolVariable_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ConvertBoolToInt::intVariable
	FsmInt_t1273009179 * ___intVariable_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ConvertBoolToInt::falseValue
	FsmInt_t1273009179 * ___falseValue_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ConvertBoolToInt::trueValue
	FsmInt_t1273009179 * ___trueValue_14;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertBoolToInt::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_boolVariable_11() { return static_cast<int32_t>(offsetof(ConvertBoolToInt_t1637719225, ___boolVariable_11)); }
	inline FsmBool_t664485696 * get_boolVariable_11() const { return ___boolVariable_11; }
	inline FsmBool_t664485696 ** get_address_of_boolVariable_11() { return &___boolVariable_11; }
	inline void set_boolVariable_11(FsmBool_t664485696 * value)
	{
		___boolVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___boolVariable_11, value);
	}

	inline static int32_t get_offset_of_intVariable_12() { return static_cast<int32_t>(offsetof(ConvertBoolToInt_t1637719225, ___intVariable_12)); }
	inline FsmInt_t1273009179 * get_intVariable_12() const { return ___intVariable_12; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_12() { return &___intVariable_12; }
	inline void set_intVariable_12(FsmInt_t1273009179 * value)
	{
		___intVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_12, value);
	}

	inline static int32_t get_offset_of_falseValue_13() { return static_cast<int32_t>(offsetof(ConvertBoolToInt_t1637719225, ___falseValue_13)); }
	inline FsmInt_t1273009179 * get_falseValue_13() const { return ___falseValue_13; }
	inline FsmInt_t1273009179 ** get_address_of_falseValue_13() { return &___falseValue_13; }
	inline void set_falseValue_13(FsmInt_t1273009179 * value)
	{
		___falseValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___falseValue_13, value);
	}

	inline static int32_t get_offset_of_trueValue_14() { return static_cast<int32_t>(offsetof(ConvertBoolToInt_t1637719225, ___trueValue_14)); }
	inline FsmInt_t1273009179 * get_trueValue_14() const { return ___trueValue_14; }
	inline FsmInt_t1273009179 ** get_address_of_trueValue_14() { return &___trueValue_14; }
	inline void set_trueValue_14(FsmInt_t1273009179 * value)
	{
		___trueValue_14 = value;
		Il2CppCodeGenWriteBarrier(&___trueValue_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(ConvertBoolToInt_t1637719225, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
