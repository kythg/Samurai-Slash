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

// HutongGames.PlayMaker.Actions.GetSceneBuildIndex
struct  GetSceneBuildIndex_t2391822238  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneBuildIndex::buildIndex
	FsmInt_t1273009179 * ___buildIndex_21;

public:
	inline static int32_t get_offset_of_buildIndex_21() { return static_cast<int32_t>(offsetof(GetSceneBuildIndex_t2391822238, ___buildIndex_21)); }
	inline FsmInt_t1273009179 * get_buildIndex_21() const { return ___buildIndex_21; }
	inline FsmInt_t1273009179 ** get_address_of_buildIndex_21() { return &___buildIndex_21; }
	inline void set_buildIndex_21(FsmInt_t1273009179 * value)
	{
		___buildIndex_21 = value;
		Il2CppCodeGenWriteBarrier(&___buildIndex_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
