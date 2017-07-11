#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DrawFullscreenColor
struct  DrawFullscreenColor_t2209654184  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.DrawFullscreenColor::color
	FsmColor_t118301965 * ___color_11;

public:
	inline static int32_t get_offset_of_color_11() { return static_cast<int32_t>(offsetof(DrawFullscreenColor_t2209654184, ___color_11)); }
	inline FsmColor_t118301965 * get_color_11() const { return ___color_11; }
	inline FsmColor_t118301965 ** get_address_of_color_11() { return &___color_11; }
	inline void set_color_11(FsmColor_t118301965 * value)
	{
		___color_11 = value;
		Il2CppCodeGenWriteBarrier(&___color_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
