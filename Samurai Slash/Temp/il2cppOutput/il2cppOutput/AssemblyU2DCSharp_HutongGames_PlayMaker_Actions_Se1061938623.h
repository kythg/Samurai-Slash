﻿#pragma once

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
// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetTagsOnChildren
struct  SetTagsOnChildren_t1061938623  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetTagsOnChildren::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetTagsOnChildren::tag
	FsmString_t2414474701 * ___tag_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetTagsOnChildren::filterByComponent
	FsmString_t2414474701 * ___filterByComponent_13;
	// System.Type HutongGames.PlayMaker.Actions.SetTagsOnChildren::componentFilter
	Type_t * ___componentFilter_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetTagsOnChildren_t1061938623, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_tag_12() { return static_cast<int32_t>(offsetof(SetTagsOnChildren_t1061938623, ___tag_12)); }
	inline FsmString_t2414474701 * get_tag_12() const { return ___tag_12; }
	inline FsmString_t2414474701 ** get_address_of_tag_12() { return &___tag_12; }
	inline void set_tag_12(FsmString_t2414474701 * value)
	{
		___tag_12 = value;
		Il2CppCodeGenWriteBarrier(&___tag_12, value);
	}

	inline static int32_t get_offset_of_filterByComponent_13() { return static_cast<int32_t>(offsetof(SetTagsOnChildren_t1061938623, ___filterByComponent_13)); }
	inline FsmString_t2414474701 * get_filterByComponent_13() const { return ___filterByComponent_13; }
	inline FsmString_t2414474701 ** get_address_of_filterByComponent_13() { return &___filterByComponent_13; }
	inline void set_filterByComponent_13(FsmString_t2414474701 * value)
	{
		___filterByComponent_13 = value;
		Il2CppCodeGenWriteBarrier(&___filterByComponent_13, value);
	}

	inline static int32_t get_offset_of_componentFilter_14() { return static_cast<int32_t>(offsetof(SetTagsOnChildren_t1061938623, ___componentFilter_14)); }
	inline Type_t * get_componentFilter_14() const { return ___componentFilter_14; }
	inline Type_t ** get_address_of_componentFilter_14() { return &___componentFilter_14; }
	inline void set_componentFilter_14(Type_t * value)
	{
		___componentFilter_14 = value;
		Il2CppCodeGenWriteBarrier(&___componentFilter_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
