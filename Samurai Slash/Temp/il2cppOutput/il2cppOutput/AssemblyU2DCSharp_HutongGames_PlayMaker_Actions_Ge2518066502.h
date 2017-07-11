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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetChild
struct  GetChild_t2518066502  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetChild::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetChild::childName
	FsmString_t2414474701 * ___childName_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetChild::withTag
	FsmString_t2414474701 * ___withTag_13;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetChild::storeResult
	FsmGameObject_t3097142863 * ___storeResult_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetChild_t2518066502, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_childName_12() { return static_cast<int32_t>(offsetof(GetChild_t2518066502, ___childName_12)); }
	inline FsmString_t2414474701 * get_childName_12() const { return ___childName_12; }
	inline FsmString_t2414474701 ** get_address_of_childName_12() { return &___childName_12; }
	inline void set_childName_12(FsmString_t2414474701 * value)
	{
		___childName_12 = value;
		Il2CppCodeGenWriteBarrier(&___childName_12, value);
	}

	inline static int32_t get_offset_of_withTag_13() { return static_cast<int32_t>(offsetof(GetChild_t2518066502, ___withTag_13)); }
	inline FsmString_t2414474701 * get_withTag_13() const { return ___withTag_13; }
	inline FsmString_t2414474701 ** get_address_of_withTag_13() { return &___withTag_13; }
	inline void set_withTag_13(FsmString_t2414474701 * value)
	{
		___withTag_13 = value;
		Il2CppCodeGenWriteBarrier(&___withTag_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(GetChild_t2518066502, ___storeResult_14)); }
	inline FsmGameObject_t3097142863 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmGameObject_t3097142863 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
