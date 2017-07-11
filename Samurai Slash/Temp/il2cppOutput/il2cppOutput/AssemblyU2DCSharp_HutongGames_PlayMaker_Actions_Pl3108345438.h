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
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.PlayRandomSound
struct  PlayRandomSound_t3108345438  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.PlayRandomSound::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.PlayRandomSound::position
	FsmVector3_t3996534004 * ___position_12;
	// UnityEngine.AudioClip[] HutongGames.PlayMaker.Actions.PlayRandomSound::audioClips
	AudioClipU5BU5D_t2203355011* ___audioClips_13;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.PlayRandomSound::weights
	FsmFloatU5BU5D_t4177556671* ___weights_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.PlayRandomSound::volume
	FsmFloat_t937133978 * ___volume_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(PlayRandomSound_t3108345438, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_position_12() { return static_cast<int32_t>(offsetof(PlayRandomSound_t3108345438, ___position_12)); }
	inline FsmVector3_t3996534004 * get_position_12() const { return ___position_12; }
	inline FsmVector3_t3996534004 ** get_address_of_position_12() { return &___position_12; }
	inline void set_position_12(FsmVector3_t3996534004 * value)
	{
		___position_12 = value;
		Il2CppCodeGenWriteBarrier(&___position_12, value);
	}

	inline static int32_t get_offset_of_audioClips_13() { return static_cast<int32_t>(offsetof(PlayRandomSound_t3108345438, ___audioClips_13)); }
	inline AudioClipU5BU5D_t2203355011* get_audioClips_13() const { return ___audioClips_13; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_audioClips_13() { return &___audioClips_13; }
	inline void set_audioClips_13(AudioClipU5BU5D_t2203355011* value)
	{
		___audioClips_13 = value;
		Il2CppCodeGenWriteBarrier(&___audioClips_13, value);
	}

	inline static int32_t get_offset_of_weights_14() { return static_cast<int32_t>(offsetof(PlayRandomSound_t3108345438, ___weights_14)); }
	inline FsmFloatU5BU5D_t4177556671* get_weights_14() const { return ___weights_14; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_weights_14() { return &___weights_14; }
	inline void set_weights_14(FsmFloatU5BU5D_t4177556671* value)
	{
		___weights_14 = value;
		Il2CppCodeGenWriteBarrier(&___weights_14, value);
	}

	inline static int32_t get_offset_of_volume_15() { return static_cast<int32_t>(offsetof(PlayRandomSound_t3108345438, ___volume_15)); }
	inline FsmFloat_t937133978 * get_volume_15() const { return ___volume_15; }
	inline FsmFloat_t937133978 ** get_address_of_volume_15() { return &___volume_15; }
	inline void set_volume_15(FsmFloat_t937133978 * value)
	{
		___volume_15 = value;
		Il2CppCodeGenWriteBarrier(&___volume_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
