#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "PlayMaker_HutongGames_PlayMaker_InterpolationType1288321096.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FloatInterpolate
struct  FloatInterpolate_t1441141591  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.InterpolationType HutongGames.PlayMaker.Actions.FloatInterpolate::mode
	int32_t ___mode_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatInterpolate::fromFloat
	FsmFloat_t937133978 * ___fromFloat_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatInterpolate::toFloat
	FsmFloat_t937133978 * ___toFloat_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatInterpolate::time
	FsmFloat_t937133978 * ___time_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatInterpolate::storeResult
	FsmFloat_t937133978 * ___storeResult_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FloatInterpolate::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_16;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatInterpolate::realTime
	bool ___realTime_17;
	// System.Single HutongGames.PlayMaker.Actions.FloatInterpolate::startTime
	float ___startTime_18;
	// System.Single HutongGames.PlayMaker.Actions.FloatInterpolate::currentTime
	float ___currentTime_19;

public:
	inline static int32_t get_offset_of_mode_11() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___mode_11)); }
	inline int32_t get_mode_11() const { return ___mode_11; }
	inline int32_t* get_address_of_mode_11() { return &___mode_11; }
	inline void set_mode_11(int32_t value)
	{
		___mode_11 = value;
	}

	inline static int32_t get_offset_of_fromFloat_12() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___fromFloat_12)); }
	inline FsmFloat_t937133978 * get_fromFloat_12() const { return ___fromFloat_12; }
	inline FsmFloat_t937133978 ** get_address_of_fromFloat_12() { return &___fromFloat_12; }
	inline void set_fromFloat_12(FsmFloat_t937133978 * value)
	{
		___fromFloat_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromFloat_12, value);
	}

	inline static int32_t get_offset_of_toFloat_13() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___toFloat_13)); }
	inline FsmFloat_t937133978 * get_toFloat_13() const { return ___toFloat_13; }
	inline FsmFloat_t937133978 ** get_address_of_toFloat_13() { return &___toFloat_13; }
	inline void set_toFloat_13(FsmFloat_t937133978 * value)
	{
		___toFloat_13 = value;
		Il2CppCodeGenWriteBarrier(&___toFloat_13, value);
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___time_14)); }
	inline FsmFloat_t937133978 * get_time_14() const { return ___time_14; }
	inline FsmFloat_t937133978 ** get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(FsmFloat_t937133978 * value)
	{
		___time_14 = value;
		Il2CppCodeGenWriteBarrier(&___time_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___storeResult_15)); }
	inline FsmFloat_t937133978 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmFloat_t937133978 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmFloat_t937133978 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}

	inline static int32_t get_offset_of_finishEvent_16() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___finishEvent_16)); }
	inline FsmEvent_t1258573736 * get_finishEvent_16() const { return ___finishEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_16() { return &___finishEvent_16; }
	inline void set_finishEvent_16(FsmEvent_t1258573736 * value)
	{
		___finishEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_16, value);
	}

	inline static int32_t get_offset_of_realTime_17() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___realTime_17)); }
	inline bool get_realTime_17() const { return ___realTime_17; }
	inline bool* get_address_of_realTime_17() { return &___realTime_17; }
	inline void set_realTime_17(bool value)
	{
		___realTime_17 = value;
	}

	inline static int32_t get_offset_of_startTime_18() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___startTime_18)); }
	inline float get_startTime_18() const { return ___startTime_18; }
	inline float* get_address_of_startTime_18() { return &___startTime_18; }
	inline void set_startTime_18(float value)
	{
		___startTime_18 = value;
	}

	inline static int32_t get_offset_of_currentTime_19() { return static_cast<int32_t>(offsetof(FloatInterpolate_t1441141591, ___currentTime_19)); }
	inline float get_currentTime_19() const { return ___currentTime_19; }
	inline float* get_address_of_currentTime_19() { return &___currentTime_19; }
	inline void set_currentTime_19(float value)
	{
		___currentTime_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
