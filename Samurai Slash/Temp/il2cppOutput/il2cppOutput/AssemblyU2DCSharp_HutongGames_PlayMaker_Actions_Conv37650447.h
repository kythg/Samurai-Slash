#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ConvertBoolToColor
struct  ConvertBoolToColor_t37650447  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ConvertBoolToColor::boolVariable
	FsmBool_t664485696 * ___boolVariable_11;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.ConvertBoolToColor::colorVariable
	FsmColor_t118301965 * ___colorVariable_12;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.ConvertBoolToColor::falseColor
	FsmColor_t118301965 * ___falseColor_13;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.ConvertBoolToColor::trueColor
	FsmColor_t118301965 * ___trueColor_14;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertBoolToColor::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_boolVariable_11() { return static_cast<int32_t>(offsetof(ConvertBoolToColor_t37650447, ___boolVariable_11)); }
	inline FsmBool_t664485696 * get_boolVariable_11() const { return ___boolVariable_11; }
	inline FsmBool_t664485696 ** get_address_of_boolVariable_11() { return &___boolVariable_11; }
	inline void set_boolVariable_11(FsmBool_t664485696 * value)
	{
		___boolVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___boolVariable_11, value);
	}

	inline static int32_t get_offset_of_colorVariable_12() { return static_cast<int32_t>(offsetof(ConvertBoolToColor_t37650447, ___colorVariable_12)); }
	inline FsmColor_t118301965 * get_colorVariable_12() const { return ___colorVariable_12; }
	inline FsmColor_t118301965 ** get_address_of_colorVariable_12() { return &___colorVariable_12; }
	inline void set_colorVariable_12(FsmColor_t118301965 * value)
	{
		___colorVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___colorVariable_12, value);
	}

	inline static int32_t get_offset_of_falseColor_13() { return static_cast<int32_t>(offsetof(ConvertBoolToColor_t37650447, ___falseColor_13)); }
	inline FsmColor_t118301965 * get_falseColor_13() const { return ___falseColor_13; }
	inline FsmColor_t118301965 ** get_address_of_falseColor_13() { return &___falseColor_13; }
	inline void set_falseColor_13(FsmColor_t118301965 * value)
	{
		___falseColor_13 = value;
		Il2CppCodeGenWriteBarrier(&___falseColor_13, value);
	}

	inline static int32_t get_offset_of_trueColor_14() { return static_cast<int32_t>(offsetof(ConvertBoolToColor_t37650447, ___trueColor_14)); }
	inline FsmColor_t118301965 * get_trueColor_14() const { return ___trueColor_14; }
	inline FsmColor_t118301965 ** get_address_of_trueColor_14() { return &___trueColor_14; }
	inline void set_trueColor_14(FsmColor_t118301965 * value)
	{
		___trueColor_14 = value;
		Il2CppCodeGenWriteBarrier(&___trueColor_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(ConvertBoolToColor_t37650447, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
