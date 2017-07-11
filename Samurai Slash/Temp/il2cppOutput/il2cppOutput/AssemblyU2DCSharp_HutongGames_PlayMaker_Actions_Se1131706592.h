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
// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetMaterialTexture
struct  SetMaterialTexture_t1131706592  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetMaterialTexture::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetMaterialTexture::materialIndex
	FsmInt_t1273009179 * ___materialIndex_14;
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.SetMaterialTexture::material
	FsmMaterial_t1421632035 * ___material_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetMaterialTexture::namedTexture
	FsmString_t2414474701 * ___namedTexture_16;
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.SetMaterialTexture::texture
	FsmTexture_t3372293163 * ___texture_17;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetMaterialTexture_t1131706592, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_materialIndex_14() { return static_cast<int32_t>(offsetof(SetMaterialTexture_t1131706592, ___materialIndex_14)); }
	inline FsmInt_t1273009179 * get_materialIndex_14() const { return ___materialIndex_14; }
	inline FsmInt_t1273009179 ** get_address_of_materialIndex_14() { return &___materialIndex_14; }
	inline void set_materialIndex_14(FsmInt_t1273009179 * value)
	{
		___materialIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___materialIndex_14, value);
	}

	inline static int32_t get_offset_of_material_15() { return static_cast<int32_t>(offsetof(SetMaterialTexture_t1131706592, ___material_15)); }
	inline FsmMaterial_t1421632035 * get_material_15() const { return ___material_15; }
	inline FsmMaterial_t1421632035 ** get_address_of_material_15() { return &___material_15; }
	inline void set_material_15(FsmMaterial_t1421632035 * value)
	{
		___material_15 = value;
		Il2CppCodeGenWriteBarrier(&___material_15, value);
	}

	inline static int32_t get_offset_of_namedTexture_16() { return static_cast<int32_t>(offsetof(SetMaterialTexture_t1131706592, ___namedTexture_16)); }
	inline FsmString_t2414474701 * get_namedTexture_16() const { return ___namedTexture_16; }
	inline FsmString_t2414474701 ** get_address_of_namedTexture_16() { return &___namedTexture_16; }
	inline void set_namedTexture_16(FsmString_t2414474701 * value)
	{
		___namedTexture_16 = value;
		Il2CppCodeGenWriteBarrier(&___namedTexture_16, value);
	}

	inline static int32_t get_offset_of_texture_17() { return static_cast<int32_t>(offsetof(SetMaterialTexture_t1131706592, ___texture_17)); }
	inline FsmTexture_t3372293163 * get_texture_17() const { return ___texture_17; }
	inline FsmTexture_t3372293163 ** get_address_of_texture_17() { return &___texture_17; }
	inline void set_texture_17(FsmTexture_t3372293163 * value)
	{
		___texture_17 = value;
		Il2CppCodeGenWriteBarrier(&___texture_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
