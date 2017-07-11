#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Vec362146601.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector3Operator
struct  Vector3Operator_t3982675204  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Operator::vector1
	FsmVector3_t3996534004 * ___vector1_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Operator::vector2
	FsmVector3_t3996534004 * ___vector2_12;
	// HutongGames.PlayMaker.Actions.Vector3Operator/Vector3Operation HutongGames.PlayMaker.Actions.Vector3Operator::operation
	int32_t ___operation_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Operator::storeVector3Result
	FsmVector3_t3996534004 * ___storeVector3Result_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector3Operator::storeFloatResult
	FsmFloat_t937133978 * ___storeFloatResult_15;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector3Operator::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_vector1_11() { return static_cast<int32_t>(offsetof(Vector3Operator_t3982675204, ___vector1_11)); }
	inline FsmVector3_t3996534004 * get_vector1_11() const { return ___vector1_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector1_11() { return &___vector1_11; }
	inline void set_vector1_11(FsmVector3_t3996534004 * value)
	{
		___vector1_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector1_11, value);
	}

	inline static int32_t get_offset_of_vector2_12() { return static_cast<int32_t>(offsetof(Vector3Operator_t3982675204, ___vector2_12)); }
	inline FsmVector3_t3996534004 * get_vector2_12() const { return ___vector2_12; }
	inline FsmVector3_t3996534004 ** get_address_of_vector2_12() { return &___vector2_12; }
	inline void set_vector2_12(FsmVector3_t3996534004 * value)
	{
		___vector2_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector2_12, value);
	}

	inline static int32_t get_offset_of_operation_13() { return static_cast<int32_t>(offsetof(Vector3Operator_t3982675204, ___operation_13)); }
	inline int32_t get_operation_13() const { return ___operation_13; }
	inline int32_t* get_address_of_operation_13() { return &___operation_13; }
	inline void set_operation_13(int32_t value)
	{
		___operation_13 = value;
	}

	inline static int32_t get_offset_of_storeVector3Result_14() { return static_cast<int32_t>(offsetof(Vector3Operator_t3982675204, ___storeVector3Result_14)); }
	inline FsmVector3_t3996534004 * get_storeVector3Result_14() const { return ___storeVector3Result_14; }
	inline FsmVector3_t3996534004 ** get_address_of_storeVector3Result_14() { return &___storeVector3Result_14; }
	inline void set_storeVector3Result_14(FsmVector3_t3996534004 * value)
	{
		___storeVector3Result_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeVector3Result_14, value);
	}

	inline static int32_t get_offset_of_storeFloatResult_15() { return static_cast<int32_t>(offsetof(Vector3Operator_t3982675204, ___storeFloatResult_15)); }
	inline FsmFloat_t937133978 * get_storeFloatResult_15() const { return ___storeFloatResult_15; }
	inline FsmFloat_t937133978 ** get_address_of_storeFloatResult_15() { return &___storeFloatResult_15; }
	inline void set_storeFloatResult_15(FsmFloat_t937133978 * value)
	{
		___storeFloatResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeFloatResult_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(Vector3Operator_t3982675204, ___everyFrame_16)); }
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
