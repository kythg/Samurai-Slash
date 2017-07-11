#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DestroyObjects
struct  DestroyObjects_t124702046  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.DestroyObjects::gameObjects
	FsmArray_t527459893 * ___gameObjects_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DestroyObjects::delay
	FsmFloat_t937133978 * ___delay_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.DestroyObjects::detachChildren
	FsmBool_t664485696 * ___detachChildren_13;

public:
	inline static int32_t get_offset_of_gameObjects_11() { return static_cast<int32_t>(offsetof(DestroyObjects_t124702046, ___gameObjects_11)); }
	inline FsmArray_t527459893 * get_gameObjects_11() const { return ___gameObjects_11; }
	inline FsmArray_t527459893 ** get_address_of_gameObjects_11() { return &___gameObjects_11; }
	inline void set_gameObjects_11(FsmArray_t527459893 * value)
	{
		___gameObjects_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjects_11, value);
	}

	inline static int32_t get_offset_of_delay_12() { return static_cast<int32_t>(offsetof(DestroyObjects_t124702046, ___delay_12)); }
	inline FsmFloat_t937133978 * get_delay_12() const { return ___delay_12; }
	inline FsmFloat_t937133978 ** get_address_of_delay_12() { return &___delay_12; }
	inline void set_delay_12(FsmFloat_t937133978 * value)
	{
		___delay_12 = value;
		Il2CppCodeGenWriteBarrier(&___delay_12, value);
	}

	inline static int32_t get_offset_of_detachChildren_13() { return static_cast<int32_t>(offsetof(DestroyObjects_t124702046, ___detachChildren_13)); }
	inline FsmBool_t664485696 * get_detachChildren_13() const { return ___detachChildren_13; }
	inline FsmBool_t664485696 ** get_address_of_detachChildren_13() { return &___detachChildren_13; }
	inline void set_detachChildren_13(FsmBool_t664485696 * value)
	{
		___detachChildren_13 = value;
		Il2CppCodeGenWriteBarrier(&___detachChildren_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
