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
// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetLightType
struct  SetLightType_t1129332026  : public ComponentAction_1_t1096305375
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetLightType::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.SetLightType::lightType
	FsmEnum_t2808516103 * ___lightType_14;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetLightType_t1129332026, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_lightType_14() { return static_cast<int32_t>(offsetof(SetLightType_t1129332026, ___lightType_14)); }
	inline FsmEnum_t2808516103 * get_lightType_14() const { return ___lightType_14; }
	inline FsmEnum_t2808516103 ** get_address_of_lightType_14() { return &___lightType_14; }
	inline void set_lightType_14(FsmEnum_t2808516103 * value)
	{
		___lightType_14 = value;
		Il2CppCodeGenWriteBarrier(&___lightType_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
