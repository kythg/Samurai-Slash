#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Co1736686362.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAudioClip
struct  SetAudioClip_t3781849772  : public ComponentAction_1_t1736686362
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAudioClip::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.SetAudioClip::audioClip
	FsmObject_t2785794313 * ___audioClip_14;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetAudioClip_t3781849772, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_audioClip_14() { return static_cast<int32_t>(offsetof(SetAudioClip_t3781849772, ___audioClip_14)); }
	inline FsmObject_t2785794313 * get_audioClip_14() const { return ___audioClip_14; }
	inline FsmObject_t2785794313 ** get_address_of_audioClip_14() { return &___audioClip_14; }
	inline void set_audioClip_14(FsmObject_t2785794313 * value)
	{
		___audioClip_14 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
