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
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetComponent
struct  GetComponent_t1894953309  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetComponent::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.GetComponent::storeComponent
	FsmObject_t2785794313 * ___storeComponent_12;
	// System.Boolean HutongGames.PlayMaker.Actions.GetComponent::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetComponent_t1894953309, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_storeComponent_12() { return static_cast<int32_t>(offsetof(GetComponent_t1894953309, ___storeComponent_12)); }
	inline FsmObject_t2785794313 * get_storeComponent_12() const { return ___storeComponent_12; }
	inline FsmObject_t2785794313 ** get_address_of_storeComponent_12() { return &___storeComponent_12; }
	inline void set_storeComponent_12(FsmObject_t2785794313 * value)
	{
		___storeComponent_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeComponent_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(GetComponent_t1894953309, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
