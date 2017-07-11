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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
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

// HutongGames.PlayMaker.Actions.PlayAnimation
struct  PlayAnimation_t1743129636  : public BaseAnimationAction_t200783347
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.PlayAnimation::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.PlayAnimation::animName
	FsmString_t2414474701 * ___animName_14;
	// UnityEngine.PlayMode HutongGames.PlayMaker.Actions.PlayAnimation::playMode
	int32_t ___playMode_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.PlayAnimation::blendTime
	FsmFloat_t937133978 * ___blendTime_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.PlayAnimation::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.PlayAnimation::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_18;
	// System.Boolean HutongGames.PlayMaker.Actions.PlayAnimation::stopOnExit
	bool ___stopOnExit_19;
	// UnityEngine.AnimationState HutongGames.PlayMaker.Actions.PlayAnimation::anim
	AnimationState_t1303741697 * ___anim_20;
	// System.Single HutongGames.PlayMaker.Actions.PlayAnimation::prevAnimtTime
	float ___prevAnimtTime_21;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_animName_14() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___animName_14)); }
	inline FsmString_t2414474701 * get_animName_14() const { return ___animName_14; }
	inline FsmString_t2414474701 ** get_address_of_animName_14() { return &___animName_14; }
	inline void set_animName_14(FsmString_t2414474701 * value)
	{
		___animName_14 = value;
		Il2CppCodeGenWriteBarrier(&___animName_14, value);
	}

	inline static int32_t get_offset_of_playMode_15() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___playMode_15)); }
	inline int32_t get_playMode_15() const { return ___playMode_15; }
	inline int32_t* get_address_of_playMode_15() { return &___playMode_15; }
	inline void set_playMode_15(int32_t value)
	{
		___playMode_15 = value;
	}

	inline static int32_t get_offset_of_blendTime_16() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___blendTime_16)); }
	inline FsmFloat_t937133978 * get_blendTime_16() const { return ___blendTime_16; }
	inline FsmFloat_t937133978 ** get_address_of_blendTime_16() { return &___blendTime_16; }
	inline void set_blendTime_16(FsmFloat_t937133978 * value)
	{
		___blendTime_16 = value;
		Il2CppCodeGenWriteBarrier(&___blendTime_16, value);
	}

	inline static int32_t get_offset_of_finishEvent_17() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___finishEvent_17)); }
	inline FsmEvent_t1258573736 * get_finishEvent_17() const { return ___finishEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_17() { return &___finishEvent_17; }
	inline void set_finishEvent_17(FsmEvent_t1258573736 * value)
	{
		___finishEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_17, value);
	}

	inline static int32_t get_offset_of_loopEvent_18() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___loopEvent_18)); }
	inline FsmEvent_t1258573736 * get_loopEvent_18() const { return ___loopEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_18() { return &___loopEvent_18; }
	inline void set_loopEvent_18(FsmEvent_t1258573736 * value)
	{
		___loopEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_18, value);
	}

	inline static int32_t get_offset_of_stopOnExit_19() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___stopOnExit_19)); }
	inline bool get_stopOnExit_19() const { return ___stopOnExit_19; }
	inline bool* get_address_of_stopOnExit_19() { return &___stopOnExit_19; }
	inline void set_stopOnExit_19(bool value)
	{
		___stopOnExit_19 = value;
	}

	inline static int32_t get_offset_of_anim_20() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___anim_20)); }
	inline AnimationState_t1303741697 * get_anim_20() const { return ___anim_20; }
	inline AnimationState_t1303741697 ** get_address_of_anim_20() { return &___anim_20; }
	inline void set_anim_20(AnimationState_t1303741697 * value)
	{
		___anim_20 = value;
		Il2CppCodeGenWriteBarrier(&___anim_20, value);
	}

	inline static int32_t get_offset_of_prevAnimtTime_21() { return static_cast<int32_t>(offsetof(PlayAnimation_t1743129636, ___prevAnimtTime_21)); }
	inline float get_prevAnimtTime_21() const { return ___prevAnimtTime_21; }
	inline float* get_address_of_prevAnimtTime_21() { return &___prevAnimtTime_21; }
	inline void set_prevAnimtTime_21(float value)
	{
		___prevAnimtTime_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
