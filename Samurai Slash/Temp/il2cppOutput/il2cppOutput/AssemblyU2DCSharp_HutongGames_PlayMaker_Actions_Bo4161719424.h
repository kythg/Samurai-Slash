#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Bo3964440643.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.BoolOperator
struct  BoolOperator_t4161719424  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BoolOperator::bool1
	FsmBool_t664485696 * ___bool1_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BoolOperator::bool2
	FsmBool_t664485696 * ___bool2_12;
	// HutongGames.PlayMaker.Actions.BoolOperator/Operation HutongGames.PlayMaker.Actions.BoolOperator::operation
	int32_t ___operation_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BoolOperator::storeResult
	FsmBool_t664485696 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.BoolOperator::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_bool1_11() { return static_cast<int32_t>(offsetof(BoolOperator_t4161719424, ___bool1_11)); }
	inline FsmBool_t664485696 * get_bool1_11() const { return ___bool1_11; }
	inline FsmBool_t664485696 ** get_address_of_bool1_11() { return &___bool1_11; }
	inline void set_bool1_11(FsmBool_t664485696 * value)
	{
		___bool1_11 = value;
		Il2CppCodeGenWriteBarrier(&___bool1_11, value);
	}

	inline static int32_t get_offset_of_bool2_12() { return static_cast<int32_t>(offsetof(BoolOperator_t4161719424, ___bool2_12)); }
	inline FsmBool_t664485696 * get_bool2_12() const { return ___bool2_12; }
	inline FsmBool_t664485696 ** get_address_of_bool2_12() { return &___bool2_12; }
	inline void set_bool2_12(FsmBool_t664485696 * value)
	{
		___bool2_12 = value;
		Il2CppCodeGenWriteBarrier(&___bool2_12, value);
	}

	inline static int32_t get_offset_of_operation_13() { return static_cast<int32_t>(offsetof(BoolOperator_t4161719424, ___operation_13)); }
	inline int32_t get_operation_13() const { return ___operation_13; }
	inline int32_t* get_address_of_operation_13() { return &___operation_13; }
	inline void set_operation_13(int32_t value)
	{
		___operation_13 = value;
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(BoolOperator_t4161719424, ___storeResult_14)); }
	inline FsmBool_t664485696 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmBool_t664485696 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(BoolOperator_t4161719424, ___everyFrame_15)); }
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
