#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetKey
struct  GetKey_t3369588153  : public FsmStateAction_t2862378169
{
public:
	// UnityEngine.KeyCode HutongGames.PlayMaker.Actions.GetKey::key
	int32_t ___key_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetKey::storeResult
	FsmBool_t664485696 * ___storeResult_12;
	// System.Boolean HutongGames.PlayMaker.Actions.GetKey::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(GetKey_t3369588153, ___key_11)); }
	inline int32_t get_key_11() const { return ___key_11; }
	inline int32_t* get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(int32_t value)
	{
		___key_11 = value;
	}

	inline static int32_t get_offset_of_storeResult_12() { return static_cast<int32_t>(offsetof(GetKey_t3369588153, ___storeResult_12)); }
	inline FsmBool_t664485696 * get_storeResult_12() const { return ___storeResult_12; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_12() { return &___storeResult_12; }
	inline void set_storeResult_12(FsmBool_t664485696 * value)
	{
		___storeResult_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(GetKey_t3369588153, ___everyFrame_13)); }
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
