#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Run720811133.h"

// HutongGames.PlayMaker.FsmTemplateControl
struct FsmTemplateControl_t924276959;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RunFSM
struct  RunFSM_t3880618399  : public RunFSMAction_t720811133
{
public:
	// HutongGames.PlayMaker.FsmTemplateControl HutongGames.PlayMaker.Actions.RunFSM::fsmTemplateControl
	FsmTemplateControl_t924276959 * ___fsmTemplateControl_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.RunFSM::storeID
	FsmInt_t1273009179 * ___storeID_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.RunFSM::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_14;

public:
	inline static int32_t get_offset_of_fsmTemplateControl_12() { return static_cast<int32_t>(offsetof(RunFSM_t3880618399, ___fsmTemplateControl_12)); }
	inline FsmTemplateControl_t924276959 * get_fsmTemplateControl_12() const { return ___fsmTemplateControl_12; }
	inline FsmTemplateControl_t924276959 ** get_address_of_fsmTemplateControl_12() { return &___fsmTemplateControl_12; }
	inline void set_fsmTemplateControl_12(FsmTemplateControl_t924276959 * value)
	{
		___fsmTemplateControl_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmTemplateControl_12, value);
	}

	inline static int32_t get_offset_of_storeID_13() { return static_cast<int32_t>(offsetof(RunFSM_t3880618399, ___storeID_13)); }
	inline FsmInt_t1273009179 * get_storeID_13() const { return ___storeID_13; }
	inline FsmInt_t1273009179 ** get_address_of_storeID_13() { return &___storeID_13; }
	inline void set_storeID_13(FsmInt_t1273009179 * value)
	{
		___storeID_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeID_13, value);
	}

	inline static int32_t get_offset_of_finishEvent_14() { return static_cast<int32_t>(offsetof(RunFSM_t3880618399, ___finishEvent_14)); }
	inline FsmEvent_t1258573736 * get_finishEvent_14() const { return ___finishEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_14() { return &___finishEvent_14; }
	inline void set_finishEvent_14(FsmEvent_t1258573736 * value)
	{
		___finishEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
