#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"

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
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetNextRayCast2d
struct  GetNextRayCast2d_t3283411550  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetNextRayCast2d::fromGameObject
	FsmOwnerDefault_t2023674184 * ___fromGameObject_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextRayCast2d::fromPosition
	FsmVector2_t2430450063 * ___fromPosition_12;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextRayCast2d::direction
	FsmVector2_t2430450063 * ___direction_13;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.GetNextRayCast2d::space
	int32_t ___space_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetNextRayCast2d::distance
	FsmFloat_t937133978 * ___distance_15;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextRayCast2d::minDepth
	FsmInt_t1273009179 * ___minDepth_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextRayCast2d::maxDepth
	FsmInt_t1273009179 * ___maxDepth_17;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.GetNextRayCast2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_18;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetNextRayCast2d::invertMask
	FsmBool_t664485696 * ___invertMask_19;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextRayCast2d::collidersCount
	FsmInt_t1273009179 * ___collidersCount_20;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetNextRayCast2d::storeNextCollider
	FsmGameObject_t3097142863 * ___storeNextCollider_21;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextRayCast2d::storeNextHitPoint
	FsmVector2_t2430450063 * ___storeNextHitPoint_22;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextRayCast2d::storeNextHitNormal
	FsmVector2_t2430450063 * ___storeNextHitNormal_23;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetNextRayCast2d::storeNextHitDistance
	FsmFloat_t937133978 * ___storeNextHitDistance_24;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetNextRayCast2d::storeNextHitFraction
	FsmFloat_t937133978 * ___storeNextHitFraction_25;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextRayCast2d::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_26;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextRayCast2d::finishedEvent
	FsmEvent_t1258573736 * ___finishedEvent_27;
	// UnityEngine.RaycastHit2D[] HutongGames.PlayMaker.Actions.GetNextRayCast2d::hits
	RaycastHit2DU5BU5D_t4176517891* ___hits_28;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextRayCast2d::colliderCount
	int32_t ___colliderCount_29;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextRayCast2d::nextColliderIndex
	int32_t ___nextColliderIndex_30;

public:
	inline static int32_t get_offset_of_fromGameObject_11() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___fromGameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_fromGameObject_11() const { return ___fromGameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_fromGameObject_11() { return &___fromGameObject_11; }
	inline void set_fromGameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___fromGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromGameObject_11, value);
	}

	inline static int32_t get_offset_of_fromPosition_12() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___fromPosition_12)); }
	inline FsmVector2_t2430450063 * get_fromPosition_12() const { return ___fromPosition_12; }
	inline FsmVector2_t2430450063 ** get_address_of_fromPosition_12() { return &___fromPosition_12; }
	inline void set_fromPosition_12(FsmVector2_t2430450063 * value)
	{
		___fromPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_12, value);
	}

	inline static int32_t get_offset_of_direction_13() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___direction_13)); }
	inline FsmVector2_t2430450063 * get_direction_13() const { return ___direction_13; }
	inline FsmVector2_t2430450063 ** get_address_of_direction_13() { return &___direction_13; }
	inline void set_direction_13(FsmVector2_t2430450063 * value)
	{
		___direction_13 = value;
		Il2CppCodeGenWriteBarrier(&___direction_13, value);
	}

	inline static int32_t get_offset_of_space_14() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___space_14)); }
	inline int32_t get_space_14() const { return ___space_14; }
	inline int32_t* get_address_of_space_14() { return &___space_14; }
	inline void set_space_14(int32_t value)
	{
		___space_14 = value;
	}

	inline static int32_t get_offset_of_distance_15() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___distance_15)); }
	inline FsmFloat_t937133978 * get_distance_15() const { return ___distance_15; }
	inline FsmFloat_t937133978 ** get_address_of_distance_15() { return &___distance_15; }
	inline void set_distance_15(FsmFloat_t937133978 * value)
	{
		___distance_15 = value;
		Il2CppCodeGenWriteBarrier(&___distance_15, value);
	}

	inline static int32_t get_offset_of_minDepth_16() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___minDepth_16)); }
	inline FsmInt_t1273009179 * get_minDepth_16() const { return ___minDepth_16; }
	inline FsmInt_t1273009179 ** get_address_of_minDepth_16() { return &___minDepth_16; }
	inline void set_minDepth_16(FsmInt_t1273009179 * value)
	{
		___minDepth_16 = value;
		Il2CppCodeGenWriteBarrier(&___minDepth_16, value);
	}

	inline static int32_t get_offset_of_maxDepth_17() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___maxDepth_17)); }
	inline FsmInt_t1273009179 * get_maxDepth_17() const { return ___maxDepth_17; }
	inline FsmInt_t1273009179 ** get_address_of_maxDepth_17() { return &___maxDepth_17; }
	inline void set_maxDepth_17(FsmInt_t1273009179 * value)
	{
		___maxDepth_17 = value;
		Il2CppCodeGenWriteBarrier(&___maxDepth_17, value);
	}

	inline static int32_t get_offset_of_layerMask_18() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___layerMask_18)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_18() const { return ___layerMask_18; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_18() { return &___layerMask_18; }
	inline void set_layerMask_18(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_18 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_18, value);
	}

	inline static int32_t get_offset_of_invertMask_19() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___invertMask_19)); }
	inline FsmBool_t664485696 * get_invertMask_19() const { return ___invertMask_19; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_19() { return &___invertMask_19; }
	inline void set_invertMask_19(FsmBool_t664485696 * value)
	{
		___invertMask_19 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_19, value);
	}

	inline static int32_t get_offset_of_collidersCount_20() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___collidersCount_20)); }
	inline FsmInt_t1273009179 * get_collidersCount_20() const { return ___collidersCount_20; }
	inline FsmInt_t1273009179 ** get_address_of_collidersCount_20() { return &___collidersCount_20; }
	inline void set_collidersCount_20(FsmInt_t1273009179 * value)
	{
		___collidersCount_20 = value;
		Il2CppCodeGenWriteBarrier(&___collidersCount_20, value);
	}

	inline static int32_t get_offset_of_storeNextCollider_21() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___storeNextCollider_21)); }
	inline FsmGameObject_t3097142863 * get_storeNextCollider_21() const { return ___storeNextCollider_21; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeNextCollider_21() { return &___storeNextCollider_21; }
	inline void set_storeNextCollider_21(FsmGameObject_t3097142863 * value)
	{
		___storeNextCollider_21 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextCollider_21, value);
	}

	inline static int32_t get_offset_of_storeNextHitPoint_22() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___storeNextHitPoint_22)); }
	inline FsmVector2_t2430450063 * get_storeNextHitPoint_22() const { return ___storeNextHitPoint_22; }
	inline FsmVector2_t2430450063 ** get_address_of_storeNextHitPoint_22() { return &___storeNextHitPoint_22; }
	inline void set_storeNextHitPoint_22(FsmVector2_t2430450063 * value)
	{
		___storeNextHitPoint_22 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextHitPoint_22, value);
	}

	inline static int32_t get_offset_of_storeNextHitNormal_23() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___storeNextHitNormal_23)); }
	inline FsmVector2_t2430450063 * get_storeNextHitNormal_23() const { return ___storeNextHitNormal_23; }
	inline FsmVector2_t2430450063 ** get_address_of_storeNextHitNormal_23() { return &___storeNextHitNormal_23; }
	inline void set_storeNextHitNormal_23(FsmVector2_t2430450063 * value)
	{
		___storeNextHitNormal_23 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextHitNormal_23, value);
	}

	inline static int32_t get_offset_of_storeNextHitDistance_24() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___storeNextHitDistance_24)); }
	inline FsmFloat_t937133978 * get_storeNextHitDistance_24() const { return ___storeNextHitDistance_24; }
	inline FsmFloat_t937133978 ** get_address_of_storeNextHitDistance_24() { return &___storeNextHitDistance_24; }
	inline void set_storeNextHitDistance_24(FsmFloat_t937133978 * value)
	{
		___storeNextHitDistance_24 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextHitDistance_24, value);
	}

	inline static int32_t get_offset_of_storeNextHitFraction_25() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___storeNextHitFraction_25)); }
	inline FsmFloat_t937133978 * get_storeNextHitFraction_25() const { return ___storeNextHitFraction_25; }
	inline FsmFloat_t937133978 ** get_address_of_storeNextHitFraction_25() { return &___storeNextHitFraction_25; }
	inline void set_storeNextHitFraction_25(FsmFloat_t937133978 * value)
	{
		___storeNextHitFraction_25 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextHitFraction_25, value);
	}

	inline static int32_t get_offset_of_loopEvent_26() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___loopEvent_26)); }
	inline FsmEvent_t1258573736 * get_loopEvent_26() const { return ___loopEvent_26; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_26() { return &___loopEvent_26; }
	inline void set_loopEvent_26(FsmEvent_t1258573736 * value)
	{
		___loopEvent_26 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_26, value);
	}

	inline static int32_t get_offset_of_finishedEvent_27() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___finishedEvent_27)); }
	inline FsmEvent_t1258573736 * get_finishedEvent_27() const { return ___finishedEvent_27; }
	inline FsmEvent_t1258573736 ** get_address_of_finishedEvent_27() { return &___finishedEvent_27; }
	inline void set_finishedEvent_27(FsmEvent_t1258573736 * value)
	{
		___finishedEvent_27 = value;
		Il2CppCodeGenWriteBarrier(&___finishedEvent_27, value);
	}

	inline static int32_t get_offset_of_hits_28() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___hits_28)); }
	inline RaycastHit2DU5BU5D_t4176517891* get_hits_28() const { return ___hits_28; }
	inline RaycastHit2DU5BU5D_t4176517891** get_address_of_hits_28() { return &___hits_28; }
	inline void set_hits_28(RaycastHit2DU5BU5D_t4176517891* value)
	{
		___hits_28 = value;
		Il2CppCodeGenWriteBarrier(&___hits_28, value);
	}

	inline static int32_t get_offset_of_colliderCount_29() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___colliderCount_29)); }
	inline int32_t get_colliderCount_29() const { return ___colliderCount_29; }
	inline int32_t* get_address_of_colliderCount_29() { return &___colliderCount_29; }
	inline void set_colliderCount_29(int32_t value)
	{
		___colliderCount_29 = value;
	}

	inline static int32_t get_offset_of_nextColliderIndex_30() { return static_cast<int32_t>(offsetof(GetNextRayCast2d_t3283411550, ___nextColliderIndex_30)); }
	inline int32_t get_nextColliderIndex_30() const { return ___nextColliderIndex_30; }
	inline int32_t* get_address_of_nextColliderIndex_30() { return &___nextColliderIndex_30; }
	inline void set_nextColliderIndex_30(int32_t value)
	{
		___nextColliderIndex_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
