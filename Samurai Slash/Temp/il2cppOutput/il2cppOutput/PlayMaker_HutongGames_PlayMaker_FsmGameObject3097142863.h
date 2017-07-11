#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_NamedVariable3026441313.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmGameObject
struct  FsmGameObject_t3097142863  : public NamedVariable_t3026441313
{
public:
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmGameObject::value
	GameObject_t1756533147 * ___value_5;

public:
	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(FsmGameObject_t3097142863, ___value_5)); }
	inline GameObject_t1756533147 * get_value_5() const { return ___value_5; }
	inline GameObject_t1756533147 ** get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(GameObject_t1756533147 * value)
	{
		___value_5 = value;
		Il2CppCodeGenWriteBarrier(&___value_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
