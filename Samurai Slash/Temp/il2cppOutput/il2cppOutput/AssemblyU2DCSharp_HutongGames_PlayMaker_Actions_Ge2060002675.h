#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetColorRGBA
struct  GetColorRGBA_t2060002675  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.GetColorRGBA::color
	FsmColor_t118301965 * ___color_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetColorRGBA::storeRed
	FsmFloat_t937133978 * ___storeRed_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetColorRGBA::storeGreen
	FsmFloat_t937133978 * ___storeGreen_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetColorRGBA::storeBlue
	FsmFloat_t937133978 * ___storeBlue_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetColorRGBA::storeAlpha
	FsmFloat_t937133978 * ___storeAlpha_15;
	// System.Boolean HutongGames.PlayMaker.Actions.GetColorRGBA::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_color_11() { return static_cast<int32_t>(offsetof(GetColorRGBA_t2060002675, ___color_11)); }
	inline FsmColor_t118301965 * get_color_11() const { return ___color_11; }
	inline FsmColor_t118301965 ** get_address_of_color_11() { return &___color_11; }
	inline void set_color_11(FsmColor_t118301965 * value)
	{
		___color_11 = value;
		Il2CppCodeGenWriteBarrier(&___color_11, value);
	}

	inline static int32_t get_offset_of_storeRed_12() { return static_cast<int32_t>(offsetof(GetColorRGBA_t2060002675, ___storeRed_12)); }
	inline FsmFloat_t937133978 * get_storeRed_12() const { return ___storeRed_12; }
	inline FsmFloat_t937133978 ** get_address_of_storeRed_12() { return &___storeRed_12; }
	inline void set_storeRed_12(FsmFloat_t937133978 * value)
	{
		___storeRed_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeRed_12, value);
	}

	inline static int32_t get_offset_of_storeGreen_13() { return static_cast<int32_t>(offsetof(GetColorRGBA_t2060002675, ___storeGreen_13)); }
	inline FsmFloat_t937133978 * get_storeGreen_13() const { return ___storeGreen_13; }
	inline FsmFloat_t937133978 ** get_address_of_storeGreen_13() { return &___storeGreen_13; }
	inline void set_storeGreen_13(FsmFloat_t937133978 * value)
	{
		___storeGreen_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeGreen_13, value);
	}

	inline static int32_t get_offset_of_storeBlue_14() { return static_cast<int32_t>(offsetof(GetColorRGBA_t2060002675, ___storeBlue_14)); }
	inline FsmFloat_t937133978 * get_storeBlue_14() const { return ___storeBlue_14; }
	inline FsmFloat_t937133978 ** get_address_of_storeBlue_14() { return &___storeBlue_14; }
	inline void set_storeBlue_14(FsmFloat_t937133978 * value)
	{
		___storeBlue_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeBlue_14, value);
	}

	inline static int32_t get_offset_of_storeAlpha_15() { return static_cast<int32_t>(offsetof(GetColorRGBA_t2060002675, ___storeAlpha_15)); }
	inline FsmFloat_t937133978 * get_storeAlpha_15() const { return ___storeAlpha_15; }
	inline FsmFloat_t937133978 ** get_address_of_storeAlpha_15() { return &___storeAlpha_15; }
	inline void set_storeAlpha_15(FsmFloat_t937133978 * value)
	{
		___storeAlpha_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeAlpha_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(GetColorRGBA_t2060002675, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
