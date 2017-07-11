#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmEventTarget
struct FsmEventTarget_t172293745;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.DelayedEvent
struct DelayedEvent_t1624700828;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SendEventByName
struct  SendEventByName_t239596870  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Actions.SendEventByName::eventTarget
	FsmEventTarget_t172293745 * ___eventTarget_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SendEventByName::sendEvent
	FsmString_t2414474701 * ___sendEvent_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SendEventByName::delay
	FsmFloat_t937133978 * ___delay_13;
	// System.Boolean HutongGames.PlayMaker.Actions.SendEventByName::everyFrame
	bool ___everyFrame_14;
	// HutongGames.PlayMaker.DelayedEvent HutongGames.PlayMaker.Actions.SendEventByName::delayedEvent
	DelayedEvent_t1624700828 * ___delayedEvent_15;

public:
	inline static int32_t get_offset_of_eventTarget_11() { return static_cast<int32_t>(offsetof(SendEventByName_t239596870, ___eventTarget_11)); }
	inline FsmEventTarget_t172293745 * get_eventTarget_11() const { return ___eventTarget_11; }
	inline FsmEventTarget_t172293745 ** get_address_of_eventTarget_11() { return &___eventTarget_11; }
	inline void set_eventTarget_11(FsmEventTarget_t172293745 * value)
	{
		___eventTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&___eventTarget_11, value);
	}

	inline static int32_t get_offset_of_sendEvent_12() { return static_cast<int32_t>(offsetof(SendEventByName_t239596870, ___sendEvent_12)); }
	inline FsmString_t2414474701 * get_sendEvent_12() const { return ___sendEvent_12; }
	inline FsmString_t2414474701 ** get_address_of_sendEvent_12() { return &___sendEvent_12; }
	inline void set_sendEvent_12(FsmString_t2414474701 * value)
	{
		___sendEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_12, value);
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(SendEventByName_t239596870, ___delay_13)); }
	inline FsmFloat_t937133978 * get_delay_13() const { return ___delay_13; }
	inline FsmFloat_t937133978 ** get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(FsmFloat_t937133978 * value)
	{
		___delay_13 = value;
		Il2CppCodeGenWriteBarrier(&___delay_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(SendEventByName_t239596870, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}

	inline static int32_t get_offset_of_delayedEvent_15() { return static_cast<int32_t>(offsetof(SendEventByName_t239596870, ___delayedEvent_15)); }
	inline DelayedEvent_t1624700828 * get_delayedEvent_15() const { return ___delayedEvent_15; }
	inline DelayedEvent_t1624700828 ** get_address_of_delayedEvent_15() { return &___delayedEvent_15; }
	inline void set_delayedEvent_15(DelayedEvent_t1624700828 * value)
	{
		___delayedEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___delayedEvent_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
