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

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData
struct  GetSceneUnloadedEventData_t1806357634  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::name
	FsmString_t2414474701 * ___name_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::path
	FsmString_t2414474701 * ___path_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::buildIndex
	FsmInt_t1273009179 * ___buildIndex_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::isValid
	FsmBool_t664485696 * ___isValid_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::isLoaded
	FsmBool_t664485696 * ___isLoaded_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::isDirty
	FsmBool_t664485696 * ___isDirty_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::rootCount
	FsmInt_t1273009179 * ___rootCount_17;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::rootGameObjects
	FsmArray_t527459893 * ___rootGameObjects_18;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::everyFrame
	bool ___everyFrame_19;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.GetSceneUnloadedEventData::_scene
	Scene_t1684909666  ____scene_20;

public:
	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___name_11)); }
	inline FsmString_t2414474701 * get_name_11() const { return ___name_11; }
	inline FsmString_t2414474701 ** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(FsmString_t2414474701 * value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier(&___name_11, value);
	}

	inline static int32_t get_offset_of_path_12() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___path_12)); }
	inline FsmString_t2414474701 * get_path_12() const { return ___path_12; }
	inline FsmString_t2414474701 ** get_address_of_path_12() { return &___path_12; }
	inline void set_path_12(FsmString_t2414474701 * value)
	{
		___path_12 = value;
		Il2CppCodeGenWriteBarrier(&___path_12, value);
	}

	inline static int32_t get_offset_of_buildIndex_13() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___buildIndex_13)); }
	inline FsmInt_t1273009179 * get_buildIndex_13() const { return ___buildIndex_13; }
	inline FsmInt_t1273009179 ** get_address_of_buildIndex_13() { return &___buildIndex_13; }
	inline void set_buildIndex_13(FsmInt_t1273009179 * value)
	{
		___buildIndex_13 = value;
		Il2CppCodeGenWriteBarrier(&___buildIndex_13, value);
	}

	inline static int32_t get_offset_of_isValid_14() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___isValid_14)); }
	inline FsmBool_t664485696 * get_isValid_14() const { return ___isValid_14; }
	inline FsmBool_t664485696 ** get_address_of_isValid_14() { return &___isValid_14; }
	inline void set_isValid_14(FsmBool_t664485696 * value)
	{
		___isValid_14 = value;
		Il2CppCodeGenWriteBarrier(&___isValid_14, value);
	}

	inline static int32_t get_offset_of_isLoaded_15() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___isLoaded_15)); }
	inline FsmBool_t664485696 * get_isLoaded_15() const { return ___isLoaded_15; }
	inline FsmBool_t664485696 ** get_address_of_isLoaded_15() { return &___isLoaded_15; }
	inline void set_isLoaded_15(FsmBool_t664485696 * value)
	{
		___isLoaded_15 = value;
		Il2CppCodeGenWriteBarrier(&___isLoaded_15, value);
	}

	inline static int32_t get_offset_of_isDirty_16() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___isDirty_16)); }
	inline FsmBool_t664485696 * get_isDirty_16() const { return ___isDirty_16; }
	inline FsmBool_t664485696 ** get_address_of_isDirty_16() { return &___isDirty_16; }
	inline void set_isDirty_16(FsmBool_t664485696 * value)
	{
		___isDirty_16 = value;
		Il2CppCodeGenWriteBarrier(&___isDirty_16, value);
	}

	inline static int32_t get_offset_of_rootCount_17() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___rootCount_17)); }
	inline FsmInt_t1273009179 * get_rootCount_17() const { return ___rootCount_17; }
	inline FsmInt_t1273009179 ** get_address_of_rootCount_17() { return &___rootCount_17; }
	inline void set_rootCount_17(FsmInt_t1273009179 * value)
	{
		___rootCount_17 = value;
		Il2CppCodeGenWriteBarrier(&___rootCount_17, value);
	}

	inline static int32_t get_offset_of_rootGameObjects_18() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___rootGameObjects_18)); }
	inline FsmArray_t527459893 * get_rootGameObjects_18() const { return ___rootGameObjects_18; }
	inline FsmArray_t527459893 ** get_address_of_rootGameObjects_18() { return &___rootGameObjects_18; }
	inline void set_rootGameObjects_18(FsmArray_t527459893 * value)
	{
		___rootGameObjects_18 = value;
		Il2CppCodeGenWriteBarrier(&___rootGameObjects_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ___everyFrame_19)); }
	inline bool get_everyFrame_19() const { return ___everyFrame_19; }
	inline bool* get_address_of_everyFrame_19() { return &___everyFrame_19; }
	inline void set_everyFrame_19(bool value)
	{
		___everyFrame_19 = value;
	}

	inline static int32_t get_offset_of__scene_20() { return static_cast<int32_t>(offsetof(GetSceneUnloadedEventData_t1806357634, ____scene_20)); }
	inline Scene_t1684909666  get__scene_20() const { return ____scene_20; }
	inline Scene_t1684909666 * get_address_of__scene_20() { return &____scene_20; }
	inline void set__scene_20(Scene_t1684909666  value)
	{
		____scene_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
