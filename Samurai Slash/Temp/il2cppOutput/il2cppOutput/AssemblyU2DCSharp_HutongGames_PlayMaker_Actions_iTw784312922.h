#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_iT2764110305.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenMoveUpdate
struct  iTweenMoveUpdate_t784312922  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.iTweenMoveUpdate::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.iTweenMoveUpdate::transformPosition
	FsmGameObject_t3097142863 * ___transformPosition_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenMoveUpdate::vectorPosition
	FsmVector3_t3996534004 * ___vectorPosition_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveUpdate::time
	FsmFloat_t937133978 * ___time_14;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.iTweenMoveUpdate::space
	int32_t ___space_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.iTweenMoveUpdate::orientToPath
	FsmBool_t664485696 * ___orientToPath_16;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.iTweenMoveUpdate::lookAtObject
	FsmGameObject_t3097142863 * ___lookAtObject_17;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenMoveUpdate::lookAtVector
	FsmVector3_t3996534004 * ___lookAtVector_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveUpdate::lookTime
	FsmFloat_t937133978 * ___lookTime_19;
	// HutongGames.PlayMaker.Actions.iTweenFsmAction/AxisRestriction HutongGames.PlayMaker.Actions.iTweenMoveUpdate::axis
	int32_t ___axis_20;
	// System.Collections.Hashtable HutongGames.PlayMaker.Actions.iTweenMoveUpdate::hash
	Hashtable_t909839986 * ___hash_21;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.iTweenMoveUpdate::go
	GameObject_t1756533147 * ___go_22;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_transformPosition_12() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___transformPosition_12)); }
	inline FsmGameObject_t3097142863 * get_transformPosition_12() const { return ___transformPosition_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_transformPosition_12() { return &___transformPosition_12; }
	inline void set_transformPosition_12(FsmGameObject_t3097142863 * value)
	{
		___transformPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___transformPosition_12, value);
	}

	inline static int32_t get_offset_of_vectorPosition_13() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___vectorPosition_13)); }
	inline FsmVector3_t3996534004 * get_vectorPosition_13() const { return ___vectorPosition_13; }
	inline FsmVector3_t3996534004 ** get_address_of_vectorPosition_13() { return &___vectorPosition_13; }
	inline void set_vectorPosition_13(FsmVector3_t3996534004 * value)
	{
		___vectorPosition_13 = value;
		Il2CppCodeGenWriteBarrier(&___vectorPosition_13, value);
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___time_14)); }
	inline FsmFloat_t937133978 * get_time_14() const { return ___time_14; }
	inline FsmFloat_t937133978 ** get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(FsmFloat_t937133978 * value)
	{
		___time_14 = value;
		Il2CppCodeGenWriteBarrier(&___time_14, value);
	}

	inline static int32_t get_offset_of_space_15() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___space_15)); }
	inline int32_t get_space_15() const { return ___space_15; }
	inline int32_t* get_address_of_space_15() { return &___space_15; }
	inline void set_space_15(int32_t value)
	{
		___space_15 = value;
	}

	inline static int32_t get_offset_of_orientToPath_16() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___orientToPath_16)); }
	inline FsmBool_t664485696 * get_orientToPath_16() const { return ___orientToPath_16; }
	inline FsmBool_t664485696 ** get_address_of_orientToPath_16() { return &___orientToPath_16; }
	inline void set_orientToPath_16(FsmBool_t664485696 * value)
	{
		___orientToPath_16 = value;
		Il2CppCodeGenWriteBarrier(&___orientToPath_16, value);
	}

	inline static int32_t get_offset_of_lookAtObject_17() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___lookAtObject_17)); }
	inline FsmGameObject_t3097142863 * get_lookAtObject_17() const { return ___lookAtObject_17; }
	inline FsmGameObject_t3097142863 ** get_address_of_lookAtObject_17() { return &___lookAtObject_17; }
	inline void set_lookAtObject_17(FsmGameObject_t3097142863 * value)
	{
		___lookAtObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtObject_17, value);
	}

	inline static int32_t get_offset_of_lookAtVector_18() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___lookAtVector_18)); }
	inline FsmVector3_t3996534004 * get_lookAtVector_18() const { return ___lookAtVector_18; }
	inline FsmVector3_t3996534004 ** get_address_of_lookAtVector_18() { return &___lookAtVector_18; }
	inline void set_lookAtVector_18(FsmVector3_t3996534004 * value)
	{
		___lookAtVector_18 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtVector_18, value);
	}

	inline static int32_t get_offset_of_lookTime_19() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___lookTime_19)); }
	inline FsmFloat_t937133978 * get_lookTime_19() const { return ___lookTime_19; }
	inline FsmFloat_t937133978 ** get_address_of_lookTime_19() { return &___lookTime_19; }
	inline void set_lookTime_19(FsmFloat_t937133978 * value)
	{
		___lookTime_19 = value;
		Il2CppCodeGenWriteBarrier(&___lookTime_19, value);
	}

	inline static int32_t get_offset_of_axis_20() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___axis_20)); }
	inline int32_t get_axis_20() const { return ___axis_20; }
	inline int32_t* get_address_of_axis_20() { return &___axis_20; }
	inline void set_axis_20(int32_t value)
	{
		___axis_20 = value;
	}

	inline static int32_t get_offset_of_hash_21() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___hash_21)); }
	inline Hashtable_t909839986 * get_hash_21() const { return ___hash_21; }
	inline Hashtable_t909839986 ** get_address_of_hash_21() { return &___hash_21; }
	inline void set_hash_21(Hashtable_t909839986 * value)
	{
		___hash_21 = value;
		Il2CppCodeGenWriteBarrier(&___hash_21, value);
	}

	inline static int32_t get_offset_of_go_22() { return static_cast<int32_t>(offsetof(iTweenMoveUpdate_t784312922, ___go_22)); }
	inline GameObject_t1756533147 * get_go_22() const { return ___go_22; }
	inline GameObject_t1756533147 ** get_address_of_go_22() { return &___go_22; }
	inline void set_go_22(GameObject_t1756533147 * value)
	{
		___go_22 = value;
		Il2CppCodeGenWriteBarrier(&___go_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
