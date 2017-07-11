#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetPreviousStateName
struct  GetPreviousStateName_t1235151095  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetPreviousStateName::storeName
	FsmString_t2414474701 * ___storeName_11;

public:
	inline static int32_t get_offset_of_storeName_11() { return static_cast<int32_t>(offsetof(GetPreviousStateName_t1235151095, ___storeName_11)); }
	inline FsmString_t2414474701 * get_storeName_11() const { return ___storeName_11; }
	inline FsmString_t2414474701 ** get_address_of_storeName_11() { return &___storeName_11; }
	inline void set_storeName_11(FsmString_t2414474701 * value)
	{
		___storeName_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeName_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
