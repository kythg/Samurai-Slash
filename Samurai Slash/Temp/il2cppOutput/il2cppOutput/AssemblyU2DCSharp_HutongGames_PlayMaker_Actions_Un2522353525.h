#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Un3159243156.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.UnloadSceneAsynch
struct  UnloadSceneAsynch_t2522353525  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.UnloadSceneAsynch/SceneReferenceOptions HutongGames.PlayMaker.Actions.UnloadSceneAsynch::sceneReference
	int32_t ___sceneReference_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.UnloadSceneAsynch::sceneByName
	FsmString_t2414474701 * ___sceneByName_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.UnloadSceneAsynch::sceneAtBuildIndex
	FsmInt_t1273009179 * ___sceneAtBuildIndex_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.UnloadSceneAsynch::sceneAtIndex
	FsmInt_t1273009179 * ___sceneAtIndex_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.UnloadSceneAsynch::sceneByPath
	FsmString_t2414474701 * ___sceneByPath_15;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.UnloadSceneAsynch::sceneByGameObject
	FsmOwnerDefault_t2023674184 * ___sceneByGameObject_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.UnloadSceneAsynch::operationPriority
	FsmInt_t1273009179 * ___operationPriority_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.UnloadSceneAsynch::progress
	FsmFloat_t937133978 * ___progress_18;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.UnloadSceneAsynch::isDone
	FsmBool_t664485696 * ___isDone_19;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.UnloadSceneAsynch::doneEvent
	FsmEvent_t1258573736 * ___doneEvent_20;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.UnloadSceneAsynch::sceneNotFoundEvent
	FsmEvent_t1258573736 * ___sceneNotFoundEvent_21;
	// UnityEngine.AsyncOperation HutongGames.PlayMaker.Actions.UnloadSceneAsynch::_asyncOperation
	AsyncOperation_t3814632279 * ____asyncOperation_22;

public:
	inline static int32_t get_offset_of_sceneReference_11() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___sceneReference_11)); }
	inline int32_t get_sceneReference_11() const { return ___sceneReference_11; }
	inline int32_t* get_address_of_sceneReference_11() { return &___sceneReference_11; }
	inline void set_sceneReference_11(int32_t value)
	{
		___sceneReference_11 = value;
	}

	inline static int32_t get_offset_of_sceneByName_12() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___sceneByName_12)); }
	inline FsmString_t2414474701 * get_sceneByName_12() const { return ___sceneByName_12; }
	inline FsmString_t2414474701 ** get_address_of_sceneByName_12() { return &___sceneByName_12; }
	inline void set_sceneByName_12(FsmString_t2414474701 * value)
	{
		___sceneByName_12 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByName_12, value);
	}

	inline static int32_t get_offset_of_sceneAtBuildIndex_13() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___sceneAtBuildIndex_13)); }
	inline FsmInt_t1273009179 * get_sceneAtBuildIndex_13() const { return ___sceneAtBuildIndex_13; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtBuildIndex_13() { return &___sceneAtBuildIndex_13; }
	inline void set_sceneAtBuildIndex_13(FsmInt_t1273009179 * value)
	{
		___sceneAtBuildIndex_13 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtBuildIndex_13, value);
	}

	inline static int32_t get_offset_of_sceneAtIndex_14() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___sceneAtIndex_14)); }
	inline FsmInt_t1273009179 * get_sceneAtIndex_14() const { return ___sceneAtIndex_14; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtIndex_14() { return &___sceneAtIndex_14; }
	inline void set_sceneAtIndex_14(FsmInt_t1273009179 * value)
	{
		___sceneAtIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtIndex_14, value);
	}

	inline static int32_t get_offset_of_sceneByPath_15() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___sceneByPath_15)); }
	inline FsmString_t2414474701 * get_sceneByPath_15() const { return ___sceneByPath_15; }
	inline FsmString_t2414474701 ** get_address_of_sceneByPath_15() { return &___sceneByPath_15; }
	inline void set_sceneByPath_15(FsmString_t2414474701 * value)
	{
		___sceneByPath_15 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByPath_15, value);
	}

	inline static int32_t get_offset_of_sceneByGameObject_16() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___sceneByGameObject_16)); }
	inline FsmOwnerDefault_t2023674184 * get_sceneByGameObject_16() const { return ___sceneByGameObject_16; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_sceneByGameObject_16() { return &___sceneByGameObject_16; }
	inline void set_sceneByGameObject_16(FsmOwnerDefault_t2023674184 * value)
	{
		___sceneByGameObject_16 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByGameObject_16, value);
	}

	inline static int32_t get_offset_of_operationPriority_17() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___operationPriority_17)); }
	inline FsmInt_t1273009179 * get_operationPriority_17() const { return ___operationPriority_17; }
	inline FsmInt_t1273009179 ** get_address_of_operationPriority_17() { return &___operationPriority_17; }
	inline void set_operationPriority_17(FsmInt_t1273009179 * value)
	{
		___operationPriority_17 = value;
		Il2CppCodeGenWriteBarrier(&___operationPriority_17, value);
	}

	inline static int32_t get_offset_of_progress_18() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___progress_18)); }
	inline FsmFloat_t937133978 * get_progress_18() const { return ___progress_18; }
	inline FsmFloat_t937133978 ** get_address_of_progress_18() { return &___progress_18; }
	inline void set_progress_18(FsmFloat_t937133978 * value)
	{
		___progress_18 = value;
		Il2CppCodeGenWriteBarrier(&___progress_18, value);
	}

	inline static int32_t get_offset_of_isDone_19() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___isDone_19)); }
	inline FsmBool_t664485696 * get_isDone_19() const { return ___isDone_19; }
	inline FsmBool_t664485696 ** get_address_of_isDone_19() { return &___isDone_19; }
	inline void set_isDone_19(FsmBool_t664485696 * value)
	{
		___isDone_19 = value;
		Il2CppCodeGenWriteBarrier(&___isDone_19, value);
	}

	inline static int32_t get_offset_of_doneEvent_20() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___doneEvent_20)); }
	inline FsmEvent_t1258573736 * get_doneEvent_20() const { return ___doneEvent_20; }
	inline FsmEvent_t1258573736 ** get_address_of_doneEvent_20() { return &___doneEvent_20; }
	inline void set_doneEvent_20(FsmEvent_t1258573736 * value)
	{
		___doneEvent_20 = value;
		Il2CppCodeGenWriteBarrier(&___doneEvent_20, value);
	}

	inline static int32_t get_offset_of_sceneNotFoundEvent_21() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ___sceneNotFoundEvent_21)); }
	inline FsmEvent_t1258573736 * get_sceneNotFoundEvent_21() const { return ___sceneNotFoundEvent_21; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneNotFoundEvent_21() { return &___sceneNotFoundEvent_21; }
	inline void set_sceneNotFoundEvent_21(FsmEvent_t1258573736 * value)
	{
		___sceneNotFoundEvent_21 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNotFoundEvent_21, value);
	}

	inline static int32_t get_offset_of__asyncOperation_22() { return static_cast<int32_t>(offsetof(UnloadSceneAsynch_t2522353525, ____asyncOperation_22)); }
	inline AsyncOperation_t3814632279 * get__asyncOperation_22() const { return ____asyncOperation_22; }
	inline AsyncOperation_t3814632279 ** get_address_of__asyncOperation_22() { return &____asyncOperation_22; }
	inline void set__asyncOperation_22(AsyncOperation_t3814632279 * value)
	{
		____asyncOperation_22 = value;
		Il2CppCodeGenWriteBarrier(&____asyncOperation_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
