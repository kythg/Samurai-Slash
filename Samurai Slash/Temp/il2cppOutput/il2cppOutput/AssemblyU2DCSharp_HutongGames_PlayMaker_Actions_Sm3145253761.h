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

// HutongGames.PlayMaker.Actions.SmoothLookAtDirection
struct  SmoothLookAtDirection_t3145253761  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SmoothLookAtDirection::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SmoothLookAtDirection::targetDirection
	FsmVector3_t3996534004 * ___targetDirection_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothLookAtDirection::minMagnitude
	FsmFloat_t937133978 * ___minMagnitude_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SmoothLookAtDirection::upVector
	FsmVector3_t3996534004 * ___upVector_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SmoothLookAtDirection::keepVertical
	FsmBool_t664485696 * ___keepVertical_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SmoothLookAtDirection::speed
	FsmFloat_t937133978 * ___speed_16;
	// System.Boolean HutongGames.PlayMaker.Actions.SmoothLookAtDirection::lateUpdate
	bool ___lateUpdate_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SmoothLookAtDirection::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_18;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SmoothLookAtDirection::finish
	FsmBool_t664485696 * ___finish_19;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.SmoothLookAtDirection::previousGo
	GameObject_t1756533147 * ___previousGo_20;
	// UnityEngine.Quaternion HutongGames.PlayMaker.Actions.SmoothLookAtDirection::lastRotation
	Quaternion_t4030073918  ___lastRotation_21;
	// UnityEngine.Quaternion HutongGames.PlayMaker.Actions.SmoothLookAtDirection::desiredRotation
	Quaternion_t4030073918  ___desiredRotation_22;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_targetDirection_12() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___targetDirection_12)); }
	inline FsmVector3_t3996534004 * get_targetDirection_12() const { return ___targetDirection_12; }
	inline FsmVector3_t3996534004 ** get_address_of_targetDirection_12() { return &___targetDirection_12; }
	inline void set_targetDirection_12(FsmVector3_t3996534004 * value)
	{
		___targetDirection_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetDirection_12, value);
	}

	inline static int32_t get_offset_of_minMagnitude_13() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___minMagnitude_13)); }
	inline FsmFloat_t937133978 * get_minMagnitude_13() const { return ___minMagnitude_13; }
	inline FsmFloat_t937133978 ** get_address_of_minMagnitude_13() { return &___minMagnitude_13; }
	inline void set_minMagnitude_13(FsmFloat_t937133978 * value)
	{
		___minMagnitude_13 = value;
		Il2CppCodeGenWriteBarrier(&___minMagnitude_13, value);
	}

	inline static int32_t get_offset_of_upVector_14() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___upVector_14)); }
	inline FsmVector3_t3996534004 * get_upVector_14() const { return ___upVector_14; }
	inline FsmVector3_t3996534004 ** get_address_of_upVector_14() { return &___upVector_14; }
	inline void set_upVector_14(FsmVector3_t3996534004 * value)
	{
		___upVector_14 = value;
		Il2CppCodeGenWriteBarrier(&___upVector_14, value);
	}

	inline static int32_t get_offset_of_keepVertical_15() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___keepVertical_15)); }
	inline FsmBool_t664485696 * get_keepVertical_15() const { return ___keepVertical_15; }
	inline FsmBool_t664485696 ** get_address_of_keepVertical_15() { return &___keepVertical_15; }
	inline void set_keepVertical_15(FsmBool_t664485696 * value)
	{
		___keepVertical_15 = value;
		Il2CppCodeGenWriteBarrier(&___keepVertical_15, value);
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___speed_16)); }
	inline FsmFloat_t937133978 * get_speed_16() const { return ___speed_16; }
	inline FsmFloat_t937133978 ** get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(FsmFloat_t937133978 * value)
	{
		___speed_16 = value;
		Il2CppCodeGenWriteBarrier(&___speed_16, value);
	}

	inline static int32_t get_offset_of_lateUpdate_17() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___lateUpdate_17)); }
	inline bool get_lateUpdate_17() const { return ___lateUpdate_17; }
	inline bool* get_address_of_lateUpdate_17() { return &___lateUpdate_17; }
	inline void set_lateUpdate_17(bool value)
	{
		___lateUpdate_17 = value;
	}

	inline static int32_t get_offset_of_finishEvent_18() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___finishEvent_18)); }
	inline FsmEvent_t1258573736 * get_finishEvent_18() const { return ___finishEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_18() { return &___finishEvent_18; }
	inline void set_finishEvent_18(FsmEvent_t1258573736 * value)
	{
		___finishEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_18, value);
	}

	inline static int32_t get_offset_of_finish_19() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___finish_19)); }
	inline FsmBool_t664485696 * get_finish_19() const { return ___finish_19; }
	inline FsmBool_t664485696 ** get_address_of_finish_19() { return &___finish_19; }
	inline void set_finish_19(FsmBool_t664485696 * value)
	{
		___finish_19 = value;
		Il2CppCodeGenWriteBarrier(&___finish_19, value);
	}

	inline static int32_t get_offset_of_previousGo_20() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___previousGo_20)); }
	inline GameObject_t1756533147 * get_previousGo_20() const { return ___previousGo_20; }
	inline GameObject_t1756533147 ** get_address_of_previousGo_20() { return &___previousGo_20; }
	inline void set_previousGo_20(GameObject_t1756533147 * value)
	{
		___previousGo_20 = value;
		Il2CppCodeGenWriteBarrier(&___previousGo_20, value);
	}

	inline static int32_t get_offset_of_lastRotation_21() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___lastRotation_21)); }
	inline Quaternion_t4030073918  get_lastRotation_21() const { return ___lastRotation_21; }
	inline Quaternion_t4030073918 * get_address_of_lastRotation_21() { return &___lastRotation_21; }
	inline void set_lastRotation_21(Quaternion_t4030073918  value)
	{
		___lastRotation_21 = value;
	}

	inline static int32_t get_offset_of_desiredRotation_22() { return static_cast<int32_t>(offsetof(SmoothLookAtDirection_t3145253761, ___desiredRotation_22)); }
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
