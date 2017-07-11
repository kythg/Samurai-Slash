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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.InverseTransformDirection
struct  InverseTransformDirection_t3308449633  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.InverseTransformDirection::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.InverseTransformDirection::worldDirection
	FsmVector3_t3996534004 * ___worldDirection_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.InverseTransformDirection::storeResult
	FsmVector3_t3996534004 * ___storeResult_13;
	// System.Boolean HutongGames.PlayMaker.Actions.InverseTransformDirection::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(InverseTransformDirection_t3308449633, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_worldDirection_12() { return static_cast<int32_t>(offsetof(InverseTransformDirection_t3308449633, ___worldDirection_12)); }
	inline FsmVector3_t3996534004 * get_worldDirection_12() const { return ___worldDirection_12; }
	inline FsmVector3_t3996534004 ** get_address_of_worldDirection_12() { return &___worldDirection_12; }
	inline void set_worldDirection_12(FsmVector3_t3996534004 * value)
	{
		___worldDirection_12 = value;
		Il2CppCodeGenWriteBarrier(&___worldDirection_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(InverseTransformDirection_t3308449633, ___storeResult_13)); }
	inline FsmVector3_t3996534004 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmVector3_t3996534004 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmVector3_t3996534004 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(InverseTransformDirection_t3308449633, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
