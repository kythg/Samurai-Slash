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

// HutongGames.PlayMaker.Actions.FloatSubtract
struct  FloatSubtract_t1092553970  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatSubtract::floatVariable
	FsmFloat_t937133978 * ___floatVariable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatSubtract::subtract
	FsmFloat_t937133978 * ___subtract_12;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatSubtract::everyFrame
	bool ___everyFrame_13;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatSubtract::perSecond
	bool ___perSecond_14;

public:
	inline static int32_t get_offset_of_floatVariable_11() { return static_cast<int32_t>(offsetof(FloatSubtract_t1092553970, ___floatVariable_11)); }
	inline FsmFloat_t937133978 * get_floatVariable_11() const { return ___floatVariable_11; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_11() { return &___floatVariable_11; }
	inline void set_floatVariable_11(FsmFloat_t937133978 * value)
	{
		___floatVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_11, value);
	}

	inline static int32_t get_offset_of_subtract_12() { return static_cast<int32_t>(offsetof(FloatSubtract_t1092553970, ___subtract_12)); }
	inline FsmFloat_t937133978 * get_subtract_12() const { return ___subtract_12; }
	inline FsmFloat_t937133978 ** get_address_of_subtract_12() { return &___subtract_12; }
	inline void set_subtract_12(FsmFloat_t937133978 * value)
	{
		___subtract_12 = value;
		Il2CppCodeGenWriteBarrier(&___subtract_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(FloatSubtract_t1092553970, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}

	inline static int32_t get_offset_of_perSecond_14() { return static_cast<int32_t>(offsetof(FloatSubtract_t1092553970, ___perSecond_14)); }
	inline bool get_perSecond_14() const { return ___perSecond_14; }
	inline bool* get_address_of_perSecond_14() { return &___perSecond_14; }
	inline void set_perSecond_14(bool value)
	{
		___perSecond_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
