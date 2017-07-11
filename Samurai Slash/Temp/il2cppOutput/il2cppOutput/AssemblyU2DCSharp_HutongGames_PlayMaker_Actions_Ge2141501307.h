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

// HutongGames.PlayMaker.Actions.GetAnimatorGravityWeight
struct  GetAnimatorGravityWeight_t2141501307  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorGravityWeight::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAnimatorGravityWeight::gravityWeight
	FsmFloat_t937133978 * ___gravityWeight_15;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorGravityWeight::_animator
	Animator_t69676727 * ____animator_16;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorGravityWeight_t2141501307, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_gravityWeight_15() { return static_cast<int32_t>(offsetof(GetAnimatorGravityWeight_t2141501307, ___gravityWeight_15)); }
	inline FsmFloat_t937133978 * get_gravityWeight_15() const { return ___gravityWeight_15; }
	inline FsmFloat_t937133978 ** get_address_of_gravityWeight_15() { return &___gravityWeight_15; }
	inline void set_gravityWeight_15(FsmFloat_t937133978 * value)
	{
		___gravityWeight_15 = value;
		Il2CppCodeGenWriteBarrier(&___gravityWeight_15, value);
	}

	inline static int32_t get_offset_of__animator_16() { return static_cast<int32_t>(offsetof(GetAnimatorGravityWeight_t2141501307, ____animator_16)); }
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
