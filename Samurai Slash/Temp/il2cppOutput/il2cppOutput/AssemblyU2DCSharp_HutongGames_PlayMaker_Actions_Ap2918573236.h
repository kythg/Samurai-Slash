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

// HutongGames.PlayMaker.Actions.ApplicationRunInBackground
struct  ApplicationRunInBackground_t2918573236  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ApplicationRunInBackground::runInBackground
	FsmBool_t664485696 * ___runInBackground_11;

public:
	inline static int32_t get_offset_of_runInBackground_11() { return static_cast<int32_t>(offsetof(ApplicationRunInBackground_t2918573236, ___runInBackground_11)); }
	inline FsmBool_t664485696 * get_runInBackground_11() const { return ___runInBackground_11; }
	inline FsmBool_t664485696 ** get_address_of_runInBackground_11() { return &___runInBackground_11; }
	inline void set_runInBackground_11(FsmBool_t664485696 * value)
	{
		___runInBackground_11 = value;
		Il2CppCodeGenWriteBarrier(&___runInBackground_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
