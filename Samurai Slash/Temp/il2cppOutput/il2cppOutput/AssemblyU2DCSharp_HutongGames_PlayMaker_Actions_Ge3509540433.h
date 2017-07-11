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
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t3535523695;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetNextOverlapArea2d
struct  GetNextOverlapArea2d_t3509540433  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::firstCornerGameObject
	FsmOwnerDefault_t2023674184 * ___firstCornerGameObject_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::firstCornerPosition
	FsmVector2_t2430450063 * ___firstCornerPosition_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::secondCornerGameObject
	FsmGameObject_t3097142863 * ___secondCornerGameObject_13;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::secondCornerPosition
	FsmVector2_t2430450063 * ___secondCornerPosition_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::minDepth
	FsmInt_t1273009179 * ___minDepth_15;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::maxDepth
	FsmInt_t1273009179 * ___maxDepth_16;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::invertMask
	FsmBool_t664485696 * ___invertMask_18;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::collidersCount
	FsmInt_t1273009179 * ___collidersCount_19;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::storeNextCollider
	FsmGameObject_t3097142863 * ___storeNextCollider_20;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_21;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::finishedEvent
	FsmEvent_t1258573736 * ___finishedEvent_22;
	// UnityEngine.Collider2D[] HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::colliders
	Collider2DU5BU5D_t3535523695* ___colliders_23;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::colliderCount
	int32_t ___colliderCount_24;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextOverlapArea2d::nextColliderIndex
	int32_t ___nextColliderIndex_25;

public:
	inline static int32_t get_offset_of_firstCornerGameObject_11() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___firstCornerGameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_firstCornerGameObject_11() const { return ___firstCornerGameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_firstCornerGameObject_11() { return &___firstCornerGameObject_11; }
	inline void set_firstCornerGameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___firstCornerGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___firstCornerGameObject_11, value);
	}

	inline static int32_t get_offset_of_firstCornerPosition_12() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___firstCornerPosition_12)); }
	inline FsmVector2_t2430450063 * get_firstCornerPosition_12() const { return ___firstCornerPosition_12; }
	inline FsmVector2_t2430450063 ** get_address_of_firstCornerPosition_12() { return &___firstCornerPosition_12; }
	inline void set_firstCornerPosition_12(FsmVector2_t2430450063 * value)
	{
		___firstCornerPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___firstCornerPosition_12, value);
	}

	inline static int32_t get_offset_of_secondCornerGameObject_13() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___secondCornerGameObject_13)); }
	inline FsmGameObject_t3097142863 * get_secondCornerGameObject_13() const { return ___secondCornerGameObject_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_secondCornerGameObject_13() { return &___secondCornerGameObject_13; }
	inline void set_secondCornerGameObject_13(FsmGameObject_t3097142863 * value)
	{
		___secondCornerGameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___secondCornerGameObject_13, value);
	}

	inline static int32_t get_offset_of_secondCornerPosition_14() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___secondCornerPosition_14)); }
	inline FsmVector2_t2430450063 * get_secondCornerPosition_14() const { return ___secondCornerPosition_14; }
	inline FsmVector2_t2430450063 ** get_address_of_secondCornerPosition_14() { return &___secondCornerPosition_14; }
	inline void set_secondCornerPosition_14(FsmVector2_t2430450063 * value)
	{
		___secondCornerPosition_14 = value;
		Il2CppCodeGenWriteBarrier(&___secondCornerPosition_14, value);
	}

	inline static int32_t get_offset_of_minDepth_15() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___minDepth_15)); }
	inline FsmInt_t1273009179 * get_minDepth_15() const { return ___minDepth_15; }
	inline FsmInt_t1273009179 ** get_address_of_minDepth_15() { return &___minDepth_15; }
	inline void set_minDepth_15(FsmInt_t1273009179 * value)
	{
		___minDepth_15 = value;
		Il2CppCodeGenWriteBarrier(&___minDepth_15, value);
	}

	inline static int32_t get_offset_of_maxDepth_16() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___maxDepth_16)); }
	inline FsmInt_t1273009179 * get_maxDepth_16() const { return ___maxDepth_16; }
	inline FsmInt_t1273009179 ** get_address_of_maxDepth_16() { return &___maxDepth_16; }
	inline void set_maxDepth_16(FsmInt_t1273009179 * value)
	{
		___maxDepth_16 = value;
		Il2CppCodeGenWriteBarrier(&___maxDepth_16, value);
	}

	inline static int32_t get_offset_of_layerMask_17() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___layerMask_17)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_17() const { return ___layerMask_17; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_17() { return &___layerMask_17; }
	inline void set_layerMask_17(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_17 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_17, value);
	}

	inline static int32_t get_offset_of_invertMask_18() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___invertMask_18)); }
	inline FsmBool_t664485696 * get_invertMask_18() const { return ___invertMask_18; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_18() { return &___invertMask_18; }
	inline void set_invertMask_18(FsmBool_t664485696 * value)
	{
		___invertMask_18 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_18, value);
	}

	inline static int32_t get_offset_of_collidersCount_19() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___collidersCount_19)); }
	inline FsmInt_t1273009179 * get_collidersCount_19() const { return ___collidersCount_19; }
	inline FsmInt_t1273009179 ** get_address_of_collidersCount_19() { return &___collidersCount_19; }
	inline void set_collidersCount_19(FsmInt_t1273009179 * value)
	{
		___collidersCount_19 = value;
		Il2CppCodeGenWriteBarrier(&___collidersCount_19, value);
	}

	inline static int32_t get_offset_of_storeNextCollider_20() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___storeNextCollider_20)); }
	inline FsmGameObject_t3097142863 * get_storeNextCollider_20() const { return ___storeNextCollider_20; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeNextCollider_20() { return &___storeNextCollider_20; }
	inline void set_storeNextCollider_20(FsmGameObject_t3097142863 * value)
	{
		___storeNextCollider_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextCollider_20, value);
	}

	inline static int32_t get_offset_of_loopEvent_21() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___loopEvent_21)); }
	inline FsmEvent_t1258573736 * get_loopEvent_21() const { return ___loopEvent_21; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_21() { return &___loopEvent_21; }
	inline void set_loopEvent_21(FsmEvent_t1258573736 * value)
	{
		___loopEvent_21 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_21, value);
	}

	inline static int32_t get_offset_of_finishedEvent_22() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___finishedEvent_22)); }
	inline FsmEvent_t1258573736 * get_finishedEvent_22() const { return ___finishedEvent_22; }
	inline FsmEvent_t1258573736 ** get_address_of_finishedEvent_22() { return &___finishedEvent_22; }
	inline void set_finishedEvent_22(FsmEvent_t1258573736 * value)
	{
		___finishedEvent_22 = value;
		Il2CppCodeGenWriteBarrier(&___finishedEvent_22, value);
	}

	inline static int32_t get_offset_of_colliders_23() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___colliders_23)); }
	inline Collider2DU5BU5D_t3535523695* get_colliders_23() const { return ___colliders_23; }
	inline Collider2DU5BU5D_t3535523695** get_address_of_colliders_23() { return &___colliders_23; }
	inline void set_colliders_23(Collider2DU5BU5D_t3535523695* value)
	{
		___colliders_23 = value;
		Il2CppCodeGenWriteBarrier(&___colliders_23, value);
	}

	inline static int32_t get_offset_of_colliderCount_24() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___colliderCount_24)); }
	inline int32_t get_colliderCount_24() const { return ___colliderCount_24; }
	inline int32_t* get_address_of_colliderCount_24() { return &___colliderCount_24; }
	inline void set_colliderCount_24(int32_t value)
	{
		___colliderCount_24 = value;
	}

	inline static int32_t get_offset_of_nextColliderIndex_25() { return static_cast<int32_t>(offsetof(GetNextOverlapArea2d_t3509540433, ___nextColliderIndex_25)); }
	inline int32_t get_nextColliderIndex_25() const { return ___nextColliderIndex_25; }
	inline int32_t* get_address_of_nextColliderIndex_25() { return &___nextColliderIndex_25; }
	inline void set_nextColliderIndex_25(int32_t value)
	{
		___nextColliderIndex_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
