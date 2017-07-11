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
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.NavMeshAgentAnimatorSynchronizer
struct  NavMeshAgentAnimatorSynchronizer_t432228018  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.NavMeshAgentAnimatorSynchronizer::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.NavMeshAgentAnimatorSynchronizer::_animator
	Animator_t69676727 * ____animator_12;
	// UnityEngine.AI.NavMeshAgent HutongGames.PlayMaker.Actions.NavMeshAgentAnimatorSynchronizer::_agent
	NavMeshAgent_t2761625415 * ____agent_13;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.NavMeshAgentAnimatorSynchronizer::_trans
	Transform_t3275118058 * ____trans_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(NavMeshAgentAnimatorSynchronizer_t432228018, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of__animator_12() { return static_cast<int32_t>(offsetof(NavMeshAgentAnimatorSynchronizer_t432228018, ____animator_12)); }
	inline Animator_t69676727 * get__animator_12() const { return ____animator_12; }
	inline Animator_t69676727 ** get_address_of__animator_12() { return &____animator_12; }
	inline void set__animator_12(Animator_t69676727 * value)
	{
		____animator_12 = value;
		Il2CppCodeGenWriteBarrier(&____animator_12, value);
	}

	inline static int32_t get_offset_of__agent_13() { return static_cast<int32_t>(offsetof(NavMeshAgentAnimatorSynchronizer_t432228018, ____agent_13)); }
	inline NavMeshAgent_t2761625415 * get__agent_13() const { return ____agent_13; }
	inline NavMeshAgent_t2761625415 ** get_address_of__agent_13() { return &____agent_13; }
	inline void set__agent_13(NavMeshAgent_t2761625415 * value)
	{
		____agent_13 = value;
		Il2CppCodeGenWriteBarrier(&____agent_13, value);
	}

	inline static int32_t get_offset_of__trans_14() { return static_cast<int32_t>(offsetof(NavMeshAgentAnimatorSynchronizer_t432228018, ____trans_14)); }
	inline Transform_t3275118058 * get__trans_14() const { return ____trans_14; }
	inline Transform_t3275118058 ** get_address_of__trans_14() { return &____trans_14; }
	inline void set__trans_14(Transform_t3275118058 * value)
	{
		____trans_14 = value;
		Il2CppCodeGenWriteBarrier(&____trans_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
