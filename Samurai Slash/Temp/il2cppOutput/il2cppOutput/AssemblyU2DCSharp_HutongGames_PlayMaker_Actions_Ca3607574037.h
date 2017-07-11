#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmVar[]
struct FsmVarU5BU5D_t16885852;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Object[]
struct ObjectU5BU5D_t3614634134;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CallStaticMethod
struct  CallStaticMethod_t3607574037  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.CallStaticMethod::className
	FsmString_t2414474701 * ___className_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.CallStaticMethod::methodName
	FsmString_t2414474701 * ___methodName_12;
	// HutongGames.PlayMaker.FsmVar[] HutongGames.PlayMaker.Actions.CallStaticMethod::parameters
	FsmVarU5BU5D_t16885852* ___parameters_13;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.CallStaticMethod::storeResult
	FsmVar_t2872592513 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.CallStaticMethod::everyFrame
	bool ___everyFrame_15;
	// System.Type HutongGames.PlayMaker.Actions.CallStaticMethod::cachedType
	Type_t * ___cachedType_16;
	// System.String HutongGames.PlayMaker.Actions.CallStaticMethod::cachedClassName
	String_t* ___cachedClassName_17;
	// System.String HutongGames.PlayMaker.Actions.CallStaticMethod::cachedMethodName
	String_t* ___cachedMethodName_18;
	// System.Reflection.MethodInfo HutongGames.PlayMaker.Actions.CallStaticMethod::cachedMethodInfo
	MethodInfo_t * ___cachedMethodInfo_19;
	// System.Reflection.ParameterInfo[] HutongGames.PlayMaker.Actions.CallStaticMethod::cachedParameterInfo
	ParameterInfoU5BU5D_t2275869610* ___cachedParameterInfo_20;
	// System.Object[] HutongGames.PlayMaker.Actions.CallStaticMethod::parametersArray
	ObjectU5BU5D_t3614634134* ___parametersArray_21;
	// System.String HutongGames.PlayMaker.Actions.CallStaticMethod::errorString
	String_t* ___errorString_22;

public:
	inline static int32_t get_offset_of_className_11() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___className_11)); }
	inline FsmString_t2414474701 * get_className_11() const { return ___className_11; }
	inline FsmString_t2414474701 ** get_address_of_className_11() { return &___className_11; }
	inline void set_className_11(FsmString_t2414474701 * value)
	{
		___className_11 = value;
		Il2CppCodeGenWriteBarrier(&___className_11, value);
	}

	inline static int32_t get_offset_of_methodName_12() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___methodName_12)); }
	inline FsmString_t2414474701 * get_methodName_12() const { return ___methodName_12; }
	inline FsmString_t2414474701 ** get_address_of_methodName_12() { return &___methodName_12; }
	inline void set_methodName_12(FsmString_t2414474701 * value)
	{
		___methodName_12 = value;
		Il2CppCodeGenWriteBarrier(&___methodName_12, value);
	}

	inline static int32_t get_offset_of_parameters_13() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___parameters_13)); }
	inline FsmVarU5BU5D_t16885852* get_parameters_13() const { return ___parameters_13; }
	inline FsmVarU5BU5D_t16885852** get_address_of_parameters_13() { return &___parameters_13; }
	inline void set_parameters_13(FsmVarU5BU5D_t16885852* value)
	{
		___parameters_13 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___storeResult_14)); }
	inline FsmVar_t2872592513 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmVar_t2872592513 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmVar_t2872592513 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_cachedType_16() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___cachedType_16)); }
	inline Type_t * get_cachedType_16() const { return ___cachedType_16; }
	inline Type_t ** get_address_of_cachedType_16() { return &___cachedType_16; }
	inline void set_cachedType_16(Type_t * value)
	{
		___cachedType_16 = value;
		Il2CppCodeGenWriteBarrier(&___cachedType_16, value);
	}

	inline static int32_t get_offset_of_cachedClassName_17() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___cachedClassName_17)); }
	inline String_t* get_cachedClassName_17() const { return ___cachedClassName_17; }
	inline String_t** get_address_of_cachedClassName_17() { return &___cachedClassName_17; }
	inline void set_cachedClassName_17(String_t* value)
	{
		___cachedClassName_17 = value;
		Il2CppCodeGenWriteBarrier(&___cachedClassName_17, value);
	}

	inline static int32_t get_offset_of_cachedMethodName_18() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___cachedMethodName_18)); }
	inline String_t* get_cachedMethodName_18() const { return ___cachedMethodName_18; }
	inline String_t** get_address_of_cachedMethodName_18() { return &___cachedMethodName_18; }
	inline void set_cachedMethodName_18(String_t* value)
	{
		___cachedMethodName_18 = value;
		Il2CppCodeGenWriteBarrier(&___cachedMethodName_18, value);
	}

	inline static int32_t get_offset_of_cachedMethodInfo_19() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___cachedMethodInfo_19)); }
	inline MethodInfo_t * get_cachedMethodInfo_19() const { return ___cachedMethodInfo_19; }
	inline MethodInfo_t ** get_address_of_cachedMethodInfo_19() { return &___cachedMethodInfo_19; }
	inline void set_cachedMethodInfo_19(MethodInfo_t * value)
	{
		___cachedMethodInfo_19 = value;
		Il2CppCodeGenWriteBarrier(&___cachedMethodInfo_19, value);
	}

	inline static int32_t get_offset_of_cachedParameterInfo_20() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___cachedParameterInfo_20)); }
	inline ParameterInfoU5BU5D_t2275869610* get_cachedParameterInfo_20() const { return ___cachedParameterInfo_20; }
	inline ParameterInfoU5BU5D_t2275869610** get_address_of_cachedParameterInfo_20() { return &___cachedParameterInfo_20; }
	inline void set_cachedParameterInfo_20(ParameterInfoU5BU5D_t2275869610* value)
	{
		___cachedParameterInfo_20 = value;
		Il2CppCodeGenWriteBarrier(&___cachedParameterInfo_20, value);
	}

	inline static int32_t get_offset_of_parametersArray_21() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___parametersArray_21)); }
	inline ObjectU5BU5D_t3614634134* get_parametersArray_21() const { return ___parametersArray_21; }
	inline ObjectU5BU5D_t3614634134** get_address_of_parametersArray_21() { return &___parametersArray_21; }
	inline void set_parametersArray_21(ObjectU5BU5D_t3614634134* value)
	{
		___parametersArray_21 = value;
		Il2CppCodeGenWriteBarrier(&___parametersArray_21, value);
	}

	inline static int32_t get_offset_of_errorString_22() { return static_cast<int32_t>(offsetof(CallStaticMethod_t3607574037, ___errorString_22)); }
	inline String_t* get_errorString_22() const { return ___errorString_22; }
	inline String_t** get_address_of_errorString_22() { return &___errorString_22; }
	inline void set_errorString_22(String_t* value)
	{
		___errorString_22 = value;
		Il2CppCodeGenWriteBarrier(&___errorString_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
