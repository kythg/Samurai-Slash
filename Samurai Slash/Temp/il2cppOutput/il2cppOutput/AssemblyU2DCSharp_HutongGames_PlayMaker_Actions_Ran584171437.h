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

// HutongGames.PlayMaker.Actions.RandomBool
struct  RandomBool_t584171437  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RandomBool::storeResult
	FsmBool_t664485696 * ___storeResult_11;

public:
	inline static int32_t get_offset_of_storeResult_11() { return static_cast<int32_t>(offsetof(RandomBool_t584171437, ___storeResult_11)); }
	inline FsmBool_t664485696 * get_storeResult_11() const { return ___storeResult_11; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_11() { return &___storeResult_11; }
	inline void set_storeResult_11(FsmBool_t664485696 * value)
	{
		___storeResult_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
