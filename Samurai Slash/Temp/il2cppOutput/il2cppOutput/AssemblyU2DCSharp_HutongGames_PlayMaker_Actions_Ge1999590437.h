#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge1170867841.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetScenePath
struct  GetScenePath_t1999590437  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetScenePath::path
	FsmString_t2414474701 * ___path_21;

public:
	inline static int32_t get_offset_of_path_21() { return static_cast<int32_t>(offsetof(GetScenePath_t1999590437, ___path_21)); }
	inline FsmString_t2414474701 * get_path_21() const { return ___path_21; }
	inline FsmString_t2414474701 ** get_address_of_path_21() { return &___path_21; }
	inline void set_path_21(FsmString_t2414474701 * value)
	{
		___path_21 = value;
		Il2CppCodeGenWriteBarrier(&___path_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
