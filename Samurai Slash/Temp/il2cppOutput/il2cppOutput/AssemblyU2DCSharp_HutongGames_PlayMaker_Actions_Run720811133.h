#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RunFSMAction
struct  RunFSMAction_t720811133  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Actions.RunFSMAction::runFsm
	Fsm_t917886356 * ___runFsm_11;

public:
	inline static int32_t get_offset_of_runFsm_11() { return static_cast<int32_t>(offsetof(RunFSMAction_t720811133, ___runFsm_11)); }
	inline Fsm_t917886356 * get_runFsm_11() const { return ___runFsm_11; }
	inline Fsm_t917886356 ** get_address_of_runFsm_11() { return &___runFsm_11; }
	inline void set_runFsm_11(Fsm_t917886356 * value)
	{
		___runFsm_11 = value;
		Il2CppCodeGenWriteBarrier(&___runFsm_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
