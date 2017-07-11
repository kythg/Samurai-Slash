#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FsmTemplate
struct FsmTemplate_t1285897084;
// HutongGames.PlayMaker.FsmVarOverride[]
struct FsmVarOverrideU5BU5D_t4083454968;
// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmTemplateControl
struct  FsmTemplateControl_t924276959  : public Il2CppObject
{
public:
	// FsmTemplate HutongGames.PlayMaker.FsmTemplateControl::fsmTemplate
	FsmTemplate_t1285897084 * ___fsmTemplate_0;
	// HutongGames.PlayMaker.FsmVarOverride[] HutongGames.PlayMaker.FsmTemplateControl::fsmVarOverrides
	FsmVarOverrideU5BU5D_t4083454968* ___fsmVarOverrides_1;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmTemplateControl::runFsm
	Fsm_t917886356 * ___runFsm_2;
	// System.Int32 HutongGames.PlayMaker.FsmTemplateControl::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_fsmTemplate_0() { return static_cast<int32_t>(offsetof(FsmTemplateControl_t924276959, ___fsmTemplate_0)); }
	inline FsmTemplate_t1285897084 * get_fsmTemplate_0() const { return ___fsmTemplate_0; }
	inline FsmTemplate_t1285897084 ** get_address_of_fsmTemplate_0() { return &___fsmTemplate_0; }
	inline void set_fsmTemplate_0(FsmTemplate_t1285897084 * value)
	{
		___fsmTemplate_0 = value;
		Il2CppCodeGenWriteBarrier(&___fsmTemplate_0, value);
	}

	inline static int32_t get_offset_of_fsmVarOverrides_1() { return static_cast<int32_t>(offsetof(FsmTemplateControl_t924276959, ___fsmVarOverrides_1)); }
	inline FsmVarOverrideU5BU5D_t4083454968* get_fsmVarOverrides_1() const { return ___fsmVarOverrides_1; }
	inline FsmVarOverrideU5BU5D_t4083454968** get_address_of_fsmVarOverrides_1() { return &___fsmVarOverrides_1; }
	inline void set_fsmVarOverrides_1(FsmVarOverrideU5BU5D_t4083454968* value)
	{
		___fsmVarOverrides_1 = value;
		Il2CppCodeGenWriteBarrier(&___fsmVarOverrides_1, value);
	}

	inline static int32_t get_offset_of_runFsm_2() { return static_cast<int32_t>(offsetof(FsmTemplateControl_t924276959, ___runFsm_2)); }
	inline Fsm_t917886356 * get_runFsm_2() const { return ___runFsm_2; }
	inline Fsm_t917886356 ** get_address_of_runFsm_2() { return &___runFsm_2; }
	inline void set_runFsm_2(Fsm_t917886356 * value)
	{
		___runFsm_2 = value;
		Il2CppCodeGenWriteBarrier(&___runFsm_2, value);
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FsmTemplateControl_t924276959, ___U3CIDU3Ek__BackingField_3)); }
	inline int32_t get_U3CIDU3Ek__BackingField_3() const { return ___U3CIDU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_3() { return &___U3CIDU3Ek__BackingField_3; }
	inline void set_U3CIDU3Ek__BackingField_3(int32_t value)
	{
		___U3CIDU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
