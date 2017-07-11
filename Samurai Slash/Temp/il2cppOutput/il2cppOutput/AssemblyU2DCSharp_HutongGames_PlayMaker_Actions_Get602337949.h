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

// HutongGames.PlayMaker.Actions.GetStringLength
struct  GetStringLength_t602337949  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetStringLength::stringVariable
	FsmString_t2414474701 * ___stringVariable_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetStringLength::storeResult
	FsmInt_t1273009179 * ___storeResult_12;
	// System.Boolean HutongGames.PlayMaker.Actions.GetStringLength::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_stringVariable_11() { return static_cast<int32_t>(offsetof(GetStringLength_t602337949, ___stringVariable_11)); }
	inline FsmString_t2414474701 * get_stringVariable_11() const { return ___stringVariable_11; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_11() { return &___stringVariable_11; }
	inline void set_stringVariable_11(FsmString_t2414474701 * value)
	{
		___stringVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_11, value);
	}

	inline static int32_t get_offset_of_storeResult_12() { return static_cast<int32_t>(offsetof(GetStringLength_t602337949, ___storeResult_12)); }
	inline FsmInt_t1273009179 * get_storeResult_12() const { return ___storeResult_12; }
	inline FsmInt_t1273009179 ** get_address_of_storeResult_12() { return &___storeResult_12; }
	inline void set_storeResult_12(FsmInt_t1273009179 * value)
	{
		___storeResult_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(GetStringLength_t602337949, ___everyFrame_13)); }
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
