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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetIntFromFloat
struct  SetIntFromFloat_t355373589  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetIntFromFloat::intVariable
	FsmInt_t1273009179 * ___intVariable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetIntFromFloat::floatValue
	FsmFloat_t937133978 * ___floatValue_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetIntFromFloat::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_intVariable_11() { return static_cast<int32_t>(offsetof(SetIntFromFloat_t355373589, ___intVariable_11)); }
	inline FsmInt_t1273009179 * get_intVariable_11() const { return ___intVariable_11; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_11() { return &___intVariable_11; }
	inline void set_intVariable_11(FsmInt_t1273009179 * value)
	{
		___intVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_11, value);
	}

	inline static int32_t get_offset_of_floatValue_12() { return static_cast<int32_t>(offsetof(SetIntFromFloat_t355373589, ___floatValue_12)); }
	inline FsmFloat_t937133978 * get_floatValue_12() const { return ___floatValue_12; }
	inline FsmFloat_t937133978 ** get_address_of_floatValue_12() { return &___floatValue_12; }
	inline void set_floatValue_12(FsmFloat_t937133978 * value)
	{
		___floatValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___floatValue_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetIntFromFloat_t355373589, ___everyFrame_13)); }
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
