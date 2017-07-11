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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetChildCount
struct  GetChildCount_t4111048973  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetChildCount::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetChildCount::storeResult
	FsmInt_t1273009179 * ___storeResult_12;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetChildCount_t4111048973, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_storeResult_12() { return static_cast<int32_t>(offsetof(GetChildCount_t4111048973, ___storeResult_12)); }
	inline FsmInt_t1273009179 * get_storeResult_12() const { return ___storeResult_12; }
	inline FsmInt_t1273009179 ** get_address_of_storeResult_12() { return &___storeResult_12; }
	inline void set_storeResult_12(FsmInt_t1273009179 * value)
	{
		___storeResult_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
