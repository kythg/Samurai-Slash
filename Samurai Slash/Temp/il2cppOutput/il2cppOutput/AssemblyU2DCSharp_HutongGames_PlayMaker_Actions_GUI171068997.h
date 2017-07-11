#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_GUI899174319.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutButton
struct  GUILayoutButton_t171068997  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GUILayoutButton::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GUILayoutButton::storeButtonState
	FsmBool_t664485696 * ___storeButtonState_14;
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.GUILayoutButton::image
	FsmTexture_t3372293163 * ___image_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutButton::text
	FsmString_t2414474701 * ___text_16;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutButton::tooltip
	FsmString_t2414474701 * ___tooltip_17;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutButton::style
	FsmString_t2414474701 * ___style_18;

public:
	inline static int32_t get_offset_of_sendEvent_13() { return static_cast<int32_t>(offsetof(GUILayoutButton_t171068997, ___sendEvent_13)); }
	inline FsmEvent_t1258573736 * get_sendEvent_13() const { return ___sendEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_13() { return &___sendEvent_13; }
	inline void set_sendEvent_13(FsmEvent_t1258573736 * value)
	{
		___sendEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_13, value);
	}

	inline static int32_t get_offset_of_storeButtonState_14() { return static_cast<int32_t>(offsetof(GUILayoutButton_t171068997, ___storeButtonState_14)); }
	inline FsmBool_t664485696 * get_storeButtonState_14() const { return ___storeButtonState_14; }
	inline FsmBool_t664485696 ** get_address_of_storeButtonState_14() { return &___storeButtonState_14; }
	inline void set_storeButtonState_14(FsmBool_t664485696 * value)
	{
		___storeButtonState_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeButtonState_14, value);
	}

	inline static int32_t get_offset_of_image_15() { return static_cast<int32_t>(offsetof(GUILayoutButton_t171068997, ___image_15)); }
	inline FsmTexture_t3372293163 * get_image_15() const { return ___image_15; }
	inline FsmTexture_t3372293163 ** get_address_of_image_15() { return &___image_15; }
	inline void set_image_15(FsmTexture_t3372293163 * value)
	{
		___image_15 = value;
		Il2CppCodeGenWriteBarrier(&___image_15, value);
	}

	inline static int32_t get_offset_of_text_16() { return static_cast<int32_t>(offsetof(GUILayoutButton_t171068997, ___text_16)); }
	inline FsmString_t2414474701 * get_text_16() const { return ___text_16; }
	inline FsmString_t2414474701 ** get_address_of_text_16() { return &___text_16; }
	inline void set_text_16(FsmString_t2414474701 * value)
	{
		___text_16 = value;
		Il2CppCodeGenWriteBarrier(&___text_16, value);
	}

	inline static int32_t get_offset_of_tooltip_17() { return static_cast<int32_t>(offsetof(GUILayoutButton_t171068997, ___tooltip_17)); }
	inline FsmString_t2414474701 * get_tooltip_17() const { return ___tooltip_17; }
	inline FsmString_t2414474701 ** get_address_of_tooltip_17() { return &___tooltip_17; }
	inline void set_tooltip_17(FsmString_t2414474701 * value)
	{
		___tooltip_17 = value;
		Il2CppCodeGenWriteBarrier(&___tooltip_17, value);
	}

	inline static int32_t get_offset_of_style_18() { return static_cast<int32_t>(offsetof(GUILayoutButton_t171068997, ___style_18)); }
	inline FsmString_t2414474701 * get_style_18() const { return ___style_18; }
	inline FsmString_t2414474701 ** get_address_of_style_18() { return &___style_18; }
	inline void set_style_18(FsmString_t2414474701 * value)
	{
		___style_18 = value;
		Il2CppCodeGenWriteBarrier(&___style_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
