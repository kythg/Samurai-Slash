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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetTag
struct  SetTag_t2146450414  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetTag::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetTag::tag
	FsmString_t2414474701 * ___tag_12;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetTag_t2146450414, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_tag_12() { return static_cast<int32_t>(offsetof(SetTag_t2146450414, ___tag_12)); }
	inline FsmString_t2414474701 * get_tag_12() const { return ___tag_12; }
	inline FsmString_t2414474701 ** get_address_of_tag_12() { return &___tag_12; }
	inline void set_tag_12(FsmString_t2414474701 * value)
	{
		___tag_12 = value;
		Il2CppCodeGenWriteBarrier(&___tag_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
