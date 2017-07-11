#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GameObjectCompareTag
struct  GameObjectCompareTag_t3478618144  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GameObjectCompareTag::gameObject
	FsmGameObject_t3097142863 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GameObjectCompareTag::tag
	FsmString_t2414474701 * ___tag_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectCompareTag::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectCompareTag::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GameObjectCompareTag::storeResult
	FsmBool_t664485696 * ___storeResult_15;
	// System.Boolean HutongGames.PlayMaker.Actions.GameObjectCompareTag::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GameObjectCompareTag_t3478618144, ___gameObject_11)); }
	inline FsmGameObject_t3097142863 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmGameObject_t3097142863 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_tag_12() { return static_cast<int32_t>(offsetof(GameObjectCompareTag_t3478618144, ___tag_12)); }
	inline FsmString_t2414474701 * get_tag_12() const { return ___tag_12; }
	inline FsmString_t2414474701 ** get_address_of_tag_12() { return &___tag_12; }
	inline void set_tag_12(FsmString_t2414474701 * value)
	{
		___tag_12 = value;
		Il2CppCodeGenWriteBarrier(&___tag_12, value);
	}

	inline static int32_t get_offset_of_trueEvent_13() { return static_cast<int32_t>(offsetof(GameObjectCompareTag_t3478618144, ___trueEvent_13)); }
	inline FsmEvent_t1258573736 * get_trueEvent_13() const { return ___trueEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_13() { return &___trueEvent_13; }
	inline void set_trueEvent_13(FsmEvent_t1258573736 * value)
	{
		___trueEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_13, value);
	}

	inline static int32_t get_offset_of_falseEvent_14() { return static_cast<int32_t>(offsetof(GameObjectCompareTag_t3478618144, ___falseEvent_14)); }
	inline FsmEvent_t1258573736 * get_falseEvent_14() const { return ___falseEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_14() { return &___falseEvent_14; }
	inline void set_falseEvent_14(FsmEvent_t1258573736 * value)
	{
		___falseEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(GameObjectCompareTag_t3478618144, ___storeResult_15)); }
	inline FsmBool_t664485696 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmBool_t664485696 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(GameObjectCompareTag_t3478618144, ___everyFrame_16)); }
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
