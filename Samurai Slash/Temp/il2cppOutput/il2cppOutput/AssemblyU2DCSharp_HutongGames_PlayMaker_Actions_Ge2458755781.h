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
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAngleToTarget
struct  GetAngleToTarget_t2458755781  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAngleToTarget::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetAngleToTarget::targetObject
	FsmGameObject_t3097142863 * ___targetObject_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetAngleToTarget::targetPosition
	FsmVector3_t3996534004 * ___targetPosition_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAngleToTarget::ignoreHeight
	FsmBool_t664485696 * ___ignoreHeight_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAngleToTarget::storeAngle
	FsmFloat_t937133978 * ___storeAngle_15;
	// System.Boolean HutongGames.PlayMaker.Actions.GetAngleToTarget::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetAngleToTarget_t2458755781, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_targetObject_12() { return static_cast<int32_t>(offsetof(GetAngleToTarget_t2458755781, ___targetObject_12)); }
	inline FsmGameObject_t3097142863 * get_targetObject_12() const { return ___targetObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_targetObject_12() { return &___targetObject_12; }
	inline void set_targetObject_12(FsmGameObject_t3097142863 * value)
	{
		___targetObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_12, value);
	}

	inline static int32_t get_offset_of_targetPosition_13() { return static_cast<int32_t>(offsetof(GetAngleToTarget_t2458755781, ___targetPosition_13)); }
	inline FsmVector3_t3996534004 * get_targetPosition_13() const { return ___targetPosition_13; }
	inline FsmVector3_t3996534004 ** get_address_of_targetPosition_13() { return &___targetPosition_13; }
	inline void set_targetPosition_13(FsmVector3_t3996534004 * value)
	{
		___targetPosition_13 = value;
		Il2CppCodeGenWriteBarrier(&___targetPosition_13, value);
	}

	inline static int32_t get_offset_of_ignoreHeight_14() { return static_cast<int32_t>(offsetof(GetAngleToTarget_t2458755781, ___ignoreHeight_14)); }
	inline FsmBool_t664485696 * get_ignoreHeight_14() const { return ___ignoreHeight_14; }
	inline FsmBool_t664485696 ** get_address_of_ignoreHeight_14() { return &___ignoreHeight_14; }
	inline void set_ignoreHeight_14(FsmBool_t664485696 * value)
	{
		___ignoreHeight_14 = value;
		Il2CppCodeGenWriteBarrier(&___ignoreHeight_14, value);
	}

	inline static int32_t get_offset_of_storeAngle_15() { return static_cast<int32_t>(offsetof(GetAngleToTarget_t2458755781, ___storeAngle_15)); }
	inline FsmFloat_t937133978 * get_storeAngle_15() const { return ___storeAngle_15; }
	inline FsmFloat_t937133978 ** get_address_of_storeAngle_15() { return &___storeAngle_15; }
	inline void set_storeAngle_15(FsmFloat_t937133978 * value)
	{
		___storeAngle_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeAngle_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(GetAngleToTarget_t2458755781, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
