#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ComponentAction`1<System.Object>
struct  ComponentAction_1_t3291029034  : public FsmStateAction_t2862378169
{
public:
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.ComponentAction`1::cachedGameObject
	GameObject_t1756533147 * ___cachedGameObject_11;
	// T HutongGames.PlayMaker.Actions.ComponentAction`1::component
	Il2CppObject * ___component_12;

public:
	inline static int32_t get_offset_of_cachedGameObject_11() { return static_cast<int32_t>(offsetof(ComponentAction_1_t3291029034, ___cachedGameObject_11)); }
	inline GameObject_t1756533147 * get_cachedGameObject_11() const { return ___cachedGameObject_11; }
	inline GameObject_t1756533147 ** get_address_of_cachedGameObject_11() { return &___cachedGameObject_11; }
	inline void set_cachedGameObject_11(GameObject_t1756533147 * value)
	{
		___cachedGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___cachedGameObject_11, value);
	}

	inline static int32_t get_offset_of_component_12() { return static_cast<int32_t>(offsetof(ComponentAction_1_t3291029034, ___component_12)); }
	inline Il2CppObject * get_component_12() const { return ___component_12; }
	inline Il2CppObject ** get_address_of_component_12() { return &___component_12; }
	inline void set_component_12(Il2CppObject * value)
	{
		___component_12 = value;
		Il2CppCodeGenWriteBarrier(&___component_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
