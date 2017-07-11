#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetScreenWidth
struct  GetScreenWidth_t1566228106  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetScreenWidth::storeScreenWidth
	FsmFloat_t937133978 * ___storeScreenWidth_11;

public:
	inline static int32_t get_offset_of_storeScreenWidth_11() { return static_cast<int32_t>(offsetof(GetScreenWidth_t1566228106, ___storeScreenWidth_11)); }
	inline FsmFloat_t937133978 * get_storeScreenWidth_11() const { return ___storeScreenWidth_11; }
	inline FsmFloat_t937133978 ** get_address_of_storeScreenWidth_11() { return &___storeScreenWidth_11; }
	inline void set_storeScreenWidth_11(FsmFloat_t937133978 * value)
	{
		___storeScreenWidth_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeScreenWidth_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
