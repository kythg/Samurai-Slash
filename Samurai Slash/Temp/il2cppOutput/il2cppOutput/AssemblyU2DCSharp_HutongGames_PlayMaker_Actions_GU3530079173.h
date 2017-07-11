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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutEmailField
struct  GUILayoutEmailField_t3530079173  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutEmailField::text
	FsmString_t2414474701 * ___text_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GUILayoutEmailField::maxLength
	FsmInt_t1273009179 * ___maxLength_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutEmailField::style
	FsmString_t2414474701 * ___style_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GUILayoutEmailField::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GUILayoutEmailField::valid
	FsmBool_t664485696 * ___valid_17;

public:
	inline static int32_t get_offset_of_text_13() { return static_cast<int32_t>(offsetof(GUILayoutEmailField_t3530079173, ___text_13)); }
	inline FsmString_t2414474701 * get_text_13() const { return ___text_13; }
	inline FsmString_t2414474701 ** get_address_of_text_13() { return &___text_13; }
	inline void set_text_13(FsmString_t2414474701 * value)
	{
		___text_13 = value;
		Il2CppCodeGenWriteBarrier(&___text_13, value);
	}

	inline static int32_t get_offset_of_maxLength_14() { return static_cast<int32_t>(offsetof(GUILayoutEmailField_t3530079173, ___maxLength_14)); }
	inline FsmInt_t1273009179 * get_maxLength_14() const { return ___maxLength_14; }
	inline FsmInt_t1273009179 ** get_address_of_maxLength_14() { return &___maxLength_14; }
	inline void set_maxLength_14(FsmInt_t1273009179 * value)
	{
		___maxLength_14 = value;
		Il2CppCodeGenWriteBarrier(&___maxLength_14, value);
	}

	inline static int32_t get_offset_of_style_15() { return static_cast<int32_t>(offsetof(GUILayoutEmailField_t3530079173, ___style_15)); }
	inline FsmString_t2414474701 * get_style_15() const { return ___style_15; }
	inline FsmString_t2414474701 ** get_address_of_style_15() { return &___style_15; }
	inline void set_style_15(FsmString_t2414474701 * value)
	{
		___style_15 = value;
		Il2CppCodeGenWriteBarrier(&___style_15, value);
	}

	inline static int32_t get_offset_of_changedEvent_16() { return static_cast<int32_t>(offsetof(GUILayoutEmailField_t3530079173, ___changedEvent_16)); }
	inline FsmEvent_t1258573736 * get_changedEvent_16() const { return ___changedEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_16() { return &___changedEvent_16; }
	inline void set_changedEvent_16(FsmEvent_t1258573736 * value)
	{
		___changedEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_16, value);
	}

	inline static int32_t get_offset_of_valid_17() { return static_cast<int32_t>(offsetof(GUILayoutEmailField_t3530079173, ___valid_17)); }
	inline FsmBool_t664485696 * get_valid_17() const { return ___valid_17; }
	inline FsmBool_t664485696 ** get_address_of_valid_17() { return &___valid_17; }
	inline void set_valid_17(FsmBool_t664485696 * value)
	{
		___valid_17 = value;
		Il2CppCodeGenWriteBarrier(&___valid_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
