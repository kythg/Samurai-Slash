#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com858890304.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmMaterial
struct FsmMaterial_t1421632035;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetMaterial
struct  SetMaterial_t210965441  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetMaterial::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetMaterial::materialIndex
	FsmInt_t1273009179 * ___materialIndex_14;
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.SetMaterial::material
	FsmMaterial_t1421632035 * ___material_15;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetMaterial_t210965441, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_materialIndex_14() { return static_cast<int32_t>(offsetof(SetMaterial_t210965441, ___materialIndex_14)); }
	inline FsmInt_t1273009179 * get_materialIndex_14() const { return ___materialIndex_14; }
	inline FsmInt_t1273009179 ** get_address_of_materialIndex_14() { return &___materialIndex_14; }
	inline void set_materialIndex_14(FsmInt_t1273009179 * value)
	{
		___materialIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___materialIndex_14, value);
	}

	inline static int32_t get_offset_of_material_15() { return static_cast<int32_t>(offsetof(SetMaterial_t210965441, ___material_15)); }
	inline FsmMaterial_t1421632035 * get_material_15() const { return ___material_15; }
	inline FsmMaterial_t1421632035 ** get_address_of_material_15() { return &___material_15; }
	inline void set_material_15(FsmMaterial_t1421632035 * value)
	{
		___material_15 = value;
		Il2CppCodeGenWriteBarrier(&___material_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
