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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Flicker
struct  Flicker_t303109482  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.Flicker::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Flicker::frequency
	FsmFloat_t937133978 * ___frequency_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Flicker::amountOn
	FsmFloat_t937133978 * ___amountOn_15;
	// System.Boolean HutongGames.PlayMaker.Actions.Flicker::rendererOnly
	bool ___rendererOnly_16;
	// System.Boolean HutongGames.PlayMaker.Actions.Flicker::realTime
	bool ___realTime_17;
	// System.Single HutongGames.PlayMaker.Actions.Flicker::startTime
	float ___startTime_18;
	// System.Single HutongGames.PlayMaker.Actions.Flicker::timer
	float ___timer_19;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(Flicker_t303109482, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_frequency_14() { return static_cast<int32_t>(offsetof(Flicker_t303109482, ___frequency_14)); }
	inline FsmFloat_t937133978 * get_frequency_14() const { return ___frequency_14; }
	inline FsmFloat_t937133978 ** get_address_of_frequency_14() { return &___frequency_14; }
	inline void set_frequency_14(FsmFloat_t937133978 * value)
	{
		___frequency_14 = value;
		Il2CppCodeGenWriteBarrier(&___frequency_14, value);
	}

	inline static int32_t get_offset_of_amountOn_15() { return static_cast<int32_t>(offsetof(Flicker_t303109482, ___amountOn_15)); }
	inline FsmFloat_t937133978 * get_amountOn_15() const { return ___amountOn_15; }
	inline FsmFloat_t937133978 ** get_address_of_amountOn_15() { return &___amountOn_15; }
	inline void set_amountOn_15(FsmFloat_t937133978 * value)
	{
		___amountOn_15 = value;
		Il2CppCodeGenWriteBarrier(&___amountOn_15, value);
	}

	inline static int32_t get_offset_of_rendererOnly_16() { return static_cast<int32_t>(offsetof(Flicker_t303109482, ___rendererOnly_16)); }
	inline bool get_rendererOnly_16() const { return ___rendererOnly_16; }
	inline bool* get_address_of_rendererOnly_16() { return &___rendererOnly_16; }
	inline void set_rendererOnly_16(bool value)
	{
		___rendererOnly_16 = value;
	}

	inline static int32_t get_offset_of_realTime_17() { return static_cast<int32_t>(offsetof(Flicker_t303109482, ___realTime_17)); }
	inline bool get_realTime_17() const { return ___realTime_17; }
	inline bool* get_address_of_realTime_17() { return &___realTime_17; }
	inline void set_realTime_17(bool value)
	{
		___realTime_17 = value;
	}

	inline static int32_t get_offset_of_startTime_18() { return static_cast<int32_t>(offsetof(Flicker_t303109482, ___startTime_18)); }
	inline float get_startTime_18() const { return ___startTime_18; }
	inline float* get_address_of_startTime_18() { return &___startTime_18; }
	inline void set_startTime_18(float value)
	{
		___startTime_18 = value;
	}

	inline static int32_t get_offset_of_timer_19() { return static_cast<int32_t>(offsetof(Flicker_t303109482, ___timer_19)); }
	inline float get_timer_19() const { return ___timer_19; }
	inline float* get_address_of_timer_19() { return &___timer_19; }
	inline void set_timer_19(float value)
	{
		___timer_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
