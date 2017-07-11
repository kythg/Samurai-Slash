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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetGUIContentColor
struct  SetGUIContentColor_t479850613  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.SetGUIContentColor::contentColor
	FsmColor_t118301965 * ___contentColor_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetGUIContentColor::applyGlobally
	FsmBool_t664485696 * ___applyGlobally_12;

public:
	inline static int32_t get_offset_of_contentColor_11() { return static_cast<int32_t>(offsetof(SetGUIContentColor_t479850613, ___contentColor_11)); }
	inline FsmColor_t118301965 * get_contentColor_11() const { return ___contentColor_11; }
	inline FsmColor_t118301965 ** get_address_of_contentColor_11() { return &___contentColor_11; }
	inline void set_contentColor_11(FsmColor_t118301965 * value)
	{
		___contentColor_11 = value;
		Il2CppCodeGenWriteBarrier(&___contentColor_11, value);
	}

	inline static int32_t get_offset_of_applyGlobally_12() { return static_cast<int32_t>(offsetof(SetGUIContentColor_t479850613, ___applyGlobally_12)); }
	inline FsmBool_t664485696 * get_applyGlobally_12() const { return ___applyGlobally_12; }
	inline FsmBool_t664485696 ** get_address_of_applyGlobally_12() { return &___applyGlobally_12; }
	inline void set_applyGlobally_12(FsmBool_t664485696 * value)
	{
		___applyGlobally_12 = value;
		Il2CppCodeGenWriteBarrier(&___applyGlobally_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
