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
// HutongGames.PlayMaker.FsmMaterial[]
struct FsmMaterialU5BU5D_t1567627762;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetRandomMaterial
struct  SetRandomMaterial_t194326024  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetRandomMaterial::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetRandomMaterial::materialIndex
	FsmInt_t1273009179 * ___materialIndex_14;
	// HutongGames.PlayMaker.FsmMaterial[] HutongGames.PlayMaker.Actions.SetRandomMaterial::materials
	FsmMaterialU5BU5D_t1567627762* ___materials_15;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetRandomMaterial_t194326024, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_materialIndex_14() { return static_cast<int32_t>(offsetof(SetRandomMaterial_t194326024, ___materialIndex_14)); }
	inline FsmInt_t1273009179 * get_materialIndex_14() const { return ___materialIndex_14; }
	inline FsmInt_t1273009179 ** get_address_of_materialIndex_14() { return &___materialIndex_14; }
	inline void set_materialIndex_14(FsmInt_t1273009179 * value)
	{
		___materialIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___materialIndex_14, value);
	}

	inline static int32_t get_offset_of_materials_15() { return static_cast<int32_t>(offsetof(SetRandomMaterial_t194326024, ___materials_15)); }
	inline FsmMaterialU5BU5D_t1567627762* get_materials_15() const { return ___materials_15; }
	inline FsmMaterialU5BU5D_t1567627762** get_address_of_materials_15() { return &___materials_15; }
	inline void set_materials_15(FsmMaterialU5BU5D_t1567627762* value)
	{
		___materials_15 = value;
		Il2CppCodeGenWriteBarrier(&___materials_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
