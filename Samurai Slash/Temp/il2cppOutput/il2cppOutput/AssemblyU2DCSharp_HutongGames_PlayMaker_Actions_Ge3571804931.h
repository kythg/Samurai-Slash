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

// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetSceneLoadedEventData
struct  GetSceneLoadedEventData_t3571804931  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::loadedMode
	FsmEnum_t2808516103 * ___loadedMode_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::name
	FsmString_t2414474701 * ___name_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::path
	FsmString_t2414474701 * ___path_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::isValid
	FsmBool_t664485696 * ___isValid_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::buildIndex
	FsmInt_t1273009179 * ___buildIndex_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::isLoaded
	FsmBool_t664485696 * ___isLoaded_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::isDirty
	FsmBool_t664485696 * ___isDirty_17;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::rootCount
	FsmInt_t1273009179 * ___rootCount_18;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::rootGameObjects
	FsmArray_t527459893 * ___rootGameObjects_19;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.GetSceneLoadedEventData::_scene
	Scene_t1684909666  ____scene_20;

public:
	inline static int32_t get_offset_of_loadedMode_11() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___loadedMode_11)); }
	inline FsmEnum_t2808516103 * get_loadedMode_11() const { return ___loadedMode_11; }
	inline FsmEnum_t2808516103 ** get_address_of_loadedMode_11() { return &___loadedMode_11; }
	inline void set_loadedMode_11(FsmEnum_t2808516103 * value)
	{
		___loadedMode_11 = value;
		Il2CppCodeGenWriteBarrier(&___loadedMode_11, value);
	}

	inline static int32_t get_offset_of_name_12() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___name_12)); }
	inline FsmString_t2414474701 * get_name_12() const { return ___name_12; }
	inline FsmString_t2414474701 ** get_address_of_name_12() { return &___name_12; }
	inline void set_name_12(FsmString_t2414474701 * value)
	{
		___name_12 = value;
		Il2CppCodeGenWriteBarrier(&___name_12, value);
	}

	inline static int32_t get_offset_of_path_13() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___path_13)); }
	inline FsmString_t2414474701 * get_path_13() const { return ___path_13; }
	inline FsmString_t2414474701 ** get_address_of_path_13() { return &___path_13; }
	inline void set_path_13(FsmString_t2414474701 * value)
	{
		___path_13 = value;
		Il2CppCodeGenWriteBarrier(&___path_13, value);
	}

	inline static int32_t get_offset_of_isValid_14() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___isValid_14)); }
	inline FsmBool_t664485696 * get_isValid_14() const { return ___isValid_14; }
	inline FsmBool_t664485696 ** get_address_of_isValid_14() { return &___isValid_14; }
	inline void set_isValid_14(FsmBool_t664485696 * value)
	{
		___isValid_14 = value;
		Il2CppCodeGenWriteBarrier(&___isValid_14, value);
	}

	inline static int32_t get_offset_of_buildIndex_15() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___buildIndex_15)); }
	inline FsmInt_t1273009179 * get_buildIndex_15() const { return ___buildIndex_15; }
	inline FsmInt_t1273009179 ** get_address_of_buildIndex_15() { return &___buildIndex_15; }
	inline void set_buildIndex_15(FsmInt_t1273009179 * value)
	{
		___buildIndex_15 = value;
		Il2CppCodeGenWriteBarrier(&___buildIndex_15, value);
	}

	inline static int32_t get_offset_of_isLoaded_16() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___isLoaded_16)); }
	inline FsmBool_t664485696 * get_isLoaded_16() const { return ___isLoaded_16; }
	inline FsmBool_t664485696 ** get_address_of_isLoaded_16() { return &___isLoaded_16; }
	inline void set_isLoaded_16(FsmBool_t664485696 * value)
	{
		___isLoaded_16 = value;
		Il2CppCodeGenWriteBarrier(&___isLoaded_16, value);
	}

	inline static int32_t get_offset_of_isDirty_17() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___isDirty_17)); }
	inline FsmBool_t664485696 * get_isDirty_17() const { return ___isDirty_17; }
	inline FsmBool_t664485696 ** get_address_of_isDirty_17() { return &___isDirty_17; }
	inline void set_isDirty_17(FsmBool_t664485696 * value)
	{
		___isDirty_17 = value;
		Il2CppCodeGenWriteBarrier(&___isDirty_17, value);
	}

	inline static int32_t get_offset_of_rootCount_18() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___rootCount_18)); }
	inline FsmInt_t1273009179 * get_rootCount_18() const { return ___rootCount_18; }
	inline FsmInt_t1273009179 ** get_address_of_rootCount_18() { return &___rootCount_18; }
	inline void set_rootCount_18(FsmInt_t1273009179 * value)
	{
		___rootCount_18 = value;
		Il2CppCodeGenWriteBarrier(&___rootCount_18, value);
	}

	inline static int32_t get_offset_of_rootGameObjects_19() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ___rootGameObjects_19)); }
	inline FsmArray_t527459893 * get_rootGameObjects_19() const { return ___rootGameObjects_19; }
	inline FsmArray_t527459893 ** get_address_of_rootGameObjects_19() { return &___rootGameObjects_19; }
	inline void set_rootGameObjects_19(FsmArray_t527459893 * value)
	{
		___rootGameObjects_19 = value;
		Il2CppCodeGenWriteBarrier(&___rootGameObjects_19, value);
	}

	inline static int32_t get_offset_of__scene_20() { return static_cast<int32_t>(offsetof(GetSceneLoadedEventData_t3571804931, ____scene_20)); }
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
