#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DestroySelf
struct  DestroySelf_t677434704  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.DestroySelf::detachChildren
	FsmBool_t664485696 * ___detachChildren_11;

public:
	inline static int32_t get_offset_of_detachChildren_11() { return static_cast<int32_t>(offsetof(DestroySelf_t677434704, ___detachChildren_11)); }
	inline FsmBool_t664485696 * get_detachChildren_11() const { return ___detachChildren_11; }
	inline FsmBool_t664485696 ** get_address_of_detachChildren_11() { return &___detachChildren_11; }
	inline void set_detachChildren_11(FsmBool_t664485696 * value)
	{
		___detachChildren_11 = value;
		Il2CppCodeGenWriteBarrier(&___detachChildren_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
