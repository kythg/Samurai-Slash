#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector3Normalize
struct  Vector3Normalize_t314901501  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Normalize::vector3Variable
	FsmVector3_t3996534004 * ___vector3Variable_11;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector3Normalize::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_vector3Variable_11() { return static_cast<int32_t>(offsetof(Vector3Normalize_t314901501, ___vector3Variable_11)); }
	inline FsmVector3_t3996534004 * get_vector3Variable_11() const { return ___vector3Variable_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Variable_11() { return &___vector3Variable_11; }
	inline void set_vector3Variable_11(FsmVector3_t3996534004 * value)
	{
		___vector3Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Variable_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(Vector3Normalize_t314901501, ___everyFrame_12)); }
	inline bool get_everyFrame_12() const { return ___everyFrame_12; }
	inline bool* get_address_of_everyFrame_12() { return &___everyFrame_12; }
	inline void set_everyFrame_12(bool value)
	{
		___everyFrame_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
