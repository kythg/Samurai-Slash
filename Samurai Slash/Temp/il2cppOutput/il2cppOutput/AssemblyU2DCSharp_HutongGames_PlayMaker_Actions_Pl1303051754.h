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
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.PlayerPrefsGetInt
struct  PlayerPrefsGetInt_t1303051754  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.PlayerPrefsGetInt::keys
	FsmStringU5BU5D_t2699231328* ___keys_11;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.PlayerPrefsGetInt::variables
	FsmIntU5BU5D_t2637547802* ___variables_12;

public:
	inline static int32_t get_offset_of_keys_11() { return static_cast<int32_t>(offsetof(PlayerPrefsGetInt_t1303051754, ___keys_11)); }
	inline FsmStringU5BU5D_t2699231328* get_keys_11() const { return ___keys_11; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_keys_11() { return &___keys_11; }
	inline void set_keys_11(FsmStringU5BU5D_t2699231328* value)
	{
		___keys_11 = value;
		Il2CppCodeGenWriteBarrier(&___keys_11, value);
	}

	inline static int32_t get_offset_of_variables_12() { return static_cast<int32_t>(offsetof(PlayerPrefsGetInt_t1303051754, ___variables_12)); }
	inline FsmIntU5BU5D_t2637547802* get_variables_12() const { return ___variables_12; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_variables_12() { return &___variables_12; }
	inline void set_variables_12(FsmIntU5BU5D_t2637547802* value)
	{
		___variables_12 = value;
		Il2CppCodeGenWriteBarrier(&___variables_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
