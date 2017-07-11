#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Co1097724205.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ConvertFloatToInt
struct  ConvertFloatToInt_t3976742463  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ConvertFloatToInt::floatVariable
	FsmFloat_t937133978 * ___floatVariable_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ConvertFloatToInt::intVariable
	FsmInt_t1273009179 * ___intVariable_12;
	// HutongGames.PlayMaker.Actions.ConvertFloatToInt/FloatRounding HutongGames.PlayMaker.Actions.ConvertFloatToInt::rounding
	int32_t ___rounding_13;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertFloatToInt::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_floatVariable_11() { return static_cast<int32_t>(offsetof(ConvertFloatToInt_t3976742463, ___floatVariable_11)); }
	inline FsmFloat_t937133978 * get_floatVariable_11() const { return ___floatVariable_11; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_11() { return &___floatVariable_11; }
	inline void set_floatVariable_11(FsmFloat_t937133978 * value)
	{
		___floatVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_11, value);
	}

	inline static int32_t get_offset_of_intVariable_12() { return static_cast<int32_t>(offsetof(ConvertFloatToInt_t3976742463, ___intVariable_12)); }
	inline FsmInt_t1273009179 * get_intVariable_12() const { return ___intVariable_12; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_12() { return &___intVariable_12; }
	inline void set_intVariable_12(FsmInt_t1273009179 * value)
	{
		___intVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_12, value);
	}

	inline static int32_t get_offset_of_rounding_13() { return static_cast<int32_t>(offsetof(ConvertFloatToInt_t3976742463, ___rounding_13)); }
	inline int32_t get_rounding_13() const { return ___rounding_13; }
	inline int32_t* get_address_of_rounding_13() { return &___rounding_13; }
	inline void set_rounding_13(int32_t value)
	{
		___rounding_13 = value;
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(ConvertFloatToInt_t3976742463, ___everyFrame_14)); }
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
