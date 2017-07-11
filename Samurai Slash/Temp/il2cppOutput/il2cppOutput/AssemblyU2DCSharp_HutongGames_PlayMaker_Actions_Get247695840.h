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

// HutongGames.PlayMaker.Actions.GetParticleCollisionInfo
struct  GetParticleCollisionInfo_t247695840  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetParticleCollisionInfo::gameObjectHit
	FsmGameObject_t3097142863 * ___gameObjectHit_11;

public:
	inline static int32_t get_offset_of_gameObjectHit_11() { return static_cast<int32_t>(offsetof(GetParticleCollisionInfo_t247695840, ___gameObjectHit_11)); }
	inline FsmGameObject_t3097142863 * get_gameObjectHit_11() const { return ___gameObjectHit_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObjectHit_11() { return &___gameObjectHit_11; }
	inline void set_gameObjectHit_11(FsmGameObject_t3097142863 * value)
	{
		___gameObjectHit_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectHit_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
