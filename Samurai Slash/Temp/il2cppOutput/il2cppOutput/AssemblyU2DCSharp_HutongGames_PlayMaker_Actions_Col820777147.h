#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmColor[]
struct FsmColorU5BU5D_t4100123680;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ColorRamp
struct  ColorRamp_t820777147  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor[] HutongGames.PlayMaker.Actions.ColorRamp::colors
	FsmColorU5BU5D_t4100123680* ___colors_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ColorRamp::sampleAt
	FsmFloat_t937133978 * ___sampleAt_12;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.ColorRamp::storeColor
	FsmColor_t118301965 * ___storeColor_13;
	// System.Boolean HutongGames.PlayMaker.Actions.ColorRamp::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_colors_11() { return static_cast<int32_t>(offsetof(ColorRamp_t820777147, ___colors_11)); }
	inline FsmColorU5BU5D_t4100123680* get_colors_11() const { return ___colors_11; }
	inline FsmColorU5BU5D_t4100123680** get_address_of_colors_11() { return &___colors_11; }
	inline void set_colors_11(FsmColorU5BU5D_t4100123680* value)
	{
		___colors_11 = value;
		Il2CppCodeGenWriteBarrier(&___colors_11, value);
	}

	inline static int32_t get_offset_of_sampleAt_12() { return static_cast<int32_t>(offsetof(ColorRamp_t820777147, ___sampleAt_12)); }
	inline FsmFloat_t937133978 * get_sampleAt_12() const { return ___sampleAt_12; }
	inline FsmFloat_t937133978 ** get_address_of_sampleAt_12() { return &___sampleAt_12; }
	inline void set_sampleAt_12(FsmFloat_t937133978 * value)
	{
		___sampleAt_12 = value;
		Il2CppCodeGenWriteBarrier(&___sampleAt_12, value);
	}

	inline static int32_t get_offset_of_storeColor_13() { return static_cast<int32_t>(offsetof(ColorRamp_t820777147, ___storeColor_13)); }
	inline FsmColor_t118301965 * get_storeColor_13() const { return ___storeColor_13; }
	inline FsmColor_t118301965 ** get_address_of_storeColor_13() { return &___storeColor_13; }
	inline void set_storeColor_13(FsmColor_t118301965 * value)
	{
		___storeColor_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeColor_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(ColorRamp_t820777147, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
