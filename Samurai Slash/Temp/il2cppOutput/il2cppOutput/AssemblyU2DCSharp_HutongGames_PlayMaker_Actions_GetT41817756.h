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
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetTrigger2dInfo
struct  GetTrigger2dInfo_t41817756  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetTrigger2dInfo::gameObjectHit
	FsmGameObject_t3097142863 * ___gameObjectHit_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetTrigger2dInfo::shapeCount
	FsmInt_t1273009179 * ___shapeCount_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetTrigger2dInfo::physics2dMaterialName
	FsmString_t2414474701 * ___physics2dMaterialName_13;

public:
	inline static int32_t get_offset_of_gameObjectHit_11() { return static_cast<int32_t>(offsetof(GetTrigger2dInfo_t41817756, ___gameObjectHit_11)); }
	inline FsmGameObject_t3097142863 * get_gameObjectHit_11() const { return ___gameObjectHit_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObjectHit_11() { return &___gameObjectHit_11; }
	inline void set_gameObjectHit_11(FsmGameObject_t3097142863 * value)
	{
		___gameObjectHit_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectHit_11, value);
	}

	inline static int32_t get_offset_of_shapeCount_12() { return static_cast<int32_t>(offsetof(GetTrigger2dInfo_t41817756, ___shapeCount_12)); }
	inline FsmInt_t1273009179 * get_shapeCount_12() const { return ___shapeCount_12; }
	inline FsmInt_t1273009179 ** get_address_of_shapeCount_12() { return &___shapeCount_12; }
	inline void set_shapeCount_12(FsmInt_t1273009179 * value)
	{
		___shapeCount_12 = value;
		Il2CppCodeGenWriteBarrier(&___shapeCount_12, value);
	}

	inline static int32_t get_offset_of_physics2dMaterialName_13() { return static_cast<int32_t>(offsetof(GetTrigger2dInfo_t41817756, ___physics2dMaterialName_13)); }
	inline FsmString_t2414474701 * get_physics2dMaterialName_13() const { return ___physics2dMaterialName_13; }
	inline FsmString_t2414474701 ** get_address_of_physics2dMaterialName_13() { return &___physics2dMaterialName_13; }
	inline void set_physics2dMaterialName_13(FsmString_t2414474701 * value)
	{
		___physics2dMaterialName_13 = value;
		Il2CppCodeGenWriteBarrier(&___physics2dMaterialName_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
