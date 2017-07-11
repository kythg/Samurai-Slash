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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RandomWait
struct  RandomWait_t3965164550  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RandomWait::min
	FsmFloat_t937133978 * ___min_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RandomWait::max
	FsmFloat_t937133978 * ___max_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.RandomWait::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_13;
	// System.Boolean HutongGames.PlayMaker.Actions.RandomWait::realTime
	bool ___realTime_14;
	// System.Single HutongGames.PlayMaker.Actions.RandomWait::startTime
	float ___startTime_15;
	// System.Single HutongGames.PlayMaker.Actions.RandomWait::timer
	float ___timer_16;
	// System.Single HutongGames.PlayMaker.Actions.RandomWait::time
	float ___time_17;

public:
	inline static int32_t get_offset_of_min_11() { return static_cast<int32_t>(offsetof(RandomWait_t3965164550, ___min_11)); }
	inline FsmFloat_t937133978 * get_min_11() const { return ___min_11; }
	inline FsmFloat_t937133978 ** get_address_of_min_11() { return &___min_11; }
	inline void set_min_11(FsmFloat_t937133978 * value)
	{
		___min_11 = value;
		Il2CppCodeGenWriteBarrier(&___min_11, value);
	}

	inline static int32_t get_offset_of_max_12() { return static_cast<int32_t>(offsetof(RandomWait_t3965164550, ___max_12)); }
	inline FsmFloat_t937133978 * get_max_12() const { return ___max_12; }
	inline FsmFloat_t937133978 ** get_address_of_max_12() { return &___max_12; }
	inline void set_max_12(FsmFloat_t937133978 * value)
	{
		___max_12 = value;
		Il2CppCodeGenWriteBarrier(&___max_12, value);
	}

	inline static int32_t get_offset_of_finishEvent_13() { return static_cast<int32_t>(offsetof(RandomWait_t3965164550, ___finishEvent_13)); }
	inline FsmEvent_t1258573736 * get_finishEvent_13() const { return ___finishEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_13() { return &___finishEvent_13; }
	inline void set_finishEvent_13(FsmEvent_t1258573736 * value)
	{
		___finishEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_13, value);
	}

	inline static int32_t get_offset_of_realTime_14() { return static_cast<int32_t>(offsetof(RandomWait_t3965164550, ___realTime_14)); }
	inline bool get_realTime_14() const { return ___realTime_14; }
	inline bool* get_address_of_realTime_14() { return &___realTime_14; }
	inline void set_realTime_14(bool value)
	{
		___realTime_14 = value;
	}

	inline static int32_t get_offset_of_startTime_15() { return static_cast<int32_t>(offsetof(RandomWait_t3965164550, ___startTime_15)); }
	inline float get_startTime_15() const { return ___startTime_15; }
	inline float* get_address_of_startTime_15() { return &___startTime_15; }
	inline void set_startTime_15(float value)
	{
		___startTime_15 = value;
	}

	inline static int32_t get_offset_of_timer_16() { return static_cast<int32_t>(offsetof(RandomWait_t3965164550, ___timer_16)); }
	inline float get_timer_16() const { return ___timer_16; }
	inline float* get_address_of_timer_16() { return &___timer_16; }
	inline void set_timer_16(float value)
	{
		___timer_16 = value;
	}

	inline static int32_t get_offset_of_time_17() { return static_cast<int32_t>(offsetof(RandomWait_t3965164550, ___time_17)); }
	inline float get_time_17() const { return ___time_17; }
	inline float* get_address_of_time_17() { return &___time_17; }
	inline void set_time_17(float value)
	{
		___time_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
