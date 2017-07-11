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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetButtonDown
struct  GetButtonDown_t1381916892  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetButtonDown::buttonName
	FsmString_t2414474701 * ___buttonName_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetButtonDown::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetButtonDown::storeResult
	FsmBool_t664485696 * ___storeResult_13;

public:
	inline static int32_t get_offset_of_buttonName_11() { return static_cast<int32_t>(offsetof(GetButtonDown_t1381916892, ___buttonName_11)); }
	inline FsmString_t2414474701 * get_buttonName_11() const { return ___buttonName_11; }
	inline FsmString_t2414474701 ** get_address_of_buttonName_11() { return &___buttonName_11; }
	inline void set_buttonName_11(FsmString_t2414474701 * value)
	{
		___buttonName_11 = value;
		Il2CppCodeGenWriteBarrier(&___buttonName_11, value);
	}

	inline static int32_t get_offset_of_sendEvent_12() { return static_cast<int32_t>(offsetof(GetButtonDown_t1381916892, ___sendEvent_12)); }
	inline FsmEvent_t1258573736 * get_sendEvent_12() const { return ___sendEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_12() { return &___sendEvent_12; }
	inline void set_sendEvent_12(FsmEvent_t1258573736 * value)
	{
		___sendEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(GetButtonDown_t1381916892, ___storeResult_13)); }
	inline FsmBool_t664485696 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmBool_t664485696 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
