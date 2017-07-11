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
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetParent
struct  SetParent_t2289020688  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetParent::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SetParent::parent
	FsmGameObject_t3097142863 * ___parent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetParent::resetLocalPosition
	FsmBool_t664485696 * ___resetLocalPosition_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetParent::resetLocalRotation
	FsmBool_t664485696 * ___resetLocalRotation_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetParent_t2289020688, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_parent_12() { return static_cast<int32_t>(offsetof(SetParent_t2289020688, ___parent_12)); }
	inline FsmGameObject_t3097142863 * get_parent_12() const { return ___parent_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_parent_12() { return &___parent_12; }
	inline void set_parent_12(FsmGameObject_t3097142863 * value)
	{
		___parent_12 = value;
		Il2CppCodeGenWriteBarrier(&___parent_12, value);
	}

	inline static int32_t get_offset_of_resetLocalPosition_13() { return static_cast<int32_t>(offsetof(SetParent_t2289020688, ___resetLocalPosition_13)); }
	inline FsmBool_t664485696 * get_resetLocalPosition_13() const { return ___resetLocalPosition_13; }
	inline FsmBool_t664485696 ** get_address_of_resetLocalPosition_13() { return &___resetLocalPosition_13; }
	inline void set_resetLocalPosition_13(FsmBool_t664485696 * value)
	{
		___resetLocalPosition_13 = value;
		Il2CppCodeGenWriteBarrier(&___resetLocalPosition_13, value);
	}

	inline static int32_t get_offset_of_resetLocalRotation_14() { return static_cast<int32_t>(offsetof(SetParent_t2289020688, ___resetLocalRotation_14)); }
	inline FsmBool_t664485696 * get_resetLocalRotation_14() const { return ___resetLocalRotation_14; }
	inline FsmBool_t664485696 ** get_address_of_resetLocalRotation_14() { return &___resetLocalRotation_14; }
	inline void set_resetLocalRotation_14(FsmBool_t664485696 * value)
	{
		___resetLocalRotation_14 = value;
		Il2CppCodeGenWriteBarrier(&___resetLocalRotation_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
