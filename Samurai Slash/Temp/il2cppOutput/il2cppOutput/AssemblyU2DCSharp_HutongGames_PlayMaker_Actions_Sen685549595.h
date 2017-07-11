#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.DelayedEvent
struct DelayedEvent_t1624700828;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SendRandomEvent
struct  SendRandomEvent_t685549595  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.SendRandomEvent::events
	FsmEventU5BU5D_t287863993* ___events_11;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.SendRandomEvent::weights
	FsmFloatU5BU5D_t4177556671* ___weights_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SendRandomEvent::delay
	FsmFloat_t937133978 * ___delay_13;
	// HutongGames.PlayMaker.DelayedEvent HutongGames.PlayMaker.Actions.SendRandomEvent::delayedEvent
	DelayedEvent_t1624700828 * ___delayedEvent_14;

public:
	inline static int32_t get_offset_of_events_11() { return static_cast<int32_t>(offsetof(SendRandomEvent_t685549595, ___events_11)); }
	inline FsmEventU5BU5D_t287863993* get_events_11() const { return ___events_11; }
	inline FsmEventU5BU5D_t287863993** get_address_of_events_11() { return &___events_11; }
	inline void set_events_11(FsmEventU5BU5D_t287863993* value)
	{
		___events_11 = value;
		Il2CppCodeGenWriteBarrier(&___events_11, value);
	}

	inline static int32_t get_offset_of_weights_12() { return static_cast<int32_t>(offsetof(SendRandomEvent_t685549595, ___weights_12)); }
	inline FsmFloatU5BU5D_t4177556671* get_weights_12() const { return ___weights_12; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_weights_12() { return &___weights_12; }
	inline void set_weights_12(FsmFloatU5BU5D_t4177556671* value)
	{
		___weights_12 = value;
		Il2CppCodeGenWriteBarrier(&___weights_12, value);
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(SendRandomEvent_t685549595, ___delay_13)); }
	inline FsmFloat_t937133978 * get_delay_13() const { return ___delay_13; }
	inline FsmFloat_t937133978 ** get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(FsmFloat_t937133978 * value)
	{
		___delay_13 = value;
		Il2CppCodeGenWriteBarrier(&___delay_13, value);
	}

	inline static int32_t get_offset_of_delayedEvent_14() { return static_cast<int32_t>(offsetof(SendRandomEvent_t685549595, ___delayedEvent_14)); }
	inline DelayedEvent_t1624700828 * get_delayedEvent_14() const { return ___delayedEvent_14; }
	inline DelayedEvent_t1624700828 ** get_address_of_delayedEvent_14() { return &___delayedEvent_14; }
	inline void set_delayedEvent_14(DelayedEvent_t1624700828 * value)
	{
		___delayedEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___delayedEvent_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
