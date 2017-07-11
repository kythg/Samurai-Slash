#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// PlayMakerFSM
struct PlayMakerFSM_t437737208;
// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetFsmState
struct  GetFsmState_t1862986167  : public FsmStateAction_t2862378169
{
public:
	// PlayMakerFSM HutongGames.PlayMaker.Actions.GetFsmState::fsmComponent
	PlayMakerFSM_t437737208 * ___fsmComponent_11;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetFsmState::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetFsmState::fsmName
	FsmString_t2414474701 * ___fsmName_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetFsmState::storeResult
	FsmString_t2414474701 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GetFsmState::everyFrame
	bool ___everyFrame_15;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.GetFsmState::fsm
	PlayMakerFSM_t437737208 * ___fsm_16;

public:
	inline static int32_t get_offset_of_fsmComponent_11() { return static_cast<int32_t>(offsetof(GetFsmState_t1862986167, ___fsmComponent_11)); }
	inline PlayMakerFSM_t437737208 * get_fsmComponent_11() const { return ___fsmComponent_11; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsmComponent_11() { return &___fsmComponent_11; }
	inline void set_fsmComponent_11(PlayMakerFSM_t437737208 * value)
	{
		___fsmComponent_11 = value;
		Il2CppCodeGenWriteBarrier(&___fsmComponent_11, value);
	}

	inline static int32_t get_offset_of_gameObject_12() { return static_cast<int32_t>(offsetof(GetFsmState_t1862986167, ___gameObject_12)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_12() const { return ___gameObject_12; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_12() { return &___gameObject_12; }
	inline void set_gameObject_12(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_12, value);
	}

	inline static int32_t get_offset_of_fsmName_13() { return static_cast<int32_t>(offsetof(GetFsmState_t1862986167, ___fsmName_13)); }
	inline FsmString_t2414474701 * get_fsmName_13() const { return ___fsmName_13; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_13() { return &___fsmName_13; }
	inline void set_fsmName_13(FsmString_t2414474701 * value)
	{
		___fsmName_13 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(GetFsmState_t1862986167, ___storeResult_14)); }
	inline FsmString_t2414474701 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmString_t2414474701 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmString_t2414474701 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GetFsmState_t1862986167, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_fsm_16() { return static_cast<int32_t>(offsetof(GetFsmState_t1862986167, ___fsm_16)); }
	inline PlayMakerFSM_t437737208 * get_fsm_16() const { return ___fsm_16; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsm_16() { return &___fsm_16; }
	inline void set_fsm_16(PlayMakerFSM_t437737208 * value)
	{
		___fsm_16 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
