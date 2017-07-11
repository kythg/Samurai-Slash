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

// HutongGames.PlayMaker.Actions.SetIntValue
struct  SetIntValue_t929835840  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetIntValue::intVariable
	FsmInt_t1273009179 * ___intVariable_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetIntValue::intValue
	FsmInt_t1273009179 * ___intValue_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetIntValue::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_intVariable_11() { return static_cast<int32_t>(offsetof(SetIntValue_t929835840, ___intVariable_11)); }
	inline FsmInt_t1273009179 * get_intVariable_11() const { return ___intVariable_11; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_11() { return &___intVariable_11; }
	inline void set_intVariable_11(FsmInt_t1273009179 * value)
	{
		___intVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_11, value);
	}

	inline static int32_t get_offset_of_intValue_12() { return static_cast<int32_t>(offsetof(SetIntValue_t929835840, ___intValue_12)); }
	inline FsmInt_t1273009179 * get_intValue_12() const { return ___intValue_12; }
	inline FsmInt_t1273009179 ** get_address_of_intValue_12() { return &___intValue_12; }
	inline void set_intValue_12(FsmInt_t1273009179 * value)
	{
		___intValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___intValue_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetIntValue_t929835840, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
