#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// PlayMakerGlobals
struct PlayMakerGlobals_t2120229426;
// HutongGames.PlayMaker.FsmVariables
struct FsmVariables_t630687169;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayMakerGlobals
struct  PlayMakerGlobals_t2120229426  : public ScriptableObject_t1975622470
{
public:
	// HutongGames.PlayMaker.FsmVariables PlayMakerGlobals::variables
	FsmVariables_t630687169 * ___variables_3;
	// System.Collections.Generic.List`1<System.String> PlayMakerGlobals::events
	List_1_t1398341365 * ___events_4;

public:
	inline static int32_t get_offset_of_variables_3() { return static_cast<int32_t>(offsetof(PlayMakerGlobals_t2120229426, ___variables_3)); }
	inline FsmVariables_t630687169 * get_variables_3() const { return ___variables_3; }
	inline FsmVariables_t630687169 ** get_address_of_variables_3() { return &___variables_3; }
	inline void set_variables_3(FsmVariables_t630687169 * value)
	{
		___variables_3 = value;
		Il2CppCodeGenWriteBarrier(&___variables_3, value);
	}

	inline static int32_t get_offset_of_events_4() { return static_cast<int32_t>(offsetof(PlayMakerGlobals_t2120229426, ___events_4)); }
	inline List_1_t1398341365 * get_events_4() const { return ___events_4; }
	inline List_1_t1398341365 ** get_address_of_events_4() { return &___events_4; }
	inline void set_events_4(List_1_t1398341365 * value)
	{
		___events_4 = value;
		Il2CppCodeGenWriteBarrier(&___events_4, value);
	}
};

struct PlayMakerGlobals_t2120229426_StaticFields
{
public:
	// PlayMakerGlobals PlayMakerGlobals::instance
	PlayMakerGlobals_t2120229426 * ___instance_2;
	// System.Boolean PlayMakerGlobals::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_5;
	// System.Boolean PlayMakerGlobals::<IsPlayingInEditor>k__BackingField
	bool ___U3CIsPlayingInEditorU3Ek__BackingField_6;
	// System.Boolean PlayMakerGlobals::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_7;
	// System.Boolean PlayMakerGlobals::<IsEditor>k__BackingField
	bool ___U3CIsEditorU3Ek__BackingField_8;
	// System.Boolean PlayMakerGlobals::<IsBuilding>k__BackingField
	bool ___U3CIsBuildingU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PlayMakerGlobals_t2120229426_StaticFields, ___instance_2)); }
	inline PlayMakerGlobals_t2120229426 * get_instance_2() const { return ___instance_2; }
	inline PlayMakerGlobals_t2120229426 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PlayMakerGlobals_t2120229426 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayMakerGlobals_t2120229426_StaticFields, ___U3CInitializedU3Ek__BackingField_5)); }
	inline bool get_U3CInitializedU3Ek__BackingField_5() const { return ___U3CInitializedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_5() { return &___U3CInitializedU3Ek__BackingField_5; }
	inline void set_U3CInitializedU3Ek__BackingField_5(bool value)
	{
		___U3CInitializedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayingInEditorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayMakerGlobals_t2120229426_StaticFields, ___U3CIsPlayingInEditorU3Ek__BackingField_6)); }
	inline bool get_U3CIsPlayingInEditorU3Ek__BackingField_6() const { return ___U3CIsPlayingInEditorU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPlayingInEditorU3Ek__BackingField_6() { return &___U3CIsPlayingInEditorU3Ek__BackingField_6; }
	inline void set_U3CIsPlayingInEditorU3Ek__BackingField_6(bool value)
	{
		___U3CIsPlayingInEditorU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PlayMakerGlobals_t2120229426_StaticFields, ___U3CIsPlayingU3Ek__BackingField_7)); }
	inline bool get_U3CIsPlayingU3Ek__BackingField_7() const { return ___U3CIsPlayingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPlayingU3Ek__BackingField_7() { return &___U3CIsPlayingU3Ek__BackingField_7; }
	inline void set_U3CIsPlayingU3Ek__BackingField_7(bool value)
	{
		___U3CIsPlayingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsEditorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PlayMakerGlobals_t2120229426_StaticFields, ___U3CIsEditorU3Ek__BackingField_8)); }
	inline bool get_U3CIsEditorU3Ek__BackingField_8() const { return ___U3CIsEditorU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsEditorU3Ek__BackingField_8() { return &___U3CIsEditorU3Ek__BackingField_8; }
	inline void set_U3CIsEditorU3Ek__BackingField_8(bool value)
	{
		___U3CIsEditorU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsBuildingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PlayMakerGlobals_t2120229426_StaticFields, ___U3CIsBuildingU3Ek__BackingField_9)); }
	inline bool get_U3CIsBuildingU3Ek__BackingField_9() const { return ___U3CIsBuildingU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsBuildingU3Ek__BackingField_9() { return &___U3CIsBuildingU3Ek__BackingField_9; }
	inline void set_U3CIsBuildingU3Ek__BackingField_9(bool value)
	{
		___U3CIsBuildingU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
