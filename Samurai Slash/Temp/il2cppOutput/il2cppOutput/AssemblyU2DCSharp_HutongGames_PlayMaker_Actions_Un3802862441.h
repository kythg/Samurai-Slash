#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Un2487733048.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.UnloadScene
struct  UnloadScene_t3802862441  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.UnloadScene/SceneReferenceOptions HutongGames.PlayMaker.Actions.UnloadScene::sceneReference
	int32_t ___sceneReference_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.UnloadScene::sceneByName
	FsmString_t2414474701 * ___sceneByName_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.UnloadScene::sceneAtBuildIndex
	FsmInt_t1273009179 * ___sceneAtBuildIndex_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.UnloadScene::sceneAtIndex
	FsmInt_t1273009179 * ___sceneAtIndex_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.UnloadScene::sceneByPath
	FsmString_t2414474701 * ___sceneByPath_15;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.UnloadScene::sceneByGameObject
	FsmOwnerDefault_t2023674184 * ___sceneByGameObject_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.UnloadScene::unloaded
	FsmBool_t664485696 * ___unloaded_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.UnloadScene::unloadedEvent
	FsmEvent_t1258573736 * ___unloadedEvent_18;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.UnloadScene::failureEvent
	FsmEvent_t1258573736 * ___failureEvent_19;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.UnloadScene::_scene
	Scene_t1684909666  ____scene_20;
	// System.Boolean HutongGames.PlayMaker.Actions.UnloadScene::_sceneFound
	bool ____sceneFound_21;

public:
	inline static int32_t get_offset_of_sceneReference_11() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___sceneReference_11)); }
	inline int32_t get_sceneReference_11() const { return ___sceneReference_11; }
	inline int32_t* get_address_of_sceneReference_11() { return &___sceneReference_11; }
	inline void set_sceneReference_11(int32_t value)
	{
		___sceneReference_11 = value;
	}

	inline static int32_t get_offset_of_sceneByName_12() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___sceneByName_12)); }
	inline FsmString_t2414474701 * get_sceneByName_12() const { return ___sceneByName_12; }
	inline FsmString_t2414474701 ** get_address_of_sceneByName_12() { return &___sceneByName_12; }
	inline void set_sceneByName_12(FsmString_t2414474701 * value)
	{
		___sceneByName_12 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByName_12, value);
	}

	inline static int32_t get_offset_of_sceneAtBuildIndex_13() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___sceneAtBuildIndex_13)); }
	inline FsmInt_t1273009179 * get_sceneAtBuildIndex_13() const { return ___sceneAtBuildIndex_13; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtBuildIndex_13() { return &___sceneAtBuildIndex_13; }
	inline void set_sceneAtBuildIndex_13(FsmInt_t1273009179 * value)
	{
		___sceneAtBuildIndex_13 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtBuildIndex_13, value);
	}

	inline static int32_t get_offset_of_sceneAtIndex_14() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___sceneAtIndex_14)); }
	inline FsmInt_t1273009179 * get_sceneAtIndex_14() const { return ___sceneAtIndex_14; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtIndex_14() { return &___sceneAtIndex_14; }
	inline void set_sceneAtIndex_14(FsmInt_t1273009179 * value)
	{
		___sceneAtIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtIndex_14, value);
	}

	inline static int32_t get_offset_of_sceneByPath_15() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___sceneByPath_15)); }
	inline FsmString_t2414474701 * get_sceneByPath_15() const { return ___sceneByPath_15; }
	inline FsmString_t2414474701 ** get_address_of_sceneByPath_15() { return &___sceneByPath_15; }
	inline void set_sceneByPath_15(FsmString_t2414474701 * value)
	{
		___sceneByPath_15 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByPath_15, value);
	}

	inline static int32_t get_offset_of_sceneByGameObject_16() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___sceneByGameObject_16)); }
	inline FsmOwnerDefault_t2023674184 * get_sceneByGameObject_16() const { return ___sceneByGameObject_16; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_sceneByGameObject_16() { return &___sceneByGameObject_16; }
	inline void set_sceneByGameObject_16(FsmOwnerDefault_t2023674184 * value)
	{
		___sceneByGameObject_16 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByGameObject_16, value);
	}

	inline static int32_t get_offset_of_unloaded_17() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___unloaded_17)); }
	inline FsmBool_t664485696 * get_unloaded_17() const { return ___unloaded_17; }
	inline FsmBool_t664485696 ** get_address_of_unloaded_17() { return &___unloaded_17; }
	inline void set_unloaded_17(FsmBool_t664485696 * value)
	{
		___unloaded_17 = value;
		Il2CppCodeGenWriteBarrier(&___unloaded_17, value);
	}

	inline static int32_t get_offset_of_unloadedEvent_18() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___unloadedEvent_18)); }
	inline FsmEvent_t1258573736 * get_unloadedEvent_18() const { return ___unloadedEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_unloadedEvent_18() { return &___unloadedEvent_18; }
	inline void set_unloadedEvent_18(FsmEvent_t1258573736 * value)
	{
		___unloadedEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___unloadedEvent_18, value);
	}

	inline static int32_t get_offset_of_failureEvent_19() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ___failureEvent_19)); }
	inline FsmEvent_t1258573736 * get_failureEvent_19() const { return ___failureEvent_19; }
	inline FsmEvent_t1258573736 ** get_address_of_failureEvent_19() { return &___failureEvent_19; }
	inline void set_failureEvent_19(FsmEvent_t1258573736 * value)
	{
		___failureEvent_19 = value;
		Il2CppCodeGenWriteBarrier(&___failureEvent_19, value);
	}

	inline static int32_t get_offset_of__scene_20() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ____scene_20)); }
	inline Scene_t1684909666  get__scene_20() const { return ____scene_20; }
	inline Scene_t1684909666 * get_address_of__scene_20() { return &____scene_20; }
	inline void set__scene_20(Scene_t1684909666  value)
	{
		____scene_20 = value;
	}

	inline static int32_t get_offset_of__sceneFound_21() { return static_cast<int32_t>(offsetof(UnloadScene_t3802862441, ____sceneFound_21)); }
	inline bool get__sceneFound_21() const { return ____sceneFound_21; }
	inline bool* get_address_of__sceneFound_21() { return &____sceneFound_21; }
	inline void set__sceneFound_21(bool value)
	{
		____sceneFound_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
