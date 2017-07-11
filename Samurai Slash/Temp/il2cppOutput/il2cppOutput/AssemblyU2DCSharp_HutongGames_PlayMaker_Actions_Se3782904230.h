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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetColorValue
struct  SetColorValue_t3782904230  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.SetColorValue::colorVariable
	FsmColor_t118301965 * ___colorVariable_11;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.SetColorValue::color
	FsmColor_t118301965 * ___color_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetColorValue::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_colorVariable_11() { return static_cast<int32_t>(offsetof(SetColorValue_t3782904230, ___colorVariable_11)); }
	inline FsmColor_t118301965 * get_colorVariable_11() const { return ___colorVariable_11; }
	inline FsmColor_t118301965 ** get_address_of_colorVariable_11() { return &___colorVariable_11; }
	inline void set_colorVariable_11(FsmColor_t118301965 * value)
	{
		___colorVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___colorVariable_11, value);
	}

	inline static int32_t get_offset_of_color_12() { return static_cast<int32_t>(offsetof(SetColorValue_t3782904230, ___color_12)); }
	inline FsmColor_t118301965 * get_color_12() const { return ___color_12; }
	inline FsmColor_t118301965 ** get_address_of_color_12() { return &___color_12; }
	inline void set_color_12(FsmColor_t118301965 * value)
	{
		___color_12 = value;
		Il2CppCodeGenWriteBarrier(&___color_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetColorValue_t3782904230, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
