﻿#pragma once

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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetLightRange
struct  SetLightRange_t2001034233  : public ComponentAction_1_t1096305375
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetLightRange::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetLightRange::lightRange
	FsmFloat_t937133978 * ___lightRange_14;
	// System.Boolean HutongGames.PlayMaker.Actions.SetLightRange::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetLightRange_t2001034233, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_lightRange_14() { return static_cast<int32_t>(offsetof(SetLightRange_t2001034233, ___lightRange_14)); }
	inline FsmFloat_t937133978 * get_lightRange_14() const { return ___lightRange_14; }
	inline FsmFloat_t937133978 ** get_address_of_lightRange_14() { return &___lightRange_14; }
	inline void set_lightRange_14(FsmFloat_t937133978 * value)
	{
		___lightRange_14 = value;
		Il2CppCodeGenWriteBarrier(&___lightRange_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(SetLightRange_t2001034233, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
