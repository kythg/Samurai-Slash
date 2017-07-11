#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SendSceneUnloadedEvent
struct  SendSceneUnloadedEvent_t2523336820  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SendSceneUnloadedEvent::sceneUnloaded
	FsmEvent_t1258573736 * ___sceneUnloaded_11;

public:
	inline static int32_t get_offset_of_sceneUnloaded_11() { return static_cast<int32_t>(offsetof(SendSceneUnloadedEvent_t2523336820, ___sceneUnloaded_11)); }
	inline FsmEvent_t1258573736 * get_sceneUnloaded_11() const { return ___sceneUnloaded_11; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneUnloaded_11() { return &___sceneUnloaded_11; }
	inline void set_sceneUnloaded_11(FsmEvent_t1258573736 * value)
	{
		___sceneUnloaded_11 = value;
		Il2CppCodeGenWriteBarrier(&___sceneUnloaded_11, value);
	}
};

struct SendSceneUnloadedEvent_t2523336820_StaticFields
{
public:
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.SendSceneUnloadedEvent::lastUnLoadedScene
	Scene_t1684909666  ___lastUnLoadedScene_12;

public:
	inline static int32_t get_offset_of_lastUnLoadedScene_12() { return static_cast<int32_t>(offsetof(SendSceneUnloadedEvent_t2523336820_StaticFields, ___lastUnLoadedScene_12)); }
	inline Scene_t1684909666  get_lastUnLoadedScene_12() const { return ___lastUnLoadedScene_12; }
	inline Scene_t1684909666 * get_address_of_lastUnLoadedScene_12() { return &___lastUnLoadedScene_12; }
	inline void set_lastUnLoadedScene_12(Scene_t1684909666  value)
	{
		___lastUnLoadedScene_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
