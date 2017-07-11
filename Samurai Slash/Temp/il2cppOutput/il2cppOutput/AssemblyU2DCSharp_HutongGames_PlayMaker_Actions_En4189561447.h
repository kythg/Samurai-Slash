#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Bas200783347.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EnableAnimation
struct  EnableAnimation_t4189561447  : public BaseAnimationAction_t200783347
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.EnableAnimation::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.EnableAnimation::animName
	FsmString_t2414474701 * ___animName_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EnableAnimation::enable
	FsmBool_t664485696 * ___enable_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EnableAnimation::resetOnExit
	FsmBool_t664485696 * ___resetOnExit_16;
	// UnityEngine.AnimationState HutongGames.PlayMaker.Actions.EnableAnimation::anim
	AnimationState_t1303741697 * ___anim_17;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(EnableAnimation_t4189561447, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_animName_14() { return static_cast<int32_t>(offsetof(EnableAnimation_t4189561447, ___animName_14)); }
	inline FsmString_t2414474701 * get_animName_14() const { return ___animName_14; }
	inline FsmString_t2414474701 ** get_address_of_animName_14() { return &___animName_14; }
	inline void set_animName_14(FsmString_t2414474701 * value)
	{
		___animName_14 = value;
		Il2CppCodeGenWriteBarrier(&___animName_14, value);
	}

	inline static int32_t get_offset_of_enable_15() { return static_cast<int32_t>(offsetof(EnableAnimation_t4189561447, ___enable_15)); }
	inline FsmBool_t664485696 * get_enable_15() const { return ___enable_15; }
	inline FsmBool_t664485696 ** get_address_of_enable_15() { return &___enable_15; }
	inline void set_enable_15(FsmBool_t664485696 * value)
	{
		___enable_15 = value;
		Il2CppCodeGenWriteBarrier(&___enable_15, value);
	}

	inline static int32_t get_offset_of_resetOnExit_16() { return static_cast<int32_t>(offsetof(EnableAnimation_t4189561447, ___resetOnExit_16)); }
	inline FsmBool_t664485696 * get_resetOnExit_16() const { return ___resetOnExit_16; }
	inline FsmBool_t664485696 ** get_address_of_resetOnExit_16() { return &___resetOnExit_16; }
	inline void set_resetOnExit_16(FsmBool_t664485696 * value)
	{
		___resetOnExit_16 = value;
		Il2CppCodeGenWriteBarrier(&___resetOnExit_16, value);
	}

	inline static int32_t get_offset_of_anim_17() { return static_cast<int32_t>(offsetof(EnableAnimation_t4189561447, ___anim_17)); }
	inline AnimationState_t1303741697 * get_anim_17() const { return ___anim_17; }
	inline AnimationState_t1303741697 ** get_address_of_anim_17() { return &___anim_17; }
	inline void set_anim_17(AnimationState_t1303741697 * value)
	{
		___anim_17 = value;
		Il2CppCodeGenWriteBarrier(&___anim_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
