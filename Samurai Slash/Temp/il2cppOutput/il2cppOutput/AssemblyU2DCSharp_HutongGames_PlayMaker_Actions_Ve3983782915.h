#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ve1953184041.h"

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector2Operator
struct  Vector2Operator_t3983782915  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Operator::vector1
	FsmVector2_t2430450063 * ___vector1_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Operator::vector2
	FsmVector2_t2430450063 * ___vector2_12;
	// HutongGames.PlayMaker.Actions.Vector2Operator/Vector2Operation HutongGames.PlayMaker.Actions.Vector2Operator::operation
	int32_t ___operation_13;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Operator::storeVector2Result
	FsmVector2_t2430450063 * ___storeVector2Result_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2Operator::storeFloatResult
	FsmFloat_t937133978 * ___storeFloatResult_15;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector2Operator::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_vector1_11() { return static_cast<int32_t>(offsetof(Vector2Operator_t3983782915, ___vector1_11)); }
	inline FsmVector2_t2430450063 * get_vector1_11() const { return ___vector1_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector1_11() { return &___vector1_11; }
	inline void set_vector1_11(FsmVector2_t2430450063 * value)
	{
		___vector1_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector1_11, value);
	}

	inline static int32_t get_offset_of_vector2_12() { return static_cast<int32_t>(offsetof(Vector2Operator_t3983782915, ___vector2_12)); }
	inline FsmVector2_t2430450063 * get_vector2_12() const { return ___vector2_12; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2_12() { return &___vector2_12; }
	inline void set_vector2_12(FsmVector2_t2430450063 * value)
	{
		___vector2_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector2_12, value);
	}

	inline static int32_t get_offset_of_operation_13() { return static_cast<int32_t>(offsetof(Vector2Operator_t3983782915, ___operation_13)); }
	inline int32_t get_operation_13() const { return ___operation_13; }
	inline int32_t* get_address_of_operation_13() { return &___operation_13; }
	inline void set_operation_13(int32_t value)
	{
		___operation_13 = value;
	}

	inline static int32_t get_offset_of_storeVector2Result_14() { return static_cast<int32_t>(offsetof(Vector2Operator_t3983782915, ___storeVector2Result_14)); }
	inline FsmVector2_t2430450063 * get_storeVector2Result_14() const { return ___storeVector2Result_14; }
	inline FsmVector2_t2430450063 ** get_address_of_storeVector2Result_14() { return &___storeVector2Result_14; }
	inline void set_storeVector2Result_14(FsmVector2_t2430450063 * value)
	{
		___storeVector2Result_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeVector2Result_14, value);
	}

	inline static int32_t get_offset_of_storeFloatResult_15() { return static_cast<int32_t>(offsetof(Vector2Operator_t3983782915, ___storeFloatResult_15)); }
	inline FsmFloat_t937133978 * get_storeFloatResult_15() const { return ___storeFloatResult_15; }
	inline FsmFloat_t937133978 ** get_address_of_storeFloatResult_15() { return &___storeFloatResult_15; }
	inline void set_storeFloatResult_15(FsmFloat_t937133978 * value)
	{
		___storeFloatResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeFloatResult_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(Vector2Operator_t3983782915, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
