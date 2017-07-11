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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CapturePoseAsAnimationClip
struct  CapturePoseAsAnimationClip_t2661379439  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.CapturePoseAsAnimationClip::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.CapturePoseAsAnimationClip::position
	FsmBool_t664485696 * ___position_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.CapturePoseAsAnimationClip::rotation
	FsmBool_t664485696 * ___rotation_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.CapturePoseAsAnimationClip::scale
	FsmBool_t664485696 * ___scale_14;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.CapturePoseAsAnimationClip::storeAnimationClip
	FsmObject_t2785794313 * ___storeAnimationClip_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(CapturePoseAsAnimationClip_t2661379439, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_position_12() { return static_cast<int32_t>(offsetof(CapturePoseAsAnimationClip_t2661379439, ___position_12)); }
	inline FsmBool_t664485696 * get_position_12() const { return ___position_12; }
	inline FsmBool_t664485696 ** get_address_of_position_12() { return &___position_12; }
	inline void set_position_12(FsmBool_t664485696 * value)
	{
		___position_12 = value;
		Il2CppCodeGenWriteBarrier(&___position_12, value);
	}

	inline static int32_t get_offset_of_rotation_13() { return static_cast<int32_t>(offsetof(CapturePoseAsAnimationClip_t2661379439, ___rotation_13)); }
	inline FsmBool_t664485696 * get_rotation_13() const { return ___rotation_13; }
	inline FsmBool_t664485696 ** get_address_of_rotation_13() { return &___rotation_13; }
	inline void set_rotation_13(FsmBool_t664485696 * value)
	{
		___rotation_13 = value;
		Il2CppCodeGenWriteBarrier(&___rotation_13, value);
	}

	inline static int32_t get_offset_of_scale_14() { return static_cast<int32_t>(offsetof(CapturePoseAsAnimationClip_t2661379439, ___scale_14)); }
	inline FsmBool_t664485696 * get_scale_14() const { return ___scale_14; }
	inline FsmBool_t664485696 ** get_address_of_scale_14() { return &___scale_14; }
	inline void set_scale_14(FsmBool_t664485696 * value)
	{
		___scale_14 = value;
		Il2CppCodeGenWriteBarrier(&___scale_14, value);
	}

	inline static int32_t get_offset_of_storeAnimationClip_15() { return static_cast<int32_t>(offsetof(CapturePoseAsAnimationClip_t2661379439, ___storeAnimationClip_15)); }
	inline FsmObject_t2785794313 * get_storeAnimationClip_15() const { return ___storeAnimationClip_15; }
	inline FsmObject_t2785794313 ** get_address_of_storeAnimationClip_15() { return &___storeAnimationClip_15; }
	inline void set_storeAnimationClip_15(FsmObject_t2785794313 * value)
	{
		___storeAnimationClip_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeAnimationClip_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
