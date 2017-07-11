#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetVector2XY
struct  SetVector2XY_t2186705714  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.SetVector2XY::vector2Variable
	FsmVector2_t2430450063 * ___vector2Variable_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.SetVector2XY::vector2Value
	FsmVector2_t2430450063 * ___vector2Value_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetVector2XY::x
	FsmFloat_t937133978 * ___x_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetVector2XY::y
	FsmFloat_t937133978 * ___y_14;
	// System.Boolean HutongGames.PlayMaker.Actions.SetVector2XY::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_vector2Variable_11() { return static_cast<int32_t>(offsetof(SetVector2XY_t2186705714, ___vector2Variable_11)); }
	inline FsmVector2_t2430450063 * get_vector2Variable_11() const { return ___vector2Variable_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable_11() { return &___vector2Variable_11; }
	inline void set_vector2Variable_11(FsmVector2_t2430450063 * value)
	{
		___vector2Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable_11, value);
	}

	inline static int32_t get_offset_of_vector2Value_12() { return static_cast<int32_t>(offsetof(SetVector2XY_t2186705714, ___vector2Value_12)); }
	inline FsmVector2_t2430450063 * get_vector2Value_12() const { return ___vector2Value_12; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Value_12() { return &___vector2Value_12; }
	inline void set_vector2Value_12(FsmVector2_t2430450063 * value)
	{
		___vector2Value_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Value_12, value);
	}

	inline static int32_t get_offset_of_x_13() { return static_cast<int32_t>(offsetof(SetVector2XY_t2186705714, ___x_13)); }
	inline FsmFloat_t937133978 * get_x_13() const { return ___x_13; }
	inline FsmFloat_t937133978 ** get_address_of_x_13() { return &___x_13; }
	inline void set_x_13(FsmFloat_t937133978 * value)
	{
		___x_13 = value;
		Il2CppCodeGenWriteBarrier(&___x_13, value);
	}

	inline static int32_t get_offset_of_y_14() { return static_cast<int32_t>(offsetof(SetVector2XY_t2186705714, ___y_14)); }
	inline FsmFloat_t937133978 * get_y_14() const { return ___y_14; }
	inline FsmFloat_t937133978 ** get_address_of_y_14() { return &___y_14; }
	inline void set_y_14(FsmFloat_t937133978 * value)
	{
		___y_14 = value;
		Il2CppCodeGenWriteBarrier(&___y_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(SetVector2XY_t2186705714, ___everyFrame_15)); }
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
