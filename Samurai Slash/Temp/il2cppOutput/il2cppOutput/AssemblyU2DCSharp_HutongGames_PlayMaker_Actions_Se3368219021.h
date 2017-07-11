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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetProceduralFloat
struct  SetProceduralFloat_t3368219021  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.SetProceduralFloat::substanceMaterial
	FsmMaterial_t1421632035 * ___substanceMaterial_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetProceduralFloat::floatProperty
	FsmString_t2414474701 * ___floatProperty_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetProceduralFloat::floatValue
	FsmFloat_t937133978 * ___floatValue_13;
	// System.Boolean HutongGames.PlayMaker.Actions.SetProceduralFloat::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_substanceMaterial_11() { return static_cast<int32_t>(offsetof(SetProceduralFloat_t3368219021, ___substanceMaterial_11)); }
	inline FsmMaterial_t1421632035 * get_substanceMaterial_11() const { return ___substanceMaterial_11; }
	inline FsmMaterial_t1421632035 ** get_address_of_substanceMaterial_11() { return &___substanceMaterial_11; }
	inline void set_substanceMaterial_11(FsmMaterial_t1421632035 * value)
	{
		___substanceMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___substanceMaterial_11, value);
	}

	inline static int32_t get_offset_of_floatProperty_12() { return static_cast<int32_t>(offsetof(SetProceduralFloat_t3368219021, ___floatProperty_12)); }
	inline FsmString_t2414474701 * get_floatProperty_12() const { return ___floatProperty_12; }
	inline FsmString_t2414474701 ** get_address_of_floatProperty_12() { return &___floatProperty_12; }
	inline void set_floatProperty_12(FsmString_t2414474701 * value)
	{
		___floatProperty_12 = value;
		Il2CppCodeGenWriteBarrier(&___floatProperty_12, value);
	}

	inline static int32_t get_offset_of_floatValue_13() { return static_cast<int32_t>(offsetof(SetProceduralFloat_t3368219021, ___floatValue_13)); }
	inline FsmFloat_t937133978 * get_floatValue_13() const { return ___floatValue_13; }
	inline FsmFloat_t937133978 ** get_address_of_floatValue_13() { return &___floatValue_13; }
	inline void set_floatValue_13(FsmFloat_t937133978 * value)
	{
		___floatValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___floatValue_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(SetProceduralFloat_t3368219021, ___everyFrame_14)); }
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
