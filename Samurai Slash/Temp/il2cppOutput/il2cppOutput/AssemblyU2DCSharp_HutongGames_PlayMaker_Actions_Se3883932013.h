#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetGameObject
struct  SetGameObject_t3883932013  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SetGameObject::variable
	FsmGameObject_t3097142863 * ___variable_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SetGameObject::gameObject
	FsmGameObject_t3097142863 * ___gameObject_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetGameObject::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_variable_11() { return static_cast<int32_t>(offsetof(SetGameObject_t3883932013, ___variable_11)); }
	inline FsmGameObject_t3097142863 * get_variable_11() const { return ___variable_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_variable_11() { return &___variable_11; }
	inline void set_variable_11(FsmGameObject_t3097142863 * value)
	{
		___variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___variable_11, value);
	}

	inline static int32_t get_offset_of_gameObject_12() { return static_cast<int32_t>(offsetof(SetGameObject_t3883932013, ___gameObject_12)); }
	inline FsmGameObject_t3097142863 * get_gameObject_12() const { return ___gameObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_12() { return &___gameObject_12; }
	inline void set_gameObject_12(FsmGameObject_t3097142863 * value)
	{
		___gameObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetGameObject_t3883932013, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
