#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Co1096305375.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetLightCookie
struct  SetLightCookie_t1783681314  : public ComponentAction_1_t1096305375
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetLightCookie::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.SetLightCookie::lightCookie
	FsmTexture_t3372293163 * ___lightCookie_14;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetLightCookie_t1783681314, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_lightCookie_14() { return static_cast<int32_t>(offsetof(SetLightCookie_t1783681314, ___lightCookie_14)); }
	inline FsmTexture_t3372293163 * get_lightCookie_14() const { return ___lightCookie_14; }
	inline FsmTexture_t3372293163 ** get_address_of_lightCookie_14() { return &___lightCookie_14; }
	inline void set_lightCookie_14(FsmTexture_t3372293163 * value)
	{
		___lightCookie_14 = value;
		Il2CppCodeGenWriteBarrier(&___lightCookie_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
