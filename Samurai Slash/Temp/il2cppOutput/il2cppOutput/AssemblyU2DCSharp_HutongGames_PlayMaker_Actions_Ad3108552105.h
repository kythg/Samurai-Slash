#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Bas200783347.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AddMixingTransform
struct  AddMixingTransform_t3108552105  : public BaseAnimationAction_t200783347
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddMixingTransform::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AddMixingTransform::animationName
	FsmString_t2414474701 * ___animationName_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AddMixingTransform::transform
	FsmString_t2414474701 * ___transform_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.AddMixingTransform::recursive
	FsmBool_t664485696 * ___recursive_16;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(AddMixingTransform_t3108552105, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_animationName_14() { return static_cast<int32_t>(offsetof(AddMixingTransform_t3108552105, ___animationName_14)); }
	inline FsmString_t2414474701 * get_animationName_14() const { return ___animationName_14; }
	inline FsmString_t2414474701 ** get_address_of_animationName_14() { return &___animationName_14; }
	inline void set_animationName_14(FsmString_t2414474701 * value)
	{
		___animationName_14 = value;
		Il2CppCodeGenWriteBarrier(&___animationName_14, value);
	}

	inline static int32_t get_offset_of_transform_15() { return static_cast<int32_t>(offsetof(AddMixingTransform_t3108552105, ___transform_15)); }
	inline FsmString_t2414474701 * get_transform_15() const { return ___transform_15; }
	inline FsmString_t2414474701 ** get_address_of_transform_15() { return &___transform_15; }
	inline void set_transform_15(FsmString_t2414474701 * value)
	{
		___transform_15 = value;
		Il2CppCodeGenWriteBarrier(&___transform_15, value);
	}

	inline static int32_t get_offset_of_recursive_16() { return static_cast<int32_t>(offsetof(AddMixingTransform_t3108552105, ___recursive_16)); }
	inline FsmBool_t664485696 * get_recursive_16() const { return ___recursive_16; }
	inline FsmBool_t664485696 ** get_address_of_recursive_16() { return &___recursive_16; }
	inline void set_recursive_16(FsmBool_t664485696 * value)
	{
		___recursive_16 = value;
		Il2CppCodeGenWriteBarrier(&___recursive_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
