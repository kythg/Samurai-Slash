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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SelectRandomString
struct  SelectRandomString_t2820022428  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.SelectRandomString::strings
	FsmStringU5BU5D_t2699231328* ___strings_11;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.SelectRandomString::weights
	FsmFloatU5BU5D_t4177556671* ___weights_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SelectRandomString::storeString
	FsmString_t2414474701 * ___storeString_13;

public:
	inline static int32_t get_offset_of_strings_11() { return static_cast<int32_t>(offsetof(SelectRandomString_t2820022428, ___strings_11)); }
	inline FsmStringU5BU5D_t2699231328* get_strings_11() const { return ___strings_11; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_strings_11() { return &___strings_11; }
	inline void set_strings_11(FsmStringU5BU5D_t2699231328* value)
	{
		___strings_11 = value;
		Il2CppCodeGenWriteBarrier(&___strings_11, value);
	}

	inline static int32_t get_offset_of_weights_12() { return static_cast<int32_t>(offsetof(SelectRandomString_t2820022428, ___weights_12)); }
	inline FsmFloatU5BU5D_t4177556671* get_weights_12() const { return ___weights_12; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_weights_12() { return &___weights_12; }
	inline void set_weights_12(FsmFloatU5BU5D_t4177556671* value)
	{
		___weights_12 = value;
		Il2CppCodeGenWriteBarrier(&___weights_12, value);
	}

	inline static int32_t get_offset_of_storeString_13() { return static_cast<int32_t>(offsetof(SelectRandomString_t2820022428, ___storeString_13)); }
	inline FsmString_t2414474701 * get_storeString_13() const { return ___storeString_13; }
	inline FsmString_t2414474701 ** get_address_of_storeString_13() { return &___storeString_13; }
	inline void set_storeString_13(FsmString_t2414474701 * value)
	{
		___storeString_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeString_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
