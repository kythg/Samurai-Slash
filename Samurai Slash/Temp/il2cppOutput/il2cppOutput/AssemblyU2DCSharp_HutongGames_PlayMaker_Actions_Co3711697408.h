#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmColor[]
struct FsmColorU5BU5D_t4100123680;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ColorInterpolate
struct  ColorInterpolate_t3711697408  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor[] HutongGames.PlayMaker.Actions.ColorInterpolate::colors
	FsmColorU5BU5D_t4100123680* ___colors_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ColorInterpolate::time
	FsmFloat_t937133978 * ___time_12;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.ColorInterpolate::storeColor
	FsmColor_t118301965 * ___storeColor_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ColorInterpolate::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_14;
	// System.Boolean HutongGames.PlayMaker.Actions.ColorInterpolate::realTime
	bool ___realTime_15;
	// System.Single HutongGames.PlayMaker.Actions.ColorInterpolate::startTime
	float ___startTime_16;
	// System.Single HutongGames.PlayMaker.Actions.ColorInterpolate::currentTime
	float ___currentTime_17;

public:
	inline static int32_t get_offset_of_colors_11() { return static_cast<int32_t>(offsetof(ColorInterpolate_t3711697408, ___colors_11)); }
	inline FsmColorU5BU5D_t4100123680* get_colors_11() const { return ___colors_11; }
	inline FsmColorU5BU5D_t4100123680** get_address_of_colors_11() { return &___colors_11; }
	inline void set_colors_11(FsmColorU5BU5D_t4100123680* value)
	{
		___colors_11 = value;
		Il2CppCodeGenWriteBarrier(&___colors_11, value);
	}

	inline static int32_t get_offset_of_time_12() { return static_cast<int32_t>(offsetof(ColorInterpolate_t3711697408, ___time_12)); }
	inline FsmFloat_t937133978 * get_time_12() const { return ___time_12; }
	inline FsmFloat_t937133978 ** get_address_of_time_12() { return &___time_12; }
	inline void set_time_12(FsmFloat_t937133978 * value)
	{
		___time_12 = value;
		Il2CppCodeGenWriteBarrier(&___time_12, value);
	}

	inline static int32_t get_offset_of_storeColor_13() { return static_cast<int32_t>(offsetof(ColorInterpolate_t3711697408, ___storeColor_13)); }
	inline FsmColor_t118301965 * get_storeColor_13() const { return ___storeColor_13; }
	inline FsmColor_t118301965 ** get_address_of_storeColor_13() { return &___storeColor_13; }
	inline void set_storeColor_13(FsmColor_t118301965 * value)
	{
		___storeColor_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeColor_13, value);
	}

	inline static int32_t get_offset_of_finishEvent_14() { return static_cast<int32_t>(offsetof(ColorInterpolate_t3711697408, ___finishEvent_14)); }
	inline FsmEvent_t1258573736 * get_finishEvent_14() const { return ___finishEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_14() { return &___finishEvent_14; }
	inline void set_finishEvent_14(FsmEvent_t1258573736 * value)
	{
		___finishEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_14, value);
	}

	inline static int32_t get_offset_of_realTime_15() { return static_cast<int32_t>(offsetof(ColorInterpolate_t3711697408, ___realTime_15)); }
	inline bool get_realTime_15() const { return ___realTime_15; }
	inline bool* get_address_of_realTime_15() { return &___realTime_15; }
	inline void set_realTime_15(bool value)
	{
		___realTime_15 = value;
	}

	inline static int32_t get_offset_of_startTime_16() { return static_cast<int32_t>(offsetof(ColorInterpolate_t3711697408, ___startTime_16)); }
	inline float get_startTime_16() const { return ___startTime_16; }
	inline float* get_address_of_startTime_16() { return &___startTime_16; }
	inline void set_startTime_16(float value)
	{
		___startTime_16 = value;
	}

	inline static int32_t get_offset_of_currentTime_17() { return static_cast<int32_t>(offsetof(ColorInterpolate_t3711697408, ___currentTime_17)); }
	inline float get_currentTime_17() const { return ___currentTime_17; }
	inline float* get_address_of_currentTime_17() { return &___currentTime_17; }
	inline void set_currentTime_17(float value)
	{
		___currentTime_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
