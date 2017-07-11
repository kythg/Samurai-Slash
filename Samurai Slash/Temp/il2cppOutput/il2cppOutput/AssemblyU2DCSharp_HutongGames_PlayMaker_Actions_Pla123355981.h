#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Bas200783347.h"
#include "UnityEngine_UnityEngine_PlayMode1184682879.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString[]
struct FsmStringU5BU5D_t2699231328;
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.PlayRandomAnimation
struct  PlayRandomAnimation_t123355981  : public BaseAnimationAction_t200783347
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.PlayRandomAnimation::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.PlayRandomAnimation::animations
	FsmStringU5BU5D_t2699231328* ___animations_14;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.PlayRandomAnimation::weights
	FsmFloatU5BU5D_t4177556671* ___weights_15;
	// UnityEngine.PlayMode HutongGames.PlayMaker.Actions.PlayRandomAnimation::playMode
	int32_t ___playMode_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.PlayRandomAnimation::blendTime
	FsmFloat_t937133978 * ___blendTime_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.PlayRandomAnimation::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_18;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.PlayRandomAnimation::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_19;
	// System.Boolean HutongGames.PlayMaker.Actions.PlayRandomAnimation::stopOnExit
	bool ___stopOnExit_20;
	// UnityEngine.AnimationState HutongGames.PlayMaker.Actions.PlayRandomAnimation::anim
	AnimationState_t1303741697 * ___anim_21;
	// System.Single HutongGames.PlayMaker.Actions.PlayRandomAnimation::prevAnimtTime
	float ___prevAnimtTime_22;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_animations_14() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___animations_14)); }
	inline FsmStringU5BU5D_t2699231328* get_animations_14() const { return ___animations_14; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_animations_14() { return &___animations_14; }
	inline void set_animations_14(FsmStringU5BU5D_t2699231328* value)
	{
		___animations_14 = value;
		Il2CppCodeGenWriteBarrier(&___animations_14, value);
	}

	inline static int32_t get_offset_of_weights_15() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___weights_15)); }
	inline FsmFloatU5BU5D_t4177556671* get_weights_15() const { return ___weights_15; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_weights_15() { return &___weights_15; }
	inline void set_weights_15(FsmFloatU5BU5D_t4177556671* value)
	{
		___weights_15 = value;
		Il2CppCodeGenWriteBarrier(&___weights_15, value);
	}

	inline static int32_t get_offset_of_playMode_16() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___playMode_16)); }
	inline int32_t get_playMode_16() const { return ___playMode_16; }
	inline int32_t* get_address_of_playMode_16() { return &___playMode_16; }
	inline void set_playMode_16(int32_t value)
	{
		___playMode_16 = value;
	}

	inline static int32_t get_offset_of_blendTime_17() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___blendTime_17)); }
	inline FsmFloat_t937133978 * get_blendTime_17() const { return ___blendTime_17; }
	inline FsmFloat_t937133978 ** get_address_of_blendTime_17() { return &___blendTime_17; }
	inline void set_blendTime_17(FsmFloat_t937133978 * value)
	{
		___blendTime_17 = value;
		Il2CppCodeGenWriteBarrier(&___blendTime_17, value);
	}

	inline static int32_t get_offset_of_finishEvent_18() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___finishEvent_18)); }
	inline FsmEvent_t1258573736 * get_finishEvent_18() const { return ___finishEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_18() { return &___finishEvent_18; }
	inline void set_finishEvent_18(FsmEvent_t1258573736 * value)
	{
		___finishEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_18, value);
	}

	inline static int32_t get_offset_of_loopEvent_19() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___loopEvent_19)); }
	inline FsmEvent_t1258573736 * get_loopEvent_19() const { return ___loopEvent_19; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_19() { return &___loopEvent_19; }
	inline void set_loopEvent_19(FsmEvent_t1258573736 * value)
	{
		___loopEvent_19 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_19, value);
	}

	inline static int32_t get_offset_of_stopOnExit_20() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___stopOnExit_20)); }
	inline bool get_stopOnExit_20() const { return ___stopOnExit_20; }
	inline bool* get_address_of_stopOnExit_20() { return &___stopOnExit_20; }
	inline void set_stopOnExit_20(bool value)
	{
		___stopOnExit_20 = value;
	}

	inline static int32_t get_offset_of_anim_21() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___anim_21)); }
	inline AnimationState_t1303741697 * get_anim_21() const { return ___anim_21; }
	inline AnimationState_t1303741697 ** get_address_of_anim_21() { return &___anim_21; }
	inline void set_anim_21(AnimationState_t1303741697 * value)
	{
		___anim_21 = value;
		Il2CppCodeGenWriteBarrier(&___anim_21, value);
	}

	inline static int32_t get_offset_of_prevAnimtTime_22() { return static_cast<int32_t>(offsetof(PlayRandomAnimation_t123355981, ___prevAnimtTime_22)); }
	inline float get_prevAnimtTime_22() const { return ___prevAnimtTime_22; }
	inline float* get_address_of_prevAnimtTime_22() { return &___prevAnimtTime_22; }
	inline void set_prevAnimtTime_22(float value)
	{
		___prevAnimtTime_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
