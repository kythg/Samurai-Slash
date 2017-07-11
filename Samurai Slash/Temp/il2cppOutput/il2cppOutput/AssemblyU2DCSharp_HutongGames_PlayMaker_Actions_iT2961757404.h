﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_iT2764110305.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenLookUpdate
struct  iTweenLookUpdate_t2961757404  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.iTweenLookUpdate::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.iTweenLookUpdate::transformTarget
	FsmGameObject_t3097142863 * ___transformTarget_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenLookUpdate::vectorTarget
	FsmVector3_t3996534004 * ___vectorTarget_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenLookUpdate::time
	FsmFloat_t937133978 * ___time_14;
	// HutongGames.PlayMaker.Actions.iTweenFsmAction/AxisRestriction HutongGames.PlayMaker.Actions.iTweenLookUpdate::axis
	int32_t ___axis_15;
	// System.Collections.Hashtable HutongGames.PlayMaker.Actions.iTweenLookUpdate::hash
	Hashtable_t909839986 * ___hash_16;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.iTweenLookUpdate::go
	GameObject_t1756533147 * ___go_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(iTweenLookUpdate_t2961757404, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_transformTarget_12() { return static_cast<int32_t>(offsetof(iTweenLookUpdate_t2961757404, ___transformTarget_12)); }
	inline FsmGameObject_t3097142863 * get_transformTarget_12() const { return ___transformTarget_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_transformTarget_12() { return &___transformTarget_12; }
	inline void set_transformTarget_12(FsmGameObject_t3097142863 * value)
	{
		___transformTarget_12 = value;
		Il2CppCodeGenWriteBarrier(&___transformTarget_12, value);
	}

	inline static int32_t get_offset_of_vectorTarget_13() { return static_cast<int32_t>(offsetof(iTweenLookUpdate_t2961757404, ___vectorTarget_13)); }
	inline FsmVector3_t3996534004 * get_vectorTarget_13() const { return ___vectorTarget_13; }
	inline FsmVector3_t3996534004 ** get_address_of_vectorTarget_13() { return &___vectorTarget_13; }
	inline void set_vectorTarget_13(FsmVector3_t3996534004 * value)
	{
		___vectorTarget_13 = value;
		Il2CppCodeGenWriteBarrier(&___vectorTarget_13, value);
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(iTweenLookUpdate_t2961757404, ___time_14)); }
	inline FsmFloat_t937133978 * get_time_14() const { return ___time_14; }
	inline FsmFloat_t937133978 ** get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(FsmFloat_t937133978 * value)
	{
		___time_14 = value;
		Il2CppCodeGenWriteBarrier(&___time_14, value);
	}

	inline static int32_t get_offset_of_axis_15() { return static_cast<int32_t>(offsetof(iTweenLookUpdate_t2961757404, ___axis_15)); }
	inline int32_t get_axis_15() const { return ___axis_15; }
	inline int32_t* get_address_of_axis_15() { return &___axis_15; }
	inline void set_axis_15(int32_t value)
	{
		___axis_15 = value;
	}

	inline static int32_t get_offset_of_hash_16() { return static_cast<int32_t>(offsetof(iTweenLookUpdate_t2961757404, ___hash_16)); }
	inline Hashtable_t909839986 * get_hash_16() const { return ___hash_16; }
	inline Hashtable_t909839986 ** get_address_of_hash_16() { return &___hash_16; }
	inline void set_hash_16(Hashtable_t909839986 * value)
	{
		___hash_16 = value;
		Il2CppCodeGenWriteBarrier(&___hash_16, value);
	}

	inline static int32_t get_offset_of_go_17() { return static_cast<int32_t>(offsetof(iTweenLookUpdate_t2961757404, ___go_17)); }
	inline GameObject_t1756533147 * get_go_17() const { return ___go_17; }
	inline GameObject_t1756533147 ** get_address_of_go_17() { return &___go_17; }
	inline void set_go_17(GameObject_t1756533147 * value)
	{
		___go_17 = value;
		Il2CppCodeGenWriteBarrier(&___go_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
