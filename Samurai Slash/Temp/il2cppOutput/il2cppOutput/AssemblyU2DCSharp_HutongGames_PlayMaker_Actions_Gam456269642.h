#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GameObjectCompare
struct  GameObjectCompare_t456269642  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GameObjectCompare::gameObjectVariable
	FsmOwnerDefault_t2023674184 * ___gameObjectVariable_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GameObjectCompare::compareTo
	FsmGameObject_t3097142863 * ___compareTo_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectCompare::equalEvent
	FsmEvent_t1258573736 * ___equalEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectCompare::notEqualEvent
	FsmEvent_t1258573736 * ___notEqualEvent_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GameObjectCompare::storeResult
	FsmBool_t664485696 * ___storeResult_15;
	// System.Boolean HutongGames.PlayMaker.Actions.GameObjectCompare::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_gameObjectVariable_11() { return static_cast<int32_t>(offsetof(GameObjectCompare_t456269642, ___gameObjectVariable_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObjectVariable_11() const { return ___gameObjectVariable_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObjectVariable_11() { return &___gameObjectVariable_11; }
	inline void set_gameObjectVariable_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObjectVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectVariable_11, value);
	}

	inline static int32_t get_offset_of_compareTo_12() { return static_cast<int32_t>(offsetof(GameObjectCompare_t456269642, ___compareTo_12)); }
	inline FsmGameObject_t3097142863 * get_compareTo_12() const { return ___compareTo_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_compareTo_12() { return &___compareTo_12; }
	inline void set_compareTo_12(FsmGameObject_t3097142863 * value)
	{
		___compareTo_12 = value;
		Il2CppCodeGenWriteBarrier(&___compareTo_12, value);
	}

	inline static int32_t get_offset_of_equalEvent_13() { return static_cast<int32_t>(offsetof(GameObjectCompare_t456269642, ___equalEvent_13)); }
	inline FsmEvent_t1258573736 * get_equalEvent_13() const { return ___equalEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_equalEvent_13() { return &___equalEvent_13; }
	inline void set_equalEvent_13(FsmEvent_t1258573736 * value)
	{
		___equalEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___equalEvent_13, value);
	}

	inline static int32_t get_offset_of_notEqualEvent_14() { return static_cast<int32_t>(offsetof(GameObjectCompare_t456269642, ___notEqualEvent_14)); }
	inline FsmEvent_t1258573736 * get_notEqualEvent_14() const { return ___notEqualEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_notEqualEvent_14() { return &___notEqualEvent_14; }
	inline void set_notEqualEvent_14(FsmEvent_t1258573736 * value)
	{
		___notEqualEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___notEqualEvent_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(GameObjectCompare_t456269642, ___storeResult_15)); }
	inline FsmBool_t664485696 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmBool_t664485696 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(GameObjectCompare_t456269642, ___everyFrame_16)); }
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
