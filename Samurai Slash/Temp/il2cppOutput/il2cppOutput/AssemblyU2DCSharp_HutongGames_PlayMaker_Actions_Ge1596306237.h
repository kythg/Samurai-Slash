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

// HutongGames.PlayMaker.Actions.GetSceneName
struct  GetSceneName_t1596306237  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneName::name
	FsmString_t2414474701 * ___name_21;

public:
	inline static int32_t get_offset_of_name_21() { return static_cast<int32_t>(offsetof(GetSceneName_t1596306237, ___name_21)); }
	inline FsmString_t2414474701 * get_name_21() const { return ___name_21; }
	inline FsmString_t2414474701 ** get_address_of_name_21() { return &___name_21; }
	inline void set_name_21(FsmString_t2414474701 * value)
	{
		___name_21 = value;
		Il2CppCodeGenWriteBarrier(&___name_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
