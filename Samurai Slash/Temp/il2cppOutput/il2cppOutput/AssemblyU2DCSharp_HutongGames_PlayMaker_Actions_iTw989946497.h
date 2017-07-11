#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_iT3900135744.h"
#include "AssemblyU2DCSharp_iTween_EaseType818674011.h"
#include "AssemblyU2DCSharp_iTween_LoopType1490651981.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_iT2764110305.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenMoveFrom
struct  iTweenMoveFrom_t989946497  : public iTweenFsmAction_t3900135744
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.iTweenMoveFrom::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_19;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.iTweenMoveFrom::id
	FsmString_t2414474701 * ___id_20;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.iTweenMoveFrom::transformPosition
	FsmGameObject_t3097142863 * ___transformPosition_21;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenMoveFrom::vectorPosition
	FsmVector3_t3996534004 * ___vectorPosition_22;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveFrom::time
	FsmFloat_t937133978 * ___time_23;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveFrom::delay
	FsmFloat_t937133978 * ___delay_24;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveFrom::speed
	FsmFloat_t937133978 * ___speed_25;
	// iTween/EaseType HutongGames.PlayMaker.Actions.iTweenMoveFrom::easeType
	int32_t ___easeType_26;
	// iTween/LoopType HutongGames.PlayMaker.Actions.iTweenMoveFrom::loopType
	int32_t ___loopType_27;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.iTweenMoveFrom::space
	int32_t ___space_28;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.iTweenMoveFrom::orientToPath
	FsmBool_t664485696 * ___orientToPath_29;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.iTweenMoveFrom::lookAtObject
	FsmGameObject_t3097142863 * ___lookAtObject_30;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenMoveFrom::lookAtVector
	FsmVector3_t3996534004 * ___lookAtVector_31;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveFrom::lookTime
	FsmFloat_t937133978 * ___lookTime_32;
	// HutongGames.PlayMaker.Actions.iTweenFsmAction/AxisRestriction HutongGames.PlayMaker.Actions.iTweenMoveFrom::axis
	int32_t ___axis_33;

public:
	inline static int32_t get_offset_of_gameObject_19() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___gameObject_19)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_19() const { return ___gameObject_19; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_19() { return &___gameObject_19; }
	inline void set_gameObject_19(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_19 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_19, value);
	}

	inline static int32_t get_offset_of_id_20() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___id_20)); }
	inline FsmString_t2414474701 * get_id_20() const { return ___id_20; }
	inline FsmString_t2414474701 ** get_address_of_id_20() { return &___id_20; }
	inline void set_id_20(FsmString_t2414474701 * value)
	{
		___id_20 = value;
		Il2CppCodeGenWriteBarrier(&___id_20, value);
	}

	inline static int32_t get_offset_of_transformPosition_21() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___transformPosition_21)); }
	inline FsmGameObject_t3097142863 * get_transformPosition_21() const { return ___transformPosition_21; }
	inline FsmGameObject_t3097142863 ** get_address_of_transformPosition_21() { return &___transformPosition_21; }
	inline void set_transformPosition_21(FsmGameObject_t3097142863 * value)
	{
		___transformPosition_21 = value;
		Il2CppCodeGenWriteBarrier(&___transformPosition_21, value);
	}

	inline static int32_t get_offset_of_vectorPosition_22() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___vectorPosition_22)); }
	inline FsmVector3_t3996534004 * get_vectorPosition_22() const { return ___vectorPosition_22; }
	inline FsmVector3_t3996534004 ** get_address_of_vectorPosition_22() { return &___vectorPosition_22; }
	inline void set_vectorPosition_22(FsmVector3_t3996534004 * value)
	{
		___vectorPosition_22 = value;
		Il2CppCodeGenWriteBarrier(&___vectorPosition_22, value);
	}

	inline static int32_t get_offset_of_time_23() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___time_23)); }
	inline FsmFloat_t937133978 * get_time_23() const { return ___time_23; }
	inline FsmFloat_t937133978 ** get_address_of_time_23() { return &___time_23; }
	inline void set_time_23(FsmFloat_t937133978 * value)
	{
		___time_23 = value;
		Il2CppCodeGenWriteBarrier(&___time_23, value);
	}

	inline static int32_t get_offset_of_delay_24() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___delay_24)); }
	inline FsmFloat_t937133978 * get_delay_24() const { return ___delay_24; }
	inline FsmFloat_t937133978 ** get_address_of_delay_24() { return &___delay_24; }
	inline void set_delay_24(FsmFloat_t937133978 * value)
	{
		___delay_24 = value;
		Il2CppCodeGenWriteBarrier(&___delay_24, value);
	}

	inline static int32_t get_offset_of_speed_25() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___speed_25)); }
	inline FsmFloat_t937133978 * get_speed_25() const { return ___speed_25; }
	inline FsmFloat_t937133978 ** get_address_of_speed_25() { return &___speed_25; }
	inline void set_speed_25(FsmFloat_t937133978 * value)
	{
		___speed_25 = value;
		Il2CppCodeGenWriteBarrier(&___speed_25, value);
	}

	inline static int32_t get_offset_of_easeType_26() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___easeType_26)); }
	inline int32_t get_easeType_26() const { return ___easeType_26; }
	inline int32_t* get_address_of_easeType_26() { return &___easeType_26; }
	inline void set_easeType_26(int32_t value)
	{
		___easeType_26 = value;
	}

	inline static int32_t get_offset_of_loopType_27() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___loopType_27)); }
	inline int32_t get_loopType_27() const { return ___loopType_27; }
	inline int32_t* get_address_of_loopType_27() { return &___loopType_27; }
	inline void set_loopType_27(int32_t value)
	{
		___loopType_27 = value;
	}

	inline static int32_t get_offset_of_space_28() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___space_28)); }
	inline int32_t get_space_28() const { return ___space_28; }
	inline int32_t* get_address_of_space_28() { return &___space_28; }
	inline void set_space_28(int32_t value)
	{
		___space_28 = value;
	}

	inline static int32_t get_offset_of_orientToPath_29() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___orientToPath_29)); }
	inline FsmBool_t664485696 * get_orientToPath_29() const { return ___orientToPath_29; }
	inline FsmBool_t664485696 ** get_address_of_orientToPath_29() { return &___orientToPath_29; }
	inline void set_orientToPath_29(FsmBool_t664485696 * value)
	{
		___orientToPath_29 = value;
		Il2CppCodeGenWriteBarrier(&___orientToPath_29, value);
	}

	inline static int32_t get_offset_of_lookAtObject_30() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___lookAtObject_30)); }
	inline FsmGameObject_t3097142863 * get_lookAtObject_30() const { return ___lookAtObject_30; }
	inline FsmGameObject_t3097142863 ** get_address_of_lookAtObject_30() { return &___lookAtObject_30; }
	inline void set_lookAtObject_30(FsmGameObject_t3097142863 * value)
	{
		___lookAtObject_30 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtObject_30, value);
	}

	inline static int32_t get_offset_of_lookAtVector_31() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___lookAtVector_31)); }
	inline FsmVector3_t3996534004 * get_lookAtVector_31() const { return ___lookAtVector_31; }
	inline FsmVector3_t3996534004 ** get_address_of_lookAtVector_31() { return &___lookAtVector_31; }
	inline void set_lookAtVector_31(FsmVector3_t3996534004 * value)
	{
		___lookAtVector_31 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtVector_31, value);
	}

	inline static int32_t get_offset_of_lookTime_32() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___lookTime_32)); }
	inline FsmFloat_t937133978 * get_lookTime_32() const { return ___lookTime_32; }
	inline FsmFloat_t937133978 ** get_address_of_lookTime_32() { return &___lookTime_32; }
	inline void set_lookTime_32(FsmFloat_t937133978 * value)
	{
		___lookTime_32 = value;
		Il2CppCodeGenWriteBarrier(&___lookTime_32, value);
	}

	inline static int32_t get_offset_of_axis_33() { return static_cast<int32_t>(offsetof(iTweenMoveFrom_t989946497, ___axis_33)); }
	inline int32_t get_axis_33() const { return ___axis_33; }
	inline int32_t* get_address_of_axis_33() { return &___axis_33; }
	inline void set_axis_33(int32_t value)
	{
		___axis_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
