#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ea3399771044.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.Actions.EaseFsmAction/EasingFunction
struct EasingFunction_t1516349569;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EaseFsmAction
struct  EaseFsmAction_t2453967042  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.EaseFsmAction::time
	FsmFloat_t937133978 * ___time_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.EaseFsmAction::speed
	FsmFloat_t937133978 * ___speed_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.EaseFsmAction::delay
	FsmFloat_t937133978 * ___delay_13;
	// HutongGames.PlayMaker.Actions.EaseFsmAction/EaseType HutongGames.PlayMaker.Actions.EaseFsmAction::easeType
	int32_t ___easeType_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EaseFsmAction::reverse
	FsmBool_t664485696 * ___reverse_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.EaseFsmAction::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_16;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseFsmAction::realTime
	bool ___realTime_17;
	// HutongGames.PlayMaker.Actions.EaseFsmAction/EasingFunction HutongGames.PlayMaker.Actions.EaseFsmAction::ease
	EasingFunction_t1516349569 * ___ease_18;
	// System.Single HutongGames.PlayMaker.Actions.EaseFsmAction::runningTime
	float ___runningTime_19;
	// System.Single HutongGames.PlayMaker.Actions.EaseFsmAction::lastTime
	float ___lastTime_20;
	// System.Single HutongGames.PlayMaker.Actions.EaseFsmAction::startTime
	float ___startTime_21;
	// System.Single HutongGames.PlayMaker.Actions.EaseFsmAction::deltaTime
	float ___deltaTime_22;
	// System.Single HutongGames.PlayMaker.Actions.EaseFsmAction::delayTime
	float ___delayTime_23;
	// System.Single HutongGames.PlayMaker.Actions.EaseFsmAction::percentage
	float ___percentage_24;
	// System.Single[] HutongGames.PlayMaker.Actions.EaseFsmAction::fromFloats
	SingleU5BU5D_t577127397* ___fromFloats_25;
	// System.Single[] HutongGames.PlayMaker.Actions.EaseFsmAction::toFloats
	SingleU5BU5D_t577127397* ___toFloats_26;
	// System.Single[] HutongGames.PlayMaker.Actions.EaseFsmAction::resultFloats
	SingleU5BU5D_t577127397* ___resultFloats_27;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseFsmAction::finishAction
	bool ___finishAction_28;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseFsmAction::start
	bool ___start_29;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseFsmAction::finished
	bool ___finished_30;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseFsmAction::isRunning
	bool ___isRunning_31;

public:
	inline static int32_t get_offset_of_time_11() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___time_11)); }
	inline FsmFloat_t937133978 * get_time_11() const { return ___time_11; }
	inline FsmFloat_t937133978 ** get_address_of_time_11() { return &___time_11; }
	inline void set_time_11(FsmFloat_t937133978 * value)
	{
		___time_11 = value;
		Il2CppCodeGenWriteBarrier(&___time_11, value);
	}

	inline static int32_t get_offset_of_speed_12() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___speed_12)); }
	inline FsmFloat_t937133978 * get_speed_12() const { return ___speed_12; }
	inline FsmFloat_t937133978 ** get_address_of_speed_12() { return &___speed_12; }
	inline void set_speed_12(FsmFloat_t937133978 * value)
	{
		___speed_12 = value;
		Il2CppCodeGenWriteBarrier(&___speed_12, value);
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___delay_13)); }
	inline FsmFloat_t937133978 * get_delay_13() const { return ___delay_13; }
	inline FsmFloat_t937133978 ** get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(FsmFloat_t937133978 * value)
	{
		___delay_13 = value;
		Il2CppCodeGenWriteBarrier(&___delay_13, value);
	}

	inline static int32_t get_offset_of_easeType_14() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___easeType_14)); }
	inline int32_t get_easeType_14() const { return ___easeType_14; }
	inline int32_t* get_address_of_easeType_14() { return &___easeType_14; }
	inline void set_easeType_14(int32_t value)
	{
		___easeType_14 = value;
	}

	inline static int32_t get_offset_of_reverse_15() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___reverse_15)); }
	inline FsmBool_t664485696 * get_reverse_15() const { return ___reverse_15; }
	inline FsmBool_t664485696 ** get_address_of_reverse_15() { return &___reverse_15; }
	inline void set_reverse_15(FsmBool_t664485696 * value)
	{
		___reverse_15 = value;
		Il2CppCodeGenWriteBarrier(&___reverse_15, value);
	}

	inline static int32_t get_offset_of_finishEvent_16() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___finishEvent_16)); }
	inline FsmEvent_t1258573736 * get_finishEvent_16() const { return ___finishEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_16() { return &___finishEvent_16; }
	inline void set_finishEvent_16(FsmEvent_t1258573736 * value)
	{
		___finishEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_16, value);
	}

	inline static int32_t get_offset_of_realTime_17() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___realTime_17)); }
	inline bool get_realTime_17() const { return ___realTime_17; }
	inline bool* get_address_of_realTime_17() { return &___realTime_17; }
	inline void set_realTime_17(bool value)
	{
		___realTime_17 = value;
	}

	inline static int32_t get_offset_of_ease_18() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___ease_18)); }
	inline EasingFunction_t1516349569 * get_ease_18() const { return ___ease_18; }
	inline EasingFunction_t1516349569 ** get_address_of_ease_18() { return &___ease_18; }
	inline void set_ease_18(EasingFunction_t1516349569 * value)
	{
		___ease_18 = value;
		Il2CppCodeGenWriteBarrier(&___ease_18, value);
	}

	inline static int32_t get_offset_of_runningTime_19() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___runningTime_19)); }
	inline float get_runningTime_19() const { return ___runningTime_19; }
	inline float* get_address_of_runningTime_19() { return &___runningTime_19; }
	inline void set_runningTime_19(float value)
	{
		___runningTime_19 = value;
	}

	inline static int32_t get_offset_of_lastTime_20() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___lastTime_20)); }
	inline float get_lastTime_20() const { return ___lastTime_20; }
	inline float* get_address_of_lastTime_20() { return &___lastTime_20; }
	inline void set_lastTime_20(float value)
	{
		___lastTime_20 = value;
	}

	inline static int32_t get_offset_of_startTime_21() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___startTime_21)); }
	inline float get_startTime_21() const { return ___startTime_21; }
	inline float* get_address_of_startTime_21() { return &___startTime_21; }
	inline void set_startTime_21(float value)
	{
		___startTime_21 = value;
	}

	inline static int32_t get_offset_of_deltaTime_22() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___deltaTime_22)); }
	inline float get_deltaTime_22() const { return ___deltaTime_22; }
	inline float* get_address_of_deltaTime_22() { return &___deltaTime_22; }
	inline void set_deltaTime_22(float value)
	{
		___deltaTime_22 = value;
	}

	inline static int32_t get_offset_of_delayTime_23() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___delayTime_23)); }
	inline float get_delayTime_23() const { return ___delayTime_23; }
	inline float* get_address_of_delayTime_23() { return &___delayTime_23; }
	inline void set_delayTime_23(float value)
	{
		___delayTime_23 = value;
	}

	inline static int32_t get_offset_of_percentage_24() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___percentage_24)); }
	inline float get_percentage_24() const { return ___percentage_24; }
	inline float* get_address_of_percentage_24() { return &___percentage_24; }
	inline void set_percentage_24(float value)
	{
		___percentage_24 = value;
	}

	inline static int32_t get_offset_of_fromFloats_25() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___fromFloats_25)); }
	inline SingleU5BU5D_t577127397* get_fromFloats_25() const { return ___fromFloats_25; }
	inline SingleU5BU5D_t577127397** get_address_of_fromFloats_25() { return &___fromFloats_25; }
	inline void set_fromFloats_25(SingleU5BU5D_t577127397* value)
	{
		___fromFloats_25 = value;
		Il2CppCodeGenWriteBarrier(&___fromFloats_25, value);
	}

	inline static int32_t get_offset_of_toFloats_26() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___toFloats_26)); }
	inline SingleU5BU5D_t577127397* get_toFloats_26() const { return ___toFloats_26; }
	inline SingleU5BU5D_t577127397** get_address_of_toFloats_26() { return &___toFloats_26; }
	inline void set_toFloats_26(SingleU5BU5D_t577127397* value)
	{
		___toFloats_26 = value;
		Il2CppCodeGenWriteBarrier(&___toFloats_26, value);
	}

	inline static int32_t get_offset_of_resultFloats_27() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___resultFloats_27)); }
	inline SingleU5BU5D_t577127397* get_resultFloats_27() const { return ___resultFloats_27; }
	inline SingleU5BU5D_t577127397** get_address_of_resultFloats_27() { return &___resultFloats_27; }
	inline void set_resultFloats_27(SingleU5BU5D_t577127397* value)
	{
		___resultFloats_27 = value;
		Il2CppCodeGenWriteBarrier(&___resultFloats_27, value);
	}

	inline static int32_t get_offset_of_finishAction_28() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___finishAction_28)); }
	inline bool get_finishAction_28() const { return ___finishAction_28; }
	inline bool* get_address_of_finishAction_28() { return &___finishAction_28; }
	inline void set_finishAction_28(bool value)
	{
		___finishAction_28 = value;
	}

	inline static int32_t get_offset_of_start_29() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___start_29)); }
	inline bool get_start_29() const { return ___start_29; }
	inline bool* get_address_of_start_29() { return &___start_29; }
	inline void set_start_29(bool value)
	{
		___start_29 = value;
	}

	inline static int32_t get_offset_of_finished_30() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___finished_30)); }
	inline bool get_finished_30() const { return ___finished_30; }
	inline bool* get_address_of_finished_30() { return &___finished_30; }
	inline void set_finished_30(bool value)
	{
		___finished_30 = value;
	}

	inline static int32_t get_offset_of_isRunning_31() { return static_cast<int32_t>(offsetof(EaseFsmAction_t2453967042, ___isRunning_31)); }
	inline bool get_isRunning_31() const { return ___isRunning_31; }
	inline bool* get_address_of_isRunning_31() { return &___isRunning_31; }
	inline void set_isRunning_31(bool value)
	{
		___isRunning_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
