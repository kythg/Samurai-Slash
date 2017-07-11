#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge1170867841.h"

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetSceneRootGameObjects
struct  GetSceneRootGameObjects_t2601426084  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.GetSceneRootGameObjects::rootGameObjects
	FsmArray_t527459893 * ___rootGameObjects_21;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSceneRootGameObjects::everyFrame
	bool ___everyFrame_22;

public:
	inline static int32_t get_offset_of_rootGameObjects_21() { return static_cast<int32_t>(offsetof(GetSceneRootGameObjects_t2601426084, ___rootGameObjects_21)); }
	inline FsmArray_t527459893 * get_rootGameObjects_21() const { return ___rootGameObjects_21; }
	inline FsmArray_t527459893 ** get_address_of_rootGameObjects_21() { return &___rootGameObjects_21; }
	inline void set_rootGameObjects_21(FsmArray_t527459893 * value)
	{
		___rootGameObjects_21 = value;
		Il2CppCodeGenWriteBarrier(&___rootGameObjects_21, value);
	}

	inline static int32_t get_offset_of_everyFrame_22() { return static_cast<int32_t>(offsetof(GetSceneRootGameObjects_t2601426084, ___everyFrame_22)); }
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
