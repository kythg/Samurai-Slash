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
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.LookAt
struct  LookAt_t1588701640  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.LookAt::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.LookAt::targetObject
	FsmGameObject_t3097142863 * ___targetObject_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.LookAt::targetPosition
	FsmVector3_t3996534004 * ___targetPosition_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.LookAt::upVector
	FsmVector3_t3996534004 * ___upVector_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LookAt::keepVertical
	FsmBool_t664485696 * ___keepVertical_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LookAt::debug
	FsmBool_t664485696 * ___debug_16;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.LookAt::debugLineColor
	FsmColor_t118301965 * ___debugLineColor_17;
	// System.Boolean HutongGames.PlayMaker.Actions.LookAt::everyFrame
	bool ___everyFrame_18;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.LookAt::go
	GameObject_t1756533147 * ___go_19;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.LookAt::goTarget
	GameObject_t1756533147 * ___goTarget_20;
	// UnityEngine.Vector3 HutongGames.PlayMaker.Actions.LookAt::lookAtPos
	Vector3_t2243707580  ___lookAtPos_21;
	// UnityEngine.Vector3 HutongGames.PlayMaker.Actions.LookAt::lookAtPosWithVertical
	Vector3_t2243707580  ___lookAtPosWithVertical_22;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_targetObject_12() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___targetObject_12)); }
	inline FsmGameObject_t3097142863 * get_targetObject_12() const { return ___targetObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_targetObject_12() { return &___targetObject_12; }
	inline void set_targetObject_12(FsmGameObject_t3097142863 * value)
	{
		___targetObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_12, value);
	}

	inline static int32_t get_offset_of_targetPosition_13() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___targetPosition_13)); }
	inline FsmVector3_t3996534004 * get_targetPosition_13() const { return ___targetPosition_13; }
	inline FsmVector3_t3996534004 ** get_address_of_targetPosition_13() { return &___targetPosition_13; }
	inline void set_targetPosition_13(FsmVector3_t3996534004 * value)
	{
		___targetPosition_13 = value;
		Il2CppCodeGenWriteBarrier(&___targetPosition_13, value);
	}

	inline static int32_t get_offset_of_upVector_14() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___upVector_14)); }
	inline FsmVector3_t3996534004 * get_upVector_14() const { return ___upVector_14; }
	inline FsmVector3_t3996534004 ** get_address_of_upVector_14() { return &___upVector_14; }
	inline void set_upVector_14(FsmVector3_t3996534004 * value)
	{
		___upVector_14 = value;
		Il2CppCodeGenWriteBarrier(&___upVector_14, value);
	}

	inline static int32_t get_offset_of_keepVertical_15() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___keepVertical_15)); }
	inline FsmBool_t664485696 * get_keepVertical_15() const { return ___keepVertical_15; }
	inline FsmBool_t664485696 ** get_address_of_keepVertical_15() { return &___keepVertical_15; }
	inline void set_keepVertical_15(FsmBool_t664485696 * value)
	{
		___keepVertical_15 = value;
		Il2CppCodeGenWriteBarrier(&___keepVertical_15, value);
	}

	inline static int32_t get_offset_of_debug_16() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___debug_16)); }
	inline FsmBool_t664485696 * get_debug_16() const { return ___debug_16; }
	inline FsmBool_t664485696 ** get_address_of_debug_16() { return &___debug_16; }
	inline void set_debug_16(FsmBool_t664485696 * value)
	{
		___debug_16 = value;
		Il2CppCodeGenWriteBarrier(&___debug_16, value);
	}

	inline static int32_t get_offset_of_debugLineColor_17() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___debugLineColor_17)); }
	inline FsmColor_t118301965 * get_debugLineColor_17() const { return ___debugLineColor_17; }
	inline FsmColor_t118301965 ** get_address_of_debugLineColor_17() { return &___debugLineColor_17; }
	inline void set_debugLineColor_17(FsmColor_t118301965 * value)
	{
		___debugLineColor_17 = value;
		Il2CppCodeGenWriteBarrier(&___debugLineColor_17, value);
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}

	inline static int32_t get_offset_of_go_19() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___go_19)); }
	inline GameObject_t1756533147 * get_go_19() const { return ___go_19; }
	inline GameObject_t1756533147 ** get_address_of_go_19() { return &___go_19; }
	inline void set_go_19(GameObject_t1756533147 * value)
	{
		___go_19 = value;
		Il2CppCodeGenWriteBarrier(&___go_19, value);
	}

	inline static int32_t get_offset_of_goTarget_20() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___goTarget_20)); }
	inline GameObject_t1756533147 * get_goTarget_20() const { return ___goTarget_20; }
	inline GameObject_t1756533147 ** get_address_of_goTarget_20() { return &___goTarget_20; }
	inline void set_goTarget_20(GameObject_t1756533147 * value)
	{
		___goTarget_20 = value;
		Il2CppCodeGenWriteBarrier(&___goTarget_20, value);
	}

	inline static int32_t get_offset_of_lookAtPos_21() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___lookAtPos_21)); }
	inline Vector3_t2243707580  get_lookAtPos_21() const { return ___lookAtPos_21; }
	inline Vector3_t2243707580 * get_address_of_lookAtPos_21() { return &___lookAtPos_21; }
	inline void set_lookAtPos_21(Vector3_t2243707580  value)
	{
		___lookAtPos_21 = value;
	}

	inline static int32_t get_offset_of_lookAtPosWithVertical_22() { return static_cast<int32_t>(offsetof(LookAt_t1588701640, ___lookAtPosWithVertical_22)); }
	inline Vector3_t2243707580  get_lookAtPosWithVertical_22() const { return ___lookAtPosWithVertical_22; }
	inline Vector3_t2243707580 * get_address_of_lookAtPosWithVertical_22() { return &___lookAtPosWithVertical_22; }
	inline void set_lookAtPosWithVertical_22(Vector3_t2243707580  value)
	{
		___lookAtPosWithVertical_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
