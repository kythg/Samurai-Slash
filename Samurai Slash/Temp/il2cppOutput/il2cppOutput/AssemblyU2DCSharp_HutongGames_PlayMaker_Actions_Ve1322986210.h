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

// HutongGames.PlayMaker.Actions.Vector2Compare
struct  Vector2Compare_t1322986210  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Compare::vector2Variable1
	FsmVector2_t2430450063 * ___vector2Variable1_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Compare::vector2Variable2
	FsmVector2_t2430450063 * ___vector2Variable2_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2Compare::tolerance
	FsmFloat_t937133978 * ___tolerance_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.Vector2Compare::equal
	FsmEvent_t1258573736 * ___equal_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.Vector2Compare::notEqual
	FsmEvent_t1258573736 * ___notEqual_15;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector2Compare::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_vector2Variable1_11() { return static_cast<int32_t>(offsetof(Vector2Compare_t1322986210, ___vector2Variable1_11)); }
	inline FsmVector2_t2430450063 * get_vector2Variable1_11() const { return ___vector2Variable1_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable1_11() { return &___vector2Variable1_11; }
	inline void set_vector2Variable1_11(FsmVector2_t2430450063 * value)
	{
		___vector2Variable1_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable1_11, value);
	}

	inline static int32_t get_offset_of_vector2Variable2_12() { return static_cast<int32_t>(offsetof(Vector2Compare_t1322986210, ___vector2Variable2_12)); }
	inline FsmVector2_t2430450063 * get_vector2Variable2_12() const { return ___vector2Variable2_12; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable2_12() { return &___vector2Variable2_12; }
	inline void set_vector2Variable2_12(FsmVector2_t2430450063 * value)
	{
		___vector2Variable2_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable2_12, value);
	}

	inline static int32_t get_offset_of_tolerance_13() { return static_cast<int32_t>(offsetof(Vector2Compare_t1322986210, ___tolerance_13)); }
	inline FsmFloat_t937133978 * get_tolerance_13() const { return ___tolerance_13; }
	inline FsmFloat_t937133978 ** get_address_of_tolerance_13() { return &___tolerance_13; }
	inline void set_tolerance_13(FsmFloat_t937133978 * value)
	{
		___tolerance_13 = value;
		Il2CppCodeGenWriteBarrier(&___tolerance_13, value);
	}

	inline static int32_t get_offset_of_equal_14() { return static_cast<int32_t>(offsetof(Vector2Compare_t1322986210, ___equal_14)); }
	inline FsmEvent_t1258573736 * get_equal_14() const { return ___equal_14; }
	inline FsmEvent_t1258573736 ** get_address_of_equal_14() { return &___equal_14; }
	inline void set_equal_14(FsmEvent_t1258573736 * value)
	{
		___equal_14 = value;
		Il2CppCodeGenWriteBarrier(&___equal_14, value);
	}

	inline static int32_t get_offset_of_notEqual_15() { return static_cast<int32_t>(offsetof(Vector2Compare_t1322986210, ___notEqual_15)); }
	inline FsmEvent_t1258573736 * get_notEqual_15() const { return ___notEqual_15; }
	inline FsmEvent_t1258573736 ** get_address_of_notEqual_15() { return &___notEqual_15; }
	inline void set_notEqual_15(FsmEvent_t1258573736 * value)
	{
		___notEqual_15 = value;
		Il2CppCodeGenWriteBarrier(&___notEqual_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(Vector2Compare_t1322986210, ___everyFrame_16)); }
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
