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

// HutongGames.PlayMaker.Actions.DeviceShakeEvent
struct  DeviceShakeEvent_t2012840686  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DeviceShakeEvent::shakeThreshold
	FsmFloat_t937133978 * ___shakeThreshold_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.DeviceShakeEvent::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_12;

public:
	inline static int32_t get_offset_of_shakeThreshold_11() { return static_cast<int32_t>(offsetof(DeviceShakeEvent_t2012840686, ___shakeThreshold_11)); }
	inline FsmFloat_t937133978 * get_shakeThreshold_11() const { return ___shakeThreshold_11; }
	inline FsmFloat_t937133978 ** get_address_of_shakeThreshold_11() { return &___shakeThreshold_11; }
	inline void set_shakeThreshold_11(FsmFloat_t937133978 * value)
	{
		___shakeThreshold_11 = value;
		Il2CppCodeGenWriteBarrier(&___shakeThreshold_11, value);
	}

	inline static int32_t get_offset_of_sendEvent_12() { return static_cast<int32_t>(offsetof(DeviceShakeEvent_t2012840686, ___sendEvent_12)); }
	inline FsmEvent_t1258573736 * get_sendEvent_12() const { return ___sendEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_12() { return &___sendEvent_12; }
	inline void set_sendEvent_12(FsmEvent_t1258573736 * value)
	{
		___sendEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
