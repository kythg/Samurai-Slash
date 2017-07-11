#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.NextFrameEvent
struct  NextFrameEvent_t1330033076  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.NextFrameEvent::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_11;

public:
	inline static int32_t get_offset_of_sendEvent_11() { return static_cast<int32_t>(offsetof(NextFrameEvent_t1330033076, ___sendEvent_11)); }
	inline FsmEvent_t1258573736 * get_sendEvent_11() const { return ___sendEvent_11; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_11() { return &___sendEvent_11; }
	inline void set_sendEvent_11(FsmEvent_t1258573736 * value)
	{
		___sendEvent_11 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
