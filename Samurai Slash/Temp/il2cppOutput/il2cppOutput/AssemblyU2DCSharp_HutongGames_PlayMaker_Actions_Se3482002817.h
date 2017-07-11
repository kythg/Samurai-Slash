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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAnimationSpeed
struct  SetAnimationSpeed_t3482002817  : public BaseAnimationAction_t200783347
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAnimationSpeed::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetAnimationSpeed::animName
	FsmString_t2414474701 * ___animName_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetAnimationSpeed::speed
	FsmFloat_t937133978 * ___speed_15;
	// System.Boolean HutongGames.PlayMaker.Actions.SetAnimationSpeed::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetAnimationSpeed_t3482002817, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_animName_14() { return static_cast<int32_t>(offsetof(SetAnimationSpeed_t3482002817, ___animName_14)); }
	inline FsmString_t2414474701 * get_animName_14() const { return ___animName_14; }
	inline FsmString_t2414474701 ** get_address_of_animName_14() { return &___animName_14; }
	inline void set_animName_14(FsmString_t2414474701 * value)
	{
		___animName_14 = value;
		Il2CppCodeGenWriteBarrier(&___animName_14, value);
	}

	inline static int32_t get_offset_of_speed_15() { return static_cast<int32_t>(offsetof(SetAnimationSpeed_t3482002817, ___speed_15)); }
	inline FsmFloat_t937133978 * get_speed_15() const { return ___speed_15; }
	inline FsmFloat_t937133978 ** get_address_of_speed_15() { return &___speed_15; }
	inline void set_speed_15(FsmFloat_t937133978 * value)
	{
		___speed_15 = value;
		Il2CppCodeGenWriteBarrier(&___speed_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(SetAnimationSpeed_t3482002817, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
