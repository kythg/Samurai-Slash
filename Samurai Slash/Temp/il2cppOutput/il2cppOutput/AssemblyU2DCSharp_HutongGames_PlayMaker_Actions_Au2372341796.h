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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AudioPlay
struct  AudioPlay_t2372341796  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AudioPlay::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AudioPlay::volume
	FsmFloat_t937133978 * ___volume_12;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.AudioPlay::oneShotClip
	FsmObject_t2785794313 * ___oneShotClip_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AudioPlay::finishedEvent
	FsmEvent_t1258573736 * ___finishedEvent_14;
	// UnityEngine.AudioSource HutongGames.PlayMaker.Actions.AudioPlay::audio
	AudioSource_t1135106623 * ___audio_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(AudioPlay_t2372341796, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_volume_12() { return static_cast<int32_t>(offsetof(AudioPlay_t2372341796, ___volume_12)); }
	inline FsmFloat_t937133978 * get_volume_12() const { return ___volume_12; }
	inline FsmFloat_t937133978 ** get_address_of_volume_12() { return &___volume_12; }
	inline void set_volume_12(FsmFloat_t937133978 * value)
	{
		___volume_12 = value;
		Il2CppCodeGenWriteBarrier(&___volume_12, value);
	}

	inline static int32_t get_offset_of_oneShotClip_13() { return static_cast<int32_t>(offsetof(AudioPlay_t2372341796, ___oneShotClip_13)); }
	inline FsmObject_t2785794313 * get_oneShotClip_13() const { return ___oneShotClip_13; }
	inline FsmObject_t2785794313 ** get_address_of_oneShotClip_13() { return &___oneShotClip_13; }
	inline void set_oneShotClip_13(FsmObject_t2785794313 * value)
	{
		___oneShotClip_13 = value;
		Il2CppCodeGenWriteBarrier(&___oneShotClip_13, value);
	}

	inline static int32_t get_offset_of_finishedEvent_14() { return static_cast<int32_t>(offsetof(AudioPlay_t2372341796, ___finishedEvent_14)); }
	inline FsmEvent_t1258573736 * get_finishedEvent_14() const { return ___finishedEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_finishedEvent_14() { return &___finishedEvent_14; }
	inline void set_finishedEvent_14(FsmEvent_t1258573736 * value)
	{
		___finishedEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___finishedEvent_14, value);
	}

	inline static int32_t get_offset_of_audio_15() { return static_cast<int32_t>(offsetof(AudioPlay_t2372341796, ___audio_15)); }
	inline AudioSource_t1135106623 * get_audio_15() const { return ___audio_15; }
	inline AudioSource_t1135106623 ** get_address_of_audio_15() { return &___audio_15; }
	inline void set_audio_15(AudioSource_t1135106623 * value)
	{
		___audio_15 = value;
		Il2CppCodeGenWriteBarrier(&___audio_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
