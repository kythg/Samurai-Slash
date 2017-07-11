#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "PlayMaker_HutongGames_PlayMaker_CollisionType2558904546.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CollisionEvent
struct  CollisionEvent_t1916329068  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.CollisionType HutongGames.PlayMaker.Actions.CollisionEvent::collision
	int32_t ___collision_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.CollisionEvent::collideTag
	FsmString_t2414474701 * ___collideTag_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.CollisionEvent::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_13;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.CollisionEvent::storeCollider
	FsmGameObject_t3097142863 * ___storeCollider_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.CollisionEvent::storeForce
	FsmFloat_t937133978 * ___storeForce_15;

public:
	inline static int32_t get_offset_of_collision_11() { return static_cast<int32_t>(offsetof(CollisionEvent_t1916329068, ___collision_11)); }
	inline int32_t get_collision_11() const { return ___collision_11; }
	inline int32_t* get_address_of_collision_11() { return &___collision_11; }
	inline void set_collision_11(int32_t value)
	{
		___collision_11 = value;
	}

	inline static int32_t get_offset_of_collideTag_12() { return static_cast<int32_t>(offsetof(CollisionEvent_t1916329068, ___collideTag_12)); }
	inline FsmString_t2414474701 * get_collideTag_12() const { return ___collideTag_12; }
	inline FsmString_t2414474701 ** get_address_of_collideTag_12() { return &___collideTag_12; }
	inline void set_collideTag_12(FsmString_t2414474701 * value)
	{
		___collideTag_12 = value;
		Il2CppCodeGenWriteBarrier(&___collideTag_12, value);
	}

	inline static int32_t get_offset_of_sendEvent_13() { return static_cast<int32_t>(offsetof(CollisionEvent_t1916329068, ___sendEvent_13)); }
	inline FsmEvent_t1258573736 * get_sendEvent_13() const { return ___sendEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_13() { return &___sendEvent_13; }
	inline void set_sendEvent_13(FsmEvent_t1258573736 * value)
	{
		___sendEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_13, value);
	}

	inline static int32_t get_offset_of_storeCollider_14() { return static_cast<int32_t>(offsetof(CollisionEvent_t1916329068, ___storeCollider_14)); }
	inline FsmGameObject_t3097142863 * get_storeCollider_14() const { return ___storeCollider_14; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeCollider_14() { return &___storeCollider_14; }
	inline void set_storeCollider_14(FsmGameObject_t3097142863 * value)
	{
		___storeCollider_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeCollider_14, value);
	}

	inline static int32_t get_offset_of_storeForce_15() { return static_cast<int32_t>(offsetof(CollisionEvent_t1916329068, ___storeForce_15)); }
	inline FsmFloat_t937133978 * get_storeForce_15() const { return ___storeForce_15; }
	inline FsmFloat_t937133978 ** get_address_of_storeForce_15() { return &___storeForce_15; }
	inline void set_storeForce_15(FsmFloat_t937133978 * value)
	{
		___storeForce_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeForce_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
