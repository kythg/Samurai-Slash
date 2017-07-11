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
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetProceduralColor
struct  SetProceduralColor_t2922530328  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.SetProceduralColor::substanceMaterial
	FsmMaterial_t1421632035 * ___substanceMaterial_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetProceduralColor::colorProperty
	FsmString_t2414474701 * ___colorProperty_12;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.SetProceduralColor::colorValue
	FsmColor_t118301965 * ___colorValue_13;
	// System.Boolean HutongGames.PlayMaker.Actions.SetProceduralColor::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_substanceMaterial_11() { return static_cast<int32_t>(offsetof(SetProceduralColor_t2922530328, ___substanceMaterial_11)); }
	inline FsmMaterial_t1421632035 * get_substanceMaterial_11() const { return ___substanceMaterial_11; }
	inline FsmMaterial_t1421632035 ** get_address_of_substanceMaterial_11() { return &___substanceMaterial_11; }
	inline void set_substanceMaterial_11(FsmMaterial_t1421632035 * value)
	{
		___substanceMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___substanceMaterial_11, value);
	}

	inline static int32_t get_offset_of_colorProperty_12() { return static_cast<int32_t>(offsetof(SetProceduralColor_t2922530328, ___colorProperty_12)); }
	inline FsmString_t2414474701 * get_colorProperty_12() const { return ___colorProperty_12; }
	inline FsmString_t2414474701 ** get_address_of_colorProperty_12() { return &___colorProperty_12; }
	inline void set_colorProperty_12(FsmString_t2414474701 * value)
	{
		___colorProperty_12 = value;
		Il2CppCodeGenWriteBarrier(&___colorProperty_12, value);
	}

	inline static int32_t get_offset_of_colorValue_13() { return static_cast<int32_t>(offsetof(SetProceduralColor_t2922530328, ___colorValue_13)); }
	inline FsmColor_t118301965 * get_colorValue_13() const { return ___colorValue_13; }
	inline FsmColor_t118301965 ** get_address_of_colorValue_13() { return &___colorValue_13; }
	inline void set_colorValue_13(FsmColor_t118301965 * value)
	{
		___colorValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___colorValue_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(SetProceduralColor_t2922530328, ___everyFrame_14)); }
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
