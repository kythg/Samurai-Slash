#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com858890304.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Blink
struct  Blink_t4107698928  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.Blink::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Blink::timeOff
	FsmFloat_t937133978 * ___timeOff_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Blink::timeOn
	FsmFloat_t937133978 * ___timeOn_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.Blink::startOn
	FsmBool_t664485696 * ___startOn_16;
	// System.Boolean HutongGames.PlayMaker.Actions.Blink::rendererOnly
	bool ___rendererOnly_17;
	// System.Boolean HutongGames.PlayMaker.Actions.Blink::realTime
	bool ___realTime_18;
	// System.Single HutongGames.PlayMaker.Actions.Blink::startTime
	float ___startTime_19;
	// System.Single HutongGames.PlayMaker.Actions.Blink::timer
	float ___timer_20;
	// System.Boolean HutongGames.PlayMaker.Actions.Blink::blinkOn
	bool ___blinkOn_21;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_timeOff_14() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___timeOff_14)); }
	inline FsmFloat_t937133978 * get_timeOff_14() const { return ___timeOff_14; }
	inline FsmFloat_t937133978 ** get_address_of_timeOff_14() { return &___timeOff_14; }
	inline void set_timeOff_14(FsmFloat_t937133978 * value)
	{
		___timeOff_14 = value;
		Il2CppCodeGenWriteBarrier(&___timeOff_14, value);
	}

	inline static int32_t get_offset_of_timeOn_15() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___timeOn_15)); }
	inline FsmFloat_t937133978 * get_timeOn_15() const { return ___timeOn_15; }
	inline FsmFloat_t937133978 ** get_address_of_timeOn_15() { return &___timeOn_15; }
	inline void set_timeOn_15(FsmFloat_t937133978 * value)
	{
		___timeOn_15 = value;
		Il2CppCodeGenWriteBarrier(&___timeOn_15, value);
	}

	inline static int32_t get_offset_of_startOn_16() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___startOn_16)); }
	inline FsmBool_t664485696 * get_startOn_16() const { return ___startOn_16; }
	inline FsmBool_t664485696 ** get_address_of_startOn_16() { return &___startOn_16; }
	inline void set_startOn_16(FsmBool_t664485696 * value)
	{
		___startOn_16 = value;
		Il2CppCodeGenWriteBarrier(&___startOn_16, value);
	}

	inline static int32_t get_offset_of_rendererOnly_17() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___rendererOnly_17)); }
	inline bool get_rendererOnly_17() const { return ___rendererOnly_17; }
	inline bool* get_address_of_rendererOnly_17() { return &___rendererOnly_17; }
	inline void set_rendererOnly_17(bool value)
	{
		___rendererOnly_17 = value;
	}

	inline static int32_t get_offset_of_realTime_18() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___realTime_18)); }
	inline bool get_realTime_18() const { return ___realTime_18; }
	inline bool* get_address_of_realTime_18() { return &___realTime_18; }
	inline void set_realTime_18(bool value)
	{
		___realTime_18 = value;
	}

	inline static int32_t get_offset_of_startTime_19() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___startTime_19)); }
	inline float get_startTime_19() const { return ___startTime_19; }
	inline float* get_address_of_startTime_19() { return &___startTime_19; }
	inline void set_startTime_19(float value)
	{
		___startTime_19 = value;
	}

	inline static int32_t get_offset_of_timer_20() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___timer_20)); }
	inline float get_timer_20() const { return ___timer_20; }
	inline float* get_address_of_timer_20() { return &___timer_20; }
	inline void set_timer_20(float value)
	{
		___timer_20 = value;
	}

	inline static int32_t get_offset_of_blinkOn_21() { return static_cast<int32_t>(offsetof(Blink_t4107698928, ___blinkOn_21)); }
	inline bool get_blinkOn_21() const { return ___blinkOn_21; }
	inline bool* get_address_of_blinkOn_21() { return &___blinkOn_21; }
	inline void set_blinkOn_21(bool value)
	{
		___blinkOn_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
