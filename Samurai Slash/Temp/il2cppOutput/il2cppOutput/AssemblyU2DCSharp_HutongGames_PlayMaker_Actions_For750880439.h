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

// HutongGames.PlayMaker.Actions.ForwardAllEvents
struct  ForwardAllEvents_t750880439  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Actions.ForwardAllEvents::forwardTo
	FsmEventTarget_t172293745 * ___forwardTo_11;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.ForwardAllEvents::exceptThese
	FsmEventU5BU5D_t287863993* ___exceptThese_12;
	// System.Boolean HutongGames.PlayMaker.Actions.ForwardAllEvents::eatEvents
	bool ___eatEvents_13;

public:
	inline static int32_t get_offset_of_forwardTo_11() { return static_cast<int32_t>(offsetof(ForwardAllEvents_t750880439, ___forwardTo_11)); }
	inline FsmEventTarget_t172293745 * get_forwardTo_11() const { return ___forwardTo_11; }
	inline FsmEventTarget_t172293745 ** get_address_of_forwardTo_11() { return &___forwardTo_11; }
	inline void set_forwardTo_11(FsmEventTarget_t172293745 * value)
	{
		___forwardTo_11 = value;
		Il2CppCodeGenWriteBarrier(&___forwardTo_11, value);
	}

	inline static int32_t get_offset_of_exceptThese_12() { return static_cast<int32_t>(offsetof(ForwardAllEvents_t750880439, ___exceptThese_12)); }
	inline FsmEventU5BU5D_t287863993* get_exceptThese_12() const { return ___exceptThese_12; }
	inline FsmEventU5BU5D_t287863993** get_address_of_exceptThese_12() { return &___exceptThese_12; }
	inline void set_exceptThese_12(FsmEventU5BU5D_t287863993* value)
	{
		___exceptThese_12 = value;
		Il2CppCodeGenWriteBarrier(&___exceptThese_12, value);
	}

	inline static int32_t get_offset_of_eatEvents_13() { return static_cast<int32_t>(offsetof(ForwardAllEvents_t750880439, ___eatEvents_13)); }
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
