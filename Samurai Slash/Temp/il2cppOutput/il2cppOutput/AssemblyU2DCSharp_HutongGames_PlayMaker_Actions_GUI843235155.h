﻿#pragma once

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

// HutongGames.PlayMaker.Actions.GUILayoutSpace
struct  GUILayoutSpace_t843235155  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUILayoutSpace::space
	FsmFloat_t937133978 * ___space_11;

public:
	inline static int32_t get_offset_of_space_11() { return static_cast<int32_t>(offsetof(GUILayoutSpace_t843235155, ___space_11)); }
	inline FsmFloat_t937133978 * get_space_11() const { return ___space_11; }
	inline FsmFloat_t937133978 ** get_address_of_space_11() { return &___space_11; }
	inline void set_space_11(FsmFloat_t937133978 * value)
	{
		___space_11 = value;
		Il2CppCodeGenWriteBarrier(&___space_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
