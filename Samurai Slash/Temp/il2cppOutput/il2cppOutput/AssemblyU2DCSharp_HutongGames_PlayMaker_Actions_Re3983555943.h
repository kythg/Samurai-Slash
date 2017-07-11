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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RebuildTextures
struct  RebuildTextures_t3983555943  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.RebuildTextures::substanceMaterial
	FsmMaterial_t1421632035 * ___substanceMaterial_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RebuildTextures::immediately
	FsmBool_t664485696 * ___immediately_12;
	// System.Boolean HutongGames.PlayMaker.Actions.RebuildTextures::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_substanceMaterial_11() { return static_cast<int32_t>(offsetof(RebuildTextures_t3983555943, ___substanceMaterial_11)); }
	inline FsmMaterial_t1421632035 * get_substanceMaterial_11() const { return ___substanceMaterial_11; }
	inline FsmMaterial_t1421632035 ** get_address_of_substanceMaterial_11() { return &___substanceMaterial_11; }
	inline void set_substanceMaterial_11(FsmMaterial_t1421632035 * value)
	{
		___substanceMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___substanceMaterial_11, value);
	}

	inline static int32_t get_offset_of_immediately_12() { return static_cast<int32_t>(offsetof(RebuildTextures_t3983555943, ___immediately_12)); }
	inline FsmBool_t664485696 * get_immediately_12() const { return ___immediately_12; }
	inline FsmBool_t664485696 ** get_address_of_immediately_12() { return &___immediately_12; }
	inline void set_immediately_12(FsmBool_t664485696 * value)
	{
		___immediately_12 = value;
		Il2CppCodeGenWriteBarrier(&___immediately_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(RebuildTextures_t3983555943, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
