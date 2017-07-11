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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EnableFSM
struct  EnableFSM_t3789319015  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.EnableFSM::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.EnableFSM::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EnableFSM::enable
	FsmBool_t664485696 * ___enable_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.EnableFSM::resetOnExit
	FsmBool_t664485696 * ___resetOnExit_14;
	// PlayMakerFSM HutongGames.PlayMaker.Actions.EnableFSM::fsmComponent
	PlayMakerFSM_t437737208 * ___fsmComponent_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(EnableFSM_t3789319015, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(EnableFSM_t3789319015, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_enable_13() { return static_cast<int32_t>(offsetof(EnableFSM_t3789319015, ___enable_13)); }
	inline FsmBool_t664485696 * get_enable_13() const { return ___enable_13; }
	inline FsmBool_t664485696 ** get_address_of_enable_13() { return &___enable_13; }
	inline void set_enable_13(FsmBool_t664485696 * value)
	{
		___enable_13 = value;
		Il2CppCodeGenWriteBarrier(&___enable_13, value);
	}

	inline static int32_t get_offset_of_resetOnExit_14() { return static_cast<int32_t>(offsetof(EnableFSM_t3789319015, ___resetOnExit_14)); }
	inline FsmBool_t664485696 * get_resetOnExit_14() const { return ___resetOnExit_14; }
	inline FsmBool_t664485696 ** get_address_of_resetOnExit_14() { return &___resetOnExit_14; }
	inline void set_resetOnExit_14(FsmBool_t664485696 * value)
	{
		___resetOnExit_14 = value;
		Il2CppCodeGenWriteBarrier(&___resetOnExit_14, value);
	}

	inline static int32_t get_offset_of_fsmComponent_15() { return static_cast<int32_t>(offsetof(EnableFSM_t3789319015, ___fsmComponent_15)); }
	inline PlayMakerFSM_t437737208 * get_fsmComponent_15() const { return ___fsmComponent_15; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsmComponent_15() { return &___fsmComponent_15; }
	inline void set_fsmComponent_15(PlayMakerFSM_t437737208 * value)
	{
		___fsmComponent_15 = value;
		Il2CppCodeGenWriteBarrier(&___fsmComponent_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
