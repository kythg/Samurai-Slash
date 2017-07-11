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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
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

// HutongGames.PlayMaker.Actions.ControllerIsGrounded
struct  ControllerIsGrounded_t1548158800  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.ControllerIsGrounded::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ControllerIsGrounded::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ControllerIsGrounded::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ControllerIsGrounded::storeResult
	FsmBool_t664485696 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.ControllerIsGrounded::everyFrame
	bool ___everyFrame_15;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.ControllerIsGrounded::previousGo
	GameObject_t1756533147 * ___previousGo_16;
	// UnityEngine.CharacterController HutongGames.PlayMaker.Actions.ControllerIsGrounded::controller
	CharacterController_t4094781467 * ___controller_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(ControllerIsGrounded_t1548158800, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_trueEvent_12() { return static_cast<int32_t>(offsetof(ControllerIsGrounded_t1548158800, ___trueEvent_12)); }
	inline FsmEvent_t1258573736 * get_trueEvent_12() const { return ___trueEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_12() { return &___trueEvent_12; }
	inline void set_trueEvent_12(FsmEvent_t1258573736 * value)
	{
		___trueEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_12, value);
	}

	inline static int32_t get_offset_of_falseEvent_13() { return static_cast<int32_t>(offsetof(ControllerIsGrounded_t1548158800, ___falseEvent_13)); }
	inline FsmEvent_t1258573736 * get_falseEvent_13() const { return ___falseEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_13() { return &___falseEvent_13; }
	inline void set_falseEvent_13(FsmEvent_t1258573736 * value)
	{
		___falseEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(ControllerIsGrounded_t1548158800, ___storeResult_14)); }
	inline FsmBool_t664485696 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmBool_t664485696 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(ControllerIsGrounded_t1548158800, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_previousGo_16() { return static_cast<int32_t>(offsetof(ControllerIsGrounded_t1548158800, ___previousGo_16)); }
	inline GameObject_t1756533147 * get_previousGo_16() const { return ___previousGo_16; }
	inline GameObject_t1756533147 ** get_address_of_previousGo_16() { return &___previousGo_16; }
	inline void set_previousGo_16(GameObject_t1756533147 * value)
	{
		___previousGo_16 = value;
		Il2CppCodeGenWriteBarrier(&___previousGo_16, value);
	}

	inline static int32_t get_offset_of_controller_17() { return static_cast<int32_t>(offsetof(ControllerIsGrounded_t1548158800, ___controller_17)); }
	inline CharacterController_t4094781467 * get_controller_17() const { return ___controller_17; }
	inline CharacterController_t4094781467 ** get_address_of_controller_17() { return &___controller_17; }
	inline void set_controller_17(CharacterController_t4094781467 * value)
	{
		___controller_17 = value;
		Il2CppCodeGenWriteBarrier(&___controller_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
