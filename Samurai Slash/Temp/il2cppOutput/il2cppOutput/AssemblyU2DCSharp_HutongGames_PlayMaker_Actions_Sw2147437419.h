#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SwipeGestureEvent
struct  SwipeGestureEvent_t2147437419  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SwipeGestureEvent::minSwipeDistance
	FsmFloat_t937133978 * ___minSwipeDistance_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SwipeGestureEvent::swipeLeftEvent
	FsmEvent_t1258573736 * ___swipeLeftEvent_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SwipeGestureEvent::swipeRightEvent
	FsmEvent_t1258573736 * ___swipeRightEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SwipeGestureEvent::swipeUpEvent
	FsmEvent_t1258573736 * ___swipeUpEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SwipeGestureEvent::swipeDownEvent
	FsmEvent_t1258573736 * ___swipeDownEvent_15;
	// System.Single HutongGames.PlayMaker.Actions.SwipeGestureEvent::screenDiagonalSize
	float ___screenDiagonalSize_16;
	// System.Single HutongGames.PlayMaker.Actions.SwipeGestureEvent::minSwipeDistancePixels
	float ___minSwipeDistancePixels_17;
	// System.Boolean HutongGames.PlayMaker.Actions.SwipeGestureEvent::touchStarted
	bool ___touchStarted_18;
	// UnityEngine.Vector2 HutongGames.PlayMaker.Actions.SwipeGestureEvent::touchStartPos
	Vector2_t2243707579  ___touchStartPos_19;

public:
	inline static int32_t get_offset_of_minSwipeDistance_11() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___minSwipeDistance_11)); }
	inline FsmFloat_t937133978 * get_minSwipeDistance_11() const { return ___minSwipeDistance_11; }
	inline FsmFloat_t937133978 ** get_address_of_minSwipeDistance_11() { return &___minSwipeDistance_11; }
	inline void set_minSwipeDistance_11(FsmFloat_t937133978 * value)
	{
		___minSwipeDistance_11 = value;
		Il2CppCodeGenWriteBarrier(&___minSwipeDistance_11, value);
	}

	inline static int32_t get_offset_of_swipeLeftEvent_12() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___swipeLeftEvent_12)); }
	inline FsmEvent_t1258573736 * get_swipeLeftEvent_12() const { return ___swipeLeftEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_swipeLeftEvent_12() { return &___swipeLeftEvent_12; }
	inline void set_swipeLeftEvent_12(FsmEvent_t1258573736 * value)
	{
		___swipeLeftEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___swipeLeftEvent_12, value);
	}

	inline static int32_t get_offset_of_swipeRightEvent_13() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___swipeRightEvent_13)); }
	inline FsmEvent_t1258573736 * get_swipeRightEvent_13() const { return ___swipeRightEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_swipeRightEvent_13() { return &___swipeRightEvent_13; }
	inline void set_swipeRightEvent_13(FsmEvent_t1258573736 * value)
	{
		___swipeRightEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___swipeRightEvent_13, value);
	}

	inline static int32_t get_offset_of_swipeUpEvent_14() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___swipeUpEvent_14)); }
	inline FsmEvent_t1258573736 * get_swipeUpEvent_14() const { return ___swipeUpEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_swipeUpEvent_14() { return &___swipeUpEvent_14; }
	inline void set_swipeUpEvent_14(FsmEvent_t1258573736 * value)
	{
		___swipeUpEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___swipeUpEvent_14, value);
	}

	inline static int32_t get_offset_of_swipeDownEvent_15() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___swipeDownEvent_15)); }
	inline FsmEvent_t1258573736 * get_swipeDownEvent_15() const { return ___swipeDownEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_swipeDownEvent_15() { return &___swipeDownEvent_15; }
	inline void set_swipeDownEvent_15(FsmEvent_t1258573736 * value)
	{
		___swipeDownEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___swipeDownEvent_15, value);
	}

	inline static int32_t get_offset_of_screenDiagonalSize_16() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___screenDiagonalSize_16)); }
	inline float get_screenDiagonalSize_16() const { return ___screenDiagonalSize_16; }
	inline float* get_address_of_screenDiagonalSize_16() { return &___screenDiagonalSize_16; }
	inline void set_screenDiagonalSize_16(float value)
	{
		___screenDiagonalSize_16 = value;
	}

	inline static int32_t get_offset_of_minSwipeDistancePixels_17() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___minSwipeDistancePixels_17)); }
	inline float get_minSwipeDistancePixels_17() const { return ___minSwipeDistancePixels_17; }
	inline float* get_address_of_minSwipeDistancePixels_17() { return &___minSwipeDistancePixels_17; }
	inline void set_minSwipeDistancePixels_17(float value)
	{
		___minSwipeDistancePixels_17 = value;
	}

	inline static int32_t get_offset_of_touchStarted_18() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___touchStarted_18)); }
	inline bool get_touchStarted_18() const { return ___touchStarted_18; }
	inline bool* get_address_of_touchStarted_18() { return &___touchStarted_18; }
	inline void set_touchStarted_18(bool value)
	{
		___touchStarted_18 = value;
	}

	inline static int32_t get_offset_of_touchStartPos_19() { return static_cast<int32_t>(offsetof(SwipeGestureEvent_t2147437419, ___touchStartPos_19)); }
	inline Vector2_t2243707579  get_touchStartPos_19() const { return ___touchStartPos_19; }
	inline Vector2_t2243707579 * get_address_of_touchStartPos_19() { return &___touchStartPos_19; }
	inline void set_touchStartPos_19(Vector2_t2243707579  value)
	{
		___touchStartPos_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
