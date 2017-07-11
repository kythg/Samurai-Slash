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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RectOverlaps
struct  RectOverlaps_t2454060090  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.RectOverlaps::rect1
	FsmRect_t19023354 * ___rect1_11;
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.RectOverlaps::rect2
	FsmRect_t19023354 * ___rect2_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.RectOverlaps::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.RectOverlaps::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RectOverlaps::storeResult
	FsmBool_t664485696 * ___storeResult_15;
	// System.Boolean HutongGames.PlayMaker.Actions.RectOverlaps::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_rect1_11() { return static_cast<int32_t>(offsetof(RectOverlaps_t2454060090, ___rect1_11)); }
	inline FsmRect_t19023354 * get_rect1_11() const { return ___rect1_11; }
	inline FsmRect_t19023354 ** get_address_of_rect1_11() { return &___rect1_11; }
	inline void set_rect1_11(FsmRect_t19023354 * value)
	{
		___rect1_11 = value;
		Il2CppCodeGenWriteBarrier(&___rect1_11, value);
	}

	inline static int32_t get_offset_of_rect2_12() { return static_cast<int32_t>(offsetof(RectOverlaps_t2454060090, ___rect2_12)); }
	inline FsmRect_t19023354 * get_rect2_12() const { return ___rect2_12; }
	inline FsmRect_t19023354 ** get_address_of_rect2_12() { return &___rect2_12; }
	inline void set_rect2_12(FsmRect_t19023354 * value)
	{
		___rect2_12 = value;
		Il2CppCodeGenWriteBarrier(&___rect2_12, value);
	}

	inline static int32_t get_offset_of_trueEvent_13() { return static_cast<int32_t>(offsetof(RectOverlaps_t2454060090, ___trueEvent_13)); }
	inline FsmEvent_t1258573736 * get_trueEvent_13() const { return ___trueEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_13() { return &___trueEvent_13; }
	inline void set_trueEvent_13(FsmEvent_t1258573736 * value)
	{
		___trueEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_13, value);
	}

	inline static int32_t get_offset_of_falseEvent_14() { return static_cast<int32_t>(offsetof(RectOverlaps_t2454060090, ___falseEvent_14)); }
	inline FsmEvent_t1258573736 * get_falseEvent_14() const { return ___falseEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_14() { return &___falseEvent_14; }
	inline void set_falseEvent_14(FsmEvent_t1258573736 * value)
	{
		___falseEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(RectOverlaps_t2454060090, ___storeResult_15)); }
	inline FsmBool_t664485696 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmBool_t664485696 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(RectOverlaps_t2454060090, ___everyFrame_16)); }
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
