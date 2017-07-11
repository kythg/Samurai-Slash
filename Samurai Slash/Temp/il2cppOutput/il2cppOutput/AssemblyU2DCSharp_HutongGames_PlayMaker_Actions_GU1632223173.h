#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// HutongGames.PlayMaker.FsmRect
struct FsmRect_t19023354;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUIAction
struct  GUIAction_t1632223173  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.GUIAction::screenRect
	FsmRect_t19023354 * ___screenRect_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUIAction::left
	FsmFloat_t937133978 * ___left_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUIAction::top
	FsmFloat_t937133978 * ___top_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUIAction::width
	FsmFloat_t937133978 * ___width_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUIAction::height
	FsmFloat_t937133978 * ___height_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GUIAction::normalized
	FsmBool_t664485696 * ___normalized_16;
	// UnityEngine.Rect HutongGames.PlayMaker.Actions.GUIAction::rect
	Rect_t3681755626  ___rect_17;

public:
	inline static int32_t get_offset_of_screenRect_11() { return static_cast<int32_t>(offsetof(GUIAction_t1632223173, ___screenRect_11)); }
	inline FsmRect_t19023354 * get_screenRect_11() const { return ___screenRect_11; }
	inline FsmRect_t19023354 ** get_address_of_screenRect_11() { return &___screenRect_11; }
	inline void set_screenRect_11(FsmRect_t19023354 * value)
	{
		___screenRect_11 = value;
		Il2CppCodeGenWriteBarrier(&___screenRect_11, value);
	}

	inline static int32_t get_offset_of_left_12() { return static_cast<int32_t>(offsetof(GUIAction_t1632223173, ___left_12)); }
	inline FsmFloat_t937133978 * get_left_12() const { return ___left_12; }
	inline FsmFloat_t937133978 ** get_address_of_left_12() { return &___left_12; }
	inline void set_left_12(FsmFloat_t937133978 * value)
	{
		___left_12 = value;
		Il2CppCodeGenWriteBarrier(&___left_12, value);
	}

	inline static int32_t get_offset_of_top_13() { return static_cast<int32_t>(offsetof(GUIAction_t1632223173, ___top_13)); }
	inline FsmFloat_t937133978 * get_top_13() const { return ___top_13; }
	inline FsmFloat_t937133978 ** get_address_of_top_13() { return &___top_13; }
	inline void set_top_13(FsmFloat_t937133978 * value)
	{
		___top_13 = value;
		Il2CppCodeGenWriteBarrier(&___top_13, value);
	}

	inline static int32_t get_offset_of_width_14() { return static_cast<int32_t>(offsetof(GUIAction_t1632223173, ___width_14)); }
	inline FsmFloat_t937133978 * get_width_14() const { return ___width_14; }
	inline FsmFloat_t937133978 ** get_address_of_width_14() { return &___width_14; }
	inline void set_width_14(FsmFloat_t937133978 * value)
	{
		___width_14 = value;
		Il2CppCodeGenWriteBarrier(&___width_14, value);
	}

	inline static int32_t get_offset_of_height_15() { return static_cast<int32_t>(offsetof(GUIAction_t1632223173, ___height_15)); }
	inline FsmFloat_t937133978 * get_height_15() const { return ___height_15; }
	inline FsmFloat_t937133978 ** get_address_of_height_15() { return &___height_15; }
	inline void set_height_15(FsmFloat_t937133978 * value)
	{
		___height_15 = value;
		Il2CppCodeGenWriteBarrier(&___height_15, value);
	}

	inline static int32_t get_offset_of_normalized_16() { return static_cast<int32_t>(offsetof(GUIAction_t1632223173, ___normalized_16)); }
	inline FsmBool_t664485696 * get_normalized_16() const { return ___normalized_16; }
	inline FsmBool_t664485696 ** get_address_of_normalized_16() { return &___normalized_16; }
	inline void set_normalized_16(FsmBool_t664485696 * value)
	{
		___normalized_16 = value;
		Il2CppCodeGenWriteBarrier(&___normalized_16, value);
	}

	inline static int32_t get_offset_of_rect_17() { return static_cast<int32_t>(offsetof(GUIAction_t1632223173, ___rect_17)); }
	inline Rect_t3681755626  get_rect_17() const { return ___rect_17; }
	inline Rect_t3681755626 * get_address_of_rect_17() { return &___rect_17; }
	inline void set_rect_17(Rect_t3681755626  value)
	{
		___rect_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
