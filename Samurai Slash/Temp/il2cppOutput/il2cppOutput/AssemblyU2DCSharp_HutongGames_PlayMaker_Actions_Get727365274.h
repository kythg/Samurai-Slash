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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetButton
struct  GetButton_t727365274  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetButton::buttonName
	FsmString_t2414474701 * ___buttonName_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetButton::storeResult
	FsmBool_t664485696 * ___storeResult_12;
	// System.Boolean HutongGames.PlayMaker.Actions.GetButton::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_buttonName_11() { return static_cast<int32_t>(offsetof(GetButton_t727365274, ___buttonName_11)); }
	inline FsmString_t2414474701 * get_buttonName_11() const { return ___buttonName_11; }
	inline FsmString_t2414474701 ** get_address_of_buttonName_11() { return &___buttonName_11; }
	inline void set_buttonName_11(FsmString_t2414474701 * value)
	{
		___buttonName_11 = value;
		Il2CppCodeGenWriteBarrier(&___buttonName_11, value);
	}

	inline static int32_t get_offset_of_storeResult_12() { return static_cast<int32_t>(offsetof(GetButton_t727365274, ___storeResult_12)); }
	inline FsmBool_t664485696 * get_storeResult_12() const { return ___storeResult_12; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_12() { return &___storeResult_12; }
	inline void set_storeResult_12(FsmBool_t664485696 * value)
	{
		___storeResult_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(GetButton_t727365274, ___everyFrame_13)); }
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
