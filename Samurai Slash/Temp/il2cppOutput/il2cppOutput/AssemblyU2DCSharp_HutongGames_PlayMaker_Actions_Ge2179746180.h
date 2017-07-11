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

// HutongGames.PlayMaker.Actions.GetMouseY
struct  GetMouseY_t2179746180  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetMouseY::storeResult
	FsmFloat_t937133978 * ___storeResult_11;
	// System.Boolean HutongGames.PlayMaker.Actions.GetMouseY::normalize
	bool ___normalize_12;

public:
	inline static int32_t get_offset_of_storeResult_11() { return static_cast<int32_t>(offsetof(GetMouseY_t2179746180, ___storeResult_11)); }
	inline FsmFloat_t937133978 * get_storeResult_11() const { return ___storeResult_11; }
	inline FsmFloat_t937133978 ** get_address_of_storeResult_11() { return &___storeResult_11; }
	inline void set_storeResult_11(FsmFloat_t937133978 * value)
	{
		___storeResult_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_11, value);
	}

	inline static int32_t get_offset_of_normalize_12() { return static_cast<int32_t>(offsetof(GetMouseY_t2179746180, ___normalize_12)); }
	inline bool get_normalize_12() const { return ___normalize_12; }
	inline bool* get_address_of_normalize_12() { return &___normalize_12; }
	inline void set_normalize_12(bool value)
	{
		___normalize_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
