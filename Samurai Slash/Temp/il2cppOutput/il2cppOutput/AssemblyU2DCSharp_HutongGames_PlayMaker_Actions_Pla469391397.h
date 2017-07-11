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
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.PlaySound
struct  PlaySound_t469391397  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.PlaySound::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.PlaySound::position
	FsmVector3_t3996534004 * ___position_12;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.PlaySound::clip
	FsmObject_t2785794313 * ___clip_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.PlaySound::volume
	FsmFloat_t937133978 * ___volume_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(PlaySound_t469391397, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_position_12() { return static_cast<int32_t>(offsetof(PlaySound_t469391397, ___position_12)); }
	inline FsmVector3_t3996534004 * get_position_12() const { return ___position_12; }
	inline FsmVector3_t3996534004 ** get_address_of_position_12() { return &___position_12; }
	inline void set_position_12(FsmVector3_t3996534004 * value)
	{
		___position_12 = value;
		Il2CppCodeGenWriteBarrier(&___position_12, value);
	}

	inline static int32_t get_offset_of_clip_13() { return static_cast<int32_t>(offsetof(PlaySound_t469391397, ___clip_13)); }
	inline FsmObject_t2785794313 * get_clip_13() const { return ___clip_13; }
	inline FsmObject_t2785794313 ** get_address_of_clip_13() { return &___clip_13; }
	inline void set_clip_13(FsmObject_t2785794313 * value)
	{
		___clip_13 = value;
		Il2CppCodeGenWriteBarrier(&___clip_13, value);
	}

	inline static int32_t get_offset_of_volume_14() { return static_cast<int32_t>(offsetof(PlaySound_t469391397, ___volume_14)); }
	inline FsmFloat_t937133978 * get_volume_14() const { return ___volume_14; }
	inline FsmFloat_t937133978 ** get_address_of_volume_14() { return &___volume_14; }
	inline void set_volume_14(FsmFloat_t937133978 * value)
	{
		___volume_14 = value;
		Il2CppCodeGenWriteBarrier(&___volume_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
