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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetGUIAlpha
struct  SetGUIAlpha_t3275909885  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetGUIAlpha::alpha
	FsmFloat_t937133978 * ___alpha_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetGUIAlpha::applyGlobally
	FsmBool_t664485696 * ___applyGlobally_12;

public:
	inline static int32_t get_offset_of_alpha_11() { return static_cast<int32_t>(offsetof(SetGUIAlpha_t3275909885, ___alpha_11)); }
	inline FsmFloat_t937133978 * get_alpha_11() const { return ___alpha_11; }
	inline FsmFloat_t937133978 ** get_address_of_alpha_11() { return &___alpha_11; }
	inline void set_alpha_11(FsmFloat_t937133978 * value)
	{
		___alpha_11 = value;
		Il2CppCodeGenWriteBarrier(&___alpha_11, value);
	}

	inline static int32_t get_offset_of_applyGlobally_12() { return static_cast<int32_t>(offsetof(SetGUIAlpha_t3275909885, ___applyGlobally_12)); }
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
