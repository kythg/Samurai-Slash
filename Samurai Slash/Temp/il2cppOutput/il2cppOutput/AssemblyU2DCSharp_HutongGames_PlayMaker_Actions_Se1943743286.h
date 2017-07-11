#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Se3006405993.h"
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

// HutongGames.PlayMaker.Actions.SetActiveScene
struct  SetActiveScene_t1943743286  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.SetActiveScene/SceneReferenceOptions HutongGames.PlayMaker.Actions.SetActiveScene::sceneReference
	int32_t ___sceneReference_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetActiveScene::sceneByName
	FsmString_t2414474701 * ___sceneByName_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetActiveScene::sceneAtBuildIndex
	FsmInt_t1273009179 * ___sceneAtBuildIndex_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.SetActiveScene::sceneAtIndex
	FsmInt_t1273009179 * ___sceneAtIndex_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetActiveScene::sceneByPath
	FsmString_t2414474701 * ___sceneByPath_15;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetActiveScene::sceneByGameObject
	FsmOwnerDefault_t2023674184 * ___sceneByGameObject_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetActiveScene::success
	FsmBool_t664485696 * ___success_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SetActiveScene::successEvent
	FsmEvent_t1258573736 * ___successEvent_18;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetActiveScene::sceneFound
	FsmBool_t664485696 * ___sceneFound_19;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SetActiveScene::sceneNotActivatedEvent
	FsmEvent_t1258573736 * ___sceneNotActivatedEvent_20;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.SetActiveScene::sceneNotFoundEvent
	FsmEvent_t1258573736 * ___sceneNotFoundEvent_21;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.SetActiveScene::_scene
	Scene_t1684909666  ____scene_22;
	// System.Boolean HutongGames.PlayMaker.Actions.SetActiveScene::_sceneFound
	bool ____sceneFound_23;
	// System.Boolean HutongGames.PlayMaker.Actions.SetActiveScene::_success
	bool ____success_24;

public:
	inline static int32_t get_offset_of_sceneReference_11() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneReference_11)); }
	inline int32_t get_sceneReference_11() const { return ___sceneReference_11; }
	inline int32_t* get_address_of_sceneReference_11() { return &___sceneReference_11; }
	inline void set_sceneReference_11(int32_t value)
	{
		___sceneReference_11 = value;
	}

	inline static int32_t get_offset_of_sceneByName_12() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneByName_12)); }
	inline FsmString_t2414474701 * get_sceneByName_12() const { return ___sceneByName_12; }
	inline FsmString_t2414474701 ** get_address_of_sceneByName_12() { return &___sceneByName_12; }
	inline void set_sceneByName_12(FsmString_t2414474701 * value)
	{
		___sceneByName_12 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByName_12, value);
	}

	inline static int32_t get_offset_of_sceneAtBuildIndex_13() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneAtBuildIndex_13)); }
	inline FsmInt_t1273009179 * get_sceneAtBuildIndex_13() const { return ___sceneAtBuildIndex_13; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtBuildIndex_13() { return &___sceneAtBuildIndex_13; }
	inline void set_sceneAtBuildIndex_13(FsmInt_t1273009179 * value)
	{
		___sceneAtBuildIndex_13 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtBuildIndex_13, value);
	}

	inline static int32_t get_offset_of_sceneAtIndex_14() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneAtIndex_14)); }
	inline FsmInt_t1273009179 * get_sceneAtIndex_14() const { return ___sceneAtIndex_14; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtIndex_14() { return &___sceneAtIndex_14; }
	inline void set_sceneAtIndex_14(FsmInt_t1273009179 * value)
	{
		___sceneAtIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtIndex_14, value);
	}

	inline static int32_t get_offset_of_sceneByPath_15() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneByPath_15)); }
	inline FsmString_t2414474701 * get_sceneByPath_15() const { return ___sceneByPath_15; }
	inline FsmString_t2414474701 ** get_address_of_sceneByPath_15() { return &___sceneByPath_15; }
	inline void set_sceneByPath_15(FsmString_t2414474701 * value)
	{
		___sceneByPath_15 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByPath_15, value);
	}

	inline static int32_t get_offset_of_sceneByGameObject_16() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneByGameObject_16)); }
	inline FsmOwnerDefault_t2023674184 * get_sceneByGameObject_16() const { return ___sceneByGameObject_16; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_sceneByGameObject_16() { return &___sceneByGameObject_16; }
	inline void set_sceneByGameObject_16(FsmOwnerDefault_t2023674184 * value)
	{
		___sceneByGameObject_16 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByGameObject_16, value);
	}

	inline static int32_t get_offset_of_success_17() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___success_17)); }
	inline FsmBool_t664485696 * get_success_17() const { return ___success_17; }
	inline FsmBool_t664485696 ** get_address_of_success_17() { return &___success_17; }
	inline void set_success_17(FsmBool_t664485696 * value)
	{
		___success_17 = value;
		Il2CppCodeGenWriteBarrier(&___success_17, value);
	}

	inline static int32_t get_offset_of_successEvent_18() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___successEvent_18)); }
	inline FsmEvent_t1258573736 * get_successEvent_18() const { return ___successEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_successEvent_18() { return &___successEvent_18; }
	inline void set_successEvent_18(FsmEvent_t1258573736 * value)
	{
		___successEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___successEvent_18, value);
	}

	inline static int32_t get_offset_of_sceneFound_19() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneFound_19)); }
	inline FsmBool_t664485696 * get_sceneFound_19() const { return ___sceneFound_19; }
	inline FsmBool_t664485696 ** get_address_of_sceneFound_19() { return &___sceneFound_19; }
	inline void set_sceneFound_19(FsmBool_t664485696 * value)
	{
		___sceneFound_19 = value;
		Il2CppCodeGenWriteBarrier(&___sceneFound_19, value);
	}

	inline static int32_t get_offset_of_sceneNotActivatedEvent_20() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneNotActivatedEvent_20)); }
	inline FsmEvent_t1258573736 * get_sceneNotActivatedEvent_20() const { return ___sceneNotActivatedEvent_20; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneNotActivatedEvent_20() { return &___sceneNotActivatedEvent_20; }
	inline void set_sceneNotActivatedEvent_20(FsmEvent_t1258573736 * value)
	{
		___sceneNotActivatedEvent_20 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNotActivatedEvent_20, value);
	}

	inline static int32_t get_offset_of_sceneNotFoundEvent_21() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ___sceneNotFoundEvent_21)); }
	inline FsmEvent_t1258573736 * get_sceneNotFoundEvent_21() const { return ___sceneNotFoundEvent_21; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneNotFoundEvent_21() { return &___sceneNotFoundEvent_21; }
	inline void set_sceneNotFoundEvent_21(FsmEvent_t1258573736 * value)
	{
		___sceneNotFoundEvent_21 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNotFoundEvent_21, value);
	}

	inline static int32_t get_offset_of__scene_22() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ____scene_22)); }
	inline Scene_t1684909666  get__scene_22() const { return ____scene_22; }
	inline Scene_t1684909666 * get_address_of__scene_22() { return &____scene_22; }
	inline void set__scene_22(Scene_t1684909666  value)
	{
		____scene_22 = value;
	}

	inline static int32_t get_offset_of__sceneFound_23() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ____sceneFound_23)); }
	inline bool get__sceneFound_23() const { return ____sceneFound_23; }
	inline bool* get_address_of__sceneFound_23() { return &____sceneFound_23; }
	inline void set__sceneFound_23(bool value)
	{
		____sceneFound_23 = value;
	}

	inline static int32_t get_offset_of__success_24() { return static_cast<int32_t>(offsetof(SetActiveScene_t1943743286, ____success_24)); }
	inline bool get__success_24() const { return ____success_24; }
	inline bool* get_address_of__success_24() { return &____success_24; }
	inline void set__success_24(bool value)
	{
		____success_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
