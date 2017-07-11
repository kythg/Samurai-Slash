#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_GU1632223173.h"

// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUIContentAction
struct  GUIContentAction_t3820394922  : public GUIAction_t1632223173
{
public:
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.GUIContentAction::image
	FsmTexture_t3372293163 * ___image_18;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUIContentAction::text
	FsmString_t2414474701 * ___text_19;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUIContentAction::tooltip
	FsmString_t2414474701 * ___tooltip_20;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GUIContentAction::style
	FsmString_t2414474701 * ___style_21;
	// UnityEngine.GUIContent HutongGames.PlayMaker.Actions.GUIContentAction::content
	GUIContent_t4210063000 * ___content_22;

public:
	inline static int32_t get_offset_of_image_18() { return static_cast<int32_t>(offsetof(GUIContentAction_t3820394922, ___image_18)); }
	inline FsmTexture_t3372293163 * get_image_18() const { return ___image_18; }
	inline FsmTexture_t3372293163 ** get_address_of_image_18() { return &___image_18; }
	inline void set_image_18(FsmTexture_t3372293163 * value)
	{
		___image_18 = value;
		Il2CppCodeGenWriteBarrier(&___image_18, value);
	}

	inline static int32_t get_offset_of_text_19() { return static_cast<int32_t>(offsetof(GUIContentAction_t3820394922, ___text_19)); }
	inline FsmString_t2414474701 * get_text_19() const { return ___text_19; }
	inline FsmString_t2414474701 ** get_address_of_text_19() { return &___text_19; }
	inline void set_text_19(FsmString_t2414474701 * value)
	{
		___text_19 = value;
		Il2CppCodeGenWriteBarrier(&___text_19, value);
	}

	inline static int32_t get_offset_of_tooltip_20() { return static_cast<int32_t>(offsetof(GUIContentAction_t3820394922, ___tooltip_20)); }
	inline FsmString_t2414474701 * get_tooltip_20() const { return ___tooltip_20; }
	inline FsmString_t2414474701 ** get_address_of_tooltip_20() { return &___tooltip_20; }
	inline void set_tooltip_20(FsmString_t2414474701 * value)
	{
		___tooltip_20 = value;
		Il2CppCodeGenWriteBarrier(&___tooltip_20, value);
	}

	inline static int32_t get_offset_of_style_21() { return static_cast<int32_t>(offsetof(GUIContentAction_t3820394922, ___style_21)); }
	inline FsmString_t2414474701 * get_style_21() const { return ___style_21; }
	inline FsmString_t2414474701 ** get_address_of_style_21() { return &___style_21; }
	inline void set_style_21(FsmString_t2414474701 * value)
	{
		___style_21 = value;
		Il2CppCodeGenWriteBarrier(&___style_21, value);
	}

	inline static int32_t get_offset_of_content_22() { return static_cast<int32_t>(offsetof(GUIContentAction_t3820394922, ___content_22)); }
	inline GUIContent_t4210063000 * get_content_22() const { return ___content_22; }
	inline GUIContent_t4210063000 ** get_address_of_content_22() { return &___content_22; }
	inline void set_content_22(GUIContent_t4210063000 * value)
	{
		___content_22 = value;
		Il2CppCodeGenWriteBarrier(&___content_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
