#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_GU3820394922.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUIButton
struct  GUIButton_t904156239  : public GUIContentAction_t3820394922
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GUIButton::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_23;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GUIButton::storeButtonState
	FsmBool_t664485696 * ___storeButtonState_24;

public:
	inline static int32_t get_offset_of_sendEvent_23() { return static_cast<int32_t>(offsetof(GUIButton_t904156239, ___sendEvent_23)); }
	inline FsmEvent_t1258573736 * get_sendEvent_23() const { return ___sendEvent_23; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_23() { return &___sendEvent_23; }
	inline void set_sendEvent_23(FsmEvent_t1258573736 * value)
	{
		___sendEvent_23 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_23, value);
	}

	inline static int32_t get_offset_of_storeButtonState_24() { return static_cast<int32_t>(offsetof(GUIButton_t904156239, ___storeButtonState_24)); }
	inline FsmBool_t664485696 * get_storeButtonState_24() const { return ___storeButtonState_24; }
	inline FsmBool_t664485696 ** get_address_of_storeButtonState_24() { return &___storeButtonState_24; }
	inline void set_storeButtonState_24(FsmBool_t664485696 * value)
	{
		___storeButtonState_24 = value;
		Il2CppCodeGenWriteBarrier(&___storeButtonState_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
