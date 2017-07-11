#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Fl1664079833.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FloatOperator
struct  FloatOperator_t3036552246  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatOperator::float1
	FsmFloat_t937133978 * ___float1_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatOperator::float2
	FsmFloat_t937133978 * ___float2_12;
	// HutongGames.PlayMaker.Actions.FloatOperator/Operation HutongGames.PlayMaker.Actions.FloatOperator::operation
	int32_t ___operation_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatOperator::storeResult
	FsmFloat_t937133978 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatOperator::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_float1_11() { return static_cast<int32_t>(offsetof(FloatOperator_t3036552246, ___float1_11)); }
	inline FsmFloat_t937133978 * get_float1_11() const { return ___float1_11; }
	inline FsmFloat_t937133978 ** get_address_of_float1_11() { return &___float1_11; }
	inline void set_float1_11(FsmFloat_t937133978 * value)
	{
		___float1_11 = value;
		Il2CppCodeGenWriteBarrier(&___float1_11, value);
	}

	inline static int32_t get_offset_of_float2_12() { return static_cast<int32_t>(offsetof(FloatOperator_t3036552246, ___float2_12)); }
	inline FsmFloat_t937133978 * get_float2_12() const { return ___float2_12; }
	inline FsmFloat_t937133978 ** get_address_of_float2_12() { return &___float2_12; }
	inline void set_float2_12(FsmFloat_t937133978 * value)
	{
		___float2_12 = value;
		Il2CppCodeGenWriteBarrier(&___float2_12, value);
	}

	inline static int32_t get_offset_of_operation_13() { return static_cast<int32_t>(offsetof(FloatOperator_t3036552246, ___operation_13)); }
	inline int32_t get_operation_13() const { return ___operation_13; }
	inline int32_t* get_address_of_operation_13() { return &___operation_13; }
	inline void set_operation_13(int32_t value)
	{
		___operation_13 = value;
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(FloatOperator_t3036552246, ___storeResult_14)); }
	inline FsmFloat_t937133978 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmFloat_t937133978 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmFloat_t937133978 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(FloatOperator_t3036552246, ___everyFrame_15)); }
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
