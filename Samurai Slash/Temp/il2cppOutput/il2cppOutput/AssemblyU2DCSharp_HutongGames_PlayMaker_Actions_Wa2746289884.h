#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t3881993182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.WakeAllRigidBodies
struct  WakeAllRigidBodies_t2746289884  : public FsmStateAction_t2862378169
{
public:
	// System.Boolean HutongGames.PlayMaker.Actions.WakeAllRigidBodies::everyFrame
	bool ___everyFrame_11;
	// UnityEngine.Rigidbody[] HutongGames.PlayMaker.Actions.WakeAllRigidBodies::bodies
	RigidbodyU5BU5D_t3881993182* ___bodies_12;

public:
	inline static int32_t get_offset_of_everyFrame_11() { return static_cast<int32_t>(offsetof(WakeAllRigidBodies_t2746289884, ___everyFrame_11)); }
	inline bool get_everyFrame_11() const { return ___everyFrame_11; }
	inline bool* get_address_of_everyFrame_11() { return &___everyFrame_11; }
	inline void set_everyFrame_11(bool value)
	{
		___everyFrame_11 = value;
	}

	inline static int32_t get_offset_of_bodies_12() { return static_cast<int32_t>(offsetof(WakeAllRigidBodies_t2746289884, ___bodies_12)); }
	inline RigidbodyU5BU5D_t3881993182* get_bodies_12() const { return ___bodies_12; }
	inline RigidbodyU5BU5D_t3881993182** get_address_of_bodies_12() { return &___bodies_12; }
	inline void set_bodies_12(RigidbodyU5BU5D_t3881993182* value)
	{
		___bodies_12 = value;
		Il2CppCodeGenWriteBarrier(&___bodies_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
