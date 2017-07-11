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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ControllerSettings
struct  ControllerSettings_t324675351  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.ControllerSettings::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ControllerSettings::height
	FsmFloat_t937133978 * ___height_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ControllerSettings::radius
	FsmFloat_t937133978 * ___radius_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ControllerSettings::slopeLimit
	FsmFloat_t937133978 * ___slopeLimit_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ControllerSettings::stepOffset
	FsmFloat_t937133978 * ___stepOffset_15;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.ControllerSettings::center
	FsmVector3_t3996534004 * ___center_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ControllerSettings::detectCollisions
	FsmBool_t664485696 * ___detectCollisions_17;
	// System.Boolean HutongGames.PlayMaker.Actions.ControllerSettings::everyFrame
	bool ___everyFrame_18;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.ControllerSettings::previousGo
	GameObject_t1756533147 * ___previousGo_19;
	// UnityEngine.CharacterController HutongGames.PlayMaker.Actions.ControllerSettings::controller
	CharacterController_t4094781467 * ___controller_20;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_height_12() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___height_12)); }
	inline FsmFloat_t937133978 * get_height_12() const { return ___height_12; }
	inline FsmFloat_t937133978 ** get_address_of_height_12() { return &___height_12; }
	inline void set_height_12(FsmFloat_t937133978 * value)
	{
		___height_12 = value;
		Il2CppCodeGenWriteBarrier(&___height_12, value);
	}

	inline static int32_t get_offset_of_radius_13() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___radius_13)); }
	inline FsmFloat_t937133978 * get_radius_13() const { return ___radius_13; }
	inline FsmFloat_t937133978 ** get_address_of_radius_13() { return &___radius_13; }
	inline void set_radius_13(FsmFloat_t937133978 * value)
	{
		___radius_13 = value;
		Il2CppCodeGenWriteBarrier(&___radius_13, value);
	}

	inline static int32_t get_offset_of_slopeLimit_14() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___slopeLimit_14)); }
	inline FsmFloat_t937133978 * get_slopeLimit_14() const { return ___slopeLimit_14; }
	inline FsmFloat_t937133978 ** get_address_of_slopeLimit_14() { return &___slopeLimit_14; }
	inline void set_slopeLimit_14(FsmFloat_t937133978 * value)
	{
		___slopeLimit_14 = value;
		Il2CppCodeGenWriteBarrier(&___slopeLimit_14, value);
	}

	inline static int32_t get_offset_of_stepOffset_15() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___stepOffset_15)); }
	inline FsmFloat_t937133978 * get_stepOffset_15() const { return ___stepOffset_15; }
	inline FsmFloat_t937133978 ** get_address_of_stepOffset_15() { return &___stepOffset_15; }
	inline void set_stepOffset_15(FsmFloat_t937133978 * value)
	{
		___stepOffset_15 = value;
		Il2CppCodeGenWriteBarrier(&___stepOffset_15, value);
	}

	inline static int32_t get_offset_of_center_16() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___center_16)); }
	inline FsmVector3_t3996534004 * get_center_16() const { return ___center_16; }
	inline FsmVector3_t3996534004 ** get_address_of_center_16() { return &___center_16; }
	inline void set_center_16(FsmVector3_t3996534004 * value)
	{
		___center_16 = value;
		Il2CppCodeGenWriteBarrier(&___center_16, value);
	}

	inline static int32_t get_offset_of_detectCollisions_17() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___detectCollisions_17)); }
	inline FsmBool_t664485696 * get_detectCollisions_17() const { return ___detectCollisions_17; }
	inline FsmBool_t664485696 ** get_address_of_detectCollisions_17() { return &___detectCollisions_17; }
	inline void set_detectCollisions_17(FsmBool_t664485696 * value)
	{
		___detectCollisions_17 = value;
		Il2CppCodeGenWriteBarrier(&___detectCollisions_17, value);
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}

	inline static int32_t get_offset_of_previousGo_19() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___previousGo_19)); }
	inline GameObject_t1756533147 * get_previousGo_19() const { return ___previousGo_19; }
	inline GameObject_t1756533147 ** get_address_of_previousGo_19() { return &___previousGo_19; }
	inline void set_previousGo_19(GameObject_t1756533147 * value)
	{
		___previousGo_19 = value;
		Il2CppCodeGenWriteBarrier(&___previousGo_19, value);
	}

	inline static int32_t get_offset_of_controller_20() { return static_cast<int32_t>(offsetof(ControllerSettings_t324675351, ___controller_20)); }
	inline CharacterController_t4094781467 * get_controller_20() const { return ___controller_20; }
	inline CharacterController_t4094781467 ** get_address_of_controller_20() { return &___controller_20; }
	inline void set_controller_20(CharacterController_t4094781467 * value)
	{
		___controller_20 = value;
		Il2CppCodeGenWriteBarrier(&___controller_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
