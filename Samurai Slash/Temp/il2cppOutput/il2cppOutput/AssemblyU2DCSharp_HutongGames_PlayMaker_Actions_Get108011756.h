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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetMaterialTexture
struct  GetMaterialTexture_t108011756  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetMaterialTexture::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetMaterialTexture::materialIndex
	FsmInt_t1273009179 * ___materialIndex_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetMaterialTexture::namedTexture
	FsmString_t2414474701 * ___namedTexture_15;
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.GetMaterialTexture::storedTexture
	FsmTexture_t3372293163 * ___storedTexture_16;
	// System.Boolean HutongGames.PlayMaker.Actions.GetMaterialTexture::getFromSharedMaterial
	bool ___getFromSharedMaterial_17;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(GetMaterialTexture_t108011756, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_materialIndex_14() { return static_cast<int32_t>(offsetof(GetMaterialTexture_t108011756, ___materialIndex_14)); }
	inline FsmInt_t1273009179 * get_materialIndex_14() const { return ___materialIndex_14; }
	inline FsmInt_t1273009179 ** get_address_of_materialIndex_14() { return &___materialIndex_14; }
	inline void set_materialIndex_14(FsmInt_t1273009179 * value)
	{
		___materialIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___materialIndex_14, value);
	}

	inline static int32_t get_offset_of_namedTexture_15() { return static_cast<int32_t>(offsetof(GetMaterialTexture_t108011756, ___namedTexture_15)); }
	inline FsmString_t2414474701 * get_namedTexture_15() const { return ___namedTexture_15; }
	inline FsmString_t2414474701 ** get_address_of_namedTexture_15() { return &___namedTexture_15; }
	inline void set_namedTexture_15(FsmString_t2414474701 * value)
	{
		___namedTexture_15 = value;
		Il2CppCodeGenWriteBarrier(&___namedTexture_15, value);
	}

	inline static int32_t get_offset_of_storedTexture_16() { return static_cast<int32_t>(offsetof(GetMaterialTexture_t108011756, ___storedTexture_16)); }
	inline FsmTexture_t3372293163 * get_storedTexture_16() const { return ___storedTexture_16; }
	inline FsmTexture_t3372293163 ** get_address_of_storedTexture_16() { return &___storedTexture_16; }
	inline void set_storedTexture_16(FsmTexture_t3372293163 * value)
	{
		___storedTexture_16 = value;
		Il2CppCodeGenWriteBarrier(&___storedTexture_16, value);
	}

	inline static int32_t get_offset_of_getFromSharedMaterial_17() { return static_cast<int32_t>(offsetof(GetMaterialTexture_t108011756, ___getFromSharedMaterial_17)); }
	inline bool get_getFromSharedMaterial_17() const { return ___getFromSharedMaterial_17; }
	inline bool* get_address_of_getFromSharedMaterial_17() { return &___getFromSharedMaterial_17; }
	inline void set_getFromSharedMaterial_17(bool value)
	{
		___getFromSharedMaterial_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
