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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.DelayedEvent
struct DelayedEvent_t1624700828;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RandomEvent
struct  RandomEvent_t1725515053  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RandomEvent::delay
	FsmFloat_t937133978 * ___delay_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RandomEvent::noRepeat
	FsmBool_t664485696 * ___noRepeat_12;
	// HutongGames.PlayMaker.DelayedEvent HutongGames.PlayMaker.Actions.RandomEvent::delayedEvent
	DelayedEvent_t1624700828 * ___delayedEvent_13;
	// System.Int32 HutongGames.PlayMaker.Actions.RandomEvent::randomEventIndex
	int32_t ___randomEventIndex_14;
	// System.Int32 HutongGames.PlayMaker.Actions.RandomEvent::lastEventIndex
	int32_t ___lastEventIndex_15;

public:
	inline static int32_t get_offset_of_delay_11() { return static_cast<int32_t>(offsetof(RandomEvent_t1725515053, ___delay_11)); }
	inline FsmFloat_t937133978 * get_delay_11() const { return ___delay_11; }
	inline FsmFloat_t937133978 ** get_address_of_delay_11() { return &___delay_11; }
	inline void set_delay_11(FsmFloat_t937133978 * value)
	{
		___delay_11 = value;
		Il2CppCodeGenWriteBarrier(&___delay_11, value);
	}

	inline static int32_t get_offset_of_noRepeat_12() { return static_cast<int32_t>(offsetof(RandomEvent_t1725515053, ___noRepeat_12)); }
	inline FsmBool_t664485696 * get_noRepeat_12() const { return ___noRepeat_12; }
	inline FsmBool_t664485696 ** get_address_of_noRepeat_12() { return &___noRepeat_12; }
	inline void set_noRepeat_12(FsmBool_t664485696 * value)
	{
		___noRepeat_12 = value;
		Il2CppCodeGenWriteBarrier(&___noRepeat_12, value);
	}

	inline static int32_t get_offset_of_delayedEvent_13() { return static_cast<int32_t>(offsetof(RandomEvent_t1725515053, ___delayedEvent_13)); }
	inline DelayedEvent_t1624700828 * get_delayedEvent_13() const { return ___delayedEvent_13; }
	inline DelayedEvent_t1624700828 ** get_address_of_delayedEvent_13() { return &___delayedEvent_13; }
	inline void set_delayedEvent_13(DelayedEvent_t1624700828 * value)
	{
		___delayedEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___delayedEvent_13, value);
	}

	inline static int32_t get_offset_of_randomEventIndex_14() { return static_cast<int32_t>(offsetof(RandomEvent_t1725515053, ___randomEventIndex_14)); }
	inline int32_t get_randomEventIndex_14() const { return ___randomEventIndex_14; }
	inline int32_t* get_address_of_randomEventIndex_14() { return &___randomEventIndex_14; }
	inline void set_randomEventIndex_14(int32_t value)
	{
		___randomEventIndex_14 = value;
	}

	inline static int32_t get_offset_of_lastEventIndex_15() { return static_cast<int32_t>(offsetof(RandomEvent_t1725515053, ___lastEventIndex_15)); }
	inline int32_t get_lastEventIndex_15() const { return ___lastEventIndex_15; }
	inline int32_t* get_address_of_lastEventIndex_15() { return &___lastEventIndex_15; }
	inline void set_lastEventIndex_15(int32_t value)
	{
		___lastEventIndex_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
