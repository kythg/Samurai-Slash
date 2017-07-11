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
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t3535523695;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d
struct  GetNextOverlapCircle2d_t2449542668  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::fromGameObject
	FsmOwnerDefault_t2023674184 * ___fromGameObject_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::fromPosition
	FsmVector2_t2430450063 * ___fromPosition_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::radius
	FsmFloat_t937133978 * ___radius_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::minDepth
	FsmInt_t1273009179 * ___minDepth_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::maxDepth
	FsmInt_t1273009179 * ___maxDepth_15;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::invertMask
	FsmBool_t664485696 * ___invertMask_17;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::collidersCount
	FsmInt_t1273009179 * ___collidersCount_18;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::storeNextCollider
	FsmGameObject_t3097142863 * ___storeNextCollider_19;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_20;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::finishedEvent
	FsmEvent_t1258573736 * ___finishedEvent_21;
	// UnityEngine.Collider2D[] HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::colliders
	Collider2DU5BU5D_t3535523695* ___colliders_22;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::colliderCount
	int32_t ___colliderCount_23;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextOverlapCircle2d::nextColliderIndex
	int32_t ___nextColliderIndex_24;

public:
	inline static int32_t get_offset_of_fromGameObject_11() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___fromGameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_fromGameObject_11() const { return ___fromGameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_fromGameObject_11() { return &___fromGameObject_11; }
	inline void set_fromGameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___fromGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromGameObject_11, value);
	}

	inline static int32_t get_offset_of_fromPosition_12() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___fromPosition_12)); }
	inline FsmVector2_t2430450063 * get_fromPosition_12() const { return ___fromPosition_12; }
	inline FsmVector2_t2430450063 ** get_address_of_fromPosition_12() { return &___fromPosition_12; }
	inline void set_fromPosition_12(FsmVector2_t2430450063 * value)
	{
		___fromPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_12, value);
	}

	inline static int32_t get_offset_of_radius_13() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___radius_13)); }
	inline FsmFloat_t937133978 * get_radius_13() const { return ___radius_13; }
	inline FsmFloat_t937133978 ** get_address_of_radius_13() { return &___radius_13; }
	inline void set_radius_13(FsmFloat_t937133978 * value)
	{
		___radius_13 = value;
		Il2CppCodeGenWriteBarrier(&___radius_13, value);
	}

	inline static int32_t get_offset_of_minDepth_14() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___minDepth_14)); }
	inline FsmInt_t1273009179 * get_minDepth_14() const { return ___minDepth_14; }
	inline FsmInt_t1273009179 ** get_address_of_minDepth_14() { return &___minDepth_14; }
	inline void set_minDepth_14(FsmInt_t1273009179 * value)
	{
		___minDepth_14 = value;
		Il2CppCodeGenWriteBarrier(&___minDepth_14, value);
	}

	inline static int32_t get_offset_of_maxDepth_15() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___maxDepth_15)); }
	inline FsmInt_t1273009179 * get_maxDepth_15() const { return ___maxDepth_15; }
	inline FsmInt_t1273009179 ** get_address_of_maxDepth_15() { return &___maxDepth_15; }
	inline void set_maxDepth_15(FsmInt_t1273009179 * value)
	{
		___maxDepth_15 = value;
		Il2CppCodeGenWriteBarrier(&___maxDepth_15, value);
	}

	inline static int32_t get_offset_of_layerMask_16() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___layerMask_16)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_16() const { return ___layerMask_16; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_16() { return &___layerMask_16; }
	inline void set_layerMask_16(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_16 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_16, value);
	}

	inline static int32_t get_offset_of_invertMask_17() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___invertMask_17)); }
	inline FsmBool_t664485696 * get_invertMask_17() const { return ___invertMask_17; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_17() { return &___invertMask_17; }
	inline void set_invertMask_17(FsmBool_t664485696 * value)
	{
		___invertMask_17 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_17, value);
	}

	inline static int32_t get_offset_of_collidersCount_18() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___collidersCount_18)); }
	inline FsmInt_t1273009179 * get_collidersCount_18() const { return ___collidersCount_18; }
	inline FsmInt_t1273009179 ** get_address_of_collidersCount_18() { return &___collidersCount_18; }
	inline void set_collidersCount_18(FsmInt_t1273009179 * value)
	{
		___collidersCount_18 = value;
		Il2CppCodeGenWriteBarrier(&___collidersCount_18, value);
	}

	inline static int32_t get_offset_of_storeNextCollider_19() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___storeNextCollider_19)); }
	inline FsmGameObject_t3097142863 * get_storeNextCollider_19() const { return ___storeNextCollider_19; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeNextCollider_19() { return &___storeNextCollider_19; }
	inline void set_storeNextCollider_19(FsmGameObject_t3097142863 * value)
	{
		___storeNextCollider_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextCollider_19, value);
	}

	inline static int32_t get_offset_of_loopEvent_20() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___loopEvent_20)); }
	inline FsmEvent_t1258573736 * get_loopEvent_20() const { return ___loopEvent_20; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_20() { return &___loopEvent_20; }
	inline void set_loopEvent_20(FsmEvent_t1258573736 * value)
	{
		___loopEvent_20 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_20, value);
	}

	inline static int32_t get_offset_of_finishedEvent_21() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___finishedEvent_21)); }
	inline FsmEvent_t1258573736 * get_finishedEvent_21() const { return ___finishedEvent_21; }
	inline FsmEvent_t1258573736 ** get_address_of_finishedEvent_21() { return &___finishedEvent_21; }
	inline void set_finishedEvent_21(FsmEvent_t1258573736 * value)
	{
		___finishedEvent_21 = value;
		Il2CppCodeGenWriteBarrier(&___finishedEvent_21, value);
	}

	inline static int32_t get_offset_of_colliders_22() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___colliders_22)); }
	inline Collider2DU5BU5D_t3535523695* get_colliders_22() const { return ___colliders_22; }
	inline Collider2DU5BU5D_t3535523695** get_address_of_colliders_22() { return &___colliders_22; }
	inline void set_colliders_22(Collider2DU5BU5D_t3535523695* value)
	{
		___colliders_22 = value;
		Il2CppCodeGenWriteBarrier(&___colliders_22, value);
	}

	inline static int32_t get_offset_of_colliderCount_23() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___colliderCount_23)); }
	inline int32_t get_colliderCount_23() const { return ___colliderCount_23; }
	inline int32_t* get_address_of_colliderCount_23() { return &___colliderCount_23; }
	inline void set_colliderCount_23(int32_t value)
	{
		___colliderCount_23 = value;
	}

	inline static int32_t get_offset_of_nextColliderIndex_24() { return static_cast<int32_t>(offsetof(GetNextOverlapCircle2d_t2449542668, ___nextColliderIndex_24)); }
	inline int32_t get_nextColliderIndex_24() const { return ___nextColliderIndex_24; }
	inline int32_t* get_address_of_nextColliderIndex_24() { return &___nextColliderIndex_24; }
	inline void set_nextColliderIndex_24(int32_t value)
	{
		___nextColliderIndex_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
