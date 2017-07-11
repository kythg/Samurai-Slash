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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
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

// HutongGames.PlayMaker.Actions.LookAt2dGameObject
struct  LookAt2dGameObject_t133402631  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.LookAt2dGameObject::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.LookAt2dGameObject::targetObject
	FsmGameObject_t3097142863 * ___targetObject_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.LookAt2dGameObject::rotationOffset
	FsmFloat_t937133978 * ___rotationOffset_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LookAt2dGameObject::debug
	FsmBool_t664485696 * ___debug_14;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.LookAt2dGameObject::debugLineColor
	FsmColor_t118301965 * ___debugLineColor_15;
	// System.Boolean HutongGames.PlayMaker.Actions.LookAt2dGameObject::everyFrame
	bool ___everyFrame_16;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.LookAt2dGameObject::go
	GameObject_t1756533147 * ___go_17;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.LookAt2dGameObject::goTarget
	GameObject_t1756533147 * ___goTarget_18;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(LookAt2dGameObject_t133402631, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_targetObject_12() { return static_cast<int32_t>(offsetof(LookAt2dGameObject_t133402631, ___targetObject_12)); }
	inline FsmGameObject_t3097142863 * get_targetObject_12() const { return ___targetObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_targetObject_12() { return &___targetObject_12; }
	inline void set_targetObject_12(FsmGameObject_t3097142863 * value)
	{
		___targetObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_12, value);
	}

	inline static int32_t get_offset_of_rotationOffset_13() { return static_cast<int32_t>(offsetof(LookAt2dGameObject_t133402631, ___rotationOffset_13)); }
	inline FsmFloat_t937133978 * get_rotationOffset_13() const { return ___rotationOffset_13; }
	inline FsmFloat_t937133978 ** get_address_of_rotationOffset_13() { return &___rotationOffset_13; }
	inline void set_rotationOffset_13(FsmFloat_t937133978 * value)
	{
		___rotationOffset_13 = value;
		Il2CppCodeGenWriteBarrier(&___rotationOffset_13, value);
	}

	inline static int32_t get_offset_of_debug_14() { return static_cast<int32_t>(offsetof(LookAt2dGameObject_t133402631, ___debug_14)); }
	inline FsmBool_t664485696 * get_debug_14() const { return ___debug_14; }
	inline FsmBool_t664485696 ** get_address_of_debug_14() { return &___debug_14; }
	inline void set_debug_14(FsmBool_t664485696 * value)
	{
		___debug_14 = value;
		Il2CppCodeGenWriteBarrier(&___debug_14, value);
	}

	inline static int32_t get_offset_of_debugLineColor_15() { return static_cast<int32_t>(offsetof(LookAt2dGameObject_t133402631, ___debugLineColor_15)); }
	inline FsmColor_t118301965 * get_debugLineColor_15() const { return ___debugLineColor_15; }
	inline FsmColor_t118301965 ** get_address_of_debugLineColor_15() { return &___debugLineColor_15; }
	inline void set_debugLineColor_15(FsmColor_t118301965 * value)
	{
		___debugLineColor_15 = value;
		Il2CppCodeGenWriteBarrier(&___debugLineColor_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(LookAt2dGameObject_t133402631, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}

	inline static int32_t get_offset_of_go_17() { return static_cast<int32_t>(offsetof(LookAt2dGameObject_t133402631, ___go_17)); }
	inline GameObject_t1756533147 * get_go_17() const { return ___go_17; }
	inline GameObject_t1756533147 ** get_address_of_go_17() { return &___go_17; }
	inline void set_go_17(GameObject_t1756533147 * value)
	{
		___go_17 = value;
		Il2CppCodeGenWriteBarrier(&___go_17, value);
	}

	inline static int32_t get_offset_of_goTarget_18() { return static_cast<int32_t>(offsetof(LookAt2dGameObject_t133402631, ___goTarget_18)); }
	inline GameObject_t1756533147 * get_goTarget_18() const { return ___goTarget_18; }
	inline GameObject_t1756533147 ** get_address_of_goTarget_18() { return &___goTarget_18; }
	inline void set_goTarget_18(GameObject_t1756533147 * value)
	{
		___goTarget_18 = value;
		Il2CppCodeGenWriteBarrier(&___goTarget_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
