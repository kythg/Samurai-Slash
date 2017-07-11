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

// HutongGames.PlayMaker.Actions.GetStringLeft
struct  GetStringLeft_t4283785042  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetStringLeft::stringVariable
	FsmString_t2414474701 * ___stringVariable_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetStringLeft::charCount
	FsmInt_t1273009179 * ___charCount_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetStringLeft::storeResult
	FsmString_t2414474701 * ___storeResult_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetStringLeft::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_stringVariable_11() { return static_cast<int32_t>(offsetof(GetStringLeft_t4283785042, ___stringVariable_11)); }
	inline FsmString_t2414474701 * get_stringVariable_11() const { return ___stringVariable_11; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_11() { return &___stringVariable_11; }
	inline void set_stringVariable_11(FsmString_t2414474701 * value)
	{
		___stringVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_11, value);
	}

	inline static int32_t get_offset_of_charCount_12() { return static_cast<int32_t>(offsetof(GetStringLeft_t4283785042, ___charCount_12)); }
	inline FsmInt_t1273009179 * get_charCount_12() const { return ___charCount_12; }
	inline FsmInt_t1273009179 ** get_address_of_charCount_12() { return &___charCount_12; }
	inline void set_charCount_12(FsmInt_t1273009179 * value)
	{
		___charCount_12 = value;
		Il2CppCodeGenWriteBarrier(&___charCount_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(GetStringLeft_t4283785042, ___storeResult_13)); }
	inline FsmString_t2414474701 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmString_t2414474701 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmString_t2414474701 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GetStringLeft_t4283785042, ___everyFrame_14)); }
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
