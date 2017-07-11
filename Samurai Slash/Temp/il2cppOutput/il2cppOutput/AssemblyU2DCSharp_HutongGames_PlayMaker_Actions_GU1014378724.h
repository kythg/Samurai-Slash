#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_GUI899174319.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutTextLabel
struct  GUILayoutTextLabel_t1014378724  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutTextLabel::text
	FsmString_t2414474701 * ___text_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutTextLabel::style
	FsmString_t2414474701 * ___style_14;

public:
	inline static int32_t get_offset_of_text_13() { return static_cast<int32_t>(offsetof(GUILayoutTextLabel_t1014378724, ___text_13)); }
	inline FsmString_t2414474701 * get_text_13() const { return ___text_13; }
	inline FsmString_t2414474701 ** get_address_of_text_13() { return &___text_13; }
	inline void set_text_13(FsmString_t2414474701 * value)
	{
		___text_13 = value;
		Il2CppCodeGenWriteBarrier(&___text_13, value);
	}

	inline static int32_t get_offset_of_style_14() { return static_cast<int32_t>(offsetof(GUILayoutTextLabel_t1014378724, ___style_14)); }
	inline FsmString_t2414474701 * get_style_14() const { return ___style_14; }
	inline FsmString_t2414474701 ** get_address_of_style_14() { return &___style_14; }
	inline void set_style_14(FsmString_t2414474701 * value)
	{
		___style_14 = value;
		Il2CppCodeGenWriteBarrier(&___style_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
