#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FindGameObject
struct  FindGameObject_t2228016812  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FindGameObject::objectName
	FsmString_t2414474701 * ___objectName_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FindGameObject::withTag
	FsmString_t2414474701 * ___withTag_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.FindGameObject::store
	FsmGameObject_t3097142863 * ___store_13;

public:
	inline static int32_t get_offset_of_objectName_11() { return static_cast<int32_t>(offsetof(FindGameObject_t2228016812, ___objectName_11)); }
	inline FsmString_t2414474701 * get_objectName_11() const { return ___objectName_11; }
	inline FsmString_t2414474701 ** get_address_of_objectName_11() { return &___objectName_11; }
	inline void set_objectName_11(FsmString_t2414474701 * value)
	{
		___objectName_11 = value;
		Il2CppCodeGenWriteBarrier(&___objectName_11, value);
	}

	inline static int32_t get_offset_of_withTag_12() { return static_cast<int32_t>(offsetof(FindGameObject_t2228016812, ___withTag_12)); }
	inline FsmString_t2414474701 * get_withTag_12() const { return ___withTag_12; }
	inline FsmString_t2414474701 ** get_address_of_withTag_12() { return &___withTag_12; }
	inline void set_withTag_12(FsmString_t2414474701 * value)
	{
		___withTag_12 = value;
		Il2CppCodeGenWriteBarrier(&___withTag_12, value);
	}

	inline static int32_t get_offset_of_store_13() { return static_cast<int32_t>(offsetof(FindGameObject_t2228016812, ___store_13)); }
	inline FsmGameObject_t3097142863 * get_store_13() const { return ___store_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_store_13() { return &___store_13; }
	inline void set_store_13(FsmGameObject_t3097142863 * value)
	{
		___store_13 = value;
		Il2CppCodeGenWriteBarrier(&___store_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
