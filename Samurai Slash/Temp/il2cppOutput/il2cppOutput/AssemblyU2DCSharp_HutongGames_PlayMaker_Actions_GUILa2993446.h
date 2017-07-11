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
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutIntLabel
struct  GUILayoutIntLabel_t2993446  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutIntLabel::prefix
	FsmString_t2414474701 * ___prefix_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GUILayoutIntLabel::intVariable
	FsmInt_t1273009179 * ___intVariable_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutIntLabel::style
	FsmString_t2414474701 * ___style_15;

public:
	inline static int32_t get_offset_of_prefix_13() { return static_cast<int32_t>(offsetof(GUILayoutIntLabel_t2993446, ___prefix_13)); }
	inline FsmString_t2414474701 * get_prefix_13() const { return ___prefix_13; }
	inline FsmString_t2414474701 ** get_address_of_prefix_13() { return &___prefix_13; }
	inline void set_prefix_13(FsmString_t2414474701 * value)
	{
		___prefix_13 = value;
		Il2CppCodeGenWriteBarrier(&___prefix_13, value);
	}

	inline static int32_t get_offset_of_intVariable_14() { return static_cast<int32_t>(offsetof(GUILayoutIntLabel_t2993446, ___intVariable_14)); }
	inline FsmInt_t1273009179 * get_intVariable_14() const { return ___intVariable_14; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_14() { return &___intVariable_14; }
	inline void set_intVariable_14(FsmInt_t1273009179 * value)
	{
		___intVariable_14 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_14, value);
	}

	inline static int32_t get_offset_of_style_15() { return static_cast<int32_t>(offsetof(GUILayoutIntLabel_t2993446, ___style_15)); }
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
