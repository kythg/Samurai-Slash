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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetEventTarget
struct  SetEventTarget_t3604402311  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Actions.SetEventTarget::eventTarget
	FsmEventTarget_t172293745 * ___eventTarget_11;

public:
	inline static int32_t get_offset_of_eventTarget_11() { return static_cast<int32_t>(offsetof(SetEventTarget_t3604402311, ___eventTarget_11)); }
	inline FsmEventTarget_t172293745 * get_eventTarget_11() const { return ___eventTarget_11; }
	inline FsmEventTarget_t172293745 ** get_address_of_eventTarget_11() { return &___eventTarget_11; }
	inline void set_eventTarget_11(FsmEventTarget_t172293745 * value)
	{
		___eventTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&___eventTarget_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
