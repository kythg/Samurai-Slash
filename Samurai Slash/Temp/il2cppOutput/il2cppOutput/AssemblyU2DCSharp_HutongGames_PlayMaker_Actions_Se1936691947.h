#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com540501634.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetIsKinematic
struct  SetIsKinematic_t1936691947  : public ComponentAction_1_t540501634
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetIsKinematic::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetIsKinematic::isKinematic
	FsmBool_t664485696 * ___isKinematic_14;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetIsKinematic_t1936691947, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_isKinematic_14() { return static_cast<int32_t>(offsetof(SetIsKinematic_t1936691947, ___isKinematic_14)); }
	inline FsmBool_t664485696 * get_isKinematic_14() const { return ___isKinematic_14; }
	inline FsmBool_t664485696 ** get_address_of_isKinematic_14() { return &___isKinematic_14; }
	inline void set_isKinematic_14(FsmBool_t664485696 * value)
	{
		___isKinematic_14 = value;
		Il2CppCodeGenWriteBarrier(&___isKinematic_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
