#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "PlayMaker_HutongGames_PlayMaker_OwnerDefaultOption3848444473.h"

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmOwnerDefault
struct  FsmOwnerDefault_t2023674184  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.OwnerDefaultOption HutongGames.PlayMaker.FsmOwnerDefault::ownerOption
	int32_t ___ownerOption_0;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.FsmOwnerDefault::gameObject
	FsmGameObject_t3097142863 * ___gameObject_1;

public:
	inline static int32_t get_offset_of_ownerOption_0() { return static_cast<int32_t>(offsetof(FsmOwnerDefault_t2023674184, ___ownerOption_0)); }
	inline int32_t get_ownerOption_0() const { return ___ownerOption_0; }
	inline int32_t* get_address_of_ownerOption_0() { return &___ownerOption_0; }
	inline void set_ownerOption_0(int32_t value)
	{
		___ownerOption_0 = value;
	}

	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(FsmOwnerDefault_t2023674184, ___gameObject_1)); }
	inline FsmGameObject_t3097142863 * get_gameObject_1() const { return ___gameObject_1; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(FsmGameObject_t3097142863 * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
