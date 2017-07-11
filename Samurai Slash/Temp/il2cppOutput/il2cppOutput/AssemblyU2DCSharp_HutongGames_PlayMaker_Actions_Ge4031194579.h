#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge1170867841.h"

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

// HutongGames.PlayMaker.Actions.GetSceneProperties
struct  GetSceneProperties_t4031194579  : public GetSceneActionBase_t1170867841
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneProperties::name
	FsmString_t2414474701 * ___name_21;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSceneProperties::path
	FsmString_t2414474701 * ___path_22;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneProperties::buildIndex
	FsmInt_t1273009179 * ___buildIndex_23;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneProperties::isValid
	FsmBool_t664485696 * ___isValid_24;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneProperties::isLoaded
	FsmBool_t664485696 * ___isLoaded_25;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetSceneProperties::isDirty
	FsmBool_t664485696 * ___isDirty_26;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetSceneProperties::rootCount
	FsmInt_t1273009179 * ___rootCount_27;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.GetSceneProperties::rootGameObjects
	FsmArray_t527459893 * ___rootGameObjects_28;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSceneProperties::everyFrame
	bool ___everyFrame_29;

public:
	inline static int32_t get_offset_of_name_21() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___name_21)); }
	inline FsmString_t2414474701 * get_name_21() const { return ___name_21; }
	inline FsmString_t2414474701 ** get_address_of_name_21() { return &___name_21; }
	inline void set_name_21(FsmString_t2414474701 * value)
	{
		___name_21 = value;
		Il2CppCodeGenWriteBarrier(&___name_21, value);
	}

	inline static int32_t get_offset_of_path_22() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___path_22)); }
	inline FsmString_t2414474701 * get_path_22() const { return ___path_22; }
	inline FsmString_t2414474701 ** get_address_of_path_22() { return &___path_22; }
	inline void set_path_22(FsmString_t2414474701 * value)
	{
		___path_22 = value;
		Il2CppCodeGenWriteBarrier(&___path_22, value);
	}

	inline static int32_t get_offset_of_buildIndex_23() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___buildIndex_23)); }
	inline FsmInt_t1273009179 * get_buildIndex_23() const { return ___buildIndex_23; }
	inline FsmInt_t1273009179 ** get_address_of_buildIndex_23() { return &___buildIndex_23; }
	inline void set_buildIndex_23(FsmInt_t1273009179 * value)
	{
		___buildIndex_23 = value;
		Il2CppCodeGenWriteBarrier(&___buildIndex_23, value);
	}

	inline static int32_t get_offset_of_isValid_24() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___isValid_24)); }
	inline FsmBool_t664485696 * get_isValid_24() const { return ___isValid_24; }
	inline FsmBool_t664485696 ** get_address_of_isValid_24() { return &___isValid_24; }
	inline void set_isValid_24(FsmBool_t664485696 * value)
	{
		___isValid_24 = value;
		Il2CppCodeGenWriteBarrier(&___isValid_24, value);
	}

	inline static int32_t get_offset_of_isLoaded_25() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___isLoaded_25)); }
	inline FsmBool_t664485696 * get_isLoaded_25() const { return ___isLoaded_25; }
	inline FsmBool_t664485696 ** get_address_of_isLoaded_25() { return &___isLoaded_25; }
	inline void set_isLoaded_25(FsmBool_t664485696 * value)
	{
		___isLoaded_25 = value;
		Il2CppCodeGenWriteBarrier(&___isLoaded_25, value);
	}

	inline static int32_t get_offset_of_isDirty_26() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___isDirty_26)); }
	inline FsmBool_t664485696 * get_isDirty_26() const { return ___isDirty_26; }
	inline FsmBool_t664485696 ** get_address_of_isDirty_26() { return &___isDirty_26; }
	inline void set_isDirty_26(FsmBool_t664485696 * value)
	{
		___isDirty_26 = value;
		Il2CppCodeGenWriteBarrier(&___isDirty_26, value);
	}

	inline static int32_t get_offset_of_rootCount_27() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___rootCount_27)); }
	inline FsmInt_t1273009179 * get_rootCount_27() const { return ___rootCount_27; }
	inline FsmInt_t1273009179 ** get_address_of_rootCount_27() { return &___rootCount_27; }
	inline void set_rootCount_27(FsmInt_t1273009179 * value)
	{
		___rootCount_27 = value;
		Il2CppCodeGenWriteBarrier(&___rootCount_27, value);
	}

	inline static int32_t get_offset_of_rootGameObjects_28() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___rootGameObjects_28)); }
	inline FsmArray_t527459893 * get_rootGameObjects_28() const { return ___rootGameObjects_28; }
	inline FsmArray_t527459893 ** get_address_of_rootGameObjects_28() { return &___rootGameObjects_28; }
	inline void set_rootGameObjects_28(FsmArray_t527459893 * value)
	{
		___rootGameObjects_28 = value;
		Il2CppCodeGenWriteBarrier(&___rootGameObjects_28, value);
	}

	inline static int32_t get_offset_of_everyFrame_29() { return static_cast<int32_t>(offsetof(GetSceneProperties_t4031194579, ___everyFrame_29)); }
	inline bool get_everyFrame_29() const { return ___everyFrame_29; }
	inline bool* get_address_of_everyFrame_29() { return &___everyFrame_29; }
	inline void set_everyFrame_29(bool value)
	{
		___everyFrame_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
