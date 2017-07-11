#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_GUI899174319.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutFloatField
struct  GUILayoutFloatField_t1191260867  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUILayoutFloatField::floatVariable
	FsmFloat_t937133978 * ___floatVariable_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutFloatField::style
	FsmString_t2414474701 * ___style_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GUILayoutFloatField::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_15;

public:
	inline static int32_t get_offset_of_floatVariable_13() { return static_cast<int32_t>(offsetof(GUILayoutFloatField_t1191260867, ___floatVariable_13)); }
	inline FsmFloat_t937133978 * get_floatVariable_13() const { return ___floatVariable_13; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_13() { return &___floatVariable_13; }
	inline void set_floatVariable_13(FsmFloat_t937133978 * value)
	{
		___floatVariable_13 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_13, value);
	}

	inline static int32_t get_offset_of_style_14() { return static_cast<int32_t>(offsetof(GUILayoutFloatField_t1191260867, ___style_14)); }
	inline FsmString_t2414474701 * get_style_14() const { return ___style_14; }
	inline FsmString_t2414474701 ** get_address_of_style_14() { return &___style_14; }
	inline void set_style_14(FsmString_t2414474701 * value)
	{
		___style_14 = value;
		Il2CppCodeGenWriteBarrier(&___style_14, value);
	}

	inline static int32_t get_offset_of_changedEvent_15() { return static_cast<int32_t>(offsetof(GUILayoutFloatField_t1191260867, ___changedEvent_15)); }
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
