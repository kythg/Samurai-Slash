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

// HutongGames.PlayMaker.Actions.SendActiveSceneChangedEvent
struct  SendActiveSceneChangedEvent_t3095845534  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SendActiveSceneChangedEvent::activeSceneChanged
	FsmEvent_t1258573736 * ___activeSceneChanged_11;

public:
	inline static int32_t get_offset_of_activeSceneChanged_11() { return static_cast<int32_t>(offsetof(SendActiveSceneChangedEvent_t3095845534, ___activeSceneChanged_11)); }
	inline FsmEvent_t1258573736 * get_activeSceneChanged_11() const { return ___activeSceneChanged_11; }
	inline FsmEvent_t1258573736 ** get_address_of_activeSceneChanged_11() { return &___activeSceneChanged_11; }
	inline void set_activeSceneChanged_11(FsmEvent_t1258573736 * value)
	{
		___activeSceneChanged_11 = value;
		Il2CppCodeGenWriteBarrier(&___activeSceneChanged_11, value);
	}
};

struct SendActiveSceneChangedEvent_t3095845534_StaticFields
{
public:
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.SendActiveSceneChangedEvent::lastPreviousActiveScene
	Scene_t1684909666  ___lastPreviousActiveScene_12;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.SendActiveSceneChangedEvent::lastNewActiveScene
	Scene_t1684909666  ___lastNewActiveScene_13;

public:
	inline static int32_t get_offset_of_lastPreviousActiveScene_12() { return static_cast<int32_t>(offsetof(SendActiveSceneChangedEvent_t3095845534_StaticFields, ___lastPreviousActiveScene_12)); }
	inline Scene_t1684909666  get_lastPreviousActiveScene_12() const { return ___lastPreviousActiveScene_12; }
	inline Scene_t1684909666 * get_address_of_lastPreviousActiveScene_12() { return &___lastPreviousActiveScene_12; }
	inline void set_lastPreviousActiveScene_12(Scene_t1684909666  value)
	{
		___lastPreviousActiveScene_12 = value;
	}

	inline static int32_t get_offset_of_lastNewActiveScene_13() { return static_cast<int32_t>(offsetof(SendActiveSceneChangedEvent_t3095845534_StaticFields, ___lastNewActiveScene_13)); }
	inline Scene_t1684909666  get_lastNewActiveScene_13() const { return ___lastNewActiveScene_13; }
	inline Scene_t1684909666 * get_address_of_lastNewActiveScene_13() { return &___lastNewActiveScene_13; }
	inline void set_lastNewActiveScene_13(Scene_t1684909666  value)
	{
		___lastNewActiveScene_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
