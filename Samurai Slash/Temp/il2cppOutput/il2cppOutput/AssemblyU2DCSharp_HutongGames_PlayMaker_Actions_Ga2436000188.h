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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GameObjectIsNull
struct  GameObjectIsNull_t2436000188  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GameObjectIsNull::gameObject
	FsmGameObject_t3097142863 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectIsNull::isNull
	FsmEvent_t1258573736 * ___isNull_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GameObjectIsNull::isNotNull
	FsmEvent_t1258573736 * ___isNotNull_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GameObjectIsNull::storeResult
	FsmBool_t664485696 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GameObjectIsNull::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GameObjectIsNull_t2436000188, ___gameObject_11)); }
	inline FsmGameObject_t3097142863 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmGameObject_t3097142863 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_isNull_12() { return static_cast<int32_t>(offsetof(GameObjectIsNull_t2436000188, ___isNull_12)); }
	inline FsmEvent_t1258573736 * get_isNull_12() const { return ___isNull_12; }
	inline FsmEvent_t1258573736 ** get_address_of_isNull_12() { return &___isNull_12; }
	inline void set_isNull_12(FsmEvent_t1258573736 * value)
	{
		___isNull_12 = value;
		Il2CppCodeGenWriteBarrier(&___isNull_12, value);
	}

	inline static int32_t get_offset_of_isNotNull_13() { return static_cast<int32_t>(offsetof(GameObjectIsNull_t2436000188, ___isNotNull_13)); }
	inline FsmEvent_t1258573736 * get_isNotNull_13() const { return ___isNotNull_13; }
	inline FsmEvent_t1258573736 ** get_address_of_isNotNull_13() { return &___isNotNull_13; }
	inline void set_isNotNull_13(FsmEvent_t1258573736 * value)
	{
		___isNotNull_13 = value;
		Il2CppCodeGenWriteBarrier(&___isNotNull_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(GameObjectIsNull_t2436000188, ___storeResult_14)); }
	inline FsmBool_t664485696 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmBool_t664485696 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GameObjectIsNull_t2436000188, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
