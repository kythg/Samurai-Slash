#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_ScaleMode324459649.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;
// HutongGames.PlayMaker.FsmRect
struct FsmRect_t19023354;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DrawTexture
struct  DrawTexture_t3267812629  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.DrawTexture::texture
	FsmTexture_t3372293163 * ___texture_11;
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.DrawTexture::screenRect
	FsmRect_t19023354 * ___screenRect_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DrawTexture::left
	FsmFloat_t937133978 * ___left_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DrawTexture::top
	FsmFloat_t937133978 * ___top_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DrawTexture::width
	FsmFloat_t937133978 * ___width_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DrawTexture::height
	FsmFloat_t937133978 * ___height_16;
	// UnityEngine.ScaleMode HutongGames.PlayMaker.Actions.DrawTexture::scaleMode
	int32_t ___scaleMode_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.DrawTexture::alphaBlend
	FsmBool_t664485696 * ___alphaBlend_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DrawTexture::imageAspect
	FsmFloat_t937133978 * ___imageAspect_19;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.DrawTexture::normalized
	FsmBool_t664485696 * ___normalized_20;
	// UnityEngine.Rect HutongGames.PlayMaker.Actions.DrawTexture::rect
	Rect_t3681755626  ___rect_21;

public:
	inline static int32_t get_offset_of_texture_11() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___texture_11)); }
	inline FsmTexture_t3372293163 * get_texture_11() const { return ___texture_11; }
	inline FsmTexture_t3372293163 ** get_address_of_texture_11() { return &___texture_11; }
	inline void set_texture_11(FsmTexture_t3372293163 * value)
	{
		___texture_11 = value;
		Il2CppCodeGenWriteBarrier(&___texture_11, value);
	}

	inline static int32_t get_offset_of_screenRect_12() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___screenRect_12)); }
	inline FsmRect_t19023354 * get_screenRect_12() const { return ___screenRect_12; }
	inline FsmRect_t19023354 ** get_address_of_screenRect_12() { return &___screenRect_12; }
	inline void set_screenRect_12(FsmRect_t19023354 * value)
	{
		___screenRect_12 = value;
		Il2CppCodeGenWriteBarrier(&___screenRect_12, value);
	}

	inline static int32_t get_offset_of_left_13() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___left_13)); }
	inline FsmFloat_t937133978 * get_left_13() const { return ___left_13; }
	inline FsmFloat_t937133978 ** get_address_of_left_13() { return &___left_13; }
	inline void set_left_13(FsmFloat_t937133978 * value)
	{
		___left_13 = value;
		Il2CppCodeGenWriteBarrier(&___left_13, value);
	}

	inline static int32_t get_offset_of_top_14() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___top_14)); }
	inline FsmFloat_t937133978 * get_top_14() const { return ___top_14; }
	inline FsmFloat_t937133978 ** get_address_of_top_14() { return &___top_14; }
	inline void set_top_14(FsmFloat_t937133978 * value)
	{
		___top_14 = value;
		Il2CppCodeGenWriteBarrier(&___top_14, value);
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___width_15)); }
	inline FsmFloat_t937133978 * get_width_15() const { return ___width_15; }
	inline FsmFloat_t937133978 ** get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(FsmFloat_t937133978 * value)
	{
		___width_15 = value;
		Il2CppCodeGenWriteBarrier(&___width_15, value);
	}

	inline static int32_t get_offset_of_height_16() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___height_16)); }
	inline FsmFloat_t937133978 * get_height_16() const { return ___height_16; }
	inline FsmFloat_t937133978 ** get_address_of_height_16() { return &___height_16; }
	inline void set_height_16(FsmFloat_t937133978 * value)
	{
		___height_16 = value;
		Il2CppCodeGenWriteBarrier(&___height_16, value);
	}

	inline static int32_t get_offset_of_scaleMode_17() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___scaleMode_17)); }
	inline int32_t get_scaleMode_17() const { return ___scaleMode_17; }
	inline int32_t* get_address_of_scaleMode_17() { return &___scaleMode_17; }
	inline void set_scaleMode_17(int32_t value)
	{
		___scaleMode_17 = value;
	}

	inline static int32_t get_offset_of_alphaBlend_18() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___alphaBlend_18)); }
	inline FsmBool_t664485696 * get_alphaBlend_18() const { return ___alphaBlend_18; }
	inline FsmBool_t664485696 ** get_address_of_alphaBlend_18() { return &___alphaBlend_18; }
	inline void set_alphaBlend_18(FsmBool_t664485696 * value)
	{
		___alphaBlend_18 = value;
		Il2CppCodeGenWriteBarrier(&___alphaBlend_18, value);
	}

	inline static int32_t get_offset_of_imageAspect_19() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___imageAspect_19)); }
	inline FsmFloat_t937133978 * get_imageAspect_19() const { return ___imageAspect_19; }
	inline FsmFloat_t937133978 ** get_address_of_imageAspect_19() { return &___imageAspect_19; }
	inline void set_imageAspect_19(FsmFloat_t937133978 * value)
	{
		___imageAspect_19 = value;
		Il2CppCodeGenWriteBarrier(&___imageAspect_19, value);
	}

	inline static int32_t get_offset_of_normalized_20() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___normalized_20)); }
	inline FsmBool_t664485696 * get_normalized_20() const { return ___normalized_20; }
	inline FsmBool_t664485696 ** get_address_of_normalized_20() { return &___normalized_20; }
	inline void set_normalized_20(FsmBool_t664485696 * value)
	{
		___normalized_20 = value;
		Il2CppCodeGenWriteBarrier(&___normalized_20, value);
	}

	inline static int32_t get_offset_of_rect_21() { return static_cast<int32_t>(offsetof(DrawTexture_t3267812629, ___rect_21)); }
	inline Rect_t3681755626  get_rect_21() const { return ___rect_21; }
	inline Rect_t3681755626 * get_address_of_rect_21() { return &___rect_21; }
	inline void set_rect_21(Rect_t3681755626  value)
	{
		___rect_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
