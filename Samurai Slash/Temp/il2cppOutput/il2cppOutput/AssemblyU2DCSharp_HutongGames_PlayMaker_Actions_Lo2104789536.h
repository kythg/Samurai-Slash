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

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.AsyncOperation>
struct Dictionary_2_t2822457914;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.LoadSceneAsynch
struct  LoadSceneAsynch_t2104789536  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneSimpleReferenceOptions HutongGames.PlayMaker.Actions.LoadSceneAsynch::sceneReference
	int32_t ___sceneReference_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.LoadSceneAsynch::sceneByName
	FsmString_t2414474701 * ___sceneByName_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.LoadSceneAsynch::sceneAtIndex
	FsmInt_t1273009179 * ___sceneAtIndex_13;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.LoadSceneAsynch::loadSceneMode
	FsmEnum_t2808516103 * ___loadSceneMode_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LoadSceneAsynch::allowSceneActivation
	FsmBool_t664485696 * ___allowSceneActivation_15;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.LoadSceneAsynch::operationPriority
	FsmInt_t1273009179 * ___operationPriority_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.LoadSceneAsynch::aSyncOperationHashCode
	FsmInt_t1273009179 * ___aSyncOperationHashCode_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.LoadSceneAsynch::progress
	FsmFloat_t937133978 * ___progress_18;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LoadSceneAsynch::isDone
	FsmBool_t664485696 * ___isDone_19;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LoadSceneAsynch::pendingActivation
	FsmBool_t664485696 * ___pendingActivation_20;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadSceneAsynch::doneEvent
	FsmEvent_t1258573736 * ___doneEvent_21;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadSceneAsynch::pendingActivationEvent
	FsmEvent_t1258573736 * ___pendingActivationEvent_22;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadSceneAsynch::sceneNotFoundEvent
	FsmEvent_t1258573736 * ___sceneNotFoundEvent_23;
	// UnityEngine.AsyncOperation HutongGames.PlayMaker.Actions.LoadSceneAsynch::_asyncOperation
	AsyncOperation_t3814632279 * ____asyncOperation_24;
	// System.Int32 HutongGames.PlayMaker.Actions.LoadSceneAsynch::_asynchOperationUid
	int32_t ____asynchOperationUid_25;
	// System.Boolean HutongGames.PlayMaker.Actions.LoadSceneAsynch::pendingActivationCallBackDone
	bool ___pendingActivationCallBackDone_26;

public:
	inline static int32_t get_offset_of_sceneReference_11() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___sceneReference_11)); }
	inline int32_t get_sceneReference_11() const { return ___sceneReference_11; }
	inline int32_t* get_address_of_sceneReference_11() { return &___sceneReference_11; }
	inline void set_sceneReference_11(int32_t value)
	{
		___sceneReference_11 = value;
	}

	inline static int32_t get_offset_of_sceneByName_12() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___sceneByName_12)); }
	inline FsmString_t2414474701 * get_sceneByName_12() const { return ___sceneByName_12; }
	inline FsmString_t2414474701 ** get_address_of_sceneByName_12() { return &___sceneByName_12; }
	inline void set_sceneByName_12(FsmString_t2414474701 * value)
	{
		___sceneByName_12 = value;
		Il2CppCodeGenWriteBarrier(&___sceneByName_12, value);
	}

	inline static int32_t get_offset_of_sceneAtIndex_13() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___sceneAtIndex_13)); }
	inline FsmInt_t1273009179 * get_sceneAtIndex_13() const { return ___sceneAtIndex_13; }
	inline FsmInt_t1273009179 ** get_address_of_sceneAtIndex_13() { return &___sceneAtIndex_13; }
	inline void set_sceneAtIndex_13(FsmInt_t1273009179 * value)
	{
		___sceneAtIndex_13 = value;
		Il2CppCodeGenWriteBarrier(&___sceneAtIndex_13, value);
	}

	inline static int32_t get_offset_of_loadSceneMode_14() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___loadSceneMode_14)); }
	inline FsmEnum_t2808516103 * get_loadSceneMode_14() const { return ___loadSceneMode_14; }
	inline FsmEnum_t2808516103 ** get_address_of_loadSceneMode_14() { return &___loadSceneMode_14; }
	inline void set_loadSceneMode_14(FsmEnum_t2808516103 * value)
	{
		___loadSceneMode_14 = value;
		Il2CppCodeGenWriteBarrier(&___loadSceneMode_14, value);
	}

	inline static int32_t get_offset_of_allowSceneActivation_15() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___allowSceneActivation_15)); }
	inline FsmBool_t664485696 * get_allowSceneActivation_15() const { return ___allowSceneActivation_15; }
	inline FsmBool_t664485696 ** get_address_of_allowSceneActivation_15() { return &___allowSceneActivation_15; }
	inline void set_allowSceneActivation_15(FsmBool_t664485696 * value)
	{
		___allowSceneActivation_15 = value;
		Il2CppCodeGenWriteBarrier(&___allowSceneActivation_15, value);
	}

	inline static int32_t get_offset_of_operationPriority_16() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___operationPriority_16)); }
	inline FsmInt_t1273009179 * get_operationPriority_16() const { return ___operationPriority_16; }
	inline FsmInt_t1273009179 ** get_address_of_operationPriority_16() { return &___operationPriority_16; }
	inline void set_operationPriority_16(FsmInt_t1273009179 * value)
	{
		___operationPriority_16 = value;
		Il2CppCodeGenWriteBarrier(&___operationPriority_16, value);
	}

	inline static int32_t get_offset_of_aSyncOperationHashCode_17() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___aSyncOperationHashCode_17)); }
	inline FsmInt_t1273009179 * get_aSyncOperationHashCode_17() const { return ___aSyncOperationHashCode_17; }
	inline FsmInt_t1273009179 ** get_address_of_aSyncOperationHashCode_17() { return &___aSyncOperationHashCode_17; }
	inline void set_aSyncOperationHashCode_17(FsmInt_t1273009179 * value)
	{
		___aSyncOperationHashCode_17 = value;
		Il2CppCodeGenWriteBarrier(&___aSyncOperationHashCode_17, value);
	}

	inline static int32_t get_offset_of_progress_18() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___progress_18)); }
	inline FsmFloat_t937133978 * get_progress_18() const { return ___progress_18; }
	inline FsmFloat_t937133978 ** get_address_of_progress_18() { return &___progress_18; }
	inline void set_progress_18(FsmFloat_t937133978 * value)
	{
		___progress_18 = value;
		Il2CppCodeGenWriteBarrier(&___progress_18, value);
	}

	inline static int32_t get_offset_of_isDone_19() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___isDone_19)); }
	inline FsmBool_t664485696 * get_isDone_19() const { return ___isDone_19; }
	inline FsmBool_t664485696 ** get_address_of_isDone_19() { return &___isDone_19; }
	inline void set_isDone_19(FsmBool_t664485696 * value)
	{
		___isDone_19 = value;
		Il2CppCodeGenWriteBarrier(&___isDone_19, value);
	}

	inline static int32_t get_offset_of_pendingActivation_20() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___pendingActivation_20)); }
	inline FsmBool_t664485696 * get_pendingActivation_20() const { return ___pendingActivation_20; }
	inline FsmBool_t664485696 ** get_address_of_pendingActivation_20() { return &___pendingActivation_20; }
	inline void set_pendingActivation_20(FsmBool_t664485696 * value)
	{
		___pendingActivation_20 = value;
		Il2CppCodeGenWriteBarrier(&___pendingActivation_20, value);
	}

	inline static int32_t get_offset_of_doneEvent_21() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___doneEvent_21)); }
	inline FsmEvent_t1258573736 * get_doneEvent_21() const { return ___doneEvent_21; }
	inline FsmEvent_t1258573736 ** get_address_of_doneEvent_21() { return &___doneEvent_21; }
	inline void set_doneEvent_21(FsmEvent_t1258573736 * value)
	{
		___doneEvent_21 = value;
		Il2CppCodeGenWriteBarrier(&___doneEvent_21, value);
	}

	inline static int32_t get_offset_of_pendingActivationEvent_22() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___pendingActivationEvent_22)); }
	inline FsmEvent_t1258573736 * get_pendingActivationEvent_22() const { return ___pendingActivationEvent_22; }
	inline FsmEvent_t1258573736 ** get_address_of_pendingActivationEvent_22() { return &___pendingActivationEvent_22; }
	inline void set_pendingActivationEvent_22(FsmEvent_t1258573736 * value)
	{
		___pendingActivationEvent_22 = value;
		Il2CppCodeGenWriteBarrier(&___pendingActivationEvent_22, value);
	}

	inline static int32_t get_offset_of_sceneNotFoundEvent_23() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___sceneNotFoundEvent_23)); }
	inline FsmEvent_t1258573736 * get_sceneNotFoundEvent_23() const { return ___sceneNotFoundEvent_23; }
	inline FsmEvent_t1258573736 ** get_address_of_sceneNotFoundEvent_23() { return &___sceneNotFoundEvent_23; }
	inline void set_sceneNotFoundEvent_23(FsmEvent_t1258573736 * value)
	{
		___sceneNotFoundEvent_23 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNotFoundEvent_23, value);
	}

	inline static int32_t get_offset_of__asyncOperation_24() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ____asyncOperation_24)); }
	inline AsyncOperation_t3814632279 * get__asyncOperation_24() const { return ____asyncOperation_24; }
	inline AsyncOperation_t3814632279 ** get_address_of__asyncOperation_24() { return &____asyncOperation_24; }
	inline void set__asyncOperation_24(AsyncOperation_t3814632279 * value)
	{
		____asyncOperation_24 = value;
		Il2CppCodeGenWriteBarrier(&____asyncOperation_24, value);
	}

	inline static int32_t get_offset_of__asynchOperationUid_25() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ____asynchOperationUid_25)); }
	inline int32_t get__asynchOperationUid_25() const { return ____asynchOperationUid_25; }
	inline int32_t* get_address_of__asynchOperationUid_25() { return &____asynchOperationUid_25; }
	inline void set__asynchOperationUid_25(int32_t value)
	{
		____asynchOperationUid_25 = value;
	}

	inline static int32_t get_offset_of_pendingActivationCallBackDone_26() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536, ___pendingActivationCallBackDone_26)); }
	inline bool get_pendingActivationCallBackDone_26() const { return ___pendingActivationCallBackDone_26; }
	inline bool* get_address_of_pendingActivationCallBackDone_26() { return &___pendingActivationCallBackDone_26; }
	inline void set_pendingActivationCallBackDone_26(bool value)
	{
		___pendingActivationCallBackDone_26 = value;
	}
};

struct LoadSceneAsynch_t2104789536_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.AsyncOperation> HutongGames.PlayMaker.Actions.LoadSceneAsynch::aSyncOperationLUT
	Dictionary_2_t2822457914 * ___aSyncOperationLUT_27;
	// System.Int32 HutongGames.PlayMaker.Actions.LoadSceneAsynch::aSynchUidCounter
	int32_t ___aSynchUidCounter_28;

public:
	inline static int32_t get_offset_of_aSyncOperationLUT_27() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536_StaticFields, ___aSyncOperationLUT_27)); }
	inline Dictionary_2_t2822457914 * get_aSyncOperationLUT_27() const { return ___aSyncOperationLUT_27; }
	inline Dictionary_2_t2822457914 ** get_address_of_aSyncOperationLUT_27() { return &___aSyncOperationLUT_27; }
	inline void set_aSyncOperationLUT_27(Dictionary_2_t2822457914 * value)
	{
		___aSyncOperationLUT_27 = value;
		Il2CppCodeGenWriteBarrier(&___aSyncOperationLUT_27, value);
	}

	inline static int32_t get_offset_of_aSynchUidCounter_28() { return static_cast<int32_t>(offsetof(LoadSceneAsynch_t2104789536_StaticFields, ___aSynchUidCounter_28)); }
	inline int32_t get_aSynchUidCounter_28() const { return ___aSynchUidCounter_28; }
	inline int32_t* get_address_of_aSynchUidCounter_28() { return &___aSynchUidCounter_28; }
	inline void set_aSynchUidCounter_28(int32_t value)
	{
		___aSynchUidCounter_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
