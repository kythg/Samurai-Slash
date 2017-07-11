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

// HutongGames.PlayMaker.Actions.GetSceneIsLoaded
struct  GetSceneIsLoaded_t3188056371  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneIsLoaded::isLoaded
	FsmBool_t664485696 * ___isLoaded_21;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetSceneIsLoaded::isLoadedEvent
	FsmEvent_t1258573736 * ___isLoadedEvent_22;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetSceneIsLoaded::isNotLoadedEvent
	FsmEvent_t1258573736 * ___isNotLoadedEvent_23;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSceneIsLoaded::everyFrame
	bool ___everyFrame_24;

public:
	inline static int32_t get_offset_of_isLoaded_21() { return static_cast<int32_t>(offsetof(GetSceneIsLoaded_t3188056371, ___isLoaded_21)); }
	inline FsmBool_t664485696 * get_isLoaded_21() const { return ___isLoaded_21; }
	inline FsmBool_t664485696 ** get_address_of_isLoaded_21() { return &___isLoaded_21; }
	inline void set_isLoaded_21(FsmBool_t664485696 * value)
	{
		___isLoaded_21 = value;
		Il2CppCodeGenWriteBarrier(&___isLoaded_21, value);
	}

	inline static int32_t get_offset_of_isLoadedEvent_22() { return static_cast<int32_t>(offsetof(GetSceneIsLoaded_t3188056371, ___isLoadedEvent_22)); }
	inline FsmEvent_t1258573736 * get_isLoadedEvent_22() const { return ___isLoadedEvent_22; }
	inline FsmEvent_t1258573736 ** get_address_of_isLoadedEvent_22() { return &___isLoadedEvent_22; }
	inline void set_isLoadedEvent_22(FsmEvent_t1258573736 * value)
	{
		___isLoadedEvent_22 = value;
		Il2CppCodeGenWriteBarrier(&___isLoadedEvent_22, value);
	}

	inline static int32_t get_offset_of_isNotLoadedEvent_23() { return static_cast<int32_t>(offsetof(GetSceneIsLoaded_t3188056371, ___isNotLoadedEvent_23)); }
	inline FsmEvent_t1258573736 * get_isNotLoadedEvent_23() const { return ___isNotLoadedEvent_23; }
	inline FsmEvent_t1258573736 ** get_address_of_isNotLoadedEvent_23() { return &___isNotLoadedEvent_23; }
	inline void set_isNotLoadedEvent_23(FsmEvent_t1258573736 * value)
	{
		___isNotLoadedEvent_23 = value;
		Il2CppCodeGenWriteBarrier(&___isNotLoadedEvent_23, value);
	}

	inline static int32_t get_offset_of_everyFrame_24() { return static_cast<int32_t>(offsetof(GetSceneIsLoaded_t3188056371, ___everyFrame_24)); }
	inline bool get_everyFrame_24() const { return ___everyFrame_24; }
	inline bool* get_address_of_everyFrame_24() { return &___everyFrame_24; }
	inline void set_everyFrame_24(bool value)
	{
		___everyFrame_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
