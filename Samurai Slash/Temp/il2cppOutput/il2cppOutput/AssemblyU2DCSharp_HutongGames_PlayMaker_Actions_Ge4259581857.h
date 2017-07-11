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
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorRoot
struct  GetAnimatorRoot_t4259581857  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorRoot::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetAnimatorRoot::rootPosition
	FsmVector3_t3996534004 * ___rootPosition_15;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetAnimatorRoot::rootRotation
	FsmQuaternion_t878438756 * ___rootRotation_16;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetAnimatorRoot::bodyGameObject
	FsmGameObject_t3097142863 * ___bodyGameObject_17;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorRoot::_animator
	Animator_t69676727 * ____animator_18;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.GetAnimatorRoot::_transform
	Transform_t3275118058 * ____transform_19;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorRoot_t4259581857, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_rootPosition_15() { return static_cast<int32_t>(offsetof(GetAnimatorRoot_t4259581857, ___rootPosition_15)); }
	inline FsmVector3_t3996534004 * get_rootPosition_15() const { return ___rootPosition_15; }
	inline FsmVector3_t3996534004 ** get_address_of_rootPosition_15() { return &___rootPosition_15; }
	inline void set_rootPosition_15(FsmVector3_t3996534004 * value)
	{
		___rootPosition_15 = value;
		Il2CppCodeGenWriteBarrier(&___rootPosition_15, value);
	}

	inline static int32_t get_offset_of_rootRotation_16() { return static_cast<int32_t>(offsetof(GetAnimatorRoot_t4259581857, ___rootRotation_16)); }
	inline FsmQuaternion_t878438756 * get_rootRotation_16() const { return ___rootRotation_16; }
	inline FsmQuaternion_t878438756 ** get_address_of_rootRotation_16() { return &___rootRotation_16; }
	inline void set_rootRotation_16(FsmQuaternion_t878438756 * value)
	{
		___rootRotation_16 = value;
		Il2CppCodeGenWriteBarrier(&___rootRotation_16, value);
	}

	inline static int32_t get_offset_of_bodyGameObject_17() { return static_cast<int32_t>(offsetof(GetAnimatorRoot_t4259581857, ___bodyGameObject_17)); }
	inline FsmGameObject_t3097142863 * get_bodyGameObject_17() const { return ___bodyGameObject_17; }
	inline FsmGameObject_t3097142863 ** get_address_of_bodyGameObject_17() { return &___bodyGameObject_17; }
	inline void set_bodyGameObject_17(FsmGameObject_t3097142863 * value)
	{
		___bodyGameObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___bodyGameObject_17, value);
	}

	inline static int32_t get_offset_of__animator_18() { return static_cast<int32_t>(offsetof(GetAnimatorRoot_t4259581857, ____animator_18)); }
	inline Animator_t69676727 * get__animator_18() const { return ____animator_18; }
	inline Animator_t69676727 ** get_address_of__animator_18() { return &____animator_18; }
	inline void set__animator_18(Animator_t69676727 * value)
	{
		____animator_18 = value;
		Il2CppCodeGenWriteBarrier(&____animator_18, value);
	}

	inline static int32_t get_offset_of__transform_19() { return static_cast<int32_t>(offsetof(GetAnimatorRoot_t4259581857, ____transform_19)); }
	inline Transform_t3275118058 * get__transform_19() const { return ____transform_19; }
	inline Transform_t3275118058 ** get_address_of__transform_19() { return &____transform_19; }
	inline void set__transform_19(Transform_t3275118058 * value)
	{
		____transform_19 = value;
		Il2CppCodeGenWriteBarrier(&____transform_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
