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

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector3Interpolate
struct  Vector3Interpolate_t1959536989  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.InterpolationType HutongGames.PlayMaker.Actions.Vector3Interpolate::mode
	int32_t ___mode_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Interpolate::fromVector
	FsmVector3_t3996534004 * ___fromVector_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Interpolate::toVector
	FsmVector3_t3996534004 * ___toVector_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector3Interpolate::time
	FsmFloat_t937133978 * ___time_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Interpolate::storeResult
	FsmVector3_t3996534004 * ___storeResult_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.Vector3Interpolate::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_16;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector3Interpolate::realTime
	bool ___realTime_17;
	// System.Single HutongGames.PlayMaker.Actions.Vector3Interpolate::startTime
	float ___startTime_18;
	// System.Single HutongGames.PlayMaker.Actions.Vector3Interpolate::currentTime
	float ___currentTime_19;

public:
	inline static int32_t get_offset_of_mode_11() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___mode_11)); }
	inline int32_t get_mode_11() const { return ___mode_11; }
	inline int32_t* get_address_of_mode_11() { return &___mode_11; }
	inline void set_mode_11(int32_t value)
	{
		___mode_11 = value;
	}

	inline static int32_t get_offset_of_fromVector_12() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___fromVector_12)); }
	inline FsmVector3_t3996534004 * get_fromVector_12() const { return ___fromVector_12; }
	inline FsmVector3_t3996534004 ** get_address_of_fromVector_12() { return &___fromVector_12; }
	inline void set_fromVector_12(FsmVector3_t3996534004 * value)
	{
		___fromVector_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromVector_12, value);
	}

	inline static int32_t get_offset_of_toVector_13() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___toVector_13)); }
	inline FsmVector3_t3996534004 * get_toVector_13() const { return ___toVector_13; }
	inline FsmVector3_t3996534004 ** get_address_of_toVector_13() { return &___toVector_13; }
	inline void set_toVector_13(FsmVector3_t3996534004 * value)
	{
		___toVector_13 = value;
		Il2CppCodeGenWriteBarrier(&___toVector_13, value);
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___time_14)); }
	inline FsmFloat_t937133978 * get_time_14() const { return ___time_14; }
	inline FsmFloat_t937133978 ** get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(FsmFloat_t937133978 * value)
	{
		___time_14 = value;
		Il2CppCodeGenWriteBarrier(&___time_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___storeResult_15)); }
	inline FsmVector3_t3996534004 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmVector3_t3996534004 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmVector3_t3996534004 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}

	inline static int32_t get_offset_of_finishEvent_16() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___finishEvent_16)); }
	inline FsmEvent_t1258573736 * get_finishEvent_16() const { return ___finishEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_16() { return &___finishEvent_16; }
	inline void set_finishEvent_16(FsmEvent_t1258573736 * value)
	{
		___finishEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_16, value);
	}

	inline static int32_t get_offset_of_realTime_17() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___realTime_17)); }
	inline bool get_realTime_17() const { return ___realTime_17; }
	inline bool* get_address_of_realTime_17() { return &___realTime_17; }
	inline void set_realTime_17(bool value)
	{
		___realTime_17 = value;
	}

	inline static int32_t get_offset_of_startTime_18() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___startTime_18)); }
	inline float get_startTime_18() const { return ___startTime_18; }
	inline float* get_address_of_startTime_18() { return &___startTime_18; }
	inline void set_startTime_18(float value)
	{
		___startTime_18 = value;
	}

	inline static int32_t get_offset_of_currentTime_19() { return static_cast<int32_t>(offsetof(Vector3Interpolate_t1959536989, ___currentTime_19)); }
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
