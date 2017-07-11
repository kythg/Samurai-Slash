#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmGameObject[]
struct FsmGameObjectU5BU5D_t3601875862;
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SelectRandomGameObject
struct  SelectRandomGameObject_t435281682  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject[] HutongGames.PlayMaker.Actions.SelectRandomGameObject::gameObjects
	FsmGameObjectU5BU5D_t3601875862* ___gameObjects_11;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.SelectRandomGameObject::weights
	FsmFloatU5BU5D_t4177556671* ___weights_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.SelectRandomGameObject::storeGameObject
	FsmGameObject_t3097142863 * ___storeGameObject_13;

public:
	inline static int32_t get_offset_of_gameObjects_11() { return static_cast<int32_t>(offsetof(SelectRandomGameObject_t435281682, ___gameObjects_11)); }
	inline FsmGameObjectU5BU5D_t3601875862* get_gameObjects_11() const { return ___gameObjects_11; }
	inline FsmGameObjectU5BU5D_t3601875862** get_address_of_gameObjects_11() { return &___gameObjects_11; }
	inline void set_gameObjects_11(FsmGameObjectU5BU5D_t3601875862* value)
	{
		___gameObjects_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjects_11, value);
	}

	inline static int32_t get_offset_of_weights_12() { return static_cast<int32_t>(offsetof(SelectRandomGameObject_t435281682, ___weights_12)); }
	inline FsmFloatU5BU5D_t4177556671* get_weights_12() const { return ___weights_12; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_weights_12() { return &___weights_12; }
	inline void set_weights_12(FsmFloatU5BU5D_t4177556671* value)
	{
		___weights_12 = value;
		Il2CppCodeGenWriteBarrier(&___weights_12, value);
	}

	inline static int32_t get_offset_of_storeGameObject_13() { return static_cast<int32_t>(offsetof(SelectRandomGameObject_t435281682, ___storeGameObject_13)); }
	inline FsmGameObject_t3097142863 * get_storeGameObject_13() const { return ___storeGameObject_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeGameObject_13() { return &___storeGameObject_13; }
	inline void set_storeGameObject_13(FsmGameObject_t3097142863 * value)
	{
		___storeGameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeGameObject_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
