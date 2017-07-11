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
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetFsmVector2
struct  GetFsmVector2_t2206672881  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetFsmVector2::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetFsmVector2::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetFsmVector2::variableName
	FsmString_t2414474701 * ___variableName_13;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetFsmVector2::storeValue
	FsmVector2_t2430450063 * ___storeValue_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GetFsmVector2::everyFrame
	bool ___everyFrame_15;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.GetFsmVector2::goLastFrame
	GameObject_t1756533147 * ___goLastFrame_16;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.GetFsmVector2::fsm
	PlayMakerFSM_t437737208 * ___fsm_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetFsmVector2_t2206672881, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(GetFsmVector2_t2206672881, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_variableName_13() { return static_cast<int32_t>(offsetof(GetFsmVector2_t2206672881, ___variableName_13)); }
	inline FsmString_t2414474701 * get_variableName_13() const { return ___variableName_13; }
	inline FsmString_t2414474701 ** get_address_of_variableName_13() { return &___variableName_13; }
	inline void set_variableName_13(FsmString_t2414474701 * value)
	{
		___variableName_13 = value;
		Il2CppCodeGenWriteBarrier(&___variableName_13, value);
	}

	inline static int32_t get_offset_of_storeValue_14() { return static_cast<int32_t>(offsetof(GetFsmVector2_t2206672881, ___storeValue_14)); }
	inline FsmVector2_t2430450063 * get_storeValue_14() const { return ___storeValue_14; }
	inline FsmVector2_t2430450063 ** get_address_of_storeValue_14() { return &___storeValue_14; }
	inline void set_storeValue_14(FsmVector2_t2430450063 * value)
	{
		___storeValue_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeValue_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GetFsmVector2_t2206672881, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_goLastFrame_16() { return static_cast<int32_t>(offsetof(GetFsmVector2_t2206672881, ___goLastFrame_16)); }
	inline GameObject_t1756533147 * get_goLastFrame_16() const { return ___goLastFrame_16; }
	inline GameObject_t1756533147 ** get_address_of_goLastFrame_16() { return &___goLastFrame_16; }
	inline void set_goLastFrame_16(GameObject_t1756533147 * value)
	{
		___goLastFrame_16 = value;
		Il2CppCodeGenWriteBarrier(&___goLastFrame_16, value);
	}

	inline static int32_t get_offset_of_fsm_17() { return static_cast<int32_t>(offsetof(GetFsmVector2_t2206672881, ___fsm_17)); }
	inline PlayMakerFSM_t437737208 * get_fsm_17() const { return ___fsm_17; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsm_17() { return &___fsm_17; }
	inline void set_fsm_17(PlayMakerFSM_t437737208 * value)
	{
		___fsm_17 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
