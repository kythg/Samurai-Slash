#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;
// HutongGames.PlayMaker.FsmState
struct FsmState_t1643911659;
// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t2862378169;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.ActionData/Context
struct  Context_t2765413152  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.ActionData/Context::currentFsm
	Fsm_t917886356 * ___currentFsm_0;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.ActionData/Context::currentState
	FsmState_t1643911659 * ___currentState_1;
	// HutongGames.PlayMaker.FsmStateAction HutongGames.PlayMaker.ActionData/Context::currentAction
	FsmStateAction_t2862378169 * ___currentAction_2;
	// System.Int32 HutongGames.PlayMaker.ActionData/Context::currentActionIndex
	int32_t ___currentActionIndex_3;
	// System.String HutongGames.PlayMaker.ActionData/Context::currentParameter
	String_t* ___currentParameter_4;

public:
	inline static int32_t get_offset_of_currentFsm_0() { return static_cast<int32_t>(offsetof(Context_t2765413152, ___currentFsm_0)); }
	inline Fsm_t917886356 * get_currentFsm_0() const { return ___currentFsm_0; }
	inline Fsm_t917886356 ** get_address_of_currentFsm_0() { return &___currentFsm_0; }
	inline void set_currentFsm_0(Fsm_t917886356 * value)
	{
		___currentFsm_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentFsm_0, value);
	}

	inline static int32_t get_offset_of_currentState_1() { return static_cast<int32_t>(offsetof(Context_t2765413152, ___currentState_1)); }
	inline FsmState_t1643911659 * get_currentState_1() const { return ___currentState_1; }
	inline FsmState_t1643911659 ** get_address_of_currentState_1() { return &___currentState_1; }
	inline void set_currentState_1(FsmState_t1643911659 * value)
	{
		___currentState_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentState_1, value);
	}

	inline static int32_t get_offset_of_currentAction_2() { return static_cast<int32_t>(offsetof(Context_t2765413152, ___currentAction_2)); }
	inline FsmStateAction_t2862378169 * get_currentAction_2() const { return ___currentAction_2; }
	inline FsmStateAction_t2862378169 ** get_address_of_currentAction_2() { return &___currentAction_2; }
	inline void set_currentAction_2(FsmStateAction_t2862378169 * value)
	{
		___currentAction_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentAction_2, value);
	}

	inline static int32_t get_offset_of_currentActionIndex_3() { return static_cast<int32_t>(offsetof(Context_t2765413152, ___currentActionIndex_3)); }
	inline int32_t get_currentActionIndex_3() const { return ___currentActionIndex_3; }
	inline int32_t* get_address_of_currentActionIndex_3() { return &___currentActionIndex_3; }
	inline void set_currentActionIndex_3(int32_t value)
	{
		___currentActionIndex_3 = value;
	}

	inline static int32_t get_offset_of_currentParameter_4() { return static_cast<int32_t>(offsetof(Context_t2765413152, ___currentParameter_4)); }
	inline String_t* get_currentParameter_4() const { return ___currentParameter_4; }
	inline String_t** get_address_of_currentParameter_4() { return &___currentParameter_4; }
	inline void set_currentParameter_4(String_t* value)
	{
		___currentParameter_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentParameter_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
