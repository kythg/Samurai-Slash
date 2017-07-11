#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetJointBreakInfo
struct  GetJointBreakInfo_t2418545631  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetJointBreakInfo::breakForce
	FsmFloat_t937133978 * ___breakForce_11;

public:
	inline static int32_t get_offset_of_breakForce_11() { return static_cast<int32_t>(offsetof(GetJointBreakInfo_t2418545631, ___breakForce_11)); }
	inline FsmFloat_t937133978 * get_breakForce_11() const { return ___breakForce_11; }
	inline FsmFloat_t937133978 ** get_address_of_breakForce_11() { return &___breakForce_11; }
	inline void set_breakForce_11(FsmFloat_t937133978 * value)
	{
		___breakForce_11 = value;
		Il2CppCodeGenWriteBarrier(&___breakForce_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
