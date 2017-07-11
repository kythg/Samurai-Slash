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
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetProceduralVector2
struct  SetProceduralVector2_t1816528758  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.SetProceduralVector2::substanceMaterial
	FsmMaterial_t1421632035 * ___substanceMaterial_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetProceduralVector2::vector2Property
	FsmString_t2414474701 * ___vector2Property_12;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.SetProceduralVector2::vector2Value
	FsmVector2_t2430450063 * ___vector2Value_13;
	// System.Boolean HutongGames.PlayMaker.Actions.SetProceduralVector2::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_substanceMaterial_11() { return static_cast<int32_t>(offsetof(SetProceduralVector2_t1816528758, ___substanceMaterial_11)); }
	inline FsmMaterial_t1421632035 * get_substanceMaterial_11() const { return ___substanceMaterial_11; }
	inline FsmMaterial_t1421632035 ** get_address_of_substanceMaterial_11() { return &___substanceMaterial_11; }
	inline void set_substanceMaterial_11(FsmMaterial_t1421632035 * value)
	{
		___substanceMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___substanceMaterial_11, value);
	}

	inline static int32_t get_offset_of_vector2Property_12() { return static_cast<int32_t>(offsetof(SetProceduralVector2_t1816528758, ___vector2Property_12)); }
	inline FsmString_t2414474701 * get_vector2Property_12() const { return ___vector2Property_12; }
	inline FsmString_t2414474701 ** get_address_of_vector2Property_12() { return &___vector2Property_12; }
	inline void set_vector2Property_12(FsmString_t2414474701 * value)
	{
		___vector2Property_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Property_12, value);
	}

	inline static int32_t get_offset_of_vector2Value_13() { return static_cast<int32_t>(offsetof(SetProceduralVector2_t1816528758, ___vector2Value_13)); }
	inline FsmVector2_t2430450063 * get_vector2Value_13() const { return ___vector2Value_13; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Value_13() { return &___vector2Value_13; }
	inline void set_vector2Value_13(FsmVector2_t2430450063 * value)
	{
		___vector2Value_13 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Value_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(SetProceduralVector2_t1816528758, ___everyFrame_14)); }
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
