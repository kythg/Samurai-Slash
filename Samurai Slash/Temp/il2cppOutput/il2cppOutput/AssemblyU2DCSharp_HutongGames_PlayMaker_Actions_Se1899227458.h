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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetMaterialColor
struct  SetMaterialColor_t1899227458  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetMaterialColor::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetMaterialColor::materialIndex
	FsmInt_t1273009179 * ___materialIndex_14;
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.SetMaterialColor::material
	FsmMaterial_t1421632035 * ___material_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetMaterialColor::namedColor
	FsmString_t2414474701 * ___namedColor_16;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.SetMaterialColor::color
	FsmColor_t118301965 * ___color_17;
	// System.Boolean HutongGames.PlayMaker.Actions.SetMaterialColor::everyFrame
	bool ___everyFrame_18;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetMaterialColor_t1899227458, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_materialIndex_14() { return static_cast<int32_t>(offsetof(SetMaterialColor_t1899227458, ___materialIndex_14)); }
	inline FsmInt_t1273009179 * get_materialIndex_14() const { return ___materialIndex_14; }
	inline FsmInt_t1273009179 ** get_address_of_materialIndex_14() { return &___materialIndex_14; }
	inline void set_materialIndex_14(FsmInt_t1273009179 * value)
	{
		___materialIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___materialIndex_14, value);
	}

	inline static int32_t get_offset_of_material_15() { return static_cast<int32_t>(offsetof(SetMaterialColor_t1899227458, ___material_15)); }
	inline FsmMaterial_t1421632035 * get_material_15() const { return ___material_15; }
	inline FsmMaterial_t1421632035 ** get_address_of_material_15() { return &___material_15; }
	inline void set_material_15(FsmMaterial_t1421632035 * value)
	{
		___material_15 = value;
		Il2CppCodeGenWriteBarrier(&___material_15, value);
	}

	inline static int32_t get_offset_of_namedColor_16() { return static_cast<int32_t>(offsetof(SetMaterialColor_t1899227458, ___namedColor_16)); }
	inline FsmString_t2414474701 * get_namedColor_16() const { return ___namedColor_16; }
	inline FsmString_t2414474701 ** get_address_of_namedColor_16() { return &___namedColor_16; }
	inline void set_namedColor_16(FsmString_t2414474701 * value)
	{
		___namedColor_16 = value;
		Il2CppCodeGenWriteBarrier(&___namedColor_16, value);
	}

	inline static int32_t get_offset_of_color_17() { return static_cast<int32_t>(offsetof(SetMaterialColor_t1899227458, ___color_17)); }
	inline FsmColor_t118301965 * get_color_17() const { return ___color_17; }
	inline FsmColor_t118301965 ** get_address_of_color_17() { return &___color_17; }
	inline void set_color_17(FsmColor_t118301965 * value)
	{
		___color_17 = value;
		Il2CppCodeGenWriteBarrier(&___color_17, value);
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(SetMaterialColor_t1899227458, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
