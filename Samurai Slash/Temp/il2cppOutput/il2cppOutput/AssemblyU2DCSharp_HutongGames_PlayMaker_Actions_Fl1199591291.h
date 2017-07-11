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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FloatSignTest
struct  FloatSignTest_t1199591291  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatSignTest::floatValue
	FsmFloat_t937133978 * ___floatValue_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FloatSignTest::isPositive
	FsmEvent_t1258573736 * ___isPositive_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FloatSignTest::isNegative
	FsmEvent_t1258573736 * ___isNegative_13;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatSignTest::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_floatValue_11() { return static_cast<int32_t>(offsetof(FloatSignTest_t1199591291, ___floatValue_11)); }
	inline FsmFloat_t937133978 * get_floatValue_11() const { return ___floatValue_11; }
	inline FsmFloat_t937133978 ** get_address_of_floatValue_11() { return &___floatValue_11; }
	inline void set_floatValue_11(FsmFloat_t937133978 * value)
	{
		___floatValue_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatValue_11, value);
	}

	inline static int32_t get_offset_of_isPositive_12() { return static_cast<int32_t>(offsetof(FloatSignTest_t1199591291, ___isPositive_12)); }
	inline FsmEvent_t1258573736 * get_isPositive_12() const { return ___isPositive_12; }
	inline FsmEvent_t1258573736 ** get_address_of_isPositive_12() { return &___isPositive_12; }
	inline void set_isPositive_12(FsmEvent_t1258573736 * value)
	{
		___isPositive_12 = value;
		Il2CppCodeGenWriteBarrier(&___isPositive_12, value);
	}

	inline static int32_t get_offset_of_isNegative_13() { return static_cast<int32_t>(offsetof(FloatSignTest_t1199591291, ___isNegative_13)); }
	inline FsmEvent_t1258573736 * get_isNegative_13() const { return ___isNegative_13; }
	inline FsmEvent_t1258573736 ** get_address_of_isNegative_13() { return &___isNegative_13; }
	inline void set_isNegative_13(FsmEvent_t1258573736 * value)
	{
		___isNegative_13 = value;
		Il2CppCodeGenWriteBarrier(&___isNegative_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(FloatSignTest_t1199591291, ___everyFrame_14)); }
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
