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
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SendSceneLoadedEvent
struct  SendSceneLoadedEvent_t4158827811  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SendSceneLoadedEvent::sceneLoaded
	FsmEvent_t1258573736 * ___sceneLoaded_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SendSceneLoadedEvent::sceneLoadedSafe
	FsmEvent_t1258573736 * ___sceneLoadedSafe_12;
	// System.Int32 HutongGames.PlayMaker.Actions.SendSceneLoadedEvent::_loaded
	int32_t ____loaded_15;

public:
	inline static int32_t get_offset_of_sceneLoaded_11() { return static_cast<int32_t>(offsetof(SendSceneLoadedEvent_t4158827811, ___sceneLoaded_11)); }
	inline FsmEvent_t1258573736 * get_sceneLoaded_11() const { return ___sceneLoaded_11; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneLoaded_11() { return &___sceneLoaded_11; }
	inline void set_sceneLoaded_11(FsmEvent_t1258573736 * value)
	{
		___sceneLoaded_11 = value;
		Il2CppCodeGenWriteBarrier(&___sceneLoaded_11, value);
	}

	inline static int32_t get_offset_of_sceneLoadedSafe_12() { return static_cast<int32_t>(offsetof(SendSceneLoadedEvent_t4158827811, ___sceneLoadedSafe_12)); }
	inline FsmEvent_t1258573736 * get_sceneLoadedSafe_12() const { return ___sceneLoadedSafe_12; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneLoadedSafe_12() { return &___sceneLoadedSafe_12; }
	inline void set_sceneLoadedSafe_12(FsmEvent_t1258573736 * value)
	{
		___sceneLoadedSafe_12 = value;
		Il2CppCodeGenWriteBarrier(&___sceneLoadedSafe_12, value);
	}

	inline static int32_t get_offset_of__loaded_15() { return static_cast<int32_t>(offsetof(SendSceneLoadedEvent_t4158827811, ____loaded_15)); }
	inline int32_t get__loaded_15() const { return ____loaded_15; }
	inline int32_t* get_address_of__loaded_15() { return &____loaded_15; }
	inline void set__loaded_15(int32_t value)
	{
		____loaded_15 = value;
	}
};

struct SendSceneLoadedEvent_t4158827811_StaticFields
{
public:
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.SendSceneLoadedEvent::lastLoadedScene
	Scene_t1684909666  ___lastLoadedScene_13;
	// UnityEngine.SceneManagement.LoadSceneMode HutongGames.PlayMaker.Actions.SendSceneLoadedEvent::lastLoadedMode
	int32_t ___lastLoadedMode_14;

public:
	inline static int32_t get_offset_of_lastLoadedScene_13() { return static_cast<int32_t>(offsetof(SendSceneLoadedEvent_t4158827811_StaticFields, ___lastLoadedScene_13)); }
	inline Scene_t1684909666  get_lastLoadedScene_13() const { return ___lastLoadedScene_13; }
	inline Scene_t1684909666 * get_address_of_lastLoadedScene_13() { return &___lastLoadedScene_13; }
	inline void set_lastLoadedScene_13(Scene_t1684909666  value)
	{
		___lastLoadedScene_13 = value;
	}

	inline static int32_t get_offset_of_lastLoadedMode_14() { return static_cast<int32_t>(offsetof(SendSceneLoadedEvent_t4158827811_StaticFields, ___lastLoadedMode_14)); }
	inline int32_t get_lastLoadedMode_14() const { return ___lastLoadedMode_14; }
	inline int32_t* get_address_of_lastLoadedMode_14() { return &___lastLoadedMode_14; }
	inline void set_lastLoadedMode_14(int32_t value)
	{
		___lastLoadedMode_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
