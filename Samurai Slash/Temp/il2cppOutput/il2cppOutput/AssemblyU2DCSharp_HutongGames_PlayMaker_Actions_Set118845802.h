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
// UnityEngine.Flare
struct Flare_t2826966314;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetLightFlare
struct  SetLightFlare_t118845802  : public ComponentAction_1_t1096305375
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetLightFlare::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// UnityEngine.Flare HutongGames.PlayMaker.Actions.SetLightFlare::lightFlare
	Flare_t2826966314 * ___lightFlare_14;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetLightFlare_t118845802, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_lightFlare_14() { return static_cast<int32_t>(offsetof(SetLightFlare_t118845802, ___lightFlare_14)); }
	inline Flare_t2826966314 * get_lightFlare_14() const { return ___lightFlare_14; }
	inline Flare_t2826966314 ** get_address_of_lightFlare_14() { return &___lightFlare_14; }
	inline void set_lightFlare_14(Flare_t2826966314 * value)
	{
		___lightFlare_14 = value;
		Il2CppCodeGenWriteBarrier(&___lightFlare_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
