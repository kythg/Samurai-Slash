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
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetJointConnectedBody
struct  SetJointConnectedBody_t3047785219  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetJointConnectedBody::joint
	FsmOwnerDefault_t2023674184 * ___joint_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SetJointConnectedBody::rigidBody
	FsmGameObject_t3097142863 * ___rigidBody_12;

public:
	inline static int32_t get_offset_of_joint_11() { return static_cast<int32_t>(offsetof(SetJointConnectedBody_t3047785219, ___joint_11)); }
	inline FsmOwnerDefault_t2023674184 * get_joint_11() const { return ___joint_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_joint_11() { return &___joint_11; }
	inline void set_joint_11(FsmOwnerDefault_t2023674184 * value)
	{
		___joint_11 = value;
		Il2CppCodeGenWriteBarrier(&___joint_11, value);
	}

	inline static int32_t get_offset_of_rigidBody_12() { return static_cast<int32_t>(offsetof(SetJointConnectedBody_t3047785219, ___rigidBody_12)); }
	inline FsmGameObject_t3097142863 * get_rigidBody_12() const { return ___rigidBody_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_rigidBody_12() { return &___rigidBody_12; }
	inline void set_rigidBody_12(FsmGameObject_t3097142863 * value)
	{
		___rigidBody_12 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
