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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAllFsmGameObject
struct  SetAllFsmGameObject_t4080893434  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetAllFsmGameObject::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// System.Boolean HutongGames.PlayMaker.Actions.SetAllFsmGameObject::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetAllFsmGameObject_t4080893434, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(SetAllFsmGameObject_t4080893434, ___everyFrame_12)); }
	inline bool get_everyFrame_12() const { return ___everyFrame_12; }
	inline bool* get_address_of_everyFrame_12() { return &___everyFrame_12; }
	inline void set_everyFrame_12(bool value)
	{
		___everyFrame_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
