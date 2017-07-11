#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetGUIDepth
struct  SetGUIDepth_t419424178  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetGUIDepth::depth
	FsmInt_t1273009179 * ___depth_11;

public:
	inline static int32_t get_offset_of_depth_11() { return static_cast<int32_t>(offsetof(SetGUIDepth_t419424178, ___depth_11)); }
	inline FsmInt_t1273009179 * get_depth_11() const { return ___depth_11; }
	inline FsmInt_t1273009179 ** get_address_of_depth_11() { return &___depth_11; }
	inline void set_depth_11(FsmInt_t1273009179 * value)
	{
		___depth_11 = value;
		Il2CppCodeGenWriteBarrier(&___depth_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
