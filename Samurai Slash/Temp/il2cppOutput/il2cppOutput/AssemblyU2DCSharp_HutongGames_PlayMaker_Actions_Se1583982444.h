#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Co2510702729.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetGUITexture
struct  SetGUITexture_t1583982444  : public ComponentAction_1_t2510702729
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetGUITexture::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.SetGUITexture::texture
	FsmTexture_t3372293163 * ___texture_14;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetGUITexture_t1583982444, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_texture_14() { return static_cast<int32_t>(offsetof(SetGUITexture_t1583982444, ___texture_14)); }
	inline FsmTexture_t3372293163 * get_texture_14() const { return ___texture_14; }
	inline FsmTexture_t3372293163 ** get_address_of_texture_14() { return &___texture_14; }
	inline void set_texture_14(FsmTexture_t3372293163 * value)
	{
		___texture_14 = value;
		Il2CppCodeGenWriteBarrier(&___texture_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
