#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorBoneGameObject
struct  GetAnimatorBoneGameObject_t2114940722  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorBoneGameObject::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.GetAnimatorBoneGameObject::bone
	FsmEnum_t2808516103 * ___bone_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetAnimatorBoneGameObject::boneGameObject
	FsmGameObject_t3097142863 * ___boneGameObject_13;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorBoneGameObject::_animator
	Animator_t69676727 * ____animator_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetAnimatorBoneGameObject_t2114940722, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_bone_12() { return static_cast<int32_t>(offsetof(GetAnimatorBoneGameObject_t2114940722, ___bone_12)); }
	inline FsmEnum_t2808516103 * get_bone_12() const { return ___bone_12; }
	inline FsmEnum_t2808516103 ** get_address_of_bone_12() { return &___bone_12; }
	inline void set_bone_12(FsmEnum_t2808516103 * value)
	{
		___bone_12 = value;
		Il2CppCodeGenWriteBarrier(&___bone_12, value);
	}

	inline static int32_t get_offset_of_boneGameObject_13() { return static_cast<int32_t>(offsetof(GetAnimatorBoneGameObject_t2114940722, ___boneGameObject_13)); }
	inline FsmGameObject_t3097142863 * get_boneGameObject_13() const { return ___boneGameObject_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_boneGameObject_13() { return &___boneGameObject_13; }
	inline void set_boneGameObject_13(FsmGameObject_t3097142863 * value)
	{
		___boneGameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___boneGameObject_13, value);
	}

	inline static int32_t get_offset_of__animator_14() { return static_cast<int32_t>(offsetof(GetAnimatorBoneGameObject_t2114940722, ____animator_14)); }
	inline Animator_t69676727 * get__animator_14() const { return ____animator_14; }
	inline Animator_t69676727 ** get_address_of__animator_14() { return &____animator_14; }
	inline void set__animator_14(Animator_t69676727 * value)
	{
		____animator_14 = value;
		Il2CppCodeGenWriteBarrier(&____animator_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
