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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GameObjectIsVisible
struct  GameObjectIsVisible_t4229605861  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GameObjectIsVisible::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectIsVisible::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectIsVisible::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GameObjectIsVisible::storeResult
	FsmBool_t664485696 * ___storeResult_16;
	// System.Boolean HutongGames.PlayMaker.Actions.GameObjectIsVisible::everyFrame
	bool ___everyFrame_17;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(GameObjectIsVisible_t4229605861, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_trueEvent_14() { return static_cast<int32_t>(offsetof(GameObjectIsVisible_t4229605861, ___trueEvent_14)); }
	inline FsmEvent_t1258573736 * get_trueEvent_14() const { return ___trueEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_14() { return &___trueEvent_14; }
	inline void set_trueEvent_14(FsmEvent_t1258573736 * value)
	{
		___trueEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_14, value);
	}

	inline static int32_t get_offset_of_falseEvent_15() { return static_cast<int32_t>(offsetof(GameObjectIsVisible_t4229605861, ___falseEvent_15)); }
	inline FsmEvent_t1258573736 * get_falseEvent_15() const { return ___falseEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_15() { return &___falseEvent_15; }
	inline void set_falseEvent_15(FsmEvent_t1258573736 * value)
	{
		___falseEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_15, value);
	}

	inline static int32_t get_offset_of_storeResult_16() { return static_cast<int32_t>(offsetof(GameObjectIsVisible_t4229605861, ___storeResult_16)); }
	inline FsmBool_t664485696 * get_storeResult_16() const { return ___storeResult_16; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_16() { return &___storeResult_16; }
	inline void set_storeResult_16(FsmBool_t664485696 * value)
	{
		___storeResult_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_16, value);
	}

	inline static int32_t get_offset_of_everyFrame_17() { return static_cast<int32_t>(offsetof(GameObjectIsVisible_t4229605861, ___everyFrame_17)); }
	inline bool get_everyFrame_17() const { return ___everyFrame_17; }
	inline bool* get_address_of_everyFrame_17() { return &___everyFrame_17; }
	inline void set_everyFrame_17(bool value)
	{
		___everyFrame_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
