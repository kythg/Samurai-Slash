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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetNextChild
struct  GetNextChild_t1059056315  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetNextChild::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetNextChild::storeNextChild
	FsmGameObject_t3097142863 * ___storeNextChild_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextChild::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetNextChild::finishedEvent
	FsmEvent_t1258573736 * ___finishedEvent_14;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.GetNextChild::go
	GameObject_t1756533147 * ___go_15;
	// System.Int32 HutongGames.PlayMaker.Actions.GetNextChild::nextChildIndex
	int32_t ___nextChildIndex_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetNextChild_t1059056315, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_storeNextChild_12() { return static_cast<int32_t>(offsetof(GetNextChild_t1059056315, ___storeNextChild_12)); }
	inline FsmGameObject_t3097142863 * get_storeNextChild_12() const { return ___storeNextChild_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeNextChild_12() { return &___storeNextChild_12; }
	inline void set_storeNextChild_12(FsmGameObject_t3097142863 * value)
	{
		___storeNextChild_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeNextChild_12, value);
	}

	inline static int32_t get_offset_of_loopEvent_13() { return static_cast<int32_t>(offsetof(GetNextChild_t1059056315, ___loopEvent_13)); }
	inline FsmEvent_t1258573736 * get_loopEvent_13() const { return ___loopEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_13() { return &___loopEvent_13; }
	inline void set_loopEvent_13(FsmEvent_t1258573736 * value)
	{
		___loopEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_13, value);
	}

	inline static int32_t get_offset_of_finishedEvent_14() { return static_cast<int32_t>(offsetof(GetNextChild_t1059056315, ___finishedEvent_14)); }
	inline FsmEvent_t1258573736 * get_finishedEvent_14() const { return ___finishedEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_finishedEvent_14() { return &___finishedEvent_14; }
	inline void set_finishedEvent_14(FsmEvent_t1258573736 * value)
	{
		___finishedEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___finishedEvent_14, value);
	}

	inline static int32_t get_offset_of_go_15() { return static_cast<int32_t>(offsetof(GetNextChild_t1059056315, ___go_15)); }
	inline GameObject_t1756533147 * get_go_15() const { return ___go_15; }
	inline GameObject_t1756533147 ** get_address_of_go_15() { return &___go_15; }
	inline void set_go_15(GameObject_t1756533147 * value)
	{
		___go_15 = value;
		Il2CppCodeGenWriteBarrier(&___go_15, value);
	}

	inline static int32_t get_offset_of_nextChildIndex_16() { return static_cast<int32_t>(offsetof(GetNextChild_t1059056315, ___nextChildIndex_16)); }
	inline int32_t get_nextChildIndex_16() const { return ___nextChildIndex_16; }
	inline int32_t* get_address_of_nextChildIndex_16() { return &___nextChildIndex_16; }
	inline void set_nextChildIndex_16(int32_t value)
	{
		___nextChildIndex_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
