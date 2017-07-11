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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetCollision2dInfo
struct  GetCollision2dInfo_t883092102  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetCollision2dInfo::gameObjectHit
	FsmGameObject_t3097142863 * ___gameObjectHit_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetCollision2dInfo::relativeVelocity
	FsmVector3_t3996534004 * ___relativeVelocity_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetCollision2dInfo::relativeSpeed
	FsmFloat_t937133978 * ___relativeSpeed_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetCollision2dInfo::contactPoint
	FsmVector3_t3996534004 * ___contactPoint_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetCollision2dInfo::contactNormal
	FsmVector3_t3996534004 * ___contactNormal_15;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetCollision2dInfo::shapeCount
	FsmInt_t1273009179 * ___shapeCount_16;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetCollision2dInfo::physics2dMaterialName
	FsmString_t2414474701 * ___physics2dMaterialName_17;

public:
	inline static int32_t get_offset_of_gameObjectHit_11() { return static_cast<int32_t>(offsetof(GetCollision2dInfo_t883092102, ___gameObjectHit_11)); }
	inline FsmGameObject_t3097142863 * get_gameObjectHit_11() const { return ___gameObjectHit_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObjectHit_11() { return &___gameObjectHit_11; }
	inline void set_gameObjectHit_11(FsmGameObject_t3097142863 * value)
	{
		___gameObjectHit_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectHit_11, value);
	}

	inline static int32_t get_offset_of_relativeVelocity_12() { return static_cast<int32_t>(offsetof(GetCollision2dInfo_t883092102, ___relativeVelocity_12)); }
	inline FsmVector3_t3996534004 * get_relativeVelocity_12() const { return ___relativeVelocity_12; }
	inline FsmVector3_t3996534004 ** get_address_of_relativeVelocity_12() { return &___relativeVelocity_12; }
	inline void set_relativeVelocity_12(FsmVector3_t3996534004 * value)
	{
		___relativeVelocity_12 = value;
		Il2CppCodeGenWriteBarrier(&___relativeVelocity_12, value);
	}

	inline static int32_t get_offset_of_relativeSpeed_13() { return static_cast<int32_t>(offsetof(GetCollision2dInfo_t883092102, ___relativeSpeed_13)); }
	inline FsmFloat_t937133978 * get_relativeSpeed_13() const { return ___relativeSpeed_13; }
	inline FsmFloat_t937133978 ** get_address_of_relativeSpeed_13() { return &___relativeSpeed_13; }
	inline void set_relativeSpeed_13(FsmFloat_t937133978 * value)
	{
		___relativeSpeed_13 = value;
		Il2CppCodeGenWriteBarrier(&___relativeSpeed_13, value);
	}

	inline static int32_t get_offset_of_contactPoint_14() { return static_cast<int32_t>(offsetof(GetCollision2dInfo_t883092102, ___contactPoint_14)); }
	inline FsmVector3_t3996534004 * get_contactPoint_14() const { return ___contactPoint_14; }
	inline FsmVector3_t3996534004 ** get_address_of_contactPoint_14() { return &___contactPoint_14; }
	inline void set_contactPoint_14(FsmVector3_t3996534004 * value)
	{
		___contactPoint_14 = value;
		Il2CppCodeGenWriteBarrier(&___contactPoint_14, value);
	}

	inline static int32_t get_offset_of_contactNormal_15() { return static_cast<int32_t>(offsetof(GetCollision2dInfo_t883092102, ___contactNormal_15)); }
	inline FsmVector3_t3996534004 * get_contactNormal_15() const { return ___contactNormal_15; }
	inline FsmVector3_t3996534004 ** get_address_of_contactNormal_15() { return &___contactNormal_15; }
	inline void set_contactNormal_15(FsmVector3_t3996534004 * value)
	{
		___contactNormal_15 = value;
		Il2CppCodeGenWriteBarrier(&___contactNormal_15, value);
	}

	inline static int32_t get_offset_of_shapeCount_16() { return static_cast<int32_t>(offsetof(GetCollision2dInfo_t883092102, ___shapeCount_16)); }
	inline FsmInt_t1273009179 * get_shapeCount_16() const { return ___shapeCount_16; }
	inline FsmInt_t1273009179 ** get_address_of_shapeCount_16() { return &___shapeCount_16; }
	inline void set_shapeCount_16(FsmInt_t1273009179 * value)
	{
		___shapeCount_16 = value;
		Il2CppCodeGenWriteBarrier(&___shapeCount_16, value);
	}

	inline static int32_t get_offset_of_physics2dMaterialName_17() { return static_cast<int32_t>(offsetof(GetCollision2dInfo_t883092102, ___physics2dMaterialName_17)); }
	inline FsmString_t2414474701 * get_physics2dMaterialName_17() const { return ___physics2dMaterialName_17; }
	inline FsmString_t2414474701 ** get_address_of_physics2dMaterialName_17() { return &___physics2dMaterialName_17; }
	inline void set_physics2dMaterialName_17(FsmString_t2414474701 * value)
	{
		___physics2dMaterialName_17 = value;
		Il2CppCodeGenWriteBarrier(&___physics2dMaterialName_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
