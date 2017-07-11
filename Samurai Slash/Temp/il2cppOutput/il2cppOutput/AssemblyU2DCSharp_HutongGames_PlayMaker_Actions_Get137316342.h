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

// HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d
struct  GetNextOverlapPoint2d_t137316342  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::position
	FsmVector2_t2430450063 * ___position_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::minDepth
	FsmInt_t1273009179 * ___minDepth_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::maxDepth
	FsmInt_t1273009179 * ___maxDepth_14;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::invertMask
	FsmBool_t664485696 * ___invertMask_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::collidersCount
	FsmInt_t1273009179 * ___collidersCount_17;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::storeNextCollider
	FsmGameObject_t3097142863 * ___storeNextCollider_18;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_19;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::finishedEvent
	FsmEvent_t1258573736 * ___finishedEvent_20;
	// UnityEngine.Collider2D[] HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::colliders
	Collider2DU5BU5D_t3535523695* ___colliders_21;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::colliderCount
	int32_t ___colliderCount_22;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextOverlapPoint2d::nextColliderIndex
	int32_t ___nextColliderIndex_23;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_position_12() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___position_12)); }
	inline FsmVector2_t2430450063 * get_position_12() const { return ___position_12; }
	inline FsmVector2_t2430450063 ** get_address_of_position_12() { return &___position_12; }
	inline void set_position_12(FsmVector2_t2430450063 * value)
	{
		___position_12 = value;
		Il2CppCodeGenWriteBarrier(&___position_12, value);
	}

	inline static int32_t get_offset_of_minDepth_13() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___minDepth_13)); }
	inline FsmInt_t1273009179 * get_minDepth_13() const { return ___minDepth_13; }
	inline FsmInt_t1273009179 ** get_address_of_minDepth_13() { return &___minDepth_13; }
	inline void set_minDepth_13(FsmInt_t1273009179 * value)
	{
		___minDepth_13 = value;
		Il2CppCodeGenWriteBarrier(&___minDepth_13, value);
	}

	inline static int32_t get_offset_of_maxDepth_14() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___maxDepth_14)); }
	inline FsmInt_t1273009179 * get_maxDepth_14() const { return ___maxDepth_14; }
	inline FsmInt_t1273009179 ** get_address_of_maxDepth_14() { return &___maxDepth_14; }
	inline void set_maxDepth_14(FsmInt_t1273009179 * value)
	{
		___maxDepth_14 = value;
		Il2CppCodeGenWriteBarrier(&___maxDepth_14, value);
	}

	inline static int32_t get_offset_of_layerMask_15() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___layerMask_15)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_15() const { return ___layerMask_15; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_15() { return &___layerMask_15; }
	inline void set_layerMask_15(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_15 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_15, value);
	}

	inline static int32_t get_offset_of_invertMask_16() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___invertMask_16)); }
	inline FsmBool_t664485696 * get_invertMask_16() const { return ___invertMask_16; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_16() { return &___invertMask_16; }
	inline void set_invertMask_16(FsmBool_t664485696 * value)
	{
		___invertMask_16 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_16, value);
	}

	inline static int32_t get_offset_of_collidersCount_17() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___collidersCount_17)); }
	inline FsmInt_t1273009179 * get_collidersCount_17() const { return ___collidersCount_17; }
	inline FsmInt_t1273009179 ** get_address_of_collidersCount_17() { return &___collidersCount_17; }
	inline void set_collidersCount_17(FsmInt_t1273009179 * value)
	{
		___collidersCount_17 = value;
		Il2CppCodeGenWriteBarrier(&___collidersCount_17, value);
	}

	inline static int32_t get_offset_of_storeNextCollider_18() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___storeNextCollider_18)); }
	inline FsmGameObject_t3097142863 * get_storeNextCollider_18() const { return ___storeNextCollider_18; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeNextCollider_18() { return &___storeNextCollider_18; }
	inline void set_storeNextCollider_18(FsmGameObject_t3097142863 * value)
	{
		___storeNextCollider_18 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextCollider_18, value);
	}

	inline static int32_t get_offset_of_loopEvent_19() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___loopEvent_19)); }
	inline FsmEvent_t1258573736 * get_loopEvent_19() const { return ___loopEvent_19; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_19() { return &___loopEvent_19; }
	inline void set_loopEvent_19(FsmEvent_t1258573736 * value)
	{
		___loopEvent_19 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_19, value);
	}

	inline static int32_t get_offset_of_finishedEvent_20() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___finishedEvent_20)); }
	inline FsmEvent_t1258573736 * get_finishedEvent_20() const { return ___finishedEvent_20; }
	inline FsmEvent_t1258573736 ** get_address_of_finishedEvent_20() { return &___finishedEvent_20; }
	inline void set_finishedEvent_20(FsmEvent_t1258573736 * value)
	{
		___finishedEvent_20 = value;
		Il2CppCodeGenWriteBarrier(&___finishedEvent_20, value);
	}

	inline static int32_t get_offset_of_colliders_21() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___colliders_21)); }
	inline Collider2DU5BU5D_t3535523695* get_colliders_21() const { return ___colliders_21; }
	inline Collider2DU5BU5D_t3535523695** get_address_of_colliders_21() { return &___colliders_21; }
	inline void set_colliders_21(Collider2DU5BU5D_t3535523695* value)
	{
		___colliders_21 = value;
		Il2CppCodeGenWriteBarrier(&___colliders_21, value);
	}

	inline static int32_t get_offset_of_colliderCount_22() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___colliderCount_22)); }
	inline int32_t get_colliderCount_22() const { return ___colliderCount_22; }
	inline int32_t* get_address_of_colliderCount_22() { return &___colliderCount_22; }
	inline void set_colliderCount_22(int32_t value)
	{
		___colliderCount_22 = value;
	}

	inline static int32_t get_offset_of_nextColliderIndex_23() { return static_cast<int32_t>(offsetof(GetNextOverlapPoint2d_t137316342, ___nextColliderIndex_23)); }
	inline int32_t get_nextColliderIndex_23() const { return ___nextColliderIndex_23; }
	inline int32_t* get_address_of_nextColliderIndex_23() { return &___nextColliderIndex_23; }
	inline void set_nextColliderIndex_23(int32_t value)
	{
		___nextColliderIndex_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
