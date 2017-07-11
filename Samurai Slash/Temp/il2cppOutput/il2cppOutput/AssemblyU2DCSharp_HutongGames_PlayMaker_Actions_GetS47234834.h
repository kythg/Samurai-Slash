#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge1170867841.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetSceneIsValid
struct  GetSceneIsValid_t47234834  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneIsValid::isValid
	FsmBool_t664485696 * ___isValid_21;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetSceneIsValid::isValidEvent
	FsmEvent_t1258573736 * ___isValidEvent_22;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetSceneIsValid::isNotValidEvent
	FsmEvent_t1258573736 * ___isNotValidEvent_23;

public:
	inline static int32_t get_offset_of_isValid_21() { return static_cast<int32_t>(offsetof(GetSceneIsValid_t47234834, ___isValid_21)); }
	inline FsmBool_t664485696 * get_isValid_21() const { return ___isValid_21; }
	inline FsmBool_t664485696 ** get_address_of_isValid_21() { return &___isValid_21; }
	inline void set_isValid_21(FsmBool_t664485696 * value)
	{
		___isValid_21 = value;
		Il2CppCodeGenWriteBarrier(&___isValid_21, value);
	}

	inline static int32_t get_offset_of_isValidEvent_22() { return static_cast<int32_t>(offsetof(GetSceneIsValid_t47234834, ___isValidEvent_22)); }
	inline FsmEvent_t1258573736 * get_isValidEvent_22() const { return ___isValidEvent_22; }
	inline FsmEvent_t1258573736 ** get_address_of_isValidEvent_22() { return &___isValidEvent_22; }
	inline void set_isValidEvent_22(FsmEvent_t1258573736 * value)
	{
		___isValidEvent_22 = value;
		Il2CppCodeGenWriteBarrier(&___isValidEvent_22, value);
	}

	inline static int32_t get_offset_of_isNotValidEvent_23() { return static_cast<int32_t>(offsetof(GetSceneIsValid_t47234834, ___isNotValidEvent_23)); }
	inline FsmEvent_t1258573736 * get_isNotValidEvent_23() const { return ___isNotValidEvent_23; }
	inline FsmEvent_t1258573736 ** get_address_of_isNotValidEvent_23() { return &___isNotValidEvent_23; }
	inline void set_isNotValidEvent_23(FsmEvent_t1258573736 * value)
	{
		___isNotValidEvent_23 = value;
		Il2CppCodeGenWriteBarrier(&___isNotValidEvent_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
