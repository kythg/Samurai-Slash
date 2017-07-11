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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetProceduralVector3
struct  SetProceduralVector3_t3382612699  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.SetProceduralVector3::substanceMaterial
	FsmMaterial_t1421632035 * ___substanceMaterial_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetProceduralVector3::vector3Property
	FsmString_t2414474701 * ___vector3Property_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SetProceduralVector3::vector3Value
	FsmVector3_t3996534004 * ___vector3Value_13;
	// System.Boolean HutongGames.PlayMaker.Actions.SetProceduralVector3::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_substanceMaterial_11() { return static_cast<int32_t>(offsetof(SetProceduralVector3_t3382612699, ___substanceMaterial_11)); }
	inline FsmMaterial_t1421632035 * get_substanceMaterial_11() const { return ___substanceMaterial_11; }
	inline FsmMaterial_t1421632035 ** get_address_of_substanceMaterial_11() { return &___substanceMaterial_11; }
	inline void set_substanceMaterial_11(FsmMaterial_t1421632035 * value)
	{
		___substanceMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___substanceMaterial_11, value);
	}

	inline static int32_t get_offset_of_vector3Property_12() { return static_cast<int32_t>(offsetof(SetProceduralVector3_t3382612699, ___vector3Property_12)); }
	inline FsmString_t2414474701 * get_vector3Property_12() const { return ___vector3Property_12; }
	inline FsmString_t2414474701 ** get_address_of_vector3Property_12() { return &___vector3Property_12; }
	inline void set_vector3Property_12(FsmString_t2414474701 * value)
	{
		___vector3Property_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Property_12, value);
	}

	inline static int32_t get_offset_of_vector3Value_13() { return static_cast<int32_t>(offsetof(SetProceduralVector3_t3382612699, ___vector3Value_13)); }
	inline FsmVector3_t3996534004 * get_vector3Value_13() const { return ___vector3Value_13; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Value_13() { return &___vector3Value_13; }
	inline void set_vector3Value_13(FsmVector3_t3996534004 * value)
	{
		___vector3Value_13 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Value_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(SetProceduralVector3_t3382612699, ___everyFrame_14)); }
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
