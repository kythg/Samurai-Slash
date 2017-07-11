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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FloatChanged
struct  FloatChanged_t1017988104  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatChanged::floatVariable
	FsmFloat_t937133978 * ___floatVariable_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.FloatChanged::changedEvent
	FsmEvent_t1258573736 * ___changedEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.FloatChanged::storeResult
	FsmBool_t664485696 * ___storeResult_13;
	// System.Single HutongGames.PlayMaker.Actions.FloatChanged::previousValue
	float ___previousValue_14;

public:
	inline static int32_t get_offset_of_floatVariable_11() { return static_cast<int32_t>(offsetof(FloatChanged_t1017988104, ___floatVariable_11)); }
	inline FsmFloat_t937133978 * get_floatVariable_11() const { return ___floatVariable_11; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_11() { return &___floatVariable_11; }
	inline void set_floatVariable_11(FsmFloat_t937133978 * value)
	{
		___floatVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_11, value);
	}

	inline static int32_t get_offset_of_changedEvent_12() { return static_cast<int32_t>(offsetof(FloatChanged_t1017988104, ___changedEvent_12)); }
	inline FsmEvent_t1258573736 * get_changedEvent_12() const { return ___changedEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_changedEvent_12() { return &___changedEvent_12; }
	inline void set_changedEvent_12(FsmEvent_t1258573736 * value)
	{
		___changedEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___changedEvent_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(FloatChanged_t1017988104, ___storeResult_13)); }
	inline FsmBool_t664485696 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmBool_t664485696 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_previousValue_14() { return static_cast<int32_t>(offsetof(FloatChanged_t1017988104, ___previousValue_14)); }
	inline float get_previousValue_14() const { return ___previousValue_14; }
	inline float* get_address_of_previousValue_14() { return &___previousValue_14; }
	inline void set_previousValue_14(float value)
	{
		___previousValue_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
