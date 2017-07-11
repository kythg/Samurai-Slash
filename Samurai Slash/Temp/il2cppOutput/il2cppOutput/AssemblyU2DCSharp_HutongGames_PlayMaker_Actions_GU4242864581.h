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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutFloatLabel
struct  GUILayoutFloatLabel_t4242864581  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutFloatLabel::prefix
	FsmString_t2414474701 * ___prefix_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUILayoutFloatLabel::floatVariable
	FsmFloat_t937133978 * ___floatVariable_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutFloatLabel::style
	FsmString_t2414474701 * ___style_15;

public:
	inline static int32_t get_offset_of_prefix_13() { return static_cast<int32_t>(offsetof(GUILayoutFloatLabel_t4242864581, ___prefix_13)); }
	inline FsmString_t2414474701 * get_prefix_13() const { return ___prefix_13; }
	inline FsmString_t2414474701 ** get_address_of_prefix_13() { return &___prefix_13; }
	inline void set_prefix_13(FsmString_t2414474701 * value)
	{
		___prefix_13 = value;
		Il2CppCodeGenWriteBarrier(&___prefix_13, value);
	}

	inline static int32_t get_offset_of_floatVariable_14() { return static_cast<int32_t>(offsetof(GUILayoutFloatLabel_t4242864581, ___floatVariable_14)); }
	inline FsmFloat_t937133978 * get_floatVariable_14() const { return ___floatVariable_14; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_14() { return &___floatVariable_14; }
	inline void set_floatVariable_14(FsmFloat_t937133978 * value)
	{
		___floatVariable_14 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_14, value);
	}

	inline static int32_t get_offset_of_style_15() { return static_cast<int32_t>(offsetof(GUILayoutFloatLabel_t4242864581, ___style_15)); }
	inline FsmString_t2414474701 * get_style_15() const { return ___style_15; }
	inline FsmString_t2414474701 ** get_address_of_style_15() { return &___style_15; }
	inline void set_style_15(FsmString_t2414474701 * value)
	{
		___style_15 = value;
		Il2CppCodeGenWriteBarrier(&___style_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
