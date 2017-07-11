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

// HutongGames.PlayMaker.Actions.StartLocationServiceUpdates
struct  StartLocationServiceUpdates_t3280090556  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.StartLocationServiceUpdates::maxWait
	FsmFloat_t937133978 * ___maxWait_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.StartLocationServiceUpdates::desiredAccuracy
	FsmFloat_t937133978 * ___desiredAccuracy_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.StartLocationServiceUpdates::updateDistance
	FsmFloat_t937133978 * ___updateDistance_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.StartLocationServiceUpdates::successEvent
	FsmEvent_t1258573736 * ___successEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.StartLocationServiceUpdates::failedEvent
	FsmEvent_t1258573736 * ___failedEvent_15;
	// System.Single HutongGames.PlayMaker.Actions.StartLocationServiceUpdates::startTime
	float ___startTime_16;

public:
	inline static int32_t get_offset_of_maxWait_11() { return static_cast<int32_t>(offsetof(StartLocationServiceUpdates_t3280090556, ___maxWait_11)); }
	inline FsmFloat_t937133978 * get_maxWait_11() const { return ___maxWait_11; }
	inline FsmFloat_t937133978 ** get_address_of_maxWait_11() { return &___maxWait_11; }
	inline void set_maxWait_11(FsmFloat_t937133978 * value)
	{
		___maxWait_11 = value;
		Il2CppCodeGenWriteBarrier(&___maxWait_11, value);
	}

	inline static int32_t get_offset_of_desiredAccuracy_12() { return static_cast<int32_t>(offsetof(StartLocationServiceUpdates_t3280090556, ___desiredAccuracy_12)); }
	inline FsmFloat_t937133978 * get_desiredAccuracy_12() const { return ___desiredAccuracy_12; }
	inline FsmFloat_t937133978 ** get_address_of_desiredAccuracy_12() { return &___desiredAccuracy_12; }
	inline void set_desiredAccuracy_12(FsmFloat_t937133978 * value)
	{
		___desiredAccuracy_12 = value;
		Il2CppCodeGenWriteBarrier(&___desiredAccuracy_12, value);
	}

	inline static int32_t get_offset_of_updateDistance_13() { return static_cast<int32_t>(offsetof(StartLocationServiceUpdates_t3280090556, ___updateDistance_13)); }
	inline FsmFloat_t937133978 * get_updateDistance_13() const { return ___updateDistance_13; }
	inline FsmFloat_t937133978 ** get_address_of_updateDistance_13() { return &___updateDistance_13; }
	inline void set_updateDistance_13(FsmFloat_t937133978 * value)
	{
		___updateDistance_13 = value;
		Il2CppCodeGenWriteBarrier(&___updateDistance_13, value);
	}

	inline static int32_t get_offset_of_successEvent_14() { return static_cast<int32_t>(offsetof(StartLocationServiceUpdates_t3280090556, ___successEvent_14)); }
	inline FsmEvent_t1258573736 * get_successEvent_14() const { return ___successEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_successEvent_14() { return &___successEvent_14; }
	inline void set_successEvent_14(FsmEvent_t1258573736 * value)
	{
		___successEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___successEvent_14, value);
	}

	inline static int32_t get_offset_of_failedEvent_15() { return static_cast<int32_t>(offsetof(StartLocationServiceUpdates_t3280090556, ___failedEvent_15)); }
	inline FsmEvent_t1258573736 * get_failedEvent_15() const { return ___failedEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_failedEvent_15() { return &___failedEvent_15; }
	inline void set_failedEvent_15(FsmEvent_t1258573736 * value)
	{
		___failedEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___failedEvent_15, value);
	}

	inline static int32_t get_offset_of_startTime_16() { return static_cast<int32_t>(offsetof(StartLocationServiceUpdates_t3280090556, ___startTime_16)); }
	inline float get_startTime_16() const { return ___startTime_16; }
	inline float* get_address_of_startTime_16() { return &___startTime_16; }
	inline void set_startTime_16(float value)
	{
		___startTime_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
