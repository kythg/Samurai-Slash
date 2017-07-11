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

// HutongGames.PlayMaker.Actions.MergeScenes
struct  MergeScenes_t656291273  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneAllReferenceOptions HutongGames.PlayMaker.Actions.MergeScenes::sourceReference
	int32_t ___sourceReference_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.MergeScenes::sourceAtIndex
	FsmInt_t1273009179 * ___sourceAtIndex_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.MergeScenes::sourceByName
	FsmString_t2414474701 * ___sourceByName_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.MergeScenes::sourceByPath
	FsmString_t2414474701 * ___sourceByPath_14;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MergeScenes::sourceByGameObject
	FsmOwnerDefault_t2023674184 * ___sourceByGameObject_15;
	// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneAllReferenceOptions HutongGames.PlayMaker.Actions.MergeScenes::destinationReference
	int32_t ___destinationReference_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.MergeScenes::destinationAtIndex
	FsmInt_t1273009179 * ___destinationAtIndex_17;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.MergeScenes::destinationByName
	FsmString_t2414474701 * ___destinationByName_18;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.MergeScenes::destinationByPath
	FsmString_t2414474701 * ___destinationByPath_19;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MergeScenes::destinationByGameObject
	FsmOwnerDefault_t2023674184 * ___destinationByGameObject_20;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MergeScenes::success
	FsmBool_t664485696 * ___success_21;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MergeScenes::successEvent
	FsmEvent_t1258573736 * ___successEvent_22;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MergeScenes::failureEvent
	FsmEvent_t1258573736 * ___failureEvent_23;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.MergeScenes::_sourceScene
	Scene_t1684909666  ____sourceScene_24;
	// System.Boolean HutongGames.PlayMaker.Actions.MergeScenes::_sourceFound
	bool ____sourceFound_25;
	// UnityEngine.SceneManagement.Scene HutongGames.PlayMaker.Actions.MergeScenes::_destinationScene
	Scene_t1684909666  ____destinationScene_26;
	// System.Boolean HutongGames.PlayMaker.Actions.MergeScenes::_destinationFound
	bool ____destinationFound_27;

public:
	inline static int32_t get_offset_of_sourceReference_11() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___sourceReference_11)); }
	inline int32_t get_sourceReference_11() const { return ___sourceReference_11; }
	inline int32_t* get_address_of_sourceReference_11() { return &___sourceReference_11; }
	inline void set_sourceReference_11(int32_t value)
	{
		___sourceReference_11 = value;
	}

	inline static int32_t get_offset_of_sourceAtIndex_12() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___sourceAtIndex_12)); }
	inline FsmInt_t1273009179 * get_sourceAtIndex_12() const { return ___sourceAtIndex_12; }
	inline FsmInt_t1273009179 ** get_address_of_sourceAtIndex_12() { return &___sourceAtIndex_12; }
	inline void set_sourceAtIndex_12(FsmInt_t1273009179 * value)
	{
		___sourceAtIndex_12 = value;
		Il2CppCodeGenWriteBarrier(&___sourceAtIndex_12, value);
	}

	inline static int32_t get_offset_of_sourceByName_13() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___sourceByName_13)); }
	inline FsmString_t2414474701 * get_sourceByName_13() const { return ___sourceByName_13; }
	inline FsmString_t2414474701 ** get_address_of_sourceByName_13() { return &___sourceByName_13; }
	inline void set_sourceByName_13(FsmString_t2414474701 * value)
	{
		___sourceByName_13 = value;
		Il2CppCodeGenWriteBarrier(&___sourceByName_13, value);
	}

	inline static int32_t get_offset_of_sourceByPath_14() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___sourceByPath_14)); }
	inline FsmString_t2414474701 * get_sourceByPath_14() const { return ___sourceByPath_14; }
	inline FsmString_t2414474701 ** get_address_of_sourceByPath_14() { return &___sourceByPath_14; }
	inline void set_sourceByPath_14(FsmString_t2414474701 * value)
	{
		___sourceByPath_14 = value;
		Il2CppCodeGenWriteBarrier(&___sourceByPath_14, value);
	}

	inline static int32_t get_offset_of_sourceByGameObject_15() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___sourceByGameObject_15)); }
	inline FsmOwnerDefault_t2023674184 * get_sourceByGameObject_15() const { return ___sourceByGameObject_15; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_sourceByGameObject_15() { return &___sourceByGameObject_15; }
	inline void set_sourceByGameObject_15(FsmOwnerDefault_t2023674184 * value)
	{
		___sourceByGameObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___sourceByGameObject_15, value);
	}

	inline static int32_t get_offset_of_destinationReference_16() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___destinationReference_16)); }
	inline int32_t get_destinationReference_16() const { return ___destinationReference_16; }
	inline int32_t* get_address_of_destinationReference_16() { return &___destinationReference_16; }
	inline void set_destinationReference_16(int32_t value)
	{
		___destinationReference_16 = value;
	}

	inline static int32_t get_offset_of_destinationAtIndex_17() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___destinationAtIndex_17)); }
	inline FsmInt_t1273009179 * get_destinationAtIndex_17() const { return ___destinationAtIndex_17; }
	inline FsmInt_t1273009179 ** get_address_of_destinationAtIndex_17() { return &___destinationAtIndex_17; }
	inline void set_destinationAtIndex_17(FsmInt_t1273009179 * value)
	{
		___destinationAtIndex_17 = value;
		Il2CppCodeGenWriteBarrier(&___destinationAtIndex_17, value);
	}

	inline static int32_t get_offset_of_destinationByName_18() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___destinationByName_18)); }
	inline FsmString_t2414474701 * get_destinationByName_18() const { return ___destinationByName_18; }
	inline FsmString_t2414474701 ** get_address_of_destinationByName_18() { return &___destinationByName_18; }
	inline void set_destinationByName_18(FsmString_t2414474701 * value)
	{
		___destinationByName_18 = value;
		Il2CppCodeGenWriteBarrier(&___destinationByName_18, value);
	}

	inline static int32_t get_offset_of_destinationByPath_19() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___destinationByPath_19)); }
	inline FsmString_t2414474701 * get_destinationByPath_19() const { return ___destinationByPath_19; }
	inline FsmString_t2414474701 ** get_address_of_destinationByPath_19() { return &___destinationByPath_19; }
	inline void set_destinationByPath_19(FsmString_t2414474701 * value)
	{
		___destinationByPath_19 = value;
		Il2CppCodeGenWriteBarrier(&___destinationByPath_19, value);
	}

	inline static int32_t get_offset_of_destinationByGameObject_20() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___destinationByGameObject_20)); }
	inline FsmOwnerDefault_t2023674184 * get_destinationByGameObject_20() const { return ___destinationByGameObject_20; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_destinationByGameObject_20() { return &___destinationByGameObject_20; }
	inline void set_destinationByGameObject_20(FsmOwnerDefault_t2023674184 * value)
	{
		___destinationByGameObject_20 = value;
		Il2CppCodeGenWriteBarrier(&___destinationByGameObject_20, value);
	}

	inline static int32_t get_offset_of_success_21() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___success_21)); }
	inline FsmBool_t664485696 * get_success_21() const { return ___success_21; }
	inline FsmBool_t664485696 ** get_address_of_success_21() { return &___success_21; }
	inline void set_success_21(FsmBool_t664485696 * value)
	{
		___success_21 = value;
		Il2CppCodeGenWriteBarrier(&___success_21, value);
	}

	inline static int32_t get_offset_of_successEvent_22() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___successEvent_22)); }
	inline FsmEvent_t1258573736 * get_successEvent_22() const { return ___successEvent_22; }
	inline FsmEvent_t1258573736 ** get_address_of_successEvent_22() { return &___successEvent_22; }
	inline void set_successEvent_22(FsmEvent_t1258573736 * value)
	{
		___successEvent_22 = value;
		Il2CppCodeGenWriteBarrier(&___successEvent_22, value);
	}

	inline static int32_t get_offset_of_failureEvent_23() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ___failureEvent_23)); }
	inline FsmEvent_t1258573736 * get_failureEvent_23() const { return ___failureEvent_23; }
	inline FsmEvent_t1258573736 ** get_address_of_failureEvent_23() { return &___failureEvent_23; }
	inline void set_failureEvent_23(FsmEvent_t1258573736 * value)
	{
		___failureEvent_23 = value;
		Il2CppCodeGenWriteBarrier(&___failureEvent_23, value);
	}

	inline static int32_t get_offset_of__sourceScene_24() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ____sourceScene_24)); }
	inline Scene_t1684909666  get__sourceScene_24() const { return ____sourceScene_24; }
	inline Scene_t1684909666 * get_address_of__sourceScene_24() { return &____sourceScene_24; }
	inline void set__sourceScene_24(Scene_t1684909666  value)
	{
		____sourceScene_24 = value;
	}

	inline static int32_t get_offset_of__sourceFound_25() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ____sourceFound_25)); }
	inline bool get__sourceFound_25() const { return ____sourceFound_25; }
	inline bool* get_address_of__sourceFound_25() { return &____sourceFound_25; }
	inline void set__sourceFound_25(bool value)
	{
		____sourceFound_25 = value;
	}

	inline static int32_t get_offset_of__destinationScene_26() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ____destinationScene_26)); }
	inline Scene_t1684909666  get__destinationScene_26() const { return ____destinationScene_26; }
	inline Scene_t1684909666 * get_address_of__destinationScene_26() { return &____destinationScene_26; }
	inline void set__destinationScene_26(Scene_t1684909666  value)
	{
		____destinationScene_26 = value;
	}

	inline static int32_t get_offset_of__destinationFound_27() { return static_cast<int32_t>(offsetof(MergeScenes_t656291273, ____destinationFound_27)); }
	inline bool get__destinationFound_27() const { return ____destinationFound_27; }
	inline bool* get_address_of__destinationFound_27() { return &____destinationFound_27; }
	inline void set__destinationFound_27(bool value)
	{
		____destinationFound_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
