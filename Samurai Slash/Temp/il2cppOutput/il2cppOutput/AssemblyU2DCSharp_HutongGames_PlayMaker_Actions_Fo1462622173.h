#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmEventTarget
struct FsmEventTarget_t172293745;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ForwardEvent
struct  ForwardEvent_t1462622173  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Actions.ForwardEvent::forwardTo
	FsmEventTarget_t172293745 * ___forwardTo_11;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.ForwardEvent::eventsToForward
	FsmEventU5BU5D_t287863993* ___eventsToForward_12;
	// System.Boolean HutongGames.PlayMaker.Actions.ForwardEvent::eatEvents
	bool ___eatEvents_13;

public:
	inline static int32_t get_offset_of_forwardTo_11() { return static_cast<int32_t>(offsetof(ForwardEvent_t1462622173, ___forwardTo_11)); }
	inline FsmEventTarget_t172293745 * get_forwardTo_11() const { return ___forwardTo_11; }
	inline FsmEventTarget_t172293745 ** get_address_of_forwardTo_11() { return &___forwardTo_11; }
	inline void set_forwardTo_11(FsmEventTarget_t172293745 * value)
	{
		___forwardTo_11 = value;
		Il2CppCodeGenWriteBarrier(&___forwardTo_11, value);
	}

	inline static int32_t get_offset_of_eventsToForward_12() { return static_cast<int32_t>(offsetof(ForwardEvent_t1462622173, ___eventsToForward_12)); }
	inline FsmEventU5BU5D_t287863993* get_eventsToForward_12() const { return ___eventsToForward_12; }
	inline FsmEventU5BU5D_t287863993** get_address_of_eventsToForward_12() { return &___eventsToForward_12; }
	inline void set_eventsToForward_12(FsmEventU5BU5D_t287863993* value)
	{
		___eventsToForward_12 = value;
		Il2CppCodeGenWriteBarrier(&___eventsToForward_12, value);
	}

	inline static int32_t get_offset_of_eatEvents_13() { return static_cast<int32_t>(offsetof(ForwardEvent_t1462622173, ___eatEvents_13)); }
	inline bool get_eatEvents_13() const { return ___eatEvents_13; }
	inline bool* get_address_of_eatEvents_13() { return &___eatEvents_13; }
	inline void set_eatEvents_13(bool value)
	{
		___eatEvents_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
