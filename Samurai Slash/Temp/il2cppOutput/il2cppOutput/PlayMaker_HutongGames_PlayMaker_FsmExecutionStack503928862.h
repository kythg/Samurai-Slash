#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Stack`1<HutongGames.PlayMaker.Fsm>
struct Stack_1_t2005614510;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmExecutionStack
struct  FsmExecutionStack_t503928862  : public Il2CppObject
{
public:

public:
};

struct FsmExecutionStack_t503928862_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<HutongGames.PlayMaker.Fsm> HutongGames.PlayMaker.FsmExecutionStack::fsmExecutionStack
	Stack_1_t2005614510 * ___fsmExecutionStack_0;
	// System.Int32 HutongGames.PlayMaker.FsmExecutionStack::<MaxStackCount>k__BackingField
	int32_t ___U3CMaxStackCountU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_fsmExecutionStack_0() { return static_cast<int32_t>(offsetof(FsmExecutionStack_t503928862_StaticFields, ___fsmExecutionStack_0)); }
	inline Stack_1_t2005614510 * get_fsmExecutionStack_0() const { return ___fsmExecutionStack_0; }
	inline Stack_1_t2005614510 ** get_address_of_fsmExecutionStack_0() { return &___fsmExecutionStack_0; }
	inline void set_fsmExecutionStack_0(Stack_1_t2005614510 * value)
	{
		___fsmExecutionStack_0 = value;
		Il2CppCodeGenWriteBarrier(&___fsmExecutionStack_0, value);
	}

	inline static int32_t get_offset_of_U3CMaxStackCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FsmExecutionStack_t503928862_StaticFields, ___U3CMaxStackCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CMaxStackCountU3Ek__BackingField_1() const { return ___U3CMaxStackCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CMaxStackCountU3Ek__BackingField_1() { return &___U3CMaxStackCountU3Ek__BackingField_1; }
	inline void set_U3CMaxStackCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CMaxStackCountU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
