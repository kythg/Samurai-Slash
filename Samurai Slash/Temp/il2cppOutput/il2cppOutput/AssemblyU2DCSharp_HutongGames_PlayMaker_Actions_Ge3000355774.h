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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;
// HutongGames.PlayMaker.INamedVariable
struct INamedVariable_t4287019078;
// HutongGames.PlayMaker.NamedVariable
struct NamedVariable_t3026441313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetFsmVariable
struct  GetFsmVariable_t3000355774  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetFsmVariable::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetFsmVariable::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.GetFsmVariable::storeValue
	FsmVar_t2872592513 * ___storeValue_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetFsmVariable::everyFrame
	bool ___everyFrame_14;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.GetFsmVariable::cachedGO
	GameObject_t1756533147 * ___cachedGO_15;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.GetFsmVariable::sourceFsm
	PlayMakerFSM_t437737208 * ___sourceFsm_16;
	// HutongGames.PlayMaker.INamedVariable HutongGames.PlayMaker.Actions.GetFsmVariable::sourceVariable
	Il2CppObject * ___sourceVariable_17;
	// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.Actions.GetFsmVariable::targetVariable
	NamedVariable_t3026441313 * ___targetVariable_18;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetFsmVariable_t3000355774, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(GetFsmVariable_t3000355774, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_storeValue_13() { return static_cast<int32_t>(offsetof(GetFsmVariable_t3000355774, ___storeValue_13)); }
	inline FsmVar_t2872592513 * get_storeValue_13() const { return ___storeValue_13; }
	inline FsmVar_t2872592513 ** get_address_of_storeValue_13() { return &___storeValue_13; }
	inline void set_storeValue_13(FsmVar_t2872592513 * value)
	{
		___storeValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeValue_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GetFsmVariable_t3000355774, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}

	inline static int32_t get_offset_of_cachedGO_15() { return static_cast<int32_t>(offsetof(GetFsmVariable_t3000355774, ___cachedGO_15)); }
	inline GameObject_t1756533147 * get_cachedGO_15() const { return ___cachedGO_15; }
	inline GameObject_t1756533147 ** get_address_of_cachedGO_15() { return &___cachedGO_15; }
	inline void set_cachedGO_15(GameObject_t1756533147 * value)
	{
		___cachedGO_15 = value;
		Il2CppCodeGenWriteBarrier(&___cachedGO_15, value);
	}

	inline static int32_t get_offset_of_sourceFsm_16() { return static_cast<int32_t>(offsetof(GetFsmVariable_t3000355774, ___sourceFsm_16)); }
	inline PlayMakerFSM_t437737208 * get_sourceFsm_16() const { return ___sourceFsm_16; }
	inline PlayMakerFSM_t437737208 ** get_address_of_sourceFsm_16() { return &___sourceFsm_16; }
	inline void set_sourceFsm_16(PlayMakerFSM_t437737208 * value)
	{
		___sourceFsm_16 = value;
		Il2CppCodeGenWriteBarrier(&___sourceFsm_16, value);
	}

	inline static int32_t get_offset_of_sourceVariable_17() { return static_cast<int32_t>(offsetof(GetFsmVariable_t3000355774, ___sourceVariable_17)); }
	inline Il2CppObject * get_sourceVariable_17() const { return ___sourceVariable_17; }
	inline Il2CppObject ** get_address_of_sourceVariable_17() { return &___sourceVariable_17; }
	inline void set_sourceVariable_17(Il2CppObject * value)
	{
		___sourceVariable_17 = value;
		Il2CppCodeGenWriteBarrier(&___sourceVariable_17, value);
	}

	inline static int32_t get_offset_of_targetVariable_18() { return static_cast<int32_t>(offsetof(GetFsmVariable_t3000355774, ___targetVariable_18)); }
	inline NamedVariable_t3026441313 * get_targetVariable_18() const { return ___targetVariable_18; }
	inline NamedVariable_t3026441313 ** get_address_of_targetVariable_18() { return &___targetVariable_18; }
	inline void set_targetVariable_18(NamedVariable_t3026441313 * value)
	{
		___targetVariable_18 = value;
		Il2CppCodeGenWriteBarrier(&___targetVariable_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
