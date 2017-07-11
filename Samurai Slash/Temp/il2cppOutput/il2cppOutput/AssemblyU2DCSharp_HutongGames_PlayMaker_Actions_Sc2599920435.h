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

// HutongGames.PlayMaker.Actions.ScaleGUI
struct  ScaleGUI_t2599920435  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScaleGUI::scaleX
	FsmFloat_t937133978 * ___scaleX_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScaleGUI::scaleY
	FsmFloat_t937133978 * ___scaleY_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScaleGUI::pivotX
	FsmFloat_t937133978 * ___pivotX_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScaleGUI::pivotY
	FsmFloat_t937133978 * ___pivotY_14;
	// System.Boolean HutongGames.PlayMaker.Actions.ScaleGUI::normalized
	bool ___normalized_15;
	// System.Boolean HutongGames.PlayMaker.Actions.ScaleGUI::applyGlobally
	bool ___applyGlobally_16;
	// System.Boolean HutongGames.PlayMaker.Actions.ScaleGUI::applied
	bool ___applied_17;

public:
	inline static int32_t get_offset_of_scaleX_11() { return static_cast<int32_t>(offsetof(ScaleGUI_t2599920435, ___scaleX_11)); }
	inline FsmFloat_t937133978 * get_scaleX_11() const { return ___scaleX_11; }
	inline FsmFloat_t937133978 ** get_address_of_scaleX_11() { return &___scaleX_11; }
	inline void set_scaleX_11(FsmFloat_t937133978 * value)
	{
		___scaleX_11 = value;
		Il2CppCodeGenWriteBarrier(&___scaleX_11, value);
	}

	inline static int32_t get_offset_of_scaleY_12() { return static_cast<int32_t>(offsetof(ScaleGUI_t2599920435, ___scaleY_12)); }
	inline FsmFloat_t937133978 * get_scaleY_12() const { return ___scaleY_12; }
	inline FsmFloat_t937133978 ** get_address_of_scaleY_12() { return &___scaleY_12; }
	inline void set_scaleY_12(FsmFloat_t937133978 * value)
	{
		___scaleY_12 = value;
		Il2CppCodeGenWriteBarrier(&___scaleY_12, value);
	}

	inline static int32_t get_offset_of_pivotX_13() { return static_cast<int32_t>(offsetof(ScaleGUI_t2599920435, ___pivotX_13)); }
	inline FsmFloat_t937133978 * get_pivotX_13() const { return ___pivotX_13; }
	inline FsmFloat_t937133978 ** get_address_of_pivotX_13() { return &___pivotX_13; }
	inline void set_pivotX_13(FsmFloat_t937133978 * value)
	{
		___pivotX_13 = value;
		Il2CppCodeGenWriteBarrier(&___pivotX_13, value);
	}

	inline static int32_t get_offset_of_pivotY_14() { return static_cast<int32_t>(offsetof(ScaleGUI_t2599920435, ___pivotY_14)); }
	inline FsmFloat_t937133978 * get_pivotY_14() const { return ___pivotY_14; }
	inline FsmFloat_t937133978 ** get_address_of_pivotY_14() { return &___pivotY_14; }
	inline void set_pivotY_14(FsmFloat_t937133978 * value)
	{
		___pivotY_14 = value;
		Il2CppCodeGenWriteBarrier(&___pivotY_14, value);
	}

	inline static int32_t get_offset_of_normalized_15() { return static_cast<int32_t>(offsetof(ScaleGUI_t2599920435, ___normalized_15)); }
	inline bool get_normalized_15() const { return ___normalized_15; }
	inline bool* get_address_of_normalized_15() { return &___normalized_15; }
	inline void set_normalized_15(bool value)
	{
		___normalized_15 = value;
	}

	inline static int32_t get_offset_of_applyGlobally_16() { return static_cast<int32_t>(offsetof(ScaleGUI_t2599920435, ___applyGlobally_16)); }
	inline bool get_applyGlobally_16() const { return ___applyGlobally_16; }
	inline bool* get_address_of_applyGlobally_16() { return &___applyGlobally_16; }
	inline void set_applyGlobally_16(bool value)
	{
		___applyGlobally_16 = value;
	}

	inline static int32_t get_offset_of_applied_17() { return static_cast<int32_t>(offsetof(ScaleGUI_t2599920435, ___applied_17)); }
	inline bool get_applied_17() const { return ___applied_17; }
	inline bool* get_address_of_applied_17() { return &___applied_17; }
	inline void set_applied_17(bool value)
	{
		___applied_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
