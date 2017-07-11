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

// HutongGames.PlayMaker.Actions.GameObjectIsChildOf
struct  GameObjectIsChildOf_t3059270092  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GameObjectIsChildOf::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GameObjectIsChildOf::isChildOf
	FsmGameObject_t3097142863 * ___isChildOf_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectIsChildOf::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectIsChildOf::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GameObjectIsChildOf::storeResult
	FsmBool_t664485696 * ___storeResult_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GameObjectIsChildOf_t3059270092, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_isChildOf_12() { return static_cast<int32_t>(offsetof(GameObjectIsChildOf_t3059270092, ___isChildOf_12)); }
	inline FsmGameObject_t3097142863 * get_isChildOf_12() const { return ___isChildOf_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_isChildOf_12() { return &___isChildOf_12; }
	inline void set_isChildOf_12(FsmGameObject_t3097142863 * value)
	{
		___isChildOf_12 = value;
		Il2CppCodeGenWriteBarrier(&___isChildOf_12, value);
	}

	inline static int32_t get_offset_of_trueEvent_13() { return static_cast<int32_t>(offsetof(GameObjectIsChildOf_t3059270092, ___trueEvent_13)); }
	inline FsmEvent_t1258573736 * get_trueEvent_13() const { return ___trueEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_13() { return &___trueEvent_13; }
	inline void set_trueEvent_13(FsmEvent_t1258573736 * value)
	{
		___trueEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_13, value);
	}

	inline static int32_t get_offset_of_falseEvent_14() { return static_cast<int32_t>(offsetof(GameObjectIsChildOf_t3059270092, ___falseEvent_14)); }
	inline FsmEvent_t1258573736 * get_falseEvent_14() const { return ___falseEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_14() { return &___falseEvent_14; }
	inline void set_falseEvent_14(FsmEvent_t1258573736 * value)
	{
		___falseEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(GameObjectIsChildOf_t3059270092, ___storeResult_15)); }
	inline FsmBool_t664485696 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmBool_t664485696 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
