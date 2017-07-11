#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmMaterial
struct FsmMaterial_t1421632035;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetProceduralBoolean
struct  SetProceduralBoolean_t2208280019  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.SetProceduralBoolean::substanceMaterial
	FsmMaterial_t1421632035 * ___substanceMaterial_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetProceduralBoolean::boolProperty
	FsmString_t2414474701 * ___boolProperty_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetProceduralBoolean::boolValue
	FsmBool_t664485696 * ___boolValue_13;
	// System.Boolean HutongGames.PlayMaker.Actions.SetProceduralBoolean::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_substanceMaterial_11() { return static_cast<int32_t>(offsetof(SetProceduralBoolean_t2208280019, ___substanceMaterial_11)); }
	inline FsmMaterial_t1421632035 * get_substanceMaterial_11() const { return ___substanceMaterial_11; }
	inline FsmMaterial_t1421632035 ** get_address_of_substanceMaterial_11() { return &___substanceMaterial_11; }
	inline void set_substanceMaterial_11(FsmMaterial_t1421632035 * value)
	{
		___substanceMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___substanceMaterial_11, value);
	}

	inline static int32_t get_offset_of_boolProperty_12() { return static_cast<int32_t>(offsetof(SetProceduralBoolean_t2208280019, ___boolProperty_12)); }
	inline FsmString_t2414474701 * get_boolProperty_12() const { return ___boolProperty_12; }
	inline FsmString_t2414474701 ** get_address_of_boolProperty_12() { return &___boolProperty_12; }
	inline void set_boolProperty_12(FsmString_t2414474701 * value)
	{
		___boolProperty_12 = value;
		Il2CppCodeGenWriteBarrier(&___boolProperty_12, value);
	}

	inline static int32_t get_offset_of_boolValue_13() { return static_cast<int32_t>(offsetof(SetProceduralBoolean_t2208280019, ___boolValue_13)); }
	inline FsmBool_t664485696 * get_boolValue_13() const { return ___boolValue_13; }
	inline FsmBool_t664485696 ** get_address_of_boolValue_13() { return &___boolValue_13; }
	inline void set_boolValue_13(FsmBool_t664485696 * value)
	{
		___boolValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___boolValue_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(SetProceduralBoolean_t2208280019, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
