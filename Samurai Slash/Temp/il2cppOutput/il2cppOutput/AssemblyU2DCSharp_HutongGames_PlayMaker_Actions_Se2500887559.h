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

// HutongGames.PlayMaker.Actions.SetColorRGBA
struct  SetColorRGBA_t2500887559  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.SetColorRGBA::colorVariable
	FsmColor_t118301965 * ___colorVariable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetColorRGBA::red
	FsmFloat_t937133978 * ___red_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetColorRGBA::green
	FsmFloat_t937133978 * ___green_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetColorRGBA::blue
	FsmFloat_t937133978 * ___blue_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetColorRGBA::alpha
	FsmFloat_t937133978 * ___alpha_15;
	// System.Boolean HutongGames.PlayMaker.Actions.SetColorRGBA::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_colorVariable_11() { return static_cast<int32_t>(offsetof(SetColorRGBA_t2500887559, ___colorVariable_11)); }
	inline FsmColor_t118301965 * get_colorVariable_11() const { return ___colorVariable_11; }
	inline FsmColor_t118301965 ** get_address_of_colorVariable_11() { return &___colorVariable_11; }
	inline void set_colorVariable_11(FsmColor_t118301965 * value)
	{
		___colorVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___colorVariable_11, value);
	}

	inline static int32_t get_offset_of_red_12() { return static_cast<int32_t>(offsetof(SetColorRGBA_t2500887559, ___red_12)); }
	inline FsmFloat_t937133978 * get_red_12() const { return ___red_12; }
	inline FsmFloat_t937133978 ** get_address_of_red_12() { return &___red_12; }
	inline void set_red_12(FsmFloat_t937133978 * value)
	{
		___red_12 = value;
		Il2CppCodeGenWriteBarrier(&___red_12, value);
	}

	inline static int32_t get_offset_of_green_13() { return static_cast<int32_t>(offsetof(SetColorRGBA_t2500887559, ___green_13)); }
	inline FsmFloat_t937133978 * get_green_13() const { return ___green_13; }
	inline FsmFloat_t937133978 ** get_address_of_green_13() { return &___green_13; }
	inline void set_green_13(FsmFloat_t937133978 * value)
	{
		___green_13 = value;
		Il2CppCodeGenWriteBarrier(&___green_13, value);
	}

	inline static int32_t get_offset_of_blue_14() { return static_cast<int32_t>(offsetof(SetColorRGBA_t2500887559, ___blue_14)); }
	inline FsmFloat_t937133978 * get_blue_14() const { return ___blue_14; }
	inline FsmFloat_t937133978 ** get_address_of_blue_14() { return &___blue_14; }
	inline void set_blue_14(FsmFloat_t937133978 * value)
	{
		___blue_14 = value;
		Il2CppCodeGenWriteBarrier(&___blue_14, value);
	}

	inline static int32_t get_offset_of_alpha_15() { return static_cast<int32_t>(offsetof(SetColorRGBA_t2500887559, ___alpha_15)); }
	inline FsmFloat_t937133978 * get_alpha_15() const { return ___alpha_15; }
	inline FsmFloat_t937133978 ** get_address_of_alpha_15() { return &___alpha_15; }
	inline void set_alpha_15(FsmFloat_t937133978 * value)
	{
		___alpha_15 = value;
		Il2CppCodeGenWriteBarrier(&___alpha_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(SetColorRGBA_t2500887559, ___everyFrame_16)); }
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
