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

// HutongGames.PlayMaker.Actions.GetTouchCount
struct  GetTouchCount_t1183844550  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetTouchCount::storeCount
	FsmInt_t1273009179 * ___storeCount_11;
	// System.Boolean HutongGames.PlayMaker.Actions.GetTouchCount::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_storeCount_11() { return static_cast<int32_t>(offsetof(GetTouchCount_t1183844550, ___storeCount_11)); }
	inline FsmInt_t1273009179 * get_storeCount_11() const { return ___storeCount_11; }
	inline FsmInt_t1273009179 ** get_address_of_storeCount_11() { return &___storeCount_11; }
	inline void set_storeCount_11(FsmInt_t1273009179 * value)
	{
		___storeCount_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeCount_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(GetTouchCount_t1183844550, ___everyFrame_12)); }
	inline bool get_everyFrame_12() const { return ___everyFrame_12; }
	inline bool* get_address_of_everyFrame_12() { return &___everyFrame_12; }
	inline void set_everyFrame_12(bool value)
	{
		___everyFrame_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
