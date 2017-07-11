#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmVar[]
struct FsmVarU5BU5D_t16885852;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CallMethod
struct  CallMethod_t2249460863  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.CallMethod::behaviour
	FsmObject_t2785794313 * ___behaviour_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.CallMethod::methodName
	FsmString_t2414474701 * ___methodName_12;
	// HutongGames.PlayMaker.FsmVar[] HutongGames.PlayMaker.Actions.CallMethod::parameters
	FsmVarU5BU5D_t16885852* ___parameters_13;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.CallMethod::storeResult
	FsmVar_t2872592513 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.CallMethod::everyFrame
	bool ___everyFrame_15;
	// System.Boolean HutongGames.PlayMaker.Actions.CallMethod::manualUI
	bool ___manualUI_16;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.CallMethod::cachedBehaviour
	FsmObject_t2785794313 * ___cachedBehaviour_17;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.CallMethod::cachedMethodName
	FsmString_t2414474701 * ___cachedMethodName_18;
	// System.Type HutongGames.PlayMaker.Actions.CallMethod::cachedType
	Type_t * ___cachedType_19;
	// System.Reflection.MethodInfo HutongGames.PlayMaker.Actions.CallMethod::cachedMethodInfo
	MethodInfo_t * ___cachedMethodInfo_20;
	// System.Reflection.ParameterInfo[] HutongGames.PlayMaker.Actions.CallMethod::cachedParameterInfo
	ParameterInfoU5BU5D_t2275869610* ___cachedParameterInfo_21;
	// System.Object[] HutongGames.PlayMaker.Actions.CallMethod::parametersArray
	ObjectU5BU5D_t3614634134* ___parametersArray_22;
	// System.String HutongGames.PlayMaker.Actions.CallMethod::errorString
	String_t* ___errorString_23;

public:
	inline static int32_t get_offset_of_behaviour_11() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___behaviour_11)); }
	inline FsmObject_t2785794313 * get_behaviour_11() const { return ___behaviour_11; }
	inline FsmObject_t2785794313 ** get_address_of_behaviour_11() { return &___behaviour_11; }
	inline void set_behaviour_11(FsmObject_t2785794313 * value)
	{
		___behaviour_11 = value;
		Il2CppCodeGenWriteBarrier(&___behaviour_11, value);
	}

	inline static int32_t get_offset_of_methodName_12() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___methodName_12)); }
	inline FsmString_t2414474701 * get_methodName_12() const { return ___methodName_12; }
	inline FsmString_t2414474701 ** get_address_of_methodName_12() { return &___methodName_12; }
	inline void set_methodName_12(FsmString_t2414474701 * value)
	{
		___methodName_12 = value;
		Il2CppCodeGenWriteBarrier(&___methodName_12, value);
	}

	inline static int32_t get_offset_of_parameters_13() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___parameters_13)); }
	inline FsmVarU5BU5D_t16885852* get_parameters_13() const { return ___parameters_13; }
	inline FsmVarU5BU5D_t16885852** get_address_of_parameters_13() { return &___parameters_13; }
	inline void set_parameters_13(FsmVarU5BU5D_t16885852* value)
	{
		___parameters_13 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___storeResult_14)); }
	inline FsmVar_t2872592513 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmVar_t2872592513 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmVar_t2872592513 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_manualUI_16() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___manualUI_16)); }
	inline bool get_manualUI_16() const { return ___manualUI_16; }
	inline bool* get_address_of_manualUI_16() { return &___manualUI_16; }
	inline void set_manualUI_16(bool value)
	{
		___manualUI_16 = value;
	}

	inline static int32_t get_offset_of_cachedBehaviour_17() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___cachedBehaviour_17)); }
	inline FsmObject_t2785794313 * get_cachedBehaviour_17() const { return ___cachedBehaviour_17; }
	inline FsmObject_t2785794313 ** get_address_of_cachedBehaviour_17() { return &___cachedBehaviour_17; }
	inline void set_cachedBehaviour_17(FsmObject_t2785794313 * value)
	{
		___cachedBehaviour_17 = value;
		Il2CppCodeGenWriteBarrier(&___cachedBehaviour_17, value);
	}

	inline static int32_t get_offset_of_cachedMethodName_18() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___cachedMethodName_18)); }
	inline FsmString_t2414474701 * get_cachedMethodName_18() const { return ___cachedMethodName_18; }
	inline FsmString_t2414474701 ** get_address_of_cachedMethodName_18() { return &___cachedMethodName_18; }
	inline void set_cachedMethodName_18(FsmString_t2414474701 * value)
	{
		___cachedMethodName_18 = value;
		Il2CppCodeGenWriteBarrier(&___cachedMethodName_18, value);
	}

	inline static int32_t get_offset_of_cachedType_19() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___cachedType_19)); }
	inline Type_t * get_cachedType_19() const { return ___cachedType_19; }
	inline Type_t ** get_address_of_cachedType_19() { return &___cachedType_19; }
	inline void set_cachedType_19(Type_t * value)
	{
		___cachedType_19 = value;
		Il2CppCodeGenWriteBarrier(&___cachedType_19, value);
	}

	inline static int32_t get_offset_of_cachedMethodInfo_20() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___cachedMethodInfo_20)); }
	inline MethodInfo_t * get_cachedMethodInfo_20() const { return ___cachedMethodInfo_20; }
	inline MethodInfo_t ** get_address_of_cachedMethodInfo_20() { return &___cachedMethodInfo_20; }
	inline void set_cachedMethodInfo_20(MethodInfo_t * value)
	{
		___cachedMethodInfo_20 = value;
		Il2CppCodeGenWriteBarrier(&___cachedMethodInfo_20, value);
	}

	inline static int32_t get_offset_of_cachedParameterInfo_21() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___cachedParameterInfo_21)); }
	inline ParameterInfoU5BU5D_t2275869610* get_cachedParameterInfo_21() const { return ___cachedParameterInfo_21; }
	inline ParameterInfoU5BU5D_t2275869610** get_address_of_cachedParameterInfo_21() { return &___cachedParameterInfo_21; }
	inline void set_cachedParameterInfo_21(ParameterInfoU5BU5D_t2275869610* value)
	{
		___cachedParameterInfo_21 = value;
		Il2CppCodeGenWriteBarrier(&___cachedParameterInfo_21, value);
	}

	inline static int32_t get_offset_of_parametersArray_22() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___parametersArray_22)); }
	inline ObjectU5BU5D_t3614634134* get_parametersArray_22() const { return ___parametersArray_22; }
	inline ObjectU5BU5D_t3614634134** get_address_of_parametersArray_22() { return &___parametersArray_22; }
	inline void set_parametersArray_22(ObjectU5BU5D_t3614634134* value)
	{
		___parametersArray_22 = value;
		Il2CppCodeGenWriteBarrier(&___parametersArray_22, value);
	}

	inline static int32_t get_offset_of_errorString_23() { return static_cast<int32_t>(offsetof(CallMethod_t2249460863, ___errorString_23)); }
	inline String_t* get_errorString_23() const { return ___errorString_23; }
	inline String_t** get_address_of_errorString_23() { return &___errorString_23; }
	inline void set_errorString_23(String_t* value)
	{
		___errorString_23 = value;
		Il2CppCodeGenWriteBarrier(&___errorString_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
