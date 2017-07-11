#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FloatClamp
struct  FloatClamp_t3046005483  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatClamp::floatVariable
	FsmFloat_t937133978 * ___floatVariable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatClamp::minValue
	FsmFloat_t937133978 * ___minValue_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatClamp::maxValue
	FsmFloat_t937133978 * ___maxValue_13;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatClamp::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_floatVariable_11() { return static_cast<int32_t>(offsetof(FloatClamp_t3046005483, ___floatVariable_11)); }
	inline FsmFloat_t937133978 * get_floatVariable_11() const { return ___floatVariable_11; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_11() { return &___floatVariable_11; }
	inline void set_floatVariable_11(FsmFloat_t937133978 * value)
	{
		___floatVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_11, value);
	}

	inline static int32_t get_offset_of_minValue_12() { return static_cast<int32_t>(offsetof(FloatClamp_t3046005483, ___minValue_12)); }
	inline FsmFloat_t937133978 * get_minValue_12() const { return ___minValue_12; }
	inline FsmFloat_t937133978 ** get_address_of_minValue_12() { return &___minValue_12; }
	inline void set_minValue_12(FsmFloat_t937133978 * value)
	{
		___minValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___minValue_12, value);
	}

	inline static int32_t get_offset_of_maxValue_13() { return static_cast<int32_t>(offsetof(FloatClamp_t3046005483, ___maxValue_13)); }
	inline FsmFloat_t937133978 * get_maxValue_13() const { return ___maxValue_13; }
	inline FsmFloat_t937133978 ** get_address_of_maxValue_13() { return &___maxValue_13; }
	inline void set_maxValue_13(FsmFloat_t937133978 * value)
	{
		___maxValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___maxValue_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(FloatClamp_t3046005483, ___everyFrame_14)); }
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
