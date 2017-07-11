#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_GUI899174319.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutToggle
struct  GUILayoutToggle_t1616927633  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GUILayoutToggle::storeButtonState
	FsmBool_t664485696 * ___storeButtonState_13;
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.GUILayoutToggle::image
	FsmTexture_t3372293163 * ___image_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutToggle::text
	FsmString_t2414474701 * ___text_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutToggle::tooltip
	FsmString_t2414474701 * ___tooltip_16;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutToggle::style
	FsmString_t2414474701 * ___style_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GUILayoutToggle::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_18;

public:
	inline static int32_t get_offset_of_storeButtonState_13() { return static_cast<int32_t>(offsetof(GUILayoutToggle_t1616927633, ___storeButtonState_13)); }
	inline FsmBool_t664485696 * get_storeButtonState_13() const { return ___storeButtonState_13; }
	inline FsmBool_t664485696 ** get_address_of_storeButtonState_13() { return &___storeButtonState_13; }
	inline void set_storeButtonState_13(FsmBool_t664485696 * value)
	{
		___storeButtonState_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeButtonState_13, value);
	}

	inline static int32_t get_offset_of_image_14() { return static_cast<int32_t>(offsetof(GUILayoutToggle_t1616927633, ___image_14)); }
	inline FsmTexture_t3372293163 * get_image_14() const { return ___image_14; }
	inline FsmTexture_t3372293163 ** get_address_of_image_14() { return &___image_14; }
	inline void set_image_14(FsmTexture_t3372293163 * value)
	{
		___image_14 = value;
		Il2CppCodeGenWriteBarrier(&___image_14, value);
	}

	inline static int32_t get_offset_of_text_15() { return static_cast<int32_t>(offsetof(GUILayoutToggle_t1616927633, ___text_15)); }
	inline FsmString_t2414474701 * get_text_15() const { return ___text_15; }
	inline FsmString_t2414474701 ** get_address_of_text_15() { return &___text_15; }
	inline void set_text_15(FsmString_t2414474701 * value)
	{
		___text_15 = value;
		Il2CppCodeGenWriteBarrier(&___text_15, value);
	}

	inline static int32_t get_offset_of_tooltip_16() { return static_cast<int32_t>(offsetof(GUILayoutToggle_t1616927633, ___tooltip_16)); }
	inline FsmString_t2414474701 * get_tooltip_16() const { return ___tooltip_16; }
	inline FsmString_t2414474701 ** get_address_of_tooltip_16() { return &___tooltip_16; }
	inline void set_tooltip_16(FsmString_t2414474701 * value)
	{
		___tooltip_16 = value;
		Il2CppCodeGenWriteBarrier(&___tooltip_16, value);
	}

	inline static int32_t get_offset_of_style_17() { return static_cast<int32_t>(offsetof(GUILayoutToggle_t1616927633, ___style_17)); }
	inline FsmString_t2414474701 * get_style_17() const { return ___style_17; }
	inline FsmString_t2414474701 ** get_address_of_style_17() { return &___style_17; }
	inline void set_style_17(FsmString_t2414474701 * value)
	{
		___style_17 = value;
		Il2CppCodeGenWriteBarrier(&___style_17, value);
	}

	inline static int32_t get_offset_of_changedEvent_18() { return static_cast<int32_t>(offsetof(GUILayoutToggle_t1616927633, ___changedEvent_18)); }
	inline FsmEvent_t1258573736 * get_changedEvent_18() const { return ___changedEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_18() { return &___changedEvent_18; }
	inline void set_changedEvent_18(FsmEvent_t1258573736 * value)
	{
		___changedEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
