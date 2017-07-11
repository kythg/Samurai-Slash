#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Int516780872.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.IntOperator
struct  IntOperator_t2671836529  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntOperator::integer1
	FsmInt_t1273009179 * ___integer1_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntOperator::integer2
	FsmInt_t1273009179 * ___integer2_12;
	// HutongGames.PlayMaker.Actions.IntOperator/Operation HutongGames.PlayMaker.Actions.IntOperator::operation
	int32_t ___operation_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntOperator::storeResult
	FsmInt_t1273009179 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.IntOperator::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_integer1_11() { return static_cast<int32_t>(offsetof(IntOperator_t2671836529, ___integer1_11)); }
	inline FsmInt_t1273009179 * get_integer1_11() const { return ___integer1_11; }
	inline FsmInt_t1273009179 ** get_address_of_integer1_11() { return &___integer1_11; }
	inline void set_integer1_11(FsmInt_t1273009179 * value)
	{
		___integer1_11 = value;
		Il2CppCodeGenWriteBarrier(&___integer1_11, value);
	}

	inline static int32_t get_offset_of_integer2_12() { return static_cast<int32_t>(offsetof(IntOperator_t2671836529, ___integer2_12)); }
	inline FsmInt_t1273009179 * get_integer2_12() const { return ___integer2_12; }
	inline FsmInt_t1273009179 ** get_address_of_integer2_12() { return &___integer2_12; }
	inline void set_integer2_12(FsmInt_t1273009179 * value)
	{
		___integer2_12 = value;
		Il2CppCodeGenWriteBarrier(&___integer2_12, value);
	}

	inline static int32_t get_offset_of_operation_13() { return static_cast<int32_t>(offsetof(IntOperator_t2671836529, ___operation_13)); }
	inline int32_t get_operation_13() const { return ___operation_13; }
	inline int32_t* get_address_of_operation_13() { return &___operation_13; }
	inline void set_operation_13(int32_t value)
	{
		___operation_13 = value;
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(IntOperator_t2671836529, ___storeResult_14)); }
	inline FsmInt_t1273009179 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmInt_t1273009179 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmInt_t1273009179 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(IntOperator_t2671836529, ___everyFrame_15)); }
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
