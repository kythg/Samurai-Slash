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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetNextLineCast2d
struct  GetNextLineCast2d_t3575895894  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetNextLineCast2d::fromGameObject
	FsmOwnerDefault_t2023674184 * ___fromGameObject_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextLineCast2d::fromPosition
	FsmVector2_t2430450063 * ___fromPosition_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetNextLineCast2d::toGameObject
	FsmGameObject_t3097142863 * ___toGameObject_13;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextLineCast2d::toPosition
	FsmVector2_t2430450063 * ___toPosition_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextLineCast2d::minDepth
	FsmInt_t1273009179 * ___minDepth_15;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextLineCast2d::maxDepth
	FsmInt_t1273009179 * ___maxDepth_16;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.GetNextLineCast2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetNextLineCast2d::invertMask
	FsmBool_t664485696 * ___invertMask_18;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetNextLineCast2d::collidersCount
	FsmInt_t1273009179 * ___collidersCount_19;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetNextLineCast2d::storeNextCollider
	FsmGameObject_t3097142863 * ___storeNextCollider_20;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextLineCast2d::storeNextHitPoint
	FsmVector2_t2430450063 * ___storeNextHitPoint_21;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetNextLineCast2d::storeNextHitNormal
	FsmVector2_t2430450063 * ___storeNextHitNormal_22;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetNextLineCast2d::storeNextHitDistance
	FsmFloat_t937133978 * ___storeNextHitDistance_23;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextLineCast2d::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_24;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextLineCast2d::finishedEvent
	FsmEvent_t1258573736 * ___finishedEvent_25;
	// UnityEngine.RaycastHit2D[] HutongGames.PlayMaker.Actions.GetNextLineCast2d::hits
	RaycastHit2DU5BU5D_t4176517891* ___hits_26;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextLineCast2d::colliderCount
	int32_t ___colliderCount_27;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextLineCast2d::nextColliderIndex
	int32_t ___nextColliderIndex_28;

public:
	inline static int32_t get_offset_of_fromGameObject_11() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___fromGameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_fromGameObject_11() const { return ___fromGameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_fromGameObject_11() { return &___fromGameObject_11; }
	inline void set_fromGameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___fromGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromGameObject_11, value);
	}

	inline static int32_t get_offset_of_fromPosition_12() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___fromPosition_12)); }
	inline FsmVector2_t2430450063 * get_fromPosition_12() const { return ___fromPosition_12; }
	inline FsmVector2_t2430450063 ** get_address_of_fromPosition_12() { return &___fromPosition_12; }
	inline void set_fromPosition_12(FsmVector2_t2430450063 * value)
	{
		___fromPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_12, value);
	}

	inline static int32_t get_offset_of_toGameObject_13() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___toGameObject_13)); }
	inline FsmGameObject_t3097142863 * get_toGameObject_13() const { return ___toGameObject_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_toGameObject_13() { return &___toGameObject_13; }
	inline void set_toGameObject_13(FsmGameObject_t3097142863 * value)
	{
		___toGameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___toGameObject_13, value);
	}

	inline static int32_t get_offset_of_toPosition_14() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___toPosition_14)); }
	inline FsmVector2_t2430450063 * get_toPosition_14() const { return ___toPosition_14; }
	inline FsmVector2_t2430450063 ** get_address_of_toPosition_14() { return &___toPosition_14; }
	inline void set_toPosition_14(FsmVector2_t2430450063 * value)
	{
		___toPosition_14 = value;
		Il2CppCodeGenWriteBarrier(&___toPosition_14, value);
	}

	inline static int32_t get_offset_of_minDepth_15() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___minDepth_15)); }
	inline FsmInt_t1273009179 * get_minDepth_15() const { return ___minDepth_15; }
	inline FsmInt_t1273009179 ** get_address_of_minDepth_15() { return &___minDepth_15; }
	inline void set_minDepth_15(FsmInt_t1273009179 * value)
	{
		___minDepth_15 = value;
		Il2CppCodeGenWriteBarrier(&___minDepth_15, value);
	}

	inline static int32_t get_offset_of_maxDepth_16() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___maxDepth_16)); }
	inline FsmInt_t1273009179 * get_maxDepth_16() const { return ___maxDepth_16; }
	inline FsmInt_t1273009179 ** get_address_of_maxDepth_16() { return &___maxDepth_16; }
	inline void set_maxDepth_16(FsmInt_t1273009179 * value)
	{
		___maxDepth_16 = value;
		Il2CppCodeGenWriteBarrier(&___maxDepth_16, value);
	}

	inline static int32_t get_offset_of_layerMask_17() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___layerMask_17)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_17() const { return ___layerMask_17; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_17() { return &___layerMask_17; }
	inline void set_layerMask_17(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_17 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_17, value);
	}

	inline static int32_t get_offset_of_invertMask_18() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___invertMask_18)); }
	inline FsmBool_t664485696 * get_invertMask_18() const { return ___invertMask_18; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_18() { return &___invertMask_18; }
	inline void set_invertMask_18(FsmBool_t664485696 * value)
	{
		___invertMask_18 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_18, value);
	}

	inline static int32_t get_offset_of_collidersCount_19() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___collidersCount_19)); }
	inline FsmInt_t1273009179 * get_collidersCount_19() const { return ___collidersCount_19; }
	inline FsmInt_t1273009179 ** get_address_of_collidersCount_19() { return &___collidersCount_19; }
	inline void set_collidersCount_19(FsmInt_t1273009179 * value)
	{
		___collidersCount_19 = value;
		Il2CppCodeGenWriteBarrier(&___collidersCount_19, value);
	}

	inline static int32_t get_offset_of_storeNextCollider_20() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___storeNextCollider_20)); }
	inline FsmGameObject_t3097142863 * get_storeNextCollider_20() const { return ___storeNextCollider_20; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeNextCollider_20() { return &___storeNextCollider_20; }
	inline void set_storeNextCollider_20(FsmGameObject_t3097142863 * value)
	{
		___storeNextCollider_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextCollider_20, value);
	}

	inline static int32_t get_offset_of_storeNextHitPoint_21() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___storeNextHitPoint_21)); }
	inline FsmVector2_t2430450063 * get_storeNextHitPoint_21() const { return ___storeNextHitPoint_21; }
	inline FsmVector2_t2430450063 ** get_address_of_storeNextHitPoint_21() { return &___storeNextHitPoint_21; }
	inline void set_storeNextHitPoint_21(FsmVector2_t2430450063 * value)
	{
		___storeNextHitPoint_21 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextHitPoint_21, value);
	}

	inline static int32_t get_offset_of_storeNextHitNormal_22() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___storeNextHitNormal_22)); }
	inline FsmVector2_t2430450063 * get_storeNextHitNormal_22() const { return ___storeNextHitNormal_22; }
	inline FsmVector2_t2430450063 ** get_address_of_storeNextHitNormal_22() { return &___storeNextHitNormal_22; }
	inline void set_storeNextHitNormal_22(FsmVector2_t2430450063 * value)
	{
		___storeNextHitNormal_22 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextHitNormal_22, value);
	}

	inline static int32_t get_offset_of_storeNextHitDistance_23() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___storeNextHitDistance_23)); }
	inline FsmFloat_t937133978 * get_storeNextHitDistance_23() const { return ___storeNextHitDistance_23; }
	inline FsmFloat_t937133978 ** get_address_of_storeNextHitDistance_23() { return &___storeNextHitDistance_23; }
	inline void set_storeNextHitDistance_23(FsmFloat_t937133978 * value)
	{
		___storeNextHitDistance_23 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextHitDistance_23, value);
	}

	inline static int32_t get_offset_of_loopEvent_24() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___loopEvent_24)); }
	inline FsmEvent_t1258573736 * get_loopEvent_24() const { return ___loopEvent_24; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_24() { return &___loopEvent_24; }
	inline void set_loopEvent_24(FsmEvent_t1258573736 * value)
	{
		___loopEvent_24 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_24, value);
	}

	inline static int32_t get_offset_of_finishedEvent_25() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___finishedEvent_25)); }
	inline FsmEvent_t1258573736 * get_finishedEvent_25() const { return ___finishedEvent_25; }
	inline FsmEvent_t1258573736 ** get_address_of_finishedEvent_25() { return &___finishedEvent_25; }
	inline void set_finishedEvent_25(FsmEvent_t1258573736 * value)
	{
		___finishedEvent_25 = value;
		Il2CppCodeGenWriteBarrier(&___finishedEvent_25, value);
	}

	inline static int32_t get_offset_of_hits_26() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___hits_26)); }
	inline RaycastHit2DU5BU5D_t4176517891* get_hits_26() const { return ___hits_26; }
	inline RaycastHit2DU5BU5D_t4176517891** get_address_of_hits_26() { return &___hits_26; }
	inline void set_hits_26(RaycastHit2DU5BU5D_t4176517891* value)
	{
		___hits_26 = value;
		Il2CppCodeGenWriteBarrier(&___hits_26, value);
	}

	inline static int32_t get_offset_of_colliderCount_27() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___colliderCount_27)); }
	inline int32_t get_colliderCount_27() const { return ___colliderCount_27; }
	inline int32_t* get_address_of_colliderCount_27() { return &___colliderCount_27; }
	inline void set_colliderCount_27(int32_t value)
	{
		___colliderCount_27 = value;
	}

	inline static int32_t get_offset_of_nextColliderIndex_28() { return static_cast<int32_t>(offsetof(GetNextLineCast2d_t3575895894, ___nextColliderIndex_28)); }
	inline int32_t get_nextColliderIndex_28() const { return ___nextColliderIndex_28; }
	inline int32_t* get_address_of_nextColliderIndex_28() { return &___nextColliderIndex_28; }
	inline void set_nextColliderIndex_28(int32_t value)
	{
		___nextColliderIndex_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
