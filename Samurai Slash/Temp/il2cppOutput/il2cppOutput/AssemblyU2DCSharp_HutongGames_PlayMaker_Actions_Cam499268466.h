#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CameraFadeIn
struct  CameraFadeIn_t499268466  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.CameraFadeIn::color
	FsmColor_t118301965 * ___color_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.CameraFadeIn::time
	FsmFloat_t937133978 * ___time_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.CameraFadeIn::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_13;
	// System.Boolean HutongGames.PlayMaker.Actions.CameraFadeIn::realTime
	bool ___realTime_14;
	// System.Single HutongGames.PlayMaker.Actions.CameraFadeIn::startTime
	float ___startTime_15;
	// System.Single HutongGames.PlayMaker.Actions.CameraFadeIn::currentTime
	float ___currentTime_16;
	// UnityEngine.Color HutongGames.PlayMaker.Actions.CameraFadeIn::colorLerp
	Color_t2020392075  ___colorLerp_17;

public:
	inline static int32_t get_offset_of_color_11() { return static_cast<int32_t>(offsetof(CameraFadeIn_t499268466, ___color_11)); }
	inline FsmColor_t118301965 * get_color_11() const { return ___color_11; }
	inline FsmColor_t118301965 ** get_address_of_color_11() { return &___color_11; }
	inline void set_color_11(FsmColor_t118301965 * value)
	{
		___color_11 = value;
		Il2CppCodeGenWriteBarrier(&___color_11, value);
	}

	inline static int32_t get_offset_of_time_12() { return static_cast<int32_t>(offsetof(CameraFadeIn_t499268466, ___time_12)); }
	inline FsmFloat_t937133978 * get_time_12() const { return ___time_12; }
	inline FsmFloat_t937133978 ** get_address_of_time_12() { return &___time_12; }
	inline void set_time_12(FsmFloat_t937133978 * value)
	{
		___time_12 = value;
		Il2CppCodeGenWriteBarrier(&___time_12, value);
	}

	inline static int32_t get_offset_of_finishEvent_13() { return static_cast<int32_t>(offsetof(CameraFadeIn_t499268466, ___finishEvent_13)); }
	inline FsmEvent_t1258573736 * get_finishEvent_13() const { return ___finishEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_13() { return &___finishEvent_13; }
	inline void set_finishEvent_13(FsmEvent_t1258573736 * value)
	{
		___finishEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_13, value);
	}

	inline static int32_t get_offset_of_realTime_14() { return static_cast<int32_t>(offsetof(CameraFadeIn_t499268466, ___realTime_14)); }
	inline bool get_realTime_14() const { return ___realTime_14; }
	inline bool* get_address_of_realTime_14() { return &___realTime_14; }
	inline void set_realTime_14(bool value)
	{
		___realTime_14 = value;
	}

	inline static int32_t get_offset_of_startTime_15() { return static_cast<int32_t>(offsetof(CameraFadeIn_t499268466, ___startTime_15)); }
	inline float get_startTime_15() const { return ___startTime_15; }
	inline float* get_address_of_startTime_15() { return &___startTime_15; }
	inline void set_startTime_15(float value)
	{
		___startTime_15 = value;
	}

	inline static int32_t get_offset_of_currentTime_16() { return static_cast<int32_t>(offsetof(CameraFadeIn_t499268466, ___currentTime_16)); }
	inline float get_currentTime_16() const { return ___currentTime_16; }
	inline float* get_address_of_currentTime_16() { return &___currentTime_16; }
	inline void set_currentTime_16(float value)
	{
		___currentTime_16 = value;
	}

	inline static int32_t get_offset_of_colorLerp_17() { return static_cast<int32_t>(offsetof(CameraFadeIn_t499268466, ___colorLerp_17)); }
	inline Color_t2020392075  get_colorLerp_17() const { return ___colorLerp_17; }
	inline Color_t2020392075 * get_address_of_colorLerp_17() { return &___colorLerp_17; }
	inline void set_colorLerp_17(Color_t2020392075  value)
	{
		___colorLerp_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
