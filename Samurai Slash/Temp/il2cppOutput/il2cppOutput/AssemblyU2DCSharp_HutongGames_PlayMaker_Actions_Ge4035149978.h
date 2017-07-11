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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetTriggerInfo
struct  GetTriggerInfo_t4035149978  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetTriggerInfo::gameObjectHit
	FsmGameObject_t3097142863 * ___gameObjectHit_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetTriggerInfo::physicsMaterialName
	FsmString_t2414474701 * ___physicsMaterialName_12;

public:
	inline static int32_t get_offset_of_gameObjectHit_11() { return static_cast<int32_t>(offsetof(GetTriggerInfo_t4035149978, ___gameObjectHit_11)); }
	inline FsmGameObject_t3097142863 * get_gameObjectHit_11() const { return ___gameObjectHit_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObjectHit_11() { return &___gameObjectHit_11; }
	inline void set_gameObjectHit_11(FsmGameObject_t3097142863 * value)
	{
		___gameObjectHit_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectHit_11, value);
	}

	inline static int32_t get_offset_of_physicsMaterialName_12() { return static_cast<int32_t>(offsetof(GetTriggerInfo_t4035149978, ___physicsMaterialName_12)); }
	inline FsmString_t2414474701 * get_physicsMaterialName_12() const { return ___physicsMaterialName_12; }
	inline FsmString_t2414474701 ** get_address_of_physicsMaterialName_12() { return &___physicsMaterialName_12; }
	inline void set_physicsMaterialName_12(FsmString_t2414474701 * value)
	{
		___physicsMaterialName_12 = value;
		Il2CppCodeGenWriteBarrier(&___physicsMaterialName_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
