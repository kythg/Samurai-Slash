#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;
// HutongGames.PlayMaker.NamedVariable
struct NamedVariable_t3026441313;
// HutongGames.PlayMaker.INamedVariable
struct INamedVariable_t4287019078;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetFsmVariable
struct  SetFsmVariable_t415399634  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetFsmVariable::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetFsmVariable::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetFsmVariable::variableName
	FsmString_t2414474701 * ___variableName_13;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.SetFsmVariable::setValue
	FsmVar_t2872592513 * ___setValue_14;
	// System.Boolean HutongGames.PlayMaker.Actions.SetFsmVariable::everyFrame
	bool ___everyFrame_15;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.SetFsmVariable::targetFsm
	PlayMakerFSM_t437737208 * ___targetFsm_16;
	// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.Actions.SetFsmVariable::targetVariable
	NamedVariable_t3026441313 * ___targetVariable_17;
	// HutongGames.PlayMaker.INamedVariable HutongGames.PlayMaker.Actions.SetFsmVariable::sourceVariable
	Il2CppObject * ___sourceVariable_18;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.SetFsmVariable::cachedGameObject
	GameObject_t1756533147 * ___cachedGameObject_19;
	// System.String HutongGames.PlayMaker.Actions.SetFsmVariable::cachedFsmName
	String_t* ___cachedFsmName_20;
	// System.String HutongGames.PlayMaker.Actions.SetFsmVariable::cachedVariableName
	String_t* ___cachedVariableName_21;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_variableName_13() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___variableName_13)); }
	inline FsmString_t2414474701 * get_variableName_13() const { return ___variableName_13; }
	inline FsmString_t2414474701 ** get_address_of_variableName_13() { return &___variableName_13; }
	inline void set_variableName_13(FsmString_t2414474701 * value)
	{
		___variableName_13 = value;
		Il2CppCodeGenWriteBarrier(&___variableName_13, value);
	}

	inline static int32_t get_offset_of_setValue_14() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___setValue_14)); }
	inline FsmVar_t2872592513 * get_setValue_14() const { return ___setValue_14; }
	inline FsmVar_t2872592513 ** get_address_of_setValue_14() { return &___setValue_14; }
	inline void set_setValue_14(FsmVar_t2872592513 * value)
	{
		___setValue_14 = value;
		Il2CppCodeGenWriteBarrier(&___setValue_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_targetFsm_16() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___targetFsm_16)); }
	inline PlayMakerFSM_t437737208 * get_targetFsm_16() const { return ___targetFsm_16; }
	inline PlayMakerFSM_t437737208 ** get_address_of_targetFsm_16() { return &___targetFsm_16; }
	inline void set_targetFsm_16(PlayMakerFSM_t437737208 * value)
	{
		___targetFsm_16 = value;
		Il2CppCodeGenWriteBarrier(&___targetFsm_16, value);
	}

	inline static int32_t get_offset_of_targetVariable_17() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___targetVariable_17)); }
	inline NamedVariable_t3026441313 * get_targetVariable_17() const { return ___targetVariable_17; }
	inline NamedVariable_t3026441313 ** get_address_of_targetVariable_17() { return &___targetVariable_17; }
	inline void set_targetVariable_17(NamedVariable_t3026441313 * value)
	{
		___targetVariable_17 = value;
		Il2CppCodeGenWriteBarrier(&___targetVariable_17, value);
	}

	inline static int32_t get_offset_of_sourceVariable_18() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___sourceVariable_18)); }
	inline Il2CppObject * get_sourceVariable_18() const { return ___sourceVariable_18; }
	inline Il2CppObject ** get_address_of_sourceVariable_18() { return &___sourceVariable_18; }
	inline void set_sourceVariable_18(Il2CppObject * value)
	{
		___sourceVariable_18 = value;
		Il2CppCodeGenWriteBarrier(&___sourceVariable_18, value);
	}

	inline static int32_t get_offset_of_cachedGameObject_19() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___cachedGameObject_19)); }
	inline GameObject_t1756533147 * get_cachedGameObject_19() const { return ___cachedGameObject_19; }
	inline GameObject_t1756533147 ** get_address_of_cachedGameObject_19() { return &___cachedGameObject_19; }
	inline void set_cachedGameObject_19(GameObject_t1756533147 * value)
	{
		___cachedGameObject_19 = value;
		Il2CppCodeGenWriteBarrier(&___cachedGameObject_19, value);
	}

	inline static int32_t get_offset_of_cachedFsmName_20() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___cachedFsmName_20)); }
	inline String_t* get_cachedFsmName_20() const { return ___cachedFsmName_20; }
	inline String_t** get_address_of_cachedFsmName_20() { return &___cachedFsmName_20; }
	inline void set_cachedFsmName_20(String_t* value)
	{
		___cachedFsmName_20 = value;
		Il2CppCodeGenWriteBarrier(&___cachedFsmName_20, value);
	}

	inline static int32_t get_offset_of_cachedVariableName_21() { return static_cast<int32_t>(offsetof(SetFsmVariable_t415399634, ___cachedVariableName_21)); }
	inline String_t* get_cachedVariableName_21() const { return ___cachedVariableName_21; }
	inline String_t** get_address_of_cachedVariableName_21() { return &___cachedVariableName_21; }
	inline void set_cachedVariableName_21(String_t* value)
	{
		___cachedVariableName_21 = value;
		Il2CppCodeGenWriteBarrier(&___cachedVariableName_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
