#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Fs3863144983.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorSpeed
struct  GetAnimatorSpeed_t3688157124  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorSpeed::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAnimatorSpeed::speed
	FsmFloat_t937133978 * ___speed_15;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorSpeed::_animator
	Animator_t69676727 * ____animator_16;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorSpeed_t3688157124, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_speed_15() { return static_cast<int32_t>(offsetof(GetAnimatorSpeed_t3688157124, ___speed_15)); }
	inline FsmFloat_t937133978 * get_speed_15() const { return ___speed_15; }
	inline FsmFloat_t937133978 ** get_address_of_speed_15() { return &___speed_15; }
	inline void set_speed_15(FsmFloat_t937133978 * value)
	{
		___speed_15 = value;
		Il2CppCodeGenWriteBarrier(&___speed_15, value);
	}

	inline static int32_t get_offset_of__animator_16() { return static_cast<int32_t>(offsetof(GetAnimatorSpeed_t3688157124, ____animator_16)); }
	inline Animator_t69676727 * get__animator_16() const { return ____animator_16; }
	inline Animator_t69676727 ** get_address_of__animator_16() { return &____animator_16; }
	inline void set__animator_16(Animator_t69676727 * value)
	{
		____animator_16 = value;
		Il2CppCodeGenWriteBarrier(&____animator_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
