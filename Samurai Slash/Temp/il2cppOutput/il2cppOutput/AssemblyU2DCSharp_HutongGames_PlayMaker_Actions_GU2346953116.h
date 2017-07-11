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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutHorizontalSlider
struct  GUILayoutHorizontalSlider_t2346953116  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUILayoutHorizontalSlider::floatVariable
	FsmFloat_t937133978 * ___floatVariable_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUILayoutHorizontalSlider::leftValue
	FsmFloat_t937133978 * ___leftValue_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUILayoutHorizontalSlider::rightValue
	FsmFloat_t937133978 * ___rightValue_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GUILayoutHorizontalSlider::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_16;

public:
	inline static int32_t get_offset_of_floatVariable_13() { return static_cast<int32_t>(offsetof(GUILayoutHorizontalSlider_t2346953116, ___floatVariable_13)); }
	inline FsmFloat_t937133978 * get_floatVariable_13() const { return ___floatVariable_13; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_13() { return &___floatVariable_13; }
	inline void set_floatVariable_13(FsmFloat_t937133978 * value)
	{
		___floatVariable_13 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_13, value);
	}

	inline static int32_t get_offset_of_leftValue_14() { return static_cast<int32_t>(offsetof(GUILayoutHorizontalSlider_t2346953116, ___leftValue_14)); }
	inline FsmFloat_t937133978 * get_leftValue_14() const { return ___leftValue_14; }
	inline FsmFloat_t937133978 ** get_address_of_leftValue_14() { return &___leftValue_14; }
	inline void set_leftValue_14(FsmFloat_t937133978 * value)
	{
		___leftValue_14 = value;
		Il2CppCodeGenWriteBarrier(&___leftValue_14, value);
	}

	inline static int32_t get_offset_of_rightValue_15() { return static_cast<int32_t>(offsetof(GUILayoutHorizontalSlider_t2346953116, ___rightValue_15)); }
	inline FsmFloat_t937133978 * get_rightValue_15() const { return ___rightValue_15; }
	inline FsmFloat_t937133978 ** get_address_of_rightValue_15() { return &___rightValue_15; }
	inline void set_rightValue_15(FsmFloat_t937133978 * value)
	{
		___rightValue_15 = value;
		Il2CppCodeGenWriteBarrier(&___rightValue_15, value);
	}

	inline static int32_t get_offset_of_changedEvent_16() { return static_cast<int32_t>(offsetof(GUILayoutHorizontalSlider_t2346953116, ___changedEvent_16)); }
	inline FsmEvent_t1258573736 * get_changedEvent_16() const { return ___changedEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_16() { return &___changedEvent_16; }
	inline void set_changedEvent_16(FsmEvent_t1258573736 * value)
	{
		___changedEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
