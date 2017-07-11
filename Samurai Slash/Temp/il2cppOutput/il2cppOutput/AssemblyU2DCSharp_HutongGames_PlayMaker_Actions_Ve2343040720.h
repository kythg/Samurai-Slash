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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector2MoveTowards
struct  Vector2MoveTowards_t2343040720  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2MoveTowards::source
	FsmVector2_t2430450063 * ___source_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2MoveTowards::target
	FsmVector2_t2430450063 * ___target_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2MoveTowards::maxSpeed
	FsmFloat_t937133978 * ___maxSpeed_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2MoveTowards::finishDistance
	FsmFloat_t937133978 * ___finishDistance_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.Vector2MoveTowards::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_15;

public:
	inline static int32_t get_offset_of_source_11() { return static_cast<int32_t>(offsetof(Vector2MoveTowards_t2343040720, ___source_11)); }
	inline FsmVector2_t2430450063 * get_source_11() const { return ___source_11; }
	inline FsmVector2_t2430450063 ** get_address_of_source_11() { return &___source_11; }
	inline void set_source_11(FsmVector2_t2430450063 * value)
	{
		___source_11 = value;
		Il2CppCodeGenWriteBarrier(&___source_11, value);
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(Vector2MoveTowards_t2343040720, ___target_12)); }
	inline FsmVector2_t2430450063 * get_target_12() const { return ___target_12; }
	inline FsmVector2_t2430450063 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(FsmVector2_t2430450063 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier(&___target_12, value);
	}

	inline static int32_t get_offset_of_maxSpeed_13() { return static_cast<int32_t>(offsetof(Vector2MoveTowards_t2343040720, ___maxSpeed_13)); }
	inline FsmFloat_t937133978 * get_maxSpeed_13() const { return ___maxSpeed_13; }
	inline FsmFloat_t937133978 ** get_address_of_maxSpeed_13() { return &___maxSpeed_13; }
	inline void set_maxSpeed_13(FsmFloat_t937133978 * value)
	{
		___maxSpeed_13 = value;
		Il2CppCodeGenWriteBarrier(&___maxSpeed_13, value);
	}

	inline static int32_t get_offset_of_finishDistance_14() { return static_cast<int32_t>(offsetof(Vector2MoveTowards_t2343040720, ___finishDistance_14)); }
	inline FsmFloat_t937133978 * get_finishDistance_14() const { return ___finishDistance_14; }
	inline FsmFloat_t937133978 ** get_address_of_finishDistance_14() { return &___finishDistance_14; }
	inline void set_finishDistance_14(FsmFloat_t937133978 * value)
	{
		___finishDistance_14 = value;
		Il2CppCodeGenWriteBarrier(&___finishDistance_14, value);
	}

	inline static int32_t get_offset_of_finishEvent_15() { return static_cast<int32_t>(offsetof(Vector2MoveTowards_t2343040720, ___finishEvent_15)); }
	inline FsmEvent_t1258573736 * get_finishEvent_15() const { return ___finishEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_15() { return &___finishEvent_15; }
	inline void set_finishEvent_15(FsmEvent_t1258573736 * value)
	{
		___finishEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
