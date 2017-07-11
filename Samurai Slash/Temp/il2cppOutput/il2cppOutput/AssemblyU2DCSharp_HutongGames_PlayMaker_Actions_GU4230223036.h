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

// HutongGames.PlayMaker.Actions.GUITooltip
struct  GUITooltip_t4230223036  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUITooltip::storeTooltip
	FsmString_t2414474701 * ___storeTooltip_11;

public:
	inline static int32_t get_offset_of_storeTooltip_11() { return static_cast<int32_t>(offsetof(GUITooltip_t4230223036, ___storeTooltip_11)); }
	inline FsmString_t2414474701 * get_storeTooltip_11() const { return ___storeTooltip_11; }
	inline FsmString_t2414474701 ** get_address_of_storeTooltip_11() { return &___storeTooltip_11; }
	inline void set_storeTooltip_11(FsmString_t2414474701 * value)
	{
		___storeTooltip_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeTooltip_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
