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

// HutongGames.PlayMaker.Actions.IntClamp
struct  IntClamp_t3501461530  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntClamp::intVariable
	FsmInt_t1273009179 * ___intVariable_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntClamp::minValue
	FsmInt_t1273009179 * ___minValue_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntClamp::maxValue
	FsmInt_t1273009179 * ___maxValue_13;
	// System.Boolean HutongGames.PlayMaker.Actions.IntClamp::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_intVariable_11() { return static_cast<int32_t>(offsetof(IntClamp_t3501461530, ___intVariable_11)); }
	inline FsmInt_t1273009179 * get_intVariable_11() const { return ___intVariable_11; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_11() { return &___intVariable_11; }
	inline void set_intVariable_11(FsmInt_t1273009179 * value)
	{
		___intVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_11, value);
	}

	inline static int32_t get_offset_of_minValue_12() { return static_cast<int32_t>(offsetof(IntClamp_t3501461530, ___minValue_12)); }
	inline FsmInt_t1273009179 * get_minValue_12() const { return ___minValue_12; }
	inline FsmInt_t1273009179 ** get_address_of_minValue_12() { return &___minValue_12; }
	inline void set_minValue_12(FsmInt_t1273009179 * value)
	{
		___minValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___minValue_12, value);
	}

	inline static int32_t get_offset_of_maxValue_13() { return static_cast<int32_t>(offsetof(IntClamp_t3501461530, ___maxValue_13)); }
	inline FsmInt_t1273009179 * get_maxValue_13() const { return ___maxValue_13; }
	inline FsmInt_t1273009179 ** get_address_of_maxValue_13() { return &___maxValue_13; }
	inline void set_maxValue_13(FsmInt_t1273009179 * value)
	{
		___maxValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___maxValue_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(IntClamp_t3501461530, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
