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

// HutongGames.PlayMaker.Actions.GetSubstring
struct  GetSubstring_t1243663789  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSubstring::stringVariable
	FsmString_t2414474701 * ___stringVariable_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSubstring::startIndex
	FsmInt_t1273009179 * ___startIndex_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSubstring::length
	FsmInt_t1273009179 * ___length_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSubstring::storeResult
	FsmString_t2414474701 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSubstring::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_stringVariable_11() { return static_cast<int32_t>(offsetof(GetSubstring_t1243663789, ___stringVariable_11)); }
	inline FsmString_t2414474701 * get_stringVariable_11() const { return ___stringVariable_11; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_11() { return &___stringVariable_11; }
	inline void set_stringVariable_11(FsmString_t2414474701 * value)
	{
		___stringVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_11, value);
	}

	inline static int32_t get_offset_of_startIndex_12() { return static_cast<int32_t>(offsetof(GetSubstring_t1243663789, ___startIndex_12)); }
	inline FsmInt_t1273009179 * get_startIndex_12() const { return ___startIndex_12; }
	inline FsmInt_t1273009179 ** get_address_of_startIndex_12() { return &___startIndex_12; }
	inline void set_startIndex_12(FsmInt_t1273009179 * value)
	{
		___startIndex_12 = value;
		Il2CppCodeGenWriteBarrier(&___startIndex_12, value);
	}

	inline static int32_t get_offset_of_length_13() { return static_cast<int32_t>(offsetof(GetSubstring_t1243663789, ___length_13)); }
	inline FsmInt_t1273009179 * get_length_13() const { return ___length_13; }
	inline FsmInt_t1273009179 ** get_address_of_length_13() { return &___length_13; }
	inline void set_length_13(FsmInt_t1273009179 * value)
	{
		___length_13 = value;
		Il2CppCodeGenWriteBarrier(&___length_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(GetSubstring_t1243663789, ___storeResult_14)); }
	inline FsmString_t2414474701 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmString_t2414474701 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmString_t2414474701 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GetSubstring_t1243663789, ___everyFrame_15)); }
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
