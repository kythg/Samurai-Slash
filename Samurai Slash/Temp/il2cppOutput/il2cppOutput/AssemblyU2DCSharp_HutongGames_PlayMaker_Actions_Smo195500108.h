#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SmoothLookAt2d
struct  SmoothLookAt2d_t195500108  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SmoothLookAt2d::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SmoothLookAt2d::targetObject
	FsmGameObject_t3097142863 * ___targetObject_12;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.SmoothLookAt2d::targetPosition2d
	FsmVector2_t2430450063 * ___targetPosition2d_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SmoothLookAt2d::targetPosition
	FsmVector3_t3996534004 * ___targetPosition_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothLookAt2d::rotationOffset
	FsmFloat_t937133978 * ___rotationOffset_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothLookAt2d::speed
	FsmFloat_t937133978 * ___speed_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SmoothLookAt2d::debug
	FsmBool_t664485696 * ___debug_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothLookAt2d::finishTolerance
	FsmFloat_t937133978 * ___finishTolerance_18;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SmoothLookAt2d::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_19;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.SmoothLookAt2d::previousGo
	GameObject_t1756533147 * ___previousGo_20;
	// UnityEngine.Quaternion HutongGames.PlayMaker.Actions.SmoothLookAt2d::lastRotation
	Quaternion_t4030073918  ___lastRotation_21;
	// UnityEngine.Quaternion HutongGames.PlayMaker.Actions.SmoothLookAt2d::desiredRotation
	Quaternion_t4030073918  ___desiredRotation_22;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_targetObject_12() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___targetObject_12)); }
	inline FsmGameObject_t3097142863 * get_targetObject_12() const { return ___targetObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_targetObject_12() { return &___targetObject_12; }
	inline void set_targetObject_12(FsmGameObject_t3097142863 * value)
	{
		___targetObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_12, value);
	}

	inline static int32_t get_offset_of_targetPosition2d_13() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___targetPosition2d_13)); }
	inline FsmVector2_t2430450063 * get_targetPosition2d_13() const { return ___targetPosition2d_13; }
	inline FsmVector2_t2430450063 ** get_address_of_targetPosition2d_13() { return &___targetPosition2d_13; }
	inline void set_targetPosition2d_13(FsmVector2_t2430450063 * value)
	{
		___targetPosition2d_13 = value;
		Il2CppCodeGenWriteBarrier(&___targetPosition2d_13, value);
	}

	inline static int32_t get_offset_of_targetPosition_14() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___targetPosition_14)); }
	inline FsmVector3_t3996534004 * get_targetPosition_14() const { return ___targetPosition_14; }
	inline FsmVector3_t3996534004 ** get_address_of_targetPosition_14() { return &___targetPosition_14; }
	inline void set_targetPosition_14(FsmVector3_t3996534004 * value)
	{
		___targetPosition_14 = value;
		Il2CppCodeGenWriteBarrier(&___targetPosition_14, value);
	}

	inline static int32_t get_offset_of_rotationOffset_15() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___rotationOffset_15)); }
	inline FsmFloat_t937133978 * get_rotationOffset_15() const { return ___rotationOffset_15; }
	inline FsmFloat_t937133978 ** get_address_of_rotationOffset_15() { return &___rotationOffset_15; }
	inline void set_rotationOffset_15(FsmFloat_t937133978 * value)
	{
		___rotationOffset_15 = value;
		Il2CppCodeGenWriteBarrier(&___rotationOffset_15, value);
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___speed_16)); }
	inline FsmFloat_t937133978 * get_speed_16() const { return ___speed_16; }
	inline FsmFloat_t937133978 ** get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(FsmFloat_t937133978 * value)
	{
		___speed_16 = value;
		Il2CppCodeGenWriteBarrier(&___speed_16, value);
	}

	inline static int32_t get_offset_of_debug_17() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___debug_17)); }
	inline FsmBool_t664485696 * get_debug_17() const { return ___debug_17; }
	inline FsmBool_t664485696 ** get_address_of_debug_17() { return &___debug_17; }
	inline void set_debug_17(FsmBool_t664485696 * value)
	{
		___debug_17 = value;
		Il2CppCodeGenWriteBarrier(&___debug_17, value);
	}

	inline static int32_t get_offset_of_finishTolerance_18() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___finishTolerance_18)); }
	inline FsmFloat_t937133978 * get_finishTolerance_18() const { return ___finishTolerance_18; }
	inline FsmFloat_t937133978 ** get_address_of_finishTolerance_18() { return &___finishTolerance_18; }
	inline void set_finishTolerance_18(FsmFloat_t937133978 * value)
	{
		___finishTolerance_18 = value;
		Il2CppCodeGenWriteBarrier(&___finishTolerance_18, value);
	}

	inline static int32_t get_offset_of_finishEvent_19() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___finishEvent_19)); }
	inline FsmEvent_t1258573736 * get_finishEvent_19() const { return ___finishEvent_19; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_19() { return &___finishEvent_19; }
	inline void set_finishEvent_19(FsmEvent_t1258573736 * value)
	{
		___finishEvent_19 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_19, value);
	}

	inline static int32_t get_offset_of_previousGo_20() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___previousGo_20)); }
	inline GameObject_t1756533147 * get_previousGo_20() const { return ___previousGo_20; }
	inline GameObject_t1756533147 ** get_address_of_previousGo_20() { return &___previousGo_20; }
	inline void set_previousGo_20(GameObject_t1756533147 * value)
	{
		___previousGo_20 = value;
		Il2CppCodeGenWriteBarrier(&___previousGo_20, value);
	}

	inline static int32_t get_offset_of_lastRotation_21() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___lastRotation_21)); }
	inline Quaternion_t4030073918  get_lastRotation_21() const { return ___lastRotation_21; }
	inline Quaternion_t4030073918 * get_address_of_lastRotation_21() { return &___lastRotation_21; }
	inline void set_lastRotation_21(Quaternion_t4030073918  value)
	{
		___lastRotation_21 = value;
	}

	inline static int32_t get_offset_of_desiredRotation_22() { return static_cast<int32_t>(offsetof(SmoothLookAt2d_t195500108, ___desiredRotation_22)); }
	inline Quaternion_t4030073918  get_desiredRotation_22() const { return ___desiredRotation_22; }
	inline Quaternion_t4030073918 * get_address_of_desiredRotation_22() { return &___desiredRotation_22; }
	inline void set_desiredRotation_22(Quaternion_t4030073918  value)
	{
		___desiredRotation_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
