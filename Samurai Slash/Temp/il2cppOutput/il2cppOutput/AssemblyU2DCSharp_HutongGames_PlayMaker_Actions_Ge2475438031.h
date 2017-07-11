#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge1170867841.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetSceneRootCount
struct  GetSceneRootCount_t2475438031  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneRootCount::rootCount
	FsmInt_t1273009179 * ___rootCount_21;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSceneRootCount::everyFrame
	bool ___everyFrame_22;

public:
	inline static int32_t get_offset_of_rootCount_21() { return static_cast<int32_t>(offsetof(GetSceneRootCount_t2475438031, ___rootCount_21)); }
	inline FsmInt_t1273009179 * get_rootCount_21() const { return ___rootCount_21; }
	inline FsmInt_t1273009179 ** get_address_of_rootCount_21() { return &___rootCount_21; }
	inline void set_rootCount_21(FsmInt_t1273009179 * value)
	{
		___rootCount_21 = value;
		Il2CppCodeGenWriteBarrier(&___rootCount_21, value);
	}

	inline static int32_t get_offset_of_everyFrame_22() { return static_cast<int32_t>(offsetof(GetSceneRootCount_t2475438031, ___everyFrame_22)); }
	inline bool get_everyFrame_22() const { return ___everyFrame_22; }
	inline bool* get_address_of_everyFrame_22() { return &___everyFrame_22; }
	inline void set_everyFrame_22(bool value)
	{
		___everyFrame_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
