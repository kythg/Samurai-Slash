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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.DelayedEvent
struct DelayedEvent_t1624700828;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.BlendAnimation
struct  BlendAnimation_t52685381  : public BaseAnimationAction_t200783347
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.BlendAnimation::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.BlendAnimation::animName
	FsmString_t2414474701 * ___animName_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.BlendAnimation::targetWeight
	FsmFloat_t937133978 * ___targetWeight_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.BlendAnimation::time
	FsmFloat_t937133978 * ___time_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BlendAnimation::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_17;
	// HutongGames.PlayMaker.DelayedEvent HutongGames.PlayMaker.Actions.BlendAnimation::delayedFinishEvent
	DelayedEvent_t1624700828 * ___delayedFinishEvent_18;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(BlendAnimation_t52685381, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_animName_14() { return static_cast<int32_t>(offsetof(BlendAnimation_t52685381, ___animName_14)); }
	inline FsmString_t2414474701 * get_animName_14() const { return ___animName_14; }
	inline FsmString_t2414474701 ** get_address_of_animName_14() { return &___animName_14; }
	inline void set_animName_14(FsmString_t2414474701 * value)
	{
		___animName_14 = value;
		Il2CppCodeGenWriteBarrier(&___animName_14, value);
	}

	inline static int32_t get_offset_of_targetWeight_15() { return static_cast<int32_t>(offsetof(BlendAnimation_t52685381, ___targetWeight_15)); }
	inline FsmFloat_t937133978 * get_targetWeight_15() const { return ___targetWeight_15; }
	inline FsmFloat_t937133978 ** get_address_of_targetWeight_15() { return &___targetWeight_15; }
	inline void set_targetWeight_15(FsmFloat_t937133978 * value)
	{
		___targetWeight_15 = value;
		Il2CppCodeGenWriteBarrier(&___targetWeight_15, value);
	}

	inline static int32_t get_offset_of_time_16() { return static_cast<int32_t>(offsetof(BlendAnimation_t52685381, ___time_16)); }
	inline FsmFloat_t937133978 * get_time_16() const { return ___time_16; }
	inline FsmFloat_t937133978 ** get_address_of_time_16() { return &___time_16; }
	inline void set_time_16(FsmFloat_t937133978 * value)
	{
		___time_16 = value;
		Il2CppCodeGenWriteBarrier(&___time_16, value);
	}

	inline static int32_t get_offset_of_finishEvent_17() { return static_cast<int32_t>(offsetof(BlendAnimation_t52685381, ___finishEvent_17)); }
	inline FsmEvent_t1258573736 * get_finishEvent_17() const { return ___finishEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_17() { return &___finishEvent_17; }
	inline void set_finishEvent_17(FsmEvent_t1258573736 * value)
	{
		___finishEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_17, value);
	}

	inline static int32_t get_offset_of_delayedFinishEvent_18() { return static_cast<int32_t>(offsetof(BlendAnimation_t52685381, ___delayedFinishEvent_18)); }
	inline DelayedEvent_t1624700828 * get_delayedFinishEvent_18() const { return ___delayedFinishEvent_18; }
	inline DelayedEvent_t1624700828 ** get_address_of_delayedFinishEvent_18() { return &___delayedFinishEvent_18; }
	inline void set_delayedFinishEvent_18(DelayedEvent_t1624700828 * value)
	{
		___delayedFinishEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___delayedFinishEvent_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
