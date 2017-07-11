#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Bas200783347.h"
#include "UnityEngine_UnityEngine_WrapMode255797857.h"
#include "UnityEngine_UnityEngine_AnimationBlendMode3402232318.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimationSettings
struct  AnimationSettings_t3723856195  : public BaseAnimationAction_t200783347
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AnimationSettings::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AnimationSettings::animName
	FsmString_t2414474701 * ___animName_14;
	// UnityEngine.WrapMode HutongGames.PlayMaker.Actions.AnimationSettings::wrapMode
	int32_t ___wrapMode_15;
	// UnityEngine.AnimationBlendMode HutongGames.PlayMaker.Actions.AnimationSettings::blendMode
	int32_t ___blendMode_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimationSettings::speed
	FsmFloat_t937133978 * ___speed_17;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.AnimationSettings::layer
	FsmInt_t1273009179 * ___layer_18;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(AnimationSettings_t3723856195, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_animName_14() { return static_cast<int32_t>(offsetof(AnimationSettings_t3723856195, ___animName_14)); }
	inline FsmString_t2414474701 * get_animName_14() const { return ___animName_14; }
	inline FsmString_t2414474701 ** get_address_of_animName_14() { return &___animName_14; }
	inline void set_animName_14(FsmString_t2414474701 * value)
	{
		___animName_14 = value;
		Il2CppCodeGenWriteBarrier(&___animName_14, value);
	}

	inline static int32_t get_offset_of_wrapMode_15() { return static_cast<int32_t>(offsetof(AnimationSettings_t3723856195, ___wrapMode_15)); }
	inline int32_t get_wrapMode_15() const { return ___wrapMode_15; }
	inline int32_t* get_address_of_wrapMode_15() { return &___wrapMode_15; }
	inline void set_wrapMode_15(int32_t value)
	{
		___wrapMode_15 = value;
	}

	inline static int32_t get_offset_of_blendMode_16() { return static_cast<int32_t>(offsetof(AnimationSettings_t3723856195, ___blendMode_16)); }
	inline int32_t get_blendMode_16() const { return ___blendMode_16; }
	inline int32_t* get_address_of_blendMode_16() { return &___blendMode_16; }
	inline void set_blendMode_16(int32_t value)
	{
		___blendMode_16 = value;
	}

	inline static int32_t get_offset_of_speed_17() { return static_cast<int32_t>(offsetof(AnimationSettings_t3723856195, ___speed_17)); }
	inline FsmFloat_t937133978 * get_speed_17() const { return ___speed_17; }
	inline FsmFloat_t937133978 ** get_address_of_speed_17() { return &___speed_17; }
	inline void set_speed_17(FsmFloat_t937133978 * value)
	{
		___speed_17 = value;
		Il2CppCodeGenWriteBarrier(&___speed_17, value);
	}

	inline static int32_t get_offset_of_layer_18() { return static_cast<int32_t>(offsetof(AnimationSettings_t3723856195, ___layer_18)); }
	inline FsmInt_t1273009179 * get_layer_18() const { return ___layer_18; }
	inline FsmInt_t1273009179 ** get_address_of_layer_18() { return &___layer_18; }
	inline void set_layer_18(FsmInt_t1273009179 * value)
	{
		___layer_18 = value;
		Il2CppCodeGenWriteBarrier(&___layer_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
