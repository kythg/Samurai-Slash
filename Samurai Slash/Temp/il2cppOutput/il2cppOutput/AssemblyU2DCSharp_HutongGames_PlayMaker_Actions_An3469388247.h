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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_t1212899142;
// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation[]
struct CalculationU5BU5D_t2178323475;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimateFsmAction
struct  AnimateFsmAction_t3469388247  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimateFsmAction::time
	FsmFloat_t937133978 * ___time_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimateFsmAction::speed
	FsmFloat_t937133978 * ___speed_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimateFsmAction::delay
	FsmFloat_t937133978 * ___delay_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.AnimateFsmAction::ignoreCurveOffset
	FsmBool_t664485696 * ___ignoreCurveOffset_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AnimateFsmAction::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_15;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateFsmAction::realTime
	bool ___realTime_16;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFsmAction::startTime
	float ___startTime_17;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFsmAction::currentTime
	float ___currentTime_18;
	// System.Single[] HutongGames.PlayMaker.Actions.AnimateFsmAction::endTimes
	SingleU5BU5D_t577127397* ___endTimes_19;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFsmAction::lastTime
	float ___lastTime_20;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFsmAction::deltaTime
	float ___deltaTime_21;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFsmAction::delayTime
	float ___delayTime_22;
	// System.Single[] HutongGames.PlayMaker.Actions.AnimateFsmAction::keyOffsets
	SingleU5BU5D_t577127397* ___keyOffsets_23;
	// UnityEngine.AnimationCurve[] HutongGames.PlayMaker.Actions.AnimateFsmAction::curves
	AnimationCurveU5BU5D_t1212899142* ___curves_24;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation[] HutongGames.PlayMaker.Actions.AnimateFsmAction::calculations
	CalculationU5BU5D_t2178323475* ___calculations_25;
	// System.Single[] HutongGames.PlayMaker.Actions.AnimateFsmAction::resultFloats
	SingleU5BU5D_t577127397* ___resultFloats_26;
	// System.Single[] HutongGames.PlayMaker.Actions.AnimateFsmAction::fromFloats
	SingleU5BU5D_t577127397* ___fromFloats_27;
	// System.Single[] HutongGames.PlayMaker.Actions.AnimateFsmAction::toFloats
	SingleU5BU5D_t577127397* ___toFloats_28;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateFsmAction::finishAction
	bool ___finishAction_29;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateFsmAction::isRunning
	bool ___isRunning_30;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateFsmAction::looping
	bool ___looping_31;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateFsmAction::start
	bool ___start_32;
	// System.Single HutongGames.PlayMaker.Actions.AnimateFsmAction::largestEndTime
	float ___largestEndTime_33;

public:
	inline static int32_t get_offset_of_time_11() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___time_11)); }
	inline FsmFloat_t937133978 * get_time_11() const { return ___time_11; }
	inline FsmFloat_t937133978 ** get_address_of_time_11() { return &___time_11; }
	inline void set_time_11(FsmFloat_t937133978 * value)
	{
		___time_11 = value;
		Il2CppCodeGenWriteBarrier(&___time_11, value);
	}

	inline static int32_t get_offset_of_speed_12() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___speed_12)); }
	inline FsmFloat_t937133978 * get_speed_12() const { return ___speed_12; }
	inline FsmFloat_t937133978 ** get_address_of_speed_12() { return &___speed_12; }
	inline void set_speed_12(FsmFloat_t937133978 * value)
	{
		___speed_12 = value;
		Il2CppCodeGenWriteBarrier(&___speed_12, value);
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___delay_13)); }
	inline FsmFloat_t937133978 * get_delay_13() const { return ___delay_13; }
	inline FsmFloat_t937133978 ** get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(FsmFloat_t937133978 * value)
	{
		___delay_13 = value;
		Il2CppCodeGenWriteBarrier(&___delay_13, value);
	}

	inline static int32_t get_offset_of_ignoreCurveOffset_14() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___ignoreCurveOffset_14)); }
	inline FsmBool_t664485696 * get_ignoreCurveOffset_14() const { return ___ignoreCurveOffset_14; }
	inline FsmBool_t664485696 ** get_address_of_ignoreCurveOffset_14() { return &___ignoreCurveOffset_14; }
	inline void set_ignoreCurveOffset_14(FsmBool_t664485696 * value)
	{
		___ignoreCurveOffset_14 = value;
		Il2CppCodeGenWriteBarrier(&___ignoreCurveOffset_14, value);
	}

	inline static int32_t get_offset_of_finishEvent_15() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___finishEvent_15)); }
	inline FsmEvent_t1258573736 * get_finishEvent_15() const { return ___finishEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_15() { return &___finishEvent_15; }
	inline void set_finishEvent_15(FsmEvent_t1258573736 * value)
	{
		___finishEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_15, value);
	}

	inline static int32_t get_offset_of_realTime_16() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___realTime_16)); }
	inline bool get_realTime_16() const { return ___realTime_16; }
	inline bool* get_address_of_realTime_16() { return &___realTime_16; }
	inline void set_realTime_16(bool value)
	{
		___realTime_16 = value;
	}

	inline static int32_t get_offset_of_startTime_17() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___startTime_17)); }
	inline float get_startTime_17() const { return ___startTime_17; }
	inline float* get_address_of_startTime_17() { return &___startTime_17; }
	inline void set_startTime_17(float value)
	{
		___startTime_17 = value;
	}

	inline static int32_t get_offset_of_currentTime_18() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___currentTime_18)); }
	inline float get_currentTime_18() const { return ___currentTime_18; }
	inline float* get_address_of_currentTime_18() { return &___currentTime_18; }
	inline void set_currentTime_18(float value)
	{
		___currentTime_18 = value;
	}

	inline static int32_t get_offset_of_endTimes_19() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___endTimes_19)); }
	inline SingleU5BU5D_t577127397* get_endTimes_19() const { return ___endTimes_19; }
	inline SingleU5BU5D_t577127397** get_address_of_endTimes_19() { return &___endTimes_19; }
	inline void set_endTimes_19(SingleU5BU5D_t577127397* value)
	{
		___endTimes_19 = value;
		Il2CppCodeGenWriteBarrier(&___endTimes_19, value);
	}

	inline static int32_t get_offset_of_lastTime_20() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___lastTime_20)); }
	inline float get_lastTime_20() const { return ___lastTime_20; }
	inline float* get_address_of_lastTime_20() { return &___lastTime_20; }
	inline void set_lastTime_20(float value)
	{
		___lastTime_20 = value;
	}

	inline static int32_t get_offset_of_deltaTime_21() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___deltaTime_21)); }
	inline float get_deltaTime_21() const { return ___deltaTime_21; }
	inline float* get_address_of_deltaTime_21() { return &___deltaTime_21; }
	inline void set_deltaTime_21(float value)
	{
		___deltaTime_21 = value;
	}

	inline static int32_t get_offset_of_delayTime_22() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___delayTime_22)); }
	inline float get_delayTime_22() const { return ___delayTime_22; }
	inline float* get_address_of_delayTime_22() { return &___delayTime_22; }
	inline void set_delayTime_22(float value)
	{
		___delayTime_22 = value;
	}

	inline static int32_t get_offset_of_keyOffsets_23() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___keyOffsets_23)); }
	inline SingleU5BU5D_t577127397* get_keyOffsets_23() const { return ___keyOffsets_23; }
	inline SingleU5BU5D_t577127397** get_address_of_keyOffsets_23() { return &___keyOffsets_23; }
	inline void set_keyOffsets_23(SingleU5BU5D_t577127397* value)
	{
		___keyOffsets_23 = value;
		Il2CppCodeGenWriteBarrier(&___keyOffsets_23, value);
	}

	inline static int32_t get_offset_of_curves_24() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___curves_24)); }
	inline AnimationCurveU5BU5D_t1212899142* get_curves_24() const { return ___curves_24; }
	inline AnimationCurveU5BU5D_t1212899142** get_address_of_curves_24() { return &___curves_24; }
	inline void set_curves_24(AnimationCurveU5BU5D_t1212899142* value)
	{
		___curves_24 = value;
		Il2CppCodeGenWriteBarrier(&___curves_24, value);
	}

	inline static int32_t get_offset_of_calculations_25() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___calculations_25)); }
	inline CalculationU5BU5D_t2178323475* get_calculations_25() const { return ___calculations_25; }
	inline CalculationU5BU5D_t2178323475** get_address_of_calculations_25() { return &___calculations_25; }
	inline void set_calculations_25(CalculationU5BU5D_t2178323475* value)
	{
		___calculations_25 = value;
		Il2CppCodeGenWriteBarrier(&___calculations_25, value);
	}

	inline static int32_t get_offset_of_resultFloats_26() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___resultFloats_26)); }
	inline SingleU5BU5D_t577127397* get_resultFloats_26() const { return ___resultFloats_26; }
	inline SingleU5BU5D_t577127397** get_address_of_resultFloats_26() { return &___resultFloats_26; }
	inline void set_resultFloats_26(SingleU5BU5D_t577127397* value)
	{
		___resultFloats_26 = value;
		Il2CppCodeGenWriteBarrier(&___resultFloats_26, value);
	}

	inline static int32_t get_offset_of_fromFloats_27() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___fromFloats_27)); }
	inline SingleU5BU5D_t577127397* get_fromFloats_27() const { return ___fromFloats_27; }
	inline SingleU5BU5D_t577127397** get_address_of_fromFloats_27() { return &___fromFloats_27; }
	inline void set_fromFloats_27(SingleU5BU5D_t577127397* value)
	{
		___fromFloats_27 = value;
		Il2CppCodeGenWriteBarrier(&___fromFloats_27, value);
	}

	inline static int32_t get_offset_of_toFloats_28() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___toFloats_28)); }
	inline SingleU5BU5D_t577127397* get_toFloats_28() const { return ___toFloats_28; }
	inline SingleU5BU5D_t577127397** get_address_of_toFloats_28() { return &___toFloats_28; }
	inline void set_toFloats_28(SingleU5BU5D_t577127397* value)
	{
		___toFloats_28 = value;
		Il2CppCodeGenWriteBarrier(&___toFloats_28, value);
	}

	inline static int32_t get_offset_of_finishAction_29() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___finishAction_29)); }
	inline bool get_finishAction_29() const { return ___finishAction_29; }
	inline bool* get_address_of_finishAction_29() { return &___finishAction_29; }
	inline void set_finishAction_29(bool value)
	{
		___finishAction_29 = value;
	}

	inline static int32_t get_offset_of_isRunning_30() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___isRunning_30)); }
	inline bool get_isRunning_30() const { return ___isRunning_30; }
	inline bool* get_address_of_isRunning_30() { return &___isRunning_30; }
	inline void set_isRunning_30(bool value)
	{
		___isRunning_30 = value;
	}

	inline static int32_t get_offset_of_looping_31() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___looping_31)); }
	inline bool get_looping_31() const { return ___looping_31; }
	inline bool* get_address_of_looping_31() { return &___looping_31; }
	inline void set_looping_31(bool value)
	{
		___looping_31 = value;
	}

	inline static int32_t get_offset_of_start_32() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___start_32)); }
	inline bool get_start_32() const { return ___start_32; }
	inline bool* get_address_of_start_32() { return &___start_32; }
	inline void set_start_32(bool value)
	{
		___start_32 = value;
	}

	inline static int32_t get_offset_of_largestEndTime_33() { return static_cast<int32_t>(offsetof(AnimateFsmAction_t3469388247, ___largestEndTime_33)); }
	inline float get_largestEndTime_33() const { return ___largestEndTime_33; }
	inline float* get_address_of_largestEndTime_33() { return &___largestEndTime_33; }
	inline void set_largestEndTime_33(float value)
	{
		___largestEndTime_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
