#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_GUI899174319.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutIntField
struct  GUILayoutIntField_t1246352742  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GUILayoutIntField::intVariable
	FsmInt_t1273009179 * ___intVariable_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutIntField::style
	FsmString_t2414474701 * ___style_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GUILayoutIntField::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_15;

public:
	inline static int32_t get_offset_of_intVariable_13() { return static_cast<int32_t>(offsetof(GUILayoutIntField_t1246352742, ___intVariable_13)); }
	inline FsmInt_t1273009179 * get_intVariable_13() const { return ___intVariable_13; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_13() { return &___intVariable_13; }
	inline void set_intVariable_13(FsmInt_t1273009179 * value)
	{
		___intVariable_13 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_13, value);
	}

	inline static int32_t get_offset_of_style_14() { return static_cast<int32_t>(offsetof(GUILayoutIntField_t1246352742, ___style_14)); }
	inline FsmString_t2414474701 * get_style_14() const { return ___style_14; }
	inline FsmString_t2414474701 ** get_address_of_style_14() { return &___style_14; }
	inline void set_style_14(FsmString_t2414474701 * value)
	{
		___style_14 = value;
		Il2CppCodeGenWriteBarrier(&___style_14, value);
	}

	inline static int32_t get_offset_of_changedEvent_15() { return static_cast<int32_t>(offsetof(GUILayoutIntField_t1246352742, ___changedEvent_15)); }
	inline FsmEvent_t1258573736 * get_changedEvent_15() const { return ___changedEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_15() { return &___changedEvent_15; }
	inline void set_changedEvent_15(FsmEvent_t1258573736 * value)
	{
		___changedEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
