#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.DelayedEvent
struct DelayedEvent_t1624700828;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SequenceEvent
struct  SequenceEvent_t1656293595  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SequenceEvent::delay
	FsmFloat_t937133978 * ___delay_11;
	// HutongGames.PlayMaker.DelayedEvent HutongGames.PlayMaker.Actions.SequenceEvent::delayedEvent
	DelayedEvent_t1624700828 * ___delayedEvent_12;
	// System.Int32 HutongGames.PlayMaker.Actions.SequenceEvent::eventIndex
	int32_t ___eventIndex_13;

public:
	inline static int32_t get_offset_of_delay_11() { return static_cast<int32_t>(offsetof(SequenceEvent_t1656293595, ___delay_11)); }
	inline FsmFloat_t937133978 * get_delay_11() const { return ___delay_11; }
	inline FsmFloat_t937133978 ** get_address_of_delay_11() { return &___delay_11; }
	inline void set_delay_11(FsmFloat_t937133978 * value)
	{
		___delay_11 = value;
		Il2CppCodeGenWriteBarrier(&___delay_11, value);
	}

	inline static int32_t get_offset_of_delayedEvent_12() { return static_cast<int32_t>(offsetof(SequenceEvent_t1656293595, ___delayedEvent_12)); }
	inline DelayedEvent_t1624700828 * get_delayedEvent_12() const { return ___delayedEvent_12; }
	inline DelayedEvent_t1624700828 ** get_address_of_delayedEvent_12() { return &___delayedEvent_12; }
	inline void set_delayedEvent_12(DelayedEvent_t1624700828 * value)
	{
		___delayedEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___delayedEvent_12, value);
	}

	inline static int32_t get_offset_of_eventIndex_13() { return static_cast<int32_t>(offsetof(SequenceEvent_t1656293595, ___eventIndex_13)); }
	inline int32_t get_eventIndex_13() const { return ___eventIndex_13; }
	inline int32_t* get_address_of_eventIndex_13() { return &___eventIndex_13; }
	inline void set_eventIndex_13(int32_t value)
	{
		___eventIndex_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
