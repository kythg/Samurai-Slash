#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge3407543655.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
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

// HutongGames.PlayMaker.Actions.GetSceneActionBase
struct  GetSceneActionBase_t1170867841  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneAllReferenceOptions HutongGames.PlayMaker.Actions.GetSceneActionBase::sceneReference
	int32_t ___sceneReference_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneActionBase::sceneAtIndex
	FsmInt_t1273009179 * ___sceneAtIndex_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneActionBase::sceneByName
	FsmString_t2414474701 * ___sceneByName_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneActionBase::sceneByPath
	FsmString_t2414474701 * ___sceneByPath_14;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetSceneActionBase::sceneByGameObject
	FsmOwnerDefault_t2023674184 * ___sceneByGameObject_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneActionBase::sceneFound
	FsmBool_t664485696 * ___sceneFound_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetSceneActionBase::sceneFoundEvent
	FsmEvent_t1258573736 * ___sceneFoundEvent_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetSceneActionBase::sceneNotFoundEvent
	FsmEvent_t1258573736 * ___sceneNotFoundEvent_18;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.GetSceneActionBase::_scene
	Scene_t1684909666  ____scene_19;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSceneActionBase::_sceneFound
	bool ____sceneFound_20;

public:
	inline static int32_t get_offset_of_sceneReference_11() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ___sceneReference_11)); }
	inline int32_t get_sceneReference_11() const { return ___sceneReference_11; }
	inline int32_t* get_address_of_sceneReference_11() { return &___sceneReference_11; }
	inline void set_sceneReference_11(int32_t value)
	{
		___sceneReference_11 = value;
	}

	inline static int32_t get_offset_of_sceneAtIndex_12() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ___sceneAtIndex_12)); }
	inline FsmInt_t1273009179 * get_sceneAtIndex_12() const { return ___sceneAtIndex_12; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtIndex_12() { return &___sceneAtIndex_12; }
	inline void set_sceneAtIndex_12(FsmInt_t1273009179 * value)
	{
		___sceneAtIndex_12 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtIndex_12, value);
	}

	inline static int32_t get_offset_of_sceneByName_13() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ___sceneByName_13)); }
	inline FsmString_t2414474701 * get_sceneByName_13() const { return ___sceneByName_13; }
	inline FsmString_t2414474701 ** get_address_of_sceneByName_13() { return &___sceneByName_13; }
	inline void set_sceneByName_13(FsmString_t2414474701 * value)
	{
		___sceneByName_13 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByName_13, value);
	}

	inline static int32_t get_offset_of_sceneByPath_14() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ___sceneByPath_14)); }
	inline FsmString_t2414474701 * get_sceneByPath_14() const { return ___sceneByPath_14; }
	inline FsmString_t2414474701 ** get_address_of_sceneByPath_14() { return &___sceneByPath_14; }
	inline void set_sceneByPath_14(FsmString_t2414474701 * value)
	{
		___sceneByPath_14 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByPath_14, value);
	}

	inline static int32_t get_offset_of_sceneByGameObject_15() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ___sceneByGameObject_15)); }
	inline FsmOwnerDefault_t2023674184 * get_sceneByGameObject_15() const { return ___sceneByGameObject_15; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_sceneByGameObject_15() { return &___sceneByGameObject_15; }
	inline void set_sceneByGameObject_15(FsmOwnerDefault_t2023674184 * value)
	{
		___sceneByGameObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByGameObject_15, value);
	}

	inline static int32_t get_offset_of_sceneFound_16() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ___sceneFound_16)); }
	inline FsmBool_t664485696 * get_sceneFound_16() const { return ___sceneFound_16; }
	inline FsmBool_t664485696 ** get_address_of_sceneFound_16() { return &___sceneFound_16; }
	inline void set_sceneFound_16(FsmBool_t664485696 * value)
	{
		___sceneFound_16 = value;
		Il2CppCodeGenWriteBarrier(&___sceneFound_16, value);
	}

	inline static int32_t get_offset_of_sceneFoundEvent_17() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ___sceneFoundEvent_17)); }
	inline FsmEvent_t1258573736 * get_sceneFoundEvent_17() const { return ___sceneFoundEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneFoundEvent_17() { return &___sceneFoundEvent_17; }
	inline void set_sceneFoundEvent_17(FsmEvent_t1258573736 * value)
	{
		___sceneFoundEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___sceneFoundEvent_17, value);
	}

	inline static int32_t get_offset_of_sceneNotFoundEvent_18() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ___sceneNotFoundEvent_18)); }
	inline FsmEvent_t1258573736 * get_sceneNotFoundEvent_18() const { return ___sceneNotFoundEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneNotFoundEvent_18() { return &___sceneNotFoundEvent_18; }
	inline void set_sceneNotFoundEvent_18(FsmEvent_t1258573736 * value)
	{
		___sceneNotFoundEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNotFoundEvent_18, value);
	}

	inline static int32_t get_offset_of__scene_19() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ____scene_19)); }
	inline Scene_t1684909666  get__scene_19() const { return ____scene_19; }
	inline Scene_t1684909666 * get_address_of__scene_19() { return &____scene_19; }
	inline void set__scene_19(Scene_t1684909666  value)
	{
		____scene_19 = value;
	}

	inline static int32_t get_offset_of__sceneFound_20() { return static_cast<int32_t>(offsetof(GetSceneActionBase_t1170867841, ____sceneFound_20)); }
	inline bool get__sceneFound_20() const { return ____sceneFound_20; }
	inline bool* get_address_of__sceneFound_20() { return &____sceneFound_20; }
	inline void set__sceneFound_20(bool value)
	{
		____sceneFound_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
