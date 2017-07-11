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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CreateObject
struct  CreateObject_t1397922645  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.CreateObject::gameObject
	FsmGameObject_t3097142863 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.CreateObject::spawnPoint
	FsmGameObject_t3097142863 * ___spawnPoint_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.CreateObject::position
	FsmVector3_t3996534004 * ___position_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.CreateObject::rotation
	FsmVector3_t3996534004 * ___rotation_14;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.CreateObject::storeObject
	FsmGameObject_t3097142863 * ___storeObject_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(CreateObject_t1397922645, ___gameObject_11)); }
	inline FsmGameObject_t3097142863 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmGameObject_t3097142863 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_spawnPoint_12() { return static_cast<int32_t>(offsetof(CreateObject_t1397922645, ___spawnPoint_12)); }
	inline FsmGameObject_t3097142863 * get_spawnPoint_12() const { return ___spawnPoint_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_spawnPoint_12() { return &___spawnPoint_12; }
	inline void set_spawnPoint_12(FsmGameObject_t3097142863 * value)
	{
		___spawnPoint_12 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoint_12, value);
	}

	inline static int32_t get_offset_of_position_13() { return static_cast<int32_t>(offsetof(CreateObject_t1397922645, ___position_13)); }
	inline FsmVector3_t3996534004 * get_position_13() const { return ___position_13; }
	inline FsmVector3_t3996534004 ** get_address_of_position_13() { return &___position_13; }
	inline void set_position_13(FsmVector3_t3996534004 * value)
	{
		___position_13 = value;
		Il2CppCodeGenWriteBarrier(&___position_13, value);
	}

	inline static int32_t get_offset_of_rotation_14() { return static_cast<int32_t>(offsetof(CreateObject_t1397922645, ___rotation_14)); }
	inline FsmVector3_t3996534004 * get_rotation_14() const { return ___rotation_14; }
	inline FsmVector3_t3996534004 ** get_address_of_rotation_14() { return &___rotation_14; }
	inline void set_rotation_14(FsmVector3_t3996534004 * value)
	{
		___rotation_14 = value;
		Il2CppCodeGenWriteBarrier(&___rotation_14, value);
	}

	inline static int32_t get_offset_of_storeObject_15() { return static_cast<int32_t>(offsetof(CreateObject_t1397922645, ___storeObject_15)); }
	inline FsmGameObject_t3097142863 * get_storeObject_15() const { return ___storeObject_15; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeObject_15() { return &___storeObject_15; }
	inline void set_storeObject_15(FsmGameObject_t3097142863 * value)
	{
		___storeObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeObject_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
