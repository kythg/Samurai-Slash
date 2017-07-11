#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge1170867841.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
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

// HutongGames.PlayMaker.Actions.MoveGameObjectToScene
struct  MoveGameObjectToScene_t375084031  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MoveGameObjectToScene::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_21;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MoveGameObjectToScene::findRootIfNecessary
	FsmBool_t664485696 * ___findRootIfNecessary_22;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MoveGameObjectToScene::success
	FsmBool_t664485696 * ___success_23;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MoveGameObjectToScene::successEvent
	FsmEvent_t1258573736 * ___successEvent_24;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MoveGameObjectToScene::failureEvent
	FsmEvent_t1258573736 * ___failureEvent_25;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.MoveGameObjectToScene::_go
	GameObject_t1756533147 * ____go_26;

public:
	inline static int32_t get_offset_of_gameObject_21() { return static_cast<int32_t>(offsetof(MoveGameObjectToScene_t375084031, ___gameObject_21)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_21() const { return ___gameObject_21; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_21() { return &___gameObject_21; }
	inline void set_gameObject_21(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_21 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_21, value);
	}

	inline static int32_t get_offset_of_findRootIfNecessary_22() { return static_cast<int32_t>(offsetof(MoveGameObjectToScene_t375084031, ___findRootIfNecessary_22)); }
	inline FsmBool_t664485696 * get_findRootIfNecessary_22() const { return ___findRootIfNecessary_22; }
	inline FsmBool_t664485696 ** get_address_of_findRootIfNecessary_22() { return &___findRootIfNecessary_22; }
	inline void set_findRootIfNecessary_22(FsmBool_t664485696 * value)
	{
		___findRootIfNecessary_22 = value;
		Il2CppCodeGenWriteBarrier(&___findRootIfNecessary_22, value);
	}

	inline static int32_t get_offset_of_success_23() { return static_cast<int32_t>(offsetof(MoveGameObjectToScene_t375084031, ___success_23)); }
	inline FsmBool_t664485696 * get_success_23() const { return ___success_23; }
	inline FsmBool_t664485696 ** get_address_of_success_23() { return &___success_23; }
	inline void set_success_23(FsmBool_t664485696 * value)
	{
		___success_23 = value;
		Il2CppCodeGenWriteBarrier(&___success_23, value);
	}

	inline static int32_t get_offset_of_successEvent_24() { return static_cast<int32_t>(offsetof(MoveGameObjectToScene_t375084031, ___successEvent_24)); }
	inline FsmEvent_t1258573736 * get_successEvent_24() const { return ___successEvent_24; }
	inline FsmEvent_t1258573736 ** get_address_of_successEvent_24() { return &___successEvent_24; }
	inline void set_successEvent_24(FsmEvent_t1258573736 * value)
	{
		___successEvent_24 = value;
		Il2CppCodeGenWriteBarrier(&___successEvent_24, value);
	}

	inline static int32_t get_offset_of_failureEvent_25() { return static_cast<int32_t>(offsetof(MoveGameObjectToScene_t375084031, ___failureEvent_25)); }
	inline FsmEvent_t1258573736 * get_failureEvent_25() const { return ___failureEvent_25; }
	inline FsmEvent_t1258573736 ** get_address_of_failureEvent_25() { return &___failureEvent_25; }
	inline void set_failureEvent_25(FsmEvent_t1258573736 * value)
	{
		___failureEvent_25 = value;
		Il2CppCodeGenWriteBarrier(&___failureEvent_25, value);
	}

	inline static int32_t get_offset_of__go_26() { return static_cast<int32_t>(offsetof(MoveGameObjectToScene_t375084031, ____go_26)); }
	inline GameObject_t1756533147 * get__go_26() const { return ____go_26; }
	inline GameObject_t1756533147 ** get_address_of__go_26() { return &____go_26; }
	inline void set__go_26(GameObject_t1756533147 * value)
	{
		____go_26 = value;
		Il2CppCodeGenWriteBarrier(&____go_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
