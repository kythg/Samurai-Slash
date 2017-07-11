#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector2Lerp
struct  Vector2Lerp_t2764169142  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Lerp::fromVector
	FsmVector2_t2430450063 * ___fromVector_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Lerp::toVector
	FsmVector2_t2430450063 * ___toVector_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2Lerp::amount
	FsmFloat_t937133978 * ___amount_13;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Lerp::storeResult
	FsmVector2_t2430450063 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector2Lerp::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_fromVector_11() { return static_cast<int32_t>(offsetof(Vector2Lerp_t2764169142, ___fromVector_11)); }
	inline FsmVector2_t2430450063 * get_fromVector_11() const { return ___fromVector_11; }
	inline FsmVector2_t2430450063 ** get_address_of_fromVector_11() { return &___fromVector_11; }
	inline void set_fromVector_11(FsmVector2_t2430450063 * value)
	{
		___fromVector_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromVector_11, value);
	}

	inline static int32_t get_offset_of_toVector_12() { return static_cast<int32_t>(offsetof(Vector2Lerp_t2764169142, ___toVector_12)); }
	inline FsmVector2_t2430450063 * get_toVector_12() const { return ___toVector_12; }
	inline FsmVector2_t2430450063 ** get_address_of_toVector_12() { return &___toVector_12; }
	inline void set_toVector_12(FsmVector2_t2430450063 * value)
	{
		___toVector_12 = value;
		Il2CppCodeGenWriteBarrier(&___toVector_12, value);
	}

	inline static int32_t get_offset_of_amount_13() { return static_cast<int32_t>(offsetof(Vector2Lerp_t2764169142, ___amount_13)); }
	inline FsmFloat_t937133978 * get_amount_13() const { return ___amount_13; }
	inline FsmFloat_t937133978 ** get_address_of_amount_13() { return &___amount_13; }
	inline void set_amount_13(FsmFloat_t937133978 * value)
	{
		___amount_13 = value;
		Il2CppCodeGenWriteBarrier(&___amount_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(Vector2Lerp_t2764169142, ___storeResult_14)); }
	inline FsmVector2_t2430450063 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmVector2_t2430450063 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmVector2_t2430450063 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(Vector2Lerp_t2764169142, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
