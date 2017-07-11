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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RotateGUI
struct  RotateGUI_t586588880  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RotateGUI::angle
	FsmFloat_t937133978 * ___angle_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RotateGUI::pivotX
	FsmFloat_t937133978 * ___pivotX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RotateGUI::pivotY
	FsmFloat_t937133978 * ___pivotY_13;
	// System.Boolean HutongGames.PlayMaker.Actions.RotateGUI::normalized
	bool ___normalized_14;
	// System.Boolean HutongGames.PlayMaker.Actions.RotateGUI::applyGlobally
	bool ___applyGlobally_15;
	// System.Boolean HutongGames.PlayMaker.Actions.RotateGUI::applied
	bool ___applied_16;

public:
	inline static int32_t get_offset_of_angle_11() { return static_cast<int32_t>(offsetof(RotateGUI_t586588880, ___angle_11)); }
	inline FsmFloat_t937133978 * get_angle_11() const { return ___angle_11; }
	inline FsmFloat_t937133978 ** get_address_of_angle_11() { return &___angle_11; }
	inline void set_angle_11(FsmFloat_t937133978 * value)
	{
		___angle_11 = value;
		Il2CppCodeGenWriteBarrier(&___angle_11, value);
	}

	inline static int32_t get_offset_of_pivotX_12() { return static_cast<int32_t>(offsetof(RotateGUI_t586588880, ___pivotX_12)); }
	inline FsmFloat_t937133978 * get_pivotX_12() const { return ___pivotX_12; }
	inline FsmFloat_t937133978 ** get_address_of_pivotX_12() { return &___pivotX_12; }
	inline void set_pivotX_12(FsmFloat_t937133978 * value)
	{
		___pivotX_12 = value;
		Il2CppCodeGenWriteBarrier(&___pivotX_12, value);
	}

	inline static int32_t get_offset_of_pivotY_13() { return static_cast<int32_t>(offsetof(RotateGUI_t586588880, ___pivotY_13)); }
	inline FsmFloat_t937133978 * get_pivotY_13() const { return ___pivotY_13; }
	inline FsmFloat_t937133978 ** get_address_of_pivotY_13() { return &___pivotY_13; }
	inline void set_pivotY_13(FsmFloat_t937133978 * value)
	{
		___pivotY_13 = value;
		Il2CppCodeGenWriteBarrier(&___pivotY_13, value);
	}

	inline static int32_t get_offset_of_normalized_14() { return static_cast<int32_t>(offsetof(RotateGUI_t586588880, ___normalized_14)); }
	inline bool get_normalized_14() const { return ___normalized_14; }
	inline bool* get_address_of_normalized_14() { return &___normalized_14; }
	inline void set_normalized_14(bool value)
	{
		___normalized_14 = value;
	}

	inline static int32_t get_offset_of_applyGlobally_15() { return static_cast<int32_t>(offsetof(RotateGUI_t586588880, ___applyGlobally_15)); }
	inline bool get_applyGlobally_15() const { return ___applyGlobally_15; }
	inline bool* get_address_of_applyGlobally_15() { return &___applyGlobally_15; }
	inline void set_applyGlobally_15(bool value)
	{
		___applyGlobally_15 = value;
	}

	inline static int32_t get_offset_of_applied_16() { return static_cast<int32_t>(offsetof(RotateGUI_t586588880, ___applied_16)); }
	inline bool get_applied_16() const { return ___applied_16; }
	inline bool* get_address_of_applied_16() { return &___applied_16; }
	inline void set_applied_16(bool value)
	{
		___applied_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
