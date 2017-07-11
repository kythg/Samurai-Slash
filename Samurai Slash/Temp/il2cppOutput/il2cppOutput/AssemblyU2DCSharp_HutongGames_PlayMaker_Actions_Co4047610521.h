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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ControllerSimpleMove
struct  ControllerSimpleMove_t4047610521  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.ControllerSimpleMove::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.ControllerSimpleMove::moveVector
	FsmVector3_t3996534004 * ___moveVector_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ControllerSimpleMove::speed
	FsmFloat_t937133978 * ___speed_13;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.ControllerSimpleMove::space
	int32_t ___space_14;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.ControllerSimpleMove::previousGo
	GameObject_t1756533147 * ___previousGo_15;
	// UnityEngine.CharacterController HutongGames.PlayMaker.Actions.ControllerSimpleMove::controller
	CharacterController_t4094781467 * ___controller_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(ControllerSimpleMove_t4047610521, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_moveVector_12() { return static_cast<int32_t>(offsetof(ControllerSimpleMove_t4047610521, ___moveVector_12)); }
	inline FsmVector3_t3996534004 * get_moveVector_12() const { return ___moveVector_12; }
	inline FsmVector3_t3996534004 ** get_address_of_moveVector_12() { return &___moveVector_12; }
	inline void set_moveVector_12(FsmVector3_t3996534004 * value)
	{
		___moveVector_12 = value;
		Il2CppCodeGenWriteBarrier(&___moveVector_12, value);
	}

	inline static int32_t get_offset_of_speed_13() { return static_cast<int32_t>(offsetof(ControllerSimpleMove_t4047610521, ___speed_13)); }
	inline FsmFloat_t937133978 * get_speed_13() const { return ___speed_13; }
	inline FsmFloat_t937133978 ** get_address_of_speed_13() { return &___speed_13; }
	inline void set_speed_13(FsmFloat_t937133978 * value)
	{
		___speed_13 = value;
		Il2CppCodeGenWriteBarrier(&___speed_13, value);
	}

	inline static int32_t get_offset_of_space_14() { return static_cast<int32_t>(offsetof(ControllerSimpleMove_t4047610521, ___space_14)); }
	inline int32_t get_space_14() const { return ___space_14; }
	inline int32_t* get_address_of_space_14() { return &___space_14; }
	inline void set_space_14(int32_t value)
	{
		___space_14 = value;
	}

	inline static int32_t get_offset_of_previousGo_15() { return static_cast<int32_t>(offsetof(ControllerSimpleMove_t4047610521, ___previousGo_15)); }
	inline GameObject_t1756533147 * get_previousGo_15() const { return ___previousGo_15; }
	inline GameObject_t1756533147 ** get_address_of_previousGo_15() { return &___previousGo_15; }
	inline void set_previousGo_15(GameObject_t1756533147 * value)
	{
		___previousGo_15 = value;
		Il2CppCodeGenWriteBarrier(&___previousGo_15, value);
	}

	inline static int32_t get_offset_of_controller_16() { return static_cast<int32_t>(offsetof(ControllerSimpleMove_t4047610521, ___controller_16)); }
	inline CharacterController_t4094781467 * get_controller_16() const { return ___controller_16; }
	inline CharacterController_t4094781467 ** get_address_of_controller_16() { return &___controller_16; }
	inline void set_controller_16(CharacterController_t4094781467 * value)
	{
		___controller_16 = value;
		Il2CppCodeGenWriteBarrier(&___controller_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
