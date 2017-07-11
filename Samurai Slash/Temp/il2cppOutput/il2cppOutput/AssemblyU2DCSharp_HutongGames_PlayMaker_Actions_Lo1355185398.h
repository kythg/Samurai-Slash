#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge2957955650.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.LoadScene
struct  LoadScene_t1355185398  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneSimpleReferenceOptions HutongGames.PlayMaker.Actions.LoadScene::sceneReference
	int32_t ___sceneReference_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.LoadScene::sceneByName
	FsmString_t2414474701 * ___sceneByName_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.LoadScene::sceneAtIndex
	FsmInt_t1273009179 * ___sceneAtIndex_13;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.LoadScene::loadSceneMode
	FsmEnum_t2808516103 * ___loadSceneMode_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LoadScene::success
	FsmBool_t664485696 * ___success_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadScene::successEvent
	FsmEvent_t1258573736 * ___successEvent_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadScene::failureEvent
	FsmEvent_t1258573736 * ___failureEvent_17;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.LoadScene::_scene
	Scene_t1684909666  ____scene_18;
	// System.Boolean HutongGames.PlayMaker.Actions.LoadScene::_sceneFound
	bool ____sceneFound_19;

public:
	inline static int32_t get_offset_of_sceneReference_11() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ___sceneReference_11)); }
	inline int32_t get_sceneReference_11() const { return ___sceneReference_11; }
	inline int32_t* get_address_of_sceneReference_11() { return &___sceneReference_11; }
	inline void set_sceneReference_11(int32_t value)
	{
		___sceneReference_11 = value;
	}

	inline static int32_t get_offset_of_sceneByName_12() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ___sceneByName_12)); }
	inline FsmString_t2414474701 * get_sceneByName_12() const { return ___sceneByName_12; }
	inline FsmString_t2414474701 ** get_address_of_sceneByName_12() { return &___sceneByName_12; }
	inline void set_sceneByName_12(FsmString_t2414474701 * value)
	{
		___sceneByName_12 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByName_12, value);
	}

	inline static int32_t get_offset_of_sceneAtIndex_13() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ___sceneAtIndex_13)); }
	inline FsmInt_t1273009179 * get_sceneAtIndex_13() const { return ___sceneAtIndex_13; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtIndex_13() { return &___sceneAtIndex_13; }
	inline void set_sceneAtIndex_13(FsmInt_t1273009179 * value)
	{
		___sceneAtIndex_13 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtIndex_13, value);
	}

	inline static int32_t get_offset_of_loadSceneMode_14() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ___loadSceneMode_14)); }
	inline FsmEnum_t2808516103 * get_loadSceneMode_14() const { return ___loadSceneMode_14; }
	inline FsmEnum_t2808516103 ** get_address_of_loadSceneMode_14() { return &___loadSceneMode_14; }
	inline void set_loadSceneMode_14(FsmEnum_t2808516103 * value)
	{
		___loadSceneMode_14 = value;
		Il2CppCodeGenWriteBarrier(&___loadSceneMode_14, value);
	}

	inline static int32_t get_offset_of_success_15() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ___success_15)); }
	inline FsmBool_t664485696 * get_success_15() const { return ___success_15; }
	inline FsmBool_t664485696 ** get_address_of_success_15() { return &___success_15; }
	inline void set_success_15(FsmBool_t664485696 * value)
	{
		___success_15 = value;
		Il2CppCodeGenWriteBarrier(&___success_15, value);
	}

	inline static int32_t get_offset_of_successEvent_16() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ___successEvent_16)); }
	inline FsmEvent_t1258573736 * get_successEvent_16() const { return ___successEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_successEvent_16() { return &___successEvent_16; }
	inline void set_successEvent_16(FsmEvent_t1258573736 * value)
	{
		___successEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___successEvent_16, value);
	}

	inline static int32_t get_offset_of_failureEvent_17() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ___failureEvent_17)); }
	inline FsmEvent_t1258573736 * get_failureEvent_17() const { return ___failureEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_failureEvent_17() { return &___failureEvent_17; }
	inline void set_failureEvent_17(FsmEvent_t1258573736 * value)
	{
		___failureEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___failureEvent_17, value);
	}

	inline static int32_t get_offset_of__scene_18() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ____scene_18)); }
	inline Scene_t1684909666  get__scene_18() const { return ____scene_18; }
	inline Scene_t1684909666 * get_address_of__scene_18() { return &____scene_18; }
	inline void set__scene_18(Scene_t1684909666  value)
	{
		____scene_18 = value;
	}

	inline static int32_t get_offset_of__sceneFound_19() { return static_cast<int32_t>(offsetof(LoadScene_t1355185398, ____sceneFound_19)); }
	inline bool get__sceneFound_19() const { return ____sceneFound_19; }
	inline bool* get_address_of__sceneFound_19() { return &____sceneFound_19; }
	inline void set__sceneFound_19(bool value)
	{
		____sceneFound_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
