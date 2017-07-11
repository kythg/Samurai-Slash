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

// HutongGames.PlayMaker.Actions.GetControllerCollisionFlags
struct  GetControllerCollisionFlags_t73954747  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetControllerCollisionFlags::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetControllerCollisionFlags::isGrounded
	FsmBool_t664485696 * ___isGrounded_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetControllerCollisionFlags::none
	FsmBool_t664485696 * ___none_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetControllerCollisionFlags::sides
	FsmBool_t664485696 * ___sides_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetControllerCollisionFlags::above
	FsmBool_t664485696 * ___above_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetControllerCollisionFlags::below
	FsmBool_t664485696 * ___below_16;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.GetControllerCollisionFlags::previousGo
	GameObject_t1756533147 * ___previousGo_17;
	// UnityEngine.CharacterController HutongGames.PlayMaker.Actions.GetControllerCollisionFlags::controller
	CharacterController_t4094781467 * ___controller_18;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetControllerCollisionFlags_t73954747, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_isGrounded_12() { return static_cast<int32_t>(offsetof(GetControllerCollisionFlags_t73954747, ___isGrounded_12)); }
	inline FsmBool_t664485696 * get_isGrounded_12() const { return ___isGrounded_12; }
	inline FsmBool_t664485696 ** get_address_of_isGrounded_12() { return &___isGrounded_12; }
	inline void set_isGrounded_12(FsmBool_t664485696 * value)
	{
		___isGrounded_12 = value;
		Il2CppCodeGenWriteBarrier(&___isGrounded_12, value);
	}

	inline static int32_t get_offset_of_none_13() { return static_cast<int32_t>(offsetof(GetControllerCollisionFlags_t73954747, ___none_13)); }
	inline FsmBool_t664485696 * get_none_13() const { return ___none_13; }
	inline FsmBool_t664485696 ** get_address_of_none_13() { return &___none_13; }
	inline void set_none_13(FsmBool_t664485696 * value)
	{
		___none_13 = value;
		Il2CppCodeGenWriteBarrier(&___none_13, value);
	}

	inline static int32_t get_offset_of_sides_14() { return static_cast<int32_t>(offsetof(GetControllerCollisionFlags_t73954747, ___sides_14)); }
	inline FsmBool_t664485696 * get_sides_14() const { return ___sides_14; }
	inline FsmBool_t664485696 ** get_address_of_sides_14() { return &___sides_14; }
	inline void set_sides_14(FsmBool_t664485696 * value)
	{
		___sides_14 = value;
		Il2CppCodeGenWriteBarrier(&___sides_14, value);
	}

	inline static int32_t get_offset_of_above_15() { return static_cast<int32_t>(offsetof(GetControllerCollisionFlags_t73954747, ___above_15)); }
	inline FsmBool_t664485696 * get_above_15() const { return ___above_15; }
	inline FsmBool_t664485696 ** get_address_of_above_15() { return &___above_15; }
	inline void set_above_15(FsmBool_t664485696 * value)
	{
		___above_15 = value;
		Il2CppCodeGenWriteBarrier(&___above_15, value);
	}

	inline static int32_t get_offset_of_below_16() { return static_cast<int32_t>(offsetof(GetControllerCollisionFlags_t73954747, ___below_16)); }
	inline FsmBool_t664485696 * get_below_16() const { return ___below_16; }
	inline FsmBool_t664485696 ** get_address_of_below_16() { return &___below_16; }
	inline void set_below_16(FsmBool_t664485696 * value)
	{
		___below_16 = value;
		Il2CppCodeGenWriteBarrier(&___below_16, value);
	}

	inline static int32_t get_offset_of_previousGo_17() { return static_cast<int32_t>(offsetof(GetControllerCollisionFlags_t73954747, ___previousGo_17)); }
	inline GameObject_t1756533147 * get_previousGo_17() const { return ___previousGo_17; }
	inline GameObject_t1756533147 ** get_address_of_previousGo_17() { return &___previousGo_17; }
	inline void set_previousGo_17(GameObject_t1756533147 * value)
	{
		___previousGo_17 = value;
		Il2CppCodeGenWriteBarrier(&___previousGo_17, value);
	}

	inline static int32_t get_offset_of_controller_18() { return static_cast<int32_t>(offsetof(GetControllerCollisionFlags_t73954747, ___controller_18)); }
	inline CharacterController_t4094781467 * get_controller_18() const { return ___controller_18; }
	inline CharacterController_t4094781467 ** get_address_of_controller_18() { return &___controller_18; }
	inline void set_controller_18(CharacterController_t4094781467 * value)
	{
		___controller_18 = value;
		Il2CppCodeGenWriteBarrier(&___controller_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
