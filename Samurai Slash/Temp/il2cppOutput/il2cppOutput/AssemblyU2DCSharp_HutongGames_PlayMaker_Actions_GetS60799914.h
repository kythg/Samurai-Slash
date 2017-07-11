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

// HutongGames.PlayMaker.Actions.GetSceneIsDirty
struct  GetSceneIsDirty_t60799914  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneIsDirty::isDirty
	FsmBool_t664485696 * ___isDirty_21;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetSceneIsDirty::isDirtyEvent
	FsmEvent_t1258573736 * ___isDirtyEvent_22;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetSceneIsDirty::isNotDirtyEvent
	FsmEvent_t1258573736 * ___isNotDirtyEvent_23;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSceneIsDirty::everyFrame
	bool ___everyFrame_24;

public:
	inline static int32_t get_offset_of_isDirty_21() { return static_cast<int32_t>(offsetof(GetSceneIsDirty_t60799914, ___isDirty_21)); }
	inline FsmBool_t664485696 * get_isDirty_21() const { return ___isDirty_21; }
	inline FsmBool_t664485696 ** get_address_of_isDirty_21() { return &___isDirty_21; }
	inline void set_isDirty_21(FsmBool_t664485696 * value)
	{
		___isDirty_21 = value;
		Il2CppCodeGenWriteBarrier(&___isDirty_21, value);
	}

	inline static int32_t get_offset_of_isDirtyEvent_22() { return static_cast<int32_t>(offsetof(GetSceneIsDirty_t60799914, ___isDirtyEvent_22)); }
	inline FsmEvent_t1258573736 * get_isDirtyEvent_22() const { return ___isDirtyEvent_22; }
	inline FsmEvent_t1258573736 ** get_address_of_isDirtyEvent_22() { return &___isDirtyEvent_22; }
	inline void set_isDirtyEvent_22(FsmEvent_t1258573736 * value)
	{
		___isDirtyEvent_22 = value;
		Il2CppCodeGenWriteBarrier(&___isDirtyEvent_22, value);
	}

	inline static int32_t get_offset_of_isNotDirtyEvent_23() { return static_cast<int32_t>(offsetof(GetSceneIsDirty_t60799914, ___isNotDirtyEvent_23)); }
	inline FsmEvent_t1258573736 * get_isNotDirtyEvent_23() const { return ___isNotDirtyEvent_23; }
	inline FsmEvent_t1258573736 ** get_address_of_isNotDirtyEvent_23() { return &___isNotDirtyEvent_23; }
	inline void set_isNotDirtyEvent_23(FsmEvent_t1258573736 * value)
	{
		___isNotDirtyEvent_23 = value;
		Il2CppCodeGenWriteBarrier(&___isNotDirtyEvent_23, value);
	}

	inline static int32_t get_offset_of_everyFrame_24() { return static_cast<int32_t>(offsetof(GetSceneIsDirty_t60799914, ___everyFrame_24)); }
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
