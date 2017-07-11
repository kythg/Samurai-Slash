#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmRect
struct FsmRect_t19023354;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetRectFields
struct  SetRectFields_t3426643355  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.SetRectFields::rectVariable
	FsmRect_t19023354 * ___rectVariable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetRectFields::x
	FsmFloat_t937133978 * ___x_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetRectFields::y
	FsmFloat_t937133978 * ___y_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetRectFields::width
	FsmFloat_t937133978 * ___width_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetRectFields::height
	FsmFloat_t937133978 * ___height_15;
	// System.Boolean HutongGames.PlayMaker.Actions.SetRectFields::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_rectVariable_11() { return static_cast<int32_t>(offsetof(SetRectFields_t3426643355, ___rectVariable_11)); }
	inline FsmRect_t19023354 * get_rectVariable_11() const { return ___rectVariable_11; }
	inline FsmRect_t19023354 ** get_address_of_rectVariable_11() { return &___rectVariable_11; }
	inline void set_rectVariable_11(FsmRect_t19023354 * value)
	{
		___rectVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___rectVariable_11, value);
	}

	inline static int32_t get_offset_of_x_12() { return static_cast<int32_t>(offsetof(SetRectFields_t3426643355, ___x_12)); }
	inline FsmFloat_t937133978 * get_x_12() const { return ___x_12; }
	inline FsmFloat_t937133978 ** get_address_of_x_12() { return &___x_12; }
	inline void set_x_12(FsmFloat_t937133978 * value)
	{
		___x_12 = value;
		Il2CppCodeGenWriteBarrier(&___x_12, value);
	}

	inline static int32_t get_offset_of_y_13() { return static_cast<int32_t>(offsetof(SetRectFields_t3426643355, ___y_13)); }
	inline FsmFloat_t937133978 * get_y_13() const { return ___y_13; }
	inline FsmFloat_t937133978 ** get_address_of_y_13() { return &___y_13; }
	inline void set_y_13(FsmFloat_t937133978 * value)
	{
		___y_13 = value;
		Il2CppCodeGenWriteBarrier(&___y_13, value);
	}

	inline static int32_t get_offset_of_width_14() { return static_cast<int32_t>(offsetof(SetRectFields_t3426643355, ___width_14)); }
	inline FsmFloat_t937133978 * get_width_14() const { return ___width_14; }
	inline FsmFloat_t937133978 ** get_address_of_width_14() { return &___width_14; }
	inline void set_width_14(FsmFloat_t937133978 * value)
	{
		___width_14 = value;
		Il2CppCodeGenWriteBarrier(&___width_14, value);
	}

	inline static int32_t get_offset_of_height_15() { return static_cast<int32_t>(offsetof(SetRectFields_t3426643355, ___height_15)); }
	inline FsmFloat_t937133978 * get_height_15() const { return ___height_15; }
	inline FsmFloat_t937133978 ** get_address_of_height_15() { return &___height_15; }
	inline void set_height_15(FsmFloat_t937133978 * value)
	{
		___height_15 = value;
		Il2CppCodeGenWriteBarrier(&___height_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(SetRectFields_t3426643355, ___everyFrame_16)); }
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
