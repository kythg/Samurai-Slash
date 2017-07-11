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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RectContains
struct  RectContains_t3461006553  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.RectContains::rectangle
	FsmRect_t19023354 * ___rectangle_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.RectContains::point
	FsmVector3_t3996534004 * ___point_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RectContains::x
	FsmFloat_t937133978 * ___x_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RectContains::y
	FsmFloat_t937133978 * ___y_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.RectContains::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.RectContains::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RectContains::storeResult
	FsmBool_t664485696 * ___storeResult_17;
	// System.Boolean HutongGames.PlayMaker.Actions.RectContains::everyFrame
	bool ___everyFrame_18;

public:
	inline static int32_t get_offset_of_rectangle_11() { return static_cast<int32_t>(offsetof(RectContains_t3461006553, ___rectangle_11)); }
	inline FsmRect_t19023354 * get_rectangle_11() const { return ___rectangle_11; }
	inline FsmRect_t19023354 ** get_address_of_rectangle_11() { return &___rectangle_11; }
	inline void set_rectangle_11(FsmRect_t19023354 * value)
	{
		___rectangle_11 = value;
		Il2CppCodeGenWriteBarrier(&___rectangle_11, value);
	}

	inline static int32_t get_offset_of_point_12() { return static_cast<int32_t>(offsetof(RectContains_t3461006553, ___point_12)); }
	inline FsmVector3_t3996534004 * get_point_12() const { return ___point_12; }
	inline FsmVector3_t3996534004 ** get_address_of_point_12() { return &___point_12; }
	inline void set_point_12(FsmVector3_t3996534004 * value)
	{
		___point_12 = value;
		Il2CppCodeGenWriteBarrier(&___point_12, value);
	}

	inline static int32_t get_offset_of_x_13() { return static_cast<int32_t>(offsetof(RectContains_t3461006553, ___x_13)); }
	inline FsmFloat_t937133978 * get_x_13() const { return ___x_13; }
	inline FsmFloat_t937133978 ** get_address_of_x_13() { return &___x_13; }
	inline void set_x_13(FsmFloat_t937133978 * value)
	{
		___x_13 = value;
		Il2CppCodeGenWriteBarrier(&___x_13, value);
	}

	inline static int32_t get_offset_of_y_14() { return static_cast<int32_t>(offsetof(RectContains_t3461006553, ___y_14)); }
	inline FsmFloat_t937133978 * get_y_14() const { return ___y_14; }
	inline FsmFloat_t937133978 ** get_address_of_y_14() { return &___y_14; }
	inline void set_y_14(FsmFloat_t937133978 * value)
	{
		___y_14 = value;
		Il2CppCodeGenWriteBarrier(&___y_14, value);
	}

	inline static int32_t get_offset_of_trueEvent_15() { return static_cast<int32_t>(offsetof(RectContains_t3461006553, ___trueEvent_15)); }
	inline FsmEvent_t1258573736 * get_trueEvent_15() const { return ___trueEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_15() { return &___trueEvent_15; }
	inline void set_trueEvent_15(FsmEvent_t1258573736 * value)
	{
		___trueEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_15, value);
	}

	inline static int32_t get_offset_of_falseEvent_16() { return static_cast<int32_t>(offsetof(RectContains_t3461006553, ___falseEvent_16)); }
	inline FsmEvent_t1258573736 * get_falseEvent_16() const { return ___falseEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_16() { return &___falseEvent_16; }
	inline void set_falseEvent_16(FsmEvent_t1258573736 * value)
	{
		___falseEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_16, value);
	}

	inline static int32_t get_offset_of_storeResult_17() { return static_cast<int32_t>(offsetof(RectContains_t3461006553, ___storeResult_17)); }
	inline FsmBool_t664485696 * get_storeResult_17() const { return ___storeResult_17; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_17() { return &___storeResult_17; }
	inline void set_storeResult_17(FsmBool_t664485696 * value)
	{
		___storeResult_17 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_17, value);
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(RectContains_t3461006553, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
