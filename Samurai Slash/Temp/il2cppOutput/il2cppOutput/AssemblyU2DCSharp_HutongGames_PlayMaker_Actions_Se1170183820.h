#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetGUISkin
struct  SetGUISkin_t1170183820  : public FsmStateAction_t2862378169
{
public:
	// UnityEngine.GUISkin HutongGames.PlayMaker.Actions.SetGUISkin::skin
	GUISkin_t1436893342 * ___skin_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetGUISkin::applyGlobally
	FsmBool_t664485696 * ___applyGlobally_12;

public:
	inline static int32_t get_offset_of_skin_11() { return static_cast<int32_t>(offsetof(SetGUISkin_t1170183820, ___skin_11)); }
	inline GUISkin_t1436893342 * get_skin_11() const { return ___skin_11; }
	inline GUISkin_t1436893342 ** get_address_of_skin_11() { return &___skin_11; }
	inline void set_skin_11(GUISkin_t1436893342 * value)
	{
		___skin_11 = value;
		Il2CppCodeGenWriteBarrier(&___skin_11, value);
	}

	inline static int32_t get_offset_of_applyGlobally_12() { return static_cast<int32_t>(offsetof(SetGUISkin_t1170183820, ___applyGlobally_12)); }
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
