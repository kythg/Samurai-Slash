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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetCollisionInfo
struct  GetCollisionInfo_t3677821312  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetCollisionInfo::gameObjectHit
	FsmGameObject_t3097142863 * ___gameObjectHit_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetCollisionInfo::relativeVelocity
	FsmVector3_t3996534004 * ___relativeVelocity_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetCollisionInfo::relativeSpeed
	FsmFloat_t937133978 * ___relativeSpeed_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetCollisionInfo::contactPoint
	FsmVector3_t3996534004 * ___contactPoint_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetCollisionInfo::contactNormal
	FsmVector3_t3996534004 * ___contactNormal_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetCollisionInfo::physicsMaterialName
	FsmString_t2414474701 * ___physicsMaterialName_16;

public:
	inline static int32_t get_offset_of_gameObjectHit_11() { return static_cast<int32_t>(offsetof(GetCollisionInfo_t3677821312, ___gameObjectHit_11)); }
	inline FsmGameObject_t3097142863 * get_gameObjectHit_11() const { return ___gameObjectHit_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObjectHit_11() { return &___gameObjectHit_11; }
	inline void set_gameObjectHit_11(FsmGameObject_t3097142863 * value)
	{
		___gameObjectHit_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectHit_11, value);
	}

	inline static int32_t get_offset_of_relativeVelocity_12() { return static_cast<int32_t>(offsetof(GetCollisionInfo_t3677821312, ___relativeVelocity_12)); }
	inline FsmVector3_t3996534004 * get_relativeVelocity_12() const { return ___relativeVelocity_12; }
	inline FsmVector3_t3996534004 ** get_address_of_relativeVelocity_12() { return &___relativeVelocity_12; }
	inline void set_relativeVelocity_12(FsmVector3_t3996534004 * value)
	{
		___relativeVelocity_12 = value;
		Il2CppCodeGenWriteBarrier(&___relativeVelocity_12, value);
	}

	inline static int32_t get_offset_of_relativeSpeed_13() { return static_cast<int32_t>(offsetof(GetCollisionInfo_t3677821312, ___relativeSpeed_13)); }
	inline FsmFloat_t937133978 * get_relativeSpeed_13() const { return ___relativeSpeed_13; }
	inline FsmFloat_t937133978 ** get_address_of_relativeSpeed_13() { return &___relativeSpeed_13; }
	inline void set_relativeSpeed_13(FsmFloat_t937133978 * value)
	{
		___relativeSpeed_13 = value;
		Il2CppCodeGenWriteBarrier(&___relativeSpeed_13, value);
	}

	inline static int32_t get_offset_of_contactPoint_14() { return static_cast<int32_t>(offsetof(GetCollisionInfo_t3677821312, ___contactPoint_14)); }
	inline FsmVector3_t3996534004 * get_contactPoint_14() const { return ___contactPoint_14; }
	inline FsmVector3_t3996534004 ** get_address_of_contactPoint_14() { return &___contactPoint_14; }
	inline void set_contactPoint_14(FsmVector3_t3996534004 * value)
	{
		___contactPoint_14 = value;
		Il2CppCodeGenWriteBarrier(&___contactPoint_14, value);
	}

	inline static int32_t get_offset_of_contactNormal_15() { return static_cast<int32_t>(offsetof(GetCollisionInfo_t3677821312, ___contactNormal_15)); }
	inline FsmVector3_t3996534004 * get_contactNormal_15() const { return ___contactNormal_15; }
	inline FsmVector3_t3996534004 ** get_address_of_contactNormal_15() { return &___contactNormal_15; }
	inline void set_contactNormal_15(FsmVector3_t3996534004 * value)
	{
		___contactNormal_15 = value;
		Il2CppCodeGenWriteBarrier(&___contactNormal_15, value);
	}

	inline static int32_t get_offset_of_physicsMaterialName_16() { return static_cast<int32_t>(offsetof(GetCollisionInfo_t3677821312, ___physicsMaterialName_16)); }
	inline FsmString_t2414474701 * get_physicsMaterialName_16() const { return ___physicsMaterialName_16; }
	inline FsmString_t2414474701 ** get_address_of_physicsMaterialName_16() { return &___physicsMaterialName_16; }
	inline void set_physicsMaterialName_16(FsmString_t2414474701 * value)
	{
		___physicsMaterialName_16 = value;
		Il2CppCodeGenWriteBarrier(&___physicsMaterialName_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
