#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.MoveTowards
struct  MoveTowards_t344175123  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MoveTowards::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.MoveTowards::targetObject
	FsmGameObject_t3097142863 * ___targetObject_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.MoveTowards::targetPosition
	FsmVector3_t3996534004 * ___targetPosition_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MoveTowards::ignoreVertical
	FsmBool_t664485696 * ___ignoreVertical_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MoveTowards::maxSpeed
	FsmFloat_t937133978 * ___maxSpeed_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MoveTowards::finishDistance
	FsmFloat_t937133978 * ___finishDistance_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MoveTowards::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_17;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.MoveTowards::go
	GameObject_t1756533147 * ___go_18;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.MoveTowards::goTarget
	GameObject_t1756533147 * ___goTarget_19;
	// UnityEngine.Vector3 HutongGames.PlayMaker.Actions.MoveTowards::targetPos
	Vector3_t2243707580  ___targetPos_20;
	// UnityEngine.Vector3 HutongGames.PlayMaker.Actions.MoveTowards::targetPosWithVertical
	Vector3_t2243707580  ___targetPosWithVertical_21;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_targetObject_12() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___targetObject_12)); }
	inline FsmGameObject_t3097142863 * get_targetObject_12() const { return ___targetObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_targetObject_12() { return &___targetObject_12; }
	inline void set_targetObject_12(FsmGameObject_t3097142863 * value)
	{
		___targetObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_12, value);
	}

	inline static int32_t get_offset_of_targetPosition_13() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___targetPosition_13)); }
	inline FsmVector3_t3996534004 * get_targetPosition_13() const { return ___targetPosition_13; }
	inline FsmVector3_t3996534004 ** get_address_of_targetPosition_13() { return &___targetPosition_13; }
	inline void set_targetPosition_13(FsmVector3_t3996534004 * value)
	{
		___targetPosition_13 = value;
		Il2CppCodeGenWriteBarrier(&___targetPosition_13, value);
	}

	inline static int32_t get_offset_of_ignoreVertical_14() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___ignoreVertical_14)); }
	inline FsmBool_t664485696 * get_ignoreVertical_14() const { return ___ignoreVertical_14; }
	inline FsmBool_t664485696 ** get_address_of_ignoreVertical_14() { return &___ignoreVertical_14; }
	inline void set_ignoreVertical_14(FsmBool_t664485696 * value)
	{
		___ignoreVertical_14 = value;
		Il2CppCodeGenWriteBarrier(&___ignoreVertical_14, value);
	}

	inline static int32_t get_offset_of_maxSpeed_15() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___maxSpeed_15)); }
	inline FsmFloat_t937133978 * get_maxSpeed_15() const { return ___maxSpeed_15; }
	inline FsmFloat_t937133978 ** get_address_of_maxSpeed_15() { return &___maxSpeed_15; }
	inline void set_maxSpeed_15(FsmFloat_t937133978 * value)
	{
		___maxSpeed_15 = value;
		Il2CppCodeGenWriteBarrier(&___maxSpeed_15, value);
	}

	inline static int32_t get_offset_of_finishDistance_16() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___finishDistance_16)); }
	inline FsmFloat_t937133978 * get_finishDistance_16() const { return ___finishDistance_16; }
	inline FsmFloat_t937133978 ** get_address_of_finishDistance_16() { return &___finishDistance_16; }
	inline void set_finishDistance_16(FsmFloat_t937133978 * value)
	{
		___finishDistance_16 = value;
		Il2CppCodeGenWriteBarrier(&___finishDistance_16, value);
	}

	inline static int32_t get_offset_of_finishEvent_17() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___finishEvent_17)); }
	inline FsmEvent_t1258573736 * get_finishEvent_17() const { return ___finishEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_17() { return &___finishEvent_17; }
	inline void set_finishEvent_17(FsmEvent_t1258573736 * value)
	{
		___finishEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_17, value);
	}

	inline static int32_t get_offset_of_go_18() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___go_18)); }
	inline GameObject_t1756533147 * get_go_18() const { return ___go_18; }
	inline GameObject_t1756533147 ** get_address_of_go_18() { return &___go_18; }
	inline void set_go_18(GameObject_t1756533147 * value)
	{
		___go_18 = value;
		Il2CppCodeGenWriteBarrier(&___go_18, value);
	}

	inline static int32_t get_offset_of_goTarget_19() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___goTarget_19)); }
	inline GameObject_t1756533147 * get_goTarget_19() const { return ___goTarget_19; }
	inline GameObject_t1756533147 ** get_address_of_goTarget_19() { return &___goTarget_19; }
	inline void set_goTarget_19(GameObject_t1756533147 * value)
	{
		___goTarget_19 = value;
		Il2CppCodeGenWriteBarrier(&___goTarget_19, value);
	}

	inline static int32_t get_offset_of_targetPos_20() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___targetPos_20)); }
	inline Vector3_t2243707580  get_targetPos_20() const { return ___targetPos_20; }
	inline Vector3_t2243707580 * get_address_of_targetPos_20() { return &___targetPos_20; }
	inline void set_targetPos_20(Vector3_t2243707580  value)
	{
		___targetPos_20 = value;
	}

	inline static int32_t get_offset_of_targetPosWithVertical_21() { return static_cast<int32_t>(offsetof(MoveTowards_t344175123, ___targetPosWithVertical_21)); }
	inline Vector3_t2243707580  get_targetPosWithVertical_21() const { return ___targetPosWithVertical_21; }
	inline Vector3_t2243707580 * get_address_of_targetPosWithVertical_21() { return &___targetPosWithVertical_21; }
	inline void set_targetPosWithVertical_21(Vector3_t2243707580  value)
	{
		___targetPosWithVertical_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
