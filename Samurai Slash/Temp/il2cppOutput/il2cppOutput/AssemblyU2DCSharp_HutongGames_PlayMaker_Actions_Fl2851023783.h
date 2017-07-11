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

// HutongGames.PlayMaker.Actions.FloatCompare
struct  FloatCompare_t2851023783  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatCompare::float1
	FsmFloat_t937133978 * ___float1_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatCompare::float2
	FsmFloat_t937133978 * ___float2_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatCompare::tolerance
	FsmFloat_t937133978 * ___tolerance_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FloatCompare::equal
	FsmEvent_t1258573736 * ___equal_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FloatCompare::lessThan
	FsmEvent_t1258573736 * ___lessThan_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FloatCompare::greaterThan
	FsmEvent_t1258573736 * ___greaterThan_16;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatCompare::everyFrame
	bool ___everyFrame_17;

public:
	inline static int32_t get_offset_of_float1_11() { return static_cast<int32_t>(offsetof(FloatCompare_t2851023783, ___float1_11)); }
	inline FsmFloat_t937133978 * get_float1_11() const { return ___float1_11; }
	inline FsmFloat_t937133978 ** get_address_of_float1_11() { return &___float1_11; }
	inline void set_float1_11(FsmFloat_t937133978 * value)
	{
		___float1_11 = value;
		Il2CppCodeGenWriteBarrier(&___float1_11, value);
	}

	inline static int32_t get_offset_of_float2_12() { return static_cast<int32_t>(offsetof(FloatCompare_t2851023783, ___float2_12)); }
	inline FsmFloat_t937133978 * get_float2_12() const { return ___float2_12; }
	inline FsmFloat_t937133978 ** get_address_of_float2_12() { return &___float2_12; }
	inline void set_float2_12(FsmFloat_t937133978 * value)
	{
		___float2_12 = value;
		Il2CppCodeGenWriteBarrier(&___float2_12, value);
	}

	inline static int32_t get_offset_of_tolerance_13() { return static_cast<int32_t>(offsetof(FloatCompare_t2851023783, ___tolerance_13)); }
	inline FsmFloat_t937133978 * get_tolerance_13() const { return ___tolerance_13; }
	inline FsmFloat_t937133978 ** get_address_of_tolerance_13() { return &___tolerance_13; }
	inline void set_tolerance_13(FsmFloat_t937133978 * value)
	{
		___tolerance_13 = value;
		Il2CppCodeGenWriteBarrier(&___tolerance_13, value);
	}

	inline static int32_t get_offset_of_equal_14() { return static_cast<int32_t>(offsetof(FloatCompare_t2851023783, ___equal_14)); }
	inline FsmEvent_t1258573736 * get_equal_14() const { return ___equal_14; }
	inline FsmEvent_t1258573736 ** get_address_of_equal_14() { return &___equal_14; }
	inline void set_equal_14(FsmEvent_t1258573736 * value)
	{
		___equal_14 = value;
		Il2CppCodeGenWriteBarrier(&___equal_14, value);
	}

	inline static int32_t get_offset_of_lessThan_15() { return static_cast<int32_t>(offsetof(FloatCompare_t2851023783, ___lessThan_15)); }
	inline FsmEvent_t1258573736 * get_lessThan_15() const { return ___lessThan_15; }
	inline FsmEvent_t1258573736 ** get_address_of_lessThan_15() { return &___lessThan_15; }
	inline void set_lessThan_15(FsmEvent_t1258573736 * value)
	{
		___lessThan_15 = value;
		Il2CppCodeGenWriteBarrier(&___lessThan_15, value);
	}

	inline static int32_t get_offset_of_greaterThan_16() { return static_cast<int32_t>(offsetof(FloatCompare_t2851023783, ___greaterThan_16)); }
	inline FsmEvent_t1258573736 * get_greaterThan_16() const { return ___greaterThan_16; }
	inline FsmEvent_t1258573736 ** get_address_of_greaterThan_16() { return &___greaterThan_16; }
	inline void set_greaterThan_16(FsmEvent_t1258573736 * value)
	{
		___greaterThan_16 = value;
		Il2CppCodeGenWriteBarrier(&___greaterThan_16, value);
	}

	inline static int32_t get_offset_of_everyFrame_17() { return static_cast<int32_t>(offsetof(FloatCompare_t2851023783, ___everyFrame_17)); }
	inline bool get_everyFrame_17() const { return ___everyFrame_17; }
	inline bool* get_address_of_everyFrame_17() { return &___everyFrame_17; }
	inline void set_everyFrame_17(bool value)
	{
		___everyFrame_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
