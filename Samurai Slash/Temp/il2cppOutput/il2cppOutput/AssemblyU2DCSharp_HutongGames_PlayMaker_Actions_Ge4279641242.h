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

// HutongGames.PlayMaker.Actions.GetRoot
struct  GetRoot_t4279641242  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetRoot::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetRoot::storeRoot
	FsmGameObject_t3097142863 * ___storeRoot_12;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetRoot_t4279641242, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_storeRoot_12() { return static_cast<int32_t>(offsetof(GetRoot_t4279641242, ___storeRoot_12)); }
	inline FsmGameObject_t3097142863 * get_storeRoot_12() const { return ___storeRoot_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeRoot_12() { return &___storeRoot_12; }
	inline void set_storeRoot_12(FsmGameObject_t3097142863 * value)
	{
		___storeRoot_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeRoot_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
