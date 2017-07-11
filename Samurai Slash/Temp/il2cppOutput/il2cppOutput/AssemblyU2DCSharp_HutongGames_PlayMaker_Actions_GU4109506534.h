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
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;
// HutongGames.PlayMaker.FsmTexture[]
struct FsmTextureU5BU5D_t3720629962;
// HutongGames.PlayMaker.FsmString[]
struct FsmStringU5BU5D_t2699231328;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1194435593;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutToolbar
struct  GUILayoutToolbar_t4109506534  : public GUILayoutAction_t899174319
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GUILayoutToolbar::numButtons
	FsmInt_t1273009179 * ___numButtons_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GUILayoutToolbar::selectedButton
	FsmInt_t1273009179 * ___selectedButton_14;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.GUILayoutToolbar::buttonEventsArray
	FsmEventU5BU5D_t287863993* ___buttonEventsArray_15;
	// HutongGames.PlayMaker.FsmTexture[] HutongGames.PlayMaker.Actions.GUILayoutToolbar::imagesArray
	FsmTextureU5BU5D_t3720629962* ___imagesArray_16;
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.GUILayoutToolbar::textsArray
	FsmStringU5BU5D_t2699231328* ___textsArray_17;
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.GUILayoutToolbar::tooltipsArray
	FsmStringU5BU5D_t2699231328* ___tooltipsArray_18;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUILayoutToolbar::style
	FsmString_t2414474701 * ___style_19;
	// System.Boolean HutongGames.PlayMaker.Actions.GUILayoutToolbar::everyFrame
	bool ___everyFrame_20;
	// UnityEngine.GUIContent[] HutongGames.PlayMaker.Actions.GUILayoutToolbar::contents
	GUIContentU5BU5D_t1194435593* ___contents_21;

public:
	inline static int32_t get_offset_of_numButtons_13() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___numButtons_13)); }
	inline FsmInt_t1273009179 * get_numButtons_13() const { return ___numButtons_13; }
	inline FsmInt_t1273009179 ** get_address_of_numButtons_13() { return &___numButtons_13; }
	inline void set_numButtons_13(FsmInt_t1273009179 * value)
	{
		___numButtons_13 = value;
		Il2CppCodeGenWriteBarrier(&___numButtons_13, value);
	}

	inline static int32_t get_offset_of_selectedButton_14() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___selectedButton_14)); }
	inline FsmInt_t1273009179 * get_selectedButton_14() const { return ___selectedButton_14; }
	inline FsmInt_t1273009179 ** get_address_of_selectedButton_14() { return &___selectedButton_14; }
	inline void set_selectedButton_14(FsmInt_t1273009179 * value)
	{
		___selectedButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___selectedButton_14, value);
	}

	inline static int32_t get_offset_of_buttonEventsArray_15() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___buttonEventsArray_15)); }
	inline FsmEventU5BU5D_t287863993* get_buttonEventsArray_15() const { return ___buttonEventsArray_15; }
	inline FsmEventU5BU5D_t287863993** get_address_of_buttonEventsArray_15() { return &___buttonEventsArray_15; }
	inline void set_buttonEventsArray_15(FsmEventU5BU5D_t287863993* value)
	{
		___buttonEventsArray_15 = value;
		Il2CppCodeGenWriteBarrier(&___buttonEventsArray_15, value);
	}

	inline static int32_t get_offset_of_imagesArray_16() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___imagesArray_16)); }
	inline FsmTextureU5BU5D_t3720629962* get_imagesArray_16() const { return ___imagesArray_16; }
	inline FsmTextureU5BU5D_t3720629962** get_address_of_imagesArray_16() { return &___imagesArray_16; }
	inline void set_imagesArray_16(FsmTextureU5BU5D_t3720629962* value)
	{
		___imagesArray_16 = value;
		Il2CppCodeGenWriteBarrier(&___imagesArray_16, value);
	}

	inline static int32_t get_offset_of_textsArray_17() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___textsArray_17)); }
	inline FsmStringU5BU5D_t2699231328* get_textsArray_17() const { return ___textsArray_17; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_textsArray_17() { return &___textsArray_17; }
	inline void set_textsArray_17(FsmStringU5BU5D_t2699231328* value)
	{
		___textsArray_17 = value;
		Il2CppCodeGenWriteBarrier(&___textsArray_17, value);
	}

	inline static int32_t get_offset_of_tooltipsArray_18() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___tooltipsArray_18)); }
	inline FsmStringU5BU5D_t2699231328* get_tooltipsArray_18() const { return ___tooltipsArray_18; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_tooltipsArray_18() { return &___tooltipsArray_18; }
	inline void set_tooltipsArray_18(FsmStringU5BU5D_t2699231328* value)
	{
		___tooltipsArray_18 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipsArray_18, value);
	}

	inline static int32_t get_offset_of_style_19() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___style_19)); }
	inline FsmString_t2414474701 * get_style_19() const { return ___style_19; }
	inline FsmString_t2414474701 ** get_address_of_style_19() { return &___style_19; }
	inline void set_style_19(FsmString_t2414474701 * value)
	{
		___style_19 = value;
		Il2CppCodeGenWriteBarrier(&___style_19, value);
	}

	inline static int32_t get_offset_of_everyFrame_20() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___everyFrame_20)); }
	inline bool get_everyFrame_20() const { return ___everyFrame_20; }
	inline bool* get_address_of_everyFrame_20() { return &___everyFrame_20; }
	inline void set_everyFrame_20(bool value)
	{
		___everyFrame_20 = value;
	}

	inline static int32_t get_offset_of_contents_21() { return static_cast<int32_t>(offsetof(GUILayoutToolbar_t4109506534, ___contents_21)); }
	inline GUIContentU5BU5D_t1194435593* get_contents_21() const { return ___contents_21; }
	inline GUIContentU5BU5D_t1194435593** get_address_of_contents_21() { return &___contents_21; }
	inline void set_contents_21(GUIContentU5BU5D_t1194435593* value)
	{
		___contents_21 = value;
		Il2CppCodeGenWriteBarrier(&___contents_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
