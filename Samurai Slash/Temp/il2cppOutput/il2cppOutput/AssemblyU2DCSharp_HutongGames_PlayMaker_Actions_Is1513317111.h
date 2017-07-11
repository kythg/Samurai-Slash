#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com540501634.h"

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

// HutongGames.PlayMaker.Actions.IsSleeping
struct  IsSleeping_t1513317111  : public ComponentAction_1_t540501634
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.IsSleeping::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.IsSleeping::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.IsSleeping::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.IsSleeping::store
	FsmBool_t664485696 * ___store_16;
	// System.Boolean HutongGames.PlayMaker.Actions.IsSleeping::everyFrame
	bool ___everyFrame_17;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(IsSleeping_t1513317111, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_trueEvent_14() { return static_cast<int32_t>(offsetof(IsSleeping_t1513317111, ___trueEvent_14)); }
	inline FsmEvent_t1258573736 * get_trueEvent_14() const { return ___trueEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_14() { return &___trueEvent_14; }
	inline void set_trueEvent_14(FsmEvent_t1258573736 * value)
	{
		___trueEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_14, value);
	}

	inline static int32_t get_offset_of_falseEvent_15() { return static_cast<int32_t>(offsetof(IsSleeping_t1513317111, ___falseEvent_15)); }
	inline FsmEvent_t1258573736 * get_falseEvent_15() const { return ___falseEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_15() { return &___falseEvent_15; }
	inline void set_falseEvent_15(FsmEvent_t1258573736 * value)
	{
		___falseEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_15, value);
	}

	inline static int32_t get_offset_of_store_16() { return static_cast<int32_t>(offsetof(IsSleeping_t1513317111, ___store_16)); }
	inline FsmBool_t664485696 * get_store_16() const { return ___store_16; }
	inline FsmBool_t664485696 ** get_address_of_store_16() { return &___store_16; }
	inline void set_store_16(FsmBool_t664485696 * value)
	{
		___store_16 = value;
		Il2CppCodeGenWriteBarrier(&___store_16, value);
	}

	inline static int32_t get_offset_of_everyFrame_17() { return static_cast<int32_t>(offsetof(IsSleeping_t1513317111, ___everyFrame_17)); }
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
