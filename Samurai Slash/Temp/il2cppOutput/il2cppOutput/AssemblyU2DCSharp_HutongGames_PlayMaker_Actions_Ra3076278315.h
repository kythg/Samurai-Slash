#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RandomFloat
struct  RandomFloat_t3076278315  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RandomFloat::min
	FsmFloat_t937133978 * ___min_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RandomFloat::max
	FsmFloat_t937133978 * ___max_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RandomFloat::storeResult
	FsmFloat_t937133978 * ___storeResult_13;

public:
	inline static int32_t get_offset_of_min_11() { return static_cast<int32_t>(offsetof(RandomFloat_t3076278315, ___min_11)); }
	inline FsmFloat_t937133978 * get_min_11() const { return ___min_11; }
	inline FsmFloat_t937133978 ** get_address_of_min_11() { return &___min_11; }
	inline void set_min_11(FsmFloat_t937133978 * value)
	{
		___min_11 = value;
		Il2CppCodeGenWriteBarrier(&___min_11, value);
	}

	inline static int32_t get_offset_of_max_12() { return static_cast<int32_t>(offsetof(RandomFloat_t3076278315, ___max_12)); }
	inline FsmFloat_t937133978 * get_max_12() const { return ___max_12; }
	inline FsmFloat_t937133978 ** get_address_of_max_12() { return &___max_12; }
	inline void set_max_12(FsmFloat_t937133978 * value)
	{
		___max_12 = value;
		Il2CppCodeGenWriteBarrier(&___max_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(RandomFloat_t3076278315, ___storeResult_13)); }
	inline FsmFloat_t937133978 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmFloat_t937133978 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmFloat_t937133978 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
