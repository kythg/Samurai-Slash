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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorDelta
struct  GetAnimatorDelta_t4026889723  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorDelta::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetAnimatorDelta::deltaPosition
	FsmVector3_t3996534004 * ___deltaPosition_15;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetAnimatorDelta::deltaRotation
	FsmQuaternion_t878438756 * ___deltaRotation_16;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.GetAnimatorDelta::_transform
	Transform_t3275118058 * ____transform_17;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorDelta::_animator
	Animator_t69676727 * ____animator_18;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorDelta_t4026889723, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_deltaPosition_15() { return static_cast<int32_t>(offsetof(GetAnimatorDelta_t4026889723, ___deltaPosition_15)); }
	inline FsmVector3_t3996534004 * get_deltaPosition_15() const { return ___deltaPosition_15; }
	inline FsmVector3_t3996534004 ** get_address_of_deltaPosition_15() { return &___deltaPosition_15; }
	inline void set_deltaPosition_15(FsmVector3_t3996534004 * value)
	{
		___deltaPosition_15 = value;
		Il2CppCodeGenWriteBarrier(&___deltaPosition_15, value);
	}

	inline static int32_t get_offset_of_deltaRotation_16() { return static_cast<int32_t>(offsetof(GetAnimatorDelta_t4026889723, ___deltaRotation_16)); }
	inline FsmQuaternion_t878438756 * get_deltaRotation_16() const { return ___deltaRotation_16; }
	inline FsmQuaternion_t878438756 ** get_address_of_deltaRotation_16() { return &___deltaRotation_16; }
	inline void set_deltaRotation_16(FsmQuaternion_t878438756 * value)
	{
		___deltaRotation_16 = value;
		Il2CppCodeGenWriteBarrier(&___deltaRotation_16, value);
	}

	inline static int32_t get_offset_of__transform_17() { return static_cast<int32_t>(offsetof(GetAnimatorDelta_t4026889723, ____transform_17)); }
	inline Transform_t3275118058 * get__transform_17() const { return ____transform_17; }
	inline Transform_t3275118058 ** get_address_of__transform_17() { return &____transform_17; }
	inline void set__transform_17(Transform_t3275118058 * value)
	{
		____transform_17 = value;
		Il2CppCodeGenWriteBarrier(&____transform_17, value);
	}

	inline static int32_t get_offset_of__animator_18() { return static_cast<int32_t>(offsetof(GetAnimatorDelta_t4026889723, ____animator_18)); }
	inline Animator_t69676727 * get__animator_18() const { return ____animator_18; }
	inline Animator_t69676727 ** get_address_of__animator_18() { return &____animator_18; }
	inline void set__animator_18(Animator_t69676727 * value)
	{
		____animator_18 = value;
		Il2CppCodeGenWriteBarrier(&____animator_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
