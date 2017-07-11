#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString[]
struct FsmStringU5BU5D_t2699231328;
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.PlayerPrefsSetFloat
struct  PlayerPrefsSetFloat_t1786127731  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.PlayerPrefsSetFloat::keys
	FsmStringU5BU5D_t2699231328* ___keys_11;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.PlayerPrefsSetFloat::values
	FsmFloatU5BU5D_t4177556671* ___values_12;

public:
	inline static int32_t get_offset_of_keys_11() { return static_cast<int32_t>(offsetof(PlayerPrefsSetFloat_t1786127731, ___keys_11)); }
	inline FsmStringU5BU5D_t2699231328* get_keys_11() const { return ___keys_11; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_keys_11() { return &___keys_11; }
	inline void set_keys_11(FsmStringU5BU5D_t2699231328* value)
	{
		___keys_11 = value;
		Il2CppCodeGenWriteBarrier(&___keys_11, value);
	}

	inline static int32_t get_offset_of_values_12() { return static_cast<int32_t>(offsetof(PlayerPrefsSetFloat_t1786127731, ___values_12)); }
	inline FsmFloatU5BU5D_t4177556671* get_values_12() const { return ___values_12; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_values_12() { return &___values_12; }
	inline void set_values_12(FsmFloatU5BU5D_t4177556671* value)
	{
		___values_12 = value;
		Il2CppCodeGenWriteBarrier(&___values_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
