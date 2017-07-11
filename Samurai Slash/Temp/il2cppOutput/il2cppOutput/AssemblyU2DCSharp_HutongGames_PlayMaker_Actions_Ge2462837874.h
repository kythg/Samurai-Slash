#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetMainCamera
struct  GetMainCamera_t2462837874  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetMainCamera::storeGameObject
	FsmGameObject_t3097142863 * ___storeGameObject_11;

public:
	inline static int32_t get_offset_of_storeGameObject_11() { return static_cast<int32_t>(offsetof(GetMainCamera_t2462837874, ___storeGameObject_11)); }
	inline FsmGameObject_t3097142863 * get_storeGameObject_11() const { return ___storeGameObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeGameObject_11() { return &___storeGameObject_11; }
	inline void set_storeGameObject_11(FsmGameObject_t3097142863 * value)
	{
		___storeGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeGameObject_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
