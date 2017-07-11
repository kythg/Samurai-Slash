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

// HutongGames.PlayMaker.Actions.GetVector2XY
struct  GetVector2XY_t1745788062  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetVector2XY::vector2Variable
	FsmVector2_t2430450063 * ___vector2Variable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetVector2XY::storeX
	FsmFloat_t937133978 * ___storeX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetVector2XY::storeY
	FsmFloat_t937133978 * ___storeY_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetVector2XY::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_vector2Variable_11() { return static_cast<int32_t>(offsetof(GetVector2XY_t1745788062, ___vector2Variable_11)); }
	inline FsmVector2_t2430450063 * get_vector2Variable_11() const { return ___vector2Variable_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable_11() { return &___vector2Variable_11; }
	inline void set_vector2Variable_11(FsmVector2_t2430450063 * value)
	{
		___vector2Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable_11, value);
	}

	inline static int32_t get_offset_of_storeX_12() { return static_cast<int32_t>(offsetof(GetVector2XY_t1745788062, ___storeX_12)); }
	inline FsmFloat_t937133978 * get_storeX_12() const { return ___storeX_12; }
	inline FsmFloat_t937133978 ** get_address_of_storeX_12() { return &___storeX_12; }
	inline void set_storeX_12(FsmFloat_t937133978 * value)
	{
		___storeX_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeX_12, value);
	}

	inline static int32_t get_offset_of_storeY_13() { return static_cast<int32_t>(offsetof(GetVector2XY_t1745788062, ___storeY_13)); }
	inline FsmFloat_t937133978 * get_storeY_13() const { return ___storeY_13; }
	inline FsmFloat_t937133978 ** get_address_of_storeY_13() { return &___storeY_13; }
	inline void set_storeY_13(FsmFloat_t937133978 * value)
	{
		___storeY_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeY_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GetVector2XY_t1745788062, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
