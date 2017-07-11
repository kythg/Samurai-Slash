#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_DeviceOrientation895964084.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DeviceOrientationEvent
struct  DeviceOrientationEvent_t1359631428  : public FsmStateAction_t2862378169
{
public:
	// UnityEngine.DeviceOrientation HutongGames.PlayMaker.Actions.DeviceOrientationEvent::orientation
	int32_t ___orientation_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.DeviceOrientationEvent::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_12;
	// System.Boolean HutongGames.PlayMaker.Actions.DeviceOrientationEvent::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_orientation_11() { return static_cast<int32_t>(offsetof(DeviceOrientationEvent_t1359631428, ___orientation_11)); }
	inline int32_t get_orientation_11() const { return ___orientation_11; }
	inline int32_t* get_address_of_orientation_11() { return &___orientation_11; }
	inline void set_orientation_11(int32_t value)
	{
		___orientation_11 = value;
	}

	inline static int32_t get_offset_of_sendEvent_12() { return static_cast<int32_t>(offsetof(DeviceOrientationEvent_t1359631428, ___sendEvent_12)); }
	inline FsmEvent_t1258573736 * get_sendEvent_12() const { return ___sendEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_12() { return &___sendEvent_12; }
	inline void set_sendEvent_12(FsmEvent_t1258573736 * value)
	{
		___sendEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(DeviceOrientationEvent_t1359631428, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
