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

// HutongGames.PlayMaker.Actions.Wait
struct  Wait_t98790123  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Wait::time
	FsmFloat_t937133978 * ___time_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.Wait::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_12;
	// System.Boolean HutongGames.PlayMaker.Actions.Wait::realTime
	bool ___realTime_13;
	// System.Single HutongGames.PlayMaker.Actions.Wait::startTime
	float ___startTime_14;
	// System.Single HutongGames.PlayMaker.Actions.Wait::timer
	float ___timer_15;

public:
	inline static int32_t get_offset_of_time_11() { return static_cast<int32_t>(offsetof(Wait_t98790123, ___time_11)); }
	inline FsmFloat_t937133978 * get_time_11() const { return ___time_11; }
	inline FsmFloat_t937133978 ** get_address_of_time_11() { return &___time_11; }
	inline void set_time_11(FsmFloat_t937133978 * value)
	{
		___time_11 = value;
		Il2CppCodeGenWriteBarrier(&___time_11, value);
	}

	inline static int32_t get_offset_of_finishEvent_12() { return static_cast<int32_t>(offsetof(Wait_t98790123, ___finishEvent_12)); }
	inline FsmEvent_t1258573736 * get_finishEvent_12() const { return ___finishEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_12() { return &___finishEvent_12; }
	inline void set_finishEvent_12(FsmEvent_t1258573736 * value)
	{
		___finishEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_12, value);
	}

	inline static int32_t get_offset_of_realTime_13() { return static_cast<int32_t>(offsetof(Wait_t98790123, ___realTime_13)); }
	inline bool get_realTime_13() const { return ___realTime_13; }
	inline bool* get_address_of_realTime_13() { return &___realTime_13; }
	inline void set_realTime_13(bool value)
	{
		___realTime_13 = value;
	}

	inline static int32_t get_offset_of_startTime_14() { return static_cast<int32_t>(offsetof(Wait_t98790123, ___startTime_14)); }
	inline float get_startTime_14() const { return ___startTime_14; }
	inline float* get_address_of_startTime_14() { return &___startTime_14; }
	inline void set_startTime_14(float value)
	{
		___startTime_14 = value;
	}

	inline static int32_t get_offset_of_timer_15() { return static_cast<int32_t>(offsetof(Wait_t98790123, ___timer_15)); }
	inline float get_timer_15() const { return ___timer_15; }
	inline float* get_address_of_timer_15() { return &___timer_15; }
	inline void set_timer_15(float value)
	{
		___timer_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
