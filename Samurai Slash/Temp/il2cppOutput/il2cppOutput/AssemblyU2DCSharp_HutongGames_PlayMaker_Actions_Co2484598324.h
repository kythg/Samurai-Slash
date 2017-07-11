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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ConvertIntToString
struct  ConvertIntToString_t2484598324  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ConvertIntToString::intVariable
	FsmInt_t1273009179 * ___intVariable_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertIntToString::stringVariable
	FsmString_t2414474701 * ___stringVariable_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertIntToString::format
	FsmString_t2414474701 * ___format_13;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertIntToString::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_intVariable_11() { return static_cast<int32_t>(offsetof(ConvertIntToString_t2484598324, ___intVariable_11)); }
	inline FsmInt_t1273009179 * get_intVariable_11() const { return ___intVariable_11; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_11() { return &___intVariable_11; }
	inline void set_intVariable_11(FsmInt_t1273009179 * value)
	{
		___intVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_11, value);
	}

	inline static int32_t get_offset_of_stringVariable_12() { return static_cast<int32_t>(offsetof(ConvertIntToString_t2484598324, ___stringVariable_12)); }
	inline FsmString_t2414474701 * get_stringVariable_12() const { return ___stringVariable_12; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_12() { return &___stringVariable_12; }
	inline void set_stringVariable_12(FsmString_t2414474701 * value)
	{
		___stringVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_12, value);
	}

	inline static int32_t get_offset_of_format_13() { return static_cast<int32_t>(offsetof(ConvertIntToString_t2484598324, ___format_13)); }
	inline FsmString_t2414474701 * get_format_13() const { return ___format_13; }
	inline FsmString_t2414474701 ** get_address_of_format_13() { return &___format_13; }
	inline void set_format_13(FsmString_t2414474701 * value)
	{
		___format_13 = value;
		Il2CppCodeGenWriteBarrier(&___format_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(ConvertIntToString_t2484598324, ___everyFrame_14)); }
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
