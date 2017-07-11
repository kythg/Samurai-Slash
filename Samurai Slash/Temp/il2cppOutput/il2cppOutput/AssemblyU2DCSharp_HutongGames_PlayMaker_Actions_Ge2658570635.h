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
// HutongGames.PlayMaker.FsmVar[]
struct FsmVarU5BU5D_t16885852;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;
// HutongGames.PlayMaker.INamedVariable[]
struct INamedVariableU5BU5D_t1966600163;
// HutongGames.PlayMaker.NamedVariable[]
struct NamedVariableU5BU5D_t2156269820;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetFsmVariables
struct  GetFsmVariables_t2658570635  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetFsmVariables::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetFsmVariables::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmVar[] HutongGames.PlayMaker.Actions.GetFsmVariables::getVariables
	FsmVarU5BU5D_t16885852* ___getVariables_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetFsmVariables::everyFrame
	bool ___everyFrame_14;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.GetFsmVariables::cachedGO
	GameObject_t1756533147 * ___cachedGO_15;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.GetFsmVariables::sourceFsm
	PlayMakerFSM_t437737208 * ___sourceFsm_16;
	// HutongGames.PlayMaker.INamedVariable[] HutongGames.PlayMaker.Actions.GetFsmVariables::sourceVariables
	INamedVariableU5BU5D_t1966600163* ___sourceVariables_17;
	// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.Actions.GetFsmVariables::targetVariables
	NamedVariableU5BU5D_t2156269820* ___targetVariables_18;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetFsmVariables_t2658570635, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(GetFsmVariables_t2658570635, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_getVariables_13() { return static_cast<int32_t>(offsetof(GetFsmVariables_t2658570635, ___getVariables_13)); }
	inline FsmVarU5BU5D_t16885852* get_getVariables_13() const { return ___getVariables_13; }
	inline FsmVarU5BU5D_t16885852** get_address_of_getVariables_13() { return &___getVariables_13; }
	inline void set_getVariables_13(FsmVarU5BU5D_t16885852* value)
	{
		___getVariables_13 = value;
		Il2CppCodeGenWriteBarrier(&___getVariables_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GetFsmVariables_t2658570635, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}

	inline static int32_t get_offset_of_cachedGO_15() { return static_cast<int32_t>(offsetof(GetFsmVariables_t2658570635, ___cachedGO_15)); }
	inline GameObject_t1756533147 * get_cachedGO_15() const { return ___cachedGO_15; }
	inline GameObject_t1756533147 ** get_address_of_cachedGO_15() { return &___cachedGO_15; }
	inline void set_cachedGO_15(GameObject_t1756533147 * value)
	{
		___cachedGO_15 = value;
		Il2CppCodeGenWriteBarrier(&___cachedGO_15, value);
	}

	inline static int32_t get_offset_of_sourceFsm_16() { return static_cast<int32_t>(offsetof(GetFsmVariables_t2658570635, ___sourceFsm_16)); }
	inline PlayMakerFSM_t437737208 * get_sourceFsm_16() const { return ___sourceFsm_16; }
	inline PlayMakerFSM_t437737208 ** get_address_of_sourceFsm_16() { return &___sourceFsm_16; }
	inline void set_sourceFsm_16(PlayMakerFSM_t437737208 * value)
	{
		___sourceFsm_16 = value;
		Il2CppCodeGenWriteBarrier(&___sourceFsm_16, value);
	}

	inline static int32_t get_offset_of_sourceVariables_17() { return static_cast<int32_t>(offsetof(GetFsmVariables_t2658570635, ___sourceVariables_17)); }
	inline INamedVariableU5BU5D_t1966600163* get_sourceVariables_17() const { return ___sourceVariables_17; }
	inline INamedVariableU5BU5D_t1966600163** get_address_of_sourceVariables_17() { return &___sourceVariables_17; }
	inline void set_sourceVariables_17(INamedVariableU5BU5D_t1966600163* value)
	{
		___sourceVariables_17 = value;
		Il2CppCodeGenWriteBarrier(&___sourceVariables_17, value);
	}

	inline static int32_t get_offset_of_targetVariables_18() { return static_cast<int32_t>(offsetof(GetFsmVariables_t2658570635, ___targetVariables_18)); }
	inline NamedVariableU5BU5D_t2156269820* get_targetVariables_18() const { return ___targetVariables_18; }
	inline NamedVariableU5BU5D_t2156269820** get_address_of_targetVariables_18() { return &___targetVariables_18; }
	inline void set_targetVariables_18(NamedVariableU5BU5D_t2156269820* value)
	{
		___targetVariables_18 = value;
		Il2CppCodeGenWriteBarrier(&___targetVariables_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
