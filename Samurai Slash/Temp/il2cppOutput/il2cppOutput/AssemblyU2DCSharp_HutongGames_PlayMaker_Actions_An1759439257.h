#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmAnimationCurve
struct FsmAnimationCurve_t326747561;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimateFloat
struct  AnimateFloat_t1759439257  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateFloat::animCurve
	FsmAnimationCurve_t326747561 * ___animCurve_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimateFloat::floatVariable
	FsmFloat_t937133978 * ___floatVariable_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AnimateFloat::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_13;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateFloat::realTime
	bool ___realTime_14;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFloat::startTime
	float ___startTime_15;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFloat::currentTime
	float ___currentTime_16;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFloat::endTime
	float ___endTime_17;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateFloat::looping
	bool ___looping_18;

public:
	inline static int32_t get_offset_of_animCurve_11() { return static_cast<int32_t>(offsetof(AnimateFloat_t1759439257, ___animCurve_11)); }
	inline FsmAnimationCurve_t326747561 * get_animCurve_11() const { return ___animCurve_11; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_animCurve_11() { return &___animCurve_11; }
	inline void set_animCurve_11(FsmAnimationCurve_t326747561 * value)
	{
		___animCurve_11 = value;
		Il2CppCodeGenWriteBarrier(&___animCurve_11, value);
	}

	inline static int32_t get_offset_of_floatVariable_12() { return static_cast<int32_t>(offsetof(AnimateFloat_t1759439257, ___floatVariable_12)); }
	inline FsmFloat_t937133978 * get_floatVariable_12() const { return ___floatVariable_12; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_12() { return &___floatVariable_12; }
	inline void set_floatVariable_12(FsmFloat_t937133978 * value)
	{
		___floatVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_12, value);
	}

	inline static int32_t get_offset_of_finishEvent_13() { return static_cast<int32_t>(offsetof(AnimateFloat_t1759439257, ___finishEvent_13)); }
	inline FsmEvent_t1258573736 * get_finishEvent_13() const { return ___finishEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_13() { return &___finishEvent_13; }
	inline void set_finishEvent_13(FsmEvent_t1258573736 * value)
	{
		___finishEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_13, value);
	}

	inline static int32_t get_offset_of_realTime_14() { return static_cast<int32_t>(offsetof(AnimateFloat_t1759439257, ___realTime_14)); }
	inline bool get_realTime_14() const { return ___realTime_14; }
	inline bool* get_address_of_realTime_14() { return &___realTime_14; }
	inline void set_realTime_14(bool value)
	{
		___realTime_14 = value;
	}

	inline static int32_t get_offset_of_startTime_15() { return static_cast<int32_t>(offsetof(AnimateFloat_t1759439257, ___startTime_15)); }
	inline float get_startTime_15() const { return ___startTime_15; }
	inline float* get_address_of_startTime_15() { return &___startTime_15; }
	inline void set_startTime_15(float value)
	{
		___startTime_15 = value;
	}

	inline static int32_t get_offset_of_currentTime_16() { return static_cast<int32_t>(offsetof(AnimateFloat_t1759439257, ___currentTime_16)); }
	inline float get_currentTime_16() const { return ___currentTime_16; }
	inline float* get_address_of_currentTime_16() { return &___currentTime_16; }
	inline void set_currentTime_16(float value)
	{
		___currentTime_16 = value;
	}

	inline static int32_t get_offset_of_endTime_17() { return static_cast<int32_t>(offsetof(AnimateFloat_t1759439257, ___endTime_17)); }
	inline float get_endTime_17() const { return ___endTime_17; }
	inline float* get_address_of_endTime_17() { return &___endTime_17; }
	inline void set_endTime_17(float value)
	{
		___endTime_17 = value;
	}

	inline static int32_t get_offset_of_looping_18() { return static_cast<int32_t>(offsetof(AnimateFloat_t1759439257, ___looping_18)); }
	inline bool get_looping_18() const { return ___looping_18; }
	inline bool* get_address_of_looping_18() { return &___looping_18; }
	inline void set_looping_18(bool value)
	{
		___looping_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
