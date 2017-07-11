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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetFsmString
struct  SetFsmString_t4065550381  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetFsmString::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetFsmString::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetFsmString::variableName
	FsmString_t2414474701 * ___variableName_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetFsmString::setValue
	FsmString_t2414474701 * ___setValue_14;
	// System.Boolean HutongGames.PlayMaker.Actions.SetFsmString::everyFrame
	bool ___everyFrame_15;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.SetFsmString::goLastFrame
	GameObject_t1756533147 * ___goLastFrame_16;
	// System.String HutongGames.PlayMaker.Actions.SetFsmString::fsmNameLastFrame
	String_t* ___fsmNameLastFrame_17;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.SetFsmString::fsm
	PlayMakerFSM_t437737208 * ___fsm_18;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetFsmString_t4065550381, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(SetFsmString_t4065550381, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_variableName_13() { return static_cast<int32_t>(offsetof(SetFsmString_t4065550381, ___variableName_13)); }
	inline FsmString_t2414474701 * get_variableName_13() const { return ___variableName_13; }
	inline FsmString_t2414474701 ** get_address_of_variableName_13() { return &___variableName_13; }
	inline void set_variableName_13(FsmString_t2414474701 * value)
	{
		___variableName_13 = value;
		Il2CppCodeGenWriteBarrier(&___variableName_13, value);
	}

	inline static int32_t get_offset_of_setValue_14() { return static_cast<int32_t>(offsetof(SetFsmString_t4065550381, ___setValue_14)); }
	inline FsmString_t2414474701 * get_setValue_14() const { return ___setValue_14; }
	inline FsmString_t2414474701 ** get_address_of_setValue_14() { return &___setValue_14; }
	inline void set_setValue_14(FsmString_t2414474701 * value)
	{
		___setValue_14 = value;
		Il2CppCodeGenWriteBarrier(&___setValue_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(SetFsmString_t4065550381, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_goLastFrame_16() { return static_cast<int32_t>(offsetof(SetFsmString_t4065550381, ___goLastFrame_16)); }
	inline GameObject_t1756533147 * get_goLastFrame_16() const { return ___goLastFrame_16; }
	inline GameObject_t1756533147 ** get_address_of_goLastFrame_16() { return &___goLastFrame_16; }
	inline void set_goLastFrame_16(GameObject_t1756533147 * value)
	{
		___goLastFrame_16 = value;
		Il2CppCodeGenWriteBarrier(&___goLastFrame_16, value);
	}

	inline static int32_t get_offset_of_fsmNameLastFrame_17() { return static_cast<int32_t>(offsetof(SetFsmString_t4065550381, ___fsmNameLastFrame_17)); }
	inline String_t* get_fsmNameLastFrame_17() const { return ___fsmNameLastFrame_17; }
	inline String_t** get_address_of_fsmNameLastFrame_17() { return &___fsmNameLastFrame_17; }
	inline void set_fsmNameLastFrame_17(String_t* value)
	{
		___fsmNameLastFrame_17 = value;
		Il2CppCodeGenWriteBarrier(&___fsmNameLastFrame_17, value);
	}

	inline static int32_t get_offset_of_fsm_18() { return static_cast<int32_t>(offsetof(SetFsmString_t4065550381, ___fsm_18)); }
	inline PlayMakerFSM_t437737208 * get_fsm_18() const { return ___fsm_18; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsm_18() { return &___fsm_18; }
	inline void set_fsm_18(PlayMakerFSM_t437737208 * value)
	{
		___fsm_18 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
