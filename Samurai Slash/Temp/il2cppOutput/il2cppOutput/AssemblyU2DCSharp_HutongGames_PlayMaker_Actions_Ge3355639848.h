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
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetChildNum
struct  GetChildNum_t3355639848  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetChildNum::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetChildNum::childIndex
	FsmInt_t1273009179 * ___childIndex_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetChildNum::store
	FsmGameObject_t3097142863 * ___store_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetChildNum_t3355639848, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_childIndex_12() { return static_cast<int32_t>(offsetof(GetChildNum_t3355639848, ___childIndex_12)); }
	inline FsmInt_t1273009179 * get_childIndex_12() const { return ___childIndex_12; }
	inline FsmInt_t1273009179 ** get_address_of_childIndex_12() { return &___childIndex_12; }
	inline void set_childIndex_12(FsmInt_t1273009179 * value)
	{
		___childIndex_12 = value;
		Il2CppCodeGenWriteBarrier(&___childIndex_12, value);
	}

	inline static int32_t get_offset_of_store_13() { return static_cast<int32_t>(offsetof(GetChildNum_t3355639848, ___store_13)); }
	inline FsmGameObject_t3097142863 * get_store_13() const { return ___store_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_store_13() { return &___store_13; }
	inline void set_store_13(FsmGameObject_t3097142863 * value)
	{
		___store_13 = value;
		Il2CppCodeGenWriteBarrier(&___store_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
